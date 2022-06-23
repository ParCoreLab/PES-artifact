//clock_t start, end;
        //double cpu_time_used;

        int ret;
        //int fd;
        int mmap_pages=1+MMAP_DATA_SIZE;

        struct perf_event_attr pe;

        struct sigaction sa;

        memset(&sa, 0, sizeof(struct sigaction));
        sa.sa_sigaction = our_handler;
        sa.sa_flags = SA_SIGINFO;

        if (sigaction( SIGIO, &sa, NULL) < 0) {
                fprintf(stderr,"Error setting up signal handler\n");
                exit(1);
        }

	memset(&pe,0,sizeof(struct perf_event_attr));

        sample_type=PERF_SAMPLE_IP|PERF_SAMPLE_ADDR;

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        /* INST_RETIRED.PREC_DIST */
        pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

	fd=perf_event_open(&pe,0,-1,-1,0);
        if (fd<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0);

        fcntl(fd, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
	//fcntl(fd, F_SETSIG, SIGIO);
        //fcntl(fd, F_SETOWN,getpid());	

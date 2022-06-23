	clock_t start, end;
        double cpu_time_used;

        int ret;
        //int fd;
        int mmap_pages=1+MMAP_DATA_SIZE;

        struct perf_event_attr pe;
	struct perf_event_attr pe1;

        struct sigaction sa;

        memset(&sa, 0, sizeof(struct sigaction));
        sa.sa_sigaction = our_handler;
        sa.sa_flags = SA_SIGINFO;

        if (sigaction( SIGIO, &sa, NULL) < 0) {
                fprintf(stderr,"Error setting up signal handler\n");
                exit(1);
        }

        sample_type=PERF_SAMPLE_IP|PERF_SAMPLE_ADDR;

//event 1
// from here
	memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x81d0;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

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
// until here

//event 2
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x82d0;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd1=perf_event_open(&pe,0,-1,-1,0);
        if (fd1<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd1, 0);

        fcntl(fd1, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        //fcntl(fd1, F_SETSIG, SIGIO);
        //fcntl(fd1, F_SETOWN,getpid());
// until here
//#if 0
//event 3
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x01d1;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd2=perf_event_open(&pe,0,-1,-1,0);
        if (fd2<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd2, 0);

        fcntl(fd2, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        //fcntl(fd2, F_SETSIG, SIGIO);
        //fcntl(fd2, F_SETOWN,getpid());
// until here
//event 4
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x01c4;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd3=perf_event_open(&pe,0,-1,-1,0);
        if (fd3<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd3, 0);

        fcntl(fd3, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        //fcntl(fd3, F_SETSIG, SIGIO);
        //fcntl(fd3, F_SETOWN,getpid());
// until here
#if 0
//event 5
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x20c4;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd4=perf_event_open(&pe,0,-1,-1,0);
        if (fd4<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd4, 0);

        fcntl(fd4, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd4, F_SETSIG, SIGIO);
        //fcntl(fd4, F_SETOWN,getpid());
// until here
//event 6
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x01c5;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd5=perf_event_open(&pe,0,-1,-1,0);
        if (fd5<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd5, 0);

        fcntl(fd5, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd5, F_SETSIG, SIGIO);
        //fcntl(fd5, F_SETOWN,getpid());
// until here
//event 7
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x08d1;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd6=perf_event_open(&pe,0,-1,-1,0);
        if (fd6<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd6, 0);

        fcntl(fd6, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd6, F_SETSIG, SIGIO);
        //fcntl(fd6, F_SETOWN,getpid());
// until here
//event 8
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x02d1;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd7=perf_event_open(&pe,0,-1,-1,0);
        if (fd7<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd7, 0);

        fcntl(fd7, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd7, F_SETSIG, SIGIO);
        //fcntl(fd7, F_SETOWN,getpid());
// until here
//#if 0
//event 9
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x20c5;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd8=perf_event_open(&pe,0,-1,-1,0);
        if (fd8<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd8, 0);

        fcntl(fd8, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd8, F_SETSIG, SIGIO);
        //fcntl(fd8, F_SETOWN,getpid());
// until here
//event 10
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x10d1;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd9=perf_event_open(&pe,0,-1,-1,0);
        if (fd9<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd9, 0);

        fcntl(fd9, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd9, F_SETSIG, SIGIO);
        //fcntl(fd9, F_SETOWN,getpid());
// until here
//event 11
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x04d1;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd10=perf_event_open(&pe,0,-1,-1,0);
        if (fd10<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd10, 0);

        fcntl(fd10, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd10, F_SETSIG, SIGIO);
        //fcntl(fd10, F_SETOWN,getpid());
// until here
//event 12
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x40c4;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd11=perf_event_open(&pe,0,-1,-1,0);
        if (fd11<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd11, 0);

        fcntl(fd11, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd11, F_SETSIG, SIGIO);
        //fcntl(fd11, F_SETOWN,getpid());
// until here
//event 13
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x20d1;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd12=perf_event_open(&pe,0,-1,-1,0);
        if (fd12<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd12, 0);

        fcntl(fd12, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd12, F_SETSIG, SIGIO);
        //fcntl(fd12, F_SETOWN,getpid());
// until here
//event 14
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x08d2;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd13=perf_event_open(&pe,0,-1,-1,0);
        if (fd13<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd13, 0);

        fcntl(fd13, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd13, F_SETSIG, SIGIO);
        //fcntl(fd13, F_SETOWN,getpid());
// until here
//event 15
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x01d2;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd14=perf_event_open(&pe,0,-1,-1,0);
        if (fd14<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd14, 0);

        fcntl(fd14, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd14, F_SETSIG, SIGIO);
        //fcntl(fd14, F_SETOWN,getpid());
// until here
//event 16
// from here
        memset(&pe,0,sizeof(struct perf_event_attr));

        pe.type=PERF_TYPE_RAW;
        pe.size=sizeof(struct perf_event_attr);

        //pe.config = 0x08d1;
        pe.config = 0x02d2;
        /* INST_RETIRED.PREC_DIST */
        //pe.config = 0x01c0;

        pe.sample_period=SAMPLE_PERIOD;
        pe.sample_type=sample_type;

        pe.disabled=1;
        pe.pinned=1;
        pe.exclude_kernel=1;
        pe.exclude_hv=1;
        pe.wakeup_events=1;
        pe.watermark=0;
        pe.precise_ip=2;

        fd15=perf_event_open(&pe,0,-1,-1,0);
        if (fd15<0) {
                fprintf(stderr,"Problem opening leader %s\n",
                        strerror(errno));
                        //test_fail(test_string);
        }

        our_mmap= (char*) mmap(NULL, mmap_pages*4096,
                PROT_READ|PROT_WRITE, MAP_SHARED, fd15, 0);

        fcntl(fd15, F_SETFL, O_RDWR|O_NONBLOCK|O_ASYNC);
        fcntl(fd15, F_SETSIG, SIGIO);
        //fcntl(fd15, F_SETOWN,getpid());
// until here
#endif

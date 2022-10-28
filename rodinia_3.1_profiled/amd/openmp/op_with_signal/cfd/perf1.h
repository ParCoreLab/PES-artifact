//clock_t start, end;
        //double cpu_time_used;

        char filename [64];

        int num_cpus = get_nprocs_conf();
        int num_online_cpus = get_nprocs();
        int nopfds = 0;

        pid_t cpid;
        int cpu;
        int * fd = (int *) calloc(num_cpus, sizeof(int));
        buffer_size = BUFFER_SIZE_B;
        set_global_op_sample_rate(100000);

        struct sigaction act;
        sigemptyset(&act.sa_mask);
        act.sa_flags = (SA_SIGINFO | SA_RESTART);
        act.sa_sigaction = sig_event_handler;
        sigaction(SIGNEW, &act, NULL);

	my_id = omp_get_thread_num();
                n_op_samples[my_id] = 0;
                n_lost_op_samples[my_id] = 0;
                global_buffer[my_id] = (char *) malloc(buffer_size);



                sprintf(filename, "/dev/cpu/%d/ibs/op", my_id);
                fd[my_id] = open(filename, O_RDONLY | O_NONBLOCK);

                if (fd[my_id] < 0) {
                        fprintf(stderr, "Could not open %s\n", filename);
                        //goto END;
                        //continue;
                }

                ioctl(fd[my_id], SET_BUFFER_SIZE, buffer_size);
		ioctl(fd[my_id], ANY_MICRO_OP);
                //ioctl(fd[cpu], SET_POLL_SIZE, poll_size / sizeof(ibs_op_t));
                ioctl(fd[my_id], SET_MAX_CNT, op_cnt_max_to_set);
#if 0
                if (ioctl(fd[my_id], IBS_ENABLE)) {
                        fprintf(stderr, "IBS op enable failed on cpu %d\n", my_id);
                        goto END;
                        //continue;
                }
                //for (int i = 0; i < nopfds; i++)
                ioctl(fd[my_id], RESET_BUFFER);
#endif
                ioctl(fd[my_id], REG_CURRENT_PROCESS);
                ioctl(fd[my_id], ASSIGN_FD, fd[my_id]);

                //ioctl(fd[my_id], RESET_BUFFER);

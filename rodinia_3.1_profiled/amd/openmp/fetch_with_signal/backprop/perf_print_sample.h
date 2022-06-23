END:
		fprintf(stderr, "number of received OS signals: %d\n", interrupt_count);
                fprintf(stderr, "number of sampling interrupts: %d\n", ioctl(fd[my_id], GET_FETCH_SAMPLE_COUNT));
                fprintf(stderr, "number of sent OS signals: %d\n", ioctl(fd[my_id], GET_SIGNAL_COUNT));	
                close(fd[my_id]);
                fprintf(stderr, "n_op_samples: %d in thread %d\n", n_op_samples[my_id], my_id);
                fprintf(stderr, "n_lost_op_samples: %d\n", n_lost_op_samples[my_id]);

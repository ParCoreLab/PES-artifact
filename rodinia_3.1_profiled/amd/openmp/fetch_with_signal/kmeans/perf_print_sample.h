END:
	fprintf(stderr, "number of sampling interrupts: %d\n", ioctl(fd[my_id], GET_LOST));
                close(fd[my_id]);
                fprintf(stderr, "n_op_samples: %d in thread %d\n", n_op_samples[my_id], my_id);
                fprintf(stderr, "n_lost_op_samples: %d\n", n_lost_op_samples[my_id]);

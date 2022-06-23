
		ioctl(fd[my_id], RESET_BUFFER);
//#if 0
if (ioctl(fd[my_id], IBS_ENABLE)) {
                        fprintf(stderr, "IBS op enable failed on cpu %d\n", my_id);
                        //goto END;
                        //continue;
                }
//#endif

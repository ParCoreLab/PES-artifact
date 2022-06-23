ioctl(fd, PERF_EVENT_IOC_RESET, 0);
//#if 0
        ret=ioctl(fd, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
	//ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);

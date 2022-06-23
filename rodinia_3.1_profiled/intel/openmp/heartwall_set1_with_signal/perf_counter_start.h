ioctl(fd, PERF_EVENT_IOC_RESET, 0);
ioctl(fd1, PERF_EVENT_IOC_RESET, 0);
#if 0
ioctl(fd2, PERF_EVENT_IOC_RESET, 0);
ioctl(fd3, PERF_EVENT_IOC_RESET, 0);
//#if 0
ioctl(fd4, PERF_EVENT_IOC_RESET, 0);
ioctl(fd5, PERF_EVENT_IOC_RESET, 0);
ioctl(fd6, PERF_EVENT_IOC_RESET, 0);
ioctl(fd7, PERF_EVENT_IOC_RESET, 0);
//#if 0
ioctl(fd8, PERF_EVENT_IOC_RESET, 0);
ioctl(fd9, PERF_EVENT_IOC_RESET, 0);
//#if 0
ioctl(fd10, PERF_EVENT_IOC_RESET, 0);
ioctl(fd11, PERF_EVENT_IOC_RESET, 0);
//#if 0
ioctl(fd12, PERF_EVENT_IOC_RESET, 0);
ioctl(fd13, PERF_EVENT_IOC_RESET, 0);
ioctl(fd14, PERF_EVENT_IOC_RESET, 0);
ioctl(fd15, PERF_EVENT_IOC_RESET, 0);
#endif
//#if 0
	//fprintf(stderr, "counter 1 is initialized\n");
        ret=ioctl(fd, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
//#if 0
	//fprintf(stderr, "counter 2 is initialized\n");
	ret=ioctl(fd1, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }	
//#endif
#if 0
        //fprintf(stderr, "counter 2 is initialized\n");
        ret=ioctl(fd2, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
//#if 0
        //fprintf(stderr, "counter 2 is initialized\n");
        ret=ioctl(fd3, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#if 0
//#endif
	//ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);
	//ioctl(fd, PERF_EVENT_IOC_PEBS_SAMPLE_COUNT, 0);
        ret=ioctl(fd4, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
        ret=ioctl(fd5, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
        ret=ioctl(fd6, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
        ret=ioctl(fd7, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
//#if 0
	ret=ioctl(fd8, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
//#if 0
        //fprintf(stderr, "counter 2 is initialized\n");
        ret=ioctl(fd9, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }

	ret=ioctl(fd10, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
//#if 0
        //fprintf(stderr, "counter 2 is initialized\n");
        ret=ioctl(fd11, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }

	ret=ioctl(fd12, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
//#if 0
        //fprintf(stderr, "counter 2 is initialized\n");
        ret=ioctl(fd13, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }

	ret=ioctl(fd14, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
//#endif
//#if 0
        //fprintf(stderr, "counter 2 is initialized\n");
        ret=ioctl(fd15, PERF_EVENT_IOC_ENABLE,0);

        if (ret<0) {
                fprintf(stderr,"Error with PERF_EVENT_IOC_ENABLE "
                        "of group leader: %d %s\n",
                        errno,strerror(errno));
                exit(1);
        }
#endif

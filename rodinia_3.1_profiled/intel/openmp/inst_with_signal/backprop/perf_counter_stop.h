//int pebs_count = ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);
ret=ioctl(fd, PERF_EVENT_IOC_REFRESH,0);

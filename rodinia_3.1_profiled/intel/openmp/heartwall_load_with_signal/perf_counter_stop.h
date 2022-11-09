//int pebs_count = ioctl(fd, PERF_EVENT_IOC_PEBS_INTERRUPT_COUNT, 0);
//int pebs_count1 = ioctl(fd, PERF_EVENT_IOC_PEBS_SAMPLE_COUNT, 0);
ret=ioctl(fd, PERF_EVENT_IOC_REFRESH,0);
//ret=ioctl(fd1, PERF_EVENT_IOC_REFRESH,0);
#if 0
ret=ioctl(fd2, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd3, PERF_EVENT_IOC_REFRESH,0);
//#if 0
ret=ioctl(fd4, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd5, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd6, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd7, PERF_EVENT_IOC_REFRESH,0);

ret=ioctl(fd8, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd9, PERF_EVENT_IOC_REFRESH,0);
//#if 0
ret=ioctl(fd10, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd11, PERF_EVENT_IOC_REFRESH,0);
////#if 0
ret=ioctl(fd12, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd13, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd14, PERF_EVENT_IOC_REFRESH,0);
ret=ioctl(fd15, PERF_EVENT_IOC_REFRESH,0);
#endif

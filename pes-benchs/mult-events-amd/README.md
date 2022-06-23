#How to count the occurences of each event
1. Clone the modified Linux kernel module using the following command

git clone https://github.com/msasongko17/AMD_IBS_Toolkit
 
2. Install the Linux kernel module by typing the following commands in the AMD_IBS_Toolkit/driver directory

make
sudo ./install_ibs_driver.sh

3. Compile the benchmark by typing the following command in case your compiler is gcc

gcc mult-events.c -o mult-events -fopenmp 

3. Monitor the events by using the following commands.

GOMP_CPU_AFFINITY="0" OMP_NUM_THREADS=1 <path-to-Linux-kernel-module-code>/AMD_IBS_Toolkit/tools/ibs_monitor/ibs_monitor -o output_log -r 100000 ./mult-events
<path-to-Linux-kernel-module-code>/AMD_IBS_Toolkit/tools/ibs_decoder/ibs_decoder -i output_log -o out.csv

Event counts are printed on the screen and also available in out.csv

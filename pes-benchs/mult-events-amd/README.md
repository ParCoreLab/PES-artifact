#How to count the occurences of each event
1. Clone the modified Linux kernel module using the following command

git clone https://github.com/msasongko17/AMD_IBS_Toolkit
 
2. Install the Linux kernel module by typing the following commands in the AMD_IBS_Toolkit/driver directory

git checkout no-signal-delivery
make
sudo ./install_ibs_driver.sh

3. Compile the benchmark by typing the following command in case your compiler is gcc

make install

3. Run the profiled code by running the following command.

make run5x

Event counts are printed on the mult_events_log file.

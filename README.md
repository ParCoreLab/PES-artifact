# pes-artifact

## Publication:

* M. A. Sasongko, M. Chabbi, P. H. J. Kelly and D. Unat, "Precise Event Sampling on AMD Versus Intel: Quantitative and Qualitative Comparison," in IEEE Transactions on Parallel and Distributed Systems, vol. 34, no. 5, pp. 1594-1608, May 2023, https://doi.org/10.1109/TPDS.2023.3257105

How to reproduce our experiment results in an Intel machine:

1. If you run Ubuntu, install all the dependencies to install a Linux kernel by running the following commands:

sudo apt-get build-dep linux linux-image-$(uname -r)

sudo apt-get install libncurses-dev gawk flex bison openssl libssl-dev dkms libelf-dev libudev-dev libpci-dev libiberty-dev autoconf

sudo apt install kexec-tools

2. Retrieve the modified Linux kernel and switch to the modified branch:

git clone https://github.com/msasongko17/linux

cd linux

git checkout pebs-sample-count

3. Install the modified Linux kernel and switch to it using the following commands:

make mrproper

cp /boot/config-`uname -r`* .config

make olddefconfig

make -j$(nproc)

sudo make modules_install

sudo make headers_install INSTALL_HDR_PATH=/usr

sudo make install

sudo kexec -l /boot/vmlinuz-5.11.0 --initrd=/boot/initrd.img-5.11.0 --reuse-cmdline

sudo kexec -e

4. Retrieve the github repository that contains the accuracy-bench, bias-bench, mult-event, and exec-mode benchmarks:

git clone https://github.com/msasongko17/pes-benchs.git

5. Install and run the accuracy-bench benchmark to reproduce the accuracy and time overhead results reported from Intel in figures 3, 4, and 6, as well as the memory overhead results discussed in the paper by running the following commands:

cd accuracy-bench-intel

make all

6. Run the sampling rate sensitivity experiment to reproduce results from Intel reported in figure 5 by running the following commands inside the accuracy-bench-intel folder:

make sampling-rate-sensitivity-install

make sampling-rate-sensitivity-5x

7. Run the bias and instruction attribution experiment to reproduce results presented in Table III by running the following commands:

cd ../bias-bench-intel

make install
make run5x

8. Run the time overhead, memory overhead and multiple event monitoring overhead evaluation experiment using the Rodinia benchmark to reproduce the results from Intel presented in figure 7, in the memory overhead discussion subsection, and in table IV by running the following commands from the outside of the pes-benchs folder:

git clone https://github.com/msasongko17/rodinia_3.1_profiled.git

cd rodinia_3.1_profiled/intel

make prepare_data

make overhead_experiment

9. Run the multiple-event monitoring accuracy experiment to reproduce the results from Intel in Figure 8 by following the instructions in the pes-benchs/mult-events-intel/README.md file.

10. Run the kernel mode vs user mode evaluation experiment by running the following commands inside the pes-benchs folder:

cd exec-mode-intel

- the following command compiles the linux kernel module that contains the kernel space code

make

- the following command installs the linux kernel module

sudo insmod kern_code.ko

- the following command compiles the user space code

gcc user_code.c -o user_code

- the following command runs the benchmark

sudo ./user_code


*******************************************************************************************

How to reproduce our experiment results in an AMD machine:

1. Retrieve the modified Linux kernel module and switch to the modified branch:

git clone https://github.com/msasongko17/AMD_IBS_Toolkit

cd AMD_IBS_Toolkit

git checkout amd-selectable-sampling

3. Compile and install the modified Linux kernel module using the following commands:

cd driver

make

sudo ./install_ibs_driver.sh

4. Retrieve the github repository that contains the accuracy-bench, bias-bench, mult-event, and exec-mode benchmarks:

git clone https://github.com/msasongko17/pes-benchs.git

5. Install and run the accuracy-bench benchmark to reproduce the accuracy and time overhead results reported from AMD in figures 3, 4, and 6, as well as the memory overhead results discussed in the paper by running the following commands:

cd accuracy-bench-amd

make all

6. Run the sampling rate sensitivity experiment to reproduce results from AMD reported in figure 5 by running the following commands inside the accuracy-bench-amd folder:

make sampling-rate-sensitivity-install

make sampling-rate-sensitivity-5x

7. Run the bias and instruction attribution experiment to reproduce results presented in Table III by running the following commands:

cd ../bias-bench-amd

make install
make run5x

8. Run the time overhead, memory overhead and multiple event monitoring overhead evaluation experiment using the Rodinia benchmark to reproduce the results from AMD presented in figure 7, in the memory overhead discussion subsection, and in table IV by running the following commands from the outside of the pes-benchs folder:

git clone https://github.com/msasongko17/rodinia_3.1_profiled.git

cd rodinia_3.1_profiled/amd

make prepare_data

make overhead_experiment

9. Run the multiple-event monitoring accuracy experiment to reproduce the results from AMD in Figure 8 by following the instructions in the pes-benchs/mult-events-amd/README.md file.

10. Run the kernel mode vs user mode evaluation experiment by running the following commands inside the pes-benchs folder:

cd exec-mode-amd

- the following command compiles the linux kernel module that contains the kernel space code

make

- the following command installs the linux kernel module

sudo insmod kern_code.ko

- the following command compiles the user space code

gcc user_code.c cpu_check.c -o user_code -fopenmp

- the following command runs the benchmark

sudo OMP_NUM_THREADS=1 GOMP_CPU_AFFINITY="0" ./user_code

*******************************************************************************************

How to install and use the full-fledged profiling tool:

1. Clone the tool using the following command:

git clone https://github.com/msasongko17/hpctoolkit

2. Follow the instructions in hpctoolkit/ComDetective.Install to install it.

3. Follow the instructions in ComDetective.HowToRun to run it

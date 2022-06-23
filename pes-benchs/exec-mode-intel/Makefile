
obj-m := kern_code.o

KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

default:
	$(MAKE) -C $(KDIR) M=$(shell pwd) modules	
install:
	$(MAKE) -C $(KDIR) M=$(shell pwd) module_install
clean: 
	$(MAKE) -C $(KDIR) M=$(shell pwd) clean


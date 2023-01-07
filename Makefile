obj-m := test.o

KDIR := /lib/modules/$(shell uname -r)/build

all: modules

modules:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean
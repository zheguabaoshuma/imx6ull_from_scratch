.PHONY: clean write

objs = start.o main.o

ledc.bin : $(objs)
	arm-linux-gnueabihf-ld -T imx.lds $^ -o ledc.elf
	arm-linux-gnueabihf-objcopy -O binary -S -g ledc.elf ledc.bin
	arm-linux-gnueabihf-objdump -D -m arm ledc.elf > ledc.dis
	arm-linux-gnueabihf-gcc -S -o main.s main.c

# -Wall是启动警告输出
%.o : %.c
	arm-linux-gnueabihf-gcc -nostdlib -c -Wall -o $@ $< 

%.o : %.s
	arm-linux-gnueabihf-gcc -nostdlib -c -Wall -o $@ $< 

%.o : %.S
	arm-linux-gnueabihf-gcc -nostdlib -c -Wall -o $@ $< 

write : ledc.bin
	cat header ledc.bin > ledc.imx
	sudo uuu ledc.imx

clean:
	rm -f *.o *.imx *.dis *.elf *.bin main.s
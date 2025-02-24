led.imx:led.s
	arm-linux-gnueabihf-gcc -g -c -o led.o led.s
	arm-linux-gnueabihf-ld -Ttext 0x80100000 led.o -o led.elf
	arm-linux-gnueabihf-objcopy -O binary -S -g led.elf led.bin
	arm-linux-gnueabihf-objdump -D led.elf > led.dis

#为代码加入IVT BOOT DCD数据头 header文件在官方imx文件中提前即可
	touch led.imx
	cat header led.bin >led.imx

#制作SD卡烧录文件	
	dd if=/dev/zero of=1k.bin bs=1024 count=1
	cat 1k.bin led.imx > led.img

clean:
	rm -f *.bin *.o *.elf *.dis *.imx *.img 1k.bin

write:
	sudo uuu led.imx
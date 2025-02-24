CROSS_TOOLCHAIN = arm-linux-gnueabihf-
LD = $(CROSS_TOOLCHAIN)ld
OBJCOPY = $(CROSS_TOOLCHAIN)objcopy
OBJDUMP = $(CROSS_TOOLCHAIN)objdump
CC = $(CROSS_TOOLCHAIN)gcc
CFLAGS = -Wall -nostdlib -O2 -g 

INCLUDE_DIRS = lib $(wildcard bsp/*) src
INCLUDE = $(foreach dir, $(INCLUDE_DIRS), -I $(dir))
CFILES = $(foreach dir, $(INCLUDE_DIRS), $(wildcard $(dir)/*.c))
SFILES = $(foreach dir, $(INCLUDE_DIRS), $(wildcard $(dir)/*.s))
OBJS = $(foreach obj, $(notdir $(patsubst %.c, %.o, $(CFILES))) $(notdir $(patsubst %.s, %.o, $(SFILES))), obj/$(obj))
TARGET = blink

.PHONY: print clean write

$(TARGET) : $(OBJS)
	$(LD) -T src/linker_scripts.lds -o obj/$(TARGET).elf $^
	$(OBJCOPY) -O binary obj/$(TARGET).elf $(TARGET).bin
	$(OBJDUMP) -D obj/$(TARGET).elf > obj/$(TARGET).dis

obj/%.o : src/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

obj/%.o : src/%.s
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

obj/%.o : lib/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

obj/%.o : bsp/*/%.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	
write:
	cat header $(TARGET).bin > $(TARGET).imx
	sudo uuu $(TARGET).imx

clean:
	rm -f obj/*.o obj/*.elf obj/*.bin obj/*.dis *.imx *.bin *.o

print:
	@echo $(CFILES)
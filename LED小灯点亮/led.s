.global _start

_start:
ldr r0, =0x020c4068
ldr r1, =0xffffffff
ldr r2, =0x020c4080

loop_set: @ set clock register
str r1, [r0]
add r0, r0, #4
cmp r0, r2
ble loop_set

@ set GPIO1_IO3 MUX
ldr r0, =0x020e0068
ldr r1, =0x5
str r1, [r0]

@ set GPIO1_IO3 PAD
/* GPIO1_IO03 的 IO 属性
 *bit 16:0 HYS 关闭
 *bit [15:14]: 00 默认下拉
 *bit [13]: 0 kepper 功能
 *bit [12]: 1 pull/keeper 使能
 *bit [11]: 0 关闭开路输出
 *bit [7:6]: 10 速度 100Mhz
 *bit [5:3]: 110 R0/6 驱动能力
 *bit [0]: 0 低转换率
 */
ldr r0, =0x020e02f4
ldr r1, =0x10b0
str r1, [r0]

@ set GPIO1_IO3 Direction
ldr r0, =0x0209c004
ldr r1, =0x8
str r1, [r0]

@ set GPIO1_IO3 Data
ldr r0, =0x0209c000
ldr r1, =0x0
str r1, [r0]

@ loop
loop:
b loop

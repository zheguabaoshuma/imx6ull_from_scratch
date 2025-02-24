.global _start

_start:

mrs r0, cpsr
bic r0, r0, #0x1f @清除原来的低5位
orr r0, r0, #0x13 @设置新的低5位，对应监管模式的代码
msr cpsr, r0 @进入svc模式

ldr sp, =0x80010000
b main

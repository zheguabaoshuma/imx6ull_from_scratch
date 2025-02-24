.global _start

@ _start:
@     mrs r0, cpsr
@     bic r0, r0, #0x1F
@     orr r0, r0, #0x13
@     msr cpsr, r0

@     ldr sp, =0x80010000
@     b main

_start:
	ldr pc, =Reset_Handler		/* 复位中断 					*/	
	ldr pc, =Undefined_Handler	/* 未定义中断 					*/
	ldr pc, =SVC_Handler		/* SVC(Supervisor)中断 		*/
	ldr pc, =PrefetchAbort_Handler	/* 预取终止中断 					*/
	ldr pc, =DataAbort_Handler	/* 数据终止中断 					*/
	ldr	pc, =Reserved_Handler	/* 未使用中断					*/
	ldr pc, =IRQ_Handler		/* IRQ中断 					*/
	ldr pc, =FIQ_Handler		/* FIQ(快速中断)未定义中断 			*/

Reset_Handler:
    cpsid i @ disable interrupts
    mrc     p15, 0, r0, c1, c0, 0     /*读取CP15系统控制寄存器   */
    bic     r0,  r0, #(0x1 << 12)     /*  清除第12位（I位）禁用 I Cache  */
    bic     r0,  r0, #(0x1 <<  2)     /*  清除第 2位（C位）禁用 D Cache  */
    bic     r0,  r0, #0x2             /*  清除第 1位（A位）禁止严格对齐   */
    bic     r0,  r0, #(0x1 << 11)     /*  清除第11位（Z位）分支预测   */
    bic     r0,  r0, #0x1             /*  清除第 0位（M位）禁用 MMU   */
    mcr     p15, 0, r0, c1, c0, 0     /*  将修改后的值写回CP15寄存器   */

    @ ldr r0, =0x80100000
    @ mcr p15, 0, r0, c12, c0, 0 @ write to VBAR

    @ set sp for IRQ mode
    mrs r0, cpsr
    bic r0, r0, #0x1F
    orr r0, r0, #0x12
    msr cpsr, r0
    ldr sp, =0x80060000

    @ set sp for SYS mode
    mrs r0, cpsr
    bic r0, r0, #0x1F
    orr r0, r0, #0x1F
    msr cpsr, r0
    ldr sp, =0x80040000

    @ set sp for SVC mode
    mrs r0, cpsr
    bic r0, r0, #0x1F
    orr r0, r0, #0x13
    msr cpsr, r0
    ldr sp, =0x80020000
    cpsie i @ enable interrupts

    b main

Undefined_Handler:
    ldr r0, =Undefined_Handler
    bx r0

SVC_Handler:
    ldr r0, =SVC_Handler
    bx r0

PrefetchAbort_Handler:
    ldr r0, =PrefetchAbort_Handler
    bx r0

DataAbort_Handler:
    ldr r0, =DataAbort_Handler
    bx r0

Reserved_Handler:
    ldr r0, =Reserved_Handler
    bx r0

IRQ_Handler: @ CPU will be taken to IRQ mode automatically

    push {lr}
    push {r0-r3, r12}

    mrs r0, spsr @ CPSR has been saved in SPSR_irq automatically
    push {r0} @ save SPSR

    mrc p15, 4, r1, c15, c0, 0@ Read Configuration Base Address Register(GIC Base Address)
    add r1, r1, #0x2000 @ CPU Interface Control Register Base Address
    ldr r0, [r1, #0xC] @ Read the Interrupt Acknowledge Register(GICC_IAR)
    @ ldr r2, =0x3FF
    @ and r0, r0, r2 @ Get the interrupt ID

    push {r0, r1}
    cps #0x13 @ change to SVC mode
    push {lr}
    @ set GPIO1_IO3 Data
    @ ldr r0, =0x0209c000
    @ ldr r1, =0x0
    @ str r1, [r0]
    @cpsie i
    ldr r2, =SystemIRQ_Handler
    blx r2

    @cpsid i
    pop {lr}
    cps #0x12 @ change to IRQ mode
    pop {r0, r1}
    str r0, [r1, #0x10] @ Write the End of Interrupt Register(GICC_EOIR)

    pop {r0}
    msr spsr_cxsf, r0

    pop {r0-r3, r12}
    pop {lr}

    subs pc, lr, #4 @ return to next instruction
FIQ_Handler:
    ldr r0, =FIQ_Handler
    bx r0


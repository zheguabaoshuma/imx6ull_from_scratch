.global _start

_start:
    mrs r0, cpsr
    bic r0, r0, #0x1F
    orr r0, r0, #0x13
    msr cpsr, r0

    ldr sp, =0x80010000
    b main

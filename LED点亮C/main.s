	.arch armv6
	.fpu vfp
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.align	2
	.global	_register_init_
	.syntax unified
	.arm
	.type	_register_init_, %function
_register_init_:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	ldr	r3, .L2
	mvn	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+4
	mvn	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+8
	mvn	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+12
	mvn	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+16
	mvn	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+20
	mvn	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+24
	mvn	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+28
	mov	r2, #5
	str	r2, [r3]
	ldr	r3, .L2+32
	ldr	r2, .L2+36
	str	r2, [r3]
	ldr	r3, .L2+40
	mov	r2, #0
	str	r2, [r3]
	ldr	r3, .L2+44
	mov	r2, #8
	str	r2, [r3]
	nop
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
.L3:
	.align	2
.L2:
	.word	34357352
	.word	34357356
	.word	34357360
	.word	34357364
	.word	34357368
	.word	34357372
	.word	34357376
	.word	34472040
	.word	34472692
	.word	4272
	.word	34193408
	.word	34193412
	.size	_register_init_, .-_register_init_
	.align	2
	.global	led_off
	.syntax unified
	.arm
	.type	led_off, %function
led_off:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	ldr	r3, .L5
	mvn	r2, #0
	str	r2, [r3]
	nop
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
.L6:
	.align	2
.L5:
	.word	34193408
	.size	led_off, .-led_off
	.align	2
	.global	led_on
	.syntax unified
	.arm
	.type	led_on, %function
led_on:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	ldr	r3, .L8
	mov	r2, #0
	str	r2, [r3]
	nop
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
.L9:
	.align	2
.L8:
	.word	34193408
	.size	led_on, .-led_on
	.align	2
	.global	delay
	.syntax unified
	.arm
	.type	delay, %function
delay:
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	@ link register save eliminated.
	str	fp, [sp, #-4]!
	add	fp, sp, #0
	sub	sp, sp, #12
	ldr	r3, .L12
	str	r3, [fp, #-8]
	nop
.L11:
	ldr	r3, [fp, #-8]
	sub	r2, r3, #1
	str	r2, [fp, #-8]
	cmp	r3, #0
	bne	.L11
	nop
	nop
	add	sp, fp, #0
	@ sp needed
	ldr	fp, [sp], #4
	bx	lr
.L13:
	.align	2
.L12:
	.word	2047
	.size	delay, .-delay
	.align	2
	.global	led_blink
	.syntax unified
	.arm
	.type	led_blink, %function
led_blink:
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	sub	sp, sp, #16
	str	r0, [fp, #-16]
	bl	led_off(PLT)
	mov	r3, #0
	str	r3, [fp, #-12]
	b	.L15
.L16:
	bl	delay(PLT)
	ldr	r3, [fp, #-12]
	add	r3, r3, #1
	str	r3, [fp, #-12]
.L15:
	ldr	r2, [fp, #-12]
	ldr	r3, [fp, #-16]
	cmp	r2, r3
	bcc	.L16
	bl	led_on(PLT)
	mov	r3, #0
	str	r3, [fp, #-8]
	b	.L17
.L18:
	bl	delay(PLT)
	ldr	r3, [fp, #-8]
	add	r3, r3, #1
	str	r3, [fp, #-8]
.L17:
	ldr	r2, [fp, #-8]
	ldr	r3, [fp, #-16]
	cmp	r2, r3
	bcc	.L18
	nop
	nop
	sub	sp, fp, #4
	@ sp needed
	pop	{fp, pc}
	.size	led_blink, .-led_blink
	.global	test_ext
	.bss
	.align	3
	.type	test_ext, %object
	.size	test_ext, 8
test_ext:
	.space	8
	.text
	.align	2
	.global	main
	.syntax unified
	.arm
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	bl	_register_init_(PLT)
.L20:
	mov	r0, #1000
	bl	led_blink(PLT)
	b	.L20
	.size	main, .-main
	.ident	"GCC: (GNU) 14.1.1 20240507"
	.section	.note.GNU-stack,"",%progbits

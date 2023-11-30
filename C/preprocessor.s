	.file	"preprocessor.c"
	.globl	_NO
	.data
	.align 4
_NO:
	.long	11
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "Value of No : %d\12\0"
LC3:
	.ascii "Area is : %f\12\0"
LC4:
	.ascii "Count is : %f\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	flds	LC0
	fstps	28(%esp)
	flds	LC1
	fstps	24(%esp)
	movl	_NO, %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	flds	28(%esp)
	fstpl	4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	flds	24(%esp)
	fstpl	4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
	.align 4
LC0:
	.long	1134362624
	.align 4
LC1:
	.long	1123024896
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef

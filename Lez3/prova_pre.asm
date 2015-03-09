	.file	"get_set.cpp"
	.section	.text._ZN6Number3getEv,"axG",@progbits,_ZN6Number3getEv,comdat
	.align 2
	.weak	_ZN6Number3getEv
	.type	_ZN6Number3getEv, @function
_ZN6Number3getEv:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_ZN6Number3getEv, .-_ZN6Number3getEv
	.section	.text._ZN6Number3setEi,"axG",@progbits,_ZN6Number3setEi,comdat
	.align 2
	.weak	_ZN6Number3setEi
	.type	_ZN6Number3setEi, @function
_ZN6Number3setEi:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_ZN6Number3setEi, .-_ZN6Number3setEi
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	-16(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	_ZN6Number3setEi
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN6Number3getEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Debian 4.7.2-5) 4.7.2"
	.section	.note.GNU-stack,"",@progbits

	.file	"funz.cpp"
	.text
	.globl	_Z4funzi
	.type	_Z4funzi, @function
#Come il compilatore labella la roba. Usa il doppio underscore. __Z4funzi ..__=
#label;  Z4=bho; funz=nome; i=cosavuole (la segnatura) funz(int) -- quindi 
#posso avere funzioni che si chiamano nello stesso modo ma con segnatura diversa.
#funzi
#funzd
#ecc.ecc.

_Z4funzi:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z4funzi, .-_Z4funzi
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$4, %edi
	call	_Z4funzi
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Debian 4.7.2-5) 4.7.2"
	.section	.note.GNU-stack,"",@progbits

	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
	.globl	__Z6squareIiET_S0_              ; -- Begin function _Z6squareIiET_S0_
	.weak_definition	__Z6squareIiET_S0_
	.p2align	2
__Z6squareIiET_S0_:                     ; @_Z6squareIiET_S0_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #12]
	mul	w0, w8, w9
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__Z6squareIdET_S0_              ; -- Begin function _Z6squareIdET_S0_
	.weak_definition	__Z6squareIdET_S0_
	.p2align	2
__Z6squareIdET_S0_:                     ; @_Z6squareIdET_S0_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	d0, [sp, #8]
	ldr	d0, [sp, #8]
	ldr	d1, [sp, #8]
	fmul	d0, d0, d1
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	mov	w0, #0                          ; =0x0
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols

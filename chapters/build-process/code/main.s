	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
	.globl	__Z8multiplyii                  ; -- Begin function _Z8multiplyii
	.p2align	2
__Z8multiplyii:                         ; @_Z8multiplyii
	.cfi_startproc
; %bb.0:
	mul	w0, w1, w0
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
	.section	__DATA,__data
	.globl	_x                              ; @x
	.p2align	2, 0x0
_x:
	.long	401                             ; 0x191

.subsections_via_symbols

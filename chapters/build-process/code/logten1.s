	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 4
	.globl	__Z5log10i                      ; -- Begin function _Z5log10i
	.p2align	2
__Z5log10i:                             ; @_Z5log10i
	.cfi_startproc
; %bb.0:
	cmp	w0, #1
	b.lt	LBB0_4
; %bb.1:
	mov	x8, x0
	mov	w0, #-1                         ; =0xffffffff
	mov	w9, #1                          ; =0x1
LBB0_2:                                 ; =>This Inner Loop Header: Depth=1
	add	w9, w9, w9, lsl #2
	lsl	w9, w9, #1
	add	w0, w0, #1
	cmp	w9, w8
	b.le	LBB0_2
; %bb.3:
	ret
LBB0_4:
	mov	w0, #-1                         ; =0xffffffff
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols

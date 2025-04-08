	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 4
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	mov	x8, #-1                         ; =0xffffffffffffffff
	str	x8, [sp]
	ldr	x8, [sp]
	ldr	x9, [sp]
	add	x8, x8, #1
	subs	x8, x8, x9
	b.hi	LBB0_2
	b	LBB0_1
LBB0_1:
	adrp	x0, l___func__.main@PAGE
	add	x0, x0, l___func__.main@PAGEOFF
	adrp	x1, l_.str@PAGE
	add	x1, x1, l_.str@PAGEOFF
	mov	w2, #12                         ; =0xc
	adrp	x3, l_.str.1@PAGE
	add	x3, x3, l_.str.1@PAGEOFF
	bl	___assert_rtn
LBB0_2:
	b	LBB0_3
LBB0_3:
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l___func__.main:                        ; @__func__.main
	.asciz	"main"

l_.str:                                 ; @.str
	.asciz	"overflow.cpp"

l_.str.1:                               ; @.str.1
	.asciz	"p + 1 > p"

.subsections_via_symbols

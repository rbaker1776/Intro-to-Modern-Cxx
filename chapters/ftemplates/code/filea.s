	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
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
	mov	w0, #-1                         ; =0xffffffff
	bl	__Z3absIiET_S0_
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__Z3absIiET_S0_                 ; -- Begin function _Z3absIiET_S0_
	.weak_definition	__Z3absIiET_S0_
	.p2align	2
__Z3absIiET_S0_:                        ; @_Z3absIiET_S0_
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	ldr	w8, [sp, #12]
	subs	w8, w8, #0
	cset	w8, lt
	tbnz	w8, #0, LBB1_2
	b	LBB1_1
LBB1_1:
	ldr	w8, [sp, #12]
	str	w8, [sp, #8]                    ; 4-byte Folded Spill
	b	LBB1_3
LBB1_2:
	ldr	w9, [sp, #12]
	mov	w8, #0                          ; =0x0
	subs	w8, w8, w9
	str	w8, [sp, #8]                    ; 4-byte Folded Spill
	b	LBB1_3
LBB1_3:
	ldr	w0, [sp, #8]                    ; 4-byte Folded Reload
	add	sp, sp, #16
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols

	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 2
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	bl	__Z3fooIiET_v
	bl	__Z3fooIdET_v
	mov	w0, #0                          ; =0x0
	ldp	x29, x30, [sp], #16             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__Z3fooIiET_v                   ; -- Begin function _Z3fooIiET_v
	.weak_definition	__Z3fooIiET_v
	.p2align	2
__Z3fooIiET_v:                          ; @_Z3fooIiET_v
	.cfi_startproc
; %bb.0:
	mov	w0, #0                          ; =0x0
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	__Z3fooIdET_v                   ; -- Begin function _Z3fooIdET_v
	.weak_definition	__Z3fooIdET_v
	.p2align	2
__Z3fooIdET_v:                          ; @_Z3fooIdET_v
	.cfi_startproc
; %bb.0:
	movi	d0, #0000000000000000
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols

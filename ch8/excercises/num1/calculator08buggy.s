	.file	"calculator08buggy.cpp"
	.intel_syntax noprefix
	.text
	.section	.text._ZnwmPv,"axG",@progbits,_ZnwmPv,comdat
	.weak	_ZnwmPv
	.type	_ZnwmPv, @function
_ZnwmPv:
.LFB38:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE38:
	.size	_ZnwmPv, .-_ZnwmPv
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.section	.text._ZNSt11char_traitsIcE7compareEPKcS2_m,"axG",@progbits,_ZNSt11char_traitsIcE7compareEPKcS2_m,comdat
	.weak	_ZNSt11char_traitsIcE7compareEPKcS2_m
	.type	_ZNSt11char_traitsIcE7compareEPKcS2_m, @function
_ZNSt11char_traitsIcE7compareEPKcS2_m:
.LFB397:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	cmp	QWORD PTR -24[rbp], 0
	jne	.L4
	mov	eax, 0
	jmp	.L5
.L4:
	mov	rdx, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	memcmp@PLT
	nop
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE397:
	.size	_ZNSt11char_traitsIcE7compareEPKcS2_m, .-_ZNSt11char_traitsIcE7compareEPKcS2_m
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
	.type	_ZStL13allocator_arg, @object
	.size	_ZStL13allocator_arg, 1
_ZStL13allocator_arg:
	.zero	1
	.type	_ZStL6ignore, @object
	.size	_ZStL6ignore, 1
_ZStL6ignore:
	.zero	1
	.section	.text._ZSt3minImERKT_S2_S2_,"axG",@progbits,_ZSt3minImERKT_S2_S2_,comdat
	.weak	_ZSt3minImERKT_S2_S2_
	.type	_ZSt3minImERKT_S2_S2_, @function
_ZSt3minImERKT_S2_S2_:
.LFB3325:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	cmp	rdx, rax
	jnb	.L7
	mov	rax, QWORD PTR -16[rbp]
	jmp	.L8
.L7:
	mov	rax, QWORD PTR -8[rbp]
.L8:
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3325:
	.size	_ZSt3minImERKT_S2_S2_, .-_ZSt3minImERKT_S2_S2_
	.section	.rodata
	.align 4
	.type	_ZN9__gnu_cxxL21__default_lock_policyE, @object
	.size	_ZN9__gnu_cxxL21__default_lock_policyE, 4
_ZN9__gnu_cxxL21__default_lock_policyE:
	.long	2
	.align 4
	.type	_ZNSt15regex_constantsL5icaseE, @object
	.size	_ZNSt15regex_constantsL5icaseE, 4
_ZNSt15regex_constantsL5icaseE:
	.long	1
	.align 4
	.type	_ZNSt15regex_constantsL6nosubsE, @object
	.size	_ZNSt15regex_constantsL6nosubsE, 4
_ZNSt15regex_constantsL6nosubsE:
	.long	2
	.align 4
	.type	_ZNSt15regex_constantsL8optimizeE, @object
	.size	_ZNSt15regex_constantsL8optimizeE, 4
_ZNSt15regex_constantsL8optimizeE:
	.long	4
	.align 4
	.type	_ZNSt15regex_constantsL7collateE, @object
	.size	_ZNSt15regex_constantsL7collateE, 4
_ZNSt15regex_constantsL7collateE:
	.long	8
	.align 4
	.type	_ZNSt15regex_constantsL10ECMAScriptE, @object
	.size	_ZNSt15regex_constantsL10ECMAScriptE, 4
_ZNSt15regex_constantsL10ECMAScriptE:
	.long	16
	.align 4
	.type	_ZNSt15regex_constantsL5basicE, @object
	.size	_ZNSt15regex_constantsL5basicE, 4
_ZNSt15regex_constantsL5basicE:
	.long	32
	.align 4
	.type	_ZNSt15regex_constantsL8extendedE, @object
	.size	_ZNSt15regex_constantsL8extendedE, 4
_ZNSt15regex_constantsL8extendedE:
	.long	64
	.align 4
	.type	_ZNSt15regex_constantsL3awkE, @object
	.size	_ZNSt15regex_constantsL3awkE, 4
_ZNSt15regex_constantsL3awkE:
	.long	128
	.align 4
	.type	_ZNSt15regex_constantsL4grepE, @object
	.size	_ZNSt15regex_constantsL4grepE, 4
_ZNSt15regex_constantsL4grepE:
	.long	256
	.align 4
	.type	_ZNSt15regex_constantsL5egrepE, @object
	.size	_ZNSt15regex_constantsL5egrepE, 4
_ZNSt15regex_constantsL5egrepE:
	.long	512
	.align 4
	.type	_ZNSt15regex_constantsL12__polynomialE, @object
	.size	_ZNSt15regex_constantsL12__polynomialE, 4
_ZNSt15regex_constantsL12__polynomialE:
	.long	1024
	.align 4
	.type	_ZNSt15regex_constantsL13match_defaultE, @object
	.size	_ZNSt15regex_constantsL13match_defaultE, 4
_ZNSt15regex_constantsL13match_defaultE:
	.zero	4
	.align 4
	.type	_ZNSt15regex_constantsL13match_not_bolE, @object
	.size	_ZNSt15regex_constantsL13match_not_bolE, 4
_ZNSt15regex_constantsL13match_not_bolE:
	.long	1
	.align 4
	.type	_ZNSt15regex_constantsL13match_not_eolE, @object
	.size	_ZNSt15regex_constantsL13match_not_eolE, 4
_ZNSt15regex_constantsL13match_not_eolE:
	.long	2
	.align 4
	.type	_ZNSt15regex_constantsL13match_not_bowE, @object
	.size	_ZNSt15regex_constantsL13match_not_bowE, 4
_ZNSt15regex_constantsL13match_not_bowE:
	.long	4
	.align 4
	.type	_ZNSt15regex_constantsL13match_not_eowE, @object
	.size	_ZNSt15regex_constantsL13match_not_eowE, 4
_ZNSt15regex_constantsL13match_not_eowE:
	.long	8
	.align 4
	.type	_ZNSt15regex_constantsL9match_anyE, @object
	.size	_ZNSt15regex_constantsL9match_anyE, 4
_ZNSt15regex_constantsL9match_anyE:
	.long	16
	.align 4
	.type	_ZNSt15regex_constantsL14match_not_nullE, @object
	.size	_ZNSt15regex_constantsL14match_not_nullE, 4
_ZNSt15regex_constantsL14match_not_nullE:
	.long	32
	.align 4
	.type	_ZNSt15regex_constantsL16match_continuousE, @object
	.size	_ZNSt15regex_constantsL16match_continuousE, 4
_ZNSt15regex_constantsL16match_continuousE:
	.long	64
	.align 4
	.type	_ZNSt15regex_constantsL16match_prev_availE, @object
	.size	_ZNSt15regex_constantsL16match_prev_availE, 4
_ZNSt15regex_constantsL16match_prev_availE:
	.long	128
	.align 4
	.type	_ZNSt15regex_constantsL14format_defaultE, @object
	.size	_ZNSt15regex_constantsL14format_defaultE, 4
_ZNSt15regex_constantsL14format_defaultE:
	.zero	4
	.align 4
	.type	_ZNSt15regex_constantsL10format_sedE, @object
	.size	_ZNSt15regex_constantsL10format_sedE, 4
_ZNSt15regex_constantsL10format_sedE:
	.long	256
	.align 4
	.type	_ZNSt15regex_constantsL14format_no_copyE, @object
	.size	_ZNSt15regex_constantsL14format_no_copyE, 4
_ZNSt15regex_constantsL14format_no_copyE:
	.long	512
	.align 4
	.type	_ZNSt15regex_constantsL17format_first_onlyE, @object
	.size	_ZNSt15regex_constantsL17format_first_onlyE, 4
_ZNSt15regex_constantsL17format_first_onlyE:
	.long	1024
	.align 4
	.type	_ZNSt15regex_constantsL13error_collateE, @object
	.size	_ZNSt15regex_constantsL13error_collateE, 4
_ZNSt15regex_constantsL13error_collateE:
	.zero	4
	.align 4
	.type	_ZNSt15regex_constantsL11error_ctypeE, @object
	.size	_ZNSt15regex_constantsL11error_ctypeE, 4
_ZNSt15regex_constantsL11error_ctypeE:
	.long	1
	.align 4
	.type	_ZNSt15regex_constantsL12error_escapeE, @object
	.size	_ZNSt15regex_constantsL12error_escapeE, 4
_ZNSt15regex_constantsL12error_escapeE:
	.long	2
	.align 4
	.type	_ZNSt15regex_constantsL13error_backrefE, @object
	.size	_ZNSt15regex_constantsL13error_backrefE, 4
_ZNSt15regex_constantsL13error_backrefE:
	.long	3
	.align 4
	.type	_ZNSt15regex_constantsL11error_brackE, @object
	.size	_ZNSt15regex_constantsL11error_brackE, 4
_ZNSt15regex_constantsL11error_brackE:
	.long	4
	.align 4
	.type	_ZNSt15regex_constantsL11error_parenE, @object
	.size	_ZNSt15regex_constantsL11error_parenE, 4
_ZNSt15regex_constantsL11error_parenE:
	.long	5
	.align 4
	.type	_ZNSt15regex_constantsL11error_braceE, @object
	.size	_ZNSt15regex_constantsL11error_braceE, 4
_ZNSt15regex_constantsL11error_braceE:
	.long	6
	.align 4
	.type	_ZNSt15regex_constantsL14error_badbraceE, @object
	.size	_ZNSt15regex_constantsL14error_badbraceE, 4
_ZNSt15regex_constantsL14error_badbraceE:
	.long	7
	.align 4
	.type	_ZNSt15regex_constantsL11error_rangeE, @object
	.size	_ZNSt15regex_constantsL11error_rangeE, 4
_ZNSt15regex_constantsL11error_rangeE:
	.long	8
	.align 4
	.type	_ZNSt15regex_constantsL11error_spaceE, @object
	.size	_ZNSt15regex_constantsL11error_spaceE, 4
_ZNSt15regex_constantsL11error_spaceE:
	.long	9
	.align 4
	.type	_ZNSt15regex_constantsL15error_badrepeatE, @object
	.size	_ZNSt15regex_constantsL15error_badrepeatE, 4
_ZNSt15regex_constantsL15error_badrepeatE:
	.long	10
	.align 4
	.type	_ZNSt15regex_constantsL16error_complexityE, @object
	.size	_ZNSt15regex_constantsL16error_complexityE, 4
_ZNSt15regex_constantsL16error_complexityE:
	.long	11
	.align 4
	.type	_ZNSt15regex_constantsL11error_stackE, @object
	.size	_ZNSt15regex_constantsL11error_stackE, 4
_ZNSt15regex_constantsL11error_stackE:
	.long	12
	.align 8
	.type	_ZNSt8__detailL19_S_invalid_state_idE, @object
	.size	_ZNSt8__detailL19_S_invalid_state_idE, 8
_ZNSt8__detailL19_S_invalid_state_idE:
	.quad	-1
	.section	.text._Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"axG",@progbits,_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,comdat
	.weak	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB6246:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6246
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	sub	rsp, 16
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	mov	QWORD PTR -24[rbp], rdi
	mov	edi, 16
	call	__cxa_allocate_exception@PLT
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rax
	mov	rdi, rbx
.LEHB0:
	call	_ZNSt13runtime_errorC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE@PLT
.LEHE0:
	mov	rax, QWORD PTR _ZNSt13runtime_errorD1Ev@GOTPCREL[rip]
	mov	rdx, rax
	lea	rsi, _ZTISt13runtime_error[rip]
	mov	rdi, rbx
.LEHB1:
	call	__cxa_throw@PLT
.L11:
	endbr64
	mov	r12, rax
	mov	rdi, rbx
	call	__cxa_free_exception@PLT
	mov	rax, r12
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.LEHE1:
	.cfi_endproc
.LFE6246:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"aG",@progbits,_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,comdat
.LLSDA6246:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6246-.LLSDACSB6246
.LLSDACSB6246:
	.uleb128 .LEHB0-.LFB6246
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L11-.LFB6246
	.uleb128 0
	.uleb128 .LEHB1-.LFB6246
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE6246:
	.section	.text._Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"axG",@progbits,_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,comdat
	.size	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.text._Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_,"axG",@progbits,_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_,comdat
	.weak	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_
	.type	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_, @function
_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_:
.LFB6247:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6247
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 72
	.cfi_offset 3, -24
	mov	QWORD PTR -72[rbp], rdi
	mov	QWORD PTR -80[rbp], rsi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	lea	rax, -64[rbp]
	mov	rdx, QWORD PTR -80[rbp]
	mov	rcx, QWORD PTR -72[rbp]
	mov	rsi, rcx
	mov	rdi, rax
.LEHB2:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
.LEHE2:
	lea	rax, -64[rbp]
	mov	rdi, rax
.LEHB3:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE3:
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L14
	jmp	.L16
.L15:
	endbr64
	mov	rbx, rax
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB4:
	call	_Unwind_Resume@PLT
.LEHE4:
.L16:
	call	__stack_chk_fail@PLT
.L14:
	add	rsp, 72
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6247:
	.section	.gcc_except_table._Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_,"aG",@progbits,_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_,comdat
.LLSDA6247:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6247-.LLSDACSB6247
.LLSDACSB6247:
	.uleb128 .LEHB2-.LFB6247
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB6247
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L15-.LFB6247
	.uleb128 0
	.uleb128 .LEHB4-.LFB6247
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE6247:
	.section	.text._Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_,"axG",@progbits,_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_,comdat
	.size	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_, .-_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_
	.section	.text._ZN5TokenC2Ec,"axG",@progbits,_ZN5TokenC5Ec,comdat
	.align 2
	.weak	_ZN5TokenC2Ec
	.type	_ZN5TokenC2Ec, @function
_ZN5TokenC2Ec:
.LFB6263:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	eax, esi
	mov	BYTE PTR -12[rbp], al
	mov	rax, QWORD PTR -8[rbp]
	movzx	edx, BYTE PTR -12[rbp]
	mov	BYTE PTR [rax], dl
	mov	rax, QWORD PTR -8[rbp]
	pxor	xmm0, xmm0
	movsd	QWORD PTR 8[rax], xmm0
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 16
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6263:
	.size	_ZN5TokenC2Ec, .-_ZN5TokenC2Ec
	.weak	_ZN5TokenC1Ec
	.set	_ZN5TokenC1Ec,_ZN5TokenC2Ec
	.section	.text._ZN5TokenC2Ecd,"axG",@progbits,_ZN5TokenC5Ecd,comdat
	.align 2
	.weak	_ZN5TokenC2Ecd
	.type	_ZN5TokenC2Ecd, @function
_ZN5TokenC2Ecd:
.LFB6266:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	eax, esi
	movsd	QWORD PTR -24[rbp], xmm0
	mov	BYTE PTR -12[rbp], al
	mov	rax, QWORD PTR -8[rbp]
	movzx	edx, BYTE PTR -12[rbp]
	mov	BYTE PTR [rax], dl
	mov	rax, QWORD PTR -8[rbp]
	movsd	xmm0, QWORD PTR -24[rbp]
	movsd	QWORD PTR 8[rax], xmm0
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 16
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6266:
	.size	_ZN5TokenC2Ecd, .-_ZN5TokenC2Ecd
	.weak	_ZN5TokenC1Ecd
	.set	_ZN5TokenC1Ecd,_ZN5TokenC2Ecd
	.section	.text._ZN5TokenC2EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,"axG",@progbits,_ZN5TokenC5EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,comdat
	.align 2
	.weak	_ZN5TokenC2EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_ZN5TokenC2EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_ZN5TokenC2EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB6269:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	eax, esi
	mov	QWORD PTR -24[rbp], rdx
	mov	BYTE PTR -12[rbp], al
	mov	rax, QWORD PTR -8[rbp]
	movzx	edx, BYTE PTR -12[rbp]
	mov	BYTE PTR [rax], dl
	mov	rax, QWORD PTR -8[rbp]
	lea	rdx, 16[rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6269:
	.size	_ZN5TokenC2EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_ZN5TokenC2EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.weak	_ZN5TokenC1EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.set	_ZN5TokenC1EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,_ZN5TokenC2EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.text._ZN5TokenD2Ev,"axG",@progbits,_ZN5TokenD5Ev,comdat
	.align 2
	.weak	_ZN5TokenD2Ev
	.type	_ZN5TokenD2Ev, @function
_ZN5TokenD2Ev:
.LFB6273:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 16
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6273:
	.size	_ZN5TokenD2Ev, .-_ZN5TokenD2Ev
	.weak	_ZN5TokenD1Ev
	.set	_ZN5TokenD1Ev,_ZN5TokenD2Ev
	.section	.text._ZN12Token_streamC2Ev,"axG",@progbits,_ZN12Token_streamC5Ev,comdat
	.align 2
	.weak	_ZN12Token_streamC2Ev
	.type	_ZN12Token_streamC2Ev, @function
_ZN12Token_streamC2Ev:
.LFB6275:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	BYTE PTR [rax], 0
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 8
	mov	esi, 0
	mov	rdi, rax
	call	_ZN5TokenC1Ec
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6275:
	.size	_ZN12Token_streamC2Ev, .-_ZN12Token_streamC2Ev
	.weak	_ZN12Token_streamC1Ev
	.set	_ZN12Token_streamC1Ev,_ZN12Token_streamC2Ev
	.section	.text._ZN5TokenaSERKS_,"axG",@progbits,_ZN5TokenaSERKS_,comdat
	.align 2
	.weak	_ZN5TokenaSERKS_
	.type	_ZN5TokenaSERKS_, @function
_ZN5TokenaSERKS_:
.LFB6278:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	movzx	edx, BYTE PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	BYTE PTR [rax], dl
	mov	rax, QWORD PTR -16[rbp]
	movsd	xmm0, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -8[rbp]
	movsd	QWORD PTR 8[rax], xmm0
	mov	rax, QWORD PTR -16[rbp]
	lea	rdx, 16[rax]
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 16
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_@PLT
	mov	rax, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6278:
	.size	_ZN5TokenaSERKS_, .-_ZN5TokenaSERKS_
	.section	.text._ZN12Token_stream5ungetE5Token,"axG",@progbits,_ZN12Token_stream5ungetE5Token,comdat
	.align 2
	.weak	_ZN12Token_stream5ungetE5Token
	.type	_ZN12Token_stream5ungetE5Token, @function
_ZN12Token_stream5ungetE5Token:
.LFB6277:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -8[rbp]
	lea	rdx, 8[rax]
	mov	rax, QWORD PTR -16[rbp]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZN5TokenaSERKS_
	mov	rax, QWORD PTR -8[rbp]
	mov	BYTE PTR [rax], 1
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6277:
	.size	_ZN12Token_stream5ungetE5Token, .-_ZN12Token_stream5ungetE5Token
	.section	.rodata
.LC1:
	.string	"Enter integers to calculate.\n"
.LC2:
	.string	"Enter ; to print the output.\n"
	.text
	.globl	_Z4helpv
	.type	_Z4helpv, @function
_Z4helpv:
.LFB6279:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	lea	rsi, .LC1[rip]
	lea	rdi, _ZSt4cout[rip]
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	lea	rsi, .LC2[rip]
	lea	rdi, _ZSt4cout[rip]
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6279:
	.size	_Z4helpv, .-_Z4helpv
	.section	.rodata
	.type	_ZL3let, @object
	.size	_ZL3let, 1
_ZL3let:
	.byte	35
	.type	_ZL4quit, @object
	.size	_ZL4quit, 1
_ZL4quit:
	.byte	81
	.type	_ZL5print, @object
	.size	_ZL5print, 1
_ZL5print:
	.byte	59
	.type	_ZL6number, @object
	.size	_ZL6number, 1
_ZL6number:
	.byte	56
	.type	_ZL4name, @object
	.size	_ZL4name, 1
_ZL4name:
	.byte	97
	.type	_ZL5power, @object
	.size	_ZL5power, 1
_ZL5power:
	.byte	112
	.local	_ZL11declareQuit
	.comm	_ZL11declareQuit,32,32
	.type	_ZL2sq, @object
	.size	_ZL2sq, 1
_ZL2sq:
	.byte	115
	.local	_ZL11declareSqrt
	.comm	_ZL11declareSqrt,32,32
	.local	_ZL6powkey
	.comm	_ZL6powkey,32,32
	.type	_ZL13tokenConstant, @object
	.size	_ZL13tokenConstant, 1
_ZL13tokenConstant:
	.byte	67
	.local	_ZL12constKeyWord
	.comm	_ZL12constKeyWord,32,32
	.type	_ZL9helpToken, @object
	.size	_ZL9helpToken, 1
_ZL9helpToken:
	.byte	104
	.section	.text._ZN5TokenC2ERKS_,"axG",@progbits,_ZN5TokenC5ERKS_,comdat
	.align 2
	.weak	_ZN5TokenC2ERKS_
	.type	_ZN5TokenC2ERKS_, @function
_ZN5TokenC2ERKS_:
.LFB6282:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	movzx	edx, BYTE PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	BYTE PTR [rax], dl
	mov	rax, QWORD PTR -16[rbp]
	movsd	xmm0, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -8[rbp]
	movsd	QWORD PTR 8[rax], xmm0
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 16
	mov	rdx, QWORD PTR -16[rbp]
	add	rdx, 16
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6282:
	.size	_ZN5TokenC2ERKS_, .-_ZN5TokenC2ERKS_
	.weak	_ZN5TokenC1ERKS_
	.set	_ZN5TokenC1ERKS_,_ZN5TokenC2ERKS_
	.section	.rodata
.LC3:
	.string	"Bad token"
	.text
	.align 2
	.globl	_ZN12Token_stream3getEv
	.type	_ZN12Token_stream3getEv, @function
_ZN12Token_stream3getEv:
.LFB6280:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6280
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 120
	.cfi_offset 3, -24
	mov	QWORD PTR -120[rbp], rdi
	mov	QWORD PTR -128[rbp], rsi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -128[rbp]
	movzx	eax, BYTE PTR [rax]
	test	al, al
	je	.L28
	mov	rax, QWORD PTR -128[rbp]
	mov	BYTE PTR [rax], 0
	mov	rax, QWORD PTR -128[rbp]
	lea	rdx, 8[rax]
	mov	rax, QWORD PTR -120[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB5:
	call	_ZN5TokenC1ERKS_
	jmp	.L27
.L28:
	lea	rax, -105[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt3cin[rip]
	call	_ZNSi3getERc@PLT
.L32:
	movzx	eax, BYTE PTR -105[rbp]
	movsx	eax, al
	mov	edi, eax
	call	isspace@PLT
	test	eax, eax
	je	.L30
	movzx	eax, BYTE PTR -105[rbp]
	cmp	al, 10
	jne	.L31
	mov	rax, QWORD PTR -120[rbp]
	mov	esi, 59
	mov	rdi, rax
	call	_ZN5TokenC1Ec
	jmp	.L27
.L31:
	lea	rax, -105[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt3cin[rip]
	call	_ZNSi3getERc@PLT
	jmp	.L32
.L30:
	movzx	eax, BYTE PTR -105[rbp]
	movsx	eax, al
	sub	eax, 35
	cmp	eax, 69
	ja	.L33
	mov	eax, eax
	lea	rdx, 0[0+rax*4]
	lea	rax, .L35[rip]
	mov	eax, DWORD PTR [rdx+rax]
	cdqe
	lea	rdx, .L35[rip]
	add	rax, rdx
	notrack jmp	rax
	.section	.rodata
	.align 4
	.align 4
.L35:
	.long	.L34-.L35
	.long	.L33-.L35
	.long	.L34-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L34-.L35
	.long	.L34-.L35
	.long	.L34-.L35
	.long	.L34-.L35
	.long	.L34-.L35
	.long	.L34-.L35
	.long	.L36-.L35
	.long	.L34-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L36-.L35
	.long	.L33-.L35
	.long	.L34-.L35
	.long	.L33-.L35
	.long	.L34-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L34-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L34-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L33-.L35
	.long	.L34-.L35
	.text
.L34:
	movzx	eax, BYTE PTR -105[rbp]
	movsx	edx, al
	mov	rax, QWORD PTR -120[rbp]
	mov	esi, edx
	mov	rdi, rax
	call	_ZN5TokenC1Ec
	jmp	.L27
.L36:
	lea	rdi, _ZSt3cin[rip]
	call	_ZNSi5ungetEv@PLT
	lea	rax, -104[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt3cin[rip]
	call	_ZNSirsERd@PLT
.LEHE5:
	mov	rdx, QWORD PTR -104[rbp]
	mov	rax, QWORD PTR -120[rbp]
	movq	xmm0, rdx
	mov	esi, 56
	mov	rdi, rax
	call	_ZN5TokenC1Ecd
	jmp	.L27
.L33:
	movzx	eax, BYTE PTR -105[rbp]
	movsx	eax, al
	mov	edi, eax
	call	isalpha@PLT
	test	eax, eax
	je	.L37
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev@PLT
	movzx	eax, BYTE PTR -105[rbp]
	movsx	edx, al
	lea	rax, -96[rbp]
	mov	esi, edx
	mov	rdi, rax
.LEHB6:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEc@PLT
.L43:
	lea	rax, -105[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt3cin[rip]
	call	_ZNSi3getERc@PLT
	mov	rdx, QWORD PTR [rax]
	sub	rdx, 24
	mov	rdx, QWORD PTR [rdx]
	add	rax, rdx
	mov	rdi, rax
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv@PLT
	test	al, al
	je	.L38
	movzx	eax, BYTE PTR -105[rbp]
	movsx	eax, al
	mov	edi, eax
	call	isalpha@PLT
	test	eax, eax
	jne	.L39
	movzx	eax, BYTE PTR -105[rbp]
	movsx	eax, al
	sub	eax, 48
	cmp	eax, 9
	setbe	al
	movzx	eax, al
	test	eax, eax
	jne	.L39
.L38:
	movzx	eax, BYTE PTR -105[rbp]
	cmp	al, 95
	jne	.L40
.L39:
	mov	eax, 1
	jmp	.L41
.L40:
	mov	eax, 0
.L41:
	test	al, al
	je	.L42
	movzx	eax, BYTE PTR -105[rbp]
	movsx	edx, al
	lea	rax, -96[rbp]
	mov	esi, edx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEc@PLT
	jmp	.L43
.L42:
	lea	rdi, _ZSt3cin[rip]
	call	_ZNSi5ungetEv@PLT
	lea	rax, -96[rbp]
	lea	rsi, _ZL11declareQuit[rip]
	mov	rdi, rax
	call	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	test	al, al
	je	.L44
	mov	rax, QWORD PTR -120[rbp]
	mov	esi, 81
	mov	rdi, rax
	call	_ZN5TokenC1Ec
	jmp	.L45
.L44:
	lea	rax, -96[rbp]
	lea	rsi, _ZL11declareSqrt[rip]
	mov	rdi, rax
	call	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	test	al, al
	je	.L46
	mov	rax, QWORD PTR -120[rbp]
	mov	esi, 115
	mov	rdi, rax
	call	_ZN5TokenC1Ec
	jmp	.L45
.L46:
	lea	rax, -96[rbp]
	lea	rsi, _ZL6powkey[rip]
	mov	rdi, rax
	call	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	test	al, al
	je	.L47
	mov	rax, QWORD PTR -120[rbp]
	mov	esi, 112
	mov	rdi, rax
	call	_ZN5TokenC1Ec
	jmp	.L45
.L47:
	lea	rax, -96[rbp]
	lea	rsi, _ZL12constKeyWord[rip]
	mov	rdi, rax
	call	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	test	al, al
	je	.L48
	mov	rax, QWORD PTR -120[rbp]
	mov	esi, 67
	mov	rdi, rax
	call	_ZN5TokenC1Ec
	jmp	.L45
.L48:
	lea	rdx, -96[rbp]
	lea	rax, -64[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE6:
	lea	rdx, -64[rbp]
	mov	rax, QWORD PTR -120[rbp]
	mov	esi, 97
	mov	rdi, rax
.LEHB7:
	call	_ZN5TokenC1EcNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE7:
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
.L45:
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L27
.L37:
	lea	rax, -104[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -104[rbp]
	lea	rax, -64[rbp]
	lea	rsi, .LC3[rip]
	mov	rdi, rax
.LEHB8:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE8:
	lea	rax, -64[rbp]
	mov	rdi, rax
.LEHB9:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE9:
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -104[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L27
.L56:
	endbr64
	mov	rbx, rax
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L51
.L55:
	endbr64
	mov	rbx, rax
.L51:
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB10:
	call	_Unwind_Resume@PLT
.L58:
	endbr64
	mov	rbx, rax
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L53
.L57:
	endbr64
	mov	rbx, rax
.L53:
	lea	rax, -104[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.LEHE10:
.L27:
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L54
	call	__stack_chk_fail@PLT
.L54:
	mov	rax, QWORD PTR -120[rbp]
	add	rsp, 120
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6280:
	.section	.gcc_except_table,"a",@progbits
.LLSDA6280:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6280-.LLSDACSB6280
.LLSDACSB6280:
	.uleb128 .LEHB5-.LFB6280
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB6-.LFB6280
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L55-.LFB6280
	.uleb128 0
	.uleb128 .LEHB7-.LFB6280
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L56-.LFB6280
	.uleb128 0
	.uleb128 .LEHB8-.LFB6280
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L57-.LFB6280
	.uleb128 0
	.uleb128 .LEHB9-.LFB6280
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L58-.LFB6280
	.uleb128 0
	.uleb128 .LEHB10-.LFB6280
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE6280:
	.text
	.size	_ZN12Token_stream3getEv, .-_ZN12Token_stream3getEv
	.align 2
	.globl	_ZN12Token_stream6ignoreEc
	.type	_ZN12Token_stream6ignoreEc, @function
_ZN12Token_stream6ignoreEc:
.LFB6287:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	eax, esi
	mov	BYTE PTR -28[rbp], al
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -24[rbp]
	movzx	eax, BYTE PTR [rax]
	test	al, al
	je	.L60
	mov	rax, QWORD PTR -24[rbp]
	movzx	eax, BYTE PTR 8[rax]
	cmp	BYTE PTR -28[rbp], al
	jne	.L60
	mov	rax, QWORD PTR -24[rbp]
	mov	BYTE PTR [rax], 0
	jmp	.L59
.L60:
	mov	rax, QWORD PTR -24[rbp]
	mov	BYTE PTR [rax], 0
.L64:
	lea	rax, -9[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt3cin[rip]
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_@PLT
	mov	rdx, QWORD PTR [rax]
	sub	rdx, 24
	mov	rdx, QWORD PTR [rdx]
	add	rax, rdx
	mov	rdi, rax
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv@PLT
	test	al, al
	je	.L59
	movzx	eax, BYTE PTR -9[rbp]
	cmp	BYTE PTR -28[rbp], al
	je	.L67
	jmp	.L64
.L67:
	nop
.L59:
	mov	rax, QWORD PTR -8[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L66
	call	__stack_chk_fail@PLT
.L66:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6287:
	.size	_ZN12Token_stream6ignoreEc, .-_ZN12Token_stream6ignoreEc
	.section	.text._ZN8VariableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd,"axG",@progbits,_ZN8VariableC5ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd,comdat
	.align 2
	.weak	_ZN8VariableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
	.type	_ZN8VariableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd, @function
_ZN8VariableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd:
.LFB6289:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	movsd	QWORD PTR -24[rbp], xmm0
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
	mov	rax, QWORD PTR -8[rbp]
	movsd	xmm0, QWORD PTR -24[rbp]
	movsd	QWORD PTR 32[rax], xmm0
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6289:
	.size	_ZN8VariableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd, .-_ZN8VariableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
	.weak	_ZN8VariableC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
	.set	_ZN8VariableC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd,_ZN8VariableC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD2Ev,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD2Ev
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD2Ev, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD2Ev:
.LFB6296:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSaI8VariableED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6296:
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD2Ev, .-_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD2Ev
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD1Ev
	.set	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD1Ev,_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD2Ev
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev:
.LFB6298:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6298:
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev, .-_ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EEC1Ev
	.set	_ZNSt12_Vector_baseI8VariableSaIS0_EEC1Ev,_ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev
	.section	.text._ZNSt6vectorI8VariableSaIS0_EEC2Ev,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EEC5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI8VariableSaIS0_EEC2Ev
	.type	_ZNSt6vectorI8VariableSaIS0_EEC2Ev, @function
_ZNSt6vectorI8VariableSaIS0_EEC2Ev:
.LFB6300:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6300:
	.size	_ZNSt6vectorI8VariableSaIS0_EEC2Ev, .-_ZNSt6vectorI8VariableSaIS0_EEC2Ev
	.weak	_ZNSt6vectorI8VariableSaIS0_EEC1Ev
	.set	_ZNSt6vectorI8VariableSaIS0_EEC1Ev,_ZNSt6vectorI8VariableSaIS0_EEC2Ev
	.section	.text._ZN6VectorI8VariableEC2Ev,"axG",@progbits,_ZN6VectorI8VariableEC5Ev,comdat
	.align 2
	.weak	_ZN6VectorI8VariableEC2Ev
	.type	_ZN6VectorI8VariableEC2Ev, @function
_ZN6VectorI8VariableEC2Ev:
.LFB6302:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6302:
	.size	_ZN6VectorI8VariableEC2Ev, .-_ZN6VectorI8VariableEC2Ev
	.weak	_ZN6VectorI8VariableEC1Ev
	.set	_ZN6VectorI8VariableEC1Ev,_ZN6VectorI8VariableEC2Ev
	.section	.text._ZN6VectorI8VariableED2Ev,"axG",@progbits,_ZN6VectorI8VariableED5Ev,comdat
	.align 2
	.weak	_ZN6VectorI8VariableED2Ev
	.type	_ZN6VectorI8VariableED2Ev, @function
_ZN6VectorI8VariableED2Ev:
.LFB6305:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6305:
	.size	_ZN6VectorI8VariableED2Ev, .-_ZN6VectorI8VariableED2Ev
	.weak	_ZN6VectorI8VariableED1Ev
	.set	_ZN6VectorI8VariableED1Ev,_ZN6VectorI8VariableED2Ev
	.section	.text._ZN12Symbol_tableC2Ev,"axG",@progbits,_ZN12Symbol_tableC5Ev,comdat
	.align 2
	.weak	_ZN12Symbol_tableC2Ev
	.type	_ZN12Symbol_tableC2Ev, @function
_ZN12Symbol_tableC2Ev:
.LFB6307:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZN6VectorI8VariableEC1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6307:
	.size	_ZN12Symbol_tableC2Ev, .-_ZN12Symbol_tableC2Ev
	.weak	_ZN12Symbol_tableC1Ev
	.set	_ZN12Symbol_tableC1Ev,_ZN12Symbol_tableC2Ev
	.globl	sym
	.bss
	.align 16
	.type	sym, @object
	.size	sym, 24
sym:
	.zero	24
	.section	.rodata
.LC4:
	.string	"get: undefined variable "
	.text
	.align 2
	.globl	_ZN12Symbol_table9get_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_ZN12Symbol_table9get_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_ZN12Symbol_table9get_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB6309:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6309
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 104
	.cfi_offset 3, -24
	mov	QWORD PTR -104[rbp], rdi
	mov	QWORD PTR -112[rbp], rsi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -104[rbp]
	mov	QWORD PTR -80[rbp], rax
	mov	rax, QWORD PTR -80[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE5beginEv
	mov	QWORD PTR -96[rbp], rax
	mov	rax, QWORD PTR -80[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE3endEv
	mov	QWORD PTR -88[rbp], rax
.L79:
	lea	rdx, -88[rbp]
	lea	rax, -96[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	test	al, al
	je	.L76
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv
	mov	QWORD PTR -72[rbp], rax
	mov	rax, QWORD PTR -72[rbp]
	mov	rdx, QWORD PTR -112[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	test	al, al
	je	.L77
	mov	rax, QWORD PTR -72[rbp]
	movsd	xmm0, QWORD PTR 32[rax]
	jmp	.L75
.L77:
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv
	jmp	.L79
.L76:
	lea	rax, -88[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -88[rbp]
	lea	rax, -64[rbp]
	lea	rsi, .LC4[rip]
	mov	rdi, rax
.LEHB11:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE11:
	mov	rdx, QWORD PTR -112[rbp]
	lea	rax, -64[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB12:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_
.LEHE12:
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -88[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L75
.L84:
	endbr64
	mov	rbx, rax
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L81
.L83:
	endbr64
	mov	rbx, rax
.L81:
	lea	rax, -88[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB13:
	call	_Unwind_Resume@PLT
.LEHE13:
.L75:
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L82
	call	__stack_chk_fail@PLT
.L82:
	add	rsp, 104
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6309:
	.section	.gcc_except_table
.LLSDA6309:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6309-.LLSDACSB6309
.LLSDACSB6309:
	.uleb128 .LEHB11-.LFB6309
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L83-.LFB6309
	.uleb128 0
	.uleb128 .LEHB12-.LFB6309
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L84-.LFB6309
	.uleb128 0
	.uleb128 .LEHB13-.LFB6309
	.uleb128 .LEHE13-.LEHB13
	.uleb128 0
	.uleb128 0
.LLSDACSE6309:
	.text
	.size	_ZN12Symbol_table9get_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_ZN12Symbol_table9get_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.rodata
	.align 8
.LC5:
	.string	"Cant reassign value to a constant"
.LC6:
	.string	"set: undefined name "
	.text
	.align 2
	.globl	_ZN12Symbol_table9set_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
	.type	_ZN12Symbol_table9set_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd, @function
_ZN12Symbol_table9set_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd:
.LFB6310:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6310
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 136
	.cfi_offset 3, -24
	mov	QWORD PTR -120[rbp], rdi
	mov	QWORD PTR -128[rbp], rsi
	movsd	QWORD PTR -136[rbp], xmm0
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -120[rbp]
	mov	QWORD PTR -80[rbp], rax
	mov	rax, QWORD PTR -80[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE5beginEv
	mov	QWORD PTR -96[rbp], rax
	mov	rax, QWORD PTR -80[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE3endEv
	mov	QWORD PTR -88[rbp], rax
.L90:
	lea	rdx, -88[rbp]
	lea	rax, -96[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	test	al, al
	je	.L86
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv
	mov	QWORD PTR -72[rbp], rax
	mov	rax, QWORD PTR -72[rbp]
	mov	rdx, QWORD PTR -128[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	test	al, al
	je	.L87
	mov	rax, QWORD PTR -72[rbp]
	movzx	eax, BYTE PTR 40[rax]
	test	al, al
	je	.L88
	mov	rax, QWORD PTR -72[rbp]
	movsd	xmm0, QWORD PTR -136[rbp]
	movsd	QWORD PTR 32[rax], xmm0
	movsd	xmm0, QWORD PTR -136[rbp]
	jmp	.L85
.L88:
	lea	rax, -97[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -97[rbp]
	lea	rax, -64[rbp]
	lea	rsi, .LC5[rip]
	mov	rdi, rax
.LEHB14:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE14:
	lea	rax, -64[rbp]
	mov	rdi, rax
.LEHB15:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE15:
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -97[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L87:
	lea	rax, -97[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -97[rbp]
	lea	rax, -64[rbp]
	lea	rsi, .LC6[rip]
	mov	rdi, rax
.LEHB16:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE16:
	mov	rdx, QWORD PTR -128[rbp]
	lea	rax, -64[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB17:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_
.LEHE17:
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -97[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv
	jmp	.L90
.L86:
	jmp	.L85
.L97:
	endbr64
	mov	rbx, rax
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L92
.L96:
	endbr64
	mov	rbx, rax
.L92:
	lea	rax, -97[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB18:
	call	_Unwind_Resume@PLT
.L99:
	endbr64
	mov	rbx, rax
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L94
.L98:
	endbr64
	mov	rbx, rax
.L94:
	lea	rax, -97[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.LEHE18:
.L85:
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L95
	call	__stack_chk_fail@PLT
.L95:
	add	rsp, 136
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6310:
	.section	.gcc_except_table
.LLSDA6310:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6310-.LLSDACSB6310
.LLSDACSB6310:
	.uleb128 .LEHB14-.LFB6310
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L96-.LFB6310
	.uleb128 0
	.uleb128 .LEHB15-.LFB6310
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L97-.LFB6310
	.uleb128 0
	.uleb128 .LEHB16-.LFB6310
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L98-.LFB6310
	.uleb128 0
	.uleb128 .LEHB17-.LFB6310
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L99-.LFB6310
	.uleb128 0
	.uleb128 .LEHB18-.LFB6310
	.uleb128 .LEHE18-.LEHB18
	.uleb128 0
	.uleb128 0
.LLSDACSE6310:
	.text
	.size	_ZN12Symbol_table9set_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd, .-_ZN12Symbol_table9set_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
	.align 2
	.globl	_ZN12Symbol_table11is_declaredENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_ZN12Symbol_table11is_declaredENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_ZN12Symbol_table11is_declaredENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB6311:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 64
	mov	QWORD PTR -56[rbp], rdi
	mov	QWORD PTR -64[rbp], rsi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -56[rbp]
	mov	QWORD PTR -24[rbp], rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE5beginEv
	mov	QWORD PTR -40[rbp], rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE3endEv
	mov	QWORD PTR -32[rbp], rax
.L104:
	lea	rdx, -32[rbp]
	lea	rax, -40[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	test	al, al
	je	.L101
	lea	rax, -40[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv
	mov	QWORD PTR -16[rbp], rax
	mov	rax, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR -64[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	test	al, al
	je	.L102
	mov	eax, 1
	jmp	.L103
.L102:
	lea	rax, -40[rbp]
	mov	rdi, rax
	call	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv
	jmp	.L104
.L101:
	mov	eax, 0
.L103:
	mov	rcx, QWORD PTR -8[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L105
	call	__stack_chk_fail@PLT
.L105:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6311:
	.size	_ZN12Symbol_table11is_declaredENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_ZN12Symbol_table11is_declaredENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.text._ZN8VariableD2Ev,"axG",@progbits,_ZN8VariableD5Ev,comdat
	.align 2
	.weak	_ZN8VariableD2Ev
	.type	_ZN8VariableD2Ev, @function
_ZN8VariableD2Ev:
.LFB6314:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6314:
	.size	_ZN8VariableD2Ev, .-_ZN8VariableD2Ev
	.weak	_ZN8VariableD1Ev
	.set	_ZN8VariableD1Ev,_ZN8VariableD2Ev
	.section	.rodata
.LC7:
	.string	"Declared twice"
	.text
	.align 2
	.globl	_ZN12Symbol_table10predefinedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
	.type	_ZN12Symbol_table10predefinedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi, @function
_ZN12Symbol_table10predefinedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi:
.LFB6312:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6312
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 152
	.cfi_offset 3, -24
	mov	QWORD PTR -136[rbp], rdi
	mov	QWORD PTR -144[rbp], rsi
	mov	DWORD PTR -148[rbp], edx
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rdx, QWORD PTR -144[rbp]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB19:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE19:
	lea	rdx, -80[rbp]
	mov	rax, QWORD PTR -136[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN12Symbol_table11is_declaredENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	mov	ebx, eax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	test	bl, bl
	je	.L108
	lea	rax, -113[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -113[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC7[rip]
	mov	rdi, rax
.LEHB20:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE20:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB21:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE21:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -113[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L108:
	mov	rbx, QWORD PTR -136[rbp]
	cvtsi2sd	xmm1, DWORD PTR -148[rbp]
	movsd	QWORD PTR -160[rbp], xmm1
	mov	rdx, QWORD PTR -144[rbp]
	lea	rax, -112[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB22:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE22:
	lea	rdx, -112[rbp]
	lea	rax, -80[rbp]
	movsd	xmm0, QWORD PTR -160[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB23:
	call	_ZN8VariableC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
.LEHE23:
	lea	rax, -80[rbp]
	mov	rsi, rax
	mov	rdi, rbx
.LEHB24:
	call	_ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_
.LEHE24:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN8VariableD1Ev
	lea	rax, -112[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	nop
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L113
	jmp	.L118
.L115:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L110
.L114:
	endbr64
	mov	rbx, rax
.L110:
	lea	rax, -113[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB25:
	call	_Unwind_Resume@PLT
.L117:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN8VariableD1Ev
	jmp	.L112
.L116:
	endbr64
	mov	rbx, rax
.L112:
	lea	rax, -112[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.LEHE25:
.L118:
	call	__stack_chk_fail@PLT
.L113:
	add	rsp, 152
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6312:
	.section	.gcc_except_table
.LLSDA6312:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6312-.LLSDACSB6312
.LLSDACSB6312:
	.uleb128 .LEHB19-.LFB6312
	.uleb128 .LEHE19-.LEHB19
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB20-.LFB6312
	.uleb128 .LEHE20-.LEHB20
	.uleb128 .L114-.LFB6312
	.uleb128 0
	.uleb128 .LEHB21-.LFB6312
	.uleb128 .LEHE21-.LEHB21
	.uleb128 .L115-.LFB6312
	.uleb128 0
	.uleb128 .LEHB22-.LFB6312
	.uleb128 .LEHE22-.LEHB22
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB23-.LFB6312
	.uleb128 .LEHE23-.LEHB23
	.uleb128 .L116-.LFB6312
	.uleb128 0
	.uleb128 .LEHB24-.LFB6312
	.uleb128 .LEHE24-.LEHB24
	.uleb128 .L117-.LFB6312
	.uleb128 0
	.uleb128 .LEHB25-.LFB6312
	.uleb128 .LEHE25-.LEHB25
	.uleb128 0
	.uleb128 0
.LLSDACSE6312:
	.text
	.size	_ZN12Symbol_table10predefinedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi, .-_ZN12Symbol_table10predefinedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
	.globl	ts
	.bss
	.align 32
	.type	ts, @object
	.size	ts, 56
ts:
	.zero	56
	.text
	.globl	_Z7pow_numdd
	.type	_Z7pow_numdd, @function
_Z7pow_numdd:
.LFB6316:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	movsd	QWORD PTR -24[rbp], xmm0
	movsd	QWORD PTR -32[rbp], xmm1
	pxor	xmm0, xmm0
	ucomisd	xmm0, QWORD PTR -32[rbp]
	jp	.L120
	pxor	xmm0, xmm0
	ucomisd	xmm0, QWORD PTR -32[rbp]
	jne	.L120
	pxor	xmm0, xmm0
	ucomisd	xmm0, QWORD PTR -24[rbp]
	jp	.L122
	pxor	xmm0, xmm0
	ucomisd	xmm0, QWORD PTR -24[rbp]
	jne	.L122
	pxor	xmm0, xmm0
	jmp	.L124
.L122:
	movsd	xmm0, QWORD PTR .LC8[rip]
	jmp	.L124
.L120:
	movsd	xmm0, QWORD PTR -24[rbp]
	movsd	QWORD PTR -8[rbp], xmm0
	mov	DWORD PTR -12[rbp], 2
.L127:
	cvtsi2sd	xmm1, DWORD PTR -12[rbp]
	movsd	xmm0, QWORD PTR -32[rbp]
	comisd	xmm0, xmm1
	jb	.L131
	movsd	xmm0, QWORD PTR -8[rbp]
	mulsd	xmm0, QWORD PTR -24[rbp]
	movsd	QWORD PTR -8[rbp], xmm0
	add	DWORD PTR -12[rbp], 1
	jmp	.L127
.L131:
	movsd	xmm0, QWORD PTR -8[rbp]
.L124:
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6316:
	.size	_Z7pow_numdd, .-_Z7pow_numdd
	.section	.text._ZN5TokenaSEOS_,"axG",@progbits,_ZN5TokenaSEOS_,comdat
	.align 2
	.weak	_ZN5TokenaSEOS_
	.type	_ZN5TokenaSEOS_, @function
_ZN5TokenaSEOS_:
.LFB6321:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	movzx	edx, BYTE PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	BYTE PTR [rax], dl
	mov	rax, QWORD PTR -16[rbp]
	movsd	xmm0, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -8[rbp]
	movsd	QWORD PTR 8[rax], xmm0
	mov	rax, QWORD PTR -16[rbp]
	lea	rdx, 16[rax]
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 16
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSEOS4_@PLT
	mov	rax, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6321:
	.size	_ZN5TokenaSEOS_, .-_ZN5TokenaSEOS_
	.section	.rodata
.LC9:
	.string	"')' expected"
.LC11:
	.string	"Expected ("
.LC12:
	.string	"Less than 0 error for sqrt"
.LC13:
	.string	"Expected )"
.LC14:
	.string	"Expecting ("
.LC15:
	.string	"Expecting ,"
	.align 8
.LC16:
	.string	"Second arguemnt of pow is not an number"
	.align 8
.LC17:
	.string	"Second argument is not an valid number"
.LC18:
	.string	"Expecting )"
.LC19:
	.string	"primary expected"
	.text
	.globl	_Z7primaryR12Token_stream
	.type	_Z7primaryR12Token_stream, @function
_Z7primaryR12Token_stream:
.LFB6317:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6317
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	sub	rsp, 464
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	mov	QWORD PTR -472[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	lea	rax, -416[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB26:
	call	_ZN12Token_stream3getEv
.LEHE26:
	movzx	eax, BYTE PTR -416[rbp]
	movsx	eax, al
	cmp	eax, 115
	je	.L135
	cmp	eax, 115
	jg	.L136
	cmp	eax, 112
	je	.L137
	cmp	eax, 112
	jg	.L136
	cmp	eax, 97
	je	.L138
	cmp	eax, 97
	jg	.L136
	cmp	eax, 56
	je	.L139
	cmp	eax, 56
	jg	.L136
	cmp	eax, 40
	je	.L140
	cmp	eax, 45
	je	.L141
	jmp	.L136
.L140:
	mov	rax, QWORD PTR -472[rbp]
	mov	rdi, rax
.LEHB27:
	call	_Z10expressionR12Token_stream
	movq	rax, xmm0
	mov	QWORD PTR -424[rbp], rax
	lea	rax, -368[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN12Token_stream3getEv
.LEHE27:
	lea	rdx, -368[rbp]
	lea	rax, -416[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -368[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movzx	eax, BYTE PTR -416[rbp]
	cmp	al, 41
	je	.L141
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC9[rip]
	mov	rdi, rax
.LEHB28:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE28:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB29:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE29:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L141:
	mov	rax, QWORD PTR -472[rbp]
	mov	rdi, rax
.LEHB30:
	call	_Z7primaryR12Token_stream
	movq	xmm1, QWORD PTR .LC10[rip]
	xorpd	xmm0, xmm1
	movq	rbx, xmm0
	mov	r12d, 0
	jmp	.L142
.L139:
	mov	rbx, QWORD PTR -408[rbp]
	mov	r12d, 0
	jmp	.L142
.L138:
	lea	rax, -128[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN12Token_stream3getEv
.LEHE30:
	movzx	eax, BYTE PTR -128[rbp]
	cmp	al, 61
	jne	.L143
	mov	rax, QWORD PTR -472[rbp]
	mov	rdi, rax
.LEHB31:
	call	_Z10expressionR12Token_stream
	movq	rax, xmm0
	mov	QWORD PTR -432[rbp], rax
	lea	rax, -416[rbp]
	lea	rdx, 16[rax]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE31:
	mov	rdx, QWORD PTR -432[rbp]
	lea	rax, -80[rbp]
	movq	xmm0, rdx
	mov	rsi, rax
	lea	rdi, sym[rip]
.LEHB32:
	call	_ZN12Symbol_table9set_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
.LEHE32:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	mov	rbx, QWORD PTR -432[rbp]
	jmp	.L144
.L143:
	lea	rdx, -128[rbp]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB33:
	call	_ZN5TokenC1ERKS_
.LEHE33:
	lea	rdx, -80[rbp]
	mov	rax, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB34:
	call	_ZN12Token_stream5ungetE5Token
.LEHE34:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	lea	rax, -416[rbp]
	lea	rdx, 16[rax]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB35:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE35:
	lea	rax, -80[rbp]
	mov	rsi, rax
	lea	rdi, sym[rip]
.LEHB36:
	call	_ZN12Symbol_table9get_valueENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE36:
	movq	rbx, xmm0
	nop
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
.L144:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	r12d, 0
	jmp	.L142
.L135:
	lea	rax, -320[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB37:
	call	_ZN12Token_stream3getEv
.LEHE37:
	lea	rdx, -320[rbp]
	lea	rax, -416[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -320[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movzx	eax, BYTE PTR -416[rbp]
	cmp	al, 40
	je	.L145
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC11[rip]
	mov	rdi, rax
.LEHB38:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE38:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB39:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE39:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L145:
	mov	rax, QWORD PTR -472[rbp]
	mov	rdi, rax
.LEHB40:
	call	_Z10expressionR12Token_stream
.LEHE40:
	movq	rax, xmm0
	mov	QWORD PTR -448[rbp], rax
	pxor	xmm0, xmm0
	comisd	xmm0, QWORD PTR -448[rbp]
	jbe	.L146
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC12[rip]
	mov	rdi, rax
.LEHB41:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE41:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB42:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE42:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L146:
	lea	rax, -272[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB43:
	call	_ZN12Token_stream3getEv
.LEHE43:
	lea	rdx, -272[rbp]
	lea	rax, -416[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -272[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movzx	eax, BYTE PTR -416[rbp]
	cmp	al, 41
	je	.L148
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC13[rip]
	mov	rdi, rax
.LEHB44:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE44:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB45:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE45:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L148:
	mov	rax, QWORD PTR -448[rbp]
	movq	xmm0, rax
	call	sqrt@PLT
	movq	rbx, xmm0
	mov	r12d, 0
	jmp	.L142
.L137:
	lea	rax, -224[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB46:
	call	_ZN12Token_stream3getEv
.LEHE46:
	lea	rdx, -224[rbp]
	lea	rax, -416[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -224[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movzx	eax, BYTE PTR -416[rbp]
	cmp	al, 40
	je	.L149
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC14[rip]
	mov	rdi, rax
.LEHB47:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE47:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB48:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE48:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L149:
	mov	rax, QWORD PTR -472[rbp]
	mov	rdi, rax
.LEHB49:
	call	_Z10expressionR12Token_stream
	movq	rax, xmm0
	mov	QWORD PTR -440[rbp], rax
	lea	rax, -176[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN12Token_stream3getEv
.LEHE49:
	lea	rdx, -176[rbp]
	lea	rax, -416[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -176[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movzx	eax, BYTE PTR -416[rbp]
	cmp	al, 44
	je	.L150
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC15[rip]
	mov	rdi, rax
.LEHB50:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE50:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB51:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE51:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L150:
	lea	rax, -128[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB52:
	call	_ZN12Token_stream3getEv
.LEHE52:
	lea	rdx, -128[rbp]
	lea	rax, -416[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movzx	eax, BYTE PTR -416[rbp]
	cmp	al, 56
	je	.L151
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC16[rip]
	mov	rdi, rax
.LEHB53:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE53:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB54:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE54:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L151:
	movsd	xmm0, QWORD PTR -408[rbp]
	cvttsd2si	eax, xmm0
	mov	DWORD PTR -452[rbp], eax
	cvtsi2sd	xmm0, DWORD PTR -452[rbp]
	movsd	xmm1, QWORD PTR -408[rbp]
	ucomisd	xmm0, xmm1
	jp	.L209
	ucomisd	xmm0, xmm1
	je	.L152
.L209:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC17[rip]
	mov	rdi, rax
.LEHB55:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE55:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB56:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE56:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L152:
	lea	rax, -80[rbp]
	mov	rdx, QWORD PTR -472[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB57:
	call	_ZN12Token_stream3getEv
.LEHE57:
	lea	rdx, -80[rbp]
	lea	rax, -416[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movzx	eax, BYTE PTR -416[rbp]
	cmp	al, 41
	je	.L154
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC18[rip]
	mov	rdi, rax
.LEHB58:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE58:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB59:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE59:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L154:
	cvtsi2sd	xmm0, DWORD PTR -452[rbp]
	mov	rax, QWORD PTR -440[rbp]
	movapd	xmm1, xmm0
	movq	xmm0, rax
	call	_Z7pow_numdd
	movq	rbx, xmm0
	mov	r12d, 0
	jmp	.L142
.L136:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -453[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC19[rip]
	mov	rdi, rax
.LEHB60:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE60:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB61:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE61:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	r12d, 1
.L142:
	lea	rax, -416[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	cmp	r12d, 1
	jne	.L156
	jmp	.L134
.L156:
	movq	xmm0, rbx
	jmp	.L134
.L185:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L158
.L184:
	endbr64
	mov	rbx, rax
.L158:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L187:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L161
.L188:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L161
.L189:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L161
.L186:
	endbr64
	mov	rbx, rax
.L161:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L159
.L191:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L165
.L190:
	endbr64
	mov	rbx, rax
.L165:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L193:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L167
.L192:
	endbr64
	mov	rbx, rax
.L167:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L195:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L169
.L194:
	endbr64
	mov	rbx, rax
.L169:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L197:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L171
.L196:
	endbr64
	mov	rbx, rax
.L171:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L199:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L173
.L198:
	endbr64
	mov	rbx, rax
.L173:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L201:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L175
.L200:
	endbr64
	mov	rbx, rax
.L175:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L203:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L177
.L202:
	endbr64
	mov	rbx, rax
.L177:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L205:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L179
.L204:
	endbr64
	mov	rbx, rax
.L179:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L207:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L181
.L206:
	endbr64
	mov	rbx, rax
.L181:
	lea	rax, -453[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L159
.L183:
	endbr64
	mov	rbx, rax
.L159:
	lea	rax, -416[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB62:
	call	_Unwind_Resume@PLT
.LEHE62:
.L134:
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L182
	call	__stack_chk_fail@PLT
.L182:
	add	rsp, 464
	pop	rbx
	pop	r12
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6317:
	.section	.gcc_except_table
.LLSDA6317:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6317-.LLSDACSB6317
.LLSDACSB6317:
	.uleb128 .LEHB26-.LFB6317
	.uleb128 .LEHE26-.LEHB26
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB27-.LFB6317
	.uleb128 .LEHE27-.LEHB27
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB28-.LFB6317
	.uleb128 .LEHE28-.LEHB28
	.uleb128 .L184-.LFB6317
	.uleb128 0
	.uleb128 .LEHB29-.LFB6317
	.uleb128 .LEHE29-.LEHB29
	.uleb128 .L185-.LFB6317
	.uleb128 0
	.uleb128 .LEHB30-.LFB6317
	.uleb128 .LEHE30-.LEHB30
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB31-.LFB6317
	.uleb128 .LEHE31-.LEHB31
	.uleb128 .L186-.LFB6317
	.uleb128 0
	.uleb128 .LEHB32-.LFB6317
	.uleb128 .LEHE32-.LEHB32
	.uleb128 .L187-.LFB6317
	.uleb128 0
	.uleb128 .LEHB33-.LFB6317
	.uleb128 .LEHE33-.LEHB33
	.uleb128 .L186-.LFB6317
	.uleb128 0
	.uleb128 .LEHB34-.LFB6317
	.uleb128 .LEHE34-.LEHB34
	.uleb128 .L188-.LFB6317
	.uleb128 0
	.uleb128 .LEHB35-.LFB6317
	.uleb128 .LEHE35-.LEHB35
	.uleb128 .L186-.LFB6317
	.uleb128 0
	.uleb128 .LEHB36-.LFB6317
	.uleb128 .LEHE36-.LEHB36
	.uleb128 .L189-.LFB6317
	.uleb128 0
	.uleb128 .LEHB37-.LFB6317
	.uleb128 .LEHE37-.LEHB37
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB38-.LFB6317
	.uleb128 .LEHE38-.LEHB38
	.uleb128 .L190-.LFB6317
	.uleb128 0
	.uleb128 .LEHB39-.LFB6317
	.uleb128 .LEHE39-.LEHB39
	.uleb128 .L191-.LFB6317
	.uleb128 0
	.uleb128 .LEHB40-.LFB6317
	.uleb128 .LEHE40-.LEHB40
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB41-.LFB6317
	.uleb128 .LEHE41-.LEHB41
	.uleb128 .L192-.LFB6317
	.uleb128 0
	.uleb128 .LEHB42-.LFB6317
	.uleb128 .LEHE42-.LEHB42
	.uleb128 .L193-.LFB6317
	.uleb128 0
	.uleb128 .LEHB43-.LFB6317
	.uleb128 .LEHE43-.LEHB43
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB44-.LFB6317
	.uleb128 .LEHE44-.LEHB44
	.uleb128 .L194-.LFB6317
	.uleb128 0
	.uleb128 .LEHB45-.LFB6317
	.uleb128 .LEHE45-.LEHB45
	.uleb128 .L195-.LFB6317
	.uleb128 0
	.uleb128 .LEHB46-.LFB6317
	.uleb128 .LEHE46-.LEHB46
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB47-.LFB6317
	.uleb128 .LEHE47-.LEHB47
	.uleb128 .L196-.LFB6317
	.uleb128 0
	.uleb128 .LEHB48-.LFB6317
	.uleb128 .LEHE48-.LEHB48
	.uleb128 .L197-.LFB6317
	.uleb128 0
	.uleb128 .LEHB49-.LFB6317
	.uleb128 .LEHE49-.LEHB49
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB50-.LFB6317
	.uleb128 .LEHE50-.LEHB50
	.uleb128 .L198-.LFB6317
	.uleb128 0
	.uleb128 .LEHB51-.LFB6317
	.uleb128 .LEHE51-.LEHB51
	.uleb128 .L199-.LFB6317
	.uleb128 0
	.uleb128 .LEHB52-.LFB6317
	.uleb128 .LEHE52-.LEHB52
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB53-.LFB6317
	.uleb128 .LEHE53-.LEHB53
	.uleb128 .L200-.LFB6317
	.uleb128 0
	.uleb128 .LEHB54-.LFB6317
	.uleb128 .LEHE54-.LEHB54
	.uleb128 .L201-.LFB6317
	.uleb128 0
	.uleb128 .LEHB55-.LFB6317
	.uleb128 .LEHE55-.LEHB55
	.uleb128 .L202-.LFB6317
	.uleb128 0
	.uleb128 .LEHB56-.LFB6317
	.uleb128 .LEHE56-.LEHB56
	.uleb128 .L203-.LFB6317
	.uleb128 0
	.uleb128 .LEHB57-.LFB6317
	.uleb128 .LEHE57-.LEHB57
	.uleb128 .L183-.LFB6317
	.uleb128 0
	.uleb128 .LEHB58-.LFB6317
	.uleb128 .LEHE58-.LEHB58
	.uleb128 .L204-.LFB6317
	.uleb128 0
	.uleb128 .LEHB59-.LFB6317
	.uleb128 .LEHE59-.LEHB59
	.uleb128 .L205-.LFB6317
	.uleb128 0
	.uleb128 .LEHB60-.LFB6317
	.uleb128 .LEHE60-.LEHB60
	.uleb128 .L206-.LFB6317
	.uleb128 0
	.uleb128 .LEHB61-.LFB6317
	.uleb128 .LEHE61-.LEHB61
	.uleb128 .L207-.LFB6317
	.uleb128 0
	.uleb128 .LEHB62-.LFB6317
	.uleb128 .LEHE62-.LEHB62
	.uleb128 0
	.uleb128 0
.LLSDACSE6317:
	.text
	.size	_Z7primaryR12Token_stream, .-_Z7primaryR12Token_stream
	.section	.rodata
.LC20:
	.string	"divide by zero"
.LC21:
	.string	"Value is not an integer"
.LC22:
	.string	"Value is not an ingeger"
	.text
	.globl	_Z4termR12Token_stream
	.type	_Z4termR12Token_stream, @function
_Z4termR12Token_stream:
.LFB6322:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6322
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 184
	.cfi_offset 3, -24
	mov	QWORD PTR -184[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -184[rbp]
	mov	rdi, rax
.LEHB63:
	call	_Z7primaryR12Token_stream
	movq	rax, xmm0
	mov	QWORD PTR -152[rbp], rax
.L223:
	lea	rax, -128[rbp]
	mov	rdx, QWORD PTR -184[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN12Token_stream3getEv
.LEHE63:
	movzx	eax, BYTE PTR -128[rbp]
	movsx	eax, al
	cmp	eax, 47
	je	.L211
	cmp	eax, 47
	jg	.L212
	cmp	eax, 37
	je	.L213
	cmp	eax, 42
	jne	.L212
	mov	rax, QWORD PTR -184[rbp]
	mov	rdi, rax
.LEHB64:
	call	_Z7primaryR12Token_stream
	movsd	xmm1, QWORD PTR -152[rbp]
	mulsd	xmm0, xmm1
	movsd	QWORD PTR -152[rbp], xmm0
	jmp	.L214
.L211:
	mov	rax, QWORD PTR -184[rbp]
	mov	rdi, rax
	call	_Z7primaryR12Token_stream
.LEHE64:
	movq	rax, xmm0
	mov	QWORD PTR -144[rbp], rax
	pxor	xmm0, xmm0
	ucomisd	xmm0, QWORD PTR -144[rbp]
	jp	.L215
	pxor	xmm0, xmm0
	ucomisd	xmm0, QWORD PTR -144[rbp]
	jne	.L215
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -161[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC20[rip]
	mov	rdi, rax
.LEHB65:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE65:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB66:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE66:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L215:
	movsd	xmm0, QWORD PTR -152[rbp]
	divsd	xmm0, QWORD PTR -144[rbp]
	movsd	QWORD PTR -152[rbp], xmm0
	jmp	.L214
.L213:
	movsd	xmm0, QWORD PTR -152[rbp]
	cvttsd2si	eax, xmm0
	mov	DWORD PTR -160[rbp], eax
	cvtsi2sd	xmm0, DWORD PTR -160[rbp]
	ucomisd	xmm0, QWORD PTR -152[rbp]
	jp	.L243
	ucomisd	xmm0, QWORD PTR -152[rbp]
	je	.L217
.L243:
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -161[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC21[rip]
	mov	rdi, rax
.LEHB67:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE67:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB68:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE68:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L217:
	mov	rax, QWORD PTR -184[rbp]
	mov	rdi, rax
.LEHB69:
	call	_Z7primaryR12Token_stream
.LEHE69:
	movq	rax, xmm0
	mov	QWORD PTR -136[rbp], rax
	movsd	xmm0, QWORD PTR -136[rbp]
	cvttsd2si	eax, xmm0
	mov	DWORD PTR -156[rbp], eax
	cvtsi2sd	xmm0, DWORD PTR -156[rbp]
	ucomisd	xmm0, QWORD PTR -136[rbp]
	jp	.L244
	ucomisd	xmm0, QWORD PTR -136[rbp]
	je	.L219
.L244:
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -161[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC22[rip]
	mov	rdi, rax
.LEHB70:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE70:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB71:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE71:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L219:
	mov	eax, DWORD PTR -160[rbp]
	cdq
	idiv	DWORD PTR -156[rbp]
	mov	eax, edx
	cvtsi2sd	xmm0, eax
	movsd	QWORD PTR -152[rbp], xmm0
	jmp	.L214
.L212:
	lea	rdx, -128[rbp]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB72:
	call	_ZN5TokenC1ERKS_
.LEHE72:
	lea	rdx, -80[rbp]
	mov	rax, QWORD PTR -184[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB73:
	call	_ZN12Token_stream5ungetE5Token
.LEHE73:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movsd	xmm2, QWORD PTR -152[rbp]
	movsd	QWORD PTR -192[rbp], xmm2
	mov	ebx, 0
	jmp	.L221
.L214:
	mov	ebx, 1
.L221:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	cmp	ebx, 1
	jne	.L224
	jmp	.L223
.L224:
	movsd	xmm0, QWORD PTR -192[rbp]
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L233
	jmp	.L245
.L236:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L226
.L235:
	endbr64
	mov	rbx, rax
.L226:
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L227
.L238:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L229
.L237:
	endbr64
	mov	rbx, rax
.L229:
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L227
.L240:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L231
.L239:
	endbr64
	mov	rbx, rax
.L231:
	lea	rax, -161[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L227
.L241:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L227
.L234:
	endbr64
	mov	rbx, rax
.L227:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB74:
	call	_Unwind_Resume@PLT
.LEHE74:
.L245:
	call	__stack_chk_fail@PLT
.L233:
	add	rsp, 184
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6322:
	.section	.gcc_except_table
.LLSDA6322:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6322-.LLSDACSB6322
.LLSDACSB6322:
	.uleb128 .LEHB63-.LFB6322
	.uleb128 .LEHE63-.LEHB63
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB64-.LFB6322
	.uleb128 .LEHE64-.LEHB64
	.uleb128 .L234-.LFB6322
	.uleb128 0
	.uleb128 .LEHB65-.LFB6322
	.uleb128 .LEHE65-.LEHB65
	.uleb128 .L235-.LFB6322
	.uleb128 0
	.uleb128 .LEHB66-.LFB6322
	.uleb128 .LEHE66-.LEHB66
	.uleb128 .L236-.LFB6322
	.uleb128 0
	.uleb128 .LEHB67-.LFB6322
	.uleb128 .LEHE67-.LEHB67
	.uleb128 .L237-.LFB6322
	.uleb128 0
	.uleb128 .LEHB68-.LFB6322
	.uleb128 .LEHE68-.LEHB68
	.uleb128 .L238-.LFB6322
	.uleb128 0
	.uleb128 .LEHB69-.LFB6322
	.uleb128 .LEHE69-.LEHB69
	.uleb128 .L234-.LFB6322
	.uleb128 0
	.uleb128 .LEHB70-.LFB6322
	.uleb128 .LEHE70-.LEHB70
	.uleb128 .L239-.LFB6322
	.uleb128 0
	.uleb128 .LEHB71-.LFB6322
	.uleb128 .LEHE71-.LEHB71
	.uleb128 .L240-.LFB6322
	.uleb128 0
	.uleb128 .LEHB72-.LFB6322
	.uleb128 .LEHE72-.LEHB72
	.uleb128 .L234-.LFB6322
	.uleb128 0
	.uleb128 .LEHB73-.LFB6322
	.uleb128 .LEHE73-.LEHB73
	.uleb128 .L241-.LFB6322
	.uleb128 0
	.uleb128 .LEHB74-.LFB6322
	.uleb128 .LEHE74-.LEHB74
	.uleb128 0
	.uleb128 0
.LLSDACSE6322:
	.text
	.size	_Z4termR12Token_stream, .-_Z4termR12Token_stream
	.globl	_Z10expressionR12Token_stream
	.type	_Z10expressionR12Token_stream, @function
_Z10expressionR12Token_stream:
.LFB6323:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6323
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 152
	.cfi_offset 3, -24
	mov	QWORD PTR -152[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -152[rbp]
	mov	rdi, rax
.LEHB75:
	call	_Z4termR12Token_stream
	movq	rax, xmm0
	mov	QWORD PTR -136[rbp], rax
.L253:
	lea	rax, -128[rbp]
	mov	rdx, QWORD PTR -152[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN12Token_stream3getEv
.LEHE75:
	movzx	eax, BYTE PTR -128[rbp]
	movsx	eax, al
	cmp	eax, 43
	je	.L247
	cmp	eax, 45
	je	.L248
	jmp	.L260
.L247:
	mov	rax, QWORD PTR -152[rbp]
	mov	rdi, rax
.LEHB76:
	call	_Z4termR12Token_stream
	movsd	xmm1, QWORD PTR -136[rbp]
	addsd	xmm0, xmm1
	movsd	QWORD PTR -136[rbp], xmm0
	jmp	.L250
.L248:
	mov	rax, QWORD PTR -152[rbp]
	mov	rdi, rax
	call	_Z4termR12Token_stream
	movsd	xmm1, QWORD PTR -136[rbp]
	subsd	xmm1, xmm0
	movapd	xmm0, xmm1
	movsd	QWORD PTR -136[rbp], xmm0
	jmp	.L250
.L260:
	lea	rdx, -128[rbp]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenC1ERKS_
.LEHE76:
	lea	rdx, -80[rbp]
	mov	rax, QWORD PTR -152[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB77:
	call	_ZN12Token_stream5ungetE5Token
.LEHE77:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movsd	xmm2, QWORD PTR -136[rbp]
	movsd	QWORD PTR -160[rbp], xmm2
	mov	ebx, 0
	jmp	.L251
.L250:
	mov	ebx, 1
.L251:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	cmp	ebx, 1
	jne	.L254
	jmp	.L253
.L254:
	movsd	xmm0, QWORD PTR -160[rbp]
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L257
	jmp	.L261
.L259:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L256
.L258:
	endbr64
	mov	rbx, rax
.L256:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB78:
	call	_Unwind_Resume@PLT
.LEHE78:
.L261:
	call	__stack_chk_fail@PLT
.L257:
	add	rsp, 152
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6323:
	.section	.gcc_except_table
.LLSDA6323:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6323-.LLSDACSB6323
.LLSDACSB6323:
	.uleb128 .LEHB75-.LFB6323
	.uleb128 .LEHE75-.LEHB75
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB76-.LFB6323
	.uleb128 .LEHE76-.LEHB76
	.uleb128 .L258-.LFB6323
	.uleb128 0
	.uleb128 .LEHB77-.LFB6323
	.uleb128 .LEHE77-.LEHB77
	.uleb128 .L259-.LFB6323
	.uleb128 0
	.uleb128 .LEHB78-.LFB6323
	.uleb128 .LEHE78-.LEHB78
	.uleb128 0
	.uleb128 0
.LLSDACSE6323:
	.text
	.size	_Z10expressionR12Token_stream, .-_Z10expressionR12Token_stream
	.section	.rodata
.LC23:
	.string	"name expected in declaration"
.LC24:
	.string	"= missing"
	.text
	.globl	_Z11declarationv
	.type	_Z11declarationv, @function
_Z11declarationv:
.LFB6324:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6324
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 216
	.cfi_offset 3, -24
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	lea	rax, -128[rbp]
	lea	rsi, ts[rip]
	mov	rdi, rax
.LEHB79:
	call	_ZN12Token_stream3getEv
.LEHE79:
	movzx	eax, BYTE PTR -128[rbp]
	cmp	al, 97
	je	.L263
	lea	rax, -201[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -201[rbp]
	lea	rax, -80[rbp]
	lea	rsi, .LC23[rip]
	mov	rdi, rax
.LEHB80:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE80:
	lea	rax, -80[rbp]
	mov	rdi, rax
.LEHB81:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE81:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -201[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L263:
	lea	rax, -128[rbp]
	lea	rdx, 16[rax]
	lea	rax, -192[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB82:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE82:
	lea	rax, -80[rbp]
	lea	rsi, ts[rip]
	mov	rdi, rax
.LEHB83:
	call	_ZN12Token_stream3getEv
.LEHE83:
	movzx	eax, BYTE PTR -80[rbp]
	cmp	al, 61
	je	.L264
	lea	rax, -201[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rdx, -201[rbp]
	lea	rax, -160[rbp]
	lea	rsi, .LC24[rip]
	mov	rdi, rax
.LEHB84:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE84:
	lea	rax, -160[rbp]
	mov	rdi, rax
.LEHB85:
	call	_Z5errorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE85:
	lea	rax, -160[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -201[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
.L264:
	lea	rdi, ts[rip]
.LEHB86:
	call	_Z10expressionR12Token_stream
	movq	rax, xmm0
	mov	QWORD PTR -200[rbp], rax
	movsd	xmm0, QWORD PTR -200[rbp]
	cvttsd2si	ebx, xmm0
	lea	rdx, -192[rbp]
	lea	rax, -160[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE86:
	lea	rax, -160[rbp]
	mov	edx, ebx
	mov	rsi, rax
	lea	rdi, sym[rip]
.LEHB87:
	call	_ZN12Symbol_table10predefinedENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
.LEHE87:
	lea	rax, -160[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	movsd	xmm1, QWORD PTR -200[rbp]
	movsd	QWORD PTR -216[rbp], xmm1
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	lea	rax, -192[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movsd	xmm0, QWORD PTR -216[rbp]
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L274
	jmp	.L283
.L276:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L267
.L275:
	endbr64
	mov	rbx, rax
.L267:
	lea	rax, -201[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L268
.L280:
	endbr64
	mov	rbx, rax
	lea	rax, -160[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L270
.L279:
	endbr64
	mov	rbx, rax
.L270:
	lea	rax, -201[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	jmp	.L271
.L282:
	endbr64
	mov	rbx, rax
	lea	rax, -160[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L271
.L281:
	endbr64
	mov	rbx, rax
.L271:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L273
.L278:
	endbr64
	mov	rbx, rax
.L273:
	lea	rax, -192[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	jmp	.L268
.L277:
	endbr64
	mov	rbx, rax
.L268:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB88:
	call	_Unwind_Resume@PLT
.LEHE88:
.L283:
	call	__stack_chk_fail@PLT
.L274:
	add	rsp, 216
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6324:
	.section	.gcc_except_table
.LLSDA6324:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6324-.LLSDACSB6324
.LLSDACSB6324:
	.uleb128 .LEHB79-.LFB6324
	.uleb128 .LEHE79-.LEHB79
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB80-.LFB6324
	.uleb128 .LEHE80-.LEHB80
	.uleb128 .L275-.LFB6324
	.uleb128 0
	.uleb128 .LEHB81-.LFB6324
	.uleb128 .LEHE81-.LEHB81
	.uleb128 .L276-.LFB6324
	.uleb128 0
	.uleb128 .LEHB82-.LFB6324
	.uleb128 .LEHE82-.LEHB82
	.uleb128 .L277-.LFB6324
	.uleb128 0
	.uleb128 .LEHB83-.LFB6324
	.uleb128 .LEHE83-.LEHB83
	.uleb128 .L278-.LFB6324
	.uleb128 0
	.uleb128 .LEHB84-.LFB6324
	.uleb128 .LEHE84-.LEHB84
	.uleb128 .L279-.LFB6324
	.uleb128 0
	.uleb128 .LEHB85-.LFB6324
	.uleb128 .LEHE85-.LEHB85
	.uleb128 .L280-.LFB6324
	.uleb128 0
	.uleb128 .LEHB86-.LFB6324
	.uleb128 .LEHE86-.LEHB86
	.uleb128 .L281-.LFB6324
	.uleb128 0
	.uleb128 .LEHB87-.LFB6324
	.uleb128 .LEHE87-.LEHB87
	.uleb128 .L282-.LFB6324
	.uleb128 0
	.uleb128 .LEHB88-.LFB6324
	.uleb128 .LEHE88-.LEHB88
	.uleb128 0
	.uleb128 0
.LLSDACSE6324:
	.text
	.size	_Z11declarationv, .-_Z11declarationv
	.globl	_Z9statementv
	.type	_Z9statementv, @function
_Z9statementv:
.LFB6325:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6325
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 136
	.cfi_offset 3, -24
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	lea	rax, -128[rbp]
	lea	rsi, ts[rip]
	mov	rdi, rax
.LEHB89:
	call	_ZN12Token_stream3getEv
.LEHE89:
	movzx	eax, BYTE PTR -128[rbp]
	movsx	eax, al
	cmp	eax, 35
	je	.L285
	cmp	eax, 67
	je	.L286
	jmp	.L295
.L285:
.LEHB90:
	call	_Z11declarationv
	movsd	QWORD PTR -136[rbp], xmm0
	jmp	.L288
.L286:
	call	_Z11declarationv
	movsd	QWORD PTR -136[rbp], xmm0
	jmp	.L288
.L295:
	lea	rdx, -128[rbp]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenC1ERKS_
.LEHE90:
	lea	rax, -80[rbp]
	mov	rsi, rax
	lea	rdi, ts[rip]
.LEHB91:
	call	_ZN12Token_stream5ungetE5Token
.LEHE91:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	lea	rdi, ts[rip]
.LEHB92:
	call	_Z10expressionR12Token_stream
.LEHE92:
	movsd	QWORD PTR -136[rbp], xmm0
	nop
.L288:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	movsd	xmm0, QWORD PTR -136[rbp]
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L292
	jmp	.L296
.L294:
	endbr64
	mov	rbx, rax
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L291
.L293:
	endbr64
	mov	rbx, rax
.L291:
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	rax, rbx
	mov	rdi, rax
.LEHB93:
	call	_Unwind_Resume@PLT
.LEHE93:
.L296:
	call	__stack_chk_fail@PLT
.L292:
	add	rsp, 136
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6325:
	.section	.gcc_except_table
.LLSDA6325:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6325-.LLSDACSB6325
.LLSDACSB6325:
	.uleb128 .LEHB89-.LFB6325
	.uleb128 .LEHE89-.LEHB89
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB90-.LFB6325
	.uleb128 .LEHE90-.LEHB90
	.uleb128 .L293-.LFB6325
	.uleb128 0
	.uleb128 .LEHB91-.LFB6325
	.uleb128 .LEHE91-.LEHB91
	.uleb128 .L294-.LFB6325
	.uleb128 0
	.uleb128 .LEHB92-.LFB6325
	.uleb128 .LEHE92-.LEHB92
	.uleb128 .L293-.LFB6325
	.uleb128 0
	.uleb128 .LEHB93-.LFB6325
	.uleb128 .LEHE93-.LEHB93
	.uleb128 0
	.uleb128 0
.LLSDACSE6325:
	.text
	.size	_Z9statementv, .-_Z9statementv
	.globl	_Z13clean_up_messv
	.type	_Z13clean_up_messv, @function
_Z13clean_up_messv:
.LFB6326:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 59
	lea	rdi, ts[rip]
	call	_ZN12Token_stream6ignoreEc
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6326:
	.size	_Z13clean_up_messv, .-_Z13clean_up_messv
	.local	_ZL6prompt
	.comm	_ZL6prompt,32,32
	.local	_ZL6result
	.comm	_ZL6result,32,32
	.globl	_Z9calculatev
	.type	_Z9calculatev, @function
_Z9calculatev:
.LFB6327:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6327
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	sub	rsp, 224
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
.L309:
	lea	rsi, _ZL6prompt[rip]
	lea	rdi, _ZSt4cout[rip]
.LEHB94:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	lea	rax, -224[rbp]
	lea	rsi, ts[rip]
	mov	rdi, rax
	call	_ZN12Token_stream3getEv
.LEHE94:
.L300:
	movzx	eax, BYTE PTR -224[rbp]
	cmp	al, 59
	jne	.L299
	lea	rax, -176[rbp]
	lea	rsi, ts[rip]
	mov	rdi, rax
.LEHB95:
	call	_ZN12Token_stream3getEv
	lea	rdx, -176[rbp]
	lea	rax, -224[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -176[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L300
.L299:
	movzx	eax, BYTE PTR -224[rbp]
	cmp	al, 81
	jne	.L301
	mov	ebx, 0
	jmp	.L302
.L301:
	movzx	eax, BYTE PTR -224[rbp]
	cmp	al, 104
	je	.L303
	movzx	eax, BYTE PTR -224[rbp]
	cmp	al, 72
	jne	.L304
.L303:
	call	_Z4helpv
	lea	rax, -128[rbp]
	lea	rsi, ts[rip]
	mov	rdi, rax
	call	_ZN12Token_stream3getEv
	lea	rdx, -128[rbp]
	lea	rax, -224[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenaSEOS_
	lea	rax, -128[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	ebx, 1
	jmp	.L302
.L304:
	lea	rdx, -224[rbp]
	lea	rax, -80[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN5TokenC1ERKS_
.LEHE95:
	lea	rax, -80[rbp]
	mov	rsi, rax
	lea	rdi, ts[rip]
.LEHB96:
	call	_ZN12Token_stream5ungetE5Token
.LEHE96:
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	lea	rsi, _ZL6result[rip]
	lea	rdi, _ZSt4cout[rip]
.LEHB97:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE@PLT
	mov	rbx, rax
	call	_Z9statementv
	mov	rdi, rbx
	call	_ZNSolsEd@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZNSolsEPFRSoS_E@PLT
.LEHE97:
	mov	ebx, 2
.L302:
	lea	rax, -224[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	test	ebx, ebx
	je	.L320
	cmp	ebx, 2
	jmp	.L309
.L318:
	endbr64
	mov	r12, rax
	mov	rbx, rdx
	lea	rax, -80[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	jmp	.L311
.L317:
	endbr64
	mov	r12, rax
	mov	rbx, rdx
.L311:
	lea	rax, -224[rbp]
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	mov	rax, r12
	mov	rdx, rbx
	jmp	.L312
.L316:
	endbr64
.L312:
	cmp	rdx, 1
	je	.L313
	mov	rdi, rax
.LEHB98:
	call	_Unwind_Resume@PLT
.LEHE98:
.L313:
	mov	rdi, rax
	call	__cxa_begin_catch@PLT
	mov	QWORD PTR -232[rbp], rax
	mov	rax, QWORD PTR -232[rbp]
	mov	rax, QWORD PTR [rax]
	add	rax, 16
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -232[rbp]
	mov	rdi, rax
	call	rdx
	mov	rsi, rax
	lea	rdi, _ZSt4cerr[rip]
.LEHB99:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZNSolsEPFRSoS_E@PLT
	call	_Z13clean_up_messv
.LEHE99:
	call	__cxa_end_catch@PLT
	jmp	.L309
.L319:
	endbr64
	mov	rbx, rax
	call	__cxa_end_catch@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB100:
	call	_Unwind_Resume@PLT
.LEHE100:
.L320:
	nop
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L315
	call	__stack_chk_fail@PLT
.L315:
	add	rsp, 224
	pop	rbx
	pop	r12
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6327:
	.section	.gcc_except_table
	.align 4
.LLSDA6327:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT6327-.LLSDATTD6327
.LLSDATTD6327:
	.byte	0x1
	.uleb128 .LLSDACSE6327-.LLSDACSB6327
.LLSDACSB6327:
	.uleb128 .LEHB94-.LFB6327
	.uleb128 .LEHE94-.LEHB94
	.uleb128 .L316-.LFB6327
	.uleb128 0x1
	.uleb128 .LEHB95-.LFB6327
	.uleb128 .LEHE95-.LEHB95
	.uleb128 .L317-.LFB6327
	.uleb128 0x3
	.uleb128 .LEHB96-.LFB6327
	.uleb128 .LEHE96-.LEHB96
	.uleb128 .L318-.LFB6327
	.uleb128 0x3
	.uleb128 .LEHB97-.LFB6327
	.uleb128 .LEHE97-.LEHB97
	.uleb128 .L317-.LFB6327
	.uleb128 0x3
	.uleb128 .LEHB98-.LFB6327
	.uleb128 .LEHE98-.LEHB98
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB99-.LFB6327
	.uleb128 .LEHE99-.LEHB99
	.uleb128 .L319-.LFB6327
	.uleb128 0
	.uleb128 .LEHB100-.LFB6327
	.uleb128 .LEHE100-.LEHB100
	.uleb128 0
	.uleb128 0
.LLSDACSE6327:
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0x7d
	.align 4
	.long	DW.ref._ZTISt13runtime_error-.
.LLSDATT6327:
	.text
	.size	_Z9calculatev, .-_Z9calculatev
	.section	.rodata
.LC25:
	.string	"exception: "
.LC26:
	.string	"exception\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6328:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6328
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 40
	.cfi_offset 3, -24
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
.LEHB101:
	call	_Z9calculatev
.LEHE101:
	mov	ebx, 0
.L322:
	mov	eax, ebx
	mov	rcx, QWORD PTR -24[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L335
	jmp	.L339
.L336:
	endbr64
	cmp	rdx, 1
	jne	.L324
	mov	rdi, rax
	call	__cxa_begin_catch@PLT
	mov	QWORD PTR -32[rbp], rax
	lea	rsi, .LC25[rip]
	lea	rdi, _ZSt4cerr[rip]
.LEHB102:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	mov	rbx, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR [rax]
	add	rax, 16
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	rdx
	mov	rsi, rax
	mov	rdi, rbx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	mov	rdx, rax
	mov	rax, QWORD PTR _ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL[rip]
	mov	rsi, rax
	mov	rdi, rdx
	call	_ZNSolsEPFRSoS_E@PLT
.L328:
	lea	rax, -33[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt3cin[rip]
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_@PLT
	mov	rdx, QWORD PTR [rax]
	sub	rdx, 24
	mov	rdx, QWORD PTR [rdx]
	add	rax, rdx
	mov	rdi, rax
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv@PLT
.LEHE102:
	test	al, al
	je	.L325
	movzx	eax, BYTE PTR -33[rbp]
	cmp	al, 59
	je	.L325
	mov	eax, 1
	jmp	.L326
.L325:
	mov	eax, 0
.L326:
	test	al, al
	je	.L327
	jmp	.L328
.L327:
	mov	ebx, 1
	call	__cxa_end_catch@PLT
	jmp	.L322
.L324:
	mov	rdi, rax
	call	__cxa_begin_catch@PLT
	lea	rsi, .LC26[rip]
	lea	rdi, _ZSt4cerr[rip]
.LEHB103:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
.L332:
	lea	rax, -33[rbp]
	mov	rsi, rax
	lea	rdi, _ZSt3cin[rip]
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_@PLT
	mov	rdx, QWORD PTR [rax]
	sub	rdx, 24
	mov	rdx, QWORD PTR [rdx]
	add	rax, rdx
	mov	rdi, rax
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEEcvbEv@PLT
.LEHE103:
	test	al, al
	je	.L329
	movzx	eax, BYTE PTR -33[rbp]
	cmp	al, 59
	je	.L329
	mov	eax, 1
	jmp	.L330
.L329:
	mov	eax, 0
.L330:
	test	al, al
	je	.L331
	jmp	.L332
.L331:
	mov	ebx, 2
.LEHB104:
	call	__cxa_end_catch@PLT
	jmp	.L322
.L337:
	endbr64
	mov	rbx, rax
	call	__cxa_end_catch@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.LEHE104:
.L338:
	endbr64
	mov	rbx, rax
	call	__cxa_end_catch@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB105:
	call	_Unwind_Resume@PLT
.LEHE105:
.L339:
	call	__stack_chk_fail@PLT
.L335:
	add	rsp, 40
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6328:
	.section	.gcc_except_table
	.align 4
.LLSDA6328:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT6328-.LLSDATTD6328
.LLSDATTD6328:
	.byte	0x1
	.uleb128 .LLSDACSE6328-.LLSDACSB6328
.LLSDACSB6328:
	.uleb128 .LEHB101-.LFB6328
	.uleb128 .LEHE101-.LEHB101
	.uleb128 .L336-.LFB6328
	.uleb128 0x3
	.uleb128 .LEHB102-.LFB6328
	.uleb128 .LEHE102-.LEHB102
	.uleb128 .L337-.LFB6328
	.uleb128 0
	.uleb128 .LEHB103-.LFB6328
	.uleb128 .LEHE103-.LEHB103
	.uleb128 .L338-.LFB6328
	.uleb128 0
	.uleb128 .LEHB104-.LFB6328
	.uleb128 .LEHE104-.LEHB104
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB105-.LFB6328
	.uleb128 .LEHE105-.LEHB105
	.uleb128 0
	.uleb128 0
.LLSDACSE6328:
	.byte	0x2
	.byte	0
	.byte	0x1
	.byte	0x7d
	.align 4
	.long	0

	.long	DW.ref._ZTISt9exception-.
.LLSDATT6328:
	.text
	.size	main, .-main
	.section	.text._ZSt3maxImERKT_S2_S2_,"axG",@progbits,_ZSt3maxImERKT_S2_S2_,comdat
	.weak	_ZSt3maxImERKT_S2_S2_
	.type	_ZSt3maxImERKT_S2_S2_, @function
_ZSt3maxImERKT_S2_S2_:
.LFB6583:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR [rax]
	cmp	rdx, rax
	jnb	.L341
	mov	rax, QWORD PTR -16[rbp]
	jmp	.L342
.L341:
	mov	rax, QWORD PTR -8[rbp]
.L342:
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6583:
	.size	_ZSt3maxImERKT_S2_S2_, .-_ZSt3maxImERKT_S2_S2_
	.section	.text._ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_,"axG",@progbits,_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_,comdat
	.weak	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
	.type	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_, @function
_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_:
.LFB6643:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6643
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 56
	.cfi_offset 3, -24
	mov	QWORD PTR -40[rbp], rdi
	mov	QWORD PTR -48[rbp], rsi
	mov	QWORD PTR -56[rbp], rdx
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rdx, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB106:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_@PLT
.LEHE106:
	mov	rdx, QWORD PTR -56[rbp]
	mov	rax, QWORD PTR -40[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB107:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_@PLT
.LEHE107:
	jmp	.L348
.L347:
	endbr64
	mov	rbx, rax
	mov	rax, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB108:
	call	_Unwind_Resume@PLT
.LEHE108:
.L348:
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L346
	call	__stack_chk_fail@PLT
.L346:
	mov	rax, QWORD PTR -40[rbp]
	add	rsp, 56
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6643:
	.section	.gcc_except_table
.LLSDA6643:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6643-.LLSDACSB6643
.LLSDACSB6643:
	.uleb128 .LEHB106-.LFB6643
	.uleb128 .LEHE106-.LEHB106
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB107-.LFB6643
	.uleb128 .LEHE107-.LEHB107
	.uleb128 .L347-.LFB6643
	.uleb128 0
	.uleb128 .LEHB108-.LFB6643
	.uleb128 .LEHE108-.LEHB108
	.uleb128 0
	.uleb128 0
.LLSDACSE6643:
	.section	.text._ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_,"axG",@progbits,_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_,comdat
	.size	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_, .-_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
	.section	.text._ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_,"axG",@progbits,_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_,comdat
	.weak	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	.type	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_, @function
_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_:
.LFB6680:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	sub	rsp, 16
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@PLT
	mov	rbx, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@PLT
	cmp	rbx, rax
	jne	.L350
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv@PLT
	mov	r12, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@PLT
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4dataEv@PLT
	mov	rdx, r12
	mov	rsi, rbx
	mov	rdi, rax
	call	_ZNSt11char_traitsIcE7compareEPKcS2_m
	test	eax, eax
	jne	.L350
	mov	eax, 1
	jmp	.L351
.L350:
	mov	eax, 0
.L351:
	add	rsp, 16
	pop	rbx
	pop	r12
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6680:
	.size	_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_, .-_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKNSt7__cxx1112basic_stringIS3_St11char_traitsIS3_ESaIS3_EEESE_
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC2Ev
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC2Ev, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC2Ev:
.LFB6682:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSaI8VariableEC2Ev
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6682:
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC2Ev, .-_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC2Ev
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC1Ev
	.set	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC1Ev,_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implC2Ev
	.section	.text._ZNSaI8VariableED2Ev,"axG",@progbits,_ZNSaI8VariableED5Ev,comdat
	.align 2
	.weak	_ZNSaI8VariableED2Ev
	.type	_ZNSaI8VariableED2Ev, @function
_ZNSaI8VariableED2Ev:
.LFB6685:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZN9__gnu_cxx13new_allocatorI8VariableED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6685:
	.size	_ZNSaI8VariableED2Ev, .-_ZNSaI8VariableED2Ev
	.weak	_ZNSaI8VariableED1Ev
	.set	_ZNSaI8VariableED1Ev,_ZNSaI8VariableED2Ev
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev:
.LFB6688:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6688
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR 16[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	sub	rdx, rax
	mov	rax, rdx
	sar	rax, 4
	mov	rdx, rax
	movabs	rax, -6148914691236517205
	imul	rax, rdx
	mov	rdx, rax
	mov	rax, QWORD PTR -8[rbp]
	mov	rcx, QWORD PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE12_Vector_implD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6688:
	.section	.gcc_except_table
.LLSDA6688:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6688-.LLSDACSB6688
.LLSDACSB6688:
.LLSDACSE6688:
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EED5Ev,comdat
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev, .-_ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EED1Ev
	.set	_ZNSt12_Vector_baseI8VariableSaIS0_EED1Ev,_ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev
	.section	.text._ZNSt6vectorI8VariableSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EED5Ev,comdat
	.align 2
	.weak	_ZNSt6vectorI8VariableSaIS0_EED2Ev
	.type	_ZNSt6vectorI8VariableSaIS0_EED2Ev, @function
_ZNSt6vectorI8VariableSaIS0_EED2Ev:
.LFB6691:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6691
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rdx, rax
	mov	rax, QWORD PTR -8[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EED2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6691:
	.section	.gcc_except_table
.LLSDA6691:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE6691-.LLSDACSB6691
.LLSDACSB6691:
.LLSDACSE6691:
	.section	.text._ZNSt6vectorI8VariableSaIS0_EED2Ev,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EED5Ev,comdat
	.size	_ZNSt6vectorI8VariableSaIS0_EED2Ev, .-_ZNSt6vectorI8VariableSaIS0_EED2Ev
	.weak	_ZNSt6vectorI8VariableSaIS0_EED1Ev
	.set	_ZNSt6vectorI8VariableSaIS0_EED1Ev,_ZNSt6vectorI8VariableSaIS0_EED2Ev
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE5beginEv,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE5beginEv,comdat
	.align 2
	.weak	_ZNSt6vectorI8VariableSaIS0_EE5beginEv
	.type	_ZNSt6vectorI8VariableSaIS0_EE5beginEv, @function
_ZNSt6vectorI8VariableSaIS0_EE5beginEv:
.LFB6693:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	rdx, QWORD PTR -24[rbp]
	lea	rax, -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC1ERKS2_
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, QWORD PTR -8[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L359
	call	__stack_chk_fail@PLT
.L359:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6693:
	.size	_ZNSt6vectorI8VariableSaIS0_EE5beginEv, .-_ZNSt6vectorI8VariableSaIS0_EE5beginEv
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE3endEv,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE3endEv,comdat
	.align 2
	.weak	_ZNSt6vectorI8VariableSaIS0_EE3endEv
	.type	_ZNSt6vectorI8VariableSaIS0_EE3endEv, @function
_ZNSt6vectorI8VariableSaIS0_EE3endEv:
.LFB6694:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -24[rbp]
	lea	rdx, 8[rax]
	lea	rax, -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC1ERKS2_
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, QWORD PTR -8[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L362
	call	__stack_chk_fail@PLT
.L362:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6694:
	.size	_ZNSt6vectorI8VariableSaIS0_EE3endEv, .-_ZNSt6vectorI8VariableSaIS0_EE3endEv
	.section	.text._ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_,"axG",@progbits,_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_,comdat
	.weak	_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	.type	_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_, @function
_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_:
.LFB6695:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rbx, QWORD PTR [rax]
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rax, QWORD PTR [rax]
	cmp	rbx, rax
	setne	al
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6695:
	.size	_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_, .-_ZN9__gnu_cxxneIP8VariableSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv
	.type	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv, @function
_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv:
.LFB6696:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	lea	rdx, 48[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6696:
	.size	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv, .-_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEppEv
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv:
.LFB6697:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6697:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv, .-_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEdeEv
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_,comdat
	.align 2
	.weak	_ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_
	.type	_ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_, @function
_ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_:
.LFB6698:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_
	mov	rdx, rax
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6698:
	.size	_ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_, .-_ZNSt6vectorI8VariableSaIS0_EE9push_backEOS0_
	.section	.text._ZNSaI8VariableEC2Ev,"axG",@progbits,_ZNSaI8VariableEC5Ev,comdat
	.align 2
	.weak	_ZNSaI8VariableEC2Ev
	.type	_ZNSaI8VariableEC2Ev, @function
_ZNSaI8VariableEC2Ev:
.LFB6890:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6890:
	.size	_ZNSaI8VariableEC2Ev, .-_ZNSaI8VariableEC2Ev
	.weak	_ZNSaI8VariableEC1Ev
	.set	_ZNSaI8VariableEC1Ev,_ZNSaI8VariableEC2Ev
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC5Ev,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev:
.LFB6893:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], 0
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR 8[rax], 0
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR 16[rax], 0
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6893:
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev, .-_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC1Ev
	.set	_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC1Ev,_ZNSt12_Vector_baseI8VariableSaIS0_EE17_Vector_impl_dataC2Ev
	.section	.text._ZN9__gnu_cxx13new_allocatorI8VariableED2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI8VariableED5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableED2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI8VariableED2Ev, @function
_ZN9__gnu_cxx13new_allocatorI8VariableED2Ev:
.LFB6896:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6896:
	.size	_ZN9__gnu_cxx13new_allocatorI8VariableED2Ev, .-_ZN9__gnu_cxx13new_allocatorI8VariableED2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableED1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI8VariableED1Ev,_ZN9__gnu_cxx13new_allocatorI8VariableED2Ev
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m:
.LFB6898:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	cmp	QWORD PTR -16[rbp], 0
	je	.L375
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR -16[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m
.L375:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6898:
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m, .-_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB6899:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6899:
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E,"axG",@progbits,_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E,comdat
	.weak	_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E
	.type	_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E, @function
_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E:
.LFB6900:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZSt8_DestroyIP8VariableEvT_S2_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6900:
	.size	_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E, .-_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC2ERKS2_,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC5ERKS2_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.type	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC2ERKS2_, @function
_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC2ERKS2_:
.LFB6902:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	mov	rdx, QWORD PTR [rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6902:
	.size	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC2ERKS2_, .-_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.weak	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC1ERKS2_
	.set	_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC1ERKS2_,_ZN9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEEC2ERKS2_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv:
.LFB6904:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6904:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	.section	.text._ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_,"axG",@progbits,_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_,comdat
	.weak	_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_
	.type	_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_, @function
_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_:
.LFB6905:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6905:
	.size	_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_, .-_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_,comdat
	.align 2
	.weak	_ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	.type	_ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_, @function
_ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_:
.LFB6906:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 16[rax]
	cmp	rdx, rax
	je	.L385
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	mov	rdx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	mov	rax, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR 8[rax]
	lea	rdx, 48[rax]
	mov	rax, QWORD PTR -24[rbp]
	mov	QWORD PTR 8[rax], rdx
	jmp	.L387
.L385:
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE3endEv
	mov	rcx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdx, rbx
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_
.L387:
	nop
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6906:
	.size	_ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_, .-_ZNSt6vectorI8VariableSaIS0_EE12emplace_backIJS0_EEEvDpOT_
	.section	.text._ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI8VariableEC5Ev,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev
	.type	_ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev, @function
_ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev:
.LFB6975:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6975:
	.size	_ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev, .-_ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableEC1Ev
	.set	_ZN9__gnu_cxx13new_allocatorI8VariableEC1Ev,_ZN9__gnu_cxx13new_allocatorI8VariableEC2Ev
	.section	.text._ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m,"axG",@progbits,_ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m,comdat
	.weak	_ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m
	.type	_ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m, @function
_ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m:
.LFB6977:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	rdx, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6977:
	.size	_ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m, .-_ZNSt16allocator_traitsISaI8VariableEE10deallocateERS1_PS0_m
	.section	.text._ZSt8_DestroyIP8VariableEvT_S2_,"axG",@progbits,_ZSt8_DestroyIP8VariableEvT_S2_,comdat
	.weak	_ZSt8_DestroyIP8VariableEvT_S2_
	.type	_ZSt8_DestroyIP8VariableEvT_S2_, @function
_ZSt8_DestroyIP8VariableEvT_S2_:
.LFB6978:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6978:
	.size	_ZSt8_DestroyIP8VariableEvT_S2_, .-_ZSt8_DestroyIP8VariableEvT_S2_
	.section	.text._ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE,"axG",@progbits,_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE,comdat
	.weak	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	.type	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE, @function
_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE:
.LFB6979:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6979:
	.size	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE, .-_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	.section	.text._ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_,"axG",@progbits,_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_,comdat
	.weak	_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	.type	_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_, @function
_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_:
.LFB6980:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	mov	rdx, rax
	mov	rcx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6980:
	.size	_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_, .-_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv,comdat
	.weak	_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv
	.type	_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv, @function
_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv:
.LFB6982:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	call	_ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE
	mov	rdx, QWORD PTR -8[rbp]
	xor	rdx, QWORD PTR fs:40
	je	.L396
	call	__stack_chk_fail@PLT
.L396:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6982:
	.size	_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv, .-_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE,comdat
	.weak	_ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE
	.type	_ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE, @function
_ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE:
.LFB6983:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	eax, 1
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6983:
	.size	_ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE, .-_ZNSt6vectorI8VariableSaIS0_EE19_S_nothrow_relocateESt17integral_constantIbLb1EE
	.section	.rodata
.LC27:
	.string	"vector::_M_realloc_insert"
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_,comdat
	.align 2
	.weak	_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_
	.type	_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_, @function
_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_:
.LFB6981:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA6981
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 104
	.cfi_offset 3, -24
	mov	QWORD PTR -88[rbp], rdi
	mov	QWORD PTR -96[rbp], rsi
	mov	QWORD PTR -104[rbp], rdx
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -88[rbp]
	lea	rdx, .LC27[rip]
	mov	esi, 1
	mov	rdi, rax
.LEHB109:
	call	_ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc
	mov	QWORD PTR -64[rbp], rax
	mov	rax, QWORD PTR -88[rbp]
	mov	rax, QWORD PTR [rax]
	mov	QWORD PTR -56[rbp], rax
	mov	rax, QWORD PTR -88[rbp]
	mov	rax, QWORD PTR 8[rax]
	mov	QWORD PTR -48[rbp], rax
	mov	rax, QWORD PTR -88[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE5beginEv
	mov	QWORD PTR -80[rbp], rax
	lea	rdx, -80[rbp]
	lea	rax, -96[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	mov	QWORD PTR -40[rbp], rax
	mov	rax, QWORD PTR -88[rbp]
	mov	rdx, QWORD PTR -64[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm
.LEHE109:
	mov	QWORD PTR -32[rbp], rax
	mov	rax, QWORD PTR -32[rbp]
	mov	QWORD PTR -72[rbp], rax
	mov	rax, QWORD PTR -104[rbp]
	mov	rdi, rax
	call	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	mov	rsi, rax
	mov	rdx, QWORD PTR -40[rbp]
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 4
	mov	rdx, rax
	mov	rax, QWORD PTR -32[rbp]
	lea	rcx, [rdx+rax]
	mov	rax, QWORD PTR -88[rbp]
	mov	rdx, rsi
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	mov	QWORD PTR -72[rbp], 0
	call	_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv
	test	al, al
	je	.L400
	mov	rax, QWORD PTR -88[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rbx, rax
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rsi, QWORD PTR [rax]
	mov	rdx, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR -56[rbp]
	mov	rcx, rbx
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_
	mov	QWORD PTR -72[rbp], rax
	add	QWORD PTR -72[rbp], 48
	mov	rax, QWORD PTR -88[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rbx, rax
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR -72[rbp]
	mov	rsi, QWORD PTR -48[rbp]
	mov	rcx, rbx
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_
	mov	QWORD PTR -72[rbp], rax
	jmp	.L401
.L400:
	mov	rax, QWORD PTR -88[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rbx, rax
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rsi, QWORD PTR [rax]
	mov	rdx, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR -56[rbp]
	mov	rcx, rbx
	mov	rdi, rax
.LEHB110:
	call	_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	mov	QWORD PTR -72[rbp], rax
	add	QWORD PTR -72[rbp], 48
	mov	rax, QWORD PTR -88[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rbx, rax
	lea	rax, -96[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rax, QWORD PTR [rax]
	mov	rdx, QWORD PTR -72[rbp]
	mov	rsi, QWORD PTR -48[rbp]
	mov	rcx, rbx
	mov	rdi, rax
	call	_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
.LEHE110:
	mov	QWORD PTR -72[rbp], rax
.L401:
	call	_ZNSt6vectorI8VariableSaIS0_EE15_S_use_relocateEv
	xor	eax, 1
	test	al, al
	je	.L402
	mov	rax, QWORD PTR -88[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rdx, rax
	mov	rcx, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR -56[rbp]
	mov	rsi, rcx
	mov	rdi, rax
.LEHB111:
	call	_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E
.L402:
	mov	rax, QWORD PTR -88[rbp]
	mov	rdx, QWORD PTR -88[rbp]
	mov	rdx, QWORD PTR 16[rdx]
	sub	rdx, QWORD PTR -56[rbp]
	mov	rcx, rdx
	sar	rcx, 4
	movabs	rdx, -6148914691236517205
	imul	rdx, rcx
	mov	rcx, QWORD PTR -56[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m
.LEHE111:
	mov	rax, QWORD PTR -88[rbp]
	mov	rdx, QWORD PTR -32[rbp]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -88[rbp]
	mov	rdx, QWORD PTR -72[rbp]
	mov	QWORD PTR 8[rax], rdx
	mov	rdx, QWORD PTR -64[rbp]
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 4
	mov	rdx, rax
	mov	rax, QWORD PTR -32[rbp]
	add	rdx, rax
	mov	rax, QWORD PTR -88[rbp]
	mov	QWORD PTR 16[rax], rdx
	nop
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L407
	jmp	.L410
.L408:
	endbr64
	mov	rdi, rax
	call	__cxa_begin_catch@PLT
	cmp	QWORD PTR -72[rbp], 0
	jne	.L404
	mov	rdx, QWORD PTR -40[rbp]
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 4
	mov	rdx, rax
	mov	rax, QWORD PTR -32[rbp]
	add	rdx, rax
	mov	rax, QWORD PTR -88[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_
	jmp	.L405
.L404:
	mov	rax, QWORD PTR -88[rbp]
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rdx, rax
	mov	rcx, QWORD PTR -72[rbp]
	mov	rax, QWORD PTR -32[rbp]
	mov	rsi, rcx
	mov	rdi, rax
.LEHB112:
	call	_ZSt8_DestroyIP8VariableS0_EvT_S2_RSaIT0_E
.L405:
	mov	rax, QWORD PTR -88[rbp]
	mov	rdx, QWORD PTR -64[rbp]
	mov	rcx, QWORD PTR -32[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt12_Vector_baseI8VariableSaIS0_EE13_M_deallocateEPS0_m
	call	__cxa_rethrow@PLT
.LEHE112:
.L409:
	endbr64
	mov	rbx, rax
	call	__cxa_end_catch@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB113:
	call	_Unwind_Resume@PLT
.LEHE113:
.L410:
	call	__stack_chk_fail@PLT
.L407:
	add	rsp, 104
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6981:
	.section	.gcc_except_table
	.align 4
.LLSDA6981:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT6981-.LLSDATTD6981
.LLSDATTD6981:
	.byte	0x1
	.uleb128 .LLSDACSE6981-.LLSDACSB6981
.LLSDACSB6981:
	.uleb128 .LEHB109-.LFB6981
	.uleb128 .LEHE109-.LEHB109
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB110-.LFB6981
	.uleb128 .LEHE110-.LEHB110
	.uleb128 .L408-.LFB6981
	.uleb128 0x1
	.uleb128 .LEHB111-.LFB6981
	.uleb128 .LEHE111-.LEHB111
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB112-.LFB6981
	.uleb128 .LEHE112-.LEHB112
	.uleb128 .L409-.LFB6981
	.uleb128 0
	.uleb128 .LEHB113-.LFB6981
	.uleb128 .LEHE113-.LEHB113
	.uleb128 0
	.uleb128 0
.LLSDACSE6981:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT6981:
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_,comdat
	.size	_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_, .-_ZNSt6vectorI8VariableSaIS0_EE17_M_realloc_insertIJS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_
	.section	.text._ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m
	.type	_ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m, @function
_ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m:
.LFB7028:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	_ZdlPv@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7028:
	.size	_ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m, .-_ZN9__gnu_cxx13new_allocatorI8VariableE10deallocateEPS1_m
	.section	.text._ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_,"axG",@progbits,_ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_,comdat
	.weak	_ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_
	.type	_ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_, @function
_ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_:
.LFB7029:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
.L414:
	mov	rax, QWORD PTR -8[rbp]
	cmp	rax, QWORD PTR -16[rbp]
	je	.L415
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZSt11__addressofI8VariableEPT_RS1_
	mov	rdi, rax
	call	_ZSt8_DestroyI8VariableEvPT_
	add	QWORD PTR -8[rbp], 48
	jmp	.L414
.L415:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7029:
	.size	_ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_, .-_ZNSt12_Destroy_auxILb0EE9__destroyIP8VariableEEvT_S4_
	.section	.text._ZN8VariableC2EOS_,"axG",@progbits,_ZN8VariableC5EOS_,comdat
	.align 2
	.weak	_ZN8VariableC2EOS_
	.type	_ZN8VariableC2EOS_, @function
_ZN8VariableC2EOS_:
.LFB7032:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EOS4_@PLT
	mov	rax, QWORD PTR -16[rbp]
	movsd	xmm0, QWORD PTR 32[rax]
	mov	rax, QWORD PTR -8[rbp]
	movsd	QWORD PTR 32[rax], xmm0
	mov	rax, QWORD PTR -16[rbp]
	movzx	edx, BYTE PTR 40[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	BYTE PTR 40[rax], dl
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7032:
	.size	_ZN8VariableC2EOS_, .-_ZN8VariableC2EOS_
	.weak	_ZN8VariableC1EOS_
	.set	_ZN8VariableC1EOS_,_ZN8VariableC2EOS_
	.section	.text._ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_
	.type	_ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_, @function
_ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_:
.LFB7030:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 40
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	QWORD PTR -40[rbp], rdx
	mov	rax, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	mov	rbx, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rsi, rax
	mov	edi, 48
	call	_ZnwmPv
	mov	rsi, rbx
	mov	rdi, rax
	call	_ZN8VariableC1EOS_
	nop
	add	rsp, 40
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7030:
	.size	_ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_, .-_ZN9__gnu_cxx13new_allocatorI8VariableE9constructIS1_JS1_EEEvPT_DpOT0_
	.section	.text._ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc,"axG",@progbits,_ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc,comdat
	.align 2
	.weak	_ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc
	.type	_ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc, @function
_ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc:
.LFB7034:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 72
	.cfi_offset 3, -24
	mov	QWORD PTR -56[rbp], rdi
	mov	QWORD PTR -64[rbp], rsi
	mov	QWORD PTR -72[rbp], rdx
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	mov	rax, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv
	mov	rbx, rax
	mov	rax, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv
	sub	rbx, rax
	mov	rdx, rbx
	mov	rax, QWORD PTR -64[rbp]
	cmp	rdx, rax
	setb	al
	test	al, al
	je	.L419
	mov	rax, QWORD PTR -72[rbp]
	mov	rdi, rax
	call	_ZSt20__throw_length_errorPKc@PLT
.L419:
	mov	rax, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv
	mov	rbx, rax
	mov	rax, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv
	mov	QWORD PTR -40[rbp], rax
	lea	rdx, -64[rbp]
	lea	rax, -40[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZSt3maxImERKT_S2_S2_
	mov	rax, QWORD PTR [rax]
	add	rax, rbx
	mov	QWORD PTR -32[rbp], rax
	mov	rax, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv
	cmp	QWORD PTR -32[rbp], rax
	jb	.L420
	mov	rax, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv
	cmp	QWORD PTR -32[rbp], rax
	jbe	.L421
.L420:
	mov	rax, QWORD PTR -56[rbp]
	mov	rdi, rax
	call	_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv
	jmp	.L422
.L421:
	mov	rax, QWORD PTR -32[rbp]
.L422:
	mov	rcx, QWORD PTR -24[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L424
	call	__stack_chk_fail@PLT
.L424:
	add	rsp, 72
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7034:
	.size	_ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc, .-_ZNKSt6vectorI8VariableSaIS0_EE12_M_check_lenEmPKc
	.section	.text._ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_,"axG",@progbits,_ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_,comdat
	.weak	_ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	.type	_ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_, @function
_ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_:
.LFB7035:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rbx, QWORD PTR [rax]
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx17__normal_iteratorIP8VariableSt6vectorIS1_SaIS1_EEE4baseEv
	mov	rax, QWORD PTR [rax]
	sub	rbx, rax
	mov	rax, rbx
	sar	rax, 4
	mov	rdx, rax
	movabs	rax, -6148914691236517205
	imul	rax, rdx
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7035:
	.size	_ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_, .-_ZN9__gnu_cxxmiIP8VariableSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_
	.section	.text._ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm,"axG",@progbits,_ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm,comdat
	.align 2
	.weak	_ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm
	.type	_ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm, @function
_ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm:
.LFB7036:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	cmp	QWORD PTR -16[rbp], 0
	je	.L428
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m
	jmp	.L430
.L428:
	mov	eax, 0
.L430:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7036:
	.size	_ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm, .-_ZNSt12_Vector_baseI8VariableSaIS0_EE11_M_allocateEm
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_,comdat
	.weak	_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_
	.type	_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_, @function
_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_:
.LFB7037:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	QWORD PTR -40[rbp], rdx
	mov	QWORD PTR -48[rbp], rcx
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	rcx, QWORD PTR -48[rbp]
	mov	rdx, QWORD PTR -40[rbp]
	mov	rsi, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE
	mov	rdi, QWORD PTR -8[rbp]
	xor	rdi, QWORD PTR fs:40
	je	.L433
	call	__stack_chk_fail@PLT
.L433:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7037:
	.size	_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_, .-_ZNSt6vectorI8VariableSaIS0_EE11_S_relocateEPS0_S3_S3_RS1_
	.section	.text._ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_,"axG",@progbits,_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_,comdat
	.weak	_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	.type	_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_, @function
_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_:
.LFB7038:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 40
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	QWORD PTR -40[rbp], rdx
	mov	QWORD PTR -48[rbp], rcx
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_
	mov	rdi, rax
	mov	rdx, QWORD PTR -48[rbp]
	mov	rax, QWORD PTR -40[rbp]
	mov	rcx, rdx
	mov	rdx, rax
	mov	rsi, rbx
	call	_ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E
	add	rsp, 40
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7038:
	.size	_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_, .-_ZSt34__uninitialized_move_if_noexcept_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	.section	.text._ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_,"axG",@progbits,_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_,comdat
	.weak	_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_
	.type	_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_, @function
_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_:
.LFB7039:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7039:
	.size	_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_, .-_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_
	.section	.text._ZSt11__addressofI8VariableEPT_RS1_,"axG",@progbits,_ZSt11__addressofI8VariableEPT_RS1_,comdat
	.weak	_ZSt11__addressofI8VariableEPT_RS1_
	.type	_ZSt11__addressofI8VariableEPT_RS1_, @function
_ZSt11__addressofI8VariableEPT_RS1_:
.LFB7077:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7077:
	.size	_ZSt11__addressofI8VariableEPT_RS1_, .-_ZSt11__addressofI8VariableEPT_RS1_
	.section	.text._ZSt8_DestroyI8VariableEvPT_,"axG",@progbits,_ZSt8_DestroyI8VariableEvPT_,comdat
	.weak	_ZSt8_DestroyI8VariableEvPT_
	.type	_ZSt8_DestroyI8VariableEvPT_, @function
_ZSt8_DestroyI8VariableEvPT_:
.LFB7078:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZN8VariableD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7078:
	.size	_ZSt8_DestroyI8VariableEvPT_, .-_ZSt8_DestroyI8VariableEvPT_
	.section	.text._ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv,"axG",@progbits,_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv
	.type	_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv, @function
_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv:
.LFB7079:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	mov	rdi, rax
	call	_ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7079:
	.size	_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv, .-_ZNKSt6vectorI8VariableSaIS0_EE8max_sizeEv
	.section	.text._ZNKSt6vectorI8VariableSaIS0_EE4sizeEv,"axG",@progbits,_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv,comdat
	.align 2
	.weak	_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv
	.type	_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv, @function
_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv:
.LFB7080:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR 8[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	sub	rdx, rax
	mov	rax, rdx
	sar	rax, 4
	mov	rdx, rax
	movabs	rax, -6148914691236517205
	imul	rax, rdx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7080:
	.size	_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv, .-_ZNKSt6vectorI8VariableSaIS0_EE4sizeEv
	.section	.text._ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m,"axG",@progbits,_ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m,comdat
	.weak	_ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m
	.type	_ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m, @function
_ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m:
.LFB7081:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rcx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	edx, 0
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7081:
	.size	_ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m, .-_ZNSt16allocator_traitsISaI8VariableEE8allocateERS1_m
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE,comdat
	.weak	_ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE
	.type	_ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE, @function
_ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE:
.LFB7082:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	QWORD PTR -32[rbp], rcx
	mov	rcx, QWORD PTR -32[rbp]
	mov	rdx, QWORD PTR -24[rbp]
	mov	rsi, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7082:
	.size	_ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE, .-_ZNSt6vectorI8VariableSaIS0_EE14_S_do_relocateEPS0_S3_S3_RS1_St17integral_constantIbLb1EE
	.section	.text._ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_,"axG",@progbits,_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_,comdat
	.weak	_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_
	.type	_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_, @function
_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_:
.LFB7083:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -24[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	rdx, QWORD PTR -24[rbp]
	lea	rax, -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt13move_iteratorIP8VariableEC1ES1_
	mov	rax, QWORD PTR -16[rbp]
	mov	rcx, QWORD PTR -8[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L450
	call	__stack_chk_fail@PLT
.L450:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7083:
	.size	_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_, .-_ZSt32__make_move_if_noexcept_iteratorI8VariableSt13move_iteratorIPS0_EET0_PT_
	.section	.text._ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E,"axG",@progbits,_ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E,comdat
	.weak	_ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E
	.type	_ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E, @function
_ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E:
.LFB7084:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	QWORD PTR -32[rbp], rcx
	mov	rdx, QWORD PTR -24[rbp]
	mov	rcx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7084:
	.size	_ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E, .-_ZSt22__uninitialized_copy_aISt13move_iteratorIP8VariableES2_S1_ET0_T_S5_S4_RSaIT1_E
	.section	.text._ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_
	.type	_ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_, @function
_ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_:
.LFB7085:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	_ZN8VariableD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7085:
	.size	_ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_, .-_ZN9__gnu_cxx13new_allocatorI8VariableE7destroyIS1_EEvPT_
	.section	.text._ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_,"axG",@progbits,_ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_,comdat
	.weak	_ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_
	.type	_ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_, @function
_ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_:
.LFB7111:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -40[rbp], rdi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	movabs	rax, 192153584101141162
	mov	QWORD PTR -24[rbp], rax
	mov	rax, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_
	mov	QWORD PTR -16[rbp], rax
	lea	rdx, -16[rbp]
	lea	rax, -24[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZSt3minImERKT_S2_S2_
	mov	rax, QWORD PTR [rax]
	mov	rcx, QWORD PTR -8[rbp]
	xor	rcx, QWORD PTR fs:40
	je	.L456
	call	__stack_chk_fail@PLT
.L456:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7111:
	.size	_ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_, .-_ZNSt6vectorI8VariableSaIS0_EE11_S_max_sizeERKS1_
	.section	.text._ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv,"axG",@progbits,_ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv,comdat
	.align 2
	.weak	_ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	.type	_ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv, @function
_ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv:
.LFB7112:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7112:
	.size	_ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv, .-_ZNKSt12_Vector_baseI8VariableSaIS0_EE19_M_get_Tp_allocatorEv
	.section	.text._ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv,"axG",@progbits,_ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv
	.type	_ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv, @function
_ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv:
.LFB7113:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv
	cmp	QWORD PTR -16[rbp], rax
	seta	al
	test	al, al
	je	.L460
	call	_ZSt17__throw_bad_allocv@PLT
.L460:
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 4
	mov	rdi, rax
	call	_Znwm@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7113:
	.size	_ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv, .-_ZN9__gnu_cxx13new_allocatorI8VariableE8allocateEmPKv
	.section	.text._ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_,"axG",@progbits,_ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_,comdat
	.weak	_ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	.type	_ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_, @function
_ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_:
.LFB7114:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	r12
	push	rbx
	sub	rsp, 32
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	QWORD PTR -40[rbp], rdx
	mov	QWORD PTR -48[rbp], rcx
	mov	rax, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	_ZSt12__niter_baseIP8VariableET_S2_
	mov	r12, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZSt12__niter_baseIP8VariableET_S2_
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZSt12__niter_baseIP8VariableET_S2_
	mov	rdi, rax
	mov	rax, QWORD PTR -48[rbp]
	mov	rcx, rax
	mov	rdx, r12
	mov	rsi, rbx
	call	_ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	add	rsp, 32
	pop	rbx
	pop	r12
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7114:
	.size	_ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_, .-_ZSt12__relocate_aIP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	.section	.text._ZNSt13move_iteratorIP8VariableEC2ES1_,"axG",@progbits,_ZNSt13move_iteratorIP8VariableEC5ES1_,comdat
	.align 2
	.weak	_ZNSt13move_iteratorIP8VariableEC2ES1_
	.type	_ZNSt13move_iteratorIP8VariableEC2ES1_, @function
_ZNSt13move_iteratorIP8VariableEC2ES1_:
.LFB7116:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	QWORD PTR [rax], rdx
	nop
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7116:
	.size	_ZNSt13move_iteratorIP8VariableEC2ES1_, .-_ZNSt13move_iteratorIP8VariableEC2ES1_
	.weak	_ZNSt13move_iteratorIP8VariableEC1ES1_
	.set	_ZNSt13move_iteratorIP8VariableEC1ES1_,_ZNSt13move_iteratorIP8VariableEC2ES1_
	.section	.text._ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_,"axG",@progbits,_ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_,comdat
	.weak	_ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_
	.type	_ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_, @function
_ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_:
.LFB7118:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 48
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	QWORD PTR -40[rbp], rdx
	mov	BYTE PTR -1[rbp], 1
	mov	rdx, QWORD PTR -40[rbp]
	mov	rcx, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7118:
	.size	_ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_, .-_ZSt18uninitialized_copyISt13move_iteratorIP8VariableES2_ET0_T_S5_S4_
	.section	.text._ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_,"axG",@progbits,_ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_,comdat
	.weak	_ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_
	.type	_ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_, @function
_ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_:
.LFB7127:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7127:
	.size	_ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_, .-_ZNSt16allocator_traitsISaI8VariableEE8max_sizeERKS1_
	.section	.text._ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv,"axG",@progbits,_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv
	.type	_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv, @function
_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv:
.LFB7128:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	movabs	rax, 192153584101141162
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7128:
	.size	_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv, .-_ZNK9__gnu_cxx13new_allocatorI8VariableE8max_sizeEv
	.section	.text._ZSt12__niter_baseIP8VariableET_S2_,"axG",@progbits,_ZSt12__niter_baseIP8VariableET_S2_,comdat
	.weak	_ZSt12__niter_baseIP8VariableET_S2_
	.type	_ZSt12__niter_baseIP8VariableET_S2_, @function
_ZSt12__niter_baseIP8VariableET_S2_:
.LFB7129:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7129:
	.size	_ZSt12__niter_baseIP8VariableET_S2_, .-_ZSt12__niter_baseIP8VariableET_S2_
	.section	.text._ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_,"axG",@progbits,_ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_,comdat
	.weak	_ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	.type	_ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_, @function
_ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_:
.LFB7130:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 56
	.cfi_offset 3, -24
	mov	QWORD PTR -40[rbp], rdi
	mov	QWORD PTR -48[rbp], rsi
	mov	QWORD PTR -56[rbp], rdx
	mov	QWORD PTR -64[rbp], rcx
	mov	rax, QWORD PTR -56[rbp]
	mov	QWORD PTR -24[rbp], rax
.L475:
	mov	rax, QWORD PTR -40[rbp]
	cmp	rax, QWORD PTR -48[rbp]
	je	.L474
	mov	rax, QWORD PTR -40[rbp]
	mov	rdi, rax
	call	_ZSt11__addressofI8VariableEPT_RS1_
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZSt11__addressofI8VariableEPT_RS1_
	mov	rcx, rax
	mov	rax, QWORD PTR -64[rbp]
	mov	rdx, rax
	mov	rsi, rbx
	mov	rdi, rcx
	call	_ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_
	add	QWORD PTR -40[rbp], 48
	add	QWORD PTR -24[rbp], 48
	jmp	.L475
.L474:
	mov	rax, QWORD PTR -24[rbp]
	add	rsp, 56
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7130:
	.size	_ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_, .-_ZSt14__relocate_a_1IP8VariableS1_SaIS0_EET0_T_S4_S3_RT1_
	.section	.text._ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_,"axG",@progbits,_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_,comdat
	.weak	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_
	.type	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_, @function
_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_:
.LFB7131:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA7131
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 56
	.cfi_offset 3, -24
	mov	QWORD PTR -40[rbp], rdi
	mov	QWORD PTR -48[rbp], rsi
	mov	QWORD PTR -56[rbp], rdx
	mov	rax, QWORD PTR -56[rbp]
	mov	QWORD PTR -24[rbp], rax
.L479:
	lea	rdx, -48[rbp]
	lea	rax, -40[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB114:
	call	_ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_
.LEHE114:
	test	al, al
	je	.L478
	lea	rax, -40[rbp]
	mov	rdi, rax
	call	_ZNKSt13move_iteratorIP8VariableEdeEv
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZSt11__addressofI8VariableEPT_RS1_
	mov	rsi, rbx
	mov	rdi, rax
	call	_ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_
	lea	rax, -40[rbp]
	mov	rdi, rax
	call	_ZNSt13move_iteratorIP8VariableEppEv
	add	QWORD PTR -24[rbp], 48
	jmp	.L479
.L478:
	mov	rax, QWORD PTR -24[rbp]
	jmp	.L485
.L483:
	endbr64
	mov	rdi, rax
	call	__cxa_begin_catch@PLT
	mov	rdx, QWORD PTR -24[rbp]
	mov	rax, QWORD PTR -56[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB115:
	call	_ZSt8_DestroyIP8VariableEvT_S2_
	call	__cxa_rethrow@PLT
.LEHE115:
.L484:
	endbr64
	mov	rbx, rax
	call	__cxa_end_catch@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB116:
	call	_Unwind_Resume@PLT
.LEHE116:
.L485:
	add	rsp, 56
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7131:
	.section	.gcc_except_table
	.align 4
.LLSDA7131:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT7131-.LLSDATTD7131
.LLSDATTD7131:
	.byte	0x1
	.uleb128 .LLSDACSE7131-.LLSDACSB7131
.LLSDACSB7131:
	.uleb128 .LEHB114-.LFB7131
	.uleb128 .LEHE114-.LEHB114
	.uleb128 .L483-.LFB7131
	.uleb128 0x1
	.uleb128 .LEHB115-.LFB7131
	.uleb128 .LEHE115-.LEHB115
	.uleb128 .L484-.LFB7131
	.uleb128 0
	.uleb128 .LEHB116-.LFB7131
	.uleb128 .LEHE116-.LEHB116
	.uleb128 0
	.uleb128 0
.LLSDACSE7131:
	.byte	0x1
	.byte	0
	.align 4
	.long	0

.LLSDATT7131:
	.section	.text._ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_,"axG",@progbits,_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_,comdat
	.size	_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_, .-_ZNSt20__uninitialized_copyILb0EE13__uninit_copyISt13move_iteratorIP8VariableES4_EET0_T_S7_S6_
	.section	.text._ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_,"axG",@progbits,_ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_,comdat
	.weak	_ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_
	.type	_ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_, @function
_ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_:
.LFB7134:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 32
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	QWORD PTR -24[rbp], rdx
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	_ZSt4moveIR8VariableEONSt16remove_referenceIT_E4typeEOS3_
	mov	rdx, rax
	mov	rcx, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rcx
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE9constructIS0_JS0_EEEvRS1_PT_DpOT0_
	mov	rax, QWORD PTR -16[rbp]
	mov	rdi, rax
	call	_ZSt11__addressofI8VariableEPT_RS1_
	mov	rdx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZNSt16allocator_traitsISaI8VariableEE7destroyIS0_EEvRS1_PT_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7134:
	.size	_ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_, .-_ZSt19__relocate_object_aI8VariableS0_SaIS0_EEvPT_PT0_RT1_
	.section	.text._ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_,"axG",@progbits,_ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_,comdat
	.weak	_ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_
	.type	_ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_, @function
_ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_:
.LFB7135:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rdx, QWORD PTR -16[rbp]
	mov	rax, QWORD PTR -8[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_
	xor	eax, 1
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7135:
	.size	_ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_, .-_ZStneIP8VariableEbRKSt13move_iteratorIT_ES6_
	.section	.text._ZNSt13move_iteratorIP8VariableEppEv,"axG",@progbits,_ZNSt13move_iteratorIP8VariableEppEv,comdat
	.align 2
	.weak	_ZNSt13move_iteratorIP8VariableEppEv
	.type	_ZNSt13move_iteratorIP8VariableEppEv, @function
_ZNSt13move_iteratorIP8VariableEppEv:
.LFB7136:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	lea	rdx, 48[rax]
	mov	rax, QWORD PTR -8[rbp]
	mov	QWORD PTR [rax], rdx
	mov	rax, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7136:
	.size	_ZNSt13move_iteratorIP8VariableEppEv, .-_ZNSt13move_iteratorIP8VariableEppEv
	.section	.text._ZNKSt13move_iteratorIP8VariableEdeEv,"axG",@progbits,_ZNKSt13move_iteratorIP8VariableEdeEv,comdat
	.align 2
	.weak	_ZNKSt13move_iteratorIP8VariableEdeEv
	.type	_ZNKSt13move_iteratorIP8VariableEdeEv, @function
_ZNKSt13move_iteratorIP8VariableEdeEv:
.LFB7137:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7137:
	.size	_ZNKSt13move_iteratorIP8VariableEdeEv, .-_ZNKSt13move_iteratorIP8VariableEdeEv
	.section	.text._ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_,"axG",@progbits,_ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_,comdat
	.weak	_ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_
	.type	_ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_, @function
_ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_:
.LFB7138:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZSt7forwardI8VariableEOT_RNSt16remove_referenceIS1_E4typeE
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rsi, rax
	mov	edi, 48
	call	_ZnwmPv
	mov	rsi, rbx
	mov	rdi, rax
	call	_ZN8VariableC1EOS_
	nop
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7138:
	.size	_ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_, .-_ZSt10_ConstructI8VariableJS0_EEvPT_DpOT0_
	.section	.text._ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_,"axG",@progbits,_ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_,comdat
	.weak	_ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_
	.type	_ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_, @function
_ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_:
.LFB7139:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	QWORD PTR -32[rbp], rsi
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZNKSt13move_iteratorIP8VariableE4baseEv
	mov	rbx, rax
	mov	rax, QWORD PTR -32[rbp]
	mov	rdi, rax
	call	_ZNKSt13move_iteratorIP8VariableE4baseEv
	cmp	rbx, rax
	sete	al
	add	rsp, 24
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7139:
	.size	_ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_, .-_ZSteqIP8VariableEbRKSt13move_iteratorIT_ES6_
	.section	.text._ZNKSt13move_iteratorIP8VariableE4baseEv,"axG",@progbits,_ZNKSt13move_iteratorIP8VariableE4baseEv,comdat
	.align 2
	.weak	_ZNKSt13move_iteratorIP8VariableE4baseEv
	.type	_ZNKSt13move_iteratorIP8VariableE4baseEv, @function
_ZNKSt13move_iteratorIP8VariableE4baseEv:
.LFB7140:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rax, QWORD PTR [rax]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7140:
	.size	_ZNKSt13move_iteratorIP8VariableE4baseEv, .-_ZNKSt13move_iteratorIP8VariableE4baseEv
	.section	.text._ZN12Symbol_tableD2Ev,"axG",@progbits,_ZN12Symbol_tableD5Ev,comdat
	.align 2
	.weak	_ZN12Symbol_tableD2Ev
	.type	_ZN12Symbol_tableD2Ev, @function
_ZN12Symbol_tableD2Ev:
.LFB7167:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZN6VectorI8VariableED1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7167:
	.size	_ZN12Symbol_tableD2Ev, .-_ZN12Symbol_tableD2Ev
	.weak	_ZN12Symbol_tableD1Ev
	.set	_ZN12Symbol_tableD1Ev,_ZN12Symbol_tableD2Ev
	.section	.text._ZN12Token_streamD2Ev,"axG",@progbits,_ZN12Token_streamD5Ev,comdat
	.align 2
	.weak	_ZN12Token_streamD2Ev
	.type	_ZN12Token_streamD2Ev, @function
_ZN12Token_streamD2Ev:
.LFB7170:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	add	rax, 8
	mov	rdi, rax
	call	_ZN5TokenD1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7170:
	.size	_ZN12Token_streamD2Ev, .-_ZN12Token_streamD2Ev
	.weak	_ZN12Token_streamD1Ev
	.set	_ZN12Token_streamD1Ev,_ZN12Token_streamD2Ev
	.section	.rodata
.LC28:
	.string	"exit"
.LC29:
	.string	"sqr"
.LC30:
	.string	"pow"
.LC31:
	.string	"const"
.LC32:
	.string	"> "
.LC33:
	.string	"= "
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB7165:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA7165
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 40
	.cfi_offset 3, -24
	mov	DWORD PTR -36[rbp], edi
	mov	DWORD PTR -40[rbp], esi
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	cmp	DWORD PTR -36[rbp], 1
	jne	.L500
	cmp	DWORD PTR -40[rbp], 65535
	jne	.L500
	lea	rdi, _ZStL8__ioinit[rip]
.LEHB117:
	call	_ZNSt8ios_base4InitC1Ev@PLT
.LEHE117:
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZStL8__ioinit[rip]
	mov	rax, QWORD PTR _ZNSt8ios_base4InitD1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rax, -25[rbp]
	mov	rdx, rax
	lea	rsi, .LC28[rip]
	lea	rdi, _ZL11declareQuit[rip]
.LEHB118:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE118:
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZL11declareQuit[rip]
	mov	rax, QWORD PTR _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rax, -25[rbp]
	mov	rdx, rax
	lea	rsi, .LC29[rip]
	lea	rdi, _ZL11declareSqrt[rip]
.LEHB119:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE119:
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZL11declareSqrt[rip]
	mov	rax, QWORD PTR _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rax, -25[rbp]
	mov	rdx, rax
	lea	rsi, .LC30[rip]
	lea	rdi, _ZL6powkey[rip]
.LEHB120:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE120:
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZL6powkey[rip]
	mov	rax, QWORD PTR _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rax, -25[rbp]
	mov	rdx, rax
	lea	rsi, .LC31[rip]
	lea	rdi, _ZL12constKeyWord[rip]
.LEHB121:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE121:
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZL12constKeyWord[rip]
	mov	rax, QWORD PTR _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
	lea	rdi, sym[rip]
	call	_ZN12Symbol_tableC1Ev
	lea	rdx, __dso_handle[rip]
	lea	rsi, sym[rip]
	lea	rdi, _ZN12Symbol_tableD1Ev[rip]
	call	__cxa_atexit@PLT
	lea	rdi, ts[rip]
	call	_ZN12Token_streamC1Ev
	lea	rdx, __dso_handle[rip]
	lea	rsi, ts[rip]
	lea	rdi, _ZN12Token_streamD1Ev[rip]
	call	__cxa_atexit@PLT
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rax, -25[rbp]
	mov	rdx, rax
	lea	rsi, .LC32[rip]
	lea	rdi, _ZL6prompt[rip]
.LEHB122:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE122:
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZL6prompt[rip]
	mov	rax, QWORD PTR _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcEC1Ev@PLT
	lea	rax, -25[rbp]
	mov	rdx, rax
	lea	rsi, .LC33[rip]
	lea	rdi, _ZL6result[rip]
.LEHB123:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_@PLT
.LEHE123:
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	lea	rdx, __dso_handle[rip]
	lea	rsi, _ZL6result[rip]
	mov	rax, QWORD PTR _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev@GOTPCREL[rip]
	mov	rdi, rax
	call	__cxa_atexit@PLT
	jmp	.L500
.L509:
	endbr64
	mov	rbx, rax
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB124:
	call	_Unwind_Resume@PLT
.L510:
	endbr64
	mov	rbx, rax
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.L511:
	endbr64
	mov	rbx, rax
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.L512:
	endbr64
	mov	rbx, rax
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.L513:
	endbr64
	mov	rbx, rax
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.L514:
	endbr64
	mov	rbx, rax
	lea	rax, -25[rbp]
	mov	rdi, rax
	call	_ZNSaIcED1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
	call	_Unwind_Resume@PLT
.LEHE124:
.L500:
	mov	rax, QWORD PTR -24[rbp]
	xor	rax, QWORD PTR fs:40
	je	.L508
	call	__stack_chk_fail@PLT
.L508:
	add	rsp, 40
	pop	rbx
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7165:
	.section	.gcc_except_table
.LLSDA7165:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE7165-.LLSDACSB7165
.LLSDACSB7165:
	.uleb128 .LEHB117-.LFB7165
	.uleb128 .LEHE117-.LEHB117
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB118-.LFB7165
	.uleb128 .LEHE118-.LEHB118
	.uleb128 .L509-.LFB7165
	.uleb128 0
	.uleb128 .LEHB119-.LFB7165
	.uleb128 .LEHE119-.LEHB119
	.uleb128 .L510-.LFB7165
	.uleb128 0
	.uleb128 .LEHB120-.LFB7165
	.uleb128 .LEHE120-.LEHB120
	.uleb128 .L511-.LFB7165
	.uleb128 0
	.uleb128 .LEHB121-.LFB7165
	.uleb128 .LEHE121-.LEHB121
	.uleb128 .L512-.LFB7165
	.uleb128 0
	.uleb128 .LEHB122-.LFB7165
	.uleb128 .LEHE122-.LEHB122
	.uleb128 .L513-.LFB7165
	.uleb128 0
	.uleb128 .LEHB123-.LFB7165
	.uleb128 .LEHE123-.LEHB123
	.uleb128 .L514-.LFB7165
	.uleb128 0
	.uleb128 .LEHB124-.LFB7165
	.uleb128 .LEHE124-.LEHB124
	.uleb128 0
	.uleb128 0
.LLSDACSE7165:
	.text
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z4helpv, @function
_GLOBAL__sub_I__Z4helpv:
.LFB7172:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	esi, 65535
	mov	edi, 1
	call	_Z41__static_initialization_and_destruction_0ii
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7172:
	.size	_GLOBAL__sub_I__Z4helpv, .-_GLOBAL__sub_I__Z4helpv
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z4helpv
	.section	.rodata
	.align 8
.LC8:
	.long	0
	.long	1072693248
	.align 16
.LC10:
	.long	0
	.long	-2147483648
	.long	0
	.long	0
	.hidden	DW.ref._ZTISt13runtime_error
	.weak	DW.ref._ZTISt13runtime_error
	.section	.data.rel.local.DW.ref._ZTISt13runtime_error,"awG",@progbits,DW.ref._ZTISt13runtime_error,comdat
	.align 8
	.type	DW.ref._ZTISt13runtime_error, @object
	.size	DW.ref._ZTISt13runtime_error, 8
DW.ref._ZTISt13runtime_error:
	.quad	_ZTISt13runtime_error
	.hidden	DW.ref._ZTISt9exception
	.weak	DW.ref._ZTISt9exception
	.section	.data.rel.local.DW.ref._ZTISt9exception,"awG",@progbits,DW.ref._ZTISt9exception,comdat
	.align 8
	.type	DW.ref._ZTISt9exception, @object
	.size	DW.ref._ZTISt9exception, 8
DW.ref._ZTISt9exception:
	.quad	_ZTISt9exception
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:

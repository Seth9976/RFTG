// 函数名称: sub_51d8b0
// 虚拟地址: 0x51d8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_51d8b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6970ec
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1ac = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i = 0
    
    if (data_30786fc != 0)
        if ((data_3166378 & 1) == 0)
            data_3166378.d |= 1
            int32_t var_8_1 = 0
            data_3166374 = sub_509140(0x12, "sys/DebugFont.font")
            int32_t var_8_2 = 0xffffffff
        
        int32_t var_14 = *(data_30786fc + 0x5e206a4) + 1
        char var_1c_1 = 0
        int16_t var_1b_1 = 0
        char var_19_1 = 0x40
        var_14 = fconvert.s(float.t(var_14) * fconvert.t(15.0))
        long double x87_r7_3 = float.t(0)
        float var_60_1 = fconvert.s(x87_r7_3)
        float var_5c_1 = fconvert.s(fconvert.t(400f))
        float var_7c = fconvert.s(x87_r7_3)
        float var_58_1 = fconvert.s(fconvert.t(var_14))
        int32_t eax_6 = var_1c_1.d
        float var_70_1 = var_58_1
        var_14 = eax_6
        sub_4da140(eax_6, var_58_1, &var_7c, &var_14)
        sub_51d250()
        void* ecx_5 = data_30786fc
        int32_t eax_7 = *(ecx_5 + 0x5e206ac)
        int32_t edx_3 = *(ecx_5 + 0x5e206a4)
        float var_50_1 = fconvert.s(fconvert.t(var_60_1) + fconvert.t(15.0))
        var_1c_1.d = eax_7
        float var_18_1 = fconvert.s(fconvert.t(var_50_1))
        
        if (eax_7 s>= edx_3)
            var_1c_1.d = edx_3
        
        float var_8c
        
        if (var_1c_1.d s> 0)
            float var_64_2 = fconvert.s(fconvert.t(var_7c))
            float var_5c_2 = fconvert.s(fconvert.t(var_5c_1))
            
            do
                long double x87_r7_11 = fconvert.t(var_18_1)
                int32_t eax_9 = *(ecx_5 + 0x5e206a8) + i
                float var_88_1 = fconvert.s(x87_r7_11)
                var_8c = var_64_2
                float var_18_2 = fconvert.s(x87_r7_11 + fconvert.t(15.0))
                float var_84_1 = var_5c_2
                float edx_5 = fconvert.s(fconvert.t(var_18_2))
                float var_80_1 = edx_5
                
                if (*(ecx_5 + 0x5e2069c) == eax_9)
                    int16_t var_1f_1 = 0
                    char var_1d_1 = 0x40
                    int32_t eax_10 = 0xff.d
                    var_14 = eax_10
                    sub_4da140(eax_10, edx_5, &var_8c, &var_14)
                    ecx_5 = data_30786fc
                else if ((i.b & 1) != 0)
                    int16_t var_23_1 = 0xffff
                    char var_21_1 = 0x3f
                    edx_5 = 0xff.d
                    var_14 = edx_5
                    sub_4da140(&var_14, edx_5, &var_8c, &var_14)
                    ecx_5 = data_30786fc
                
                i += 1
                var_18_1 = fconvert.s(fconvert.t(var_18_2))
            while (i s< var_1c_1.d)
        
        float var_18_3 = fconvert.s(fconvert.t(var_50_1))
        int16_t top_1 = 0
        result = sub_51d3e0()
        char* const var_ec_1 = &data_83f3d3
        int32_t var_8_3 = 1
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
        
        if (var_1c_1.d s> 0)
            while (true)
                void* ecx_7 = data_30786fc
                void* eax_11 = *(ecx_7 + 0x5e206a8)
                void* eax_12 = eax_11 + result_1
                
                if (eax_11 + result_1 s< 0 || eax_12 s>= *(ecx_7 + 0x5e206ac))
                    sub_4c5870(
                        "sortIndex >= 0 && sortIndex < gProfilerGlobals->mCalculatedFunctionCount", 
                        &data_83f3d3, "PerfEvent.cpp", 0x357, "ProfilerDraw")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                int32_t esi_2 = *(ecx_7 + (eax_12 << 2) + 0x5e1c804)
                int32_t eax_13 = *(ecx_7 + 0x5e20698)
                var_14 = esi_2
                int16_t top_12
                
                if (eax_13 != 0x28)
                    *(ecx_7 + 0x5e01280)
                    unimplemented  {fild st0, dword [eax+0x8]}
                    float var_4c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                    unimplemented  {fstp dword [ebp-0x48], st0}
                    unimplemented  {fld st0, dword [eax]}
                    float var_94_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x90], st0})
                    unimplemented  {fstp dword [ebp-0x90], st0}
                    unimplemented  {fld st0, dword [eax+0x4]}
                    float var_b8_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xb4], st0})
                    unimplemented  {fstp dword [ebp-0xb4], st0}
                    top_12 = top_1 - 1
                    unimplemented  {fld st0, dword [eax+0xc]}
                else
                    unimplemented  {fild st0, dword [ecx+0x5e20688]}
                    float var_6c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
                    unimplemented  {fstp dword [ebp-0x68], st0}
                    unimplemented  {fild st0, dword [edx+0x10]}
                    unimplemented  {fld st0, dword [ebp-0x68]}
                    unimplemented  {fld st0, st0}
                    unimplemented  {fdivp st2, st0}
                    unimplemented  {fdivp st2, st0}
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    float var_4c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                    unimplemented  {fstp dword [ebp-0x48], st0}
                    unimplemented  {fld st0, dword [edx+0x8]}
                    unimplemented  {fdiv st0, st1}
                    float var_94_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x90], st0})
                    unimplemented  {fstp dword [ebp-0x90], st0}
                    unimplemented  {fld st0, dword [edx+0xc]}
                    unimplemented  {fdiv st0, st1}
                    float var_b8_1 = fconvert.s(unimplemented  {fstp dword [ebp-0xb4], st0})
                    unimplemented  {fstp dword [ebp-0xb4], st0}
                    top_12 = top_1 - 1
                    unimplemented  {fdivr st0, dword [edx+0x14]}
                
                float var_6c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x68], st0})
                unimplemented  {fstp dword [ebp-0x68], st0}
                char* const var_68 = &data_83f3d3
                char* const var_54 = &data_83f3d3
                char var_20
                var_20.d = &data_83f3d3
                char var_24
                var_24.d = &data_83f3d3
                var_8_3.b = 5
                unimplemented  {fld st0, dword [0x8a53c0]}
                unimplemented  {fld st0, dword [ebp-0x48]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_1 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                char* const eax_16
                eax_16.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | ((top_12 - 1) & 7) << 0xb
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                float* var_1b4
                var_1b4.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                bool p_1 = unimplemented  {test ah, 0x5}
                char* eax_18
                char** eax_19
                
                if (p_1)
                    var_8_3.b = 7
                    char* var_ac
                    sub_4c4510(sub_4c4a50(&var_ac, "%0.0f"))
                    var_8_3.b = 5
                    eax_18 = var_ac
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        eax_19 = &var_ac
                    label_51dbf9:
                        eax_18 = sub_4c4060(eax_19)
                        int32_t temp6_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            int32_t esi_4 = *(eax_18 + 0xc) + 0x10
                            sub_4f4430(eax_18, sub_4f4380(esi_4), esi_4)
                else
                    var_8_3.b = 6
                    char* var_9c
                    sub_4c4510(sub_4c4a50(&var_9c, "%0.1f"))
                    var_8_3.b = 5
                    eax_18 = var_9c
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        eax_19 = &var_9c
                        goto label_51dbf9
                unimplemented  {fld st0, dword [ebp-0x90]}
                long double temp4_1 = fconvert.t(100.0)
                unimplemented  {fcom st0, qword [0x8a55e8]} f- temp4_1
                bool c0_2 = unimplemented  {fcom st0, qword [0x8a55e8]} f< temp4_1
                bool c2_2 = is_unordered.t(unimplemented  {fcom st0, qword [0x8a55e8]}, temp4_1)
                bool c3_2 = unimplemented  {fcom st0, qword [0x8a55e8]} f== temp4_1
                eax_18.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top_12 & 7) << 0xb
                var_1b4.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                bool p_2 = unimplemented  {test ah, 0x5}
                char* eax_24
                char** eax_25
                
                if (p_2)
                    var_8_3.b = 9
                    char* var_b0
                    sub_4c4510(sub_4c4a50(&var_b0, "%0.1f"))
                    var_8_3.b = 5
                    eax_24 = var_b0
                    
                    if (eax_24 != 0 && *eax_24 != 0)
                        eax_25 = &var_b0
                    label_51dca9:
                        eax_24 = sub_4c4060(eax_25)
                        int32_t temp7_1 = *(eax_24 + 4)
                        *(eax_24 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            int32_t esi_6 = *(eax_24 + 0xc) + 0x10
                            sub_4f4430(eax_24, sub_4f4380(esi_6), esi_6)
                else
                    var_8_3.b = 8
                    char* var_a8
                    sub_4c4510(sub_4c4a50(&var_a8, "%0.2f"))
                    var_8_3.b = 5
                    eax_24 = var_a8
                    
                    if (eax_24 != 0 && *eax_24 != 0)
                        eax_25 = &var_a8
                        goto label_51dca9
                unimplemented  {fld st0, dword [ebp-0xb4]}
                long double temp5_1 = fconvert.t(100.0)
                unimplemented  {fcom st0, qword [0x8a55e8]} f- temp5_1
                bool c0_3 = unimplemented  {fcom st0, qword [0x8a55e8]} f< temp5_1
                bool c2_3 = is_unordered.t(unimplemented  {fcom st0, qword [0x8a55e8]}, temp5_1)
                bool c3_3 = unimplemented  {fcom st0, qword [0x8a55e8]} f== temp5_1
                eax_24.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                    | (top_12 & 7) << 0xb
                var_1b4.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                bool p_3 = unimplemented  {test ah, 0x5}
                char* eax_30
                char** eax_31
                
                if (p_3)
                    var_8_3.b = 0xb
                    char* var_a0
                    sub_4c4510(sub_4c4a50(&var_a0, "%0.1f"))
                    var_8_3.b = 5
                    eax_30 = var_a0
                    
                    if (eax_30 != 0 && *eax_30 != 0)
                        eax_31 = &var_a0
                    label_51dd59:
                        eax_30 = sub_4c4060(eax_31)
                        int32_t temp8_1 = *(eax_30 + 4)
                        *(eax_30 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            int32_t esi_8 = *(eax_30 + 0xc) + 0x10
                            sub_4f4430(eax_30, sub_4f4380(esi_8), esi_8)
                else
                    var_8_3.b = 0xa
                    char* var_b4
                    sub_4c4510(sub_4c4a50(&var_b4, "%0.2f"))
                    var_8_3.b = 5
                    eax_30 = var_b4
                    
                    if (eax_30 != 0 && *eax_30 != 0)
                        eax_31 = &var_b4
                        goto label_51dd59
                unimplemented  {fld st0, dword [0x8a53c0]}
                unimplemented  {fld st0, dword [ebp-0x68]}
                unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
                bool c0_4 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
                bool c2_4 =
                    is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
                bool c3_4 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
                eax_30.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa | (c3_4 ? 1 : 0) << 0xe
                    | ((top_12 - 1) & 7) << 0xb
                unimplemented  {fstp st1, st0}
                unimplemented  {fstp st1, st0}
                var_1b4.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                unimplemented  {fstp qword [esp], st0}
                bool p_4 = unimplemented  {test ah, 0x5}
                char** eax_37
                
                if (p_4)
                    var_8_3.b = 0xd
                    char* var_a4
                    sub_4c4510(sub_4c4a50(&var_a4, "%0.0f"))
                    var_8_3.b = 5
                    char* eax_39 = var_a4
                    
                    if (eax_39 != 0 && *eax_39 != 0)
                        eax_37 = &var_a4
                    label_51de0a:
                        void* eax_40 = sub_4c4060(eax_37)
                        int32_t temp9_1 = *(eax_40 + 4)
                        *(eax_40 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            int32_t esi_10 = *(eax_40 + 0xc) + 0x10
                            sub_4f4430(eax_40, sub_4f4380(esi_10), esi_10)
                else
                    var_8_3.b = 0xc
                    char* var_90
                    sub_4c4510(sub_4c4a50(&var_90, "%0.1f"))
                    var_8_3.b = 5
                    char* eax_36 = var_90
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        eax_37 = &var_90
                        goto label_51de0a
                void* ecx_8 = data_30786fc
                unimplemented  {fldz }
                int32_t eax_43 = *(ecx_8 + 0x5e206b0)
                float var_4c_3 = fconvert.s(unimplemented  {fst dword [ebp-0x48], st0})
                
                if (eax_43 == 1 && *(ecx_8 + 0x5e206b4) != var_14)
                label_51de5c:
                    unimplemented  {fld st0, dword [0x8a53c0]}
                    float var_4c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x48], st0})
                    unimplemented  {fstp dword [ebp-0x48], st0}
                else if (eax_43 == 2 && *(ecx_8 + 0x5e206b4) == var_14)
                    goto label_51de5c
                
                char* const esi_11 = var_68
                
                if (esi_11 == 0)
                    esi_11 = &data_83f3d3
                
                unimplemented  {fld st0, dword [ebp-0x78]}
                unimplemented  {fadd qword [0x8a5388]}
                var_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld1 }
                float var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                float var_38_1 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fxch st0, st1}
                unimplemented  {fxch st0, st1}
                float var_3c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                float var_30_1 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_1 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                unimplemented  {fld st0, dword [ebp-0x10]}
                float var_40_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0x14]}
                float var_34_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                float var_110[0x9]
                sub_413350(&var_48, &var_110, 0x840974)
                unimplemented  {fld1 }
                var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                unimplemented  {fldz }
                int32_t var_c0_1 = 0
                float var_3c_2 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                int32_t var_bc_1 = 0
                float var_30_2 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_2 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                float var_38_2 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fld st0, dword [ebp-0xbc]}
                float var_40_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0xb8]}
                float var_34_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                float var_134[0x9]
                sub_413350(&var_48, &var_134, &var_110)
                sub_4ca330(&var_134, data_3166374, esi_11, &var_134, 0xffffffff, 0xffffffff)
                unimplemented  {call 0x4ca330}
                char* const edi_6 = var_54
                
                if (edi_6 == 0)
                    edi_6 = &data_83f3d3
                
                unimplemented  {fld st0, dword [ebp-0x78]}
                unimplemented  {fadd qword [0x8a59f8]}
                var_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld1 }
                var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                unimplemented  {fldz }
                float var_3c_3 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                float var_30_3 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_3 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                float var_38_3 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fld st0, dword [ebp-0x10]}
                float var_40_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0x14]}
                float var_34_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                sub_413350(&var_48, &var_134, 0x840974)
                unimplemented  {fld1 }
                var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                unimplemented  {fldz }
                int32_t var_d0_1 = 0
                float var_3c_4 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                int32_t var_cc_1 = 0
                float var_30_4 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_4 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                float var_38_4 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fld st0, dword [ebp-0xcc]}
                float var_40_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0xc8]}
                float var_34_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                sub_413350(&var_48, &var_110, &var_134)
                sub_4ca330(&var_110, data_3166374, edi_6, &var_110, 0xffffffff, 0xffffffff)
                unimplemented  {call 0x4ca330}
                char* const edi_7 = var_20.d
                
                if (edi_7 == 0)
                    edi_7 = &data_83f3d3
                
                unimplemented  {fld st0, dword [ebp-0x78]}
                unimplemented  {fadd qword [0x8a59f0]}
                var_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld1 }
                var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                unimplemented  {fldz }
                float var_3c_5 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                float var_30_5 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_5 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                float var_38_5 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fld st0, dword [ebp-0x10]}
                float var_40_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0x14]}
                float var_34_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                sub_413350(&var_48, &var_134, 0x840974)
                unimplemented  {fld1 }
                var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                unimplemented  {fldz }
                int32_t var_d8_1 = 0
                float var_3c_6 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                int32_t var_d4_1 = 0
                float var_30_6 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_6 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                float var_38_6 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fld st0, dword [ebp-0xd4]}
                float var_40_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0xd0]}
                float var_34_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_6 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                sub_413350(&var_48, &var_110, &var_134)
                sub_4ca330(&var_110, data_3166374, edi_7, &var_110, 0xffffffff, 0xffffffff)
                unimplemented  {call 0x4ca330}
                char* esi_12 = var_24.d
                char* const edi_8 = &data_83f3d3
                
                if (esi_12 != 0)
                    edi_8 = esi_12
                
                unimplemented  {fld st0, dword [ebp-0x78]}
                unimplemented  {fadd qword [0x8a59e8]}
                var_14 = fconvert.s(unimplemented  {fstp dword [ebp-0x10], st0})
                unimplemented  {fstp dword [ebp-0x10], st0}
                unimplemented  {fld1 }
                var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                unimplemented  {fldz }
                float var_3c_7 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                float var_30_7 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_7 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                float var_38_7 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fld st0, dword [ebp-0x10]}
                float var_40_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0x14]}
                float var_34_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_7 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                sub_413350(&var_48, &var_134, 0x840974)
                unimplemented  {fld1 }
                var_48 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                unimplemented  {fldz }
                int32_t var_5c_3 = 0
                float var_3c_8 = fconvert.s(unimplemented  {fst dword [ebp-0x38], st0})
                int32_t var_58_3 = 0
                float var_30_8 = fconvert.s(unimplemented  {fst dword [ebp-0x2c], st0})
                float var_44_8 = fconvert.s(unimplemented  {fst dword [ebp-0x40], st0})
                float var_2c_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x28], st0})
                unimplemented  {fstp dword [ebp-0x28], st0}
                float var_38_8 = fconvert.s(unimplemented  {fst dword [ebp-0x34], st0})
                unimplemented  {fld st0, dword [ebp-0x58]}
                float var_40_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                unimplemented  {fld st0, dword [ebp-0x54]}
                float var_34_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x30], st0})
                unimplemented  {fstp dword [ebp-0x30], st0}
                float var_28_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                unimplemented  {fstp dword [ebp-0x24], st0}
                sub_413350(&var_48, &var_110, &var_134)
                sub_4ca330(&var_110, data_3166374, edi_8, &var_110, 0xffffffff, 0xffffffff)
                unimplemented  {call 0x4ca330}
                unimplemented  {fld st0, dword [ebp-0x78]}
                unimplemented  {fadd qword [0x8a59e0]}
                unimplemented  {fadd dword [ebp-0x48]}
                var_8c = fconvert.s(unimplemented  {fstp dword [ebp-0x88], st0})
                unimplemented  {fstp dword [ebp-0x88], st0}
                unimplemented  {fld st0, dword [ebp-0x14]}
                float var_e8 = var_8c
                float var_88_2 = fconvert.s(unimplemented  {fst dword [ebp-0x84], st0})
                unimplemented  {fld st0, dword [ebp-0x70]}
                float var_e4_1 = var_88_2
                float var_84_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x80], st0})
                unimplemented  {fstp dword [ebp-0x80], st0}
                float var_e0_1 = var_84_2
                unimplemented  {fadd qword [0x8a55b0]}
                float var_18_4 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                int32_t var_1b0_15 = *(ecx_7 + esi_2 * 0x1c + 0x5e01288)
                unimplemented  {fld st0, dword [ebp-0x14]}
                int32_t var_1b4_1 = *(ecx_7 + esi_2 * 0x1c + 0x5e01284)
                float var_80_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x7c], st0})
                unimplemented  {fstp dword [ebp-0x7c], st0}
                float var_dc_1 = var_80_2
                char* var_98
                sub_4c4a50(&var_98, "%s%s")
                var_8_3.b = 0xe
                int32_t var_c4 = data_3166374
                char const* const var_19c
                int32_t ecx_19
                int32_t* edx_27
                ecx_19, edx_27 = sub_5abfc0(&var_19c, 0, 0x68)
                unimplemented  {fld1 }
                float var_180_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x17c], st0})
                unimplemented  {fstp dword [ebp-0x17c], st0}
                int32_t var_1b0_16 = 0xffffffff
                var_1b4 = &var_e8
                int32_t var_188_1 = 0xffffffff
                int32_t var_194_1 = 0
                int32_t var_190_1 = 0
                var_19c = "NORMAL"
                int32_t* var_198_1 = &var_c4
                int32_t var_18c_1 = 1
                sub_4cc7a0(nullptr, &var_19c, 1.21256766e-38f, edx_27, ecx_19)
                unimplemented  {fld st0, dword [ebp-0x14]}
                var_8_3.b = 5
                float var_18_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x14], st0})
                unimplemented  {fstp dword [ebp-0x14], st0}
                int16_t top_81
                top_1 = top_81 - 1
                char* eax_60 = var_98
                
                if (eax_60 != 0 && *eax_60 != 0)
                    if (*(eax_60 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp10_1 = *(eax_60 - 0xc)
                    *(eax_60 - 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        int32_t esi_14 = *(eax_60 - 4) + 0x10
                        sub_4f4430(&eax_60[0xfffffff0], sub_4f4380(esi_14), esi_14)
                        esi_12 = var_24.d
                
                var_8_3.b = 4
                
                if (esi_12 != 0 && *esi_12 != 0)
                    if (*(esi_12 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp11_1 = *(esi_12 - 0xc)
                    *(esi_12 - 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        int32_t esi_16 = *(esi_12 - 4) + 0x10
                        sub_4f4430(&esi_12[0xfffffff0], sub_4f4380(esi_16), esi_16)
                
                var_8_3.b = 3
                char* ebx_6 = var_20.d
                
                if (ebx_6 != 0 && *ebx_6 != 0)
                    if (*(ebx_6 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp12_1 = *(ebx_6 - 0xc)
                    *(ebx_6 - 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        int32_t esi_18 = *(ebx_6 - 4) + 0x10
                        sub_4f4430(&ebx_6[0xfffffff0], sub_4f4380(esi_18), esi_18)
                
                var_8_3.b = 2
                
                if (var_54 != 0 && *var_54 != 0)
                    if (*(var_54 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp13_1 = *(var_54 - 0xc)
                    *(var_54 - 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        int32_t esi_20 = *(var_54 - 4) + 0x10
                        sub_4f4430(&var_54[0xfffffff0], sub_4f4380(esi_20), esi_20)
                
                var_8_3.b = 1
                
                if (var_68 != 0 && *var_68 != 0)
                    if (*(var_68 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp14_1 = *(var_68 - 0xc)
                    *(var_68 - 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        int32_t esi_22 = *(var_68 - 4) + 0x10
                        sub_4f4430(&var_68[0xfffffff0], sub_4f4380(esi_22), esi_22)
                
                result = result_1 + 1
                result_1 = result
                
                if (result s>= var_1c_1.d)
                    break
                
                continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

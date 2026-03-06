// 函数名称: sub_506a30
// 虚拟地址: 0x506a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __stdcallsub_506a30(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6963c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_58 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg1
    
    if (edi[0x14].b == 0)
        int32_t* eax_3 = edi[0xb]
        float var_18
        
        if (eax_3 != 0)
            float var_28_1 = fconvert.s(fconvert.t(edi[4]))
            var_18 = fconvert.s(fconvert.t(edi[5]))
            sub_4e41f0(eax_3, &data_be4aac, 0x840974, eax_3, fconvert.s(fconvert.t(var_28_1)), 
                fconvert.s(fconvert.t(var_18)), fconvert.s(fconvert.t(fconvert.s(fconvert.t(edi[6])))), 
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(edi[7])))))
        
        float var_1c_1 = fconvert.s(fconvert.t(edi[8]) + fconvert.t(edi[4]))
        var_18 = fconvert.s(fconvert.t(edi[5]) + fconvert.t(edi[9]))
        long double x87_r6_1 = fconvert.t(var_1c_1)
        float var_30_1 = fconvert.s(fconvert.t(edi[6]) + x87_r6_1)
        long double x87_r5_2 = fconvert.t(var_18)
        float var_2c_1 = fconvert.s(fconvert.t(edi[7]) + x87_r5_2)
        float var_48 = fconvert.s(x87_r6_1)
        float var_38 = var_48
        float var_34_1 = fconvert.s(x87_r5_2)
        float var_30_2 = fconvert.s(fconvert.t(var_30_1))
        float var_2c_2 = fconvert.s(fconvert.t(var_2c_1))
        char* const eax_6 = *edi
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        void* ecx_2 = &edi[0xd]
        void* var_5c_2 = ecx_2
        sub_4caf10(edi[0x15], &edi[0xf], &var_38, eax_6, edi[0xc], ecx_2, &edi[0xf], 
            fconvert.s(fconvert.t(edi[0xe])))
        int32_t* eax_8 = edi[0xc]
        
        if (eax_8[1] != 0x12)
            sub_4c5870("assetPtr->assetType == ASSET_TYPE_FONT", &data_83f3d3, "AssetUtils.cpp", 0x2e0, 
                "FontGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* eax_10 = sub_466320(eax_8)
        long double x87_r6_7 = fconvert.t(edi[0xe])
        int32_t ecx_5 = edi[1]
        int32_t esi_1 = edi[3]
        float var_20_2 = fconvert.s(x87_r6_7 + x87_r6_7)
        int16_t top_1 = 0xffff
        int32_t edx_3
        edx_3:result = sx.q(ecx_5 - esi_1)
        int32_t ebx_3 = (result ^ edx_3) - edx_3
        
        if (ecx_5 s< esi_1)
            esi_1 = ecx_5
        
        if (ebx_3 s> 0)
            float var_20_3 = fconvert.s(fconvert.t(edi[0xe]))
            var_48 = fconvert.s(sub_506850(esi_1, edi))
            float var_44_2 = fconvert.s(fconvert.t(edi[9]) + fconvert.t(edi[5]))
            float var_40_2 = fconvert.s(sub_506850(esi_1 + ebx_3, edi))
            float var_3c_2 = fconvert.s(float.t(*eax_10) * fconvert.t(edi[0xe]) + fconvert.t(var_44_2))
            
            if (edi[1] == esi_1)
                var_48 = fconvert.s(fconvert.t(var_48) + fconvert.t(var_20_3))
            
            sub_4da140(&edi[0x11], eax_10, &var_48, &edi[0x11])
            float edx_5 = var_18
            float var_30_3 = var_1c_1
            float var_30_4 = fconvert.s(sub_506850(esi_1, edi))
            var_18 = &data_83f3d3
            int32_t var_8_1 = 0
            char* const edi_1 = *edi
            
            if (edi_1 == 0)
                edi_1 = &data_83f3d3
            
            sub_4c4690(&var_18, &edi_1[esi_1])
            float esi_3 = var_18
            float ecx_11 = &data_83f3d3
            
            if (esi_3 != 0)
                ecx_11 = esi_3
            
            arg1[0xc]
            float var_5c_7 = ecx_11
            int80_t st0_7
            st0_7, result = sub_4cad00(ecx_11, fconvert.s(fconvert.t(var_30_4)), 
                fconvert.s(fconvert.t(edx_5)), arg1[0x10], fconvert.s(fconvert.t(arg1[0xe])))
            top_1 = 0xfffe
            int32_t var_8_2 = 0xffffffff
            
            if (esi_3 != 0 && *esi_3 != 0)
                result = sub_4c4060(&var_18)
                int32_t temp3_1 = result[1]
                result[1] -= 1
                
                if (temp3_1 == 1)
                    int32_t esi_5 = &result[3][2]
                    sub_4f4430(result, sub_4f4380(esi_5), esi_5)
            
            edi = arg1
        
        unimplemented  {fld1 }
        long double temp1_1 = fconvert.t(edi[2])
        unimplemented  {fcomp st0, dword [edi+0x8]} f- temp1_1
        bool c0_1 = unimplemented  {fcomp st0, dword [edi+0x8]} f< temp1_1
        bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [edi+0x8]}, temp1_1)
        bool c3_1 = unimplemented  {fcomp st0, dword [edi+0x8]} f== temp1_1
        unimplemented  {fcomp st0, dword [edi+0x8]}
        result.w =
            (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            unimplemented  {fld st0, dword [edi+0x8]}
            unimplemented  {fsub st0, qword [0x8a5370]}
            edi[2] = fconvert.s(unimplemented  {fstp dword [edi+0x8], st0})
            unimplemented  {fstp dword [edi+0x8], st0}
        
        unimplemented  {fld st0, dword [0x873c70]}
        long double temp2_1 = fconvert.t(edi[2])
        unimplemented  {fcomp st0, dword [edi+0x8]} f- temp2_1
        bool c0_2 = unimplemented  {fcomp st0, dword [edi+0x8]} f< temp2_1
        bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, dword [edi+0x8]}, temp2_1)
        bool c3_2 = unimplemented  {fcomp st0, dword [edi+0x8]} f== temp2_1
        unimplemented  {fcomp st0, dword [edi+0x8]}
        result.w =
            (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe | (top_1 & 7) << 0xb
        
        if ((result:1.b & 0x41) != 0)
            result.b = 0
        else
            result.b = 1
        
        if (*(edi + 0x51) != 0 && result.b != 0)
            int32_t eax_18
            long double st0_8
            st0_8, eax_18 = sub_506850(edi[1], edi)
            unimplemented  {call 0x506850}
            var_48 = fconvert.s(unimplemented  {fstp dword [ebp-0x44], st0})
            unimplemented  {fstp dword [ebp-0x44], st0}
            unimplemented  {fild st0, dword [esi]}
            unimplemented  {fmul st0, dword [edi+0x38]}
            unimplemented  {fmul st0, qword [0x8a5500]}
            arg1 = fconvert.s(unimplemented  {fstp dword [ebp+0x8], st0})
            unimplemented  {fstp dword [ebp+0x8], st0}
            unimplemented  {fldz }
            unimplemented  {fld st0, dword [ebp+0x8]}
            unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
            bool c0_3 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
            bool c2_3 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
            bool c3_3 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
            eax_18.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa | (c3_3 ? 1 : 0) << 0xe
                | ((top_1 - 2) & 7) << 0xb
            unimplemented  {fstp st1, st0}
            unimplemented  {fstp st1, st0}
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                unimplemented  {fadd qword [0x8a5368]}
            else
                unimplemented  {fsub st0, qword [0x8a5368]}
            
            int32_t* eax_19
            int32_t edx_7
            eax_19, edx_7 = sub_685f40(st0_8)
            unimplemented  {fld st0, dword [edi+0x24]}
            unimplemented  {fmul st0, dword [edi+0x38]}
            arg1 = eax_19
            unimplemented  {fadd dword [edi+0x14]}
            unimplemented  {fiadd st0, dword [ebp+0x8]}
            float var_44_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
            unimplemented  {fstp dword [ebp-0x40], st0}
            unimplemented  {fld st0, dword [ebp-0x44]}
            unimplemented  {fadd dword [ebp-0x1c]}
            float var_40_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
            unimplemented  {fstp dword [ebp-0x3c], st0}
            unimplemented  {fild st0, dword [esi+0x4]}
            unimplemented  {fmul st0, dword [edi+0x38]}
            unimplemented  {fadd dword [ebp-0x40]}
            float var_3c_3 = fconvert.s(unimplemented  {fstp dword [ebp-0x38], st0})
            unimplemented  {fstp dword [ebp-0x38], st0}
            result = sub_4da140(ecx_2, edx_7, &var_48, ecx_2)
            unimplemented  {call 0x4da140}
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

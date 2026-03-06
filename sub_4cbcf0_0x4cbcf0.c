// 函数名称: sub_4cbcf0
// 虚拟地址: 0x4cbcf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4cbcf0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6956d0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* arg_4
    int32_t* edi = arg_4
    int32_t* eax_3 = edi[2]
    
    if (eax_3 s<= edi[1])
        while (true)
            if (edi[2] != edi[1])
                char* var_14 = nullptr
                int32_t* eax_4
                int32_t ecx_3
                eax_4, ecx_3 = sub_4cba80(eax_3, &var_14, edi, &var_14)
                
                if (eax_4 == 0)
                    void* eax_8 = sub_4cb400(edi)
                    var_14 = &data_83f3d3
                    int32_t var_8_1 = 0
                    sub_4c4690(&var_14, *edi + edi[2])
                    char* esi_3 = var_14
                    char* ecx_5 = &data_83f3d3
                    
                    if (esi_3 != 0)
                        ecx_5 = esi_3
                    
                    int32_t var_3c_7 = edi[0xb]
                    float var_18_3 = fconvert.s(sub_4cb0b0(ecx_5) * fconvert.t(edi[0xa]))
                    long double x87_r7_12 = fconvert.t(edi[3]) + fconvert.t(var_18_3)
                    long double x87_r6_3 = fconvert.t(edi[6])
                    x87_r6_3 - x87_r7_12
                    
                    if ((((x87_r6_3 < x87_r7_12 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_12) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_12 ? 1 : 0) << 0xe):1.b & 1) != 0)
                        float.t(0) - fconvert.t(edi[3])
                        bool p_2 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_2))
                            int32_t* var_3c_11 = edi
                            sub_4cb5f0(&arg_4)
                            var_8_1.b = 1
                            sub_4cbc00(&arg_4)
                            int32_t* eax_22 = arg_4
                            int32_t eax_23
                            
                            if (eax_22 == 0 || *eax_22 == 0)
                                eax_23 = 0
                            else
                                eax_23 = *(sub_4c4060(&arg_4) + 8)
                            
                            long double x87_r7_16 = fconvert.t(edi[3])
                            edi[2] += eax_23
                            var_8_1.b = 0
                            edi[3] = fconvert.s(x87_r7_16 + fconvert.t(var_18_3))
                            sub_4c43d0(&arg_4)
                        
                        int32_t var_8_4 = 0xffffffff
                        sub_4c43d0(&var_14)
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 
                    
                    sub_4cbc00(&var_14)
                    bool cond:0_1 = *(eax_8 + *edi) == 0xd
                    edi[3] = fconvert.s(fconvert.t(edi[3]) + fconvert.t(var_18_3))
                    edi[2] = eax_8
                    
                    if (not(cond:0_1))
                        eax_3 = 0xffffffff
                        int32_t var_8_2 = 0xffffffff
                        
                        if (esi_3 != 0 && *esi_3 != 0)
                            if (*(esi_3 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp1_1 = *(esi_3 - 0xc)
                            *(esi_3 - 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                void* edx_4 = data_26a44e4
                                int32_t esi_5 = *(esi_3 - 4) + 0x10
                                
                                if (edx_4 == 0)
                                    sub_4f4250()
                                    edx_4 = data_26a44e4
                                
                                int32_t eax_13 = 0
                                int32_t* edi_2
                                
                                while (true)
                                    if (esi_5 s<= 1 << (eax_13.b + 4))
                                        edi_2 = edx_4 + eax_13 * 0x14
                                        break
                                    
                                    eax_13 += 1
                                    
                                    if (eax_13 s>= 7)
                                        edi_2 = edx_4 + 0x8c
                                        break
                                
                                eax_3 = sub_4f4430(&esi_3[0xfffffff0], edi_2, esi_5)
                                edi = arg_4
                        
                        goto label_4cbee9
                    
                    int32_t var_8_3 = 0xffffffff
                    
                    if (esi_3 != 0 && *esi_3 != 0)
                        void* eax_18 = sub_4c4060(&var_14)
                        int32_t temp0_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            int32_t esi_7 = *(eax_18 + 0xc) + 0x10
                            sub_4f4430(eax_18, sub_4f4380(esi_7), esi_7)
                            fsbase->NtTib.ExceptionList = ExceptionList
                            return 
                else
                    if (eax_4[0xc].b != 0)
                        edi[2] = &var_14[edi[2]]
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return 
                    
                    int32_t* eax_5 = eax_4[2]
                    long double x87_r7_6
                    
                    if (eax_5 == 0)
                        x87_r7_6 = float.t(0)
                    else
                        eax_5 = *sub_466320(*eax_5)
                        ecx_3 = *eax_5
                        long double x87_r7_1 = float.t(*eax_5)
                        
                        if (ecx_3 s< 0)
                            x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
                        
                        x87_r7_6 = fconvert.t(eax_4[7]) * fconvert.t(fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(eax_5[2])))
                            * fconvert.t(fconvert.s(x87_r7_1))))
                    
                    char ebx_1 = 0
                    long double x87_r7_8 = fconvert.t(edi[3]) + fconvert.t(fconvert.s(x87_r7_6))
                    long double x87_r5_2 = fconvert.t(edi[6])
                    x87_r5_2 - x87_r7_8
                    eax_5.w = (x87_r5_2 < x87_r7_8 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_2, x87_r7_8) ? 1 : 0) << 0xa
                        | (x87_r5_2 == x87_r7_8 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_5:1.b & 1) != 0)
                        long double x87_r6_2 = fconvert.t(edi[3])
                        long double x87_r5_3 = float.t(0)
                        x87_r5_3 - x87_r6_2
                        eax_5.w = (x87_r5_3 < x87_r6_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_3, x87_r6_2) ? 1 : 0) << 0xa
                            | (x87_r5_3 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_1))
                            goto label_4cbdd3
                    else
                        ebx_1 = 1
                    label_4cbdd3:
                        int32_t var_3c_3 = ecx_3
                        sub_4cb8b0(eax_4, edi, fconvert.s(x87_r7_8))
                        eax_3 = arg_4
                        eax_3[2] = &var_14[eax_3[2]]
                        
                        if (ebx_1 != 0)
                            edi = eax_3
                        label_4cbee9:
                            
                            if (edi[2] s> edi[1])
                                break
                            
                            continue
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return 
    
    sub_4c5870("wrapperData.mCurrentTextPtr <= wrapperData.mTextLength", &data_83f3d3, "Font.cpp", 
        0x343, "WrapperLine")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_4015b0
// 虚拟地址: 0x4015b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4015b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696908
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_6c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    long double x87_r7 = fconvert.t(10f)
    float var_1c = fconvert.s(x87_r7)
    int32_t var_24 = 0
    float var_28 = fconvert.s(x87_r7)
    int16_t top = 0
    void* var_30 = nullptr
    int32_t result
    
    while (true)
        void* var_18_1
        void* esi_1
        
        if (var_30 != 0)
            var_18_1 = var_30 + 0x318b10
            esi_1 = var_30 + 0x318b10
        else
            esi_1 = data_8c86e8
            var_18_1 = esi_1
        
        result = data_8c86ec * 0x318b10 + data_8c86e8
        
        if (esi_1 u>= result)
            break
        
        while (true)
            if ((*(esi_1 + 0x318b08) & 0xffff0000) != 0)
                var_30 = esi_1
                
                if (var_24 s/ 0x1e s> 3)
                    break
                
                char* const var_14 = &data_83f3d3
                int32_t var_8_1 = 0
                int32_t eax_11 = *(esi_1 + 0x28)
                char* const ebx_1
                
                if (eax_11 == 0)
                    sub_4c4590("disconnected")
                    ebx_1 = var_14
                else if (eax_11 == 1)
                    sub_4c4590("connecting...")
                    ebx_1 = var_14
                else
                    if (eax_11 != 2)
                        sub_4c5870("Halt", &data_83f3d3, "..\code\Bots.cpp", 0x1da, "BotsScreenDraw")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void** edx_4 = sub_4c4590("cnctd")
                    int32_t eax_15 = *esi_1
                    
                    if (eax_15 == 0)
                        char* const eax_35 = var_14
                        
                        if (eax_35 == 0 || *eax_35 == 0)
                            sub_4c42b0(&var_14, " start")
                            esi_1 = var_18_1
                        else
                            void* edi_5 = *(sub_4c4060(&var_14) + 8)
                            sub_4c4160(edi_5 + 6, edx_4, &var_14, edi_5 + 6, 1)
                            __builtin_strncpy(edi_5 + var_14, " start", 7)
                        
                        ebx_1 = var_14
                    else
                        if (eax_15 != 1)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\Bots.cpp", 0x1b5, 
                                "BotsScreenDraw")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        char* const eax_18 = var_14
                        
                        if (eax_18 == 0 || *eax_18 == 0)
                            sub_4c42b0(&var_14, " qp wait")
                            esi_1 = var_18_1
                            ebx_1 = var_14
                        else
                            void* edi_1 = *(sub_4c4060(&var_14) + 8)
                            sub_4c4160(edi_1 + 8, edx_4, &var_14, edi_1 + 8, 1)
                            ebx_1 = var_14
                            __builtin_strncpy(edi_1 + ebx_1, " qp wait", 9)
                        
                        int32_t i_1 = 0
                        
                        if (*(esi_1 + 0x2c4960) s> 0)
                            void* var_20_1 = esi_1 + 0xcb4
                            int32_t i
                            
                            do
                                int32_t var_70_1 = *var_20_1
                                var_8_1.b = 1
                                char* var_34
                                char* edi_2 = *sub_4c4a50(&var_34, " QP %d")
                                
                                if (edi_2 != 0 && *edi_2 != 0)
                                    if (ebx_1 == 0 || *ebx_1 == 0)
                                        sub_4c42b0(&var_14, edi_2)
                                    else
                                        int32_t ebx_2 = *(sub_4c4060(&var_14) + 8)
                                        char* eax_26 = edi_2
                                        void** edx_6 = &eax_26[1]
                                        char j
                                        
                                        do
                                            j = *eax_26
                                            eax_26 = &eax_26[1]
                                        while (j != 0)
                                        void* eax_27 = eax_26 - edx_6
                                        void* eax_28 = eax_27 + ebx_2
                                        sub_4c4160(eax_28, edx_6, &var_14, eax_28, 1)
                                        sub_5ab990(&var_14[ebx_2], edi_2, eax_27 + 1)
                                    
                                    ebx_1 = var_14
                                    esi_1 = var_18_1
                                
                                var_8_1.b = 0
                                char* eax_29 = var_34
                                
                                if (eax_29 != 0 && *eax_29 != 0)
                                    void* eax_31 = sub_4c4060(&var_34)
                                    int32_t temp8_1 = *(eax_31 + 4)
                                    *(eax_31 + 4) -= 1
                                    
                                    if (temp8_1 == 1)
                                        int32_t esi_7 = *(eax_31 + 0xc) + 0x10
                                        sub_4f4430(eax_31, sub_4f4380(esi_7), esi_7)
                                        esi_1 = var_18_1
                                
                                var_20_1 += 0x1f8
                                i = i_1 + 1
                                i_1 = i
                            while (i s< *(esi_1 + 0x2c4960))
                
                int32_t ecx_9
                
                if (*(data_27e7a40 + 0x38) == 0)
                    ecx_9 = *(esi_1 + 0x318900)
                else
                    ecx_9 = *(esi_1 + 0x318904)
                
                char* const eax_41 = &data_83f3d3
                
                if (ebx_1 != 0)
                    eax_41 = ebx_1
                
                char* const var_70_3 = eax_41
                void* var_74_4 = esi_1 + 0x3188f0
                int32_t var_78_3 = ecx_9
                char* var_2c
                sub_4c4a50(&var_2c, "%d:%s: %s")
                unimplemented  {fld st0, dword [ebp-0x24]}
                var_8_1.b = 2
                float var_4c_1 = fconvert.s(unimplemented  {fst dword [ebp-0x48], st0})
                unimplemented  {fld st0, dword [ebp-0x18]}
                float var_48_1 = fconvert.s(unimplemented  {fst dword [ebp-0x44], st0})
                float var_40_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x3c], st0})
                unimplemented  {fstp dword [ebp-0x3c], st0}
                float var_5c = var_4c_1
                float var_44_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x40], st0})
                unimplemented  {fstp dword [ebp-0x40], st0}
                float var_54_1 = var_44_1
                char* const eax_43 = var_2c
                float var_58_1 = var_48_1
                float var_50_1 = var_40_1
                
                if (eax_43 == 0)
                    eax_43 = &data_83f3d3
                
                sub_4cadc0(&var_5c, eax_43)
                unimplemented  {call 0x4cadc0}
                unimplemented  {fld st0, dword [ebp-0x18]}
                unimplemented  {fadd qword [0x8a55c0]}
                int32_t ecx_13 = var_24 + 1
                float var_1c_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                unimplemented  {fstp dword [ebp-0x18], st0}
                top -= 1
                var_24 = ecx_13
                
                if (ecx_13 == ecx_13 s/ 0x1e * 0x1e)
                    unimplemented  {fld st0, dword [ebp-0x24]}
                    unimplemented  {fadd qword [0x8a5998]}
                    float var_28_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x24], st0})
                    unimplemented  {fstp dword [ebp-0x24], st0}
                    unimplemented  {fld st0, dword [0x8a53c0]}
                    float var_1c_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x18], st0})
                    unimplemented  {fstp dword [ebp-0x18], st0}
                
                var_8_1.b = 0
                char* eax_48 = var_2c
                
                if (eax_48 != 0 && *eax_48 != 0)
                    void* eax_50 = sub_4c4060(&var_2c)
                    int32_t temp6_1 = *(eax_50 + 4)
                    *(eax_50 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        int32_t esi_12 = *(eax_50 + 0xc) + 0x10
                        sub_4f4430(eax_50, sub_4f4380(esi_12), esi_12)
                
                int32_t var_8_2 = 0xffffffff
                
                if (ebx_1 == 0)
                    break
                
                if (*ebx_1 == 0)
                    break
                
                void* eax_54 = sub_4c4060(&var_14)
                int32_t temp7_1 = *(eax_54 + 4)
                *(eax_54 + 4) -= 1
                
                if (temp7_1 != 1)
                    break
                
                int32_t esi_14 = *(eax_54 + 0xc) + 0x10
                sub_4f4430(eax_54, sub_4f4380(esi_14), esi_14)
                break
            
            esi_1 += 0x318b10
            var_18_1 = esi_1
            
            if (esi_1 u>= result)
                goto label_40163c
    
    label_40163c:
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

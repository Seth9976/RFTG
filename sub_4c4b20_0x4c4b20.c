// 函数名称: sub_4c4b20
// 虚拟地址: 0x4c4b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_4c4b20(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4, void* arg5, char* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d948
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_2c = nullptr
    
    if (arg3 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char** result = arg4
    sub_4c42b0(result, arg3)
    char* eax_4 = arg5
    
    do
        arg3.b = *eax_4
        eax_4 = &eax_4[1]
    while (arg3.b != 0)
    
    void* eax_5 = eax_4 - &eax_4[1]
    char* i_1 = sub_5a8e80(sub_4c4410(result), arg5)
    
    if (i_1 != 0)
        char* i = i_1
        
        do
            void* ebx_2 = i - sub_4c4410(result)
            char* eax_11 = sub_4c4410(result)
            
            if (eax_11 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* const var_1c = &data_83f3d3
            sub_4c4690(&var_1c, eax_11)
            int32_t var_8_1 = 0
            char* eax_13 = *arg4
            int32_t eax_14
            
            if (eax_13 == 0 || *eax_13 == 0)
                eax_14 = 0
            else
                if (*(eax_13 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_14 = *(eax_13 - 8)
            
            if (eax_14 - ebx_2 - eax_5 s< 0)
                sub_4c5870("rightLen >= 0", &data_83f3d3, "xString.cpp", 0x1d7, "StringReplace")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_5 == neg.d(i))
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* const var_18 = &data_83f3d3
            sub_4c4690(&var_18, eax_5 + i)
            var_8_1.b = 1
            
            if (arg6 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* const var_14
            
            if (*arg6 != 0)
                void* eax_17 = arg6
                void** edx_1 = eax_17 + 1
                char j
                
                do
                    j = *eax_17
                    eax_17 += 1
                while (j != 0)
                char* const* var_44_3 = &var_14
                sub_4c40c0(eax_17 - edx_1, edx_1)
                char* eax_19 = arg6
                void* edx_3 = var_14 - arg6
                char j_1
                
                do
                    j_1 = *eax_19
                    *(edx_3 + eax_19) = j_1
                    eax_19 = &eax_19[1]
                while (j_1 != 0)
            else
                var_14 = &data_83f3d3
            
            var_8_1.b = 2
            var_8_1.b = 3
            char* var_28
            int32_t* esi_3 = sub_4c48a0(sub_4c48a0(&var_1c, &var_2c, &var_14), &var_28, &var_18)
            var_8_1.b = 4
            char* eax_22 = *arg4
            char* const edx_5 = &data_83f3d3
            
            if (eax_22 != 0)
                edx_5 = eax_22
            
            char* const ecx_2 = *esi_3
            
            if (ecx_2 == 0)
                ecx_2 = &data_83f3d3
            
            if (edx_5 != ecx_2)
                if (eax_22 != 0 && *eax_22 != 0)
                    if (*(eax_22 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp3_1 = *(eax_22 - 0xc)
                    *(eax_22 - 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        void* edi_3 = data_26a44e4
                        int32_t esi_5 = *(eax_22 - 4) + 0x10
                        
                        if (edi_3 == 0)
                            sub_4f4250()
                            edi_3 = data_26a44e4
                        
                        int32_t edx_6 = 0
                        int32_t* edi_4
                        
                        while (true)
                            if (esi_5 s<= 1 << (edx_6.b + 4))
                                edi_4 = edi_3 + edx_6 * 0x14
                                break
                            
                            edx_6 += 1
                            
                            if (edx_6 s>= 7)
                                edi_4 = edi_3 + 0x8c
                                break
                        
                        sub_4f4430(&eax_22[0xfffffff0], edi_4, esi_5)
                
                char* eax_25 = *esi_3
                *arg4 = eax_25
                
                if (eax_25 != 0 && *eax_25 != 0)
                    if (*(eax_25 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    *(eax_25 - 0xc) += 1
            
            var_8_1.b = 3
            char* eax_26 = var_28
            
            if (eax_26 != 0 && *eax_26 != 0)
                if (*(eax_26 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp2_1 = *(eax_26 - 0xc)
                *(eax_26 - 0xc) -= 1
                
                if (temp2_1 == 1)
                    void* edi_5 = data_26a44e4
                    int32_t esi_7 = *(eax_26 - 4) + 0x10
                    
                    if (edi_5 == 0)
                        sub_4f4250()
                        edi_5 = data_26a44e4
                    
                    int32_t edx_7 = 0
                    int32_t* edi_6
                    
                    while (true)
                        if (esi_7 s<= 1 << (edx_7.b + 4))
                            edi_6 = edi_5 + edx_7 * 0x14
                            break
                        
                        edx_7 += 1
                        
                        if (edx_7 s>= 7)
                            edi_6 = edi_5 + 0x8c
                            break
                    
                    sub_4f4430(&eax_26[0xfffffff0], edi_6, esi_7)
            
            var_8_1.b = 2
            char* eax_29 = var_2c
            
            if (eax_29 != 0 && *eax_29 != 0)
                if (*(eax_29 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp4_1 = *(eax_29 - 0xc)
                *(eax_29 - 0xc) -= 1
                
                if (temp4_1 == 1)
                    void* edi_7 = data_26a44e4
                    int32_t esi_9 = *(eax_29 - 4) + 0x10
                    
                    if (edi_7 == 0)
                        sub_4f4250()
                        edi_7 = data_26a44e4
                    
                    int32_t edx_8 = 0
                    int32_t* edi_8
                    
                    while (true)
                        if (esi_9 s<= 1 << (edx_8.b + 4))
                            edi_8 = edi_7 + edx_8 * 0x14
                            break
                        
                        edx_8 += 1
                        
                        if (edx_8 s>= 7)
                            edi_8 = edi_7 + 0x8c
                            break
                    
                    sub_4f4430(&eax_29[0xfffffff0], edi_8, esi_9)
            
            var_8_1.b = 1
            char* const ebx_7 = var_14
            
            if (ebx_7 != 0 && *ebx_7 != 0)
                if (*(ebx_7 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp5_1 = *(ebx_7 - 0xc)
                *(ebx_7 - 0xc) -= 1
                
                if (temp5_1 == 1)
                    void* edi_9 = data_26a44e4
                    int32_t esi_11 = *(ebx_7 - 4) + 0x10
                    
                    if (edi_9 == 0)
                        sub_4f4250()
                        edi_9 = data_26a44e4
                    
                    int32_t edx_9 = 0
                    int32_t* edi_10
                    
                    while (true)
                        if (esi_11 s<= 1 << (edx_9.b + 4))
                            edi_10 = edi_9 + edx_9 * 0x14
                            break
                        
                        edx_9 += 1
                        
                        if (edx_9 s>= 7)
                            edi_10 = edi_9 + 0x8c
                            break
                    
                    sub_4f4430(&ebx_7[0xfffffff0], edi_10, esi_11)
            
            var_8_1.b = 0
            char* const eax_34 = var_18
            
            if (eax_34 != 0 && *eax_34 != 0)
                if (*(eax_34 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp6_1 = *(eax_34 - 0xc)
                *(eax_34 - 0xc) -= 1
                
                if (temp6_1 == 1)
                    void* edi_11 = data_26a44e4
                    int32_t esi_13 = *(eax_34 - 4) + 0x10
                    
                    if (edi_11 == 0)
                        sub_4f4250()
                        edi_11 = data_26a44e4
                    
                    int32_t edx_10 = 0
                    int32_t* edi_13
                    
                    while (true)
                        if (esi_13 s<= 1 << (edx_10.b + 4))
                            edi_13 = edi_11 + edx_10 * 0x14
                            break
                        
                        edx_10 += 1
                        
                        if (edx_10 s>= 7)
                            edi_13 = edi_11 + 0x8c
                            break
                    
                    sub_4f4430(&eax_34[0xfffffff0], edi_13, esi_13)
            
            int32_t var_8_2 = 0xffffffff
            char* const eax_37 = var_1c
            
            if (eax_37 != 0 && *eax_37 != 0)
                if (*(eax_37 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp7_1 = *(eax_37 - 0xc)
                *(eax_37 - 0xc) -= 1
                
                if (temp7_1 == 1)
                    void* edi_14 = data_26a44e4
                    int32_t esi_15 = *(eax_37 - 4) + 0x10
                    
                    if (edi_14 == 0)
                        sub_4f4250()
                        edi_14 = data_26a44e4
                    
                    int32_t edx_11 = 0
                    int32_t* edi_15
                    
                    while (true)
                        if (esi_15 s<= 1 << (edx_11.b + 4))
                            edi_15 = edi_14 + edx_11 * 0x14
                            break
                        
                        edx_11 += 1
                        
                        if (edx_11 s>= 7)
                            edi_15 = edi_14 + 0x8c
                            break
                    
                    sub_4f4430(&eax_37[0xfffffff0], edi_15, esi_15)
            
            result = arg4
            i = sub_5a8e80(sub_4c4410(arg4), arg5)
        while (i != 0)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

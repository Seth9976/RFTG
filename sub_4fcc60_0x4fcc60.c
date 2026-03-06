// 函数名称: sub_4fcc60
// 虚拟地址: 0x4fcc60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_4fcc60(int32_t arg1, int32_t arg2, void* arg3, char** arg4, void* arg5, void* arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d7a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c = 0
    char* var_14
    sub_4c42b0(&var_14, &data_83f3d3)
    char* eax_3 = arg5
    int32_t var_8_1 = 1
    char i
    
    do
        i = *eax_3
        eax_3 = &eax_3[1]
    while (i != 0)
    char* eax_5 = arg6
    void* edx
    
    do
        edx.b = *eax_5
        eax_5 = &eax_5[1]
    while (edx.b != 0)
    void* esi_1 = arg3
    char* const var_18
    char** result
    char* esi_11
    bool cond:1_1
    
    if (sub_5a8e80(arg3, arg5) != 0)
        char* i_1
        
        do
            char* eax_9 = sub_5a8e80(esi_1 + eax_3 - &eax_3[1], arg6)
            
            if (eax_9 == 0)
                sub_4c5870("Halt", &data_83f3d3, "Localization.cpp", 0x6e, "RemoveMarkup")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (esi_1 == 0)
                sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x95, "XString::XString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            var_18 = &data_83f3d3
            sub_4c4690(&var_18, esi_1)
            var_8_1.b = 3
            char* const esi_3 = var_18
            
            if (esi_3 != 0 && *esi_3 != 0)
                char* eax_10 = var_14
                char j
                
                if (eax_10 == 0 || *eax_10 == 0)
                    char* const eax_11 = esi_3
                    void* edx_2 = &eax_11[1]
                    
                    do
                        j = *eax_11
                        eax_11 = &eax_11[1]
                    while (j != 0)
                    
                    int32_t* var_3c_3 = &var_14
                    sub_4c40c0(eax_11 - edx_2, edx_2)
                    char* const eax_13 = esi_3
                    void* edx_4 = var_14 - esi_3
                    char j_1
                    
                    do
                        j_1 = *eax_13
                        *(edx_4 + eax_13) = j_1
                        eax_13 = &eax_13[1]
                    while (j_1 != 0)
                else
                    if (*(eax_10 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edi_1 = *(eax_10 - 8)
                    void* eax_14 = esi_3
                    void** edx_5 = eax_14 + 1
                    
                    do
                        j = *eax_14
                        eax_14 += 1
                    while (j != 0)
                    
                    void* eax_15 = eax_14 - edx_5
                    void** eax_16 = eax_15 + edi_1
                    sub_4c4160(eax_16, edx_5, &var_14, eax_16, 1)
                    sub_5ab990(&var_14[edi_1], esi_3, eax_15 + 1)
            
            var_8_1.b = 1
            
            if (esi_3 != 0 && *esi_3 != 0)
                if (*(esi_3 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp2_1 = *(esi_3 - 0xc)
                *(esi_3 - 0xc) -= 1
                
                if (temp2_1 == 1)
                    void* edi_3 = data_26a44e4
                    int32_t esi_5 = *(esi_3 - 4) + 0x10
                    
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
                    
                    sub_4f4430(&esi_3[0xfffffff0], edi_4, esi_5)
            
            esi_1 = eax_9 + eax_5 - &eax_5[1]
            
            if (*esi_1 == 0)
                esi_11 = var_14
                result = arg4
                *result = esi_11
                cond:1_1 = esi_11 == 0
                
                if (esi_11 == 0)
                    goto label_4fcfc8
                
                if (*esi_11 != 0)
                    void* eax_36 = sub_4c4060(result)
                    *(eax_36 + 4) += 1
                
                goto label_4fcfc6
            
            i_1 = sub_5a8e80(esi_1, arg5)
        while (i_1 != 0)
    
    if (esi_1 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_18, esi_1)
    var_8_1.b = 2
    char* const esi_8 = var_18
    char* const eax_23 = &data_83f3d3
    
    if (esi_8 != 0)
        eax_23 = esi_8
    
    sub_4c4620(&var_14, eax_23)
    var_8_1.b = 1
    
    if (esi_8 != 0 && *esi_8 != 0)
        void* eax_26 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_10 = *(eax_26 + 0xc) + 0x10
            sub_4f4430(eax_26, sub_4f4380(esi_10), esi_10)
    
    esi_11 = var_14
    result = arg4
    *result = esi_11
    
    if (esi_11 != 0 && *esi_11 != 0)
        void* eax_30 = sub_4c4060(result)
        *(eax_30 + 4) += 1
    
    label_4fcfc6:
    cond:1_1 = esi_11 == 0
    label_4fcfc8:
    var_8_1.b = 0
    int32_t var_1c_1 = 1
    
    if (not(cond:1_1) && *esi_11 != 0)
        void* eax_38 = sub_4c4060(&var_14)
        int32_t temp3_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp3_1 == 1)
            int32_t esi_13 = *(eax_38 + 0xc) + 0x10
            sub_4f4430(eax_38, sub_4f4380(esi_13), esi_13)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}

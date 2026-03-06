// 函数名称: sub_4d03e0
// 虚拟地址: 0x4d03e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4d03e0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f830
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t** var_28 = nullptr
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t var_8_1 = 0
    char var_14 = 0
    
    if (data_8bc5ff != 0)
        var_14 = 1
    
    int32_t* eax_3 = var_14.d
    int32_t* var_3c = eax_3
    char eax_4
    int32_t* ecx_1
    eax_4, ecx_1 = sub_4d0220(eax_3, arg1, &var_28, var_3c)
    
    if (eax_4 == 0)
        var_3c = &var_28
        int32_t var_8_2 = 0xffffffff
        sub_4d0770(var_3c)
        int32_t* eax_5
        eax_5.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    int32_t** eax_6 = var_28
    int32_t** esi = eax_6
    
    if (eax_6 != 0)
        while (true)
            int32_t* eax_8 = *esi
            int32_t edx_1 = esi[0xa]
            var_3c = ecx_1
            var_14.d = edx_1
            int32_t** var_18_1 = &var_3c
            var_3c = eax_8
            int32_t* var_4c
            int32_t* var_48
            
            if (eax_8 != 0 && *eax_8 != 0)
                if (eax_8[-4] != 0xfafafafa)
                    char const* const var_40_3 = "XStringMagicDataStructFromCharPtr"
                    int32_t var_44_2 = 0x20
                    var_48 = "xString.cpp"
                    var_4c = &data_83f3d3
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", var_4c, 
                        var_48, var_44_2, var_40_3)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_8[-3] += 1
            
            if (sub_50a0e0(&var_3c) == 0)
                int32_t* ecx_7 = esi[3]
                int32_t edx_2 = esi[2]
                var_3c = esi[4]
                char* eax_11 = arg1
                int32_t* var_40_2 = ecx_7
                var_48 = ecx_7
                int32_t** var_18_2 = &var_48
                
                if (eax_11 == 0)
                    var_4c = "XString::XString"
                    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, var_4c)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*eax_11 != 0)
                    void** edx_3 = &eax_11[1]
                    
                    do
                        ecx_7.b = *eax_11
                        eax_11 = &eax_11[1]
                    while (ecx_7.b != 0)
                    
                    var_4c = &var_48
                    sub_4c40c0(eax_11 - edx_3, edx_3)
                    ecx_7 = arg1
                    int32_t* edx_4 = var_48
                    char i
                    
                    do
                        i = *ecx_7
                        *edx_4 = i
                        ecx_7 += 1
                        edx_4 += 1
                    while (i != 0)
                else
                    var_48 = &data_83f3d3
                
                var_8_1.b = 1
                esi[1]
                var_4c = ecx_7
                int32_t* ecx_8 = *esi
                int32_t** var_1c_1 = &var_4c
                var_4c = ecx_8
                
                if (ecx_8 != 0 && *ecx_8 != 0)
                    void* eax_14 = sub_4c4060(&var_4c)
                    *(eax_14 + 4) += 1
                
                var_8_1.b = 0
                ecx_1 = sub_509930(var_4c, var_48, edx_2)
            else
                int32_t* esi_1 = *esi
                
                if (esi_1 == 0)
                    esi_1 = &data_83f3d3
                
                var_3c = esi_1
                ecx_1 = sub_4c5680("Asset in pack is already loaded '%s'")
            
            if (var_14.d == 0)
                break
            
            esi = var_14.d
    
    var_3c = &var_28
    int32_t var_8_3 = 0xffffffff
    sub_4d0770(var_3c)
    int32_t* eax_7
    eax_7.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7
}

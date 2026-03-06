// 函数名称: sub_5533b0
// 虚拟地址: 0x5533b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5533b0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fad0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char const* const var_34 = 0x10
    int32_t var_8_1 = 0
    int32_t* eax_3 = __execvp(0x40, var_34)
    
    if (eax_3 == 0)
        var_34 = "XMalloc"
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, var_34)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    var_34 = data_30d746c
    sub_4fe7d0(eax_3, var_34)
    int32_t* eax_5 = data_30d7464
    void* edi = arg2[1]
    int32_t eax_6 = eax_5[3]
    
    if (eax_6 == 0)
        var_34 = "DefinitionGetSize"
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, var_34)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_8 = sub_4cce80(eax_6)
    var_34 = nullptr
    sub_501f80(eax_8, eax_5, edi, var_34.b)
    char const* const* var_20 = &var_34
    
    if (arg1 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_34, arg1)
    char* var_18
    sub_4c5230(&var_18)
    var_8_1.b = 1
    char* const eax_10 = var_18
    
    if (eax_10 == 0)
        eax_10 = &data_83f3d3
    
    var_34 = 7
    uint32_t eax_11
    char* ecx_1
    eax_11, ecx_1 = sub_5a7934(eax_10, "skybox_", var_34)
    uint32_t eax_13
    
    if (eax_11 != 0)
        char* const eax_12 = var_18
        
        if (eax_12 == 0)
            eax_12 = &data_83f3d3
        
        var_34 = 8
        eax_13, ecx_1 = sub_5a7934(eax_12, "cubemap_", var_34)
    
    if (eax_11 == 0 || eax_13 == 0)
        eax_8[4] = 1
    
    var_34 = ecx_1
    char const* const* eax_14 = &var_34
    char* arg_c
    var_34 = arg_c
    char* ecx_3 = arg_c
    char const* const* var_20_1 = &var_34
    
    if (ecx_3 != 0 && *ecx_3 != 0)
        eax_14 = sub_4c4060(eax_14)
        eax_14[1] = &eax_14[1][1]
    
    char eax_15 = sub_553270(eax_14, eax_8, eax_3, arg1)
    sub_4fed40(eax_8, data_30d7464)
    
    if (eax_15 != 0)
        **arg2 = eax_3
        var_8_1.b = 0
        char* eax_27 = var_18
        
        if (eax_27 != 0 && *eax_27 != 0)
            void* eax_29 = sub_4c4060(&var_18)
            int32_t temp0_1 = *(eax_29 + 4)
            *(eax_29 + 4) -= 1
            
            if (temp0_1 == 1)
                char* esi_8 = *(eax_29 + 0xc) + 0x10
                int32_t* eax_30 = sub_4f4380(esi_8)
                var_34 = esi_8
                sub_4f4430(eax_29, eax_30, var_34)
        
        int32_t var_8_3 = 0xffffffff
        void* eax_32 = arg_c
        
        if (eax_32 != 0 && *eax_32 != 0)
            eax_32 = sub_4c4060(&arg_c)
            int32_t temp2_1 = *(eax_32 + 4)
            *(eax_32 + 4) -= 1
            
            if (temp2_1 == 1)
                char* esi_10 = *(eax_32 + 0xc) + 0x10
                int32_t* eax_34 = sub_4f4380(esi_10)
                var_34 = esi_10
                sub_4f4430(eax_32, eax_34, var_34)
        
        eax_32.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_32
    
    var_34 = eax_3
    _aligned_free_base(var_34)
    var_8_1.b = 0
    char* eax_16 = var_18
    
    if (eax_16 != 0 && *eax_16 != 0)
        void* eax_18 = sub_4c4060(&var_18)
        int32_t temp1_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp1_1 == 1)
            char* esi_4 = *(eax_18 + 0xc) + 0x10
            int32_t* eax_19 = sub_4f4380(esi_4)
            var_34 = esi_4
            sub_4f4430(eax_18, eax_19, var_34)
    
    int32_t var_8_2 = 0xffffffff
    void* eax_21 = arg_c
    
    if (eax_21 != 0 && *eax_21 != 0)
        eax_21 = sub_4c4060(&arg_c)
        int32_t temp3_1 = *(eax_21 + 4)
        *(eax_21 + 4) -= 1
        
        if (temp3_1 == 1)
            char* esi_6 = *(eax_21 + 0xc) + 0x10
            int32_t* eax_23 = sub_4f4380(esi_6)
            var_34 = esi_6
            sub_4f4430(eax_21, eax_23, var_34)
    
    eax_21.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_21
}

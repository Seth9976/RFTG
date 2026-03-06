// 函数名称: sub_51fbc0
// 虚拟地址: 0x51fbc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_51fbc0(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e261
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18 = 0
    int32_t var_8_1 = 1
    
    if (data_8bc5ff == 0)
        sub_4c5870("gCompilingMode", &data_83f3d3, "DefLoad.cpp", 0x14a, "AssetSideCarMakeFullPath")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* arg_8
    
    if (arg2 != 3 && arg2 != 0x21 && arg2 != 0x15 && arg2 != 0xa && arg2 != 4 && arg2 != 2
            && arg2 != 0x1c)
        int32_t edx
        sub_4c4330(&data_83f3d3, edx, arg1)
        int32_t var_18_1 = 1
        var_8_1.b = 0
        sub_4c43d0(&arg_8)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    char* var_14
    sub_4c42b0(&var_14, ".xml")
    var_8_1.b = 2
    char* var_1c
    int32_t* eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_4c48a0(&arg_8, &var_1c, &var_14)
    var_8_1.b = 3
    char* const eax_7 = *eax_6
    
    if (eax_7 == 0)
        eax_7 = &data_83f3d3
    
    sub_51ece0(eax_7, edx_1, eax_7, arg1)
    var_8_1.b = 2
    char* eax_8 = var_1c
    int32_t var_18_2 = 1
    
    if (eax_8 != 0 && *eax_8 != 0)
        void* eax_10 = sub_4c4060(&var_1c)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_10 + 0xc) + 0x10
            sub_4f4430(eax_10, sub_4f4380(esi_3), esi_3)
    
    var_8_1.b = 1
    char* eax_13 = var_14
    
    if (eax_13 != 0 && *eax_13 != 0)
        void* eax_15 = sub_4c4060(&var_14)
        int32_t temp1_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp1_1 == 1)
            int32_t esi_5 = *(eax_15 + 0xc) + 0x10
            sub_4f4430(eax_15, sub_4f4380(esi_5), esi_5)
    
    var_8_1.b = 0
    char* eax_18 = arg_8
    
    if (eax_18 != 0 && *eax_18 != 0)
        void* eax_20 = sub_4c4060(&arg_8)
        int32_t temp2_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_7 = *(eax_20 + 0xc) + 0x10
            sub_4f4430(eax_20, sub_4f4380(esi_7), esi_7)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}

// 函数名称: sub_5554d0
// 虚拟地址: 0x5554d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_5554d0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c948
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    char* arg_4
    
    if (*arg4 != 2)
        char* const eax_4 = arg_4
        
        if (eax_4 == 0)
            eax_4 = &data_83f3d3
        
        char* const var_24_1 = eax_4
        sub_4c5680("unsupported ogg format conversion: %s")
    
    char* eax_5 = arg_4
    
    if (eax_5 == 0)
        eax_5 = &data_83f3d3
    
    int32_t* eax_6 = sub_5a898b(eax_5, "rb")
    
    if (eax_6 != 0)
        sub_5a9831(eax_6, nullptr, FILE_END)
        void* eax_7 = sub_5a9a41(eax_6)
        sub_5a9831(eax_6, nullptr, FILE_BEGIN)
        
        if (eax_7 != 0)
            arg3[4] = 2
            arg3[5] = eax_7
            int128_t* eax_13 = sub_4cce80(eax_7)
            int32_t ecx_2 = arg3[5]
            arg3[6] = eax_13
            
            if (sub_5a9cf0(eax_13, ecx_2, 1, eax_6) != 1)
                sub_5a8c61(eax_6)
                int32_t var_8_3 = 0xffffffff
                sub_4c43d0(&arg_4)
                int32_t* eax_15
                eax_15.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_15
            
            void* ebx_1
            ebx_1.b = sub_536360(arg3)
            sub_5a8c61(eax_6)
            int32_t var_8_4 = 0xffffffff
            sub_4c43d0(&arg_4)
            int32_t* eax_17
            eax_17.b = ebx_1.b
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_17
        
        sub_5a8c61(eax_6)
    
    int32_t var_8_2 = 0xffffffff
    char* eax_8 = arg_4
    
    if (eax_8 != 0 && *eax_8 != 0)
        eax_8 = sub_4c4060(&arg_4)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    eax_8.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_8
}

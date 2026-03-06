// 函数名称: sub_4cd670
// 虚拟地址: 0x4cd670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_4cd670(int32_t arg1, int32_t arg2, int128_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f858
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_44 = 0
    int32_t var_2c = 0
    int32_t var_28
    __builtin_memset(&var_28, 0, 0x18)
    int32_t* var_18
    void arg_8
    char* arg_c
    
    if (sub_500130(&arg_8, arg2, &var_18, &arg_8) != 0)
        int32_t* esi_3 = var_18
        sub_5a9831(esi_3, nullptr, FILE_END)
        void* eax_9
        int32_t edx
        eax_9, edx = sub_5a9a41(esi_3)
        char eax_10
        int32_t ecx_4
        eax_10, ecx_4 = sub_4cd480(nullptr, edx, &var_2c, arg3)
        
        if (eax_10 != 0)
            int32_t var_44_3 = 0
            
            if (sub_4ceca0(arg4, eax_9, arg3, arg3, ecx_4) != 0)
                sub_4cd2d0(&var_2c)
                int32_t var_8_3 = 0xffffffff
                void* eax_13 = arg_c
                
                if (eax_13 != 0 && *eax_13 != 0)
                    eax_13 = sub_4c4060(&arg_c)
                    int32_t temp1_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        int32_t esi_7 = *(eax_13 + 0xc) + 0x10
                        sub_4f4430(eax_13, sub_4f4380(esi_7), esi_7)
                
                eax_13.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_13
    
    int32_t var_8_2 = 0xffffffff
    char* eax_5 = arg_c
    
    if (eax_5 != 0 && *eax_5 != 0)
        eax_5 = sub_4c4060(&arg_c)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_5 + 0xc) + 0x10
            sub_4f4430(eax_5, sub_4f4380(esi_2), esi_2)
    
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5
}

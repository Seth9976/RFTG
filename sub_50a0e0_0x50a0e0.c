// 函数名称: sub_50a0e0
// 虚拟地址: 0x50a0e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_50a0e0(char* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e788
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_2c = arg1
    int32_t var_8_1 = 0
    char* arg_4
    var_2c = arg_4
    char* ecx_1 = arg_4
    int32_t* var_14 = &var_2c
    
    if (ecx_1 != 0 && *ecx_1 != 0)
        void* eax_4 = sub_4c4060(&var_2c)
        *(eax_4 + 4) += 1
    
    int32_t* eax_5 = sub_508fc0(ecx_1)
    
    if (eax_5 == 0)
        int32_t var_8_2 = 0xffffffff
        void* eax_6 = arg_4
        
        if (eax_6 != 0 && *eax_6 != 0)
            eax_6 = sub_4c4060(&arg_4)
            int32_t temp1_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp1_1 == 1)
                char* esi_2 = *(eax_6 + 0xc) + 0x10
                int32_t* eax_8 = sub_4f4380(esi_2)
                var_2c = esi_2
                sub_4f4430(eax_6, eax_8, var_2c)
        
        eax_6.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_6
    
    int32_t ebx
    ebx.b = *eax_5 != 0
    int32_t var_8_3 = 0xffffffff
    void* eax_10 = arg_4
    
    if (eax_10 != 0 && *eax_10 != 0)
        eax_10 = sub_4c4060(&arg_4)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            char* esi_4 = *(eax_10 + 0xc) + 0x10
            int32_t* eax_12 = sub_4f4380(esi_4)
            var_2c = esi_4
            sub_4f4430(eax_10, eax_12, var_2c)
    
    eax_10.b = ebx.b
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10
}

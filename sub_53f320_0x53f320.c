// 函数名称: sub_53f320
// 虚拟地址: 0x53f320
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_53f320(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18
    int32_t* var_30 = &var_18
    
    if (sub_5a957c(*arg5, &data_85f660) != 0)
        *arg4 = var_18
    
    int32_t var_8_1 = 0
    char* var_14
    sub_4c4510(sub_4c4ab0(&var_14))
    int32_t var_8_2 = 0xffffffff
    char* eax_6 = var_14
    
    if (eax_6 != 0 && *eax_6 != 0)
        void* eax_8 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_8 + 0xc) + 0x10
            sub_4f4430(eax_8, sub_4f4380(esi_2), esi_2)
    
    int32_t result = *arg3
    
    if (result != 0)
        *arg5 = result
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    *arg5 = &data_83f3d3
    fsbase->NtTib.ExceptionList = ExceptionList
    return &data_83f3d3
}

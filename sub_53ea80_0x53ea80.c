// 函数名称: sub_53ea80
// 虚拟地址: 0x53ea80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_53ea80(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d1e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c
    int32_t* var_34 = &var_1c
    int32_t var_20
    int32_t* var_38 = &var_20
    
    if (sub_5a957c(*arg4, " %f %f") != 0)
        int32_t edx_1 = var_1c
        *arg2 = var_20
        arg2[1] = edx_1
    
    int32_t var_8_1 = 0
    char* var_18
    sub_4c4510(sub_53e960(arg2, &var_18))
    int32_t var_8_2 = 0xffffffff
    char* eax_7 = var_18
    
    if (eax_7 != 0 && *eax_7 != 0)
        void* eax_9 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(eax_9 + 0xc) + 0x10
            sub_4f4430(eax_9, sub_4f4380(esi_3), esi_3)
    
    int32_t result = *arg3
    
    if (result != 0)
        *arg4 = result
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    *arg4 = &data_83f3d3
    fsbase->NtTib.ExceptionList = ExceptionList
    return &data_83f3d3
}

// 函数名称: sub_53e990
// 虚拟地址: 0x53e990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_53e990(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d218
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_40 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_1c
    int32_t* var_44 = &var_1c
    int32_t var_20
    int32_t* var_48 = &var_20
    int32_t var_24
    int32_t* var_4c = &var_24
    int32_t var_28
    int32_t* var_50 = &var_28
    
    if (sub_5a957c(*arg2, " %f %f %f %f") != 0)
        int32_t eax_4 = var_24
        int32_t ecx_1 = var_20
        *arg3 = var_28
        int32_t edx_1 = var_1c
        arg3[1] = eax_4
        arg3[2] = ecx_1
        arg3[3] = edx_1
    
    int32_t var_8_1 = 0
    char* result_1
    sub_4c4510(sub_53e8e0(arg3, &result_1))
    int32_t var_8_2 = 0xffffffff
    void* result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_4c4060(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_3 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_3), esi_3)
    
    int32_t ebx_1 = *arg4
    
    if (ebx_1 != 0)
        *arg2 = ebx_1
    else
        result = &data_83f3d3
        *arg2 = &data_83f3d3
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

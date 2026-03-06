// 函数名称: sub_53eb60
// 虚拟地址: 0x53eb60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_53eb60(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d1b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_60 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_18
    int32_t* var_64 = &var_18
    int32_t var_1c
    int32_t* var_68 = &var_1c
    int32_t var_20
    int32_t* var_6c = &var_20
    int32_t eax_4 = sub_5a957c(*arg2, " %d %d %d")
    int32_t eax_5
    
    if (eax_4 == 3)
        int32_t edx = var_1c
        eax_5 = var_18
        *arg3 = var_20
        arg3[1] = edx
        arg3[2] = eax_5
    else if (eax_4 == 1)
        eax_5 = var_20
        *arg3 = eax_5
        arg3[1] = eax_5
        arg3[2] = eax_5
    float result_1 = fconvert.s(float.t(*arg3))
    float var_2c = fconvert.s(float.t(arg3[2]))
    long double x87_r7_4 = fconvert.t(fconvert.s(float.t(arg3[1])))
    float var_4c = fconvert.s(fconvert.t(result_1))
    float var_48 = fconvert.s(x87_r7_4)
    float var_44 = fconvert.s(fconvert.t(var_2c))
    int32_t var_8_1 = 0
    sub_4c4510(sub_53e920(&var_4c, &result_1))
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

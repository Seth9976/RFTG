// 函数名称: sub_430510
// 虚拟地址: 0x430510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_430510(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69223c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_110 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = 6
    
    if (arg6 == 1)
        ecx = 7
    
    int32_t var_74 = 2
    int32_t var_78 = ecx
    int32_t var_5c = ecx
    
    if (arg3 s> ecx * 2)
        var_5c = arg3 - ecx
    
    int32_t ecx_1
    
    if (arg2 s>= ecx)
        arg2 -= ecx
        ecx_1 = 1
    else
        ecx_1 = 0
    
    int32_t var_64 = ecx_1
    int32_t var_68 = arg2
    int32_t* var_11c = &var_5c
    void var_c0
    int32_t eax_4
    int80_t st0
    st0, eax_4 = sub_4f66d0(&var_c0, data_307c584, data_c02178, &var_68, fconvert.s(float.t(1)), 
        &var_78, &var_5c)
    bool cond:2 = (data_316572c & 1) != 0
    void var_58
    int32_t ecx_3 = __builtin_memcpy(&var_58, eax_4, 0x40)
    
    if (not(cond:2))
        data_316572c.d |= 1
        int32_t var_8_1 = 0
        data_3165728 = sub_4f5220(data_307c758, "tbl_Card")
        int32_t var_8_2 = 0xffffffff
    
    int32_t var_11c_2 = ecx_3
    void var_100
    int32_t eax_7
    int80_t result
    result, eax_7 = sub_4f66d0(&var_100, data_307c758, data_3165728, &data_84074c, 
        fconvert.s(float.t(1)), nullptr, nullptr)
    bool cond:1 = (data_316572c & 2) != 0
    __builtin_memcpy(&var_58, eax_7, 0x40)
    
    if (not(cond:1))
        data_316572c.d |= 2
        int32_t var_8_3 = 1
        data_3165724 = sub_4f5220(data_307c104, "Good")
        int32_t var_8_4 = 0xffffffff
    
    int32_t* eax_10 = sub_4f5350(data_3165724, &var_58, data_307c104, &var_58)
    float ecx_7 = *eax_10
    float edx_3 = eax_10[1]
    var_68 = eax_10[2]
    long double x87_r5 = fconvert.t(var_68)
    long double x87_r3 = fconvert.t(ecx_7)
    float edx_4 = eax_10[3]
    long double x87_r2_1 = fconvert.t(0.5)
    __builtin_memcpy(arg4, &data_be4c5c, 0x20)
    float var_60 = fconvert.s((x87_r5 + x87_r3) * x87_r2_1)
    var_5c = fconvert.s(x87_r2_1 * (fconvert.t(edx_3) + fconvert.t(edx_4)))
    long double x87_r3_3 = fconvert.t(var_5c)
    arg4[5] = fconvert.s(fconvert.t(var_60))
    arg4[6] = fconvert.s(x87_r3_3)
    var_68 = fconvert.s(float.t(0))
    arg4[7] = var_68
    var_5c = fconvert.s(x87_r5 - x87_r3)
    *arg4 = fconvert.s(fconvert.t(var_5c) / fconvert.t(data_307cc8c))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

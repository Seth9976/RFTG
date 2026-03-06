// 函数名称: sub_468260
// 虚拟地址: 0x468260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_468260(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6909cc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_120 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = data_307c1fc
    float var_80
    
    if (arg3 s< 0xc)
        void* eax_5 = sub_4f4890(data_307c1dc)
        var_80 = fconvert.s(fconvert.t(*(eax_5 + 0x10)) - fconvert.t(*(eax_5 + 8)))
        float var_7c_1 = fconvert.s(fconvert.t(*(eax_5 + 0x14)) - fconvert.t(*(eax_5 + 0xc)))
    else
        void* eax_3 = sub_4f4890(data_307c1d8)
        var_80 = fconvert.s(fconvert.t(*(eax_3 + 0x10)) - fconvert.t(*(eax_3 + 8)))
        float var_7c = fconvert.s(fconvert.t(*(eax_3 + 0x14)) - fconvert.t(*(eax_3 + 0xc)))
    
    float var_68_2
    float var_64_2
    float var_60_2
    float var_5c_2
    int80_t result
    void var_58
    
    if (arg3 s< 0xc)
        if ((data_3165294 & 2) == 0)
            data_3165294.d |= 2
            int32_t var_8_3 = 1
            data_316528c = sub_4f5220(ebx, "goalSmall")
            int32_t var_8_4 = 0xffffffff
        
        void var_110
        int32_t eax_13
        int80_t result_2
        result_2, eax_13 = sub_40a930(&var_110)
        result = result_2
        int32_t eax_14 = data_316528c
        __builtin_memcpy(&var_58, eax_13, 0x40)
        int32_t* eax_15 = sub_4f5350(eax_14, &var_58, ebx, &var_58)
        var_68_2 = *eax_15
        var_64_2 = eax_15[1]
        var_60_2 = eax_15[2]
        var_5c_2 = eax_15[3]
    else
        if ((data_3165294 & 1) == 0)
            data_3165294.d |= 1
            int32_t var_8_1 = 0
            data_3165290 = sub_4f5220(ebx, "goalBig")
            int32_t var_8_2 = 0xffffffff
        
        void var_d0
        int32_t eax_8
        int32_t edx_5
        int80_t result_1
        result_1, eax_8, edx_5 = sub_40a930(&var_d0)
        result = result_1
        int32_t eax_9 = data_3165290
        __builtin_memcpy(&var_58, eax_8, 0x40)
        int32_t* eax_10 = sub_4f5350(eax_9, edx_5, ebx, &var_58)
        var_68_2 = *eax_10
        var_64_2 = eax_10[1]
        var_60_2 = eax_10[2]
        var_5c_2 = eax_10[3]
    long double x87_r6 = fconvert.t(var_60_2)
    long double x87_r4 = fconvert.t(var_68_2)
    __builtin_memcpy(arg4, &data_be4c5c, 0x20)
    long double x87_r3_1 = fconvert.t(0.5)
    arg4[5] = fconvert.s(fconvert.t(fconvert.s((x87_r6 + x87_r4) * x87_r3_1)))
    arg4[6] =
        fconvert.s(fconvert.t(fconvert.s(x87_r3_1 * (fconvert.t(var_64_2) + fconvert.t(var_5c_2)))))
    arg4[7] = fconvert.s(float.t(0))
    *arg4 = fconvert.s(fconvert.t(fconvert.s(x87_r6 - x87_r4)) / fconvert.t(var_80))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

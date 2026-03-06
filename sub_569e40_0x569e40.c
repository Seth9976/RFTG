// 函数名称: sub_569e40
// 虚拟地址: 0x569e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_569e40(int32_t arg1, int32_t arg2, float* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691e18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_60 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_44 = 0
    int32_t var_40 = 0
    int32_t var_3c = 0
    int32_t var_8_1 = 0
    int32_t* i = *(data_3079210 + 0xc)
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[1]
        sub_518190(&var_44, i_1)
    
    sub_569a80(&var_44)
    int32_t* var_38
    __builtin_memset(&var_38, 0, 0x20)
    int32_t var_2c
    var_2c.b = 1
    var_38 = &var_44
    uint8_t (* var_34)(int32_t arg1) = sub_569da0
    char eax_5
    int32_t ecx_2
    int32_t edx_1
    eax_5, ecx_2, edx_1 = sub_4d5260(0, &var_44, &var_38, arg3)
    char eax_7
    
    if (eax_5 == 0)
        void* eax_6 = data_3079210
        int32_t var_64_2 = ecx_2
        eax_7 = sub_5699b0(eax_6, edx_1, arg3, fconvert.s(fconvert.t(*(eax_6 + 0x68))))
    
    int32_t* result
    
    if (eax_5 != 0 || eax_7 != 0)
        int32_t var_28
        *arg4 = var_28
        int32_t var_24
        arg4[1] = var_24
        int32_t var_20
        arg4[2] = var_20
        int32_t var_8_3 = 0xffffffff
        sub_5041e0(&var_44)
        result.b = 1
    else
        int32_t var_8_2 = 0xffffffff
        sub_5041e0(&var_44)
        result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

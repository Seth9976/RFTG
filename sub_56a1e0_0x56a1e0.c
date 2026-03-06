// 函数名称: sub_56a1e0
// 虚拟地址: 0x56a1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_56a1e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691de8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_98 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_5c
    char result
    int80_t st0
    st0, result = sub_4c6230(&var_5c)
    
    if (result == 0)
        result = 0
    else
        long double x87_r7_3 = fconvert.t(fconvert.s(float.t(1) - fconvert.t(0.0)))
        float var_60 = fconvert.s(x87_r7_3)
        float eax_4 = var_60
        var_5c = fconvert.s(x87_r7_3)
        float ecx_1 = var_5c
        float var_58_2 = fconvert.s(x87_r7_3)
        float var_24 = eax_4
        float var_20_1 = ecx_1
        float var_1c_1 = var_58_2
        float* eax_5 = sub_4131a0(&var_24, &var_60)
        float ecx_2 = *eax_5
        int32_t edx_2 = eax_5[1]
        int32_t eax_6 = eax_5[2]
        int32_t var_2c_1 = 0
        int32_t var_28_1 = 0
        int32_t esi_2 = 0
        float var_30 = 0f
        var_24 = ecx_2
        int32_t var_20_2 = edx_2
        int32_t var_1c_2 = eax_6
        int32_t var_6c = 0
        int32_t var_68_1 = 0
        int32_t var_64_1 = 0
        int32_t var_8_1 = 0
        int32_t edx_3 = sub_569a80(&var_6c)
        int32_t* var_50
        __builtin_memset(&var_50, 0, 0x20)
        int32_t var_44
        var_44.b = 1
        var_50 = &var_6c
        int32_t* eax_9
        int32_t ecx_4
        int32_t edx_4
        eax_9, ecx_4, edx_4 = sub_4d5260(&var_6c, edx_3, &var_50, &var_30)
        char eax_10
        
        if (eax_9.b == 0)
            int32_t var_9c_2 = ecx_4
            eax_10 = sub_5699b0(eax_9, edx_4, &var_30, fconvert.s(float.t(0)))
        
        if (eax_9.b != 0 || eax_10 != 0)
            void* eax_11 = data_27e7fcc
            
            if (eax_11 != 0)
                esi_2 = *(eax_11 + 0x48)
            
            int32_t var_40
            arg1[5] = var_40
            int32_t var_3c
            arg1[6] = var_3c
            *arg1 = esi_2
            int32_t var_38
            arg1[7] = var_38
            arg1[1] = 0
            arg1[2] = 0
            arg1[3] = 0
            arg1[4] = 0x3f800000
            int32_t var_8_3 = 0xffffffff
            sub_5041e0(&var_6c)
            result = 1
        else
            int32_t var_8_2 = 0xffffffff
            sub_5041e0(&var_6c)
            result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_41e8e0
// 虚拟地址: 0x41e8e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_41e8e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69127e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_120 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result
    
    if (data_27e7a40 != 0)
        void var_d0
        int32_t eax_3
        int32_t edx_1
        int80_t st0_1
        st0_1, eax_3, edx_1 = sub_40a930(&var_d0)
        int32_t eax_4 = data_c02150
        void var_58
        __builtin_memcpy(&var_58, eax_3, 0x40)
        int32_t* eax_5 = sub_4f5350(eax_4, edx_1, data_307c530, &var_58)
        int32_t edx_2 = *eax_5
        int32_t ecx_2 = eax_5[1]
        float edx_3 = eax_5[2]
        int32_t eax_6 = eax_5[3]
        float var_60
        int32_t var_5c
        sub_41e810(*(data_27e7a40 + 0x74), &var_60, &var_5c)
        float eax_8 = var_60
        
        if (eax_8 != 0)
            int32_t ecx_4 = var_5c
            
            if (ecx_4 != 1)
                if (ecx_4 == 0)
                    var_5c = 1
                else
                    var_5c = 2
            else if (eax_8 s> 2)
                var_5c = 2
            else
                var_5c = 1
        else if (var_5c != 0)
            var_5c = 1
        else
            var_5c = 0
        
        if ((data_3165488 & 1) == 0)
            data_3165488.d |= 1
            int32_t var_8_1 = 0
            data_3165484 = sub_4f5220(data_307c530, "tbl_goalsBig")
            int32_t var_8_2 = 0xffffffff
        
        void var_110
        int32_t eax_10
        int32_t edx_5
        int80_t st0_2
        st0_2, eax_10, edx_5 = sub_40a930(&var_110)
        int32_t eax_11 = data_3165484
        __builtin_memcpy(&var_58, eax_10, 0x40)
        int32_t* eax_12 = sub_4f5350(eax_11, edx_5, data_307c530, &var_58)
        int32_t eax_13 = eax_12[3]
        int32_t var_7c_1 = eax_12[1]
        float ecx_7 = 2 - var_5c
        var_60 = fconvert.s(fconvert.t(eax_12[2]) - fconvert.t(*eax_12))
        long double x87_r5_3 = fconvert.t(var_60)
        int32_t var_74_1 = eax_13
        result = arg1
        var_60 = ecx_7
        long double x87_r5_4 = x87_r5_3 * float.t(var_60)
        *result = edx_2
        result[1] = ecx_2
        result[2] = fconvert.s(x87_r5_4 + fconvert.t(edx_3))
        result[3] = eax_6
    else
        result = arg1
        *result = 0
        result[1] = 0
        result[2] = 0
        result[3] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

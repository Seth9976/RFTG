// 函数名称: sub_467e10
// 虚拟地址: 0x467e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_467e10(float* arg1, int32_t arg2, int32_t arg3, int32_t arg4, float* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69205c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_110 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31656dc & 1) == 0)
        data_31656dc.d |= 1
        int32_t var_8_1 = 0
        data_31656d8 = sub_4f5220(data_307c530, "tbl_goalsBig")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31656dc & 2) == 0)
        data_31656dc.d |= 2
        int32_t var_8_3 = 1
        data_31656d4 = sub_4f5220(data_307c530, "tbl_goalsSmall")
        int32_t var_8_4 = 0xffffffff
    
    void var_100
    int32_t eax_6
    int32_t edx_2
    int80_t result
    result, eax_6, edx_2 = sub_40a930(&var_100)
    int32_t eax_7 = data_31656d8
    void var_58
    __builtin_memcpy(&var_58, eax_6, 0x40)
    int32_t* eax_8 = sub_4f5350(eax_7, edx_2, data_307c530, &var_58)
    float edx_3 = eax_8[1]
    float ecx_3 = eax_8[2]
    float edi = *eax_8
    float edx_4 = eax_8[3]
    int32_t* eax_10 = sub_4f5350(data_31656d4, edx_4, data_307c530, &var_58)
    int32_t var_12c
    float* var_128
    float var_120
    float var_11c
    float var_118_3
    float var_114_3
    int32_t edx_8
    void* edi_1
    
    if (arg3 == 0)
    label_467f33:
        var_120 = *eax_10
        var_11c = eax_10[1]
        var_118_3 = eax_10[2]
        edx_8 = arg2
        void var_90
        edi_1 = &var_90
    label_467f4d:
        var_114_3 = eax_10[3]
        int32_t var_124 = 0
        var_128 = arg5
        var_12c = arg4
    else
        if (arg4 != 1)
            if (arg4 == 0)
                goto label_467f33
        else if (arg3 s<= 2)
            goto label_467f33
        
        edx_8 = arg2
        
        if (edx_8 s< arg4)
            var_120 = *eax_10
            var_11c = eax_10[1]
            var_118_3 = eax_10[2]
            void var_80
            edi_1 = &var_80
            goto label_467f4d
        
        var_120 = edi
        var_11c = edx_3
        var_118_3 = ecx_3
        var_114_3 = edx_4
        int32_t var_124_1 = 0
        var_128 = arg5
        var_12c = 0
        edx_8 -= arg4
        void var_c0
        edi_1 = &var_c0
    
    float* eax_12 =
        sub_466a10(edi_1, edx_8, var_12c, var_128, 0, var_120, var_11c, var_118_3, var_114_3)
    int32_t edx_9 = eax_12[1]
    int32_t esi_2 = eax_12[2]
    int32_t eax_13 = eax_12[3]
    *arg1 = *eax_12
    arg1[1] = edx_9
    arg1[2] = esi_2
    arg1[3] = eax_13
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

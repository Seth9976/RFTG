// 函数名称: sub_56f9c0
// 虚拟地址: 0x56f9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_56f9c0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    
    if (data_26a7764 != 0)
        int32_t* eax_1
        int32_t edx_1
        eax_1, edx_1 = sub_50c140(data_26a6760)
        void var_8c
        int32_t var_3c
        __builtin_memcpy(&var_3c, sub_56f590(&var_8c, edx_1, data_26a6764 * 0xb8 + *eax_1, &var_8c), 
            0x24)
        data_273abd4 = var_3c
        int32_t var_38
        data_273abd8 = var_38
        int32_t var_34
        data_273abdc = var_34
        float var_54[0x5]
        float var_30[0x6]
        float* eax_5 = sub_465b90(&var_54, &var_30)
        int32_t ecx_5 = eax_5[1]
        float var_18 = *eax_5
        int32_t var_14_1 = ecx_5
        int32_t var_10_1 = eax_5[2]
        int32_t var_c_1 = eax_5[3]
        float var_64
        float* eax_7 = sub_465ec0(&var_18, &var_64)
        data_273abc4 = *eax_7
        data_273abc8 = eax_7[1]
        data_273abcc = eax_7[2]
        int32_t edx_6 = eax_7[3]
        data_273abc0 = fconvert.s(float.t(1))
        data_273abd0 = edx_6
        int32_t edx_7 = data_26a7764
        int32_t ecx_8 = 1
        
        if (edx_7 s> 1)
            do
                int32_t esi_4 = *eax_1
                int32_t eax_9 = (&data_26a6764)[ecx_8] * 0xb8
                data_273abd4 = fconvert.s(fconvert.t(*(eax_9 + esi_4 + 8)) + fconvert.t(data_273abd4))
                data_273abd8 = fconvert.s(fconvert.t(*(eax_9 + esi_4 + 0xc)) + fconvert.t(data_273abd8))
                ecx_8 += 1
                data_273abdc =
                    fconvert.s(fconvert.t(*(eax_9 + esi_4 + 0x10)) + fconvert.t(data_273abdc))
            while (ecx_8 s< edx_7)
        
        result = data_273abf4
        
        if (result == 2 || result == 3 || result == 4)
            result = 0
            data_273abc4 = 0
            data_273abc8 = 0
            data_273abcc = 0
            data_273abd0 = 0x3f800000
        
        data_26a7764
        long double x87_r6_1 = float.t(1)
        long double x87_r6_2 = fconvert.t(fconvert.s(x87_r6_1 / x87_r6_1))
        data_273abd4 = fconvert.s(fconvert.t(data_273abd4) * x87_r6_2)
        data_273abd8 = fconvert.s(fconvert.t(data_273abd8) * x87_r6_2)
        data_273abdc = fconvert.s(x87_r6_2 * fconvert.t(data_273abdc))
    
    sub_5a6aba(result_1 ^ &__saved_ebp)
    return result
}

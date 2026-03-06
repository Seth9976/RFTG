// 函数名称: sub_466ca0
// 虚拟地址: 0x466ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_466ca0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, float* arg6, float arg7, float arg8, float arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_3 = sub_4f4890(data_307c1dc)
    float edx = *(eax_3 + 0xc)
    int32_t* esi_1 = data_307c1d8
    float var_a0 = *(eax_3 + 8)
    float var_98 = *(eax_3 + 0x10)
    float edx_1 = *(eax_3 + 0x14)
    float var_ac = fconvert.s(fconvert.t(var_98) - fconvert.t(var_a0))
    float var_a8 = fconvert.s(fconvert.t(edx_1) - fconvert.t(edx))
    void* eax_4 = sub_4f4890(esi_1)
    float ecx_2 = *(eax_4 + 8)
    float edx_2 = *(eax_4 + 0xc)
    float var_b8 = *(eax_4 + 0x10)
    float edx_3 = *(eax_4 + 0x14)
    var_98 = fconvert.s(fconvert.t(var_b8) - fconvert.t(ecx_2))
    float var_94_1 = fconvert.s(fconvert.t(edx_3) - fconvert.t(edx_2))
    long double x87_r7_8 = fconvert.t(arg9)
    long double x87_r5 = fconvert.t(var_98)
    long double x87_r5_2 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_8 - fconvert.t(arg7))) / x87_r5))
    *arg6 = fconvert.s(x87_r5_2)
    long double x87_r3 = fconvert.t(fconvert.s(x87_r5_2))
    var_b8 = fconvert.s(fconvert.t(var_ac) * x87_r3)
    var_ac = var_b8
    float var_b4_1 = fconvert.s(x87_r3 * fconvert.t(var_a8))
    float var_a8_1 = var_b4_1
    long double x87_r5_3 = fconvert.t(fconvert.s(x87_r5_2))
    float var_c8 = fconvert.s(x87_r5 * x87_r5_3)
    var_98 = var_c8
    float var_c4_2 = fconvert.s(x87_r5_3 * fconvert.t(var_94_1))
    float var_94_2 = var_c4_2
    long double x87_r5_5 = fconvert.t(var_c8)
    long double x87_r6_9 = float.t(arg5) * x87_r5_5
    long double x87_r3_5 = fconvert.t(fconvert.s(float.t(arg4) * fconvert.t(var_b8) + x87_r6_9))
    float arg_10
    long double x87_r1 = fconvert.t(arg_10)
    long double x87_r1_2 = fconvert.t(fconvert.s(fconvert.t(arg8) - x87_r1))
    x87_r1_2 - x87_r3_5
    float eax_6
    eax_6.w = (x87_r1_2 < x87_r3_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_2, x87_r3_5) ? 1 : 0) << 0xa
        | (x87_r1_2 == x87_r3_5 ? 1 : 0) << 0xe | 0x1000
    bool p = unimplemented  {test ah, 0x5}
    float* entry_result
    
    if (not(p))
        int32_t esi_3 = arg4 + arg5
        long double x87_r7_11 = float.t(0)
        float var_dc = fconvert.s(x87_r7_11)
        int32_t var_90[0x21]
        sub_4685f0(eax_6, &arg_10, var_c4_2, &var_90, 1, esi_3, fconvert.s(x87_r7_11))
        int32_t esi_6 = (esi_3 - arg3 - 1) * 2
        var_8c
        int32_t ecx_6 = *(&var_8c + (esi_6 << 3))
        float var_d0 = var_90[esi_6 * 2]
        int32_t var_c4_3 = (&__saved_ebp)[esi_6 * 2 - 0x20]
        int32_t var_cc = ecx_6
        int32_t var_c8_1 = (&__saved_ebp)[esi_6 * 2 - 0x21]
        float* eax_9 = &var_98
        
        if (arg3 s>= arg5)
            eax_9 = &var_ac
        
        float ecx_7 = *eax_9
        int32_t edx_8 = eax_9[1]
        var_98 = fconvert.s(float.t(0))
        float eax_10 = var_98
        var_b8 = ecx_7
        int32_t var_b4_2 = edx_8
        float var_a8_2 = fconvert.s(float.t(1))
        var_ac = eax_10
        float* eax_11 = sub_505540(eax_10, &var_d0, &var_b8, &var_ac, &var_ac, &var_a0)
        int32_t edx_10 = eax_11[1]
        *entry_result = *eax_11
        int32_t ecx_11 = eax_11[2]
        entry_result[1] = edx_10
        int32_t edx_11 = eax_11[3]
        entry_result[2] = ecx_11
        entry_result[3] = edx_11
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return entry_result
    
    if (arg3 s>= arg5)
        var_98 = fconvert.s(x87_r5_5 + fconvert.t(fconvert.s(x87_r3_5 + float.t(arg3 - arg5) * x87_r1)))
        long double x87_r5_16 = fconvert.t(var_b4_1)
        float var_94_6 = fconvert.s(x87_r7_8 - x87_r5_16)
        long double x87_r5_18 = fconvert.t(var_98)
        var_ac = fconvert.s(x87_r1 + x87_r5_18)
        long double x87_r5_20 = fconvert.t(var_94_6)
        float var_a8_4 = fconvert.s(x87_r5_16 + x87_r5_20)
        var_a0 = fconvert.s(x87_r5_18)
        *entry_result = var_a0
        long double x87_r7_25 = fconvert.t(var_ac)
        entry_result[1] = fconvert.s(x87_r5_20)
        var_98 = fconvert.s(x87_r7_25)
        entry_result[2] = var_98
        entry_result[3] = fconvert.s(fconvert.t(var_a8_4))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return entry_result
    
    var_98 = fconvert.s(x87_r6_9 + fconvert.t(fconvert.s(float.t(arg3) * x87_r1)))
    long double x87_r5_9 = fconvert.t(var_c4_2)
    float var_94_4 = fconvert.s(x87_r3_5 - x87_r5_9)
    long double x87_r5_11 = fconvert.t(var_98)
    var_ac = fconvert.s(x87_r1 + x87_r5_11)
    long double x87_r5_13 = fconvert.t(var_94_4)
    float var_a8_3 = fconvert.s(x87_r5_9 + x87_r5_13)
    var_a0 = fconvert.s(x87_r5_11)
    *entry_result = var_a0
    long double x87_r7_19 = fconvert.t(var_ac)
    entry_result[1] = fconvert.s(x87_r5_13)
    var_98 = fconvert.s(x87_r7_19)
    entry_result[2] = var_98
    entry_result[3] = fconvert.s(fconvert.t(var_a8_3))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}

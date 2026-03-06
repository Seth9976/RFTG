// 函数名称: sub_431860
// 虚拟地址: 0x431860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_431860(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_4c = fconvert.s(fconvert.t(arg7))
    long double x87_r6 = float.t(1)
    float var_20 = arg4
    long double x87_r6_1
    long double x87_r7_2
    
    if (arg3 s> 1)
        long double x87_r5_2 = fconvert.t(fconvert.s(float.t(arg3)))
        long double x87_r4_3 = x87_r5_2 * fconvert.t(arg8) * fconvert.t(0.5)
        long double x87_r3_1 = fconvert.t(arg9)
        x87_r3_1 - x87_r4_3
        float eax_2
        eax_2.w = (x87_r3_1 < x87_r4_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_1, x87_r4_3) ? 1 : 0) << 0xa
            | (x87_r3_1 == x87_r4_3 ? 1 : 0) << 0xe | 0x1800
        float var_24_2
        long double x87_r3_8
        long double x87_r5_3
        
        if ((eax_2:1.b & 1) != 0)
            var_24_2 = fconvert.s(fneg(x87_r4_3))
            long double x87_r2_6 = float.t(0)
            x87_r5_3 = fconvert.t(fconvert.s(float.t(arg2) - x87_r2_6))
            x87_r3_8 =
                fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r3_1 - fconvert.t(1.0))) - x87_r2_6))
        else
            var_24_2 = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r3_1))))
            long double x87_r2_1 = float.t(0)
            x87_r5_3 = fconvert.t(fconvert.s(float.t(arg2) - x87_r2_1))
            x87_r3_8 =
                fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5_2 - fconvert.t(1.0))) - x87_r2_1))
        
        long double x87_r4_6 = float.t(0)
        long double x87_r3_9 = fconvert.t(fconvert.s(x87_r5_3 / x87_r3_8))
        x87_r3_9 - x87_r4_6
        eax_2.w = (x87_r3_9 < x87_r4_6 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_9, x87_r4_6) ? 1 : 0) << 0xa
            | (x87_r3_9 == x87_r4_6 ? 1 : 0) << 0xe | 0x1800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            x87_r4_6 - x87_r6
            eax_2.w = (x87_r4_6 < x87_r6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_6, x87_r6) ? 1 : 0) << 0xa
                | (x87_r4_6 == x87_r6 ? 1 : 0) << 0xe | 0x2000
            x87_r7_2 = x87_r4_6
            
            if ((eax_2:1.b & 1) != 0)
                x87_r6 = x87_r6 * (fconvert.t(var_24_2) - x87_r3_9) + x87_r3_9
            else
                x87_r7_2 = x87_r6
                x87_r6 = fconvert.t(var_24_2)
        else
            x87_r7_2 = x87_r4_6
        
        x87_r6_1 = fconvert.t(fconvert.s(x87_r6))
    else
        x87_r7_2 = x87_r6
        x87_r6_1 = float.t(0)
    
    float var_24_5 = fconvert.s(x87_r7_2 * fconvert.t(fconvert.s(x87_r6_1)))
    int32_t ecx_1
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, ecx_1 = sub_686860(mxcsr, x87control, fconvert.t(var_24_5))
    int32_t var_a4 = ecx_1
    float var_74 = fconvert.s(fconvert.t(fconvert.s(st0)))
    long double x87_r6_3 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(var_24_5)))))
    float var_38 = fconvert.s(fconvert.t(var_20) * x87_r6_3)
    float var_60 = var_38
    float var_34 = fconvert.s(fconvert.t(arg5) * x87_r6_3)
    float var_5c = var_34
    float var_54 = var_74
    float var_30 = fconvert.s(x87_r6_3 * fconvert.t(arg6))
    float var_58 = var_30
    void var_90
    int32_t* eax_5 = sub_4661e0(&var_90, &var_20)
    long double x87_r7_14 = fconvert.t(var_4c)
    float edx_1 = eax_5[1]
    float eax_6 = eax_5[2]
    var_20 = *eax_5
    float var_48 = fconvert.s(x87_r7_14 * fconvert.t(var_20))
    var_20 = var_48
    float var_44 = fconvert.s(fconvert.t(edx_1) * x87_r7_14)
    float var_1c_2 = var_44
    float var_40 = fconvert.s(x87_r7_14 * fconvert.t(eax_6))
    float var_18_2 = var_40
    sub_405970(&var_48, &var_20, &var_60)
    float var_70 = fconvert.s(float.t(1))
    float edx_4 = var_48
    float var_68 = var_34
    float var_64 = var_30
    var_60 = var_74
    float var_5c_1 = edx_4
    float var_58_1 = var_44
    float var_6c = var_38
    float var_54_1 = var_40
    __builtin_memcpy(arg1, &var_70, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

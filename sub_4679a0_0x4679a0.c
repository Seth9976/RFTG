// 函数名称: sub_4679a0
// 虚拟地址: 0x4679a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4679a0(int32_t arg1, int32_t arg2, int32_t arg3, long double arg4 @ st1, float* arg5, int32_t arg6, float* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_3c = fconvert.s(fconvert.t(-150f))
    float var_50
    int32_t* eax_3 = sub_41e8e0(&var_50)
    float ecx = eax_3[1]
    float var_20 = *eax_3
    float eax_4 = eax_3[3]
    int32_t var_18 = eax_3[2]
    int32_t* eax_6 = *sub_466320(data_307c03c)
    long double x87_r7_1 = float.t(*eax_6)
    
    if (*eax_6 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_2 = float.t(eax_6[1])
    
    if (eax_6[1] s< 0)
        x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)
    
    float var_2c = fconvert.s(x87_r7_2)
    long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(eax_6[2])))
    float var_30_1 = fconvert.s(x87_r7_4 * fconvert.t(fconvert.s(x87_r7_1)))
    float var_48 = var_30_1
    float var_2c_1 = fconvert.s(x87_r7_4 * fconvert.t(var_2c))
    float var_44 = var_2c_1
    int32_t eax_9 = sub_4676b0(&var_20, &var_48, &var_3c)
    float* eax_10
    
    if (arg3 s> eax_9)
        int32_t var_74_3 = eax_9
        long double x87_r0
        int16_t x87control_1 = sub_467730(eax_9.w, arg7, x87_r0, arg6, arg6, arg3)
        float var_28_1 = fconvert.s(arg4)
        long double x87_r1_2 = fconvert.t(fconvert.s(fconvert.t(eax_4) - fconvert.t(ecx)))
        var_48 = fconvert.s(x87_r1_2 * fconvert.t(var_30_1))
        long double x87_r0_5 = float.t(1)
        long double x87_r1_6 = fconvert.t(fconvert.s(x87_r0_5 / x87_r0_5))
        float var_58_1 = fconvert.s(x87_r1_6 * fconvert.t(var_48))
        float var_54_1 = fconvert.s(x87_r1_6 * fconvert.t(fconvert.s(x87_r1_2 * fconvert.t(var_2c_1))))
        int32_t var_78_1
        var_78_1.q = fconvert.d(fconvert.t(var_28_1))
        int32_t eax_11
        int32_t mxcsr
        long double st0_1
        st0_1, eax_11 = sub_686950(mxcsr, x87control_1, var_78_1)
        float var_24_3 = fconvert.s(st0_1)
        long double x87_r1_11 = float.t(0)
        long double x87_r0_8 = fconvert.t(fconvert.s(fconvert.t(var_24_3)))
        x87_r0_8 - x87_r1_11
        eax_11.w = (x87_r0_8 < x87_r1_11 ? 1 : 0) << 8
            | (is_unordered.t(x87_r0_8, x87_r1_11) ? 1 : 0) << 0xa
            | (x87_r0_8 == x87_r1_11 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r1_12
        
        if (p_1)
            x87_r1_12 = x87_r1_11 + fconvert.t(0.5)
        else
            x87_r1_12 = x87_r1_11 - fconvert.t(0.5)
        
        int32_t eax_12
        int32_t ecx_5
        eax_12, ecx_5 = sub_685f40(x87_r1_12)
        int32_t var_7c_2 = ecx_5
        void var_38
        int32_t* eax_13
        int80_t st0_2
        st0_2, eax_13 = sub_466770(&var_38, eax_12, eax_9, eax_9, fconvert.s(fconvert.t(var_3c)), 
            var_58_1, var_54_1)
        int32_t edx_7 = eax_13[1]
        var_50 = *eax_13
        int32_t var_4c_1 = edx_7
        int32_t edx_8 = eax_13[3]
        long double x87_r0_10 = float.t(0)
        long double x87_r7_9 = fconvert.t(fconvert.s(fconvert.t(var_24_3)))
        var_48 = eax_13[2]
        x87_r7_9 - x87_r0_10
        int32_t var_44_2 = edx_8
        eax_13.w = (x87_r7_9 < x87_r0_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_9, x87_r0_10) ? 1 : 0) << 0xa
            | (x87_r7_9 == x87_r0_10 ? 1 : 0) << 0xe | 0x3800
        bool p_2 = unimplemented  {test ah, 0x5}
        long double x87_r0_11
        
        if (p_2)
            x87_r0_11 = x87_r0_10 + fconvert.t(0.5)
        else
            x87_r0_11 = x87_r0_10 - fconvert.t(0.5)
        
        float var_7c_4 = var_58_1
        void var_60
        int32_t* eax_16
        int80_t st0_3
        st0_3, eax_16 = sub_466770(&var_60, sub_685f40(x87_r0_11) + 1, eax_9, eax_9, 
            fconvert.s(fconvert.t(var_3c)), var_58_1, var_54_1)
        int32_t edx_9 = eax_16[1]
        var_20 = *eax_16
        int32_t var_1c_1 = edx_9
        int32_t var_18_1 = eax_16[2]
        int32_t var_14_1 = eax_16[3]
        eax_10 = &var_60
        sub_4662b0(eax_10, &var_50, &var_20, 
            fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_28_1)
                - fconvert.t(fconvert.s(fconvert.t(var_24_3)))))))
    else
        *arg7 = fconvert.s(fconvert.t(-1f))
        int80_t st0
        st0, eax_10 = sub_4675a0(&var_20, arg3, arg6)
    
    *arg5 = *eax_10
    arg5[1] = eax_10[1]
    int32_t eax_17 = eax_10[3]
    arg5[2] = eax_10[2]
    arg5[3] = eax_17
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg5
}

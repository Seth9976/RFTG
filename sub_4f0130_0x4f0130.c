// 函数名称: sub_4f0130
// 虚拟地址: 0x4f0130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4f0130(int32_t arg1, float* arg2, float* arg3, float* arg4, float arg5, float* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = fconvert.t(arg5)
    long double x87_r5 = float.t(0)
    x87_r5 - x87_r7
    float var_e8 = 0f
    float var_ec = 0f
    int32_t var_3c = 0
    int32_t eax_3
    eax_3.w = (x87_r5 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r7 ? 1 : 0) << 0xe | 0x3800
    float var_e4 = 0f
    float var_e0 = 1f
    int32_t var_38 = 0
    float var_34 = 0f
    bool p = unimplemented  {test ah, 0x44}
    float var_3c_1
    float var_38_1
    
    if (p)
        int32_t var_11c_1 = 0
        float var_2c_1 = fconvert.s(float.t(0) * fconvert.t(0.5))
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_406680(fconvert.s(fconvert.t(var_2c_1)))
        float var_14_1 = fconvert.s(st0_1)
        int32_t eax_5
        int32_t mxcsr
        long double st0_2
        st0_2, eax_5 = sub_686860(mxcsr, x87control_1, fconvert.t(var_2c_1))
        long double x87_r7_8 = fconvert.t(var_14_1)
        var_e4 = fconvert.s(x87_r7_8)
        var_e0 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0_2)))))
        long double x87_r5_1 = fconvert.t(*arg2)
        long double x87_r4_1 = float.t(0)
        x87_r4_1 - x87_r5_1
        eax_5.w = (x87_r4_1 < x87_r5_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_1, x87_r5_1) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r5_1 ? 1 : 0) << 0xe | 0x2000
        long double x87_r6_11 = x87_r4_1
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            x87_r6_11 = x87_r5_1
        label_4f0298:
            long double x87_r5_8 =
                fconvert.t(fconvert.s(x87_r6_11 * fconvert.t(*arg2) - fconvert.t(arg2[1]) * x87_r7_8))
            long double x87_r3_2 =
                fconvert.t(fconvert.s(fconvert.t(arg2[1]) * x87_r6_11 + x87_r7_8 * fconvert.t(*arg2)))
            var_3c_1 = fconvert.s(fconvert.t(*arg6)
                * fconvert.t(fconvert.s(x87_r5_8 * x87_r6_11 - x87_r3_2 * x87_r7_8)))
            var_38_1 = fconvert.s(fconvert.t(arg6[1])
                * fconvert.t(fconvert.s(x87_r7_8 * x87_r5_8 + x87_r6_11 * x87_r3_2)))
        else
            long double x87_r4_2 = fconvert.t(arg2[1])
            x87_r4_2 - x87_r5_1
            eax_5.w = (x87_r4_2 < x87_r5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_2, x87_r5_1) ? 1 : 0) << 0xa
                | (x87_r4_2 == x87_r5_1 ? 1 : 0) << 0xe | 0x3000
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                goto label_4f0298
            
            var_3c_1 = 0f
            var_38_1 = 0f
            var_34 = 0f
        
        x87_r7 = float.t(0)
    else
        var_3c_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg2))) * fconvert.t(*arg6))
        var_38_1 = fconvert.s(fconvert.t(arg6[1]) * fconvert.t(fconvert.s(fconvert.t(arg2[1]))))
        var_34 = fconvert.s(fconvert.t(arg6[2]) * x87_r7)
    
    float var_28_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg3))) * fconvert.t(*arg6))
    float var_24_2 = fconvert.s(fconvert.t(arg6[1]) * fconvert.t(fconvert.s(fconvert.t(arg3[1]))))
    float var_20_2 = fconvert.s(fconvert.t(arg6[2]) * x87_r7)
    long double x87_r6_21 = fconvert.t(var_e8)
    long double x87_r4_12 = fconvert.t(2.0)
    long double x87_r5_11 = x87_r6_21 * x87_r4_12
    double var_d8 = fconvert.d(x87_r5_11)
    long double x87_r4_14 = x87_r5_11 * x87_r6_21
    float var_90_2
    var_90_2.q = fconvert.d(x87_r4_14)
    long double x87_r3_4 = fconvert.t(var_e4)
    long double x87_r2_5 = x87_r3_4 * x87_r4_12 * x87_r3_4
    double var_f8 = fconvert.d(x87_r2_5)
    long double x87_r1 = float.t(1)
    float var_80 = fconvert.s((x87_r1 - x87_r4_14 - x87_r2_5) * fconvert.t(var_28_2))
    long double x87_r2_9 = fconvert.t(var_ec) * x87_r4_12
    double var_18_1 = fconvert.d(x87_r6_21 * x87_r2_9)
    long double x87_r1_5 = fconvert.t(var_e0) * x87_r4_12
    double var_30 = fconvert.d(x87_r1_5)
    long double x87_r1_6 = x87_r1_5 * x87_r3_4
    double var_108 = fconvert.d(x87_r1_6)
    float var_7c = fconvert.s((fconvert.t(var_18_1) - x87_r1_6) * fconvert.t(var_24_2))
    long double x87_r2_11 = x87_r6_21 * fconvert.t(var_30)
    long double x87_r1_10 = x87_r3_4 * x87_r2_9
    double var_110 = fconvert.d(x87_r1_10)
    float var_78 = fconvert.s((x87_r1_10 + x87_r2_11) * fconvert.t(var_20_2))
    float var_74 = fconvert.s(fconvert.t(var_3c_1))
    float var_70 = fconvert.s((fconvert.t(var_108) + fconvert.t(var_18_1)) * fconvert.t(var_28_2))
    long double x87_r6_24 = x87_r1 - x87_r2_9 * fconvert.t(var_ec)
    float var_6c = fconvert.s((x87_r6_24 - fconvert.t(var_f8)) * fconvert.t(var_24_2))
    long double x87_r2_13 = x87_r3_4 * fconvert.t(var_d8)
    long double x87_r1_23 = fconvert.t(var_ec) * fconvert.t(var_30)
    float var_68 = fconvert.s((x87_r2_13 - x87_r1_23) * fconvert.t(var_20_2))
    float var_64 = fconvert.s(fconvert.t(var_38_1))
    float var_60 = fconvert.s((fconvert.t(var_110) - x87_r2_11) * fconvert.t(var_28_2))
    float var_5c = fconvert.s((x87_r2_13 + fconvert.t(fconvert.d(x87_r1_23))) * fconvert.t(var_24_2))
    float var_58 = fconvert.s((x87_r6_24 - fconvert.t(var_90_2.q)) * fconvert.t(var_20_2))
    float var_54 = fconvert.s(fconvert.t(var_34))
    long double x87_r4_21 = float.t(0)
    float var_50 = fconvert.s(x87_r4_21)
    float var_4c = fconvert.s(x87_r4_21)
    float var_48 = fconvert.s(x87_r4_21)
    float var_44 = fconvert.s(float.t(1))
    long double x87_r4_24 = fconvert.t(*arg3) * fconvert.t(var_3c_1)
    float var_d0
    __builtin_memcpy(&var_d0, &var_80, 0x40)
    float var_c4 = fconvert.s(x87_r4_24)
    float var_b4
    float var_b4_1 = fconvert.s(fconvert.t(var_b4) * fconvert.t(arg3[1]))
    float* entry_ebx
    long double x87_r4_28 = fconvert.t(entry_ebx[2]) * x87_r4_12
    long double x87_r3_12 = fconvert.t(entry_ebx[2]) * x87_r4_28
    long double x87_r2_17 = fconvert.t(entry_ebx[3]) * x87_r4_12 * fconvert.t(entry_ebx[3])
    double var_d8_2 = fconvert.d(x87_r2_17)
    var_80 = fconvert.s((x87_r1 - x87_r3_12 - x87_r2_17) * fconvert.t(*entry_ebx))
    long double x87_r2_21 = fconvert.t(entry_ebx[1]) * x87_r4_12
    long double x87_r1_32 = fconvert.t(entry_ebx[2]) * x87_r2_21
    var_110 = fconvert.d(x87_r1_32)
    long double x87_r5_13 = x87_r4_12 * fconvert.t(entry_ebx[4])
    long double x87_r0_7 = fconvert.t(entry_ebx[3]) * x87_r5_13
    var_90_2.q = fconvert.d(x87_r0_7)
    long double x87_r1_36 = fconvert.t(entry_ebx[2]) * x87_r5_13
    long double x87_r0_9 = fconvert.t(entry_ebx[3]) * x87_r2_21
    float var_78_1 = fconvert.s((x87_r1_36 + x87_r0_9) * fconvert.t(*entry_ebx))
    float var_74_1 = fconvert.s(fconvert.t(entry_ebx[5]))
    float var_70_1 = fconvert.s((fconvert.t(var_90_2.q) + fconvert.t(var_110)) * fconvert.t(*entry_ebx))
    long double x87_r6_26 = x87_r1 - x87_r2_21 * fconvert.t(entry_ebx[1])
    float var_6c_1 = fconvert.s((x87_r6_26 - fconvert.t(var_d8_2)) * fconvert.t(*entry_ebx))
    long double x87_r4_29 = x87_r4_28 * fconvert.t(entry_ebx[3])
    long double x87_r5_14 = x87_r5_13 * fconvert.t(entry_ebx[1])
    float var_68_1 = fconvert.s((x87_r4_29 - x87_r5_14) * fconvert.t(*entry_ebx))
    float var_64_1 = fconvert.s(fconvert.t(entry_ebx[6]))
    float var_60_1 = fconvert.s((fconvert.t(fconvert.d(x87_r0_9)) - fconvert.t(fconvert.d(x87_r1_36)))
        * fconvert.t(*entry_ebx))
    float var_5c_1 = fconvert.s((x87_r4_29 + x87_r5_14) * fconvert.t(*entry_ebx))
    float var_58_1 = fconvert.s((x87_r6_26 - x87_r3_12) * fconvert.t(*entry_ebx))
    float var_54_1 = fconvert.s(fconvert.t(entry_ebx[7]))
    long double x87_r6_30 = fconvert.t(fconvert.s((x87_r1_32 - x87_r0_7) * fconvert.t(*entry_ebx)))
    float var_c0
    long double x87_r4_32 = fconvert.t(var_c0)
    long double x87_r3_15 = fconvert.t(var_80)
    long double x87_r1_43 = fconvert.t(var_d0)
    float var_b0
    float var_a0
    *arg4 = fconvert.s(x87_r3_15 * x87_r1_43 + x87_r6_30 * x87_r4_32
        + fconvert.t(var_78_1) * fconvert.t(var_b0) + fconvert.t(var_74_1) * fconvert.t(var_a0))
    float var_cc
    float var_bc
    float var_ac
    float var_9c
    arg4[1] = fconvert.s(x87_r6_30 * fconvert.t(var_bc) + x87_r3_15 * fconvert.t(var_cc)
        + fconvert.t(var_78_1) * fconvert.t(var_ac) + fconvert.t(var_74_1) * fconvert.t(var_9c))
    float var_c8
    float var_b8
    float var_a8
    float var_98
    arg4[2] = fconvert.s(x87_r6_30 * fconvert.t(var_b8) + x87_r3_15 * fconvert.t(var_c8)
        + fconvert.t(var_78_1) * fconvert.t(var_a8) + fconvert.t(var_74_1) * fconvert.t(var_98))
    long double x87_r2_50 = fconvert.t(var_b4_1)
    long double x87_r1_62 = fconvert.t(var_c4)
    float var_a4
    float var_94
    arg4[3] = fconvert.s(x87_r3_15 * x87_r1_62 + x87_r6_30 * x87_r2_50
        + fconvert.t(var_78_1) * fconvert.t(var_a4) + fconvert.t(var_74_1) * fconvert.t(var_94))
    arg4[4] = fconvert.s(fconvert.t(var_6c_1) * x87_r4_32 + fconvert.t(var_70_1) * x87_r1_43
        + fconvert.t(var_68_1) * fconvert.t(var_b0) + fconvert.t(var_64_1) * fconvert.t(var_a0))
    arg4[5] = fconvert.s(fconvert.t(var_6c_1) * fconvert.t(var_bc)
        + fconvert.t(var_70_1) * fconvert.t(var_cc) + fconvert.t(var_68_1) * fconvert.t(var_ac)
        + fconvert.t(var_64_1) * fconvert.t(var_9c))
    arg4[6] = fconvert.s(fconvert.t(var_6c_1) * fconvert.t(var_b8)
        + fconvert.t(var_70_1) * fconvert.t(var_c8) + fconvert.t(var_68_1) * fconvert.t(var_a8)
        + fconvert.t(var_64_1) * fconvert.t(var_98))
    arg4[7] = fconvert.s(fconvert.t(var_6c_1) * x87_r2_50 + fconvert.t(var_70_1) * x87_r1_62
        + fconvert.t(var_68_1) * fconvert.t(var_a4) + fconvert.t(var_64_1) * fconvert.t(var_94))
    arg4[8] = fconvert.s(fconvert.t(var_5c_1) * x87_r4_32 + fconvert.t(var_60_1) * x87_r1_43
        + fconvert.t(var_58_1) * fconvert.t(var_b0) + fconvert.t(var_54_1) * fconvert.t(var_a0))
    arg4[9] = fconvert.s(fconvert.t(var_5c_1) * fconvert.t(var_bc)
        + fconvert.t(var_60_1) * fconvert.t(var_cc) + fconvert.t(var_58_1) * fconvert.t(var_ac)
        + fconvert.t(var_54_1) * fconvert.t(var_9c))
    arg4[0xa] = fconvert.s(fconvert.t(var_5c_1) * fconvert.t(var_b8)
        + fconvert.t(var_60_1) * fconvert.t(var_c8) + fconvert.t(var_58_1) * fconvert.t(var_a8)
        + fconvert.t(var_54_1) * fconvert.t(var_98))
    arg4[0xb] = fconvert.s(fconvert.t(var_5c_1) * x87_r2_50 + fconvert.t(var_60_1) * x87_r1_62
        + fconvert.t(var_58_1) * fconvert.t(var_a4) + fconvert.t(var_54_1) * fconvert.t(var_94))
    arg4[0xc] = fconvert.s(x87_r4_32 * x87_r7 + x87_r1_43 * x87_r7 + fconvert.t(var_b0) * x87_r7
        + fconvert.t(var_a0))
    arg4[0xd] = fconvert.s(fconvert.t(var_bc) * x87_r7 + fconvert.t(var_cc) * x87_r7
        + fconvert.t(var_ac) * x87_r7 + fconvert.t(var_9c))
    arg4[0xe] = fconvert.s(fconvert.t(var_b8) * x87_r7 + fconvert.t(var_c8) * x87_r7
        + fconvert.t(var_a8) * x87_r7 + fconvert.t(var_98))
    arg4[0xf] = fconvert.s(x87_r7 * fconvert.t(var_a4) + x87_r2_50 * x87_r7 + x87_r1_62 * x87_r7
        + fconvert.t(var_94))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}

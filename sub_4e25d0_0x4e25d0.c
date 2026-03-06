// 函数名称: sub_4e25d0
// 虚拟地址: 0x4e25d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_4e25d0(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, int32_t* arg13, float arg14, float arg15, float arg16, float arg17, float arg18, float arg19)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_80 = arg4
    float var_60 = fconvert.s(fconvert.t(arg1) - fconvert.t(var_80))
    float var_5c = fconvert.s(fconvert.t(arg2) - fconvert.t(arg5))
    long double x87_r7_6 = fconvert.t(arg11)
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg3) - fconvert.t(arg6)))
    float var_50 = arg10
    long double x87_r4_1 = fconvert.t(arg12)
    long double x87_r2 = fconvert.t(var_5c)
    var_80 = arg10
    float var_7c_1 = arg11
    float var_78_1 = arg12
    long double x87_r3_3 = fconvert.t(var_60)
    long double x87_r2_3 = fconvert.t(var_50)
    var_50 = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r7_6 * x87_r5 - x87_r4_1 * x87_r2))))
    var_60 = var_50
    float var_4c_1 = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r4_1 * x87_r3_3 - x87_r5 * x87_r2_3))))
    float var_5c_1 = var_4c_1
    float var_48_1 = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r2 * x87_r2_3 - x87_r7_6 * x87_r3_3))))
    float var_58_1 = var_48_1
    long double x87_r6_4 = fconvert.t(var_50)
    long double x87_r5_5 = fconvert.t(var_4c_1)
    long double x87_r4_6 = fconvert.t(var_48_1)
    long double x87_r4_8 = fconvert.t(fconvert.s(fconvert.t(arg7) * x87_r6_4
        + x87_r5_5 * fconvert.t(arg8) + x87_r4_6 * fconvert.t(arg9)))
    long double temp1 = fconvert.t(0f)
    x87_r4_8 - temp1
    float eax_6
    eax_6.w = (x87_r4_8 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_8, temp1) ? 1 : 0) << 0xa
        | (x87_r4_8 == temp1 ? 1 : 0) << 0xe | 0x2800
    
    if ((eax_6:1.b & 0x41) == 0)
        var_50 = fconvert.s(fneg(x87_r6_4))
        var_60 = var_50
        float var_5c_2 = fconvert.s(fneg(x87_r5_5))
        float var_58_2 = fconvert.s(fneg(x87_r4_6))
    
    float* eax_8 = sub_4132a0(&var_80, &var_50)
    float edx_6 = eax_8[1]
    float eax_9 = eax_8[2]
    var_80 = *eax_8
    float* eax_10 = sub_4132a0(&var_60, &var_50)
    float edx_7 = eax_10[1]
    float eax_11 = eax_10[2]
    var_60 = *eax_10
    float eax_12
    float edx_8
    eax_12, edx_8 = sub_4cc680(5)
    long double x87_r7_23 = fconvert.t(arg16)
    float var_3c = fconvert.s(x87_r7_23)
    long double x87_r6_7 = fconvert.t(arg19)
    float var_38 = fconvert.s(x87_r6_7)
    long double x87_r5_8 = fconvert.t(arg18)
    float var_30 = fconvert.s(x87_r5_8)
    float var_2c = fconvert.s(x87_r6_7)
    float var_24 = fconvert.s(x87_r7_23)
    long double x87_r6_10 = fconvert.t(arg17)
    float var_20 = fconvert.s(x87_r6_10)
    float var_14 = fconvert.s(x87_r6_10)
    float var_18 = fconvert.s(x87_r5_8)
    float eax_14
    float edx_9
    eax_14, edx_9 = sub_418560(arg13)
    long double x87_r6_11 = fconvert.t(eax_12)
    long double x87_r5_11 = fconvert.t(edx_8)
    long double x87_r5_14 = fconvert.t(eax_14) * fconvert.t(arg14)
    long double x87_r4_13 = fconvert.t(edx_9) * fconvert.t(arg15)
    float var_30_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_30) - x87_r6_11)) * x87_r5_14)
    float var_2c_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_2c) - x87_r5_11)) * x87_r4_13)
    float var_24_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_24) - x87_r6_11)) * x87_r5_14)
    float var_20_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_20) - x87_r5_11)) * x87_r4_13)
    float var_18_2 = fconvert.s(x87_r5_14 * fconvert.t(fconvert.s(fconvert.t(var_18) - x87_r6_11)))
    float var_14_2 = fconvert.s(x87_r4_13 * fconvert.t(fconvert.s(fconvert.t(var_14) - x87_r5_11)))
    long double x87_r7_31 = fconvert.t(var_60)
    long double x87_r5_16 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_38) - x87_r5_11)) * x87_r4_13))
    long double x87_r5_18 = fconvert.t(edx_7)
    long double x87_r4_19 = fconvert.t(eax_11)
    long double x87_r4_21 = fconvert.t(var_80)
    long double x87_r2_5 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_3c) - x87_r6_11)) * x87_r5_14))
    long double x87_r2_7 = fconvert.t(edx_6)
    long double x87_r1_6 = fconvert.t(0.0099999997764825821)
    var_50 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_21 * x87_r2_5))
        + fconvert.t(fconvert.s(x87_r7_31 * x87_r5_16)))) * x87_r1_6)
    float var_4c_3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r2_7 * x87_r2_5))
        + fconvert.t(fconvert.s(x87_r5_18 * x87_r5_16)))) * x87_r1_6)
    float var_48_3 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_5 * fconvert.t(eax_9)))
        + fconvert.t(fconvert.s(x87_r5_16 * x87_r4_19)))) * x87_r1_6)
    var_60 = fconvert.s(fconvert.t(arg1) + fconvert.t(var_50))
    int32_t* entry_ebx
    *entry_ebx = var_60
    entry_ebx[1] = fconvert.s(fconvert.t(var_4c_3) + fconvert.t(arg2))
    entry_ebx[2] = fconvert.s(fconvert.t(var_48_3) + fconvert.t(arg3))
    var_50 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_21 * fconvert.t(var_30_2)))
        + fconvert.t(fconvert.s(x87_r7_31 * fconvert.t(var_2c_2))))) * x87_r1_6)
    float var_4c_4 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_7 * fconvert.t(var_30_2)))
        + fconvert.t(fconvert.s(x87_r5_18 * fconvert.t(var_2c_2))))) * x87_r1_6)
    float var_48_4 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(eax_9) * fconvert.t(var_30_2)))
        + fconvert.t(fconvert.s(x87_r4_19 * fconvert.t(var_2c_2))))) * x87_r1_6)
    var_60 = fconvert.s(fconvert.t(arg1) + fconvert.t(var_50))
    entry_ebx[3] = var_60
    entry_ebx[4] = fconvert.s(fconvert.t(var_4c_4) + fconvert.t(arg2))
    entry_ebx[5] = fconvert.s(fconvert.t(var_48_4) + fconvert.t(arg3))
    var_50 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_21 * fconvert.t(var_24_2)))
        + fconvert.t(fconvert.s(x87_r7_31 * fconvert.t(var_20_2))))) * x87_r1_6)
    float var_4c_5 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r2_7 * fconvert.t(var_24_2)))
        + fconvert.t(fconvert.s(x87_r5_18 * fconvert.t(var_20_2))))) * x87_r1_6)
    float var_48_5 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(eax_9) * fconvert.t(var_24_2)))
        + fconvert.t(fconvert.s(x87_r4_19 * fconvert.t(var_20_2))))) * x87_r1_6)
    var_60 = fconvert.s(fconvert.t(arg1) + fconvert.t(var_50))
    entry_ebx[6] = var_60
    entry_ebx[7] = fconvert.s(fconvert.t(var_4c_5) + fconvert.t(arg2))
    long double x87_r1_78 = fconvert.t(var_14_2)
    entry_ebx[8] = fconvert.s(fconvert.t(var_48_5) + fconvert.t(arg3))
    long double x87_r4_23 = fconvert.t(var_18_2)
    var_50 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_21 * x87_r4_23))
        + fconvert.t(fconvert.s(x87_r7_31 * x87_r1_78)))) * x87_r1_6)
    float var_4c_6 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r2_7 * x87_r4_23))
        + fconvert.t(fconvert.s(x87_r5_18 * x87_r1_78)))) * x87_r1_6)
    float var_48_6 = fconvert.s(x87_r1_6 * fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r4_23 * fconvert.t(eax_9)))
        + fconvert.t(fconvert.s(x87_r1_78 * x87_r4_19)))))
    var_60 = fconvert.s(fconvert.t(arg1) + fconvert.t(var_50))
    entry_ebx[9] = var_60
    entry_ebx[0xa] = fconvert.s(fconvert.t(var_4c_6) + fconvert.t(arg2))
    float result = fconvert.s(fconvert.t(var_48_6) + fconvert.t(arg3))
    entry_ebx[0xb] = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

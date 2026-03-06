// 函数名称: sub_4f07c0
// 虚拟地址: 0x4f07c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4f07c0(int32_t arg1, float* arg2, float* arg3, int32_t* arg4, float* arg5, float arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_54 = fconvert.s(fconvert.t(arg6))
    float* entry_ebx
    float var_4c = fconvert.s(fconvert.t(*entry_ebx) - fconvert.t(*arg5))
    float var_48 = fconvert.s(fconvert.t(entry_ebx[1]) - fconvert.t(arg5[1]))
    float var_44 = fconvert.s(fconvert.t(entry_ebx[2]) - fconvert.t(arg5[2]))
    long double x87_r7_7 = fconvert.t(var_44)
    long double x87_r5 = fconvert.t(var_48)
    float var_2c = fconvert.s(x87_r7_7 * fconvert.t(entry_ebx[4]) - x87_r5 * fconvert.t(entry_ebx[5]))
    long double x87_r5_2 = fconvert.t(entry_ebx[5])
    float var_1c = var_2c
    long double x87_r4_2 = fconvert.t(var_4c)
    float var_18 = fconvert.s(x87_r5_2 * x87_r4_2 - x87_r7_7 * fconvert.t(entry_ebx[3]))
    float var_14 = fconvert.s(x87_r5 * fconvert.t(entry_ebx[3]) - x87_r4_2 * fconvert.t(entry_ebx[4]))
    float* eax_5 = sub_4131a0(&var_1c, &var_2c)
    float var_34 = eax_5[2]
    float var_3c = *eax_5
    long double x87_r6_5 = fconvert.t(var_44)
    float var_38 = eax_5[1]
    long double x87_r5_8 = fconvert.t(var_48)
    var_2c = fconvert.s(fconvert.t(arg5[4]) * x87_r6_5 - x87_r5_8 * fconvert.t(arg5[5]))
    long double x87_r4_6 = fconvert.t(var_4c)
    float var_28_1 = fconvert.s(fconvert.t(arg5[5]) * x87_r4_6 - x87_r6_5 * fconvert.t(arg5[3]))
    long double x87_r7_18 = x87_r5_8 * fconvert.t(arg5[3]) - x87_r4_6 * fconvert.t(arg5[4])
    var_1c = var_2c
    float var_18_1 = var_28_1
    float var_14_1 = fconvert.s(x87_r7_18)
    float* eax_9 = sub_4131a0(&var_1c, &var_2c)
    long double x87_r7_19 = fconvert.t(0.5)
    float var_4c_1 = *eax_9
    float var_48_1 = eax_9[1]
    float var_44_1 = eax_9[2]
    float var_74[0x5]
    
    if (arg3 != 0)
        var_2c = fconvert.s(fconvert.t(*arg5) - fconvert.t(*arg3))
        long double x87_r6_10 = fconvert.t(fconvert.s(fconvert.t(arg5[2]) - fconvert.t(arg3[2])))
        long double x87_r5_16 = fconvert.t(fconvert.s(fconvert.t(arg5[1]) - fconvert.t(arg3[1])))
        var_1c = fconvert.s(fconvert.t(arg5[4]) * x87_r6_10 - x87_r5_16 * fconvert.t(arg5[5]))
        long double x87_r5_18 = fconvert.t(arg5[5])
        long double x87_r4_10 = fconvert.t(var_2c)
        var_2c = var_1c
        float var_28_3 = fconvert.s(x87_r5_18 * x87_r4_10 - x87_r6_10 * fconvert.t(arg5[3]))
        float var_24_3 = fconvert.s(x87_r5_16 * fconvert.t(arg5[3]) - x87_r4_10 * fconvert.t(arg5[4]))
        float* eax_13 = sub_4131a0(&var_2c, &var_74)
        float edx_5 = eax_13[1]
        var_1c = *eax_13
        long double x87_r6_15 = fconvert.t(var_3c)
        float eax_14 = eax_13[2]
        long double x87_r5_24 = fconvert.t(0.5)
        var_2c = fconvert.s(x87_r6_15 + (fconvert.t(var_1c) - x87_r6_15) * x87_r5_24)
        var_1c = var_2c
        long double x87_r5_26 = fconvert.t(var_38)
        float var_18_4 = fconvert.s(x87_r5_26 + (fconvert.t(edx_5) - x87_r5_26) * x87_r5_24)
        long double x87_r5_29 = fconvert.t(var_34)
        float var_14_4 = fconvert.s(x87_r5_24 * (fconvert.t(eax_14) - x87_r5_29) + x87_r5_29)
        float* eax_16 = sub_4131a0(&var_1c, &var_74)
        x87_r7_19 = fconvert.t(0.5)
        var_3c = *eax_16
        var_38 = eax_16[1]
        var_34 = eax_16[2]
    
    if (arg2 != 0)
        var_1c = fconvert.s(fconvert.t(*arg2) - fconvert.t(*entry_ebx))
        long double x87_r7_44 = fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(entry_ebx[2])))
        long double x87_r5_31 = fconvert.t(fconvert.s(fconvert.t(arg2[1]) - fconvert.t(entry_ebx[1])))
        var_2c = fconvert.s(x87_r7_44 * fconvert.t(entry_ebx[4]) - x87_r5_31 * fconvert.t(entry_ebx[5]))
        long double x87_r5_33 = fconvert.t(entry_ebx[5])
        long double x87_r4_16 = fconvert.t(var_1c)
        var_1c = var_2c
        float var_18_6 = fconvert.s(x87_r5_33 * x87_r4_16 - x87_r7_44 * fconvert.t(entry_ebx[3]))
        float var_14_6 =
            fconvert.s(x87_r5_31 * fconvert.t(entry_ebx[3]) - x87_r4_16 * fconvert.t(entry_ebx[4]))
        float* eax_20 = sub_4131a0(&var_1c, &var_74)
        float edx_9 = eax_20[1]
        var_1c = *eax_20
        long double x87_r6_29 = fconvert.t(var_4c_1)
        float eax_21 = eax_20[2]
        long double x87_r5_39 = fconvert.t(0.5)
        var_2c = fconvert.s(x87_r6_29 + (fconvert.t(var_1c) - x87_r6_29) * x87_r5_39)
        var_1c = var_2c
        long double x87_r5_41 = fconvert.t(var_48_1)
        float var_18_8 = fconvert.s(x87_r5_41 + (fconvert.t(edx_9) - x87_r5_41) * x87_r5_39)
        long double x87_r5_44 = fconvert.t(var_44_1)
        float var_14_8 = fconvert.s(x87_r5_39 * (fconvert.t(eax_21) - x87_r5_44) + x87_r5_44)
        float* eax_23 = sub_4131a0(&var_1c, &var_74)
        x87_r7_19 = fconvert.t(0.5)
        var_4c_1 = *eax_23
        var_48_1 = eax_23[1]
        var_44_1 = eax_23[2]
    
    long double x87_r5_46 = fconvert.t(var_54)
    var_2c = fconvert.s((fconvert.t(*entry_ebx) - fconvert.t(*arg5)) * x87_r5_46 + fconvert.t(*arg5))
    float var_28_7 =
        fconvert.s((fconvert.t(entry_ebx[1]) - fconvert.t(arg5[1])) * x87_r5_46 + fconvert.t(arg5[1]))
    float var_24_7 =
        fconvert.s(x87_r5_46 * (fconvert.t(entry_ebx[2]) - fconvert.t(arg5[2])) + fconvert.t(arg5[2]))
    long double x87_r6_46 = fconvert.t(fconvert.s(fconvert.t(arg5[6])))
    long double x87_r4_22 = fconvert.t(var_3c)
    var_1c = fconvert.s(x87_r6_46 * x87_r4_22)
    long double x87_r4_24 = fconvert.t(var_38)
    long double x87_r3_11 = fconvert.t(var_34)
    float var_38_1 = fconvert.s(fconvert.t(fconvert.s(x87_r4_24 * x87_r6_46)) * x87_r7_19)
    float var_34_1 = fconvert.s(fconvert.t(fconvert.s(x87_r6_46 * x87_r3_11)) * x87_r7_19)
    long double x87_r3_19 = fconvert.t(var_2c)
    var_1c = fconvert.s(x87_r3_19 - fconvert.t(fconvert.s(fconvert.t(var_1c) * x87_r7_19)))
    long double x87_r2_3 = fconvert.t(var_28_7)
    arg4[3] = var_1c
    arg4[4] = fconvert.s(x87_r2_3 - fconvert.t(var_38_1))
    arg4[5] = fconvert.s(fconvert.t(var_24_7) - fconvert.t(var_34_1))
    long double x87_r1_5 = fconvert.t(fconvert.s(fconvert.t(arg5[6])))
    var_1c = fconvert.s(x87_r4_22 * x87_r1_5)
    float var_38_2 = fconvert.s(fconvert.t(fconvert.s(x87_r4_24 * x87_r1_5)) * x87_r7_19)
    float var_34_2 = fconvert.s(fconvert.t(fconvert.s(x87_r1_5 * x87_r3_11)) * x87_r7_19)
    var_1c = fconvert.s(x87_r3_19 + fconvert.t(fconvert.s(fconvert.t(var_1c) * x87_r7_19)))
    arg4[9] = var_1c
    arg4[0xa] = fconvert.s(x87_r2_3 + fconvert.t(var_38_2))
    arg4[0xb] = fconvert.s(fconvert.t(var_34_2) + fconvert.t(var_24_7))
    long double x87_r6_56 = fconvert.t(fconvert.s(fconvert.t(entry_ebx[6])))
    long double x87_r4_35 = fconvert.t(var_4c_1)
    var_1c = fconvert.s(x87_r6_56 * x87_r4_35)
    long double x87_r4_37 = fconvert.t(var_48_1)
    float var_18_13 = fconvert.s(x87_r4_37 * x87_r6_56)
    long double x87_r3_24 = fconvert.t(var_44_1)
    float var_14_13 = fconvert.s(x87_r6_56 * x87_r3_24)
    var_2c = fconvert.s(fconvert.t(var_1c) * x87_r7_19)
    float var_28_8 = fconvert.s(fconvert.t(var_18_13) * x87_r7_19)
    float var_24_8 = fconvert.s(fconvert.t(var_14_13) * x87_r7_19)
    var_1c = fconvert.s(fconvert.t(*entry_ebx) - fconvert.t(var_2c))
    float var_18_14 = fconvert.s(fconvert.t(entry_ebx[1]) - fconvert.t(var_28_8))
    long double x87_r3_36 = fconvert.t(entry_ebx[2])
    *arg4 = var_1c
    arg4[1] = var_18_14
    arg4[2] = fconvert.s(x87_r3_36 - fconvert.t(var_24_8))
    long double x87_r3_39 = fconvert.t(fconvert.s(fconvert.t(entry_ebx[6])))
    var_1c = fconvert.s(x87_r4_35 * x87_r3_39)
    float var_18_15 = fconvert.s(x87_r4_37 * x87_r3_39)
    float var_14_15 = fconvert.s(x87_r3_24 * x87_r3_39)
    var_2c = fconvert.s(fconvert.t(var_1c) * x87_r7_19)
    float var_28_9 = fconvert.s(fconvert.t(var_18_15) * x87_r7_19)
    float var_24_9 = fconvert.s(x87_r7_19 * fconvert.t(var_14_15))
    var_1c = fconvert.s(fconvert.t(*entry_ebx) + fconvert.t(var_2c))
    float var_18_16 = fconvert.s(fconvert.t(var_28_9) + fconvert.t(entry_ebx[1]))
    long double x87_r7_61 = fconvert.t(entry_ebx[2])
    arg4[6] = var_1c
    arg4[7] = var_18_16
    arg4[8] = fconvert.s(x87_r7_61 + fconvert.t(var_24_9))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}

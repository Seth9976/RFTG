// 函数名称: sub_4e4590
// 虚拟地址: 0x4e4590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_4e4590(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_84
    int32_t edx
    float* entry_ebx
    sub_405900(&var_84, edx, entry_ebx)
    float ecx_1 = var_84
    float* var_40 = &var_84
    float var_80
    float var_74
    sub_465a20(&var_74, var_80, entry_ebx)
    float ecx_3 = var_74
    float var_70
    sub_466130(&var_74, var_70, entry_ebx)
    float ecx_5 = var_74
    long double x87_r7_1 = fconvert.t(fconvert.s(fconvert.t(arg2[4])))
    long double x87_r5 = fconvert.t(ecx_1)
    float ecx_6 = entry_ebx[4]
    float edx_4 = entry_ebx[5]
    var_74 = fconvert.s(x87_r7_1 * x87_r5)
    long double x87_r5_2 = fconvert.t(var_80)
    float eax_8 = entry_ebx[6]
    int32_t edx_5 = var_40[1]
    float var_7c
    long double x87_r4_3 = fconvert.t(var_7c)
    int32_t eax_10 = var_40[2]
    long double x87_r3_1 = fconvert.t(ecx_6)
    long double x87_r3_3 = fconvert.t(edx_4)
    long double x87_r2_8 = fconvert.t(fconvert.s(fconvert.t(var_74) + x87_r3_1)) * x87_r5
        + fconvert.t(fconvert.s(x87_r3_3 + fconvert.t(fconvert.s(x87_r5_2 * x87_r7_1)))) * x87_r5_2
        + fconvert.t(fconvert.s(fconvert.t(eax_8) + fconvert.t(fconvert.s(x87_r7_1 * x87_r4_3))))
        * x87_r4_3
    float var_10_1 = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r2_8))))
    *arg1 = *var_40
    float var_54 = fconvert.s(fneg(x87_r5))
    arg1[1] = edx_5
    arg1[2] = eax_10
    arg1[3] = var_10_1
    float var_50 = fconvert.s(fneg(x87_r5_2))
    float var_4c = fconvert.s(fneg(x87_r4_3))
    long double x87_r2_17 = fconvert.t(arg2[5])
    arg1[0x14] = var_54
    float var_40_2 = fconvert.s(x87_r2_17)
    arg1[0x15] = var_50
    long double x87_r2_18 = fconvert.t(var_40_2)
    arg1[0x16] = var_4c
    float var_18_2 = fconvert.s(x87_r5_2 * x87_r2_18)
    float var_14_2 = fconvert.s(x87_r2_18 * x87_r4_3)
    var_74 = fconvert.s(fconvert.t(fconvert.s(x87_r2_18 * x87_r5)) + x87_r3_1)
    arg1[0x17] = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(var_74) * fconvert.t(var_54)
        + fconvert.t(fconvert.s(fconvert.t(var_18_2) + x87_r3_3)) * fconvert.t(var_50)
        + fconvert.t(fconvert.s(fconvert.t(var_14_2) + fconvert.t(eax_8))) * fconvert.t(var_4c)))))
    float var_3c_1 = fconvert.s(fconvert.t(*arg2))
    long double x87_r1_12 = fconvert.t(ecx_5)
    float var_18_3 = fconvert.s(fconvert.t(var_70) * fconvert.t(var_3c_1))
    float var_6c
    float var_14_3 = fconvert.s(fconvert.t(var_6c) * fconvert.t(var_3c_1))
    var_84 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_3c_1) * x87_r1_12)) + x87_r5)
    float var_80_1 = fconvert.s(fconvert.t(var_18_3) + x87_r5_2)
    float var_7c_1 = fconvert.s(fconvert.t(var_14_3) + x87_r4_3)
    float var_3c_2 = fconvert.s(fconvert.t(arg2[2]))
    float var_18_4 = fconvert.s(fconvert.t(var_70) * fconvert.t(var_3c_2))
    float var_14_4 = fconvert.s(fconvert.t(var_6c) * fconvert.t(var_3c_2))
    var_74 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_3c_2) * x87_r1_12)) + x87_r5)
    float var_70_3 = fconvert.s(fconvert.t(var_18_4) + x87_r5_2)
    float var_6c_3 = fconvert.s(fconvert.t(var_14_4) + x87_r4_3)
    float var_3c_3 = fconvert.s(fconvert.t(arg2[1]))
    float var_1c_4 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_3c_3) * fconvert.t(ecx_3))) + x87_r5)
    float var_18_5 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_70) * fconvert.t(var_3c_3))) + x87_r5_2)
    float var_14_5 =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_6c) * fconvert.t(var_3c_3))) + x87_r4_3)
    float var_3c_4 = fconvert.s(fconvert.t(arg2[3]))
    float var_64_1 =
        fconvert.s(x87_r5 + fconvert.t(fconvert.s(fconvert.t(var_3c_4) * fconvert.t(ecx_3))))
    float var_60_1 =
        fconvert.s(x87_r5_2 + fconvert.t(fconvert.s(fconvert.t(var_70) * fconvert.t(var_3c_4))))
    float var_5c_1 =
        fconvert.s(x87_r4_3 + fconvert.t(fconvert.s(fconvert.t(var_6c) * fconvert.t(var_3c_4))))
    long double x87_r3_6 = fconvert.t(var_70)
    long double x87_r1_58 = fconvert.t(var_7c_1)
    float var_54_2 = fconvert.s(fconvert.t(var_6c) * fconvert.t(var_80_1) - x87_r3_6 * x87_r1_58)
    long double x87_r2_41 = fconvert.t(ecx_3)
    float var_50_2 = fconvert.s(x87_r1_58 * x87_r2_41 - fconvert.t(var_6c) * fconvert.t(var_84))
    long double x87_r2_45 = x87_r3_6 * fconvert.t(var_84) - fconvert.t(var_80_1) * x87_r2_41
    arg1[4] = var_54_2
    float var_4c_2 = fconvert.s(x87_r2_45)
    arg1[5] = var_50_2
    arg1[6] = var_4c_2
    arg1[7] = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(var_54_2) * x87_r3_1
        + fconvert.t(var_50_2) * x87_r3_3 + fconvert.t(var_4c_2) * fconvert.t(eax_8)))))
    var_84 = fconvert.s(fneg(x87_r2_41))
    float var_80_2 = fconvert.s(fneg(x87_r3_6))
    long double x87_r4_19 = fconvert.t(fconvert.s(fneg(fconvert.t(var_6c))))
    long double x87_r2_52 = fconvert.t(var_70_3)
    float var_54_3 = fconvert.s(x87_r4_19 * x87_r2_52 - fconvert.t(var_80_2) * fconvert.t(var_6c_3))
    arg1[8] = var_54_3
    long double x87_r1_72 = fconvert.t(var_84)
    float var_50_3 = fconvert.s(fconvert.t(var_6c_3) * x87_r1_72 - x87_r4_19 * fconvert.t(var_74))
    arg1[9] = var_50_3
    float var_4c_3 = fconvert.s(fconvert.t(var_80_2) * fconvert.t(var_74) - x87_r1_72 * x87_r2_52)
    arg1[0xa] = var_4c_3
    arg1[0xb] = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(var_54_3) * x87_r3_1
        + fconvert.t(var_50_3) * x87_r3_3 + fconvert.t(var_4c_3) * fconvert.t(eax_8)))))
    float var_54_4 = fconvert.s(fneg(x87_r1_12))
    long double x87_r4_33 = fconvert.t(var_70)
    float var_50_4 = fconvert.s(fneg(x87_r4_33))
    long double x87_r3_20 = fconvert.t(var_6c)
    float var_4c_4 = fconvert.s(fneg(x87_r3_20))
    float var_2c_1 = fconvert.s(fconvert.t(var_4c_4) * fconvert.t(var_60_1)
        - fconvert.t(var_50_4) * fconvert.t(var_5c_1))
    arg1[0xc] = var_2c_1
    float var_28_1 = fconvert.s(fconvert.t(var_5c_1) * fconvert.t(var_54_4)
        - fconvert.t(var_4c_4) * fconvert.t(var_64_1))
    arg1[0xd] = var_28_1
    float var_24_1 = fconvert.s(fconvert.t(var_50_4) * fconvert.t(var_64_1)
        - fconvert.t(var_60_1) * fconvert.t(var_54_4))
    arg1[0xe] = var_24_1
    arg1[0xf] = fconvert.s(fneg(fconvert.t(fconvert.s(fconvert.t(var_2c_1) * x87_r3_1
        + fconvert.t(var_28_1) * x87_r3_3 + fconvert.t(var_24_1) * fconvert.t(eax_8)))))
    float var_64_2 = fconvert.s(fconvert.t(var_18_5) * x87_r3_20 - fconvert.t(var_14_5) * x87_r4_33)
    arg1[0x10] = var_64_2
    long double x87_r1_86 = fconvert.t(var_1c_4)
    float var_60_2 = fconvert.s(fconvert.t(var_14_5) * x87_r1_12 - x87_r3_20 * x87_r1_86)
    arg1[0x11] = var_60_2
    float var_5c_2 = fconvert.s(x87_r4_33 * x87_r1_86 - x87_r1_12 * fconvert.t(var_18_5))
    float result = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r3_1 * fconvert.t(var_64_2)
        + x87_r3_3 * fconvert.t(var_60_2) + fconvert.t(var_5c_2) * fconvert.t(eax_8)))))
    arg1[0x12] = var_5c_2
    arg1[0x13] = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

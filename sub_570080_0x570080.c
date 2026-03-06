// 函数名称: sub_570080
// 虚拟地址: 0x570080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_570080(int32_t arg1, int32_t arg2, float* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    long double x87_r7 = fconvert.t(arg3[6])
    float* entry_ebx
    long double x87_r6 = fconvert.t(entry_ebx[6])
    x87_r6 - x87_r7
    int32_t eax_1
    eax_1.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    float var_48
    float var_38
    float var_2c
    float var_20
    int32_t eax_13
    int32_t ecx_16
    float edx_15
    long double x87_r2_3
    long double x87_r3_2
    long double x87_r4_3
    long double x87_r5_2
    long double x87_r6_14
    long double x87_r7_12
    float var_88
    float var_70
    float var_60
    float var_54
    
    if (p)
    label_57026c:
        int32_t* eax_14 = sub_54cdc0(arg3, &var_38)
        int32_t ecx_17 = eax_14[1]
        var_60 = *eax_14
        int32_t var_5c_1 = ecx_17
        int32_t var_58_1 = eax_14[2]
        int32_t edx_18 = eax_14[4]
        int32_t eax_15 = eax_14[5]
        var_54 = eax_14[3]
        int32_t var_50_1 = edx_18
        int32_t var_4c_1 = eax_15
        int32_t* eax_16 = sub_54cdc0(entry_ebx, &var_88)
        int32_t edx_19 = eax_16[1]
        var_38 = *eax_16
        int32_t var_34_1 = edx_19
        int32_t var_30_1 = eax_16[2]
        int32_t ecx_22 = eax_16[4]
        var_2c = eax_16[3]
        int32_t var_28_1 = ecx_22
        int32_t var_24_1 = eax_16[5]
        float* eax_17 = sub_51ebe0(&var_38, &var_60, &var_20)
        float edx_23 = eax_17[1]
        float eax_18 = eax_17[2]
        var_88 = *eax_17
        int32_t* eax_19 = sub_51ec60(&var_2c, &var_54, &var_70)
        x87_r7_12 = fconvert.t(var_88)
        float edx_25 = eax_19[1]
        float eax_20 = eax_19[2]
        long double x87_r5_3 = fconvert.t(*eax_19)
        x87_r6_14 = x87_r5_3
        var_20 = fconvert.s(x87_r7_12 + x87_r5_3)
        x87_r5_2 = fconvert.t(edx_23)
        long double x87_r3_3 = fconvert.t(edx_25)
        x87_r4_3 = x87_r3_3
        float var_1c_3 = fconvert.s(x87_r5_2 + x87_r3_3)
        x87_r3_2 = fconvert.t(eax_18)
        long double x87_r1_6 = fconvert.t(eax_20)
        x87_r2_3 = x87_r1_6
        float var_18_3 = fconvert.s(x87_r3_2 + x87_r1_6)
        long double x87_r0_6 = fconvert.t(0.5)
        var_70 = fconvert.s(fconvert.t(var_20) * x87_r0_6)
        float var_6c_3 = fconvert.s(fconvert.t(var_1c_3) * x87_r0_6)
        float var_68_3 = fconvert.s(x87_r0_6 * fconvert.t(var_18_3))
        var_48 = var_70
        float var_44_1 = var_6c_3
        edx_15 = 0f
        float var_40_1 = var_68_3
        eax_13 = 0
        int32_t var_3c_1 = 0
        ecx_16 = 0x3f800000
    else
        long double x87_r7_1 = fconvert.t(arg3[3])
        long double x87_r6_1 = fconvert.t(entry_ebx[3])
        x87_r6_1 - x87_r7_1
        eax_1.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            goto label_57026c
        
        long double x87_r7_2 = fconvert.t(arg3[4])
        long double x87_r6_2 = fconvert.t(entry_ebx[4])
        x87_r6_2 - x87_r7_2
        eax_1.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            goto label_57026c
        
        long double x87_r7_3 = fconvert.t(arg3[5])
        long double x87_r6_3 = fconvert.t(entry_ebx[5])
        x87_r6_3 - x87_r7_3
        eax_1.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            goto label_57026c
        
        long double x87_r6_4 = fconvert.t(0.5)
        var_70 = fconvert.s(fconvert.t(arg3[7]) * x87_r6_4)
        long double x87_r6_6 = fconvert.t(arg3[8])
        var_20 = var_70
        float var_1c = fconvert.s(x87_r6_6 * x87_r6_4)
        float var_18 = fconvert.s(x87_r6_4 * fconvert.t(arg3[9]))
        int32_t* eax_4 = sub_4d84a0(&var_60, &var_20, arg3, &var_60)
        long double x87_r6_8 = fconvert.t(0.5)
        int32_t edx_2 = eax_4[1]
        long double x87_r7_9 = fconvert.t(entry_ebx[7]) * x87_r6_8
        var_38 = *eax_4
        int32_t ecx_3 = eax_4[2]
        var_70 = fconvert.s(x87_r7_9)
        int32_t var_34 = edx_2
        long double x87_r6_11 = fconvert.t(entry_ebx[8]) * x87_r6_8
        int32_t var_30 = ecx_3
        int32_t ecx_4 = eax_4[4]
        var_2c = eax_4[3]
        float var_6c_1 = fconvert.s(x87_r6_11)
        int32_t var_28 = ecx_4
        int32_t var_24 = eax_4[5]
        float var_68_1 = fconvert.s(x87_r6_8 * fconvert.t(entry_ebx[9]))
        var_20 = var_70
        float var_1c_1 = var_6c_1
        float var_18_1 = var_68_1
        int32_t* eax_7 = sub_4d84a0(&var_88, &var_20, entry_ebx, &var_88)
        int32_t edx_7 = eax_7[1]
        var_60 = *eax_7
        int32_t var_5c = edx_7
        int32_t var_58 = eax_7[2]
        int32_t ecx_9 = eax_7[4]
        var_54 = eax_7[3]
        int32_t var_50 = ecx_9
        int32_t var_4c = eax_7[5]
        float* eax_8 = sub_51ebe0(&var_60, &var_38, &var_20)
        float edx_11 = eax_8[1]
        float eax_9 = eax_8[2]
        var_88 = *eax_8
        float* eax_10 = sub_51ec60(&var_54, &var_2c, &var_70)
        x87_r7_12 = fconvert.t(var_88)
        float edx_13 = eax_10[1]
        float eax_11 = eax_10[2]
        long double x87_r5 = fconvert.t(*eax_10)
        x87_r6_14 = x87_r5
        var_70 = fconvert.s(x87_r7_12 + x87_r5)
        x87_r5_2 = fconvert.t(edx_11)
        long double x87_r3 = fconvert.t(edx_13)
        x87_r4_3 = x87_r3
        float var_6c_2 = fconvert.s(x87_r5_2 + x87_r3)
        x87_r3_2 = fconvert.t(eax_9)
        long double x87_r1 = fconvert.t(eax_11)
        x87_r2_3 = x87_r1
        float var_68_2 = fconvert.s(x87_r3_2 + x87_r1)
        long double x87_r0_1 = fconvert.t(0.5)
        var_20 = fconvert.s(fconvert.t(var_70) * x87_r0_1)
        var_48 = var_20
        int32_t var_3c = arg3[3]
        ecx_16 = arg3[6]
        float var_44 = fconvert.s(fconvert.t(var_6c_2) * x87_r0_1)
        edx_15 = arg3[4]
        float var_40 = fconvert.s(x87_r0_1 * fconvert.t(var_68_2))
        eax_13 = arg3[5]
    int32_t var_34_2 = eax_13
    int32_t var_30_2 = ecx_16
    var_38 = edx_15
    var_20 = fconvert.s(x87_r6_14 - x87_r7_12)
    var_2c = var_20
    float var_28_2 = fconvert.s(x87_r4_3 - x87_r5_2)
    float var_24_2 = fconvert.s(x87_r2_3 - x87_r3_2)
    __builtin_memcpy(arg4, &var_48, 0x28)
    sub_5a6aba(var_c ^ &__saved_ebp)
    return arg4
}

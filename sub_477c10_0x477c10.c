// 函数名称: sub_477c10
// 虚拟地址: 0x477c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_477c10(int32_t arg1, int32_t arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_6c
    sub_405900(&var_6c, arg2, arg3)
    float ecx = var_6c
    float var_28 = var_6c
    float var_64
    float var_20 = var_64
    float var_20_1 = fconvert.s(float.t(0))
    float var_68
    float var_24 = var_68
    float* eax_3 = sub_4132a0(&var_28, &var_6c)
    float edx_3 = eax_3[1]
    int32_t eax_4 = eax_3[2]
    var_28 = *eax_3
    int32_t var_20_2 = eax_4
    float* entry_ebx
    sub_405900(&var_6c, edx_3, entry_ebx)
    float ecx_5 = var_6c
    float var_4c
    sub_466130(&var_4c, var_68, entry_ebx)
    long double x87_r7_2 = fconvert.t(var_68) * fconvert.t(var_28)
    var_6c = var_4c
    float var_44_1 = fconvert.s(x87_r7_2 - fconvert.t(edx_3) * fconvert.t(ecx_5))
    long double x87_r7_8 = float.t(0)
    long double x87_r6_2 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(var_44_1) - fconvert.t(0.89999997615814209)))
        / fconvert.t(-1.7999999523162842)))
    x87_r6_2 - x87_r7_8
    float eax_8
    eax_8.w = (x87_r6_2 < x87_r7_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_8) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_8 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = float.t(1)
    long double x87_r4 = float.t(1)
    long double x87_r3 = float.t(0)
    bool p = unimplemented  {test ah, 0x41}
    float var_50
    long double x87_r4_1
    long double x87_r7_10
    
    if (p)
        x87_r6_2 - x87_r5
        eax_8.w = (x87_r6_2 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r5) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r5 ? 1 : 0) << 0xe | 0x1800
        
        if ((eax_8:1.b & 1) != 0)
            var_50 = fconvert.s(x87_r6_2 * (x87_r4 - x87_r3) + x87_r3)
        else
            var_50 = fconvert.s(x87_r5)
            x87_r4 = x87_r6_2
        
        x87_r4_1 = x87_r7_8
        x87_r7_10 = x87_r4
    else
        x87_r4_1 = x87_r3
        x87_r7_10 = x87_r4
        var_50 = fconvert.s(x87_r4_1)
    
    long double x87_r3_6 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(var_64) - fconvert.t(-0.89999997615814209)))
        / fconvert.t(1.7999999523162842)))
    x87_r3_6 - x87_r4_1
    eax_8.w = (x87_r3_6 < x87_r4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_6, x87_r4_1) ? 1 : 0) << 0xa
        | (x87_r3_6 == x87_r4_1 ? 1 : 0) << 0xe | 0x1800
    bool p_1 = unimplemented  {test ah, 0x41}
    long double x87_r7_11
    
    if (p_1)
        x87_r4_1 - x87_r3_6
        eax_8.w = (x87_r4_1 < x87_r3_6 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_1, x87_r3_6) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r3_6 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_8:1.b & 1) != 0)
            x87_r7_11 = x87_r3_6 * (x87_r7_10 - x87_r4_1) + x87_r4_1
        else
            x87_r7_11 = x87_r4_1
    else
        x87_r7_11 = x87_r3_6
    
    float var_5c = fconvert.s(x87_r7_11)
    float var_48
    sub_465a20(&var_4c, var_48, arg3)
    long double x87_r7_14 = fconvert.t(var_64)
    long double x87_r5_6 = float.t(0)
    long double x87_r6_6 = x87_r7_14 * x87_r5_6
    long double x87_r4_5 = fconvert.t(var_68)
    var_28 = var_4c
    var_4c = fconvert.s(x87_r4_5 - x87_r6_6)
    long double x87_r3_11 = fconvert.t(ecx)
    float var_44_2 = fconvert.s(x87_r3_11 * x87_r5_6 - x87_r4_5 * x87_r5_6)
    long double x87_r3_16 = fconvert.t(fconvert.s(x87_r6_6 - x87_r3_11))
    float var_1c_1 = fconvert.s(x87_r3_16 * x87_r7_14 - fconvert.t(var_44_2) * x87_r4_5)
    float var_18_1 = fconvert.s(fconvert.t(var_44_2) * x87_r3_11 - fconvert.t(var_4c) * x87_r7_14)
    long double x87_r3_19 =
        fconvert.t(fconvert.s(x87_r4_5 * fconvert.t(var_4c) - x87_r3_16 * x87_r3_11))
    var_4c = fconvert.s(x87_r3_19 * fconvert.t(var_48) - fconvert.t(var_44_1) * fconvert.t(var_18_1))
    long double x87_r1_7 = fconvert.t(var_1c_1)
    long double x87_r7_16 = x87_r7_14 * fconvert.t(fconvert.s(fconvert.t(var_18_1) * fconvert.t(var_28)
        - x87_r1_7 * fconvert.t(var_48))) + x87_r3_11 * fconvert.t(var_4c) + x87_r4_5
        * fconvert.t(fconvert.s(fconvert.t(var_44_1) * x87_r1_7 - x87_r3_19 * fconvert.t(var_28)))
    long double x87_r7_17 = x87_r5_6
    long double x87_r6_17 = float.t(0)
    long double x87_r5_8 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_16)) - fconvert.t(-0.89999997615814209)))
        / fconvert.t(1.7999999523162842)))
    x87_r5_8 - x87_r6_17
    float eax_10
    eax_10.w = (x87_r5_8 < x87_r6_17 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_8, x87_r6_17) ? 1 : 0) << 0xa | (x87_r5_8 == x87_r6_17 ? 1 : 0) << 0xe
        | 0x2800
    bool p_2 = unimplemented  {test ah, 0x41}
    float var_54
    
    if (p_2)
        long double x87_r4_8 = float.t(1)
        x87_r4_8 - x87_r5_8
        eax_10.w = (x87_r4_8 < x87_r5_8 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_8, x87_r5_8) ? 1 : 0) << 0xa
            | (x87_r4_8 == x87_r5_8 ? 1 : 0) << 0xe | 0x2000
        bool p_3 = unimplemented  {test ah, 0x41}
        
        if (p_3)
            x87_r5_8 = x87_r4_8 * (float.t(1) - x87_r7_17) + x87_r7_17
        else
            x87_r6_17 = x87_r4_8
        
        var_54 = fconvert.s(x87_r5_8)
    else
        x87_r6_17 = x87_r5_8
        var_54 = fconvert.s(x87_r6_17)
    
    long double x87_r4_11 = fconvert.t(1.7000000476837158)
    long double x87_r4_13 = fconvert.t(fconvert.s(x87_r7_17 * x87_r4_11))
    var_4c = fconvert.s(x87_r4_13)
    float var_18_2 = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(fconvert.s(x87_r4_13)))
    float var_14_2 = fconvert.s(x87_r4_11 + fconvert.t(entry_ebx[6]))
    var_4c = fconvert.s(fconvert.t(arg3[4])
        - fconvert.t(fconvert.s(fconvert.t(entry_ebx[4]) + fconvert.t(var_4c))))
    long double x87_r4_18 = fconvert.t(var_4c)
    long double x87_r2_23 = fconvert.t(fconvert.s(fconvert.t(arg3[5]) - fconvert.t(var_18_2)))
    long double x87_r1_11 = fconvert.t(fconvert.s(fconvert.t(arg3[6]) - fconvert.t(var_14_2)))
    float var_38_8 = fconvert.s(x87_r2_23 * fconvert.t(var_68) + x87_r4_18 * fconvert.t(ecx_5)
        + x87_r1_11 * fconvert.t(var_64))
    float var_44
    long double x87_r3_38 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(var_44) * x87_r1_11 + fconvert.t(var_48) * x87_r2_23
        + fconvert.t(var_6c) * x87_r4_18)) - fconvert.t(-0.10000000149011612)))
        / fconvert.t(0.20000000298023224)))
    x87_r3_38 - x87_r6_17
    eax_10.w = (x87_r3_38 < x87_r6_17 ? 1 : 0) << 8
        | (is_unordered.t(x87_r3_38, x87_r6_17) ? 1 : 0) << 0xa
        | (x87_r3_38 == x87_r6_17 ? 1 : 0) << 0xe | 0x1800
    bool p_4 = unimplemented  {test ah, 0x41}
    float var_58
    long double x87_r2_30
    long double x87_r3_39
    
    if (p_4)
        long double x87_r2_31 = float.t(1)
        x87_r2_31 - x87_r3_38
        eax_10.w = (x87_r2_31 < x87_r3_38 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_31, x87_r3_38) ? 1 : 0) << 0xa
            | (x87_r2_31 == x87_r3_38 ? 1 : 0) << 0xe | 0x1000
        bool p_5 = unimplemented  {test ah, 0x41}
        long double x87_r3_41
        
        if (p_5)
            long double x87_r0_7 = float.t(1)
            x87_r3_41 = x87_r0_7
            var_58 = fconvert.s(x87_r3_38 * (x87_r7_17 - x87_r0_7) + x87_r0_7)
        else
            var_58 = fconvert.s(x87_r6_17)
            x87_r3_41 = float.t(1)
            x87_r2_31 = x87_r3_38
        
        x87_r2_30 = x87_r3_41
        x87_r3_39 = x87_r2_31
    else
        x87_r3_39 = float.t(1)
        var_58 = fconvert.s(x87_r3_39)
        x87_r2_30 = float.t(1)
    
    long double x87_r1_17 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(var_38_8) - fconvert.t(-0.15000000596046448)))
        / fconvert.t(0.30000001192092896)))
    x87_r1_17 - x87_r6_17
    eax_10.w = (x87_r1_17 < x87_r6_17 ? 1 : 0) << 8
        | (is_unordered.t(x87_r1_17, x87_r6_17) ? 1 : 0) << 0xa
        | (x87_r1_17 == x87_r6_17 ? 1 : 0) << 0xe | 0x800
    bool p_6 = unimplemented  {test ah, 0x41}
    
    if (p_6)
        x87_r1_17 - x87_r3_39
        eax_10.w = (x87_r1_17 < x87_r3_39 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_17, x87_r3_39) ? 1 : 0) << 0xa
            | (x87_r1_17 == x87_r3_39 ? 1 : 0) << 0xe | 0x800
        
        if ((eax_10:1.b & 1) != 0)
            x87_r7_17 = x87_r1_17
            x87_r6_17 = x87_r6_17 + x87_r3_39 * (x87_r2_30 - x87_r6_17)
    else
        x87_r7_17 = x87_r3_39
    
    float var_3c_6 = fconvert.s(x87_r6_17)
    arg4[1] = fconvert.s(fconvert.t(var_5c))
    arg4[2] = fconvert.s(fconvert.t(var_54))
    *arg4 = fconvert.s(fconvert.t(var_50))
    arg4[3] = fconvert.s(x87_r7_17)
    arg4[4] = fconvert.s(fconvert.t(var_38_8))
    arg4[5] = fconvert.s(x87_r1_11)
    arg4[6] = fconvert.s(fconvert.t(var_58))
    arg4[7] = fconvert.s(fconvert.t(var_3c_6))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}

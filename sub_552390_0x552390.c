// 函数名称: sub_552390
// 虚拟地址: 0x552390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_552390(int32_t arg1, int32_t arg2, int32_t* arg3, float arg4, float arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg3[1]
    int32_t eax_2 = arg3[2]
    long double x87_r7_5 = fconvert.t(fconvert.s(float.t(ebx) * fconvert.t(arg4))) - fconvert.t(0.5)
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686950(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.s(x87_r7_5))))
    long double x87_r7_10 = fconvert.t(fconvert.s(float.t(eax_2) * fconvert.t(arg5))) - fconvert.t(0.5)
    int32_t eax_3
    long double st0_1
    st0_1, eax_3 = sub_686950(mxcsr, x87control_1, fconvert.d(fconvert.t(fconvert.s(x87_r7_10))))
    long double x87_r7_14 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0))))
    x87_r6 - x87_r7_14
    eax_3.w = (x87_r6 < x87_r7_14 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_14) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_14 ? 1 : 0) << 0xe | 0x3000
    long double x87_r4 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r5_1
    
    if (p)
        x87_r5_1 = x87_r6 + x87_r4
    else
        x87_r5_1 = x87_r6 - x87_r4
    
    long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0_1))))
    x87_r4_2 - x87_r7_14
    int32_t esi = sub_685f40(x87_r5_1)
    int32_t eax_4
    eax_4.w = (x87_r4_2 < x87_r7_14 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_2, x87_r7_14) ? 1 : 0) << 0xa
        | (x87_r4_2 == x87_r7_14 ? 1 : 0) << 0xe | 0x2000
    bool p_1 = unimplemented  {test ah, 0x5}
    int32_t var_58_1
    int32_t edx
    long double x87_r5_4
    
    if (p_1)
        x87_r5_4 = x87_r4_2
        int32_t eax_6 = sub_685f40(x87_r4 + x87_r4_2)
        edx = eax_6
        var_58_1 = eax_6
    else
        x87_r5_4 = x87_r4_2
        edx = sub_685f40(x87_r4_2 - x87_r4)
        var_58_1 = edx
    
    int32_t eax_7 = esi
    long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r7_5)) - x87_r6))
    long double x87_r4_6 = float.t(1)
    double var_6c
    var_6c:4.d = fconvert.s(x87_r4_6 - x87_r6_4)
    long double x87_r4_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r7_10)) - x87_r5_4))
    double var_64
    var_64:4.d = fconvert.s(x87_r4_6 - x87_r4_8)
    
    if (esi s< 0)
        eax_7 = ebx + esi
    
    if (eax_7 s>= ebx)
        eax_7 -= ebx
    
    if (edx s< 0)
        edx = 0
    else if (edx s> eax_2 - 1)
        edx = eax_2 - 1
    
    int32_t ecx_2 = arg3[3]
    int32_t edi_1 = *arg3
    int32_t edx_1 = *(ecx_2 * edx + edi_1 + (eax_7 << 2))
    int32_t edx_2 = esi + 1
    int32_t var_4c_2 = edx_2
    
    if (edx_2 s< 0)
        edx_2 += ebx
    
    if (edx_2 s>= ebx)
        edx_2 -= ebx
    
    int32_t eax_9 = var_58_1
    
    if (eax_9 s< 0)
        eax_9 = 0
    else if (eax_9 s> eax_2 - 1)
        eax_9 = eax_2 - 1
    
    int32_t edx_3 = *(ecx_2 * eax_9 + edi_1 + (edx_2 << 2))
    int32_t eax_11 = var_58_1 + 1
    int32_t var_58_2 = eax_11
    
    if (esi s< 0)
        esi += ebx
    
    if (esi s>= ebx)
        esi -= ebx
    
    if (eax_11 s< 0)
        eax_11 = 0
    else if (eax_11 s> eax_2 - 1)
        eax_11 = eax_2 - 1
    
    int32_t eax_12 = *(ecx_2 * eax_11 + edi_1 + (esi << 2))
    int32_t esi_1 = var_4c_2
    
    if (esi_1 s< 0)
        esi_1 += ebx
    
    if (esi_1 s>= ebx)
        esi_1 -= ebx
    
    int32_t ebx_14 = var_58_2
    
    if (ebx_14 s< 0)
        ebx_14 = 0
    else if (ebx_14 s> eax_2 - 1)
        ebx_14 = eax_2 - 1
    
    int32_t ecx_5 = *(ecx_2 * ebx_14 + edi_1 + (esi_1 << 2))
    int32_t esi_3 = edx_1 u>> 0x18
    long double x87_r4_10 = float.t(esi_3)
    
    if (esi_3 s< 0)
        x87_r4_10 = x87_r4_10 + fconvert.t(4.2949673e+09f)
    
    int32_t esi_12 = edx_3 u>> 0x18
    long double x87_r4_14 = float.t(esi_12)
    
    if (esi_12 s< 0)
        x87_r4_14 = x87_r4_14 + fconvert.t(4.2949673e+09f)
    
    uint32_t edx_6 = eax_12 u>> 0x18
    long double x87_r4_18 = float.t(edx_6)
    
    if (edx_6 s< 0)
        x87_r4_18 = x87_r4_18 + fconvert.t(4.2949673e+09f)
    
    int32_t edx_14 = ecx_5 u>> 0x18
    long double x87_r4_22 = float.t(edx_14)
    
    if (edx_14 s< 0)
        x87_r4_22 = x87_r4_22 + fconvert.t(4.2949673e+09f)
    
    long double x87_r3_3 = fconvert.t(var_6c:4.d)
    long double x87_r2_1 = fconvert.t(var_64:4.d)
    long double x87_r4_30 =
        fconvert.t(fconvert.s(float.t(zx.d((edx_1 u>> 0x10).b)))) * x87_r3_3 * x87_r2_1
        + fconvert.t(fconvert.s(float.t(zx.d((edx_3 u>> 0x10).b)))) * x87_r6_4 * x87_r2_1
        + fconvert.t(fconvert.s(float.t(zx.d((eax_12 u>> 0x10).b)))) * x87_r3_3 * x87_r4_8
    var_64:4.d = fconvert.s(x87_r4_30
        + fconvert.t(fconvert.s(float.t(zx.d((ecx_5 u>> 0x10).b)))) * x87_r6_4 * x87_r4_8)
    long double x87_r2_3 = fconvert.t(var_64:4.d)
    x87_r2_3 - x87_r7_14
    uint32_t eax_17
    eax_17.w = (x87_r2_3 < x87_r7_14 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_3, x87_r7_14) ? 1 : 0) << 0xa | (x87_r2_3 == x87_r7_14 ? 1 : 0) << 0xe
        | 0x1000
    bool p_2 = unimplemented  {test ah, 0x5}
    long double x87_r2_4
    
    if (p_2)
        x87_r2_4 = x87_r2_3 + fconvert.t(0.5)
    else
        x87_r2_4 = x87_r2_3 - fconvert.t(0.5)
    
    int32_t var_54_1 = sub_685f40(x87_r2_4)
    long double x87_r2_9 = fconvert.t(fconvert.s(float.t(zx.d((edx_3 u>> 8).b)))) * x87_r6_4 * x87_r2_1
        + fconvert.t(fconvert.s(float.t(zx.d((edx_1 u>> 8).b)))) * x87_r3_3 * x87_r2_1
        + fconvert.t(fconvert.s(float.t(zx.d((eax_12 u>> 8).b)))) * x87_r3_3 * x87_r4_8
    var_64:4.d = fconvert.s(x87_r2_9
        + fconvert.t(fconvert.s(float.t(zx.d((ecx_5 u>> 8).b)))) * x87_r6_4 * x87_r4_8)
    long double x87_r2_11 = fconvert.t(var_64:4.d)
    x87_r2_11 - x87_r7_14
    int32_t eax_18
    eax_18.w = (x87_r2_11 < x87_r7_14 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_11, x87_r7_14) ? 1 : 0) << 0xa
        | (x87_r2_11 == x87_r7_14 ? 1 : 0) << 0xe | 0x1000
    bool p_3 = unimplemented  {test ah, 0x5}
    long double x87_r2_12
    
    if (p_3)
        x87_r2_12 = x87_r2_11 + fconvert.t(0.5)
    else
        x87_r2_12 = x87_r2_11 - fconvert.t(0.5)
    
    int32_t var_58_3 = sub_685f40(x87_r2_12)
    long double x87_r2_18 = fconvert.t(fconvert.s(float.t(zx.d(edx_1.b)))) * x87_r3_3 * x87_r2_1
        + fconvert.t(fconvert.s(float.t(zx.d(edx_3.b)))) * x87_r6_4 * x87_r2_1
        + fconvert.t(fconvert.s(float.t(zx.d(eax_12.b)))) * x87_r3_3 * x87_r4_8
        + fconvert.t(fconvert.s(float.t(zx.d(ecx_5.b)))) * x87_r6_4 * x87_r4_8
    var_64:4.d = fconvert.s(x87_r2_18)
    long double x87_r2_19 = fconvert.t(var_64:4.d)
    x87_r2_19 - x87_r7_14
    int32_t eax_19
    eax_19.w = (x87_r2_19 < x87_r7_14 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_19, x87_r7_14) ? 1 : 0) << 0xa
        | (x87_r2_19 == x87_r7_14 ? 1 : 0) << 0xe | 0x1000
    bool p_4 = unimplemented  {test ah, 0x5}
    long double x87_r2_20
    
    if (p_4)
        x87_r2_20 = x87_r2_19 + fconvert.t(0.5)
    else
        x87_r2_20 = x87_r2_19 - fconvert.t(0.5)
    
    int32_t ebx_15 = sub_685f40(x87_r2_20)
    var_64:4.d = fconvert.s(x87_r2_1 * fconvert.t(fconvert.s(x87_r4_14)) * x87_r6_4
        + fconvert.t(fconvert.s(x87_r4_10)) * x87_r3_3 * x87_r2_1
        + x87_r3_3 * fconvert.t(fconvert.s(x87_r4_18)) * x87_r4_8
        + x87_r4_8 * x87_r6_4 * fconvert.t(fconvert.s(x87_r4_22)))
    long double x87_r6_8 = fconvert.t(var_64:4.d)
    x87_r6_8 - x87_r7_14
    int32_t eax_20
    eax_20.w = (x87_r6_8 < x87_r7_14 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_8, x87_r7_14) ? 1 : 0) << 0xa | (x87_r6_8 == x87_r7_14 ? 1 : 0) << 0xe
        | 0x3000
    bool p_5 = unimplemented  {test ah, 0x5}
    long double x87_r7_15
    
    if (p_5)
        x87_r7_15 = x87_r7_14 + fconvert.t(0.5)
    else
        x87_r7_15 = x87_r7_14 - fconvert.t(0.5)
    
    int32_t eax_21 = sub_685f40(x87_r7_15)
    
    if (var_54_1 s< 0)
        var_54_1 = 0
    else if (var_54_1 s> 0xff)
        var_54_1 = 0xff
    
    if (var_58_3 s< 0)
        var_58_3 = 0
    else if (var_58_3 s> 0xff)
        var_58_3 = 0xff
    
    if (ebx_15 s< 0)
        ebx_15 = 0
    else if (ebx_15 s> 0xff)
        ebx_15 = 0xff
    
    if (eax_21 s< 0)
        eax_21 = 0
    else if (eax_21 s> 0xff)
        eax_21 = 0xff
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return (((((zx.d(eax_21.b) << 8) + zx.d(var_54_1.b)) << 8) + zx.d(var_58_3.b)) << 8)
        + zx.d(ebx_15.b)
}

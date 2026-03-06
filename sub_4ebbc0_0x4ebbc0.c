// 函数名称: sub_4ebbc0
// 虚拟地址: 0x4ebbc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4ebbc0(void* arg1, float* arg2, float arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t mxcsr
    int32_t mxcsr
    int16_t x87control
    int32_t eax_1 = sub_685f40(fconvert.t(fconvert.s(sub_686950(mxcsr, x87control, 
        fconvert.d(fconvert.t(fconvert.s(float.t(arg4) * fconvert.t(arg3)
            * fconvert.t(*(*(*(arg1 + 0x30) + 0x2e4) + 0x58)))))))))
    sub_68b79a()
    int32_t edi_1 = *(arg1 + 0x2c)
    int32_t eax_3 = edi_1 * eax_1
    int32_t ecx_2 = eax_3 * 0x4d
    int32_t edx_2 = (ecx_2 << 0xf) + not.d(ecx_2)
    int32_t edx_3 = (edx_2 u>> 0xc ^ edx_2) * 5
    int32_t eax_4 = eax_3 * 0x4f
    int32_t ecx_10 = (edx_3 u>> 4 ^ edx_3) * 0x809
    int32_t edx_5 = eax_3 * 0x4e
    int32_t esi_3 = (edx_5 << 0xf) + not.d(edx_5)
    int32_t esi_4 = (esi_3 u>> 0xc ^ esi_3) * 5
    int32_t edx_13 = (esi_4 u>> 4 ^ esi_4) * 0x809
    int32_t esi_7 = (eax_4 << 0xf) + not.d(eax_4)
    int32_t eax_9 = (esi_7 u>> 0xc ^ esi_7) * 5
    int32_t esi_11 = (eax_9 u>> 4 ^ eax_9) * 0x809
    int32_t eax_11 = edi_1 * (eax_1 - 1)
    int32_t edi_3 = eax_11 * 0x4d
    int32_t ebx_3 = (edi_3 << 0xf) + not.d(edi_3)
    int32_t ebx_4 = (ebx_3 u>> 0xc ^ ebx_3) * 5
    float edi_11 = (ebx_4 u>> 4 ^ ebx_4) * 0x809
    int32_t eax_12 = eax_11 * 0x4f
    int32_t edi_13 = eax_11 * 0x4e
    int32_t ebx_7 = (edi_13 << 0xf) + not.d(edi_13)
    int32_t ebx_8 = (ebx_7 u>> 0xc ^ ebx_7) * 5
    int32_t edi_21 = (ebx_8 u>> 4 ^ ebx_8) * 0x809
    int32_t ebx_11 = (eax_12 << 0xf) + not.d(eax_12)
    int32_t ebx_12 = (ebx_11 u>> 0xc ^ ebx_11) * 5
    int32_t eax_20 = (ebx_12 u>> 4 ^ ebx_12) * 0x809
    long double x87_r5 = float.t(1)
    float var_14 = fconvert.s(fconvert.t(((ecx_10 u>> 0x10 ^ ecx_10) & 0x7fffff) | 0x3f800000) - x87_r5)
    float var_10 = fconvert.s(fconvert.t(((edx_13 u>> 0x10 ^ edx_13) & 0x7fffff) | 0x3f800000) - x87_r5)
    float var_c = fconvert.s(fconvert.t(((esi_11 u>> 0x10 ^ esi_11) & 0x7fffff) | 0x3f800000) - x87_r5)
    float var_20 = fconvert.s(fconvert.t(((edi_11 u>> 0x10 ^ edi_11) & 0x7fffff) | 0x3f800000) - x87_r5)
    float var_1c = fconvert.s(fconvert.t(((edi_21 u>> 0x10 ^ edi_21) & 0x7fffff) | 0x3f800000) - x87_r5)
    float var_18 = fconvert.s(fconvert.t(((eax_20 u>> 0x10 ^ eax_20) & 0x7fffff) | 0x3f800000) - x87_r5)
    long double x87_r4 = float.t(0)
    long double x87_r6_7 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(1))))) - x87_r4))
        / fconvert.t(fconvert.s(x87_r5 - x87_r4))))
    long double x87_r5_16 = float.t(0)
    long double x87_r4_4 = fconvert.t(fconvert.s(x87_r6_7))
    x87_r4_4 - x87_r5_16
    eax_20.w = (x87_r4_4 < x87_r5_16 ? 1 : 0) << 8
        | (is_unordered.t(x87_r4_4, x87_r5_16) ? 1 : 0) << 0xa | (x87_r4_4 == x87_r5_16 ? 1 : 0) << 0xe
        | 0x2000
    long double x87_r3 = float.t(1)
    long double x87_r2 = fconvert.t(2.0)
    long double x87_r1 = fconvert.t(3.0)
    bool p = unimplemented  {test ah, 0x41}
    long double x87_r1_1
    
    if (p)
        long double x87_r1_2 = x87_r4_4
        x87_r4_4 = x87_r1
        x87_r1_2 - x87_r3
        eax_20.w = (x87_r1_2 < x87_r3 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_2, x87_r3) ? 1 : 0) << 0xa
            | (x87_r1_2 == x87_r3 ? 1 : 0) << 0xe | 0x800
        
        if ((eax_20:1.b & 1) != 0)
            long double x87_r1_6 =
                fconvert.t(fconvert.s(x87_r1_2 * x87_r1_2 * (x87_r4_4 - x87_r1_2 * x87_r2)))
            long double x87_r0_9 = fconvert.t(var_20)
            x87_r1_1 = (fconvert.t(var_14) - x87_r0_9)
                * fconvert.t(fconvert.s(x87_r1_6 * x87_r1_6 * (x87_r4_4 - x87_r1_6 * x87_r2))) + x87_r0_9
        else
            x87_r2 = x87_r1_2
            x87_r1_1 = fconvert.t(var_14)
    else
        x87_r5_16 = x87_r1
        x87_r1_1 = fconvert.t(var_20)
    
    *arg2 = fconvert.s(fconvert.t(fconvert.s(x87_r1_1)))
    long double x87_r2_1 = x87_r6_7
    long double x87_r1_14 = fconvert.t(fconvert.s(x87_r2_1))
    x87_r1_14 - x87_r5_16
    eax_20.w = (x87_r1_14 < x87_r5_16 ? 1 : 0) << 8
        | (is_unordered.t(x87_r1_14, x87_r5_16) ? 1 : 0) << 0xa
        | (x87_r1_14 == x87_r5_16 ? 1 : 0) << 0xe | 0x800
    bool p_1 = unimplemented  {test ah, 0x41}
    long double x87_r1_15
    
    if (p_1)
        x87_r1_14 - x87_r3
        eax_20.w = (x87_r1_14 < x87_r3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_14, x87_r3) ? 1 : 0) << 0xa | (x87_r1_14 == x87_r3 ? 1 : 0) << 0xe
            | 0x800
        
        if ((eax_20:1.b & 1) != 0)
            long double x87_r1_19 =
                fconvert.t(fconvert.s(x87_r1_14 * x87_r1_14 * (x87_r4_4 - x87_r1_14 * x87_r2)))
            long double x87_r0_18 = fconvert.t(var_1c)
            x87_r1_15 = (fconvert.t(var_10) - x87_r0_18)
                * fconvert.t(fconvert.s(x87_r1_19 * x87_r1_19 * (x87_r4_4 - x87_r1_19 * x87_r2)))
                + x87_r0_18
        else
            x87_r2_1 = x87_r1_14
            x87_r1_15 = fconvert.t(var_10)
    else
        x87_r2_1 = x87_r1_14
        x87_r1_15 = fconvert.t(var_1c)
    
    arg2[1] = fconvert.s(fconvert.t(fconvert.s(x87_r1_15)))
    long double x87_r2_2 = fconvert.t(fconvert.s(x87_r2_1))
    x87_r2_2 - x87_r5_16
    eax_20.w = (x87_r2_2 < x87_r5_16 ? 1 : 0) << 8
        | (is_unordered.t(x87_r2_2, x87_r5_16) ? 1 : 0) << 0xa | (x87_r2_2 == x87_r5_16 ? 1 : 0) << 0xe
        | 0x1000
    bool p_2 = unimplemented  {test ah, 0x41}
    
    if (not(p_2))
        arg2[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_18))))
        return arg2
    
    x87_r3 - x87_r5_16
    eax_20.w = (x87_r3 < x87_r5_16 ? 1 : 0) << 8 | (is_unordered.t(x87_r3, x87_r5_16) ? 1 : 0) << 0xa
        | (x87_r3 == x87_r5_16 ? 1 : 0) << 0xe | 0x2000
    bool p_3 = unimplemented  {test ah, 0x41}
    
    if (not(p_3))
        arg2[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c))))
        return arg2
    
    long double x87_r4_6 =
        fconvert.t(fconvert.s(x87_r5_16 * x87_r5_16 * (x87_r4_4 - x87_r5_16 * x87_r2_2)))
    long double x87_r5_24 = fconvert.t(var_18)
    arg2[2] = fconvert.s(fconvert.t(fconvert.s((fconvert.t(var_c) - x87_r5_24)
        * fconvert.t(fconvert.s((x87_r4_4 - x87_r2_2 * x87_r4_6) * x87_r4_6 * x87_r4_6)) + x87_r5_24)))
    return arg2
}

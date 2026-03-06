// 函数名称: sub_4784f0
// 虚拟地址: 0x4784f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4784f0(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    long double x87_r6 = float.t(0)
    long double x87_r7_1 = fconvert.t(*(arg1 + 0x14)) * x87_r6
    float var_c =
        fconvert.s(fconvert.t(*(arg1 + 0x10)) * x87_r6 + x87_r7_1 + fconvert.t(*(arg1 + 0x18)))
    long double x87_r7_9 = float.t(0)
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(sub_4064d0(fconvert.s(fconvert.t(
        fconvert.s(x87_r7_1 + fconvert.t(*(arg1 + 0x10)) + x87_r6 * fconvert.t(*(arg1 + 0x18))))))
        - fconvert.t(0.15000000596046448))) / fconvert.t(0.45000001788139343)))
    x87_r6_2 - x87_r7_9
    arg1.w = (x87_r6_2 < x87_r7_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_9 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5_5 = float.t(1)
    bool p = unimplemented  {test ah, 0x41}
    long double x87_r5_6
    
    if (p)
        x87_r5_5 - x87_r6_2
        arg1.w = (x87_r5_5 < x87_r6_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_5, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_5 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            long double x87_r5_7 = x87_r6_2
            x87_r6_2 = x87_r5_5
            x87_r5_6 = fconvert.t(-0.20000001788139343) - x87_r5_7 * fconvert.t(0.40000000596046448)
        else
            x87_r7_9 = x87_r5_5
            x87_r5_6 = fconvert.t(-0.600000024f)
    else
        x87_r7_9 = x87_r5_5
        x87_r5_6 = fconvert.t(-0.200000018f)
    
    long double x87_r4 = fconvert.t(fconvert.s(x87_r5_6))
    long double x87_r5_15 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_c) - x87_r4))
        / fconvert.t(fconvert.s(fconvert.t(0.20000000298023224) - x87_r4))))
    x87_r5_15 - x87_r7_9
    arg1.w = (x87_r5_15 < x87_r7_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_15, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r5_15 == x87_r7_9 ? 1 : 0) << 0xe | 0x2800
    bool p_2 = unimplemented  {test ah, 0x41}
    
    if (not(p_2))
        return fconvert.t(fconvert.s(x87_r5_15))
    
    x87_r6_2 - x87_r7_9
    arg1.w = (x87_r6_2 < x87_r7_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_9) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_9 ? 1 : 0) << 0xe | 0x3000
    bool p_3 = unimplemented  {test ah, 0x41}
    
    if (not(p_3))
        return fconvert.t(fconvert.s(x87_r7_9))
    
    long double x87_r5_16 = float.t(0)
    return fconvert.t(fconvert.s(x87_r6_2 * (float.t(1) - x87_r5_16) + x87_r5_16))
}

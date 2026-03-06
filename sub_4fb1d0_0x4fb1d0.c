// 函数名称: sub_4fb1d0
// 虚拟地址: 0x4fb1d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4fb1d0(float* arg1, float* arg2)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    sub_5abfc0(entry_ebx, 0, 0x40)
    long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1)))
    long double x87_r5 = float.t(0)
    x87_r5 - x87_r7_4
    int128_t* eax
    eax.w = (x87_r5 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
    long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1])))
    bool p = unimplemented  {test ah, 0x44}
    long double x87_r7_6
    
    if (p)
        x87_r7_6 = x87_r5_1
    else
        x87_r5_1 - x87_r7_4
        eax.w = (x87_r5_1 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800
        x87_r7_6 = x87_r5_1
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            return 
    
    float var_8_1 = fconvert.s(fconvert.t(arg2[3]) - fconvert.t(arg2[1]))
    long double x87_r5_6 = fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(*arg2)))
    float var_14 = fconvert.s(x87_r7_6 / x87_r5_6)
    long double x87_r5_8 = fconvert.t(var_8_1)
    long double x87_r6_2 = x87_r5_8
    long double x87_r5_10 = fconvert.t(var_14)
    long double x87_r4_4 = fconvert.t(fconvert.s(x87_r7_4 / x87_r5_8))
    x87_r4_4 - x87_r5_10
    float* eax_2
    eax_2.w = (x87_r4_4 < x87_r5_10 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_4, x87_r5_10) ? 1 : 0) << 0xa
        | (x87_r4_4 == x87_r5_10 ? 1 : 0) << 0xe | 0x2000
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        x87_r6_2 = x87_r4_4
    else
        x87_r5_10 = x87_r4_4
    
    float var_8_2 = fconvert.s(x87_r5_10)
    long double x87_r5_11 = fconvert.t(var_8_2)
    var_14 = fconvert.s(x87_r5_6 * x87_r5_11)
    float var_34 = var_14
    long double x87_r7_12 = fconvert.t(0.5f)
    float var_30 = fconvert.s(x87_r5_11 * x87_r6_2)
    var_14 = fconvert.s(x87_r7_12)
    float var_10_2 = fconvert.s(x87_r7_12)
    float var_24 = var_14
    float var_20 = var_10_2
    void var_1c
    float* eax_6 = sub_505540(&var_1c, arg1, &var_34, &var_24, &var_24, &var_1c)
    float ecx_3 = *eax_6
    entry_ebx[2] = fconvert.s(float.t(1))
    float edx_1 = eax_6[1]
    float var_3c = ecx_3
    float edx_2 = eax_6[3]
    var_34 = eax_6[2]
    float eax_7
    int32_t edx_3
    eax_7, edx_3 = sub_40af40(&var_3c)
    long double x87_r7_15 = fconvert.t(var_34) + fconvert.t(var_3c)
    *entry_ebx = eax_7
    long double x87_r6_3 = fconvert.t(0.5)
    entry_ebx[1] = edx_3
    var_24 = fconvert.s(x87_r7_15 * x87_r6_3)
    entry_ebx[6] = var_24
    long double x87_r7_19 = fconvert.t(var_8_2)
    entry_ebx[7] = fconvert.s(x87_r6_3 * (fconvert.t(edx_2) + fconvert.t(edx_1)))
    entry_ebx[3] = fconvert.s(x87_r7_19)
    long double x87_r5_13 = float.t(0)
    x87_r5_13 - x87_r7_19
    float eax_8
    eax_8.w = (x87_r5_13 < x87_r7_19 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r5_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        var_24 = fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))
        float var_20_2 = fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))
        long double x87_r6_12 = float.t(1)
        long double x87_r6_13 = fconvert.t(fconvert.s(x87_r6_12 / x87_r6_12))
        var_14 = fconvert.s(fconvert.t(var_24) * x87_r6_13)
        var_34 = var_14
        long double x87_r7_25 = fconvert.t(0.5f)
        float var_30_2 = fconvert.s(x87_r6_13 * fconvert.t(var_20_2))
        var_24 = fconvert.s(x87_r7_25)
        float var_20_3 = fconvert.s(x87_r7_25)
        var_14 = var_24
        float var_10_4 = var_20_3
        void var_2c
        float* eax_12 = sub_505540(var_20_3, arg2, &var_34, &var_14, &var_14, &var_2c)
        int32_t ecx_9 = eax_12[1]
        entry_ebx[8] = *eax_12
        int32_t edx_7 = eax_12[2]
        int32_t eax_13 = eax_12[3]
        entry_ebx[9] = ecx_9
        entry_ebx[0xa] = edx_7
        entry_ebx[0xb] = eax_13
    else
        entry_ebx[8] = 0
        entry_ebx[9] = 0
        entry_ebx[0xa] = 0
        entry_ebx[0xb] = 0
    
    int32_t edx_8 = arg2[1]
    entry_ebx[0xc] = *arg2
    int32_t ecx_11 = arg2[2]
    entry_ebx[0xd] = edx_8
    int32_t edx_9 = arg2[3]
    entry_ebx[0xe] = ecx_11
    entry_ebx[0xf] = edx_9
}

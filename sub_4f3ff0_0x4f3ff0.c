// 函数名称: sub_4f3ff0
// 虚拟地址: 0x4f3ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f3ff0(float* arg1 @ esi, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: arg1[3] = fconvert.s(float.t(1))
    arg1[3] = fconvert.s(float.t(1))
    long double x87_r7_1 = float.t(0)
    long double x87_r6 = fconvert.t(arg3)
    x87_r6 - x87_r7_1
    bool p = unimplemented  {test ah, 0x41}
    
    if (not(p))
        long double x87_r7_2 = fconvert.t(arg4)
        *arg1 = fconvert.s(x87_r7_2)
        arg1[1] = fconvert.s(x87_r7_2)
        arg1[2] = fconvert.s(x87_r7_2)
        return 
    
    long double x87_r5 = fconvert.t(arg2)
    float var_8 = fconvert.s(x87_r5)
    long double temp1 = fconvert.t(360f)
    x87_r5 - temp1
    
    if ((((x87_r5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, temp1) ? 1 : 0) << 0xa
            | (x87_r5 == temp1 ? 1 : 0) << 0xe | 0x3000):1.b & 1) == 0)
        long double x87_r6_1 = x87_r7_1
        x87_r7_1 = x87_r6
        var_8 = fconvert.s(x87_r6_1)
    
    long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(var_8) / fconvert.t(60.0)))
    int32_t eax_2 = sub_685f40(x87_r6_4)
    long double x87_r5_2 = float.t(1)
    long double x87_r4_1 = fconvert.t(arg4)
    arg4 = fconvert.s((x87_r5_2 - x87_r7_1) * x87_r4_1)
    long double x87_r4_3 = fconvert.t(fconvert.s(x87_r6_4 - float.t(eax_2)))
    float var_c_2 = fconvert.s((x87_r5_2 - x87_r4_3 * x87_r7_1) * x87_r4_1)
    float var_8_2 = fconvert.s((x87_r5_2 - x87_r7_1 * (x87_r5_2 - x87_r4_3)) * x87_r4_1)
    
    if (eax_2 u> 4)
        *arg1 = fconvert.s(x87_r4_1)
        arg1[1] = fconvert.s(fconvert.t(arg4))
        arg1[2] = fconvert.s(fconvert.t(var_c_2))
        return 
    
    switch (eax_2)
        case 0
            *arg1 = fconvert.s(x87_r4_1)
            arg1[1] = fconvert.s(fconvert.t(var_8_2))
            arg1[2] = fconvert.s(fconvert.t(arg4))
            return 
        case 1
            *arg1 = fconvert.s(fconvert.t(var_c_2))
            arg1[1] = fconvert.s(x87_r4_1)
            arg1[2] = fconvert.s(fconvert.t(arg4))
            return 
        case 2
            *arg1 = fconvert.s(fconvert.t(arg4))
            arg1[1] = fconvert.s(x87_r4_1)
            arg1[2] = fconvert.s(fconvert.t(var_8_2))
            return 
        case 3
            *arg1 = fconvert.s(fconvert.t(arg4))
            arg1[1] = fconvert.s(fconvert.t(var_c_2))
            arg1[2] = fconvert.s(x87_r4_1)
            return 
        case 4
            *arg1 = fconvert.s(fconvert.t(var_8_2))
            arg1[1] = fconvert.s(fconvert.t(arg4))
            arg1[2] = fconvert.s(x87_r4_1)
            return 
}

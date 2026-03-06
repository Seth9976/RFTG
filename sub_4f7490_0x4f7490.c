// 函数名称: sub_4f7490
// 虚拟地址: 0x4f7490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4f7490(float arg1 @ eax, int32_t arg2, int32_t* arg3, void* arg4 @ esi, float arg5)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t edx = *arg3
    
    if (arg3[2] s<= edx)
        arg1.b = *(arg4 + 0x30)
    else
        arg1.b = arg3[3].b
    
    float var_8_1
    
    if (arg1.b != 0)
        var_8_1 = fconvert.s(fconvert.t(-1f))
    else
        var_8_1 = fconvert.s(float.t(1))
    
    bool cond:0 = arg3[0x17] == 0
    long double x87_r6_5 =
        fconvert.t(fconvert.s(fconvert.t(var_8_1) * fconvert.t(arg5) + fconvert.t(arg3[5])))
    arg3[5] = fconvert.s(x87_r6_5)
    long double x87_r5
    
    if (cond:0)
        x87_r5 = float.t(*(arg4 + 0x50))
    else
        x87_r5 = fconvert.t(arg3[0x18])
    
    if (arg3[0x4d] s<= edx)
        arg5 = *(arg4 + 0x4c)
    else
        arg5 = arg3[0x4e]
    
    long double x87_r4 = fconvert.t(fconvert.s(x87_r5))
    long double x87_r4_2 = float.t(0)
    x87_r4_2 - x87_r6_5
    arg1.w = (x87_r4_2 < x87_r6_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_2, x87_r6_5) ? 1 : 0) << 0xa
        | (x87_r4_2 == x87_r6_5 ? 1 : 0) << 0xe | 0x2000
    
    if ((arg1:1.b & 0x41) == 0)
        arg3[5] = fconvert.s(x87_r6_5)
    
    long double x87_r5_8 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg3[5]) * fconvert.t(1000.0))) - x87_r4))
        / fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(arg5) + x87_r4)) - x87_r4))))
    x87_r5_8 - x87_r6_5
    arg1.w = (x87_r5_8 < x87_r6_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_8, x87_r6_5) ? 1 : 0) << 0xa
        | (x87_r5_8 == x87_r6_5 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x41}
    
    if (not(p))
        arg3[4] = fconvert.s(fconvert.t(fconvert.s(x87_r4_2)))
        return arg1
    
    x87_r6_5 - x87_r5_8
    arg1.w = (x87_r6_5 < x87_r5_8 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r5_8) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r5_8 ? 1 : 0) << 0xe | 0x3000
    
    if ((arg1:1.b & 1) == 0)
        arg3[4] = fconvert.s(fconvert.t(fconvert.s(x87_r6_5)))
        return arg1
    
    long double x87_r5_9 = float.t(0)
    arg3[4] = fconvert.s(fconvert.t(fconvert.s(x87_r5_8 * (float.t(1) - x87_r5_9) + x87_r5_9)))
    return arg1
}

// 函数名称: sub_50cd60
// 虚拟地址: 0x50cd60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_50cd60(float arg1, float arg2, float arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7 = fconvert.t(arg2)
    long double x87_r6 = fconvert.t(arg3)
    x87_r6 - x87_r7
    float var_8_1
    long double x87_r7_1
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        var_8_1 = fconvert.s(x87_r6)
        x87_r7_1 = x87_r6
    else
        x87_r7_1 = x87_r6
        var_8_1 = fconvert.s(x87_r7)
    
    long double x87_r5 = fconvert.t(arg1)
    long double x87_r4 = fconvert.t(var_8_1)
    x87_r4 - x87_r5
    
    if ((((x87_r4 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r5) ? 1 : 0) << 0xa
            | (x87_r4 == x87_r5 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) != 0)
        x87_r5 - x87_r7_1
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            return fconvert.t(fconvert.s(x87_r5))
    else
        x87_r7_1 = x87_r5
    
    return fconvert.t(fconvert.s(x87_r7_1))
}

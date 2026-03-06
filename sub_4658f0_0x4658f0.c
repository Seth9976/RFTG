// 函数名称: sub_4658f0
// 虚拟地址: 0x4658f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_4658f0(char* arg1 @ esi, char* arg2 @ edi, float arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    ebx.b = *arg2
    long double x87_r6 = fconvert.t(arg3)
    long double x87_r6_2 = float.t(0)
    long double x87_r5_1 = fconvert.t(fconvert.s(float.t(zx.d(*arg1) - zx.d(ebx.b)) * x87_r6))
    x87_r5_1 - x87_r6_2
    uint32_t eax
    eax.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
    long double x87_r4 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r5_2
    
    if (p)
        x87_r5_2 = x87_r5_1 + x87_r4
    else
        x87_r5_2 = x87_r5_1 - x87_r4
    
    ebx.b += sub_685f40(x87_r5_2)
    arg3.b = ebx.b
    ebx.b = arg2[1]
    long double x87_r4_4 = fconvert.t(fconvert.s(float.t(zx.d(arg1[1]) - zx.d(ebx.b)) * x87_r6))
    x87_r4_4 - x87_r6_2
    uint32_t eax_2
    eax_2.w = (x87_r4_4 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_4, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r4_4 == x87_r6_2 ? 1 : 0) << 0xe | 0x2000
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r4_5
    
    if (p_1)
        x87_r4_5 = x87_r4_4 + x87_r4
    else
        x87_r4_5 = x87_r4_4 - x87_r4
    
    ebx.b += sub_685f40(x87_r4_5)
    arg3:1.b = ebx.b
    ebx.b = arg2[2]
    long double x87_r4_8 = fconvert.t(fconvert.s(float.t(zx.d(arg1[2]) - zx.d(ebx.b)) * x87_r6))
    x87_r4_8 - x87_r6_2
    bool p_2 = unimplemented  {test ah, 0x5}
    long double x87_r4_9
    
    if (p_2)
        x87_r4_9 = x87_r4_8 + x87_r4
    else
        x87_r4_9 = x87_r4_8 - x87_r4
    
    ebx.b += sub_685f40(x87_r4_9)
    arg3:2.b = ebx.b
    ebx.b = arg2[3]
    long double x87_r5_5 = fconvert.t(fconvert.s(x87_r6 * float.t(zx.d(arg1[3]) - zx.d(ebx.b))))
    x87_r5_5 - x87_r6_2
    uint32_t eax_6
    eax_6.w = (x87_r5_5 < x87_r6_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_5, x87_r6_2) ? 1 : 0) << 0xa
        | (x87_r5_5 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        ebx.b += sub_685f40(x87_r5_5 + x87_r6_2)
        arg3:3.b = ebx.b
        return arg3
    
    ebx.b += sub_685f40(x87_r6_2 - x87_r5_5)
    arg3:3.b = ebx.b
    return arg3
}

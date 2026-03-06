// 函数名称: sub_4f5010
// 虚拟地址: 0x4f5010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4f5010(float arg1 @ esi, float* arg2 @ edi, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax = arg2[0x2f]
    int32_t eax = arg2[0x2f]
    int32_t var_8 = eax
    uint32_t var_c = eax u>> 0x18
    var_c = fconvert.s(float.t(var_c) * fconvert.t(*(arg1 i+ 8)))
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(var_c)
    x87_r6 - x87_r7_2
    uint32_t eax_1
    eax_1.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_1
    
    if (p)
        x87_r6_1 = x87_r6 + x87_r5
    else
        x87_r6_1 = x87_r6 - x87_r5
    
    var_8:3.b = sub_685f40(x87_r6_1)
    int32_t var_10 = var_8
    uint32_t eax_4 = arg2[0x2e]
    uint32_t var_8_1 = eax_4
    var_c = eax_4 u>> 0x18
    var_c = fconvert.s(float.t(var_c) * fconvert.t(*(arg1 i+ 8)))
    long double x87_r5_4 = fconvert.t(var_c)
    x87_r5_4 - x87_r7_2
    uint32_t eax_5
    eax_5.w = (x87_r5_4 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_4, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r5_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p_1)
        x87_r7_3 = x87_r7_2 + x87_r5
    else
        x87_r7_3 = x87_r7_2 - x87_r5
    
    int32_t var_18 = arg4
    var_8_1:3.b = sub_685f40(x87_r7_3)
    var_c = var_8_1
    int32_t* var_1c = &var_10
    uint32_t* var_20 = &var_c
    return sub_4f4bd0(&var_10, arg3, arg1, arg2, arg3)
}

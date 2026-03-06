// 函数名称: sub_5daa40
// 虚拟地址: 0x5daa40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5daa40(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, float arg5, float arg6, float arg7)
{
    // 第一条实际指令: void* eax_1 = sub_5da6a0(arg1, arg2)
    void* eax_1 = sub_5da6a0(arg1, arg2)
    
    if (eax_1 == 0)
        return 0xffffffff
    
    void* ecx = sub_5da720(eax_1, arg3, arg4)
    
    if (ecx == 0)
        return sub_5da8d0(arg1, arg2, arg3, arg4, 1, fconvert.s(fconvert.t(arg5)), 
            fconvert.s(fconvert.t(arg6)), fconvert.s(fconvert.t(arg7)))
    
    long double x87_r7_3 = fconvert.t(arg5)
    float var_8 = fconvert.s(x87_r7_3 - fconvert.t(*(ecx + 8)))
    float var_c = fconvert.s(fconvert.t(arg6) - fconvert.t(*(ecx + 0xc)))
    long double x87_r5_2 = fconvert.t(var_8)
    long double x87_r4 = float.t(0)
    x87_r4 - x87_r5_2
    void* eax_3
    eax_3.w = (x87_r4 < x87_r5_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r5_2) ? 1 : 0) << 0xa
        | (x87_r4 == x87_r5_2 ? 1 : 0) << 0xe | 0x2000
    long double x87_r4_1 = fconvert.t(arg7)
    bool p = unimplemented  {test ah, 0x44}
    bool p_1
    
    if (not(p))
        long double x87_r3_1 = fconvert.t(var_c)
        x87_r5_2 - x87_r3_1
        eax_3.w = (x87_r5_2 < x87_r3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_2, x87_r3_1) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r3_1 ? 1 : 0) << 0xe | 0x2000
        p_1 = unimplemented  {test ah, 0x44}
    
    long double x87_r6_4
    
    if (p || p_1)
        x87_r6_4 = x87_r4_1
    else
        long double x87_r3_4 = fconvert.t(fconvert.s(x87_r4_1 - fconvert.t(*(ecx + 0x10))))
        x87_r3_4 - x87_r5_2
        eax_3.w = (x87_r3_4 < x87_r5_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_4, x87_r5_2) ? 1 : 0) << 0xa
            | (x87_r3_4 == x87_r5_2 ? 1 : 0) << 0xe | 0x2000
        x87_r6_4 = x87_r4_1
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            return 0
    
    *(ecx + 8) = fconvert.s(x87_r7_3)
    int32_t result = 0
    *(ecx + 0xc) = fconvert.s(x87_r6_4)
    *(ecx + 0x10) = fconvert.s(x87_r5_2)
    
    if (sub_5c7830(0x702, 0xffffffff) == 1)
        float var_30_1 = fconvert.s(fconvert.t(arg5))
        float var_2c_1 = fconvert.s(fconvert.t(arg6))
        int32_t var_48 = 0x702
        float var_28_1 = fconvert.s(fconvert.t(var_8))
        int32_t var_40_1 = arg1
        int32_t var_3c_1 = arg2
        float var_24_1 = fconvert.s(fconvert.t(var_c))
        int32_t var_38_1 = arg3
        int32_t var_34_1 = arg4
        float var_20_1 = fconvert.s(fconvert.t(arg7))
        result.b = sub_5c76a0(&var_48) s> 0
    
    return result
}

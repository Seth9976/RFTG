// 函数名称: sub_558be0
// 虚拟地址: 0x558be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_558be0(float arg1)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    long double x87_r6 = fconvert.t(arg1)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x41}
    
    if (p)
        long double x87_r6_1 = float.t(1)
        x87_r6_1 - x87_r7
        eax.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            return 0
        
        long double x87_r6_2 = float.t(1)
        int32_t eax_3
        int32_t mxcsr
        int16_t x87control
        long double st0_1
        st0_1, eax_3 = sub_68b680(mxcsr, x87control, fconvert.t(fconvert.s(x87_r6_2 / x87_r6_2)))
        long double x87_r7_6 = float.t(0)
        long double x87_r6_3 =
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0_1)) * fconvert.t(-2000.0)))
        x87_r6_3 - x87_r7_6
        eax_3.w = (x87_r6_3 < x87_r7_6 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe | 0x3000
        bool p_2 = unimplemented  {test ah, 0x5}
        long double x87_r7_7
        
        if (p_2)
            x87_r7_7 = x87_r7_6 + fconvert.t(0.5)
        else
            x87_r7_7 = x87_r7_6 - fconvert.t(0.5)
        
        int32_t eax_4 = sub_685f40(x87_r7_7)
        
        if (eax_4 s>= 0xffffd8f0)
            int32_t ecx
            ecx.b = eax_4 s> 0
            return eax_4 & (ecx - 1)
    
    return 0xffffd8f0
}

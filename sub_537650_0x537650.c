// 函数名称: sub_537650
// 虚拟地址: 0x537650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_537650(float arg1, float arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ecx
    int32_t var_10 = ecx
    float var_10_1 = fconvert.s(fconvert.t(arg2))
    long double x87_r7_2 = fconvert.t(2f)
    long double x87_r6 = fconvert.t(fconvert.s(sub_4064d0()))
    x87_r6 - x87_r7_2
    int32_t eax
    eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x41}
    int32_t mxcsr
    int16_t x87control
    
    if (not(p))
        return fconvert.t(fconvert.s(fconvert.t(fconvert.s(sub_686950(mxcsr, x87control, 
            fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1) * fconvert.t(100.0)
                + fconvert.t(0.5))))))) / fconvert.t(100.0)))
    
    long double temp0 = fconvert.t(49f)
    x87_r7_2 - temp0
    eax.w = (x87_r7_2 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp0) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp0 ? 1 : 0) << 0xe
    long double x87_r7_11 = fconvert.t(arg1)
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (p_1)
        return fconvert.t(fconvert.s(sub_686950(mxcsr, x87control, 
            fconvert.d(fconvert.t(fconvert.s(x87_r7_11 + fconvert.t(0.5)))))))
    
    return fconvert.t(fconvert.s(fconvert.t(fconvert.s(sub_686950(mxcsr, x87control, 
        fconvert.d(fconvert.t(fconvert.s(x87_r7_11 * fconvert.t(10.0) + fconvert.t(0.5)))))))
        / fconvert.t(10.0)))
}

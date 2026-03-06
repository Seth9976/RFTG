// 函数名称: sub_537c80
// 虚拟地址: 0x537c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_537c80(char** arg1 @ esi, float arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    long double x87_r7 = fconvert.t(arg2)
    int32_t var_c = 0
    int32_t eax
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, eax, x87control_1 =
        sub_686950(mxcsr, x87control, fconvert.d(fconvert.t(fconvert.s(x87_r7 + fconvert.t(0.5)))))
    double var_20_1
    var_20_1:4.d =
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r7)) - fconvert.t(fconvert.s(st0)))))
    long double st0_1 = sub_4064d0()
    long double temp0 = fconvert.t(9.99999975e-06f)
    st0_1 - temp0
    eax.w = (st0_1 < temp0 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp0) ? 1 : 0) << 0xa
        | (st0_1 == temp0 ? 1 : 0) << 0xe
    long double x87_r7_8 = fconvert.t(arg2)
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        double var_20_2 = fconvert.d(x87_r7_8)
        char const* const var_24 = "%.0f"
        sub_4c4a50(arg1, "%.0f")
        return arg1
    
    long double x87_r7_9 = x87_r7_8 * fconvert.t(10.0)
    int32_t eax_2
    int16_t x87control_2
    long double st0_2
    st0_2, eax_2, x87control_2 =
        sub_686950(mxcsr, x87control_1, fconvert.d(fconvert.t(fconvert.s(x87_r7_9 + fconvert.t(0.5)))))
    double var_20_3
    var_20_3:4.d = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r7_9))
        - fconvert.t(fconvert.s(st0_2)))))
    long double st0_3 = sub_4064d0()
    long double temp1 = fconvert.t(9.99999975e-06f)
    st0_3 - temp1
    eax_2.w = (st0_3 < temp1 ? 1 : 0) << 8 | (is_unordered.t(st0_3, temp1) ? 1 : 0) << 0xa
        | (st0_3 == temp1 ? 1 : 0) << 0xe
    long double x87_r7_17 = fconvert.t(arg2)
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        double var_20_4 = fconvert.d(x87_r7_17)
        char const* const var_24_1 = "%.1f"
        sub_4c4a50(arg1, "%.1f")
        return arg1
    
    long double x87_r7_18 = x87_r7_17 * fconvert.t(100.0)
    int32_t eax_4
    long double st0_4
    st0_4, eax_4 =
        sub_686950(mxcsr, x87control_2, fconvert.d(fconvert.t(fconvert.s(x87_r7_18 + fconvert.t(0.5)))))
    double var_20_5
    var_20_5:4.d = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.d(x87_r7_18))
        - fconvert.t(fconvert.s(st0_4)))))
    long double st0_5 = sub_4064d0()
    long double temp2 = fconvert.t(9.99999975e-06f)
    st0_5 - temp2
    eax_4.w = (st0_5 < temp2 ? 1 : 0) << 8 | (is_unordered.t(st0_5, temp2) ? 1 : 0) << 0xa
        | (st0_5 == temp2 ? 1 : 0) << 0xe
    double var_20_6 = fconvert.d(fconvert.t(arg2))
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        void* const var_24_3 = &data_882e30
        sub_4c4a50(arg1, "%f")
        return arg1
    
    char const* const var_24_2 = "%.2f"
    sub_4c4a50(arg1, "%.2f")
    return arg1
}

// 函数名称: sub_662c80
// 虚拟地址: 0x662c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_662c80(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg4 == 0)
    if (arg4 == 0)
        return 
    
    if (arg2 == 0 || arg3 == 0)
        *arg1 = 0
        return 
    
    int32_t mxcsr
    int16_t x87control
    long double st0_1 = sub_686950(mxcsr, x87control, 
        fconvert.d(float.t(arg2) * float.t(arg3) / float.t(arg4) + fconvert.t(0.5)))
    long double x87_r6_1 = fconvert.t(2147483647.0)
    x87_r6_1 - st0_1
    
    if ((((x87_r6_1 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == st0_1 ? 1 : 0) << 0xe | 0x3800):1.b & 1) != 0)
        return 
    
    fconvert.t(-2147483648.0) - st0_1
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (not(p_1))
        *arg1 = sub_685f40(st0_1)
}

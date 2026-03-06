// 函数名称: sub_662d50
// 虚拟地址: 0x662d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_662d50(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t mxcsr
    int32_t mxcsr
    int16_t x87control
    long double st0 = sub_686950(mxcsr, x87control, 
        fconvert.d(float.t(arg1) * fconvert.t(1.0000000000000001e-05) * float.t(arg2)
            + fconvert.t(0.5)))
    long double x87_r6 = fconvert.t(2147483647.0)
    x87_r6 - st0
    
    if ((((x87_r6 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, st0) ? 1 : 0) << 0xa
            | (x87_r6 == st0 ? 1 : 0) << 0xe | 0x3800):1.b & 1) == 0)
        fconvert.t(-2147483648.0) - st0
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            return sub_685f40(st0) __tailcall
    
    return 0
}

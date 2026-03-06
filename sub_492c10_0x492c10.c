// 函数名称: sub_492c10
// 虚拟地址: 0x492c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_492c10(double* arg1, double* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg2)
    long double x87_r7 = fconvert.t(*arg2)
    long double temp0 = fconvert.t(*arg1)
    x87_r7 - temp0
    int32_t eax
    eax.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    
    if ((eax:1.b & 0x41) == 0)
        return 1
    
    long double x87_r7_1 = fconvert.t(*arg2)
    long double temp1 = fconvert.t(*arg1)
    x87_r7_1 - temp1
    eax.w = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return 0
    
    return eax | 0xffffffff
}

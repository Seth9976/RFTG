// 函数名称: sub_5b7999
// 虚拟地址: 0x5b7999
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b7999(double* arg1)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    long double temp0 = fconvert.t(*arg1)
    x87_r7 - temp0
    double* eax
    eax.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x41}
    
    if (p)
        return 0
    
    return 1
}

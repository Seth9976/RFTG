// 函数名称: sub_48bbd0
// 虚拟地址: 0x48bbd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_48bbd0(void* arg1, void* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*(arg1 + 8))
    long double x87_r7 = fconvert.t(*(arg1 + 8))
    long double temp0 = fconvert.t(*(arg2 + 8))
    x87_r7 - temp0
    void* eax
    eax.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return eax | 0xffffffff
    
    return 1
}

// 函数名称: sub_493a60
// 虚拟地址: 0x493a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_493a60(void* arg1, void* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*(arg2 + 0x18))
    long double x87_r7 = fconvert.t(*(arg2 + 0x18))
    long double temp0 = fconvert.t(*(arg1 + 0x18))
    x87_r7 - temp0
    void* eax
    eax.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return 1
    
    return eax | 0xffffffff
}

// 函数名称: sub_5a10d0
// 虚拟地址: 0x5a10d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5a10d0(float arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7_2 = float.t(1)
    long double x87_r6 = fconvert.t(fconvert.s(sub_4064d0(fconvert.s(fconvert.t(arg1)))))
    x87_r6 - x87_r7_2
    int32_t eax
    eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x41}
    
    if (p)
        return float.t(0)
    
    return fconvert.t(fconvert.s(float.t(1) - x87_r7_2))
}

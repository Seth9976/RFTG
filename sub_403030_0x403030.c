// 函数名称: sub_403030
// 虚拟地址: 0x403030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_403030(float arg1)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    long double x87_r6 = fconvert.t(arg1)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return sub_685f40(x87_r7 + fconvert.t(0.5)) __tailcall
    
    return sub_685f40(x87_r7 - fconvert.t(0.5)) __tailcall
}

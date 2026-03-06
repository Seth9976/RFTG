// 函数名称: __CIsin_pentium4
// 虚拟地址: 0x68be10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t__CIsin_pentium4(long double arg1 @ st0)
{
    // 第一条实际指令: double var_10 = fconvert.d(arg1)
    double var_10 = fconvert.d(arg1)
    uint64_t xmm5[0x2]
    int64_t xmm6
    return sub_68be2e(zx.o(var_10), xmm5, xmm6, var_10)
}

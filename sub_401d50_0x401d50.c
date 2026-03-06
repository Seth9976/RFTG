// 函数名称: sub_401d50
// 虚拟地址: 0x401d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_401d50(float arg1, float arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r6 = fconvert.t(arg1)
    return fconvert.t(fconvert.s((fconvert.t(arg2) - x87_r6)
        * fconvert.t(fconvert.s(fconvert.t((sub_4c95c0() & 0x7fffff) | 0x3f800000) - fconvert.t(1.0)))
        + x87_r6))
}

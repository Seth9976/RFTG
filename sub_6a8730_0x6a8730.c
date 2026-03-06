// 函数名称: sub_6a8730
// 虚拟地址: 0x6a8730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_6a8730()
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(160f)
    long double x87_r7 = fconvert.t(160f)
    float result = fconvert.s(x87_r7)
    data_307ccb4 = result
    data_307ccb8 = fconvert.s(x87_r7)
    return result
}

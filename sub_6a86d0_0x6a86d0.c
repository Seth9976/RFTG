// 函数名称: sub_6a86d0
// 虚拟地址: 0x6a86d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_6a86d0()
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(128f)
    long double x87_r7 = fconvert.t(128f)
    float result = fconvert.s(x87_r7)
    data_307cca4 = result
    data_307cca8 = fconvert.s(x87_r7)
    return result
}

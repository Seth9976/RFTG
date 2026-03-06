// 函数名称: sub_527f70
// 虚拟地址: 0x527f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_527f70(float arg1, float arg2)
{
    // 第一条实际指令: long double x87_r7_4 = fconvert.t(data_30d950c)
    long double x87_r7_4 = fconvert.t(data_30d950c)
    arg2 = fconvert.s(x87_r7_4 * fconvert.t(fconvert.s(fconvert.t(arg2) - fconvert.t(data_30d9514))))
    return fconvert.s(x87_r7_4 * fconvert.t(fconvert.s(fconvert.t(arg1) - fconvert.t(data_30d9510))))
}

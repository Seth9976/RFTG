// 函数名称: sub_4f4130
// 虚拟地址: 0x4f4130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4f4130(float arg1)
{
    // 第一条实际指令: if ((data_3160084.b & 1) == 0)
    if ((data_3160084.b & 1) == 0)
        long double x87_r7_1 = fconvert.t(data_be1abc)
        data_3160084 |= 1
        data_316007c = fconvert.s(x87_r7_1 / fconvert.t(360.0))
    
    return fconvert.t(fconvert.s(fconvert.t(data_316007c) * fconvert.t(arg1)))
}

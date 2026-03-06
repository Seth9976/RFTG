// 函数名称: sub_64fcb0
// 虚拟地址: 0x64fcb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_64fcb0(int32_t arg1)
{
    // 第一条实际指令: long double x87_r7 = float.t(arg1 & 0x1fffff)
    long double x87_r7 = float.t(arg1 & 0x1fffff)
    
    if (arg1 s< 0)
        x87_r7 = fneg(x87_r7)
    
    int32_t edx
    return fconvert.t(fconvert.s(sub_5ab269((arg1 s>> 0x15 & 0x3ff) - 0x314, edx, arg1, 
        fconvert.d(x87_r7), (arg1 s>> 0x15 & 0x3ff) - 0x314)))
}

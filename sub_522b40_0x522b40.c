// 函数名称: sub_522b40
// 虚拟地址: 0x522b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_522b40(char arg1)
{
    // 第一条实际指令: int32_t eax_1 = sub_5a8426(sx.d(arg1))
    int32_t eax_1 = sub_5a8426(sx.d(arg1))
    int32_t eax_2 = neg.d(eax_1)
    return neg.d(sbb.d(eax_2, eax_2, eax_1 != 0))
}

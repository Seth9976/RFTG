// 函数名称: sub_5a88ae
// 虚拟地址: 0x5a88ae
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a88ae()
{
    // 第一条实际指令: uint32_t* eax_5 = __getptd()
    uint32_t* eax_5 = __getptd()
    int32_t eax_2 = eax_5[5] * 0x343fd + 0x269ec3
    eax_5[5] = eax_2
    return eax_2 u>> 0x10 & 0x7fff
}

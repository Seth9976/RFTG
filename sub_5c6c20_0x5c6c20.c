// 函数名称: sub_5c6c20
// 虚拟地址: 0x5c6c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c6c20()
{
    // 第一条实际指令: if (data_bed350 == 0 && sub_5c69f0(0x20) != 0)
    if (data_bed350 == 0 && sub_5c69f0(0x20) != 0)
        int32_t eax_2 = sub_5d0ba0()
        int32_t eax_3 = neg.d(eax_2)
        return sbb.d(eax_3, eax_3, eax_2 != 0) + 1
    
    return 0
}

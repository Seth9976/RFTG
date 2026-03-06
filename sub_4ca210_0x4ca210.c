// 函数名称: sub_4ca210
// 虚拟地址: 0x4ca210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4ca210(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x24) == 0)
    if (*(arg1 + 0x24) == 0)
        return 
    
    sub_4ccbc0(arg1 + 0x24)
    void* esi_2 = (*(arg1 + 0x28) << 2) + 4
    sub_4f4430(*(arg1 + 0x24), sub_4f4380(esi_2), esi_2)
    *(arg1 + 0x24) = 0
}

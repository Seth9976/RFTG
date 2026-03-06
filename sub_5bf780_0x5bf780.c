// 函数名称: sub_5bf780
// 虚拟地址: 0x5bf780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5bf780(char* arg1)
{
    // 第一条实际指令: if (arg1[5] == 0 || (*arg1 & 2) != 0)
    if (arg1[5] == 0 || (*arg1 & 2) != 0)
        sub_5bf1f0(*(arg1 + 0x30))
        *(arg1 + 0x30) = 0
    
    if (arg1[5] == 0 || (*arg1 & 8) != 0)
        sub_5c1400(*(arg1 + 0x34))
        *(arg1 + 0x34) = 0
    
    if (arg1[5] == 0 || (*arg1 & 4) != 0)
        sub_5bf1f0(*(arg1 + 0x38))
        *(arg1 + 0x38) = 0
}

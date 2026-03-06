// 函数名称: sub_5c0c50
// 虚拟地址: 0x5c0c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c0c50(char* arg1)
{
    // 第一条实际指令: if (*arg1 != 0 && *(arg1 + 0x10) == *(arg1 + 8) && *(arg1 + 0x14) == *(arg1 + 0xc))
    if (*arg1 != 0 && *(arg1 + 0x10) == *(arg1 + 8) && *(arg1 + 0x14) == *(arg1 + 0xc))
        return 1
    
    return 0
}

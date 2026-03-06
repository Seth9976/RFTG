// 函数名称: sub_5d6e30
// 虚拟地址: 0x5d6e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d6e30(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*arg2 == 0x200 && arg2[3].b == 6 && arg2[2] == *(arg1 + 8))
    if (*arg2 == 0x200 && arg2[3].b == 6 && arg2[2] == *(arg1 + 8))
        return 0
    
    return 1
}

// 函数名称: sub_660f40
// 虚拟地址: 0x660f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_660f40(int32_t arg1, void* arg2, void** arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg2 == 0 || (*(arg2 + 8) & 2) == 0 || arg3 == 0)
    if (arg1 == 0 || arg2 == 0 || (*(arg2 + 8) & 2) == 0 || arg3 == 0)
        return 0
    
    *arg3 = arg2 + 0x44
    return 2
}

// 函数名称: sub_650ae0
// 虚拟地址: 0x650ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_650ae0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0xc) == 0)
    if (*(arg1 + 0xc) == 0)
        return 0xffffffff
    
    return *(*(arg1 + 0x14) + (arg2 << 2))
}

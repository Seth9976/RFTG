// 函数名称: sub_64aea0
// 虚拟地址: 0x64aea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64aea0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0 && *(arg1 + 0x18) + arg2 s> *(arg1 + 0x14))
    if (arg2 != 0 && *(arg1 + 0x18) + arg2 s> *(arg1 + 0x14))
        return 0xffffff7d
    
    *(arg1 + 0x18) += arg2
    return 0
}

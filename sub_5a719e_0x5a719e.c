// 函数名称: sub_5a719e
// 虚拟地址: 0x5a719e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a719e(void* arg1 @ ebp)
{
    // 第一条实际指令: *(arg1 - 0x1c) = *(arg1 - 0x14)
    *(arg1 - 0x1c) = *(arg1 - 0x14)
    *(arg1 - 0x20) = **(arg1 - 0x1c)
    
    if (**(arg1 - 0x20) == 0xe06d7363)
        terminate()
        noreturn
    
    *(arg1 - 0x24) = 0
    return *(arg1 - 0x24)
}

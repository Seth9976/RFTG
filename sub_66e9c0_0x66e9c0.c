// 函数名称: sub_66e9c0
// 虚拟地址: 0x66e9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_66e9c0(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *(arg1 + 0x138) == 0)
    if (arg1 == 0 || *(arg1 + 0x138) == 0)
        return 1
    
    *(arg1 + 0x74) |= 2
    return 7
}

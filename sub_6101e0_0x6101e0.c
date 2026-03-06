// 函数名称: sub_6101e0
// 虚拟地址: 0x6101e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6101e0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0x20
    
    if ((arg1.b & 1) == 0)
        return sub_6101e0(arg1 u>> 1) + 1
    
    return 0
}

// 函数名称: sub_607be0
// 虚拟地址: 0x607be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_607be0(void* arg1)
{
    // 第一条实际指令: void* eax_1 = **(arg1 + 0x134)
    void* eax_1 = **(arg1 + 0x134)
    
    if (eax_1 != 0)
        sub_5d5f90(eax_1, arg1 + 0xd4)
    
    return 0
}

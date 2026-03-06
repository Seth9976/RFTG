// 函数名称: sub_64b8b0
// 虚拟地址: 0x64b8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64b8b0(void* arg1)
{
    // 第一条实际指令: void* eax_1 = *(*(arg1 + 0x40) + 0x68)
    void* eax_1 = *(*(arg1 + 0x40) + 0x68)
    
    if (eax_1 != 0xffffffb0 && *(eax_1 + 0x50) != 0)
        return 1
    
    return 0
}

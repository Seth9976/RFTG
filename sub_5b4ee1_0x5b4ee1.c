// 函数名称: sub_5b4ee1
// 虚拟地址: 0x5b4ee1
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b4ee1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t eax_1 = ***(arg1 - 0x14)
    int32_t eax_1 = ***(arg1 - 0x14)
    
    if (eax_1 != 0xc0000005 && eax_1 != 0xc000001d)
        return 0
    
    return 1
}

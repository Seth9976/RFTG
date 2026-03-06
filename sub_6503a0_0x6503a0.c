// 函数名称: sub_6503a0
// 虚拟地址: 0x6503a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6503a0(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x24) == 0)
    if (*(arg1 + 0x24) == 0)
        return 
    
    int32_t eax_1 = *(arg1 + 0x20)
    
    if (eax_1 != 0)
        __free_base(eax_1)
    
    int32_t eax_2 = *(arg1 + 8)
    
    if (eax_2 != 0)
        __free_base(eax_2)
    
    __builtin_memset(arg1, 0, 0x28)
    __free_base(arg1)
}

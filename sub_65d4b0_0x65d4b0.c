// 函数名称: sub_65d4b0
// 虚拟地址: 0x65d4b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_65d4b0(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t* eax_1 = *(arg1 + 8)
    
    if (eax_1 != 0)
        if (*eax_1 != 0)
            __free_base(*eax_1)
        
        void* eax_3 = *(arg1 + 8)
        
        if (*(eax_3 + 4) != 0)
            __free_base(*(eax_3 + 4))
        
        __free_base(*(arg1 + 8))
    
    __builtin_memset(arg1, 0, 0x20)
    __free_base(arg1)
}

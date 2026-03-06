// 函数名称: sub_659bc0
// 虚拟地址: 0x659bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_659bc0(int128_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t i = 0
    
    if (*(arg1 + 4) s> 0)
        do
            int32_t eax_1 = *(arg1 + 0x14)
            
            if (*(eax_1 + (i << 2)) != 0)
                __free_base(*(eax_1 + (i << 2)))
            
            i += 1
        while (i s< *(arg1 + 4))
    
    __free_base(*(arg1 + 0x14))
    int32_t i_1 = 0
    
    if (*(arg1 + 0x18) s> 0)
        do
            __free_base(*(*(arg1 + 0x1c) + (i_1 << 2)))
            i_1 += 1
        while (i_1 s< *(arg1 + 0x18))
    
    __free_base(*(arg1 + 0x1c))
    sub_5abfc0(arg1, 0, 0x2c)
    __free_base(arg1)
}

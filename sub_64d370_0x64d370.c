// 函数名称: sub_64d370
// 虚拟地址: 0x64d370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_64d370(int128_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    int32_t eax_1 = arg1[1].d
    
    if (eax_1 != 0)
        __free_base(eax_1)
    
    int32_t eax_2 = *(arg1 + 0x14)
    
    if (eax_2 != 0)
        __free_base(eax_2)
    
    int32_t eax_3 = *(arg1 + 0x18)
    
    if (eax_3 != 0)
        __free_base(eax_3)
    
    if (*(arg1 + 8) != 0)
        for (int32_t* i = nullptr; i s< 0x44; i = &i[1])
            for (int32_t j = 0; j s< 0x20; j += 4)
                __free_base(*(*(i + *(arg1 + 8)) + j))
            
            __free_base(*(i + *(arg1 + 8)))
        
        __free_base(*(arg1 + 8))
    
    if (*(arg1 + 0xc) != 0)
        for (int32_t i_1 = 0; i_1 s< 0xc; i_1 += 4)
            __free_base(*(*(arg1 + 0xc) + i_1))
        
        __free_base(*(arg1 + 0xc))
    
    sub_5abfc0(arg1, 0, 0x34)
}

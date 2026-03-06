// 函数名称: sub_5359b0
// 虚拟地址: 0x5359b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5359b0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (*(arg1 + 8) s> 0)
        int32_t ebx_1 = 0
        
        do
            sub_4fecf0(*(arg1 + 0xc) + ebx_1, data_30d7378, nullptr)
            i += 1
            ebx_1 += 0xd0
        while (i s< *(arg1 + 8))
    
    if (*(arg1 + 8) s<= 0)
        return 
    
    int32_t eax_2 = *(arg1 + 0xc)
    
    if (eax_2 != 0)
        _aligned_free_base(eax_2)
    
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
}

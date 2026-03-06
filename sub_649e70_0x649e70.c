// 函数名称: sub_649e70
// 虚拟地址: 0x649e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_649e70(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = *(arg1 + 4)
    void* ebx = *(arg1 + 4)
    void* edi = *(arg1 + 0x68)
    int32_t eax = *(edi + 0x40)
    
    if (eax != 0)
        __free_base(eax)
    
    int32_t eax_1 = *(edi + 0x44)
    *(edi + 0x40) = 0
    
    if (eax_1 != 0)
        __free_base(eax_1)
    
    int32_t eax_2 = *(edi + 0x48)
    *(edi + 0x44) = 0
    
    if (eax_2 != 0)
        __free_base(eax_2)
    
    *(edi + 0x48) = 0
    int32_t eax_3 = *(arg1 + 0x14)
    
    if (eax_3 + arg2 s>= *(arg1 + 0x10))
        int32_t i = 0
        *(arg1 + 0x10) = eax_3 + (arg2 << 1)
        
        if (*(ebx + 4) s> 0)
            do
                *(*(arg1 + 8) + (i << 2)) = _realloc(*(*(arg1 + 8) + (i << 2)), *(arg1 + 0x10) * 4)
                i += 1
            while (i s< *(ebx + 4))
    
    int32_t i_1 = 0
    
    if (*(ebx + 4) s> 0)
        do
            *(*(arg1 + 0xc) + (i_1 << 2)) = *(*(arg1 + 8) + (i_1 << 2)) + (*(arg1 + 0x14) << 2)
            i_1 += 1
        while (i_1 s< *(ebx + 4))
    
    return *(arg1 + 0xc)
}

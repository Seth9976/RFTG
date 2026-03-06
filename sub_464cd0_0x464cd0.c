// 函数名称: sub_464cd0
// 虚拟地址: 0x464cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_464cd0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* entry_ebx
    int32_t* edi = &entry_ebx[1]
    
    if (edi == arg1)
        return 
    
    void* eax_1 = 4 - entry_ebx
    void* var_8_1 = eax_1
    
    while (true)
        int32_t esi_1 = *edi
        int32_t* edx_1 = edi
        
        if (esi_1 s>= *entry_ebx)
            int32_t ecx_4 = edi[-1]
            int128_t* eax = &edi[-1]
            
            while (esi_1 s< ecx_4)
                *edx_1 = ecx_4
                ecx_4 = *(eax - 4)
                edx_1 = eax
                eax -= 4
            
            *edx_1 = esi_1
        else
            int32_t eax_5 = ((eax_1 + edi - 4) s>> 2) * 4
            sub_5a6c10(edi - eax_5 + 4, entry_ebx, eax_5)
            *entry_ebx = esi_1
        
        edi = &edi[1]
        
        if (edi == arg1)
            break
        
        eax_1 = var_8_1
}

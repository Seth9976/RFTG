// 函数名称: sub_67ba40
// 虚拟地址: 0x67ba40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_67ba40()
{
    // 第一条实际指令: int32_t i_1 = 0
    int32_t i_1 = 0
    int32_t* entry_ebx
    
    if (entry_ebx[0x52] s<= 0)
        return 
    
    void* var_8_1 = &entry_ebx[0x53]
    int32_t i
    
    do
        void* eax_1 = *var_8_1
        
        if (*(eax_1 + 0x4c) == 0)
            int32_t esi_1 = *(eax_1 + 0x10)
            
            if (esi_1 u> 3 || entry_ebx[esi_1 + 0x29] == 0)
                *(*entry_ebx + 0x14) = 0x34
                *(*entry_ebx + 0x18) = esi_1
                (**entry_ebx)(entry_ebx)
            
            int32_t eax_4 = (*entry_ebx[1])(entry_ebx, 1, 0x84)
            __builtin_memcpy(eax_4, entry_ebx[esi_1 + 0x29], 0x84)
            *(eax_1 + 0x4c) = eax_4
        
        var_8_1 += 4
        i = i_1 + 1
        i_1 = i
    while (i s< entry_ebx[0x52])
}

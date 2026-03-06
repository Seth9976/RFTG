// 函数名称: sub_4d0ae0
// 虚拟地址: 0x4d0ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d0ae0()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t ecx = entry_ebx[1]
    uint32_t eax
    
    if (ecx != 0)
        void* edx_1 = data_27e7bb8
        eax = zx.d(ecx.w)
        
        if (eax u< *(edx_1 + 4))
            eax = eax * 0x4c + *edx_1
            
            if (*(eax + 0x48) == ecx)
                sub_4c6a10(eax)
        
        entry_ebx[1] = 0
    
    while (entry_ebx[0x148] != 0)
        void var_18
        int32_t esi_1 = *sub_4d2920(&entry_ebx[0x146], &var_18)
        void var_14
        sub_5041e0(&var_14)
        
        if (esi_1 != 0)
            void* ecx_1 = data_27e7bb8
            eax = zx.d(esi_1.w)
            
            if (eax u< *(ecx_1 + 4))
                eax = eax * 0x4c + *ecx_1
                
                if (*(eax + 0x48) == esi_1)
                    sub_4c6a10(eax)
    
    *entry_ebx = 1
}

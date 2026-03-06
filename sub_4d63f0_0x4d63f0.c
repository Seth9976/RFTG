// 函数名称: sub_4d63f0
// 虚拟地址: 0x4d63f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d63f0()
{
    // 第一条实际指令: int32_t* ecx = data_27e7fd8
    int32_t* ecx = data_27e7fd8
    
    if (ecx == 0)
        return 
    
    void* esi_1 = nullptr
    int32_t* edx_1
    
    while (true)
        edx_1 = data_27e7fd4
        
        if (esi_1 != 0)
            esi_1 += 0x60
        else
            esi_1 = *edx_1
        
        int32_t eax_4 = edx_1[1] * 0x60 + *edx_1
        
        if (esi_1 u>= eax_4)
            break
        
        while ((*(esi_1 + 0x5c) & 0xffff0000) == 0)
            esi_1 += 0x60
            
            if (esi_1 u>= eax_4)
                goto label_4d642f
        
        (*(*ecx + 0x24))(esi_1)
        ecx = data_27e7fd8
        *(esi_1 + 0x56) = 0
    
    label_4d642f:
    void* esi_2 = nullptr
    
    while (true)
        void* ecx_1
        
        if (esi_2 != 0)
            ecx_1 = esi_2 + 0x60
        else
            ecx_1 = *edx_1
        
        int32_t eax = edx_1[1] * 0x60 + *edx_1
        
        if (ecx_1 u>= eax)
            break
        
        while ((*(ecx_1 + 0x5c) & 0xffff0000) == 0)
            ecx_1 += 0x60
            
            if (ecx_1 u>= eax)
                return 
        
        esi_2 = ecx_1
        sub_4d61b0(ecx_1)
        edx_1 = data_27e7fd4
}

// 函数名称: sub_649c30
// 虚拟地址: 0x649c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_649c30(int128_t* arg1)
{
    // 第一条实际指令: int128_t* ebx = arg1
    int128_t* ebx = arg1
    
    if (ebx == 0)
        return 
    
    void* ecx_1 = *(ebx + 4)
    void* var_c_1 = ecx_1
    void* const edi_1
    
    if (ecx_1 == 0)
        edi_1 = nullptr
    else
        edi_1 = *(ecx_1 + 0x1c)
    
    int32_t* esi_1 = *(ebx + 0x68)
    
    if (esi_1 != 0)
        int128_t* eax_1 = *esi_1
        
        if (eax_1 != 0)
            sub_6578f0(eax_1)
            __free_base(*esi_1)
        
        int32_t* eax_3 = esi_1[3]
        
        if (eax_3 != 0)
            sub_656fe0(*eax_3)
            __free_base(*esi_1[3])
            __free_base(esi_1[3])
        
        int32_t* eax_5 = esi_1[4]
        
        if (eax_5 != 0)
            sub_656fe0(*eax_5)
            __free_base(*esi_1[4])
            __free_base(esi_1[4])
        
        if (esi_1[0xc] != 0)
            if (edi_1 != 0)
                int32_t i = 0
                
                if (*(edi_1 + 0x10) s> 0)
                    do
                        (*((&data_825e6c)[*(edi_1 + (i << 2) + 0x320)] + 0x10))(
                            *(esi_1[0xc] + (i << 2)))
                        i += 1
                    while (i s< *(edi_1 + 0x10))
                
                ebx = arg1
            
            __free_base(esi_1[0xc])
        
        if (esi_1[0xd] != 0)
            if (edi_1 != 0)
                int32_t i_1 = 0
                
                if (*(edi_1 + 0x14) s> 0)
                    do
                        (*((&data_825e74)[*(edi_1 + (i_1 << 2) + 0x520)] + 0x10))(
                            *(esi_1[0xd] + (i_1 << 2)))
                        i_1 += 1
                    while (i_1 s< *(edi_1 + 0x14))
                
                ebx = arg1
            
            __free_base(esi_1[0xd])
        
        if (esi_1[0xe] != 0)
            if (edi_1 != 0)
                int32_t i_2 = 0
                
                if (*(edi_1 + 0x1c) s> 0)
                    int32_t var_8_1 = 0
                    
                    do
                        sub_64d370(esi_1[0xe] + var_8_1)
                        var_8_1 += 0x34
                        i_2 += 1
                    while (i_2 s< *(edi_1 + 0x1c))
                
                ebx = arg1
            
            __free_base(esi_1[0xe])
        
        int32_t eax_13 = esi_1[0xf]
        
        if (eax_13 != 0)
            sub_64be30(eax_13)
        
        sub_64b890(&esi_1[0x14])
        sub_656640(&esi_1[5])
        sub_656640(&esi_1[8])
        ecx_1 = var_c_1
    
    if (*(ebx + 8) != 0)
        if (ecx_1 != 0)
            int32_t i_3 = 0
            
            if (*(ecx_1 + 4) s> 0)
                do
                    int32_t edx_9 = *(ebx + 8)
                    
                    if (*(edx_9 + (i_3 << 2)) != 0)
                        __free_base(*(edx_9 + (i_3 << 2)))
                        ecx_1 = var_c_1
                    
                    i_3 += 1
                while (i_3 s< *(ecx_1 + 4))
        
        __free_base(*(ebx + 8))
        int32_t eax_17 = *(ebx + 0xc)
        
        if (eax_17 != 0)
            __free_base(eax_17)
    
    if (esi_1 != 0)
        int32_t eax_18 = esi_1[0x10]
        
        if (eax_18 != 0)
            __free_base(eax_18)
        
        int32_t eax_19 = esi_1[0x11]
        
        if (eax_19 != 0)
            __free_base(eax_19)
        
        int32_t eax_20 = esi_1[0x12]
        
        if (eax_20 != 0)
            __free_base(eax_20)
        
        __free_base(esi_1)
    
    sub_5abfc0(ebx, 0, 0x70)
}

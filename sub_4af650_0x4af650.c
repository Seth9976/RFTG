// 函数名称: sub_4af650
// 虚拟地址: 0x4af650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4af650()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    void* edx = &entry_ebx[8]
    void var_c4
    __builtin_memcpy(&var_c4, edx, 0xb4)
    int32_t i = 0
    
    if (sx.d(entry_ebx[0x116].b) - 1 s> 0)
        do
            __builtin_memcpy(edx, edx + 0xb4, 0xb4)
            i += 1
            edx += 0xb4
        while (i s< sx.d(entry_ebx[0x116].b) - 1)
    
    int32_t i_2 = i * 0xb4
    __builtin_memcpy(i_2 + entry_ebx + 0x20, &var_c4, 0xb4)
    
    if (*entry_ebx != 0)
        void* eax = entry_ebx[1]
        int32_t edx_1 = *(eax + 0x1ed8)
        int32_t eax_1 = *(eax + 0x1ec0)
        void var_5e4
        __builtin_memcpy(&var_5e4, entry_ebx[1], 0x520)
        int32_t i_1 = 0
        
        if (sx.d(entry_ebx[0x116].b) - 1 s> 0)
            int32_t var_8_1 = 0
            int32_t* eax_2 = 0x1ed8
            
            do
                int32_t edi_5 = var_8_1 + entry_ebx[1]
                var_8_1 += 0x520
                __builtin_memcpy(edi_5, edi_5 + 0x520, 0x520)
                int32_t ecx_7 = entry_ebx[1]
                *(eax_2 + ecx_7) = *(eax_2 + ecx_7 + 4)
                int32_t ecx_8 = entry_ebx[1]
                *(eax_2 + ecx_8 - 0x18) = *(eax_2 + ecx_8 - 0x14)
                i_1 += 1
                eax_2 = &eax_2[1]
            while (i_1 s< sx.d(entry_ebx[0x116].b) - 1)
        
        __builtin_memcpy(i_1 * 0x520 + entry_ebx[1], &var_5e4, 0x520)
        *(entry_ebx[1] + (i_1 << 2) + 0x1ed8) = edx_1
        i_2 = entry_ebx[1]
        *(i_2 + (i_1 << 2) + 0x1ec0) = eax_1
    
    int32_t i_4 = 0
    
    if (0 s< entry_ebx[0x118].w)
        void* edx_2 = &entry_ebx[0x119]
        
        do
            int16_t ecx_13 = *(edx_2 + 4)
            uint16_t ecx_14 = ecx_13 & 0x3f
            uint16_t edi_3 = ecx_14 u>> 1
            *(edx_2 + 4) = edi_3
            *(edx_2 + 4) = (ecx_14 & 1) << (entry_ebx[0x116].b - 1) | edi_3 | (ecx_13 & 0xffc0)
            int16_t eax_5
            eax_5.b = *edx_2
            
            if (eax_5.b != 0xff)
                char temp0_1 = eax_5.b
                eax_5.b -= 1
                *edx_2 = eax_5.b
                
                if (temp0_1 - 1 s< 0)
                    eax_5.b = entry_ebx[0x116].b
                    eax_5.b -= 1
                    *edx_2 = eax_5.b
            
            i_2 = i_4 + 1
            edx_2 += 0x14
            i_4 = i_2
        while (i_2 s< sx.d(entry_ebx[0x118].w))
    
    int32_t i_3 = 0
    
    if (entry_ebx[0x116].b s> 0)
        void* edi_9 = &entry_ebx[0xa]
        
        do
            i_2 = (*(*edi_9 + 4))(entry_ebx, i_3)
            i_3 += 1
            edi_9 += 0xb4
        while (i_3 s< sx.d(entry_ebx[0x116].b))
    
    return i_2
}

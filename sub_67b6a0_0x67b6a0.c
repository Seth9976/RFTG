// 函数名称: sub_67b6a0
// 虚拟地址: 0x67b6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67b6a0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: if (arg1[8] s> 0xffdc || arg1[7] s> 0xffdc)
    if (arg1[8] s> 0xffdc || arg1[7] s> 0xffdc)
        *(*arg1 + 0x14) = 0x29
        *(*arg1 + 0x18) = 0xffdc
        (**arg1)(arg1)
    
    if (arg1[0x35] != 8)
        *(*arg1 + 0x14) = 0xf
        *(*arg1 + 0x18) = arg1[0x35]
        (**arg1)(arg1)
    
    if (arg1[9] s> 0xa)
        *(*arg1 + 0x14) = 0x1a
        *(*arg1 + 0x18) = arg1[9]
        *(*arg1 + 0x1c) = 0xa
        (**arg1)(arg1)
    
    int32_t i = 0
    arg1[0x4d] = 1
    arg1[0x4e] = 1
    
    if (arg1[9] s> 0)
        void* edi_1 = arg1[0x36] + 0xc
        
        do
            int32_t eax_6 = *(edi_1 - 4)
            int32_t eax_7
            
            if (eax_6 s> 0 && eax_6 s<= 4)
                eax_7 = *edi_1
            
            if (eax_6 s<= 0 || eax_6 s> 4 || eax_7 s<= 0 || eax_7 s> 4)
                *(*arg1 + 0x14) = 0x12
                (**arg1)(arg1)
            
            int32_t eax_9 = arg1[0x4d]
            int32_t ecx_8 = *(edi_1 - 4)
            
            if (eax_9 s<= ecx_8)
                eax_9 = ecx_8
            
            arg1[0x4d] = eax_9
            int32_t eax_10 = arg1[0x4e]
            int32_t ecx_9 = *edi_1
            
            if (eax_10 s<= ecx_9)
                eax_10 = ecx_9
            
            i += 1
            arg1[0x4e] = eax_10
            edi_1 += 0x54
        while (i s< arg1[9])
    
    void* eax_11 = arg1[0x36]
    arg1[0x4f] = 8
    
    if (arg1[9] s> 0)
        void* edi_2 = eax_11 + 0x1c
        int32_t i_1 = 0
        
        do
            int32_t eax_12 = *(edi_2 - 0x14)
            *(edi_2 + 8) = 8
            int32_t eax_14 = sub_67d170(eax_12 * arg1[7], arg1[0x4d] * 8)
            int32_t edx_11 = *(edi_2 - 0x10)
            *edi_2 = eax_14
            int32_t eax_15 = sub_67d170(edx_11 * arg1[8], arg1[0x4e] * 8)
            int32_t ecx_14 = *(edi_2 - 0x14)
            *(edi_2 + 4) = eax_15
            *(edi_2 + 0xc) = sub_67d170(ecx_14 * arg1[7], arg1[0x4d])
            *(edi_2 + 0x10) = sub_67d170(*(edi_2 - 0x10) * arg1[8], arg1[0x4e])
            *(edi_2 + 0x14) = 1
            *(edi_2 + 0x30) = 0
            i_1 += 1
            edi_2 += 0x54
        while (i_1 s< arg1[9])
    
    arg1[0x50] = sub_67d170(arg1[8], arg1[0x4e] * 8)
    int32_t result = arg1[0x52]
    
    if (result s>= arg1[9] && arg1[0x37] == 0)
        *(arg1[0x6d] + 0x10) = 0
        return result
    
    *(arg1[0x6d] + 0x10) = 1
    return result
}

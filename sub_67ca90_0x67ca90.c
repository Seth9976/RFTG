// 函数名称: sub_67ca90
// 虚拟地址: 0x67ca90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67ca90(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = arg1
    
    if (esi[5] != 0xca)
        *(*esi + 0x14) = 0x14
        *(*esi + 0x18) = esi[5]
        (**esi)(esi)
    
    int32_t eax_3 = esi[0xc]
    int32_t ecx_3 = esi[0xd]
    int32_t eax_6
    
    if (eax_3 << 3 u<= ecx_3)
        int32_t eax_5 = sub_67d170(esi[7], 8)
        int32_t ecx_4 = esi[8]
        esi[0x1c] = eax_5
        eax_6 = sub_67d170(ecx_4, 8)
        esi[0x4f] = 1
    else if (eax_3 << 2 u<= ecx_3)
        int32_t eax_8 = sub_67d170(esi[7], 4)
        int32_t ecx_5 = esi[8]
        esi[0x1c] = eax_8
        eax_6 = sub_67d170(ecx_5, 4)
        esi[0x4f] = 2
    else if (eax_3 * 2 u> ecx_3)
        eax_6 = esi[8]
        esi[0x1c] = esi[7]
        esi[0x4f] = 8
    else
        int32_t eax_10 = sub_67d170(esi[7], 2)
        int32_t ecx_6 = esi[8]
        esi[0x1c] = eax_10
        eax_6 = sub_67d170(ecx_6, 2)
        esi[0x4f] = 4
    
    bool cond:1 = esi[9] s<= 0
    void* ecx_7 = esi[0x36]
    esi[0x1d] = eax_6
    arg1 = nullptr
    
    if (not(cond:1))
        int32_t* ecx_8 = ecx_7 + 0xc
        void* i
        
        do
            int32_t edx_6 = esi[0x4f]
            int32_t eax_11 = edx_6
            
            if (eax_11 s< 8)
                int32_t j = esi[0x4d] * edx_6
                int32_t j_1 = j
                
                for (; ecx_8[-1] * eax_11 * 2 s<= j; j = j_1)
                    if (*ecx_8 * eax_11 * 2 s> esi[0x4e] * edx_6)
                        break
                    
                    eax_11 *= 2
                    
                    if (eax_11 s>= 8)
                        break
            
            ecx_8[6] = eax_11
            i = arg1 + 1
            ecx_8 = &ecx_8[0x15]
            arg1 = i
        while (i s< esi[9])
    
    int32_t i_1 = 0
    
    if (esi[9] s> 0)
        void* edi_5 = esi[0x36] + 0x24
        
        do
            int32_t eax_13 = sub_67d170(*(edi_5 - 0x1c) * *edi_5 * esi[7], esi[0x4d] * 8)
            int32_t ecx_14 = *(edi_5 - 0x18) * *edi_5
            *(edi_5 + 4) = eax_13
            *(edi_5 + 8) = sub_67d170(ecx_14 * esi[8], esi[0x4e] * 8)
            i_1 += 1
            edi_5 += 0x54
        while (i_1 s< esi[9])
    
    int32_t ecx_16 = esi[0xb]
    
    if (ecx_16 - 1 u> 4)
        esi[0x1e] = esi[9]
    else
        switch (ecx_16)
            case 1
                esi[0x1e] = 1
            case 2, 3
                esi[0x1e] = 3
            case 4, 5
                esi[0x1e] = 4
    
    void* result = 1
    
    if (esi[0x15] == 0)
        result = esi[0x1e]
    
    bool cond:2 = esi[0x13] != 0
    esi[0x1f] = result
    
    if (not(cond:2) && esi[0x4b] == 0 && esi[0xa] == 3 && esi[9] == 3 && ecx_16 == 2 && esi[0x1e] == 3)
        result = esi[0x36]
        
        if (*(result + 8) == 2 && *(result + 0x5c) == 1 && *(result + 0xb0) == 1
                && *(result + 0xc) s<= 2 && *(result + 0x60) == 1 && *(result + 0xb4) == 1)
            int32_t ecx_17 = esi[0x4f]
            
            if (*(result + 0x24) == ecx_17 && *(result + 0x78) == ecx_17 && *(result + 0xcc) == ecx_17)
                esi[0x20] = esi[0x4e]
                return result
    
    esi[0x20] = 1
    return result
}

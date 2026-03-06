// 函数名称: sub_5c83b0
// 虚拟地址: 0x5c83b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c83b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_40
    int32_t var_40
    char edx
    
    switch (*arg1 - 0x600)
        case 0
            edx = arg1[3].b
            
            if (edx u< 0x14)
                int32_t* ecx_1 = data_bed770
                
                if (ecx_1 != 0)
                    while (**ecx_1 != arg1[2])
                        ecx_1 = ecx_1[0xe0]
                        
                        if (ecx_1 == 0)
                            return ecx_1 + 1
                    
                    uint32_t eax_4 = zx.d(edx)
                    int32_t esi_2 = ecx_1[eax_4 + 0x50]
                    
                    if (esi_2 s>= 0)
                        int16_t eax_5 = arg1[4].w
                        
                        if (esi_2 s>= 4 && esi_2 s<= 5)
                            int32_t eax_7
                            int32_t edx_1
                            edx_1:eax_7 = sx.q(eax_5)
                            eax_5 = ((eax_7 - edx_1) s>> 1).w + 0x4000
                        
                        sub_5c82d0(ecx_1, esi_2.b, eax_5)
                        return 1
                    
                    int32_t eax_12 = ecx_1[eax_4 + 0x8c]
                    
                    if (eax_12 s>= 0)
                        int16_t edx_2 = arg1[4].w
                        int32_t edx_3 = sx.d(edx_2)
                        
                        if (edx_2 s< 0)
                            edx_3 = neg.d(edx_3)
                        
                        edx_3.b = edx_3 s> 0x4000
                        sub_5c8330(ecx_1, eax_12, edx_3.b)
        case 2
            if (arg1[3].b u< 4)
                int32_t* esi_4 = data_bed770
                
                if (esi_4 != 0)
                    while (**esi_4 != arg1[2])
                        esi_4 = esi_4[0xe0]
                        
                        if (esi_4 == 0)
                            return 1
                    
                    uint32_t eax_20 = zx.d(arg1[3].b)
                    int32_t* ecx_6
                    ecx_6.b = *(eax_20 + esi_4 + 8)
                    int32_t ebx
                    ebx.b = *(arg1 + 0xd)
                    ebx.b &= ecx_6.b
                    ecx_6.b ^= ebx.b
                    char var_5 = ecx_6.b
                    uint32_t edi_1 = eax_20 << 4
                    uint32_t eax_21
                    
                    if ((ecx_6.b & 4) != 0)
                        eax_21, ecx_6 = sub_5c8330(esi_4, esi_4[(edi_1 | 4) + 0xa0], 0)
                        ecx_6.b = var_5
                    
                    if ((ecx_6.b & 1) != 0)
                        eax_21, ecx_6 = sub_5c8330(esi_4, esi_4[(edi_1 | 1) + 0xa0], 0)
                        ecx_6.b = var_5
                    
                    if ((ecx_6.b & 8) != 0)
                        eax_21, ecx_6 = sub_5c8330(esi_4, esi_4[(edi_1 | 8) + 0xa0], 0)
                        ecx_6.b = var_5
                    
                    if ((ecx_6.b & 2) != 0)
                        sub_5c8330(esi_4, esi_4[(edi_1 | 2) + 0xa0], 0)
                    
                    eax_21.b = *(arg1 + 0xd)
                    eax_21.b ^= ebx.b
                    char var_5_1 = eax_21.b
                    
                    if ((eax_21.b & 4) != 0)
                        sub_5c8330(esi_4, esi_4[(edi_1 | 4) + 0xa0], 1)
                        eax_21.b = var_5_1
                    
                    if ((eax_21.b & 1) != 0)
                        sub_5c8330(esi_4, esi_4[(edi_1 | 1) + 0xa0], 1)
                        eax_21.b = var_5_1
                    
                    if ((eax_21.b & 8) != 0)
                        sub_5c8330(esi_4, esi_4[(edi_1 | 8) + 0xa0], 1)
                        eax_21.b = var_5_1
                    
                    if ((eax_21.b & 2) != 0)
                        sub_5c8330(esi_4, esi_4[(edi_1 | 2) + 0xa0], 1)
                    
                    *(zx.d(arg1[3].b) + esi_4 + 8) = *(arg1 + 0xd)
        case 3, 4
            edx = arg1[3].b
            
            if (edx u< 0x14)
                int32_t* eax_14 = data_bed770
                
                if (eax_14 != 0)
                    while (**eax_14 != arg1[2])
                        eax_14 = eax_14[0xe0]
                        
                        if (eax_14 == 0)
                            return 1
                    
                    uint32_t ecx_3 = zx.d(edx)
                    int32_t edx_5 = eax_14[ecx_3 + 0x78]
                    
                    if (edx_5 s>= 0)
                        sub_5c8330(eax_14, edx_5, *(arg1 + 0xd))
                        return 1
                    
                    int32_t ecx_5 = eax_14[ecx_3 + 0x64]
                    
                    if (ecx_5 s>= 0)
                        edx_5.b = 0
                        sub_5c82d0(eax_14, ecx_5.b, 
                            (sbb.d(edx_5, edx_5, 0 u< *(arg1 + 0xd))).w & 0x7fff)
        case 5
            if (sub_5c8230(arg1[2]) != 0)
                int32_t ecx_15 = arg1[2]
                var_40 = 0x653
                int32_t var_38_1 = ecx_15
                sub_5c76a0(&var_40)
        case 6
            int32_t* eax_33 = data_bed770
            
            if (eax_33 != 0)
                int32_t i = arg1[2]
                
                while (**eax_33 != i)
                    eax_33 = eax_33[0xe0]
                    
                    if (eax_33 == 0)
                        return 1
                
                var_40 = 0x654
                int32_t i_1 = i
                sub_5c76a0(&var_40)
    
    return 1
}

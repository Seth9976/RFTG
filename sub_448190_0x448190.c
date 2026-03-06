// 函数名称: sub_448190
// 虚拟地址: 0x448190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_448190(void* const arg1)
{
    // 第一条实际指令: int32_t* eax = data_27e7a40
    int32_t* eax = data_27e7a40
    void* edi = eax[0x152]
    int32_t edx = *(edi + 0x2c0ac)
    
    if (edx == 0xffffffff)
        int32_t esi_1 = *(edi + 0xbfac)
        void* ebx_1 = nullptr
        
        if (esi_1 != 0)
            void* var_8_1 = nullptr
            eax = sub_463f60(edi + 0x43960, esi_1)
            
            if (*eax != 4)
                if (eax[0x17] == 0x14)
                    if (arg1 == 2)
                        arg1 = 1
                    else if (arg1 == 1)
                        arg1 = 2
                
                void* edi_2 = *(data_27e7a40 + 0x548)
                void* ecx_8 = nullptr
                
                while (true)
                    if (ecx_8 != 0)
                        ecx_8 += 0xb0
                    else
                        ecx_8 = *(edi_2 + 0x43960)
                    
                    int32_t edx_9 = *(edi_2 + 0x43964) * 0xb0 + *(edi_2 + 0x43960)
                    
                    if (ecx_8 u>= edx_9)
                        break
                    
                    while (true)
                        if ((*(ecx_8 + 0xac) & 0xffff0000) != 0)
                            if (*(ecx_8 + 0x58) != eax[0x19])
                                break
                            
                            if (*(ecx_8 + 0x5c) != eax[0x1a])
                                break
                            
                            int32_t edx_12 = *(ecx_8 + 0xa4)
                            int32_t esi_5 = eax[0x29]
                            
                            if (edx_12 s> esi_5)
                                if (var_8_1 != 0 && *(var_8_1 + 0xa4) s<= edx_12)
                                    break
                                
                                var_8_1 = ecx_8
                                break
                            
                            if (edx_12 s>= esi_5)
                                break
                            
                            if (ebx_1 != 0 && *(ebx_1 + 0xa4) s>= edx_12)
                                break
                            
                            ebx_1 = ecx_8
                            break
                        
                        ecx_8 += 0xb0
                        
                        if (ecx_8 u>= edx_9)
                            goto label_448269
            else
                void* edi_1 = *(data_27e7a40 + 0x548)
                void* ecx_4 = nullptr
                
                while (true)
                    void* ecx_5
                    
                    if (ecx_4 != 0)
                        ecx_5 = ecx_4 + 0xb0
                    else
                        ecx_5 = *(edi_1 + 0x43960)
                    
                    int32_t edx_4 = *(edi_1 + 0x43964) * 0xb0 + *(edi_1 + 0x43960)
                    
                    if (ecx_5 u>= edx_4)
                        break
                    
                    ecx_4 = ecx_5
                    
                    while (true)
                        if ((*(ecx_4 + 0xac) & 0xffff0000) != 0)
                            if (*ecx_4 != 4)
                                break
                            
                            int32_t edx_5 = *(ecx_4 + 0x84)
                            int32_t esi_3 = eax[0x21]
                            
                            if (edx_5 s> esi_3)
                                if (var_8_1 != 0 && *(var_8_1 + 0x84) s<= edx_5)
                                    break
                                
                                var_8_1 = ecx_4
                                break
                            
                            if (edx_5 s>= esi_3)
                                break
                            
                            if (ebx_1 != 0 && *(ebx_1 + 0x84) s>= edx_5)
                                break
                            
                            ebx_1 = ecx_4
                            break
                        
                        ecx_4 += 0xb0
                        
                        if (ecx_4 u>= edx_4)
                            goto label_448269
            
        label_448269:
            void* esi_2
            
            if (arg1 != 2)
                if (arg1 == 1)
                    esi_2 = var_8_1
                    
                    if (esi_2 != 0)
                        goto label_4483ab
            else if (ebx_1 != 0)
                esi_2 = ebx_1
            label_4483ab:
                
                if (esi_2 != 0)
                    sub_4476f0()
                    return sub_4474b0(esi_2)
    else
        eax = arg1
        
        if (eax == 2)
            int32_t eax_1 = sub_447ee0(*(edi + 0x2c0b4), edx)
            *(edi + 0x2c0ac) = eax_1
            return eax_1
        
        if (eax == 1)
            int32_t eax_2 = sub_447c30(*(edi + 0x2c0b4), edx)
            *(edi + 0x2c0ac) = eax_2
            return eax_2
    
    return eax
}

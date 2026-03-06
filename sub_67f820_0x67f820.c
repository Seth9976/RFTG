// 函数名称: sub_67f820
// 虚拟地址: 0x67f820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67f820(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax = *(esi + 0x194)
    char ecx = (*(esi + 0x19c)).b
    void* edi = *(esi + 0x1bc)
    
    if (*(esi + 0x114) != 0 && *(edi + 0x28) == 0)
        int32_t result = sub_67f550(esi)
        
        if (result == 0)
            return result
    
    if (*(edi + 8) == 0)
        int32_t eax_1 = *(edi + 0x14)
        int32_t var_18_1 = eax_1
        
        if (eax_1 != 0)
            *(edi + 0x28) -= 1
            *(edi + 0x14) = eax_1 - 1
            return 1
        
        int32_t* eax_4 = *(esi + 0x18)
        void* var_24_1 = esi
        int32_t var_34 = *eax_4
        int32_t eax_5 = eax_4[1]
        int32_t edx_2 = *arg2
        int32_t ecx_2 = *(edi + 0x3c)
        int32_t ebx_1 = *(edi + 0xc)
        int32_t eax_6 = *(edi + 0x10)
        int32_t ecx_3 = *(esi + 0x190)
        int32_t var_8_1 = ecx_3
        
        if (ecx_3 s<= eax)
            while (true)
                int32_t var_2c
                int32_t var_28
                int32_t ecx_4
                int32_t esi_1
                
                if (eax_6 s>= 8)
                label_67f8f5:
                    esi_1 = ecx_2
                    uint32_t edx_5 = zx.d((ebx_1 s>> (eax_6.b - 8)).b)
                    int32_t ecx_6 = *(esi_1 + (edx_5 << 2) + 0x90)
                    uint32_t edi_1
                    
                    if (ecx_6 == 0)
                        ecx_4 = 9
                    label_67f92e:
                        edi_1 = sub_67ee40(&var_34, ebx_1, eax_6, esi_1, ecx_4)
                        
                        if (edi_1 s>= 0)
                            ebx_1 = var_2c
                            eax_6 = var_28
                            goto label_67f943
                    else
                        edi_1 = zx.d(*(edx_5 + esi_1 + 0x490))
                        eax_6 -= ecx_6
                    label_67f943:
                        int32_t esi_3 = edi_1 s>> 4
                        int32_t edi_2 = edi_1 & 0xf
                        int32_t var_8_2
                        
                        if (edi_2 != 0)
                            var_8_2 = var_8_1 + esi_3
                            
                            if (eax_6 s>= edi_2)
                                goto label_67f971
                            
                            if (sub_67ed20(&var_34, ebx_1, eax_6, edi_2) != 0)
                                ebx_1 = var_2c
                                eax_6 = var_28
                            label_67f971:
                                eax_6 -= edi_2
                                int32_t edx_8 = ((1 << edi_2.b) - 1) & ebx_1 s>> eax_6.b
                                int16_t edi_4
                                
                                if (edx_8 s>= *((edi_2 << 2) + &data_835970))
                                    edi_4 = edx_8.w
                                else
                                    edi_4 = (*((edi_2 << 2) + &data_8359b0)).w + edx_8.w
                                
                                *(edx_2 + (*((var_8_2 << 2) + &data_8357b0) << 1)) = edi_4 << ecx
                                goto label_67f9be
                        else if (esi_3 != 0xf)
                            int32_t edi_5 = 1 << esi_3.b
                            
                            if (esi_3 == 0)
                                var_18_1 = edi_5 - 1
                                break
                            
                            if (eax_6 s>= esi_3)
                                goto label_67f9ff
                            
                            if (sub_67ed20(&var_34, ebx_1, eax_6, esi_3) != 0)
                                ebx_1 = var_2c
                                eax_6 = var_28
                            label_67f9ff:
                                eax_6 -= esi_3
                                var_18_1 = edi_5 + (ebx_1 s>> eax_6.b & (edi_5 - 1)) - 1
                                break
                        else
                            var_8_2 = var_8_1 + esi_3
                        label_67f9be:
                            var_8_1 = var_8_2 + 1
                            
                            if (var_8_2 + 1 s> eax)
                                break
                            
                            continue
                else if (sub_67ed20(&var_34, ebx_1, eax_6, 0) != 0)
                    eax_6 = var_28
                    ebx_1 = var_2c
                    
                    if (eax_6 s>= 8)
                        goto label_67f8f5
                    
                    esi_1 = ecx_2
                    ecx_4 = 1
                    goto label_67f92e
                return 0
            
            esi = arg1
        
        **(esi + 0x18) = var_34
        *(*(esi + 0x18) + 4) = eax_5
        *(edi + 0x10) = eax_6
        *(edi + 0xc) = ebx_1
        *(edi + 0x14) = var_18_1
    
    *(edi + 0x28) -= 1
    return 1
}

// 函数名称: sub_4ce080
// 虚拟地址: 0x4ce080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4ce080(int32_t* arg1, void* arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1
    int32_t __saved_ebp_1
    int32_t __saved_ebp = __saved_ebp_1
    int32_t ecx
    int32_t var_c = ecx
    void* edx = arg2
    void* result = *(edx + 0x10)
    int32_t ebx
    int32_t var_10 = ebx
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    int32_t* esp_1 = &var_18
    
    if (result s<= 0 || result s>= 0x12)
        int32_t edi_1 = *(edx + 8)
        int32_t edi_2 = neg.d(edi_1)
        int32_t edi_5 = neg.d(sbb.d(edi_2, edi_2, edi_1 != 0)) - 1
        
        if (edi_5 != 0xffffffff)
            while (true)
                int32_t eax_2 = edi_5 * 0xf
                edi_5 += 1
                int32_t* ecx_2 = *(edx + 4) + (eax_2 << 2)
                esp_1[3] = edi_5
                
                if (edi_5 s>= *(edx + 8))
                    esp_1[3] = 0xffffffff
                    edi_5 = esp_1[3]
                
                result = ecx_2[3]
                int32_t edx_1 = *(result + 0x10)
                
                if (edx_1 == 0xf)
                    int32_t* ecx_3 = *ecx_2
                    void* edx_3 = *(ecx_3 + arg1)
                    
                    if (edx_3 != 0)
                        *(edx_3 + 0x20)
                        *(esp_1 - 4) = *(arg4 + 4) + *arg4 + ecx_3
                        result = sub_4cd9d0(arg4)
                else if (edx_1 s<= 0 || edx_1 s>= 0x12)
                label_4ce13c:
                    
                    if (edx_1 != 5)
                        if (edx_1 == 0x11)
                            sub_4cdc30()
                            noreturn
                        
                        int32_t ebx_5
                        
                        if (edx_1 == 6)
                            int32_t eax_7 = *ecx_2
                            ebx_5 = *(arg4 + 4)
                            *(esp_1 - 4) = 0
                            *(arg4 + 4) = eax_7 + ebx_5
                            int32_t eax_9 = ecx_2[7]
                            *(esp_1 - 8) = ecx_2
                            *(esp_1 - 0xc) = eax_9
                            *(esp_1 - 0x10) = arg1 + eax_7
                            result = sub_4cda90(arg4)
                            *(arg4 + 4) = ebx_5
                            esp_1 = esp_1
                        else if (edx_1 == 8)
                            int32_t* eax_11 = *ecx_2
                            *(eax_11 + arg1)
                            ecx_2[0xa].b
                            *(esp_1 - 4) = *(arg4 + 4) + *arg4 + eax_11
                            result = sub_4cd9d0(arg4)
                        else if (edx_1 == 0xb)
                            int32_t ebx_8
                            ebx_8.b = *(arg1 + *ecx_2) != 0
                            *(esp_1 - 4) = ebx_8
                            *(esp_1 - 8) = 0
                            *(esp_1 - 0xc) = ecx_2
                            *(esp_1 - 0x10) = arg1
                            result = sub_4cdc70(arg4)
                            esp_1 = esp_1
                        else if (edx_1 == 9)
                            *(esp_1 - 4) = arg3
                            *(esp_1 - 8) = arg1
                            result = sub_4cddc0(arg4, arg3, ecx_2)
                        else if (edx_1 != 0xc)
                            if (sub_4fe210(result) != 0)
                                *(esp_1 - 4) = "DefBinSerializeBlock"
                                *(esp_1 - 8) = 0x28e
                                *(esp_1 - 0xc) = "DefBin.cpp"
                                *(esp_1 - 0x10) = &data_83f3d3
                                *(esp_1 - 0x14) = "!DefTypeIsBuiltIn(pField->pDefMap)"
                                sub_4c5870()
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t eax_17 = *ecx_2
                            ebx_5 = *(arg4 + 4)
                            *(arg4 + 4) = eax_17 + ebx_5
                            int32_t eax_19 = arg3
                            
                            if (eax_19 == 0 && (edx_1 == 0x13 || edx_1 == 0x14))
                                eax_19 = ecx_2[7]
                            
                            *(esp_1 - 4) = arg4
                            *(esp_1 - 8) = eax_19
                            *(esp_1 - 0xc) = ecx_2[3]
                            *(esp_1 - 0x10) = arg1 + eax_17
                            result = sub_4ce080()
                            void* esp_6 = esp_1
                            edi_5 = *(esp_6 + 0x1c)
                            *(arg4 + 4) = ebx_5
                            esp_1 = esp_6 + 0x10
                        else
                            *(esp_1 - 4) = arg1
                            result = sub_4cdfd0(arg4, ecx_2, arg1)
                            edi_5 = esp_1[3]
                    else
                        *(esp_1 - 4) = *(ecx_2[4] + arg1)
                        *(esp_1 - 8) = arg3
                        *(esp_1 - 0xc) = ecx_2
                        *(esp_1 - 0x10) = arg1
                        result = sub_4cdc70(arg4)
                        esp_1 = esp_1
                else
                    if (edx_1 - 1 u> 0x10)
                    label_4ce294:
                        *(esp_1 - 4) = "DefTypeIsDeepStructure"
                        *(esp_1 - 8) = 0x38
                        *(esp_1 - 0xc) = "Definition.cpp"
                        *(esp_1 - 0x10) = &data_83f3d3
                        *(esp_1 - 0x14) = "Halt"
                        sub_4c5870()
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    switch (edx_1 + &jump_table_4ce2c4[2]:3)
                        case &lookup_table_4ce2d0[4], &lookup_table_4ce2d0[5], &lookup_table_4ce2d0[7], 
                                &lookup_table_4ce2d0[8], &lookup_table_4ce2d0[0xa], 
                                &lookup_table_4ce2d0[0xb], &lookup_table_4ce2d0[0x10]
                            goto label_4ce13c
                        case &lookup_table_4ce2d0[6], &lookup_table_4ce2d0[0xc]
                            goto label_4ce294
                
                if (edi_5 == 0xffffffff)
                    break
                
                edx = arg2
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return result
}

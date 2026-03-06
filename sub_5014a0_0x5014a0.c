// 函数名称: sub_5014a0
// 虚拟地址: 0x5014a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5014a0(int32_t arg1, int32_t* arg2, void* arg3)
{
    // 第一条实际指令: int32_t* ecx = arg2
    int32_t* ecx = arg2
    int32_t eax_1 = *(ecx[6] + 0xc)
    
    if (eax_1 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t** ebx = *(arg3 + 4)
    uint32_t result = ecx[7]
    char* esi_1 = *ecx + arg1
    uint32_t result_1 = result
    uint32_t result_2 = 0
    
    if (ebx != 0)
        while (true)
            int32_t* edi_1 = *ebx
            char* const eax_3 = *edi_1
            ebx = ebx[1]
            
            if (eax_3 == 0)
                eax_3 = &data_83f3d3
            
            result = sub_5a9697(ecx[1], eax_3)
            
            if (result == 0)
                int32_t* eax_5 = arg2[6]
                int32_t ecx_2 = eax_5[4]
                
                if (ecx_2 - 1 u> 0x2a)
                label_501548:
                    
                    if (ecx_2 s> 0)
                        if (ecx_2 s>= 0x12)
                            goto label_501551
                        
                        sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "Definition.cpp", 0x65, 
                            "DefTypeCanBeInArray")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_501f80(esi_1, eax_5, edi_1[2], 0)
                else
                    switch (ecx_2 + &jump_table_5015fc[2]:3)
                        case &lookup_table_501608, &lookup_table_501608[1], &lookup_table_501608[2], 
                                &lookup_table_501608[3], &lookup_table_501608[7], 
                                &lookup_table_501608[9], &lookup_table_501608[0xd], 
                                &lookup_table_501608[0xe], &lookup_table_501608[0xf], 
                                &lookup_table_501608[0x14], &lookup_table_501608[0x15], 
                                &lookup_table_501608[0x16], &lookup_table_501608[0x17], 
                                &lookup_table_501608[0x18], &lookup_table_501608[0x19], 
                                &lookup_table_501608[0x1a], &lookup_table_501608[0x1b], 
                                &lookup_table_501608[0x1c], &lookup_table_501608[0x1d], 
                                &lookup_table_501608[0x22], &lookup_table_501608[0x27], 
                                &lookup_table_501608[0x28], &lookup_table_501608[0x29], 
                                &lookup_table_501608[0x2a]
                            sub_500cb0(eax_5, arg2, esi_1, eax_5, edi_1)
                        case &lookup_table_501608[4], &lookup_table_501608[5], &lookup_table_501608[8], 
                            &lookup_table_501608[0xa], &lookup_table_501608[0xb], 
                            &lookup_table_501608[0x10]
                        label_501551:
                            
                            if (ecx_2 s<= 0)
                                sub_501f80(esi_1, eax_5, edi_1[2], 0)
                            else
                                if (ecx_2 s< 0x12)
                                    sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, 
                                        "DefParseTree.cpp", 0x283, "DefParseReadFixedArray")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                sub_501f80(esi_1, eax_5, edi_1[2], 0)
                        case &lookup_table_501608[6], &lookup_table_501608[0xc], 
                                &lookup_table_501608[0x11], &lookup_table_501608[0x12], 
                                &lookup_table_501608[0x13], &lookup_table_501608[0x1e], 
                                &lookup_table_501608[0x1f], &lookup_table_501608[0x20], 
                                &lookup_table_501608[0x21], &lookup_table_501608[0x23], 
                                &lookup_table_501608[0x24], &lookup_table_501608[0x25], 
                                &lookup_table_501608[0x26]
                            goto label_501548
                
                esi_1 = &esi_1[eax_1]
                result = result_2 + 1
                result_2 = result
                
                if (result == result_1)
                    break
            
            if (ebx == 0)
                break
            
            ecx = arg2
    
    return result
}

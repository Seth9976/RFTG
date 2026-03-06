// 函数名称: sub_501060
// 虚拟地址: 0x501060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_501060(int32_t arg1, int32_t arg2, void* arg3, uint32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: uint32_t result_3 = *arg5 + arg4
    uint32_t result_3 = *arg5 + arg4
    uint32_t edi = *(arg3 + 8)
    int32_t var_30 = result_3 + 0xc
    arg4 = result_3
    void* var_30_1 = result_3 + 0x10
    void* var_30_2 = result_3 + 0x14
    sub_501000(edi, sub_501000(edi, sub_501000(edi, result_3 + 0xc)))
    int32_t eax_6 = *(arg5[6] + 0xc)
    
    if (eax_6 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t result = *(result_3 + 8)
    uint32_t result_1 = result
    
    if (*(result_3 + 4) != 0)
        sub_4c5870("array->mMaxUsedCount == 0", &data_83f3d3, "DefParseTree.cpp", 0x20f, 
            "DefParseReadDataArray")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi_1 = *(edi + 4)
    
    if (edi_1 != 0)
        while (true)
            int32_t* ecx_1 = edi_1[1]
            int32_t* edi_2 = *edi_1
            char* const eax_11 = *edi_2
            
            if (eax_11 == 0)
                eax_11 = &data_83f3d3
            
            result = sub_5a9697(eax_11, "item")
            
            if (result == 0)
                if (*(result_3 + 4) s>= result_1)
                    sub_4c5870("(int)actualCount < maxCount", &data_83f3d3, "DefParseTree.cpp", 0x21b, 
                        "DefParseReadDataArray")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                uint32_t result_2 = result
                void** var_30_3 = &result_2
                int32_t edx_5 = sub_501000(edi_2[2], result_1)
                int32_t var_14
                int32_t* var_30_4 = &var_14
                sub_501000(edi_2[2], edx_5)
                int32_t eax_14 = var_14
                char* esi_3 = result_2 * (eax_6 + 4) + *arg4
                *(esi_3 + eax_6 + 4 - 4) = eax_14
                void* edi_3 = edi_2[2]
                int32_t* edi_4
                
                if (edi_3 != 0)
                    edi_4 = *(edi_3 + 4)
                
                int32_t* edi_5
                
                if (edi_3 == 0 || edi_4 == 0)
                label_5011f9:
                    edi_5 = nullptr
                else
                    while (true)
                        int32_t* eax_15 = *edi_4
                        edi_4 = edi_4[1]
                        char* const eax_16 = *eax_15
                        
                        if (eax_16 == 0)
                            eax_16 = &data_83f3d3
                        
                        if (sub_5a9697(eax_16, "value") == 0)
                            edi_5 = eax_15
                            break
                        
                        if (edi_4 == 0)
                            goto label_5011f9
                
                if (zx.d((eax_14 s>> 0x10).w) != 0)
                    bool cond:1_1 = sub_4fe230(arg5[6]) == 0
                    int32_t* eax_20 = arg5[6]
                    
                    if (cond:1_1)
                        int32_t ecx_4 = eax_20[4]
                        
                        if (ecx_4 s> 0 && ecx_4 s< 0x12)
                            sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, 
                                "DefParseTree.cpp", 0x234, "DefParseReadDataArray")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        sub_501f80(esi_3, eax_20, edi_5[2], 0)
                    else
                        sub_500cb0(eax_20, arg5, esi_3, eax_20, edi_5)
                
                result = arg4
                *(result + 4) += 1
                result_3 = result
            
            if (ecx_1 == 0)
                break
            
            edi_1 = ecx_1
    
    return result
}

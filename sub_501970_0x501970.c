// 函数名称: sub_501970
// 虚拟地址: 0x501970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_501970(int32_t arg1, int32_t* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* eax = sub_5018a0(arg2)
    int32_t* eax = sub_5018a0(arg2)
    
    if (arg4 == 0)
        sub_4c5870("pParseTree", &data_83f3d3, "DefParseTree.cpp", 0x322, "DefParseReadAttribTree")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(*(arg3 + 0xc) + 0x10) != 0x14)
        sub_4c5870("pField->pDefMap->defType == DT_ATTRIB_TREE", &data_83f3d3, "DefParseTree.cpp", 
            0x323, "DefParseReadAttribTree")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_4 = sub_501910(arg4, arg3)
    int32_t ebx_1 = *(arg4 + 0xc) - eax_4
    int32_t* ecx_1 = eax
    ecx_1[1] = sub_4cce80(ebx_1 << 3)
    *ecx_1 = ebx_1
    ecx_1[2] = eax_4
    int32_t* esi_2 = *(arg4 + 4)
    char* result = *(arg3 + 0x1c)
    char* result_1 = result
    
    if (esi_2 != 0)
        arg4 = nullptr
        
        while (true)
            if (esi_2 == 0)
                sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                    "XList<struct DefParseItem *>::GetNextIter")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* edi_2 = *esi_2
            char* edx_1 = *(arg3 + 4)
            char* const ecx_3 = *edi_2
            esi_2 = esi_2[1]
            
            if (ecx_3 == 0)
                ecx_3 = &data_83f3d3
            
            int32_t ecx_5
            
            while (true)
                ebx_1.b = *ecx_3
                char temp0_1 = *edx_1
                bool c_1 = ebx_1.b u< temp0_1
                
                if (ebx_1.b == temp0_1)
                    if (ebx_1.b == 0)
                        ecx_5 = 0
                        break
                    
                    ebx_1.b = ecx_3[1]
                    char temp3_1 = edx_1[1]
                    c_1 = ebx_1.b u< temp3_1
                    
                    if (ebx_1.b == temp3_1)
                        ecx_3 = &ecx_3[2]
                        edx_1 = &edx_1[2]
                        
                        if (ebx_1.b != 0)
                            continue
                        
                        ecx_5 = 0
                        break
                
                bool c_2 = unimplemented  {sbb ecx, ecx}
                ecx_5 = sbb.d(sbb.d(ecx_3, ecx_3, c_1), 0xffffffff, c_2)
                break
            
            if (ecx_5 != 0)
                result = sub_501640(ecx_1[1] + arg4, edx_1, result_1, edi_2)
                
                if (result.b != 0)
                    arg4 += 8
                else
                    char* const edi_3 = *edi_2
                    
                    if (edi_3 == 0)
                        edi_3 = &data_83f3d3
                    
                    char* const var_20_3 = edi_3
                    result = sub_4c5680("unknown tag %s")
            else
                result = sub_501970(arg1, arg2, arg3, edi_2[2])
            
            if (esi_2 == 0)
                break
            
            ecx_1 = eax
    
    return result
}

// 函数名称: sub_4ce4c0
// 虚拟地址: 0x4ce4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4ce4c0(int32_t* arg1, int32_t* arg2, int32_t arg3, void* arg4, int32_t arg5, int32_t* arg6)
{
    // 第一条实际指令: void* ecx = arg4
    void* ecx = arg4
    int32_t eax_1 = *(*(ecx + 0x18) + 0xc)
    int32_t var_c = eax_1
    
    if (eax_1 == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = arg2
    int32_t* var_14 = edi
    int32_t var_10 = 0
    
    if (arg3 s> 0)
        while (true)
            void* eax_5 = *(ecx + 0x18)
            uint32_t edx_1 = *(eax_5 + 0x10)
            
            if (edx_1 == 0xf)
                void* esi_1 = *edi
                char* ebx_1 = *(ecx + 0x20)
                
                if (esi_1 == 0)
                    goto label_4ce615
                
                void* esi_2 = esi_1 + arg1
                char* eax_3 = esi_2
                
                do
                    ecx.b = *eax_3
                    eax_3 = &eax_3[1]
                while (ecx.b != 0)
                
                if (eax_3 - &eax_3[1] + esi_1 + 1 s> arg6)
                    eax_5.b = 0
                    return eax_5
                
                if (ebx_1 != 0 || *esi_2 != ebx_1.b)
                    char* eax_6 = ebx_1
                    
                    if (ebx_1 == 0)
                        eax_6 = sub_508bc0(esi_2)
                    
                    *var_14 = sub_509140(eax_6, esi_2)
                    edi = var_14
                else
                    *var_14 = 0
                    edi = var_14
                
                goto label_4ce615
            
            uint32_t ecx_4 = edx_1
            
            if (ecx_4 s<= 0 || ecx_4 s>= 0x12)
            label_4ce5be:
                
                if (edx_1 == 8)
                    int32_t* var_24_1 = arg6
                    eax_5 = sub_4ce400(arg1, edi, ecx_4, arg1)
                label_4ce60d:
                    
                    if (eax_5.b == 0)
                        eax_5.b = 0
                        return eax_5
                    
                    goto label_4ce615
                
                if (edx_1 s<= 0)
                label_4ce5f9:
                    
                    if (*(eax_5 + 0xc) + edi u> arg1 + arg6)
                        eax_5.b = 0
                        return eax_5
                    
                    eax_5 = sub_4ce970(arg1, edi, eax_5, arg5, arg6)
                    goto label_4ce60d
                
                if (edx_1 s>= 0x12)
                    if (edx_1 s<= 0 || edx_1 s>= 0x12)
                        goto label_4ce5f9
                    
                    goto label_4ce615
                
                sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, "DefBin.cpp", 0x325, 
                    "DefBinReadFixupArray")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (ecx_4 - 1 u> 0x10)
            label_4ce680:
                sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ecx_4 = zx.d(*(ecx_4 + &jump_table_4ce6a4[2]:3))
            
            switch (ecx_4)
                case 0
                    sub_4cd970(eax_5)
                label_4ce615:
                    edi += var_c
                    eax_1 = var_10 + 1
                    var_14 = edi
                    var_10 = eax_1
                    
                    if (eax_1 s>= arg3)
                        break
                    
                    ecx = arg4
                    continue
                case 1
                    goto label_4ce5be
                case 2
                    goto label_4ce680
    
    eax_1.b = 1
    return eax_1
}

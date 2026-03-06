// 函数名称: sub_53ce60
// 虚拟地址: 0x53ce60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_53ce60(char* arg1)
{
    // 第一条实际指令: int32_t* eax = data_3079208
    int32_t* eax = data_3079208
    
    if (eax != 0 && eax[1] == 0x19)
        void* result = sub_466320(eax)
        
        if (result != 0)
            int32_t ecx = *(result + 4)
            int32_t ebx = 0
            
            if (ecx s> 0)
                int32_t* edi_1 = *result
                
                while (true)
                    if (data_8c35fc s<= 1)
                        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                            &data_83f3d3, "AttribMap.cpp", 0x8b, "AttribTagGetField")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* esi_1 = *(data_8c35f8 + 4)
                    void* eax_3 = *(esi_1 + 0xc)
                    
                    if (eax_3 == 0)
                        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                            "AttribTagGetDefMap")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(eax_3 + 0x10) != 8)
                        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_STRING", 
                            &data_83f3d3, "AttribMap.cpp", 0x1cc, "AttribMapGetString")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_1 = *edi_1
                    int32_t eax_4 = 0
                    
                    if (edx_1 s<= 0)
                    label_53cf12:
                        result = *(esi_1 + 0x24)
                    else
                        int32_t* ecx_1 = edi_1[1]
                        
                        while (*ecx_1 != 1)
                            eax_4 += 1
                            ecx_1 = &ecx_1[2]
                            
                            if (eax_4 s>= edx_1)
                                goto label_53cf12
                        
                        result = ecx_1[1]
                    
                    if (result != 0)
                        char* ecx_2 = arg1
                        
                        while (true)
                            edx_1.b = *result
                            char temp0_1 = *ecx_2
                            bool c_1 = edx_1.b u< temp0_1
                            
                            if (edx_1.b == temp0_1)
                                if (edx_1.b == 0)
                                    result = nullptr
                                    break
                                
                                edx_1.b = *(result + 1)
                                char temp3_1 = ecx_2[1]
                                c_1 = edx_1.b u< temp3_1
                                
                                if (edx_1.b == temp3_1)
                                    result += 2
                                    ecx_2 = &ecx_2[2]
                                    
                                    if (edx_1.b != 0)
                                        continue
                                    
                                    result = nullptr
                                    break
                            
                            bool c_2 = unimplemented  {sbb eax, eax}
                            result = sbb.d(sbb.d(result, result, c_1), 0xffffffff, c_2)
                            break
                        
                        if (result == 0)
                            result.b = 1
                            return result
                    
                    ebx += 1
                    edi_1 = &edi_1[0x4d]
                    
                    if (ebx s>= ecx)
                        break
            
            result.b = 0
            return result
    
    sub_4c5870("pParticleDef", &data_83f3d3, "Windows\EditorWindow.cpp", 0xad2, "EmitterIsNameUsed")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

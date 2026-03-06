// 函数名称: sub_52af70
// 虚拟地址: 0x52af70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_52af70(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, char** arg5)
{
    // 第一条实际指令: *arg5 = &data_83f3d3
    *arg5 = &data_83f3d3
    void* var_8 = 1
    void* result = sub_521460(arg3)
    void* result_1 = result
    void* result_2 = nullptr
    
    if (*(result + 4) s> 0)
        int32_t ebx_1 = data_8c00fc
        int32_t var_c_1 = 0
        
        while (true)
            int32_t* edi_2 = *result + var_c_1
            
            if (ebx_1 s<= 0x65)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result = *(data_8c00f8 + 0x194)
            void* ecx_1 = *(result + 0xc)
            
            if (ecx_1 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(ecx_1 + 0x10) != 1)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
                    "AttribMap.cpp", 0x177, "AttribMapGetInt")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t esi_1 = *edi_2
            int32_t ecx_2 = 0
            int32_t edx_1
            
            if (esi_1 s<= 0)
            label_52b001:
                edx_1 = *(result + 0x24)
            else
                int32_t* edx = edi_2[1]
                
                while (*edx != 0x65)
                    ecx_2 += 1
                    edx = &edx[2]
                    
                    if (ecx_2 s>= esi_1)
                        goto label_52b001
                
                edx_1 = edx[1]
            
            if (edx_1 == arg4)
                if (ebx_1 s<= 0x64)
                    sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", 
                        &data_83f3d3, "AttribMap.cpp", 0x8b, "AttribTagGetField")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_1 = *(data_8c00f8 + 0x190)
                void* ecx_3 = *(eax_1 + 0xc)
                
                if (ecx_3 == 0)
                    sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                        "AttribTagGetDefMap")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*(ecx_3 + 0x10) != 8)
                    sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_STRING", 
                        &data_83f3d3, "AttribMap.cpp", 0x1cc, "AttribMapGetString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t ecx_4 = 0
                int32_t edx_4
                
                if (esi_1 s<= 0)
                label_52b04d:
                    edx_4 = *(eax_1 + 0x24)
                else
                    int32_t* edx_3 = edi_2[1]
                    
                    while (*edx_3 != 0x64)
                        ecx_4 += 1
                        edx_3 = &edx_3[2]
                        
                        if (ecx_4 s>= esi_1)
                            goto label_52b04d
                    
                    edx_4 = edx_3[1]
                
                arg5[var_8] = edx_4
                ebx_1 = data_8c00fc
                var_8 += 1
            
            if (var_8 == 0x10)
                break
            
            var_c_1 += 0xc
            result = result_2 + 1
            result_2 = result
            
            if (result s>= *(result_1 + 4))
                break
            
            result = result_1
    
    result.b = 1
    return result
}

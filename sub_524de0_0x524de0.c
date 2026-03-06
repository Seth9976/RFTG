// 函数名称: sub_524de0
// 虚拟地址: 0x524de0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_524de0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* eax = sub_521460(arg1)
    int32_t* eax = sub_521460(arg1)
    int32_t i = 0
    
    if (eax[1] s> 0)
        int32_t var_8_1 = 0
        
        do
            int32_t* ecx_2 = *eax + var_8_1
            
            if (data_8c00fc s<= 0x64)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* edi_1 = *(data_8c00f8 + 0x190)
            void* eax_2 = *(edi_1 + 0xc)
            
            if (eax_2 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(eax_2 + 0x10) != 8)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_STRING", &data_83f3d3, 
                    "AttribMap.cpp", 0x1cc, "AttribMapGetString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_1 = *ecx_2
            int32_t eax_3 = 0
            char* ecx_4
            
            if (edx_1 s<= 0)
            label_524e42:
                ecx_4 = *(edi_1 + 0x24)
            else
                int32_t* ecx_3 = ecx_2[1]
                
                while (*ecx_3 != 0x64)
                    eax_3 += 1
                    ecx_3 = &ecx_3[2]
                    
                    if (eax_3 s>= edx_1)
                        goto label_524e42
                
                ecx_4 = ecx_3[1]
            
            if (sub_5a9697(ecx_4, arg2) == 0)
                return *eax + i * 0xc
            
            var_8_1 += 0xc
            i += 1
        while (i s< eax[1])
    
    data_3165188 = 0
    return &data_3165188
}

// 函数名称: sub_5537a0
// 虚拟地址: 0x5537a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5537a0()
{
    // 第一条实际指令: int32_t i_1 = 0
    int32_t i_1 = 0
    
    if (data_3079074 s<= 0)
        return 0
    
    int32_t i
    
    do
        void* esi_1 = *((i_1 << 2) + &data_3079180)
        int32_t var_c_1 = 0
        int32_t j_2 = 0
        
        if (*(esi_1 + 8) s> 0)
            int32_t var_8_1 = 0
            int32_t j
            
            do
                int32_t* edi_2 = *(esi_1 + 4) + var_8_1
                
                if (sub_5a9450(edi_2[1], 0x20) != 0)
                    sub_4c5870("strchr(pAttribField->fieldName, ' ') == NULL", &data_83f3d3, 
                        "AttribMapRegistry.cpp", 0x37, "AttribTableInit")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (sub_5a9450(edi_2[1], 0x3c) != 0)
                    sub_4c5870("strchr(pAttribField->fieldName, '<') == NULL", &data_83f3d3, 
                        "AttribMapRegistry.cpp", 0x38, "AttribTableInit")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (sub_5a9450(edi_2[1], 0x3e) != 0)
                    sub_4c5870("strchr(pAttribField->fieldName, '>') == NULL", &data_83f3d3, 
                        "AttribMapRegistry.cpp", 0x39, "AttribTableInit")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (sub_5a9450(edi_2[1], 0x26) != 0)
                    sub_4c5870("strchr(pAttribField->fieldName, '&') == NULL", &data_83f3d3, 
                        "AttribMapRegistry.cpp", 0x3a, "AttribTableInit")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (sub_5a9450(edi_2[1], 0x22) != 0)
                    sub_4c5870("strchr(pAttribField->fieldName, '"') == NULL", &data_83f3d3, 
                        "AttribMapRegistry.cpp", 0x3b, "AttribTableInit")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edi_2[2]
                edi_2[3] = sub_4ccf50()
                int32_t edi_3 = *edi_2
                
                if (edi_3 u>= 0x3e8)
                    sub_4c5870("pAttribField->position < 1000", &data_83f3d3, "AttribMapRegistry.cpp", 
                        0x40, "AttribTableInit")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (edi_3 s> var_c_1)
                    var_c_1 = edi_3
                
                var_8_1 += 0x3c
                j = j_2 + 1
                j_2 = j
            while (j s< *(esi_1 + 8))
        
        int32_t ebx_2 = (var_c_1 + 1) << 2
        int128_t* eax_11 = sub_4cce80(ebx_2)
        sub_5abfc0(eax_11, 0, ebx_2)
        *(esi_1 + 0xc) = eax_11
        int32_t j_1 = 0
        *(esi_1 + 0x10) = var_c_1 + 1
        
        if (*(esi_1 + 8) s> 0)
            int32_t edx_3 = 0
            
            do
                int32_t* eax_12 = *(esi_1 + 4)
                j_1 += 1
                *(*(esi_1 + 0xc) + (*(eax_12 + edx_3) << 2)) = eax_12 + edx_3
                edx_3 += 0x3c
            while (j_1 s< *(esi_1 + 8))
        
        i = i_1 + 1
        i_1 = i
    while (i s< data_3079074)
    
    return i
}

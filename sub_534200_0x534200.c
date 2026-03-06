// 函数名称: sub_534200
// 虚拟地址: 0x534200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_534200(int32_t* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* result = arg2
    int32_t* result_1 = nullptr
    
    if (*result s> 0)
        while (true)
            int32_t* edi_1 = arg2[1] + (result_1 << 3)
            int32_t edx_2 = *arg1
            int32_t eax_1 = 0
            int32_t* ebx_2
            
            if (edx_2 s> 0)
                int32_t* ecx_2 = arg1[1]
                
                do
                    if (*ecx_2 == *edi_1)
                        ebx_2 = ecx_2
                        goto label_534266
                    
                    eax_1 += 1
                    ecx_2 = &ecx_2[2]
                while (eax_1 s< edx_2)
            
            if (edx_2 s>= 0x40)
                sub_4c5870("specialStackAttribMap.attributeCount < MAX_STACK_ATTRIBUTES", &data_83f3d3, 
                    "Material.cpp", 0x21c, "sMaterialCopyMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ebx_2 = arg1[1] + (edx_2 << 3)
            edx_2 += 1
            *arg1 = edx_2
        label_534266:
            int32_t eax_4 = *(sub_531280(*edi_1, edx_2, &data_8bd334) + 0x10)
            
            if (eax_4 s> 0 && eax_4 s< 0x12)
                if (eax_4 - 1 u> 0x10)
                label_53432a:
                    sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                switch (eax_4 + &jump_table_534344[2]:3)
                    case &lookup_table_534350, &lookup_table_534350[1], &lookup_table_534350[2], 
                            &lookup_table_534350[3], &lookup_table_534350[9], 
                            &lookup_table_534350[0xd], &lookup_table_534350[0xe], 
                            &lookup_table_534350[0xf]
                        *ebx_2 = *edi_1
                        result = result_1 + 1
                        ebx_2[1] = edi_1[1]
                        result_1 = result
                        
                        if (result s>= *arg2)
                            break
                        
                        continue
                    case &lookup_table_534350[6], &lookup_table_534350[0xc]
                        goto label_53432a
            
            sub_4c5870(
                "!DefTypeIsDeepStructure(AttribTagGetDefMap(gMaterialAttribTable, pTagSource->tag))", 
                &data_83f3d3, "Material.cpp", 0x222, "sMaterialCopyMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    return result
}

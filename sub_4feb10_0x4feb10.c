// 函数名称: sub_4feb10
// 虚拟地址: 0x4feb10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4feb10(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* esi = arg3[3]
    void* esi = arg3[3]
    int32_t eax = *(esi + 0x10)
    uint32_t eax_2
    
    if (eax s<= 0 || eax s>= 0x12)
    label_4feb3c:
        int32_t ebx_1 = *(esi + 0x10)
        
        if (ebx_1 - 5 u<= 0xc)
            switch (ebx_1 + &jump_table_4fecb8[5]:3)
                case &lookup_table_4fecd4
                    uint32_t* esi_1 = arg3[4]
                    int32_t eax_7 = sub_4fea90(*(esi_1 + arg2), arg2, arg3, arg2, arg1)
                    *(esi_1 + arg2) = 0
                    return eax_7
                case &lookup_table_4fecd4[1]
                    int32_t* var_10_2 = arg1
                    int32_t* var_14_2 = arg3
                    return sub_4fe9b0(arg3[7], arg2, arg3, *arg3 + arg2)
                case &lookup_table_4fecd4[2], &lookup_table_4fecd4[5], &lookup_table_4fecd4[8], 
                        &lookup_table_4fecd4[9], &lookup_table_4fecd4[0xa], &lookup_table_4fecd4[0xb]
                    goto label_4fec0c
                case &lookup_table_4fecd4[3], &lookup_table_4fecd4[7]
                    return sub_4fe870(*arg3 + arg2, arg3[9])
                case &lookup_table_4fecd4[4]
                    eax_2 = arg3[4]
                    int32_t esi_5 = *(arg2 + eax_2)
                    
                    if (esi_5 != 0xffffffff)
                        *arg3
                        return sub_530a80(esi_5, arg1)
                case &lookup_table_4fecd4[6]
                    uint32_t ebx_2
                    ebx_2.b = *(arg2 + *arg3) != 0
                    return sub_4fea90(ebx_2, arg2, arg3, arg2, arg1)
                case &lookup_table_4fecd4[0xc]
                    sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x1e2, "DefinitionDeleteField")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            return eax_2
        
    label_4fec0c:
        
        if (ebx_1 s<= 0 || ebx_1 s>= 0x12)
            int32_t* eax_19 = arg1
            
            if (arg1 == 0 && (ebx_1 == 0x13 || ebx_1 == 0x14))
                eax_19 = arg3[7]
            
            return sub_4fecf0(*arg3 + arg2, esi, eax_19)
        
        sub_4c5870("!DefTypeIsBuiltIn(pField->pDefMap)", &data_83f3d3, "Definition.cpp", 0x20d, 
            "DefinitionDeleteField")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (eax - 1 u> 0x10)
    label_4fec7c:
        sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    eax_2 = zx.d(*(eax + &jump_table_4fec98[2]:3))
    
    switch (eax_2)
        case 0
            return eax_2
        case 1
            goto label_4feb3c
        case 2
            goto label_4fec7c
}

// 函数名称: sub_530b60
// 虚拟地址: 0x530b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_530b60(int32_t* arg1, void* arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    void* eax_1 = sub_531280(arg3, edx, arg2)
    int32_t edx_1 = *arg1
    int32_t eax_2 = 0
    int32_t* edi_1
    
    if (edx_1 s<= 0)
    label_530b92:
        int32_t edi = edx_1 << 3
        int128_t* eax_4 = sub_4cce80(edi + 8)
        sub_5ab990(eax_4, arg1[1], edi)
        
        if (*arg1 s> 0)
            int32_t eax_6 = arg1[1]
            
            if (eax_6 != 0)
                _aligned_free_base(eax_6)
        
        *arg1 += 1
        arg1[1] = eax_4
        edi_1 = edi + eax_4
    else
        int32_t* ecx_1 = arg1[1]
        
        while (*ecx_1 != arg3)
            eax_2 += 1
            ecx_1 = &ecx_1[2]
            
            if (eax_2 s>= edx_1)
                goto label_530b92
        
        sub_530a80(arg3, arg2)
        edi_1 = ecx_1
    
    *edi_1 = arg3
    int32_t eax_7 = *(eax_1 + 0x10)
    
    if (eax_7 s> 0 && eax_7 s< 0x12)
        if (eax_7 - 1 u> 0x10)
        label_530d24:
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (eax_7 + &jump_table_530d40[2]:3)
            case &lookup_table_530d4c, &lookup_table_530d4c[1], &lookup_table_530d4c[2], 
                    &lookup_table_530d4c[3], &lookup_table_530d4c[9], &lookup_table_530d4c[0xd], 
                    &lookup_table_530d4c[0xe], &lookup_table_530d4c[0xf]
                edi_1[1] = arg4
                return arg4
            case &lookup_table_530d4c[6], &lookup_table_530d4c[0xc]
                goto label_530d24
    
    if (eax_7 == 8)
        char* eax_9 = arg4
        void* edx_4 = &eax_9[1]
        int32_t ecx_2
        
        do
            ecx_2.b = *eax_9
            eax_9 = &eax_9[1]
        while (ecx_2.b != 0)
        int128_t* eax_12 = sub_4cce80(eax_9 - edx_4 + 1)
        edi_1[1] = eax_12
        return sub_5ab990(eax_12, arg4, eax_9 - edx_4 + 1)
    
    if (eax_7 s> 0 && eax_7 s< 0x12)
        sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "AttribMap.cpp", 0xf4, 
            "AttribMapSetValue")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* eax_15
    
    if (arg4 == 0)
        if (arg3 s< 0 || arg3 s>= *(arg2 + 0x10))
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_15 = eax_1
        
        if (*(*(*(arg2 + 0xc) + (arg3 << 2)) + 0x24) == 0)
            int32_t* eax_20 = sub_4cce80(sub_4fe2c0(eax_15))
            edi_1[1] = eax_20
            return sub_4fe7d0(eax_20, eax_1)
    else
        eax_15 = eax_1
    
    int128_t* eax_16 = sub_4ff4d0(eax_15)
    edi_1[1] = eax_16
    return eax_16
}

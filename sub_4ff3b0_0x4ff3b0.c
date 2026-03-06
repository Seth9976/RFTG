// 函数名称: sub_4ff3b0
// 虚拟地址: 0x4ff3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4ff3b0(int128_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: void* eax = *(arg2 + 0xc)
    void* eax = *(arg2 + 0xc)
    
    if (eax == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* entry_ebx
    sub_5ab990(arg1, entry_ebx, eax)
    int128_t* result = *(arg2 + 0x10)
    
    if (result s> 0 && result s< 0x12)
        if (result - 1 u> 0x10)
        label_4ff488:
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (result + &jump_table_4ff4a4[2]:3)
            case &lookup_table_4ff4b0, &lookup_table_4ff4b0[1], &lookup_table_4ff4b0[2], 
                    &lookup_table_4ff4b0[3], &lookup_table_4ff4b0[9], &lookup_table_4ff4b0[0xd], 
                    &lookup_table_4ff4b0[0xe], &lookup_table_4ff4b0[0xf]
                return result
            case &lookup_table_4ff4b0[6], &lookup_table_4ff4b0[0xc]
                goto label_4ff488
    
    if (result == 8)
        return sub_4fedb0(*entry_ebx, arg1)
    
    if (result s<= 0 || result s>= 0x12)
        return sub_4ff350(arg1, arg2, 0, entry_ebx)
    
    sub_4c5870("!DefTypeIsBuiltIn(pDefMap)", &data_83f3d3, "Definition.cpp", 0x332, 
        "DefinitionDeepCopyReplaceBlock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_4fe6f0
// 虚拟地址: 0x4fe6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_4fe6f0(char* arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* eax = *(arg3 + 0x18)
    void* eax = *(arg3 + 0x18)
    int32_t edx = *(eax + 0x10)
    
    if (edx s> 0 && edx s< 0x12)
        if (edx - 1 u> 0x10)
        label_4fe78a:
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t edx_2 = zx.d(*(edx + &jump_table_4fe7a4[2]:3))
        
        switch (edx_2)
            case 0
                return sub_4fe330(eax, edx_2, arg3, arg1)
            case 2
                goto label_4fe78a
    
    if (*(eax + 0x10) == 8)
        int32_t result = *(arg3 + 0x24)
        *arg1 = result
        return result
    
    int32_t ecx = *(eax + 0x10)
    
    if (ecx s<= 0 || ecx s>= 0x12)
        return sub_4fe7d0(arg1, eax)
    
    sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, "Definition.cpp", 0x155, 
        "DefinitionFillArrayItemWithDefaults")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

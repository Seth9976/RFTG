// 函数名称: sub_4fe8d0
// 虚拟地址: 0x4fe8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4fe8d0(int32_t* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* ecx = *(arg2 + 0x18)
    void* ecx = *(arg2 + 0x18)
    int32_t eax = *(ecx + 0x10)
    
    if (eax s> 0 && eax s< 0x12)
        if (eax - 1 u> 0x10)
        label_4fe973:
            sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x38, "DefTypeIsDeepStructure")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        uint32_t result = zx.d(*(eax + &jump_table_4fe98c[2]:3))
        
        switch (result)
            case 0
                return result
            case 2
                goto label_4fe973
    
    if (*(ecx + 0x10) == 8)
        return sub_4fe870(arg1, *(arg2 + 0x24))
    
    int32_t eax_2 = *(ecx + 0x10)
    
    if (eax_2 s<= 0 || eax_2 s>= 0x12)
        return sub_4fecf0(arg1, ecx, arg3)
    
    sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, "Definition.cpp", 0x17f, 
        "DefinitionDeleteVariableArrayField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

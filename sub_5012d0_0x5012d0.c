// 函数名称: sub_5012d0
// 虚拟地址: 0x5012d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_5012d0(int32_t arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t* eax_1 = arg3[4] + arg2
    int32_t* eax_1 = arg3[4] + arg2
    int32_t edi = *eax_1
    int32_t* ebx_1 = *arg3 + arg2
    
    if (edi u> 0xf4240)
        sub_4c5870("oldCount >= 0 && oldCount <=1000000", &data_83f3d3, "DefParseTree.cpp", 0x247, 
            "DefParseReadVariableArray")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t esi = *(arg3[6] + 0xc)
    
    if (esi == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_5 = sub_4cce80(esi * (edi + 1))
    
    if (edi s> 0)
        int128_t* ecx_2 = *ebx_1
        
        if (ecx_2 == 0)
            sub_4c5870("*ppSubDefinition", &data_83f3d3, "DefParseTree.cpp", 0x250, 
                "DefParseReadVariableArray")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_5ab990(eax_5, ecx_2, esi * edi)
        int32_t eax_7 = *ebx_1
        
        if (eax_7 != 0)
            _aligned_free_base(eax_7)
    else if (*ebx_1 != 0)
        sub_4c5870("*ppSubDefinition == NULL", &data_83f3d3, "DefParseTree.cpp", 0x256, 
            "DefParseReadVariableArray")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *ebx_1 = eax_5
    *eax_1 = edi + 1
    void* esi_2 = esi * edi + eax_5
    
    if (sub_4fe230(arg3[6]) != 0)
        return sub_500cb0(arg4, arg3, esi_2, arg3[6], arg4)
    
    int32_t* edi_2 = arg3[6]
    int32_t eax_13 = edi_2[4]
    
    if (eax_13 s<= 0 || eax_13 s>= 0x12)
        return sub_501f80(esi_2, edi_2, *(arg4 + 8), 0)
    
    sub_4c5870("!DefTypeIsBuiltIn(pField->pSubDefMap)", &data_83f3d3, "DefParseTree.cpp", 0x264, 
        "DefParseReadVariableArray")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_502b60
// 虚拟地址: 0x502b60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_502b60(void* arg1, char arg2, int32_t* arg3, char* arg4 @ esi, void* arg5 @ edi, char arg6)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    char* ecx = *arg3
    
    if ((arg6 & 2) != 0)
        if (arg1 != 0)
            while (*(arg1 + 4) != 0)
                if (*arg1 == ecx)
                    return sub_5021a0(arg5, arg4, *(arg1 + 4))
                
                arg1 += 8
            
            return sub_5021a0(arg5, arg4, &data_83f3d3)
        
        sub_4c5870("pSymbolTable", &data_83f3d3, "DefParseTree.cpp", 0x5df, 
            "DefParseTreeMakeFromDefinitionInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((arg6 & 0x20) == 0)
        return sub_502220(arg5, arg4, ecx)
    
    if (arg1 == 0)
        sub_4c5870("pAttribTable", &data_83f3d3, "DefParseTree.cpp", 0x5e7, 
            "DefParseTreeMakeFromDefinitionInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ecx s>= 0 && ecx s< *(arg1 + 0x10))
        return sub_5021a0(arg5, arg4, *(*(*(arg1 + 0xc) + (ecx << 2)) + 4))
    
    sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
        "AttribMap.cpp", 0x8b, "AttribTagGetField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

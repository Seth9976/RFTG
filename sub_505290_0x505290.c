// 函数名称: sub_505290
// 虚拟地址: 0x505290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_505290(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* ebx_1 = arg2[4] + arg1
    int32_t* edi_1 = *arg2 + arg1
    
    if (arg3 s< 0 || arg3 s>= *ebx_1)
        sub_4c5870("position >= 0 && position < *pcount", &data_83f3d3, "DefEditor.cpp", 0x85, 
            "DefinitionVariableArrayDeleteItem")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ecx_1 = arg2[6]
    void* esi = ecx_1[3]
    
    if (esi == 0)
        sub_4c5870("pDefMap->definitionSize != 0", &data_83f3d3, "Definition.cpp", 0x6d, 
            "DefinitionGetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi_2 = esi * arg3 + *edi_1
    int32_t var_18 = arg4
    sub_4fe8d0(esi_2, arg2, ecx_1)
    int32_t eax_4 = *ebx_1
    
    if (eax_4 != 1)
        int128_t* eax_8 = (eax_4 - arg3 - 1) * esi
        
        if (eax_8 s> 0)
            eax_8 = sub_5ab990(esi_2, esi + esi_2, eax_8)
        
        *ebx_1 -= 1
        return eax_8
    
    int32_t eax_5 = *edi_1
    
    if (eax_5 != 0)
        eax_5 = _aligned_free_base(eax_5)
    
    *edi_1 = 0
    *ebx_1 = 0
    return eax_5
}

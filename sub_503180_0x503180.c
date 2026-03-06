// 函数名称: sub_503180
// 虚拟地址: 0x503180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_503180(void* arg1, char* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* result = *arg3
    
    if (result == 0xffffffff)
        return result
    
    if (result s< 0 || result s>= *(arg1 + 0x10))
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx_1 = *(*(arg1 + 0xc) + (result << 2))
    char* ebx_1 = *(edx_1 + 4)
    char* eax = sub_531280(result, edx_1, arg1)
    int32_t eax_1 = *(eax + 0x10)
    
    if (eax_1 s> 0 && eax_1 s< 0x12)
        int32_t eax_3 = *arg3
        
        if (eax_3 s>= 0)
            int32_t ecx_5 = *(arg1 + 0x10)
            
            if (eax_3 s< ecx_5)
                if (eax_3 s>= 0 && eax_3 s< ecx_5)
                    int32_t ecx_6 = *(arg1 + 0xc)
                    void* eax_4 = *(ecx_6 + (eax_3 << 2))
                    return sub_502ce0(eax_4, &arg3[1], eax, arg2, ebx_1, *(eax_4 + 0x28), 
                        *(*(ecx_6 + (eax_3 << 2)) + 0x1c))
                
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (sub_4fe230(eax) != 0)
        return sub_502ce0(arg2, arg3[1], eax, arg2, ebx_1, nullptr, nullptr)
    
    int32_t eax_12 = *arg3
    
    if (eax_12 s< 0 || eax_12 s>= *(arg1 + 0x10))
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if ((*(*(*(arg1 + 0xc) + (eax_12 << 2)) + 0x28) & 0x40) == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** edi_1 = arg3[1]
        int32_t* eax_17
        char* ecx_13
        eax_17, ecx_13 = sub_5028f0(arg2, ebx_1)
        char* edx_11 = *eax
        char* eax_18 = eax_17[2]
        return sub_504030(eax_18, edx_11, ecx_13, eax_18, edi_1, eax, edx_11, nullptr)
    
    void* esi_2 = *(eax + 4)
    
    if ((*(esi_2 + 0x28) & 0x40) != 0)
        return sub_502ce0(arg2, arg3[1], *(esi_2 + 0xc), arg2, ebx_1, nullptr, nullptr)
    
    sub_4c5870("pDefMap->pDTMapFields[0].fieldFlags & DEF_FIELD_FLAG_INLINE_XML", &data_83f3d3, 
        "DefParseTree.cpp", 0x6da, "DefParseTreeMakeFromDefinitionTagValue")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

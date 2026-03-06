// 函数名称: sub_524f30
// 虚拟地址: 0x524f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_524f30(int32_t* arg1 @ edi)
{
    // 第一条实际指令: if (data_8c00fc s<= 0x65)
    if (data_8c00fc s<= 0x65)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = *(data_8c00f8 + 0x194)
    void* eax_2 = *(esi + 0xc)
    
    if (eax_2 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_2 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* edx = *arg1
    int32_t eax_5 = 0
    int32_t ecx_2
    
    if (edx s<= 0)
    label_525000:
        ecx_2 = *(esi + 0x24)
    else
        int32_t* ecx_1 = arg1[1]
        
        while (*ecx_1 != 0x65)
            eax_5 += 1
            ecx_1 = &ecx_1[2]
            
            if (eax_5 s>= edx)
                goto label_525000
        
        ecx_2 = ecx_1[1]
    
    int32_t* entry_ebx
    entry_ebx[0x530] = ecx_2
    int32_t* eax_6 = data_be1ef8
    
    if (eax_6 != 0 && eax_6 != *entry_ebx)
        char const* const var_8_1
        
        if (ecx_2 == 3)
            var_8_1 = "Text"
            sub_525160(entry_ebx, sub_524de0(eax_6, edx), nullptr, 0, 1)
        else if (ecx_2 == 5)
            var_8_1 = "Button"
            sub_525160(entry_ebx, sub_524de0(eax_6, edx), nullptr, 0, 1)
    
    if (data_8c00fc s<= 0x66)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_1 = *(data_8c00f8 + 0x198)
    void* eax_9 = *(esi_1 + 0xc)
    
    if (eax_9 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_9 + 0x10) != 8)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_STRING", &data_83f3d3, 
            "AttribMap.cpp", 0x1cc, "AttribMapGetString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* edx_1 = *arg1
    int32_t eax_12 = 0
    char* ecx_9
    
    if (edx_1 s<= 0)
    label_52511d:
        ecx_9 = *(esi_1 + 0x24)
    else
        int32_t* ecx_8 = arg1[1]
        
        while (*ecx_8 != 0x66)
            eax_12 += 1
            ecx_8 = &ecx_8[2]
            
            if (eax_12 s>= edx_1)
                goto label_52511d
        
        ecx_9 = ecx_8[1]
    
    entry_ebx[0x531] = ecx_9
    int32_t* result = data_be1ef8
    
    if (result == 0 || *ecx_9 == 0)
        return result
    
    char* var_8_2 = ecx_9
    return sub_525160(entry_ebx, sub_524de0(result, edx_1), nullptr, 0, 1)
}

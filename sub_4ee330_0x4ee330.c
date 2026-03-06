// 函数名称: sub_4ee330
// 虚拟地址: 0x4ee330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ee330(float arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    void* eax = *(arg1 i+ 0x2e4)
    *(eax + 0x14) += 1
    sub_4ed8e0(arg1, arg1)
    int32_t eax_3 = sub_466320(**(arg1 i+ 0x2e4))
    int32_t* esi_2 = *(arg1 i+ 0x2dc) * 0x134 + *eax_3
    
    if (data_8c35fc s<= 3)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ebx = *(data_8c35f8 + 0xc)
    void* eax_5 = *(ebx + 0xc)
    
    if (eax_5 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_5 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = *esi_2
    int32_t eax_8 = 0
    int32_t i_2
    
    if (edx_1 s<= 0)
    label_4ee43d:
        i_2 = *(ebx + 0x24)
    else
        int32_t* ecx_3 = esi_2[1]
        
        while (*ecx_3 != 3)
            eax_8 += 1
            ecx_3 = &ecx_3[2]
            
            if (eax_8 s>= edx_1)
                goto label_4ee43d
        
        i_2 = ecx_3[1]
    
    if (i_2 s> 0)
        int32_t i_1 = i_2
        int32_t i
        
        do
            sub_4eecd0(arg1)
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (data_8c35fc s<= 4)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx_3 = *(data_8c35f8 + 0x10)
    void* eax_10 = *(edx_3 + 0xc)
    
    if (eax_10 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_10 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_4 = *esi_2
    int32_t result = 0
    int32_t result_1
    
    if (ecx_4 s<= 0)
    label_4ee527:
        result_1 = *(edx_3 + 0x24)
    else
        void* esi_3 = esi_2[1]
        
        while (*esi_3 != 4)
            result += 1
            esi_3 += 8
            
            if (result s>= ecx_4)
                goto label_4ee527
        
        result = *(esi_3 + 4)
        result_1 = result
    
    *(arg1 i+ 0x2f8) = fconvert.s(float.t(result_1) / fconvert.t(100.0))
    return result
}

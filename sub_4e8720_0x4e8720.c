// 函数名称: sub_4e8720
// 虚拟地址: 0x4e8720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e8720(int32_t* arg1 @ esi, int32_t arg2, float arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t* edi = *arg1
    arg1[0x1c] = 0
    arg1[0x1d] = 0
    
    if (edi[1] != 0x18)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_FLANIM", &data_83f3d3, "AssetUtils.cpp", 0x2e6, 
            "FlanimGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx
    
    if (*edi == 0)
        edx = sub_520800(0, edx.b, edi, 0)
        
        if (*edi == 0)
            edx = sub_509540(edi)
    
    int32_t* eax_3 = *edi
    int32_t* edi_1 = *eax_3
    char* entry_ebx
    
    if (entry_ebx != 0)
        eax_3 = sub_4e8680(edi_1, entry_ebx)
        
        if (eax_3 == 0)
            arg1[3] = 0
            arg1[4] = edi_1[0xb]
            char* const eax_5 = *(*arg1 + 0x20)
            
            if (eax_5 == 0)
                eax_5 = &data_83f3d3
            
            char* const var_14_2 = eax_5
            char* var_18_1 = entry_ebx
            eax_3, edx = sub_4c5680("missing flanim action %s in %s")
        else
            edx = eax_3[1]
            arg1[3] = edx
            arg1[4] = eax_3[2] - eax_3[1] + 1
    else
        arg1[3] = entry_ebx
        arg1[4] = edi_1[0xb]
    
    char* edi_2 = *arg1
    
    if (*(edi_2 + 4) != 0x18)
        sub_4c5870("assetPtr->assetType == ASSET_TYPE_FLANIM", &data_83f3d3, "AssetUtils.cpp", 0x2e6, 
            "FlanimGetDef")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*edi_2 == 0)
        sub_520800(eax_3, edx.b, edi_2, 0)
        
        if (*edi_2 == 0)
            sub_509540(edi_2)
    
    int32_t* edi_3 = **edi_2
    void* eax_9
    
    if (entry_ebx != 0)
        eax_9 = sub_4e8680(edi_3, entry_ebx)
    
    long double x87_r7
    
    if (entry_ebx == 0 || eax_9 == 0)
        x87_r7 = fconvert.t(edi_3[0xa])
    else
        x87_r7 = fconvert.t(*(eax_9 + 0xc))
    
    int32_t eax_10 = arg1[4]
    long double x87_r7_1 = float.t(0)
    arg1[1] = fconvert.s(x87_r7_1)
    arg1[7] = 0
    arg1[6] = arg2
    
    if (eax_10 s> 1)
        x87_r7_1 = fconvert.t(fconvert.s(x87_r7)) * fconvert.t(arg3) / float.t(eax_10 - 1)
            * fconvert.t(data_8c4d34)
    
    arg1[5] = fconvert.s(x87_r7_1)
}

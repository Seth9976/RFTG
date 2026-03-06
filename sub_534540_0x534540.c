// 函数名称: sub_534540
// 虚拟地址: 0x534540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_534540(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_218
    int32_t* var_218
    int32_t eax_1 = __security_cookie ^ &var_218
    int32_t* edx = *arg1
    int32_t esi
    int32_t var_21c = esi
    int32_t edi
    int32_t var_220 = edi
    var_218 = nullptr
    void var_210
    void* var_214 = &var_210
    sub_534200(&var_218, edx)
    
    if (data_8bd344 s<= 0x6e)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_2 = *(data_8bd340 + 0x1b8)
    void* eax_5 = *(esi_2 + 0xc)
    
    if (eax_5 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_5 + 0x10) != 0xa)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
            "AttribMap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edx_1 = var_218
    int32_t eax_8 = 0
    int32_t ecx_2
    
    if (edx_1 s<= 0)
    label_534650:
        ecx_2 = *(esi_2 + 0x24)
    else
        void* ecx_1 = var_214
        
        while (*ecx_1 != 0x6e)
            eax_8 += 1
            ecx_1 += 8
            
            if (eax_8 s>= edx_1)
                goto label_534650
        
        ecx_2 = *(ecx_1 + 4)
    
    int32_t* entry_ebx
    
    if (ecx_2 == 0)
        entry_ebx[0x218].b = 0
        sub_5a6aba(eax_1 ^ &var_218)
        return eax_8
    
    entry_ebx[0x218].b = 1
    entry_ebx[0x3ae] = (*(*data_3078804 + 0x4c))(&var_218)
    
    if (data_8bd344 s<= 0x5b)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_3 = *(data_8bd340 + 0x16c)
    void* eax_12 = *(esi_3 + 0xc)
    
    if (eax_12 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_12 + 0x10) != 0xf)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", &data_83f3d3, 
            "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_4 = var_21c
    int32_t eax_15 = 0
    char** edx_5
    
    if (edx_4 s<= 0)
    label_534755:
        edx_5 = *(esi_3 + 0x24)
    else
        int32_t* ecx_4 = var_218
        
        while (*ecx_4 != 0x5b)
            eax_15 += 1
            ecx_4 = &ecx_4[2]
            
            if (eax_15 s>= edx_4)
                goto label_534755
        
        edx_5 = ecx_4[1]
    
    sub_5340c0(eax_15, edx_5, 0, entry_ebx, &var_21c)
    
    if (data_8bd344 s<= 0x5c)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_4 = *(data_8bd340 + 0x170)
    void* eax_17 = *(esi_4 + 0xc)
    
    if (eax_17 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_17 + 0x10) != 0xf)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", &data_83f3d3, 
            "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_7 = var_21c
    int32_t eax_20 = 0
    char** edx_8
    
    if (edx_7 s<= 0)
    label_53483f:
        edx_8 = *(esi_4 + 0x24)
    else
        int32_t* ecx_5 = var_218
        
        while (*ecx_5 != 0x5c)
            eax_20 += 1
            ecx_5 = &ecx_5[2]
            
            if (eax_20 s>= edx_7)
                goto label_53483f
        
        edx_8 = ecx_5[1]
    
    sub_5340c0(&var_21c, edx_8, 1, &entry_ebx[0x10b], &var_21c)
    
    if (data_8bd344 s<= 0x6d)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_5 = *(data_8bd340 + 0x1b4)
    void* eax_23 = *(esi_5 + 0xc)
    
    if (eax_23 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_23 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_10 = var_21c
    int32_t eax_26 = 0
    int32_t ecx_8
    
    if (edx_10 s<= 0)
    label_534932:
        ecx_8 = *(esi_5 + 0x24)
    else
        int32_t* ecx_7 = var_218
        
        while (*ecx_7 != 0x6d)
            eax_26 += 1
            ecx_7 = &ecx_7[2]
            
            if (eax_26 s>= edx_10)
                goto label_534932
        
        ecx_8 = ecx_7[1]
    
    entry_ebx[0x217] = ecx_8
    int32_t eax_27
    
    for (int32_t i = 0; i u< 0x51; i += 1)
        eax_27 = 0
        
        if (edx_10 s> 0)
            do
                if (var_218[eax_27 * 2] == i)
                    int32_t edx_11 = entry_ebx[0x216] * 5
                    entry_ebx[edx_11 + 0x219] = i
                    eax_27 = sub_534370(&var_21c, edx_11, i, &entry_ebx[edx_11 + 0x219])
                    edx_10 = var_21c
                    
                    if (eax_27.b != 0)
                        entry_ebx[0x216] += 1
                    
                    break
                
                eax_27 += 1
            while (eax_27 s< edx_10)
    
    int32_t var_10
    sub_5a6aba(var_10 ^ &var_21c)
    return eax_27
}

// 函数名称: sub_5311d0
// 虚拟地址: 0x5311d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5311d0(int32_t* arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    void* entry_ebx
    
    if (*(sub_531280(arg2, edx, entry_ebx) + 0x10) != 0xf)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", &data_83f3d3, 
            "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = *arg1
    int32_t eax_3 = 0
    
    if (edx_1 s> 0)
        int32_t* ecx_2 = arg1[1]
        
        do
            if (*ecx_2 == arg2)
                return ecx_2[1]
            
            eax_3 += 1
            ecx_2 = &ecx_2[2]
        while (eax_3 s< edx_1)
    
    if (arg2 s>= 0 && arg2 s< *(entry_ebx + 0x10))
        return *(*(*(entry_ebx + 0xc) + (arg2 << 2)) + 0x24)
    
    sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
        "AttribMap.cpp", 0x8b, "AttribTagGetField")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

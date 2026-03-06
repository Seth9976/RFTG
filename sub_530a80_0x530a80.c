// 函数名称: sub_530a80
// 虚拟地址: 0x530a80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_530a80(int32_t arg1 @ esi, void* arg2 @ edi)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    void* eax_1 = sub_531280(arg1, edx, arg2)
    int32_t ecx_1 = *(eax_1 + 0x10)
    void** entry_ebx
    
    if (ecx_1 == 8)
        if (arg1 s< 0 || arg1 s>= *(arg2 + 0x10))
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_1 = *entry_ebx
        
        if (eax_1 != *(*(*(arg2 + 0xc) + (arg1 << 2)) + 0x24))
            if (eax_1 != 0)
                eax_1 = _aligned_free_base(eax_1)
            
            *entry_ebx = nullptr
    else if (ecx_1 s<= 0 || ecx_1 s>= 0x12)
        if (arg1 s< 0 || arg1 s>= *(arg2 + 0x10))
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t* ecx_3 = *entry_ebx
        
        if (ecx_3 != *(*(*(arg2 + 0xc) + (arg1 << 2)) + 0x24))
            int32_t eax_3 = sub_4fed40(ecx_3, eax_1)
            *entry_ebx = nullptr
            return eax_3
    return eax_1
}

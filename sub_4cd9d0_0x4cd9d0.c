// 函数名称: sub_4cd9d0
// 虚拟地址: 0x4cd9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4cd9d0(void* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: char* entry_ebx
    char* entry_ebx
    
    if (entry_ebx == 0)
        sub_4c5870("pString", &data_83f3d3, "DefBin.cpp", 0x15b, "DefBinSerializeString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_1 = *(arg1 + 0x10)
    
    if (eax_1 != 0 && *eax_1 != 0)
        sub_4c5870(
            "!tSerializer.pDataSizeWithoutHWBuffers || *tSerializer.pDataSizeWithoutHWBuffers == 0", 
            &data_83f3d3, "DefBin.cpp", 0x15e, "DefBinSerializeString")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (*(arg1 + 0xc) == 0)
        *arg2 = *(arg1 + 8)
    
    char* eax_4 = entry_ebx
    int32_t* ecx
    
    do
        ecx.b = *eax_4
        eax_4 = &eax_4[1]
    while (ecx.b != 0)
    
    void* result = eax_4 - &eax_4[1]
    void* edi = result + 1
    
    if (*(arg1 + 0xc) == ecx.b)
        result = sub_5ab990(*(arg1 + 8) + *arg1, entry_ebx, edi)
    
    *(arg1 + 8) += edi
    return result
}

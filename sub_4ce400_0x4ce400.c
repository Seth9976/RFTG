// 函数名称: sub_4ce400
// 虚拟地址: 0x4ce400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4ce400(int32_t arg1, int32_t* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx = *arg2
    int32_t ecx = *arg2
    
    if (ecx == 0)
        sub_4c5870("offsetFromBase", &data_83f3d3, "DefBin.cpp", 0x2e0, "DefBinReadFixupString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char* eax_2 = arg3 + ecx
    *arg2 = eax_2
    
    do
        arg2.b = *eax_2
        eax_2 = &eax_2[1]
    while (arg2.b != 0)
    
    void* result
    result.b = eax_2 - &eax_2[1] + ecx + 1 s<= arg4
    return result
}

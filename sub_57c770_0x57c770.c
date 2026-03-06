// 函数名称: sub_57c770
// 虚拟地址: 0x57c770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_57c770(int128_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == arg2)
    if (arg1 == arg2)
        return 
    
    int32_t* eax = sub_4f4890(data_273ac20)
    int32_t ecx_1 = eax[1]
    
    if (arg1 s>= ecx_1)
        sub_4c5870("source < layout.numElements", &data_83f3d3, "Editor\UIEditor.cpp", 0x932, 
            "MoveItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    if (arg2 s>= ecx_1)
        sub_4c5870("dest < layout.numElements", &data_83f3d3, "Editor\UIEditor.cpp", 0x933, "MoveItem")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edx_1 = *eax
    int128_t* eax_5 = arg1 * 0x118 + edx_1
    void var_128
    __builtin_memcpy(&var_128, eax_5, 0x118)
    
    if (arg1 s< arg2)
        sub_5a6c10(eax_5, eax_5 + 0x118, (arg2 - arg1) * 0x118)
        __builtin_memcpy(arg2 * 0x118 + *eax, &var_128, 0x118)
        return 
    
    void* esi_4 = arg2 * 0x118
    int128_t* eax_7 = esi_4 + edx_1
    sub_5a6c10(eax_7 + 0x118, eax_7, (arg1 - arg2) * 0x118)
    __builtin_memcpy(*eax + esi_4, &var_128, 0x118)
}

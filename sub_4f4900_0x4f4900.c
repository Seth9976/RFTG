// 函数名称: sub_4f4900
// 虚拟地址: 0x4f4900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f4900(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t* esi
    int32_t* esi
    void* eax = sub_4f4890(esi)
    
    if (arg1 s< 0)
        sub_4c5870("index >= 0", &data_83f3d3, "UIDef.cpp", 0x104, "UIDefGetElement")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 s< *(eax + 4))
        return arg1 * 0x118 + *eax
    
    sub_4c5870("index < def.numElements", &data_83f3d3, "UIDef.cpp", 0x105, "UIDefGetElement")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

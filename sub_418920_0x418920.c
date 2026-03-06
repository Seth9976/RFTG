// 函数名称: sub_418920
// 虚拟地址: 0x418920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_418920(int32_t arg1)
{
    // 第一条实际指令: void* eax = sub_418690(arg1)
    void* eax = sub_418690(arg1)
    
    if (eax != 0)
        return eax
    
    if (arg1 s< 0)
        sub_4c5870("cidx >= 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0xaa, "RFTGGfxLookupGood")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 s> 0x3e8)
        sub_4c5870("cidx <= 1000", &data_83f3d3, "..\code\RFTGClient.cpp", 0xab, "RFTGGfxLookupGood")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_4 = sub_463e80(*(data_27e7a40 + 0x548) + 0x43960)
    *eax_4 = 1
    *(eax_4 + 0x7c) = arg1
    int32_t eax_6 = sub_4449a0(arg1)
    *(eax_4 + 0x80) = eax_6
    
    if (eax_6 != 0)
        return eax_4
    
    sub_4c5870("newGfx.kind != 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0xb1, "RFTGGfxLookupGood")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

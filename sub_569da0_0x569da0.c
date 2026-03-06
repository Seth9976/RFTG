// 函数名称: sub_569da0
// 虚拟地址: 0x569da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint8_tsub_569da0(int32_t arg1)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_2
    int32_t ecx_1
    eax_2, ecx_1 = sub_4d5990(*(eax + 4), arg1)
    int32_t eax_3 = sub_569b60(ecx_1, eax_2)
    
    if (eax_3 u<= 5)
        return (*(data_307920c + (eax_3 << 2) + 4) u>> 1).b & 1
    
    sub_4c5870("filterGroup >= 0 && filterGroup < FILTER_COUNT", &data_83f3d3, "Editor\EditMode.cpp", 
        0x76c, "EditModeGetLayoutFilter")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

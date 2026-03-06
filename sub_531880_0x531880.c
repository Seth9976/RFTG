// 函数名称: sub_531880
// 虚拟地址: 0x531880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_531880(void* arg1)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    int32_t ecx
    
    if (eax != 0)
        ecx = *(eax + 0x48)
    else
        ecx = 0
    
    if (arg1 == ecx)
        sub_4c5870("idWorld != GameGetCurrentWorld()", &data_83f3d3, "World.cpp", 0x98, "WorldDestroy")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_3 = sub_531d10(*(eax + 0x10), arg1)
    *(eax_3 + 0xc)
    sub_5335f0()
    sub_5332c0(arg1)
    sub_520f50(eax_3 + 4)
    void* eax_5 = data_27e7fcc
    
    if (eax_5 != 0)
        void* result = *(eax_5 + 0x10)
        int32_t ecx_2 = *(result + 0xc)
        *(result + 0xc) = zx.d(*(eax_3 + 0x10))
        *(eax_3 + 0x10) = ecx_2
        *(result + 0x10) -= 1
        return result
    
    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

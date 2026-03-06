// 函数名称: sub_40a5c0
// 虚拟地址: 0x40a5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_40a5c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    int32_t eax = data_27c05e8
    int32_t ebx
    ebx.b = 0
    
    if (eax == 1 || eax == 2 || eax == 3)
        ebx.b = 0
    else if (eax == 4)
        ebx.b = sub_4760f0(arg1)
    else if (eax == 7)
        ebx.b = sub_4779e0(arg1)
    else if (eax == 8)
        ebx.b = 0
    else if (eax == 5)
        sub_4075c0()
        ebx.b = sub_404bb0(arg1)
        sub_407670()
    else if (eax != 6)
        sub_4c5870("Halt", &data_83f3d3, "..\code\GameApp.cpp", 0x841, "GameAppInputHandle")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx_1 = arg1[1]
    
    if (ecx_1 == 0xd)
        char eax_5 = (arg1[2]).b
        
        if ((eax_5 & 4) != 0 && *arg1 == 1 && (eax_5 & 0x20) == 0)
            sub_40a9e0()
            sub_408a40()
            void* eax_6
            eax_6.b = 1
            return eax_6
    
    void* eax_7
    
    if (*(data_27e7fcc + 0x40) == 0)
        eax_7.b = 0
        return eax_7
    
    if (ecx_1 != 0x43 || arg1[2] != 7)
        eax_7.b = ebx.b
        return eax_7
    
    sub_4c5780("Crash tester!\n")
    sub_4c5870("Halt", &data_83f3d3, "..\code\GameApp.cpp", 0x85c, "GameAppInputHandle")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

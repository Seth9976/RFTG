// 函数名称: sub_4c6110
// 虚拟地址: 0x4c6110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c6110(int32_t arg1 @ esi)
{
    // 第一条实际指令: void var_c
    void var_c
    char result
    int80_t st0
    st0, result = sub_4c6230(&var_c)
    
    if (result == 0)
        return result
    
    if (arg1 u> 6)
        sub_4c5870("Halt", &data_83f3d3, "xPlatformPC.cpp", 0x175, "XSetCursor")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    switch (arg1)
        case 0
            return SetCursor(nullptr)
        case 1
            return SetCursor(LoadCursorA(nullptr, 0x7f00))
        case 2
            return SetCursor(LoadCursorA(nullptr, 0x7f89))
        case 3
            return SetCursor(LoadCursorA(nullptr, 0x7f84))
        case 4
            return SetCursor(LoadCursorA(nullptr, 0x7f85))
        case 5
            return SetCursor(LoadCursorA(nullptr, 0x7f82))
        case 6
            return SetCursor(LoadCursorA(nullptr, 0x7f83))
}

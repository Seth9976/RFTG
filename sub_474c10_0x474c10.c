// 函数名称: sub_474c10
// 虚拟地址: 0x474c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_474c10(int32_t arg1, char** arg2 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    int32_t ecx
    
    if (arg1 == 0)
        int32_t var_10_2 = ecx
        sub_4c4a50(arg2, "Easy AI %d")
        return arg2
    
    if (arg1 == 1)
        int32_t var_10_1 = ecx
        sub_4c4a50(arg2, "AI %d")
        return arg2
    
    if (arg1 == 2)
        int32_t var_10 = ecx
        sub_4c4a50(arg2, "Hard AI %d")
        return arg2
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RftgTitleScreen.cpp", 0x28d, "AIName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

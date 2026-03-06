// 函数名称: sub_4077f0
// 虚拟地址: 0x4077f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4077f0()
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (data_27e7a40 != 0)
        char const* const var_4 = "ExitSServer"
        var_8 = 0x98
        char const* const var_c = "..\code\GameApp.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "gCClient == NULL"
    else if (data_27e7a44 == 0)
        char const* const var_4_1 = "ExitSServer"
        var_8 = 0x99
        char const* const var_c_1 = "..\code\GameApp.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "gSServer != NULL"
    else if (data_27e7a48 == 0)
        if (data_27e7a4c == 0)
            data_27e7a44 = 0
            return 
        
        char const* const var_4_3 = "ExitSServer"
        var_8 = 0x9b
        char const* const var_c_3 = "..\code\GameApp.cpp"
        char* const var_10_3 = &data_83f3d3
        var_14 = "gSyncGame == NULL"
    else
        char const* const var_4_2 = "ExitSServer"
        var_8 = 0x9a
        char const* const var_c_2 = "..\code\GameApp.cpp"
        char* const var_10_2 = &data_83f3d3
        var_14 = "gSGame == NULL"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\GameApp.cpp", var_8, "ExitSServer")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

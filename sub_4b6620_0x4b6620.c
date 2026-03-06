// 函数名称: sub_4b6620
// 虚拟地址: 0x4b6620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b6620(int32_t arg1)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (data_27e7a40 != 0)
        char const* const var_4 = "EnterSGame"
        var_8 = 0x93
        char const* const var_c = "..\code\SServer.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "gCClient == NULL"
    else if (data_27e7a44 == 0)
        char const* const var_4_1 = "EnterSGame"
        var_8 = 0x94
        char const* const var_c_1 = "..\code\SServer.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "gSServer != NULL"
    else if (data_27e7a48 == 0)
        if (data_27e7a4c == 0)
            data_27e7a48 = arg1
            data_27e7a4c = arg1 + 0x18
            return arg1 + 0x18
        
        char const* const var_4_3 = "EnterSGame"
        var_8 = 0x96
        char const* const var_c_3 = "..\code\SServer.cpp"
        char* const var_10_3 = &data_83f3d3
        var_14 = "gSyncGame == NULL"
    else
        char const* const var_4_2 = "EnterSGame"
        var_8 = 0x95
        char const* const var_c_2 = "..\code\SServer.cpp"
        char* const var_10_2 = &data_83f3d3
        var_14 = "gSGame == NULL"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\SServer.cpp", var_8, "EnterSGame")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

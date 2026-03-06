// 函数名称: sub_4b67a0
// 虚拟地址: 0x4b67a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b67a0()
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (data_27e7a44 != 0)
        void* eax_2 = data_27e7a48
        
        if (eax_2 != 0)
            return *(eax_2 + 0x1f0)
        
        char const* const var_4_1 = "SActiveSGameID"
        var_8 = 0xaf
        char const* const var_c_1 = "..\code\SServer.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "gSGame != NULL"
    else
        char const* const var_4 = "SActiveSGameID"
        var_8 = 0xae
        char const* const var_c = "..\code\SServer.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "gSServer != NULL"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\SServer.cpp", var_8, "SActiveSGameID")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

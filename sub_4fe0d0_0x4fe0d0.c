// 函数名称: sub_4fe0d0
// 虚拟地址: 0x4fe0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4fe0d0()
{
    // 第一条实际指令: int32_t eax_4 = data_be1cd8
    int32_t eax_4 = data_be1cd8
    
    if (eax_4 != 0)
        if (eax_4 != 1)
            sub_4c5870("Halt", &data_83f3d3, "GameCenter.cpp", 0x214, "GameCenterDisconnect")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        SteamAPI_Shutdown()
    
    data_be1cd8 = 0
    return sub_4c4590(&data_83f3d3)
}

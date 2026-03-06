// 函数名称: sub_4fe140
// 虚拟地址: 0x4fe140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4fe140()
{
    // 第一条实际指令: int32_t result_1 = data_be1cd8
    int32_t result_1 = data_be1cd8
    int32_t* result = result_1
    
    if (result_1 == 0)
        return result
    
    if (result == 1)
        data_be1ce8 = 2
        return sub_4c4590((**SteamFriends())())
    
    sub_4c5870("Halt", &data_83f3d3, "GameCenter.cpp", 0x247, "GameCenterQueryUsername")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

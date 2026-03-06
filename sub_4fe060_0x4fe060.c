// 函数名称: sub_4fe060
// 虚拟地址: 0x4fe060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fe060()
{
    // 第一条实际指令: if (data_be1cd8 == 0)
    if (data_be1cd8 == 0)
        if (sub_4fdff0() != 1)
            return sub_4c5680("Gamecenter Connect fail")
        
        int32_t result = sub_4c5680("Gamecenter Connect success")
        data_be1cd8 = 1
        return result
    
    sub_4c5870("gGameCenter.type == GAME_CENTER_NONE", &data_83f3d3, "GameCenter.cpp", 0x1c4, 
        "GameCenterConnect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

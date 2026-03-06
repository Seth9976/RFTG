// 函数名称: sub_419230
// 虚拟地址: 0x419230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_419230()
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (*(data_27e7a40 + 0x2c4960) == 1)
        if (data_27c0720 == 1)
            int32_t ecx_1 = *(data_27e7a54 + 0x204) * 3
            int32_t eax_2 = data_27c0770
            
            if (eax_2 s< *((ecx_1 << 3) + &data_8c77f4))
                return (eax_2 << 4) + (&data_8c77f0)[ecx_1 * 2]
            
            return 0x315fa20
        
        char const* const var_4_1 = "GetCurrentTutorialAIAction"
        var_8 = 0x4bd
        char const* const var_c_1 = "..\code\RFTGClient.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "gGameApp.gameLocal.setup.startParams.campaign == CAMPAIGN_RFTG_TUTORIAL"
    else
        char const* const var_4 = "GetCurrentTutorialAIAction"
        var_8 = 0x4bc
        char const* const var_c = "..\code\RFTGClient.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "gCClient->activeGame.gameType == GAME_LOCAL"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\RFTGClient.cpp", var_8, "GetCurrentTutorialAIAction")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

// 函数名称: sub_4192d0
// 虚拟地址: 0x4192d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4192d0()
{
    // 第一条实际指令: void* result = data_27e7a40
    void* result = data_27e7a40
    char const* const var_14
    int32_t var_8
    
    if (*(result + 0x2c4960) == 1)
        if (data_27c0720 == 1)
            data_27c0770 += 1
            return result
        
        char const* const var_4_1 = "AdvanceTutorialAIAction"
        var_8 = 0x4cb
        char const* const var_c_1 = "..\code\RFTGClient.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "gGameApp.gameLocal.setup.startParams.campaign == CAMPAIGN_RFTG_TUTORIAL"
    else
        char const* const var_4 = "AdvanceTutorialAIAction"
        var_8 = 0x4ca
        char const* const var_c = "..\code\RFTGClient.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "gCClient->activeGame.gameType == GAME_LOCAL"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\RFTGClient.cpp", var_8, "AdvanceTutorialAIAction")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

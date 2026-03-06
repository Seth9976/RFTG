// 函数名称: sub_419340
// 虚拟地址: 0x419340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_419340()
{
    // 第一条实际指令: void* ecx_2 = data_27e7a40
    void* ecx_2 = data_27e7a40
    char const* const var_14
    int32_t var_8_1
    
    if (*(ecx_2 + 0x2c4960) == 1)
        if (data_27c0720 == 1)
            void* ecx = *(ecx_2 + 0x548)
            int32_t eax_3 = *(data_27e7a54 + 0x204) * 3
            void* result = &(&data_8c77e8)[eax_3 * 2]
            
            if (data_27c076c == *((eax_3 << 3) + &data_8c77ec) - 1)
                return result
            
            data_27c076c += 1
            *(ecx + 0x438a4) = fconvert.s(float.t(0))
            return sub_41ad10(*result + (data_27c076c << 3), 0)
        
        char const* const var_4_1 = "TutorialAdvance"
        var_8_1 = 0x4d5
        char const* const var_c_1 = "..\code\RFTGClient.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "gGameApp.gameLocal.setup.startParams.campaign == CAMPAIGN_RFTG_TUTORIAL"
    else
        char const* const var_4 = "TutorialAdvance"
        var_8_1 = 0x4d4
        char const* const var_c = "..\code\RFTGClient.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "gCClient->activeGame.gameType == GAME_LOCAL"
    
    sub_4c5870(var_14, &data_83f3d3, "..\code\RFTGClient.cpp", var_8_1, "TutorialAdvance")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

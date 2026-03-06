// 函数名称: sub_4637c0
// 虚拟地址: 0x4637c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4637c0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax = arg3[1]
    int32_t eax = arg3[1]
    
    if (eax == 0)
        sub_4c5870("game.gameType != GAME_NONE", &data_83f3d3, "..\code\RFTGClient.cpp", 0x68fb, 
            "PlayerGamestate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t entry_ebx
    
    if (eax == 4)
        int32_t edx = data_27d40e0
        int32_t eax_2 = 0
        
        if (edx s> 0)
            void* ecx = &data_27d404c
            
            do
                if (*ecx == entry_ebx)
                    if (arg4 == 0 || arg4 == eax_2 * 0x30 + 0x27d4020)
                        return eax_2 * 0x4e28 + 0x27d4184
                    
                    sub_4c5870(
                        "playerName == NULL || playerName == gGameApp.gameReplay.setup.players[i].name", 
                        &data_83f3d3, "..\code\RFTGClient.cpp", 0x6902, "PlayerGamestate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_2 += 1
                ecx += 0x30
            while (eax_2 s< edx)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6907, "PlayerGamestate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax == 1)
        int32_t edx_1 = data_27c06d4
        int32_t eax_7 = 0
        
        if (edx_1 s> 0)
            int32_t* ecx_4 = &data_27c0640
            
            do
                if (*ecx_4 == entry_ebx)
                    if (arg4 == 0 || arg4 == eax_7 * 0x30 + 0x27c0614)
                        return &(&data_27c0778)[eax_7 * 0x138a]
                    
                    sub_4c5870(
                        "playerName == NULL || playerName == gGameApp.gameLocal.setup.players[i].name", 
                        &data_83f3d3, "..\code\RFTGClient.cpp", 0x690f, "PlayerGamestate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_7 += 1
                ecx_4 = &ecx_4[0xc]
            while (eax_7 s< edx_1)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6914, "PlayerGamestate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax == 2)
        int32_t edi = *arg3
        int32_t esi_1 = data_27e7a40
        int32_t ecx_6 = edi * 0x1f8
        int32_t edx_5 = *(ecx_6 + esi_1 + 0xc18)
        int32_t eax_12 = 0
        
        if (edx_5 s> 0)
            int32_t* esi_2 = ecx_6 + esi_1 + 0xae0
            
            do
                if (*esi_2 == entry_ebx)
                    if (arg4 == 0 || arg4 == eax_12 * 0x50 + ecx_6 + data_27e7a40 + 0xae4)
                        return eax_12 * 0x4e28 + edi * 0x138a8 + data_27e7a40 + 0x51bc
                    
                    sub_4c5870(
                        "playerName == NULL || playerName == gCClient->gameDescsNetwork[game.gameIndex]."
                    "players[i].name", 
                        &data_83f3d3, "..\code\RFTGClient.cpp", 0x691c, "PlayerGamestate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_12 += 1
                esi_2 = &esi_2[0x14]
            while (eax_12 s< edx_5)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6921, "PlayerGamestate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax != 5)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x6932, "PlayerGamestate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t edi_3 = *arg3
    int32_t esi_6 = data_27e7a40
    int32_t ecx_10 = edi_3 * 0x1f8
    int32_t edx_7 = *(ecx_10 + esi_6 + 0x2c9190)
    int32_t eax_17 = 0
    
    if (edx_7 s> 0)
        int32_t* esi_7 = ecx_10 + esi_6 + 0x2c9058
        
        do
            if (*esi_7 == entry_ebx)
                if (arg4 == 0 || arg4 == eax_17 * 0x50 + ecx_10 + data_27e7a40 + 0x2c905c)
                    return eax_17 * 0x4e28 + edi_3 * 0x138a8 + data_27e7a40 + 0x2c9834
                
                sub_4c5870(
                    "playerName == NULL || playerName == gCClient->gameDescsResumeForStatsOnly[game."
                "gameIndex].players[i].name", 
                    &data_83f3d3, "..\code\RFTGClient.cpp", 0x6929, "PlayerGamestate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_17 += 1
            esi_7 = &esi_7[0x14]
        while (eax_17 s< edx_7)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x692e, "PlayerGamestate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

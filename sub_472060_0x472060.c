// 函数名称: sub_472060
// 虚拟地址: 0x472060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_472060(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx = sx.d(*(arg1 + 0x458))
    int32_t ebx = sx.d(*(arg1 + 0x458))
    void* edi = data_27e7a40
    int32_t eax_1 = *(edi + 0x2c4960)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->activeGame.gameType != GAME_NONE", &data_83f3d3, 
            "..\code\RFTGShared.cpp", 0x1356, "player_notify_rotation")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_1 == 4)
        if (ebx s> 0)
            int32_t esi_1 = 0
            void* edx_1 = &data_27d404c
            arg1 = ebx
            void* i
            
            do
                int32_t eax_3 = *edx_1
                
                if (eax_3 != 0)
                    *edx_1 = eax_3 - 1
                else
                    *edx_1 = ebx - 1
                
                int32_t eax_5 = *(edi + 0x548)
                int32_t ecx_2 = *(esi_1 + eax_5 + 0x21c)
                int32_t* eax_6 = esi_1 + eax_5 + 0x21c
                int32_t ecx_3
                
                if (ecx_2 != 0)
                    ecx_3 = ecx_2 - 1
                else
                    ecx_3 = ebx - 1
                
                edx_1 += 0x30
                esi_1 += 0x1f98
                i = arg1
                arg1 -= 1
                *eax_6 = ecx_3
            while (i != 1)
        
        int32_t eax_7 = *(edi + 0x74)
        
        if (eax_7 != 0)
            *(edi + 0x74) = eax_7 - 1
        else
            *(edi + 0x74) = ebx - 1
        
        if (*(edi + 0x74) != arg2)
            sub_4c5870("gCClient->localPlayerWho == who", &data_83f3d3, "..\code\RFTGShared.cpp", 
                0x1360, "player_notify_rotation")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else if (eax_1 == 1)
        if (ebx s> 0)
            int32_t esi_2 = 0
            int32_t* edx_3 = &data_27c0640
            arg1 = ebx
            void* i_1
            
            do
                int32_t eax_10 = *edx_3
                int32_t eax_11
                
                if (eax_10 != 0)
                    eax_11 = eax_10 - 1
                else
                    eax_11 = ebx - 1
                
                *edx_3 = eax_11
                int32_t* eax_12 = esi_2 + *(edi + 0x548) + 0x21c
                int32_t ecx_5 = *eax_12
                int32_t ecx_6
                
                if (ecx_5 != 0)
                    ecx_6 = ecx_5 - 1
                else
                    ecx_6 = ebx - 1
                
                edx_3 = &edx_3[0xc]
                esi_2 += 0x1f98
                i_1 = arg1
                arg1 -= 1
                *eax_12 = ecx_6
            while (i_1 != 1)
        
        int32_t eax_13 = *(edi + 0x74)
        
        if (eax_13 != 0)
            *(edi + 0x74) = eax_13 - 1
        else
            *(edi + 0x74) = ebx - 1
        
        if (*(edi + 0x74) != arg2)
            sub_4c5870("gCClient->localPlayerWho == who", &data_83f3d3, "..\code\RFTGShared.cpp", 
                0x136b, "player_notify_rotation")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else if (eax_1 == 5 || eax_1 == 2)
        void* eax_16 = sub_404690(edi + 0x2c495c)
        
        if (ebx s> 0)
            int32_t esi_3 = 0
            int32_t* ecx_8 = eax_16 + 8
            int32_t edi_1 = 0
            
            do
                int32_t eax_17 = *ecx_8
                int32_t eax_18
                
                if (eax_17 != 0)
                    eax_18 = eax_17 - 1
                else
                    eax_18 = ebx - 1
                
                void* edx_5 = data_27e7a40
                *ecx_8 = eax_18
                int32_t eax_19 = *(edx_5 + 0x548)
                int32_t edx_6 = *(esi_3 + eax_19 + 0x21c)
                int32_t edx_7
                
                if (edx_6 != 0)
                    edx_7 = edx_6 - 1
                else
                    edx_7 = ebx - 1
                
                *(esi_3 + eax_19 + 0x21c) = edx_7
                
                if (*ecx_8 == ecx_8[-1])
                    sub_4c5870("setup.players[i].curWho != setup.players[i].startWho", &data_83f3d3, 
                        "..\code\RFTGShared.cpp", 0x1377, "player_notify_rotation")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                edi_1 += 1
                esi_3 += 0x1f98
                ecx_8 = &ecx_8[0x14]
            while (edi_1 s< ebx)
        
        void* ecx_9 = data_27e7a40
        int32_t eax_22 = *(ecx_9 + 0x74)
        
        if (eax_22 != 0)
            *(ecx_9 + 0x74) = eax_22 - 1
        else
            *(ecx_9 + 0x74) = ebx - 1
        
        if (*(ecx_9 + 0x74) != arg2)
            sub_4c5870("gCClient->localPlayerWho == who", &data_83f3d3, "..\code\RFTGShared.cpp", 
                0x137c, "player_notify_rotation")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edi = data_27e7a40
    
    int32_t esi_4 = *(edi + 0x74)
    
    if (esi_4 != 0xffffffff && *sub_46b2b0(esi_4) == 0)
        void* edi_2 = data_27e7a40
        void* edx_8 = *(edi_2 + 0x548)
        int32_t eax_28 = 0
        
        if (edx_8 == 0)
            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                "GetGame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* ecx_12 = edx_8 + 0x218
        
        while (true)
            if (eax_28 s>= sx.d(*(*(edx_8 + 0x45844) + 0x458)))
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x2e0, "PlayerSeatToWho")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_12 == 0)
                break
            
            eax_28 += 1
            ecx_12 += 0x1f98
        
        int32_t result = eax_28 * 0x1f98
        
        if (*(result + edx_8 + 0x21c) == *(edi_2 + 0x74))
            return result
        
        sub_4c5870("PlayerSeatToWho(SEAT_LOCAL) == gCClient->localPlayerWho", &data_83f3d3, 
            "..\code\RFTGShared.cpp", 0x1380, "player_notify_rotation")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_4c5870("PlayerWhoToSeat(gCClient->localPlayerWho) == SEAT_LOCAL", &data_83f3d3, 
        "..\code\RFTGShared.cpp", 0x137f, "player_notify_rotation")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

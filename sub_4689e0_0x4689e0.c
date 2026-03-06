// 函数名称: sub_4689e0
// 虚拟地址: 0x4689e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_4689e0(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    bool cond:0 = *(arg2 + 4) == 0xf425a
    void* var_20 = arg2
    
    if (not(cond:0))
        sub_4c5870("msg.messageType == MSG_TOSERVER_RFTG_PLAYER_ASYNC_LOG_MSG", &data_83f3d3, 
            "..\code\RFTGServer.cpp", 0xc2, "RFTGServerHandleAsyncLogMessage")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1[1] != *(arg2 + 0x14))
        sub_4c5870("ValidatePlayer(sourceSplayer, playerLogMsg.playerDBID)", &data_83f3d3, 
            "..\code\RFTGServer.cpp", 0xc5, "RFTGServerHandleAsyncLogMessage")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_5 = sub_468810(*(arg2 + 0x10))
    
    if (eax_5 != 0)
        int32_t edx = *(eax_5 + 0x140)
        
        if (edx s> 0)
            int32_t ecx = 0
            
            do
                if (*eax_5 == *(arg2 + 0x14))
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_38_1 = &arg1[4]
                        int32_t var_3c_1 = arg1[1]
                        int32_t var_40_1 = *(arg2 + 0x10)
                        sub_4c57f0("validated log msg game: %d, player:%d %s")
                    
                    *(arg2 + 0x10)
                    void* eax_10 = sub_468860()
                    int32_t eax_12 = sub_473030(*(eax_10 + 0x1d0))
                    void* eax_13 = sub_4688a0(eax_10, arg1[1])
                    void* eax_14 = sub_468900(*(arg2 + 0x18), arg2 + 0x1c)
                    
                    if (eax_12 s< 0)
                        *(eax_13 + 0x30) = 6
                    
                    void* esi_5 = eax_10
                    int32_t i_1 = 0
                    
                    if (*(esi_5 + 0x140) s> 0)
                        void** esi_6 = esi_5 + 0x38
                        int32_t i
                        
                        do
                            uint32_t eax_15
                            int32_t edx_2
                            eax_15, edx_2 = sub_468990(&esi_6[-0xe])
                            
                            if (eax_15 != 0)
                                if (eax_15 != arg1)
                                    sub_4c75d0(eax_15, edx_2, *eax_15, *(var_20 + 8), 0xf4254, 
                                        arg2 + 0xc)
                                else
                                    if (*(eax_15 + 4) != *(arg2 + 0x14))
                                        sub_4c5870(
                                            "SGetPlayerDBID(*player) == playerLogMsg.playerDBID", 
                                            &data_83f3d3, "..\code\RFTGServer.cpp", 0xe1, 
                                            "RFTGServerHandleAsyncLogMessage")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    if (eax_14 s<= *esi_6)
                                        sub_4c5870(
                                            "newLogLength > gameDesc.players[i].choice_pos_current", 
                                            &data_83f3d3, "..\code\RFTGServer.cpp", 0xe2, 
                                            "RFTGServerHandleAsyncLogMessage")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    *esi_6 = eax_14
                            
                            i = i_1 + 1
                            esi_6 = &esi_6[0x14]
                            i_1 = i
                        while (i s< *(eax_10 + 0x140))
                        esi_5 = eax_10
                    
                    void* ecx_5 = *arg1
                    var_20 = *(arg2 + 0xc)
                    
                    if (ecx_5 != 0)
                        int32_t** edx_4 = data_27e7bb8
                        uint32_t eax_20 = zx.d(ecx_5.w)
                        
                        if (eax_20 u< edx_4[1])
                            void* eax_22 = &(*edx_4)[eax_20 * 0x13]
                            
                            if (*(eax_22 + 0x48) == ecx_5)
                                int32_t var_14
                                int32_t* var_38_4 = &var_14
                                void* var_3c_2 = eax_22 + 0x3c
                                int32_t var_10_1 = 4
                                int32_t var_c_1 = 0xf4255
                                var_14 = 0xfeedface
                                void* ecx_6
                                int32_t** edx_5
                                ecx_6, edx_5 = sub_4c72b0(0xc, edx_4, ecx_5)
                                void** var_40_2 = &var_20
                                void* var_44_1 = eax_22 + 0x3c
                                sub_4c72b0(4, edx_5, ecx_6)
                    
                    void* result = sub_4b6cc0(esi_5)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return result
                
                ecx += 1
                eax_5 += 0x50
            while (ecx s< edx)
    
    sub_4c5870("ValidatePlayerGame(playerLogMsg.gameDBID, playerLogMsg.playerDBID)", &data_83f3d3, 
        "..\code\RFTGServer.cpp", 0xc6, "RFTGServerHandleAsyncLogMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

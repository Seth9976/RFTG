// 函数名称: sub_468d10
// 虚拟地址: 0x468d10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_468d10(void* arg1, void* arg2)
{
    // 第一条实际指令: if (*(arg2 + 4) != 0xf425b)
    if (*(arg2 + 4) != 0xf425b)
        sub_4c5870("msg.messageType == MSG_TOSERVER_RFTG_PLAYER_ASYNC_WAIT", &data_83f3d3, 
            "..\code\RFTGServer.cpp", 0x117, "RFTGServerHandleAsyncWaitMessage")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = *(arg1 + 4)
    int32_t esi = *(arg2 + 0xc)
    void* eax_2 = sub_468810(esi)
    
    if (eax_2 != 0)
        int32_t edx_1 = *(eax_2 + 0x140)
        int32_t ecx_1 = 0
        
        if (edx_1 s> 0)
            do
                if (*eax_2 == edi)
                    void* eax_4 = sub_468810(esi)
                    
                    if (eax_4 != 0)
                        int32_t edx_2 = *(eax_4 + 0x140)
                        int32_t ecx_2 = 0
                        
                        if (edx_2 s> 0)
                            do
                                if (*eax_4 == *(arg2 + 0x10))
                                    if (*(data_8c8710 + 0xc) == 2)
                                        void* var_20_1 = arg1 + 0x10
                                        int32_t var_24_1 = edi
                                        int32_t var_28_1 = esi
                                        sub_4c57f0("validated log msg game: %d, player:%d %s")
                                    
                                    *(arg2 + 0xc)
                                    void* eax_7 = sub_468860()
                                    void* eax_8 = sub_4688a0(eax_7, *(arg2 + 0x10))
                                    void* result = *(arg2 + 0x14)
                                    int32_t ecx_5 = *(eax_8 + 0x34)
                                    
                                    if (result s<= ecx_5)
                                        return result
                                    
                                    *(eax_8 + 0x34) = result
                                    
                                    if (*(eax_8 + 0x38) s>= ecx_5)
                                        char edx_5 = *(sub_4688a0(eax_7, *eax_8) + 0x4c)
                                        *(sub_4688a0(eax_7, *(arg1 + 4)) + 0x4c) = 0
                                        
                                        if (edx_5 == 0)
                                            sub_4b8f40()
                                            *(sub_4688a0(eax_7, *eax_8) + 0x4c) = 1
                                    
                                    void* eax_13 = sub_4b7170(*(arg2 + 0x10))
                                    
                                    if (eax_13 != 0)
                                        *(eax_8 + 0x3c) = 0
                                        int32_t eax_15 = sub_473030(*(eax_7 + 0x1d0))
                                        
                                        if (*(eax_8 + 0x3c) s> eax_15)
                                            *(eax_8 + 0x30) = 6
                                        
                                        sub_468c90(eax_15, 0, *(arg2 + 0xc), eax_13)
                                    
                                    return sub_4b6cc0(eax_7)
                                
                                ecx_2 += 1
                                eax_4 += 0x50
                            while (ecx_2 s< edx_2)
                    
                    sub_4c5870("ValidatePlayerGame(waitInfo.gameDBID, waitInfo.playerDBID)", 
                        &data_83f3d3, "..\code\RFTGServer.cpp", 0x11c, 
                        "RFTGServerHandleAsyncWaitMessage")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                ecx_1 += 1
                eax_2 += 0x50
            while (ecx_1 s< edx_1)
    
    sub_4c5870("ValidatePlayerGame(waitInfo.gameDBID, SGetPlayerDBID(sourceSplayer))", &data_83f3d3, 
        "..\code\RFTGServer.cpp", 0x11b, "RFTGServerHandleAsyncWaitMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

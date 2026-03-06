// 函数名称: sub_42f2e0
// 虚拟地址: 0x42f2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_42f2e0(void* arg1, int32_t arg2, int32_t arg3, int128_t* arg4, void* arg5)
{
    // 第一条实际指令: void* result
    void* result
    int32_t edx
    result, edx = sub_4045b0(arg2)
    void* result_1 = result
    int32_t var_c = edx
    
    if (edx != 0)
        if (edx != 2)
            sub_4c5870("gameHandle.gameType == GAME_NETWORK", &data_83f3d3, "..\code\RFTGClient.cpp", 
                0x2145, "RFTGHandleAsyncLogMessage")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        result *= 0x138a8
        
        if (*(result + data_27e7a40 + 0x51b8) != 0)
            int32_t eax_2
            int32_t edx_1
            eax_2, edx_1 = sub_4048f0(sub_404690(&result_1), arg3)
            void* eax_3 = sub_4637c0(eax_2, edx_1, &result_1, 0)
            void* esi_2 = data_27e7a40
            
            if (*(esi_2 + 0x2c4960) == 2 && *(*(esi_2 + 0x2c495c) * 0x1f8 + esi_2 + 0xcac) == arg2)
                int32_t edx_5 =
                    *(sub_4048f0(sub_404690(esi_2 + 0x2c495c), arg3) * 0xb4 + arg1 + 0xc4) * 2
                
                if (*eax_3 != edx_5 * 2)
                    sub_4c5870("playerState.logLengthBytesCurrent == g->p[who].choice_size * 4", 
                        &data_83f3d3, "..\code\RFTGClient.cpp", 0x2154, "RFTGHandleAsyncLogMessage")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                esi_2 = data_27e7a40
            
            sub_5ab990(*eax_3 + eax_3 + 8, arg4, arg5)
            *eax_3 += arg5
            result = *eax_3
            *(eax_3 + 4) = result
            bool cond:1_1 = *(esi_2 + 0x2c4960) != 2
            data_27e7a78 = result
            data_27e7a80 = 1
            
            if (not(cond:1_1))
                result = *(esi_2 + 0x2c495c) * 0x1f8
                
                if (*(result + esi_2 + 0xcac) == arg2)
                    if (arg1 != *(esi_2 + 0x548) + 0x4397c)
                        sub_4c5870("g == &gCClient->rftgClientData->rtfg_real_game", &data_83f3d3, 
                            "..\code\RFTGClient.cpp", 0x2164, "RFTGHandleAsyncLogMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(arg1 + 0x18) != 0)
                        sub_4c5870("!g->simulation", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2165, 
                            "RFTGHandleAsyncLogMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t eax_15 = sub_4048f0(sub_404690(esi_2 + 0x2c495c), arg3)
                    void* esi_7 = eax_15 * 0xb4 + arg1
                    *(sub_46b2b0(eax_15) + 8) = 0
                    sub_5ab990(*(esi_7 + 0xc0) + (*(esi_7 + 0xc4) << 2), arg4, arg5)
                    void* edx_13 = arg5 & 0x80000003
                    bool cond:2_1 = edx_13 == 0
                    
                    if (edx_13 s< 0)
                        cond:2_1 = ((edx_13 - 1) | 0xfffffffc) == 0xffffffff
                    
                    if (not(cond:2_1))
                        sub_4c5870("dataLen % 4 == 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0x216d, 
                            "RFTGHandleAsyncLogMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t eax_20
                    int32_t edx_17
                    edx_17:eax_20 = sx.q(arg5)
                    *(esi_7 + 0xc4) += (eax_20 + (edx_17 & 3)) s>> 2
                    result = data_27e7a40
                    *(*(result + 0x548) + 0x2c0a1) = 1
                    
                    if (*(esi_7 + 0xc4) * 4 != *eax_3)
                        sub_4c5870("g->p[who].choice_size * 4 == playerState.logLengthBytesCurrent", 
                            &data_83f3d3, "..\code\RFTGClient.cpp", 0x2172, "RFTGHandleAsyncLogMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
    
    return result
}

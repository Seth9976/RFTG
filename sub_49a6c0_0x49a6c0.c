// 函数名称: sub_49a6c0
// 虚拟地址: 0x49a6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_49a6c0(int32_t** arg1, int32_t* arg2, int128_t* arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t* eax_3 = *(arg4 * 0xb4 + arg3 + 0xc0) + (*(arg4 * 0xb4 + arg3 + 0xc4) << 2)
    *eax_3 = arg5
    eax_3[1] = *arg6
    void* eax_4
    
    if (arg2 == 0)
        eax_3[2] = 0
        eax_4 = &eax_3[3]
    else
        eax_3[2] = *arg2
        int32_t i = 0
        eax_4 = &eax_3[3]
        
        if (*arg2 s> 0)
            do
                *eax_4 = *(arg7 + (i << 2))
                i += 1
                eax_4 += 4
            while (i s< *arg2)
    
    int32_t** eax_5
    
    if (arg1 == 0)
        *eax_4 = 0
        eax_5 = eax_4 + 4
    else
        arg2 = *arg1
        *eax_4 = arg2
        eax_5 = eax_4 + 4
        
        if (*arg1 s> 0)
            int32_t i_1 = 0
            
            do
                arg2 = *(arg8 + (i_1 << 2))
                *eax_5 = arg2
                i_1 += 1
                eax_5 = &eax_5[1]
            while (i_1 s< *arg1)
    
    int32_t ecx_7 = *(arg4 * 0xb4 + arg3 + 0xc4)
    int32_t eax_7 = (eax_5 - *(arg4 * 0xb4 + arg3 + 0xc0)) s>> 2
    *(arg4 * 0xb4 + arg3 + 0xc4) = eax_7
    int128_t* result = arg3
    
    if (*(result + 0x18) == 0)
        void* eax_8 = data_27e7a40
        int32_t ecx_8 = *(eax_8 + 0x2c4960)
        
        if (ecx_8 == 0)
            sub_4c5870("gCClient->activeGame.gameType != GAME_NONE", &data_83f3d3, 
                "..\code\rftg\ai.cpp", 0x2547, "ai_finish_choice")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (ecx_8 == 2)
            sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\ai.cpp", 0x2551, "ai_finish_choice")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_11 = sub_4637c0(eax_8, arg2, eax_8 + 0x2c495c, 0)
        result = sub_5ab990(eax_11 + (ecx_7 << 2) + 8, eax_3, (eax_7 - ecx_7) * 4)
        int32_t esi_3 = *(arg4 * 0xb4 + arg3 + 0xc4) * 4
        *eax_11 = esi_3
        *(eax_11 + 4) = esi_3
    
    return result
}

// 函数名称: sub_424120
// 虚拟地址: 0x424120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __convention("regparm")sub_424120(int32_t arg1, char** arg2)
{
    // 第一条实际指令: void* ebx = data_27e7a40
    void* ebx = data_27e7a40
    int32_t var_8 = 0
    
    if (arg1 == *(ebx + 0x74))
        sub_4c42b0(arg2, "You")
        return arg2
    
    int32_t eax_1 = *(ebx + 0x2c4960)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->activeGame.gameType != GAME_NONE", &data_83f3d3, 
            "..\code\RFTGClient.cpp", 0x12a8, "CPlayerGetActiveGameName")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_1 == 4)
        int32_t edx_1 = data_27d40e0
        int32_t eax_3 = 0
        
        if (edx_1 s> 0)
            void* ecx_1 = &data_27d404c
            
            do
                if (*ecx_1 == arg1)
                    int32_t eax_6 = eax_3 * 0x30
                    
                    if (eax_6 != 0xfd82bfe0)
                        sub_4c42b0(arg2, eax_6 + 0x27d4020)
                        return arg2
                    
                    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_3 += 1
                ecx_1 += 0x30
            while (eax_3 s< edx_1)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x12b3, "CPlayerGetActiveGameName")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_1 == 1)
        int32_t edx_2 = data_27c06d4
        int32_t eax_10 = 0
        
        if (edx_2 s> 0)
            int32_t* ecx_2 = &data_27c0640
            
            do
                if (*ecx_2 == arg1)
                    sub_4c4330(eax_10 * 0x30 + 0x27c0614, edx_2, arg2)
                    return arg2
                
                eax_10 += 1
                ecx_2 = &ecx_2[0xc]
            while (eax_10 s< edx_2)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x12bf, "CPlayerGetActiveGameName")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_5 = *(ebx + 0x2c495c) * 0x1f8
    int32_t edi_1 = *(ecx_5 + ebx + 0xc18)
    int32_t eax_16 = 0
    
    if (edi_1 s> 0)
        void* edx_3 = ecx_5 + ebx + 0xae0
        
        do
            if (*edx_3 == arg1)
                sub_4c4330(eax_16 * 0x50 + ecx_5 + ebx + 0xae4, edx_3, arg2)
                return arg2
            
            eax_16 += 1
            edx_3 += 0x50
        while (eax_16 s< edi_1)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x12cb, "CPlayerGetActiveGameName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

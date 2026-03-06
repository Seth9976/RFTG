// 函数名称: sub_41c550
// 虚拟地址: 0x41c550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41c550()
{
    // 第一条实际指令: void* edi = data_27e7a40
    void* edi = data_27e7a40
    int32_t entry_ebx
    
    if (entry_ebx == *(edi + 0x74))
        if (*(edi + 0x38) == 0)
            return *(data_27e7a54 + 0x10)
        
        return *(data_27e7a54 + 0x14)
    
    int32_t eax_3 = *(edi + 0x2c4960)
    
    if (eax_3 == 0)
        sub_4c5870("gCClient->activeGame.gameType != GAME_NONE", &data_83f3d3, 
            "..\code\RFTGClient.cpp", 0x941, "CPlayerGetActiveGameDBID")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_3 == 4)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x944, "CPlayerGetActiveGameDBID")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_3 == 1)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x948, "CPlayerGetActiveGameDBID")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_2 = *(edi + 0x2c495c) * 0x1f8
    int32_t esi = *(ecx_2 + edi + 0xc18)
    int32_t eax_7 = 0
    
    if (esi s> 0)
        void* edx_1 = ecx_2 + edi + 0xae0
        
        do
            if (*edx_1 == entry_ebx)
                return *(eax_7 * 0x50 + ecx_2 + edi + 0xad8)
            
            eax_7 += 1
            edx_1 += 0x50
        while (eax_7 s< esi)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x954, "CPlayerGetActiveGameDBID")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

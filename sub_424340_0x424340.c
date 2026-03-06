// 函数名称: sub_424340
// 虚拟地址: 0x424340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_424340()
{
    // 第一条实际指令: void* edi = data_27e7a40
    void* edi = data_27e7a40
    int32_t eax = *(edi + 0x2c4960)
    int32_t entry_ebx
    
    if (eax == 0 || eax == 5 || entry_ebx == 0xffffffff)
        sub_4c5680("requesting avatar not in game")
        return 7
    
    if (eax == 4)
        int32_t edx_1 = data_27d40e0
        int32_t eax_1 = 0
        
        if (edx_1 s> 0)
            void* ecx_1 = &data_27d404c
            
            do
                if (*ecx_1 == entry_ebx)
                    return *(eax_1 * 0x30 + 0x27d4040)
                
                eax_1 += 1
                ecx_1 += 0x30
            while (eax_1 s< edx_1)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x12e3, "CPlayerGetActiveGameAvatar")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax == 1)
        int32_t edx_2 = data_27c06d4
        int32_t eax_6 = 0
        
        if (edx_2 s> 0)
            int32_t* ecx_2 = &data_27c0640
            
            do
                if (*ecx_2 == entry_ebx)
                    return *(eax_6 * 0x30 + 0x27c0634)
                
                eax_6 += 1
                ecx_2 = &ecx_2[0xc]
            while (eax_6 s< edx_2)
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x12ef, "CPlayerGetActiveGameAvatar")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_6 = *(edi + 0x2c495c) * 0x1f8
    int32_t esi = *(ecx_6 + edi + 0xc18)
    int32_t eax_9 = 0
    
    if (esi s> 0)
        void* edx_3 = ecx_6 + edi + 0xae0
        
        do
            if (*edx_3 == entry_ebx)
                return *(eax_9 * 0x50 + ecx_6 + edi + 0xb04)
            
            eax_9 += 1
            edx_3 += 0x50
        while (eax_9 s< esi)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x12fb, "CPlayerGetActiveGameAvatar")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

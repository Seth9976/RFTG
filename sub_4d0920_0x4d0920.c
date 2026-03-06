// 函数名称: sub_4d0920
// 虚拟地址: 0x4d0920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_4d0920(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (*esi != 1)
        sub_4c5870("mNetSyncState == NETSYNCSTATE_OFF", &data_83f3d3, "NetSync.cpp", 0x24, 
            "NetSync::NetSyncStartHost")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    bool cond:1 = esi[0x142] s<= 0
    *esi = 2
    int32_t i_1 = 0
    
    if (cond:1)
        return 
    
    void* edi_1 = &esi[9]
    int32_t i
    
    do
        if (*(edi_1 - 0x1c) == 0)
            void* eax_1 = *(edi_1 - 8)
            
            if (eax_1 == 0)
                if (*(edi_1 - 4) == 0)
                    sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x39, "NetSync::NetSyncStartHost")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int128_t* eax_5 = sub_4cce80(*(edi_1 - 0xc))
                void* ecx_1 = *(edi_1 - 0xc)
                int128_t* edx_1 = *(edi_1 - 4)
                *edi_1 = eax_5
                sub_5ab990(eax_5, edx_1, ecx_1)
            else
                int32_t esi_3 = (*(edi_1 - 0xc) + 4) * *(eax_1 + 8)
                int128_t* eax_3 = sub_4cce80(esi_3)
                sub_5abfc0(eax_3, 0, esi_3)
                esi = arg1
                *edi_1 = eax_3
        
        i = i_1 + 1
        edi_1 += 0x28
        i_1 = i
    while (i s< esi[0x142])
}

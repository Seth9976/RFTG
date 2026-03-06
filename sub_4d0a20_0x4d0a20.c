// 函数名称: sub_4d0a20
// 虚拟地址: 0x4d0a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_4d0a20(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t i_1 = 0
    
    if (*(esi + 0x508) s<= 0)
        return 
    
    int32_t* edi_1 = esi + 0x24
    int32_t i
    
    do
        if (edi_1[-7] == 1)
            void* eax = edi_1[-2]
            
            if (eax == 0)
                if (edi_1[-1] == 0)
                    sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x54, "NetSync::NetSyncStartClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int128_t* eax_4 = sub_4cce80(edi_1[-3])
                void* ecx_1 = edi_1[-3]
                int128_t* edx_1 = edi_1[-1]
                *edi_1 = eax_4
                sub_5ab990(eax_4, edx_1, ecx_1)
            else
                int32_t esi_3 = (edi_1[-3] + 4) * *(eax + 8)
                int128_t* eax_2 = sub_4cce80(esi_3)
                sub_5abfc0(eax_2, 0, esi_3)
                esi = arg1
                *edi_1 = eax_2
        
        i = i_1 + 1
        edi_1 = &edi_1[0xa]
        i_1 = i
    while (i s< *(esi + 0x508))
}

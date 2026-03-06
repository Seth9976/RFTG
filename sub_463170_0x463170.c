// 函数名称: sub_463170
// 虚拟地址: 0x463170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_463170(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    int32_t ecx = *(eax_1 + 0xbfac)
    
    if (ecx != 0)
        uint32_t esi_1 = zx.d(ecx.w)
        
        if (esi_1 u< *(eax_1 + 0x43964))
            void** esi_3 = esi_1 * 0xb0 + *(eax_1 + 0x43960)
            
            if (esi_3[0x2b] == ecx)
                eax_1 = *esi_3
                
                if (eax_1 == 0)
                    int32_t ebx = *(sub_418a10() + esi_3[0x1f] * 0x14 + 0x46c)
                    int32_t edx_1 = sx.d(*(sub_418a10() + 0x460))
                    void* edi = data_27e7a40
                    
                    while (true)
                        int32_t eax_4 = esi_3[0x1f]
                        int32_t eax_5 = eax_4 + arg1
                        esi_3[0x1f] = eax_5
                        
                        if (eax_4 + arg1 s< 0)
                            void* ecx_3 = *(edi + 0x548)
                            
                            if (ecx_3 == 0)
                                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                    "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            esi_3[0x1f] = sx.d(*(*(ecx_3 + 0x45844) + 0x460)) + eax_5
                        
                        int32_t eax_6 = esi_3[0x1f]
                        
                        if (eax_6 s>= edx_1)
                            esi_3[0x1f] = eax_6 - edx_1
                        
                        void* ecx_7 = *(edi + 0x548)
                        
                        if (ecx_7 == 0)
                            break
                        
                        int32_t eax_9 = esi_3[0x1f] * 5
                        
                        if (*(*(ecx_7 + 0x45844) + (eax_9 << 2) + 0x46c) != ebx)
                            return eax_9
                    
                    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                        0xcc, "GetGame")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (eax_1 == 4)
                    int32_t temp0_1 = esi_3[0x21]
                    esi_3[0x21] += arg1
                    
                    if (temp0_1 + arg1 s< 0)
                        esi_3[0x21] += 0x14
                    
                    eax_1 = esi_3[0x21]
                    
                    if (eax_1 s>= 0x14)
                        eax_1 -= 0x14
                        esi_3[0x21] = eax_1
    
    return eax_1
}

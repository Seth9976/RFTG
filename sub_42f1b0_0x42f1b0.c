// 函数名称: sub_42f1b0
// 虚拟地址: 0x42f1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_42f1b0()
{
    // 第一条实际指令: void* esi = data_27e7a40
    void* esi = data_27e7a40
    void* ebx = *(esi + 0x548)
    void* eax
    
    if (*(ebx + 0x2c0a2) == 0 && *(ebx + 0x2c0a1) == 0)
        int32_t esi_1
        
        if (*(ebx + 0x2c0a0) == 1)
            esi_1 = *(ebx + 0xbfa8)
            eax = sub_41d070()
        
        if (*(ebx + 0x2c0a0) != 1 || eax != esi_1)
            return 
        
        esi = data_27e7a40
    
    *(ebx + 0x2c0a0) = 0
    
    for (void* i = *(esi + 0x548); i != 0; i = *(esi + 0x548))
        void* edi_1 = *(i + 0x45844)
        int32_t ecx_1 = sx.d(*(edi_1 + 0x458))
        eax = nullptr
        
        if (ecx_1 s> 0)
            void* edx_1 = ebx + 0x220
            
            do
                if (*edx_1 != 0)
                    return 
                
                eax += 1
                edx_1 += 0x1f98
            while (eax s< ecx_1)
        
        eax = sub_46b2b0(*(esi + 0x74))
        
        if (*(eax + 0xc) s< *(eax + 0x10))
            return 
        
        if (*(ebx + 0x2c0a0) != 0)
            return 
        
        if (*(edi_1 + 0x1ec3) != 0)
            return 
        
        if (*(edi_1 + 0x1ec4) != 0)
            return 
        
        sub_406e20(*(data_27e7a40 + 0x548) + 0x45848)
        
        if (*(ebx + 0x2c0a2) != 0)
            return 
        
        esi = data_27e7a40
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

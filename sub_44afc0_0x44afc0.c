// 函数名称: sub_44afc0
// 虚拟地址: 0x44afc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_44afc0()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t eax = sub_426870(entry_ebx, 0)
    void* eax_2 = *(data_27e7a40 + 0x548)
    
    if (eax_2 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = *(eax_2 + 0x45844)
    void* esi = nullptr
    void* eax_4
    
    while (true)
        void* edx_1 = *(data_27e7a40 + 0x548)
        
        if (esi != 0)
            eax_4 = esi + 0xb0
        else
            eax_4 = *(edx_1 + 0x43960)
        
        int32_t ecx_4 = *(edx_1 + 0x43964) * 0xb0 + *(edx_1 + 0x43960)
        
        if (eax_4 u>= ecx_4)
            break
        
        while (true)
            if ((*(eax_4 + 0xac) & 0xffff0000) != 0)
                esi = eax_4
                
                if (*(eax_4 + 0x5c) != 2)
                    break
                
                if (*(eax_4 + 0x58) != entry_ebx[0x16])
                    break
                
                if (*(edi + entry_ebx[0x1f] * 0x14 + 0x46c) != *(edi + *(eax_4 + 0x7c) * 0x14 + 0x46c))
                    break
                
                if (sub_426870(eax_4, 0) s>= eax)
                    break
                
                int32_t eax_5
                eax_5.b = 1
                return eax_5
            
            eax_4 += 0xb0
            
            if (eax_4 u>= ecx_4)
                goto label_44b068
    
    label_44b068:
    eax_4.b = 0
    return eax_4
}

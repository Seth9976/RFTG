// 函数名称: sub_44aef0
// 虚拟地址: 0x44aef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_44aef0(void* arg1 @ edi)
{
    // 第一条实际指令: void* edx = *(data_27e7a40 + 0x548)
    void* edx = *(data_27e7a40 + 0x548)
    
    if (edx == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t esi = *(edx + 0x45844)
    void* ecx = nullptr
    void* eax_2
    
    while (true)
        if (ecx != 0)
            eax_2 = ecx + 0xb0
        else
            eax_2 = *(edx + 0x43960)
        
        int32_t ecx_3 = *(edx + 0x43964) * 0xb0 + *(edx + 0x43960)
        
        if (eax_2 u>= ecx_3)
            break
        
        while (true)
            if ((*(eax_2 + 0xac) & 0xffff0000) != 0)
                ecx = eax_2
                
                if (*(eax_2 + 0x5c) != 3)
                    break
                
                if (*(eax_2 + 0x58) != *(arg1 + 0x58))
                    break
                
                if (*(esi + *(arg1 + 0x7c) * 0x14 + 0x46c) != *(esi + *(eax_2 + 0x7c) * 0x14 + 0x46c))
                    break
                
                int32_t eax_6
                eax_6.b = 1
                return eax_6
            
            eax_2 += 0xb0
            
            if (eax_2 u>= ecx_3)
                goto label_44af81
    
    label_44af81:
    eax_2.b = 0
    return eax_2
}

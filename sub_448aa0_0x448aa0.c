// 函数名称: sub_448aa0
// 虚拟地址: 0x448aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_448aa0(void* arg1)
{
    // 第一条实际指令: void* ecx = *(data_27e7a40 + 0x548)
    void* ecx = *(data_27e7a40 + 0x548)
    
    if (ecx == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_3
    
    if (*(*(*(ecx + 0x45844) + *(arg1 + 0x7c) * 0x14 + 0x46c) + 4) == 0x9d)
        int32_t eax_4 = sub_418a10()
        eax_3 = data_27e7a40
        
        if (sx.d(*(eax_4 + *(arg1 + 0x7c) * 0x14 + 0x464)) == *(eax_3 + 0x74))
            int32_t eax_5
            eax_5.b = *(sub_418a10() + *(eax_3 + 0x74) * 0xb4 + 0x4a) != 0xffff
            return eax_5
    
    eax_3.b = 0
    return eax_3
}

// 函数名称: sub_434ba0
// 虚拟地址: 0x434ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_434ba0()
{
    // 第一条实际指令: void* ecx = *(data_27e7a40 + 0x548)
    void* ecx = *(data_27e7a40 + 0x548)
    int32_t result = 0
    
    if (ecx == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = 0
    int16_t* edi_1 = *(ecx + 0x45844) + 0x1e06
    
    do
        if (*edi_1 != 0)
            int32_t entry_ebx
            
            if (entry_ebx == i)
                return result
            
            int32_t edx_1
            edx_1.b = entry_ebx s< 0xc
            int32_t eax_2
            eax_2.b = i s< 0xc
            
            if (edx_1 == eax_2)
                result += 1
        
        i += 1
        edi_1 = &edi_1[1]
    while (i s< 0x14)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x278d, "GoalSlotIdx")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

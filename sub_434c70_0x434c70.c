// 函数名称: sub_434c70
// 虚拟地址: 0x434c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_434c70(int32_t arg1)
{
    // 第一条实际指令: void* ecx_1 = *(data_27e7a40 + 0x548)
    void* ecx_1 = *(data_27e7a40 + 0x548)
    int32_t result = 0
    
    if (ecx_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi = *(ecx_1 + 0x45844)
    int32_t ecx_2 = 0x13
    int16_t* esi = edi + 0x1e2c
    int32_t temp0_1
    
    do
        if (*esi != 0)
            if (arg1 == ecx_2)
                return result
            
            int32_t entry_ebx
            void* edx_3 = entry_ebx * 0xb4 + edi
            
            if (*(edx_3 + ecx_2 + 0x67) != 0 || *(edx_3 + ecx_2 + 0x7b) != 0)
                result += 1
        
        esi -= 2
        temp0_1 = ecx_2
        ecx_2 -= 1
    while (temp0_1 - 1 s>= 0)
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x27a1, "GoalSlotIdxPlayer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

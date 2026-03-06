// 函数名称: sub_46b360
// 虚拟地址: 0x46b360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46b360(int32_t arg1 @ edi)
{
    // 第一条实际指令: void* edx = *(data_27e7a40 + 0x548)
    void* edx = *(data_27e7a40 + 0x548)
    int32_t i = 0
    
    if (edx == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* ecx_1 = edx + 0x218
    
    while (i s< sx.d(*(*(edx + 0x45844) + 0x458)))
        if (*ecx_1 == arg1)
            return *(i * 0x1f98 + edx + 0x21c)
        
        i += 1
        ecx_1 += 0x1f98
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x2e0, "PlayerSeatToWho")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

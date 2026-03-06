// 函数名称: sub_4449a0
// 虚拟地址: 0x4449a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4449a0(int32_t arg1)
{
    // 第一条实际指令: void* ecx_1 = *(data_27e7a40 + 0x548)
    void* ecx_1 = *(data_27e7a40 + 0x548)
    
    if (ecx_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx = *(ecx_1 + 0x45844)
    void* eax_2 = *(edx + arg1 * 0x14 + 0x46c)
    ecx_1.b = *(eax_2 + 0xe)
    
    if (ecx_1.b != 1)
        return sx.d(ecx_1.b)
    
    if (*(eax_2 + 4) == 0xa2)
        return sx.d(*(edx + 0x1eb4))
    
    sub_4c5870("g->deck[world].d_ptr->index == CARD_ALIEN_OORT_CLOUD_REFINERY", &data_83f3d3, 
        "..\code\RFTGClient.cpp", 0x41ca, "CardKind")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

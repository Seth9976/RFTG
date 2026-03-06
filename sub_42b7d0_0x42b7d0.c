// 函数名称: sub_42b7d0
// 虚拟地址: 0x42b7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_42b7d0(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = *(eax_1 + 0x45844)
    
    if (arg3 == 0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1db0, "TakeoverOffenseStr")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t esi = *(arg3 + 0x7c)
    int32_t eax_3 = sub_418a10()
    void* entry_ebx
    
    if (entry_ebx == 0)
        return sub_4a0d70(eax_3, sx.d(*(eax_3 + esi * 0x14 + 0x466)), edi, 0xffffffff, esi, 0)
    
    int32_t edx = sx.d(*(eax_3 + esi * 0x14 + 0x466))
    
    if (edx == 0xffffffff)
        edx = arg4
    
    int32_t eax_4 = *(entry_ebx + 0x7c)
    return sub_4a0d70(eax_4, edx, edi, eax_4, esi, 0)
}

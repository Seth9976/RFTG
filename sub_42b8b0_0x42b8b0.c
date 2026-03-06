// 函数名称: sub_42b8b0
// 虚拟地址: 0x42b8b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_42b8b0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx = *(eax_1 + 0x45844)
    
    if (arg2 != 0)
        int32_t eax_3 = *(arg2 + 0x7c)
        return sub_4a0d70(eax_3, sx.d(*(ecx + eax_3 * 0x14 + 0x464)), ecx, eax_3, 0xffffffff, 1)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1dca, "TakeoverDefenseStr")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

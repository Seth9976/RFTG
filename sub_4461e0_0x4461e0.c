// 函数名称: sub_4461e0
// 虚拟地址: 0x4461e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4461e0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 != 0)
        void* eax_3 = *(eax_1 + 0x45844)
        int32_t result
        result.b = sub_4a40b0(eax_3, *(arg2 + 0x7c), eax_3, *(arg1 + 0x7c)) != 0
        return result
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

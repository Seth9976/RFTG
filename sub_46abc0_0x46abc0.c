// 函数名称: sub_46abc0
// 虚拟地址: 0x46abc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46abc0(void* arg1)
{
    // 第一条实际指令: void* ecx = *(data_27e7a40 + 0x548)
    void* ecx = *(data_27e7a40 + 0x548)
    
    if (ecx != 0)
        int32_t result
        result.b = *(*(*(ecx + 0x45844) + *(arg1 + 0x7c) * 0x14 + 0x46c) + 6) == 2
        return result
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_46ac30
// 虚拟地址: 0x46ac30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_46ac30(void* arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 != 0)
        void* ecx_1 = *(*(eax_1 + 0x45844) + *(arg1 + 0x7c) * 0x14 + 0x46c)
        int32_t result
        result.b = 1
        
        if (*(ecx_1 + 6) != 1 || (*(ecx_1 + 0x10) & 1) == 0)
            result.b = 0
        
        return result
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

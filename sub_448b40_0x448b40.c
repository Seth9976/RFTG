// 函数名称: sub_448b40
// 虚拟地址: 0x448b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_448b40(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* ecx = *(data_27e7a40 + 0x548)
    void* ecx = *(data_27e7a40 + 0x548)
    
    if (ecx != 0)
        if (*(*(*(ecx + 0x45844) + *(arg2 + 0x7c) * 0x14 + 0x46c) + 4) == 0xa2 && *(arg2 + 0x5c) == 3
                && *(arg2 + 0x58) == 0)
            return 1
        
        return 0
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

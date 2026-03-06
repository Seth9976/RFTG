// 函数名称: sub_4247f0
// 虚拟地址: 0x4247f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4247f0(void* arg1)
{
    // 第一条实际指令: int32_t result = *(arg1 + 0x74)
    int32_t result = *(arg1 + 0x74)
    
    if (result == 0 || result == 8 || result == 7)
        *(arg1 + 0x74) = 1
        return result
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x13a9, "PlayToDiscardSelection")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

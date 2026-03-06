// 函数名称: sub_46b230
// 虚拟地址: 0x46b230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_46b230(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = *(eax_1 + 0x45844)
    int32_t i = sx.d(*(arg1 * 0xb4 + edx + 0x46))
    int32_t result = 0
    
    while (i != 0xffffffff)
        i = sx.d(*(edx + ((i * 5 + 0x11d) << 2)))
        result += 1
    
    return result
}

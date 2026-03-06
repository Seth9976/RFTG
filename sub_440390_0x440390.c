// 函数名称: sub_440390
// 虚拟地址: 0x440390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_440390(void* arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t i = sx.d(*(arg1 + 0x24))
    int32_t edx = *(eax_1 + 0x45844)
    int32_t result = 0
    
    while (i != 0xffffffff)
        i = sx.d(*(edx + ((i * 5 + 0x11d) << 2)))
        result += 1
    
    int32_t i_1 = sx.d(*(arg1 + 0x28))
    
    while (i_1 != 0xffffffff)
        i_1 = sx.d(*(edx + ((i_1 * 5 + 0x11d) << 2)))
        result += 1
    
    return result
}

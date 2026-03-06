// 函数名称: sub_437d20
// 虚拟地址: 0x437d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_437d20()
{
    // 第一条实际指令: void* result = *(data_27e7a40 + 0x548)
    void* result = *(data_27e7a40 + 0x548)
    
    if (result == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (**(result + 0x45844) == 0)
        if (*(sub_418a10() + 0x45a) s>= 2)
            result.b = 1
            return result
        
        if (*(sub_418a10() + 0x45d) != 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}

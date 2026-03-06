// 函数名称: sub_41f170
// 虚拟地址: 0x41f170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_41f170(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* result = *(eax_1 + 0x45844) + arg1 * 0xb4
    
    if (*(result + 0xa3) s> 0 && *(result + 0x3c) == 0 && sub_41f130().b == 0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}

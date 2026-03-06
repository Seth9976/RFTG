// 函数名称: sub_420730
// 虚拟地址: 0x420730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_420730(int32_t arg1)
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 != 0)
        if (*(*(eax_1 + 0x45844) + 0x45a) == 3)
            int32_t eax_3
            eax_3.b = *(sub_418a10() + arg1 * 0xb4 + 0x3c) == 0
            return eax_3
        
        eax_1.b = 0
        return eax_1
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

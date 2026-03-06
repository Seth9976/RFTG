// 函数名称: sub_41d070
// 虚拟地址: 0x41d070
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41d070()
{
    // 第一条实际指令: void* eax_1 = *(data_27e7a40 + 0x548)
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 != 0)
        return sub_49b2f0(sx.d(*(*(eax_1 + 0x45844) + 0x1ec0)))
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

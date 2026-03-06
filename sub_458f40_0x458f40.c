// 函数名称: sub_458f40
// 虚拟地址: 0x458f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_458f40(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* eax_1 = *(data_27e7a40 + 0x548)
    
    if (eax_1 != 0)
        return sx.d(*(*(*(eax_1 + 0x45844) + arg1 * 0x14 + 0x46c) + 4))
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

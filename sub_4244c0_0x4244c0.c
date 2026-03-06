// 函数名称: sub_4244c0
// 虚拟地址: 0x4244c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4244c0(int32_t arg1)
{
    // 第一条实际指令: void* ecx_1 = *(data_27e7a40 + 0x548)
    void* ecx_1 = *(data_27e7a40 + 0x548)
    
    if (ecx_1 != 0)
        return sx.d(*(*(ecx_1 + 0x45844) + arg1 * 0xb4 + 0xa8))
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

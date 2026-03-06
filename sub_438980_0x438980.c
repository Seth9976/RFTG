// 函数名称: sub_438980
// 虚拟地址: 0x438980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_438980()
{
    // 第一条实际指令: int32_t eax = *(data_27e7a50 + 0xc)
    int32_t eax = *(data_27e7a50 + 0xc)
    
    if (eax == 0)
        return fconvert.t(2f)
    
    if (eax == 1)
        return float.t(1)
    
    if (eax == 2)
        return fconvert.t(0.5f)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3198, "LockRate")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

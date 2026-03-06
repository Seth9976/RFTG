// 函数名称: sub_473030
// 虚拟地址: 0x473030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_473030(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 0x93a80
    
    if (arg1 == 1)
        return 0x708
    
    if (arg1 == 2)
        return 0x24ea00
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0x155a, "GetTimeAllowedSeconds")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

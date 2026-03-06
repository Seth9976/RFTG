// 函数名称: sub_417aa0
// 虚拟地址: 0x417aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_417aa0(int32_t arg1)
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    
    if (arg1 == 0)
        return sub_4fd8f0(arg1, edx, "Normal", nullptr)
    
    if (arg1 == 1)
        return sub_4fd8f0(arg1 - 1, edx, "Fast", nullptr)
    
    if (arg1 == 2)
        return sub_4fd8f0(arg1 - 2, edx, "Instant", nullptr)
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\OptionsDlg.cpp", 0x28d, "GetGameSpeedText")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

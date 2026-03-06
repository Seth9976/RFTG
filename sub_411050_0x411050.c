// 函数名称: sub_411050
// 虚拟地址: 0x411050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_411050(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return "1 Week"
    
    if (arg1 == 1)
        return "30 Min"
    
    if (arg1 == 2)
        return "4 Weeks"
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\GameSetupDlg.cpp", 0x76a, "GetTimeLimitText")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

// 函数名称: sub_4bbdc0
// 虚拟地址: 0x4bbdc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4bbdc0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return data_307c558
    
    if (arg1 == 1)
        return data_307c55c
    
    if (arg1 == 2)
        return data_307c554
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\UsernameSetupDlg.cpp", 0x34f, "OnlineStatusIndicator")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

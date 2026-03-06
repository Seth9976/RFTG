// 函数名称: sub_559c50
// 虚拟地址: 0x559c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_559c50() __noreturn
{
    // 第一条实际指令: sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

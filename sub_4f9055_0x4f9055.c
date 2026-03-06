// 函数名称: sub_4f9055
// 虚拟地址: 0x4f9055
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f9055() __noreturn
{
    // 第一条实际指令: sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0x84a, "UIStateUpdate")
    sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0x84a, "UIStateUpdate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_52f770
// 虚拟地址: 0x52f770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_52f770() __noreturn
{
    // 第一条实际指令: sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x194f, "UI2MoveDownOne")
    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x194f, "UI2MoveDownOne")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

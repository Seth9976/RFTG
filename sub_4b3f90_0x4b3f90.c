// 函数名称: sub_4b3f90
// 虚拟地址: 0x4b3f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4b3f90() __noreturn
{
    // 第一条实际指令: sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\net.cpp", 0x183, "train_net")
    sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\net.cpp", 0x183, "train_net")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

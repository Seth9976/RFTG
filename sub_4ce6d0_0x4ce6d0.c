// 函数名称: sub_4ce6d0
// 虚拟地址: 0x4ce6d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4ce6d0() __noreturn
{
    // 第一条实际指令: sub_4c5870("Halt", &data_83f3d3, "DefBin.cpp", 0x339, "DefBinReadFixupDataArray")
    sub_4c5870("Halt", &data_83f3d3, "DefBin.cpp", 0x339, "DefBinReadFixupDataArray")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

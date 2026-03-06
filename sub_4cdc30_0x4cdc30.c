// 函数名称: sub_4cdc30
// 虚拟地址: 0x4cdc30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4cdc30() __noreturn
{
    // 第一条实际指令: sub_4c5870("Halt", &data_83f3d3, "DefBin.cpp", 0x1b9, "DefBinSerializeDataArray")
    sub_4c5870("Halt", &data_83f3d3, "DefBin.cpp", 0x1b9, "DefBinSerializeDataArray")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

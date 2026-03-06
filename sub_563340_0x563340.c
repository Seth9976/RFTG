// 函数名称: sub_563340
// 虚拟地址: 0x563340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_563340() __noreturn
{
    // 第一条实际指令: sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x933, "Dx11GraphicsInterface::RenderStateSet")
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x933, 
        "Dx11GraphicsInterface::RenderStateSet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_4e20f0
// 虚拟地址: 0x4e20f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4e20f0()
{
    // 第一条实际指令: if (data_3078599 == 0)
    if (data_3078599 == 0)
        return 
    
    sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0xabb, "Draw3DBegin")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

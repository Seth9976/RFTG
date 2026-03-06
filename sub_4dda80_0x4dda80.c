// 函数名称: sub_4dda80
// 虚拟地址: 0x4dda80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4dda80(float arg1)
{
    // 第一条实际指令: if (data_3078599 != 0)
    if (data_3078599 != 0)
        data_27e84c8 = fconvert.s(fconvert.t(arg1))
        data_27e84b8 = 0x3f800000
        data_27e84bc = 0x3f800000
        data_27e84c0 = 0x3f800000
        data_27e84c4 = 0x3f800000
        return 0x3f800000
    
    sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x330, 
        "Draw3DAmbientLight")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

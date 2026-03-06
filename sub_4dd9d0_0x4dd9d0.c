// 函数名称: sub_4dd9d0
// 虚拟地址: 0x4dd9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4dd9d0(int32_t* arg1)
{
    // 第一条实际指令: if (data_3078599 != 0)
    if (data_3078599 != 0)
        data_27e84a8 = *arg1
        data_27e84ac = arg1[1]
        data_27e84b0 = arg1[2]
        data_27e84b4 = arg1[3]
        return 
    
    sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x306, 
        "Draw3DOverlayColor")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

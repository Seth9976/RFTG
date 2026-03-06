// 函数名称: sub_4e2170
// 虚拟地址: 0x4e2170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e2170(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx = data_30785ac
    int32_t ecx = data_30785ac
    
    if (ecx u<= 3)
        __builtin_memcpy(arg1, ecx * 0x1c + &data_27e803c, 0x1c)
        return 
    
    sub_4c5870("gDraw3DData.renderingDrawEye >= 0 && gDraw3DData.renderingDrawEye < NUM_DRAW_EYES", 
        &data_83f3d3, "Draw3d.cpp", 0xae2, "Draw3DGetRenderingEyePose")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_4e58a0
// 虚拟地址: 0x4e58a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4e58a0(int32_t arg1)
{
    // 第一条实际指令: if (data_3078599 != 0)
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Renderer.cpp", 0x28a, 
            "GraphicsSetMainRT")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_54b920(0)
    float* result = (*(*data_3078804 + 0x84))(arg1)
    *(data_27e7fe4 + 0xdd) = 0
    
    if (data_27e8404 == 0)
        return result
    
    data_27e8404 = 0
    return sub_4ddbe0(&data_27e8024)
}

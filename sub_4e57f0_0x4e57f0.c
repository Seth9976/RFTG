// 函数名称: sub_4e57f0
// 虚拟地址: 0x4e57f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e57f0(int32_t arg1, int32_t arg2, char arg3)
{
    // 第一条实际指令: if (data_3078599 != 0)
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "Renderer.cpp", 0x277, 
            "GraphicsSetRT")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_54b920(0)
    (*(*data_3078804 + 0x88))(arg1, arg2)
    bool cond:1 = data_30785cc != 5
    char result = 1
    *(data_27e7fe4 + 0xdd) = 1
    
    if (not(cond:1) && arg3 != 0 && data_3078808 == 1)
        result = 0
    
    if (data_27e8404 == result)
        return result
    
    data_27e8404 = result
    return sub_4ddbe0(&data_27e8024)
}

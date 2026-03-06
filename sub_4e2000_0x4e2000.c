// 函数名称: sub_4e2000
// 虚拟地址: 0x4e2000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e2000(int32_t* arg1)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (data_3078599 != 0)
        if (data_3078598 == 0)
            data_3078598 = 1
            data_307859c = *arg1
            data_30785a0 = arg1[1]
            int32_t result = arg1[2]
            data_30785a4 = result
            return result
        
        char const* const var_4_1 = "Draw3DQuadGroupStart"
        var_8 = 0xaac
        char const* const var_c_1 = "Draw3d.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "!gDraw3DData.quadGroupDrawing"
    else
        char const* const var_4 = "Draw3DQuadGroupStart"
        var_8 = 0xaab
        char const* const var_c = "Draw3d.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "gDraw3DData.submittingRenderItems"
    
    sub_4c5870(var_14, &data_83f3d3, "Draw3d.cpp", var_8, "Draw3DQuadGroupStart")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}

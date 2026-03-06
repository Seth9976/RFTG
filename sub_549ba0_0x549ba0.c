// 函数名称: sub_549ba0
// 虚拟地址: 0x549ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_549ba0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    int32_t var_14 = esi
    int32_t edi
    int32_t var_18 = edi
    
    if (arg2 u> 7)
        sub_4c5870("index >= 0 && index < MAX_QUERIES", &data_83f3d3, "OpenGLGraphics.cpp", 0x11e3, 
            "OpenGLInterface::MarkFrameBegin")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax = *(arg1 + (arg2 << 2) + 0x4264)
    
    if (eax != 0)
        int32_t var_10 = 0
        int32_t var_c_1 = 0
        data_3079db0(eax, 0x8866, &var_10)
        *(arg1 + (arg2 << 2) + 0x4284) = var_10 - *(arg1 + (arg2 << 3) + 0x42a8)
    else
        data_3079458(1, arg1 + (arg2 << 2) + 0x4264)
    
    return data_3079d4c(0x8e28, arg1 + (arg2 << 3) + 0x42a8)
}

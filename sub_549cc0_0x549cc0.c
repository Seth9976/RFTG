// 函数名称: sub_549cc0
// 虚拟地址: 0x549cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __thiscallsub_549cc0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 1)
    if (arg2 != 1)
        sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x12b1, "OpenGLInterface::APIPresent")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (SwapBuffers(*(arg1 + 8)) != 0)
        return sub_543ca0(0, "EndScene opengl error check")
    
    enum WIN32_ERROR __saved_edi_1 = GetLastError()
    sub_4c5680("openGL present error: %d")
    sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x12b8, "OpenGLInterface::APIPresent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

// 函数名称: sub_54b0f0
// 虚拟地址: 0x54b0f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_54b0f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = sub_50ba10(arg1)
    void* eax = sub_50ba10(arg1)
    int32_t* eax_2 = sub_50ba10(arg2)
    void* eax_3 = sub_54b850(data_307882c + 0x4240, eax)
    int32_t* eax_4 = sub_54b850(data_307882c + 0x4240, eax_2)
    
    if (*(eax_3 + 0xe0) == 0)
        sub_4c5870("bufferSource->mFrameBuffer", &data_83f3d3, "OpenGLGraphics.cpp", 0x1599, 
            "OpenGLInterface::ResolveMSAA")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (eax_4[0x38] == 0)
        sub_4c5870("bufferDest->mFrameBuffer", &data_83f3d3, "OpenGLGraphics.cpp", 0x159a, 
            "OpenGLInterface::ResolveMSAA")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t params
    glGetIntegerv(0x8ca6, &params)
    int32_t* eax_8 = sub_4ca0f0(arg1)
    int32_t* eax_10 = sub_4ca0f0(arg2)
    int32_t* ecx_4 = *eax_8
    int32_t esi_3 = *ecx_4
    int32_t ebx_1 = ecx_4[1]
    int32_t* eax_11 = *eax_10
    int32_t edx = *eax_11
    int32_t* eax_12 = eax_11[1]
    data_3079888(0x8ca8, *(eax_3 + 0xe0))
    data_3079888(0x8ca9, eax_4[0x38])
    data_3079890(0, 0, esi_3, ebx_1, 0, 0, edx, eax_12, 0x4000, 0x2600)
    return data_3079888(0x8d40, params)
}

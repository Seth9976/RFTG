// 函数名称: sub_549e70
// 虚拟地址: 0x549e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_549e70(int32_t arg1)
{
    // 第一条实际指令: if (data_3078599 != 0)
    if (data_3078599 != 0)
        sub_4c5870("!gDraw3DData.submittingRenderItems", &data_83f3d3, "OpenGLGraphics.cpp", 0x1329, 
            "OpenGLInterface::RenderTargetClear")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int16_t eax_1 = arg1.w
    long double x87_r6 = fconvert.t(255.0)
    uint32_t mask = 0x4000
    long double x87_r6_6 = float.t(zx.d(arg1:3.b))
    sub_544830(fconvert.s(fconvert.t(fconvert.s(float.t(zx.d(eax_1.b)) / x87_r6))), 
        fconvert.s(fconvert.t(fconvert.s(float.t(zx.d(eax_1:1.b)) / x87_r6))), 
        fconvert.s(fconvert.t(fconvert.s(float.t(zx.d(arg1:2.b)) / x87_r6))), 
        fconvert.s(fconvert.t(fconvert.s(x87_r6_6 / x87_r6_6))))
    
    if (*(data_27e7fd0 + 0x20) != 0)
        void* eax_3 = data_307882c
        mask = 0x4100
        
        if (*(eax_3 + 0x4050) != 1)
            *(eax_3 + 0x4050) = 1
            glDepthMask(1)
    
    return glClear(mask)
}

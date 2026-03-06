// 函数名称: sub_54b250
// 虚拟地址: 0x54b250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_54b250(int32_t* arg1, char** arg2, char** arg3)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_78 = ebx
    int32_t esi
    int32_t var_7c = esi
    int32_t edi
    int32_t var_80 = edi
    arg1[0x1098].b = 1
    int32_t* eax_1 = *sub_466320(arg2)
    long double x87_r7 = float.t(*eax_1)
    
    if (*eax_1 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_1[1])
    
    if (eax_1[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_1[2])))
    arg1[8] = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    float var_44_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))
    arg1[9] = var_44_1
    float var_88 = var_44_1
    var_88.q = fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1[8]) + fconvert.t(0.5))))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686950(mxcsr, x87control, var_88)
    int32_t eax_3 = sub_685f40(fconvert.t(fconvert.s(st0)))
    var_88.q = fconvert.d(fconvert.t(fconvert.s(fconvert.t(arg1[9]) + fconvert.t(0.5))))
    (*(*arg1 + 0x58))(0, 0, eax_3, 
        sub_685f40(fconvert.t(fconvert.s(sub_686950(mxcsr, x87control_1, var_88)))))
    void* eax_6 = sub_50ba10(arg2)
    void* eax_7 = sub_54b850(data_307882c + 0x4240, eax_6)
    
    if (*(eax_7 + 0x10) != 0)
        sub_4c5870("bufferData->mIsLoading == 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x15d1, 
            "OpenGLInterface::RenderTargetSetTextures")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_9 = *(eax_7 + 0xe0)
    
    if (eax_9 == 0)
        sub_4c5870("bufferData->mFrameBuffer != 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x15d2, 
            "OpenGLInterface::RenderTargetSetTextures")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_3079888(0x8d40, eax_9)
    
    if (arg3 != 0)
        void* eax_12 = sub_50ba10(arg3)
        void* eax_13 = sub_54b850(data_307882c + 0x4240, eax_12)
        
        if (*(eax_13 + 0x10) != 0)
            sub_4c5870("bufferData->mIsLoading == 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x15db, 
                "OpenGLInterface::RenderTargetSetTextures")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t eax_15 = *(eax_13 + 0xe4)
        
        if (eax_15 == 0)
            sub_4c5870("bufferData->mRenderBuffer != 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x15dc, 
                "OpenGLInterface::RenderTargetSetTextures")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        data_307988c(0x8d41, eax_15)
        data_30798a0(0x8d40, 0x8d00, 0x8d41, *(eax_13 + 0xe4))
    
    int32_t result = data_3079894(0x8d40)
    
    if (result == 0x8cd5)
        return result
    
    sub_4c5870("status == GL_FRAMEBUFFER_COMPLETE", &data_83f3d3, "OpenGLGraphics.cpp", 0x15e3, 
        "OpenGLInterface::RenderTargetSetTextures")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

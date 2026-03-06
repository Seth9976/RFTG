// 函数名称: sub_544f40
// 虚拟地址: 0x544f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __thiscallsub_544f40(void* arg1, HWND arg2)
{
    // 第一条实际指令: int32_t params
    int32_t params
    int32_t var_c = __security_cookie ^ &params
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t edi
    int32_t var_38 = edi
    sub_4c5680("OpenGLInterface::GraphicsInterfaceAttach")
    
    if (*(arg1 + 0x4250) != 0)
        sub_4c5870("mBufferDataArray.mUsedCount == 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x491, 
            "OpenGLInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    *(arg1 + 0x425c) = 0
    *(arg1 + 0x4260) = 0
    *(arg1 + 0x4230) = 0
    *(arg1 + 0x4234) = 0
    *(arg1 + 0x4238) = 0
    *(arg1 + 0x423c) = 0x3f800000
    sub_5abfc0(arg1 + 0x28, 0xfe, 0x4000)
    int32_t ecx_1
    int32_t edi_3
    edi_3, ecx_1 = __memfill_u32(data_307882c + 0x4028, 0xbaadf00d, 0x82)
    *(arg1 + 0xc) = arg2
    *(arg1 + 8) = GetDC(arg2)
    sub_544bd0()
    sub_544d40(*(arg1 + 8))
    *(arg1 + 4) = wglCreateContext(*(arg1 + 8))
    RECT rect
    GetClientRect(*(arg1 + 0xc), &rect)
    long double x87_r7_1 = float.t(rect.bottom)
    *(arg1 + 0x10) = fconvert.s(float.t(rect.right))
    *(arg1 + 0x14) = fconvert.s(x87_r7_1)
    
    if (wglMakeCurrent(*(arg1 + 8), *(arg1 + 4)) == 0)
        sub_4c5870("success", &data_83f3d3, "OpenGLGraphics.cpp", 0x4b1, 
            "OpenGLInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (sub_58ef30() != 0)
        sub_4c5870("initResult == GLEW_OK", &data_83f3d3, "OpenGLGraphics.cpp", 0x4b4, 
            "OpenGLInterface::GraphicsInterfaceAttach")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    sub_593430()
    params = 0
    int32_t params_1 = 0
    glGetIntegerv(0x821b, &params)
    glGetIntegerv(0x821c, &params_1)
    uint8_t* eax_11 = glGetString(0x1f02)
    uint8_t* eax_12 = glGetString(0x1f01)
    
    if (sub_5a8e80(eax_12, "Mali-T760") != 0)
        data_307881d = 1
    
    if (sub_5a8e80(eax_12, "Adreno (TM) 420") != 0)
        bool cond:0_1 = *(data_27e7fd0 + 0x1c) s<= 2
        data_307881e = 1
        
        if (not(cond:0_1))
            sub_4c5680("Setting msaa to 2x for adreno")
            *(data_27e7fd0 + 0x1c) = 2
    
    glGetIntegerv(0xd33, arg1 + 0x5038)
    int32_t var_3c_7 = *(arg1 + 0x5038)
    uint8_t* var_40_4 = eax_12
    int32_t params_3 = params_1
    int32_t params_2 = params
    uint8_t* var_4c = eax_11
    sub_4c5680("GL version %s (%d.%d) %s (%d)")
    int32_t eax_17 = 0
    
    if (*(data_27e7fd0 + 0x26) != 0)
        eax_17 = 1
    
    data_307b464(eax_17)
    void* result = data_27e7fd0
    
    if (*(result + 0x1c) != 0)
        result = glEnable(0x809d)
    
    sub_5a6aba(rect.bottom ^ &var_30)
    return result
}

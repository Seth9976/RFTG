// 函数名称: sub_549d70
// 虚拟地址: 0x549d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_549d70(int32_t* arg1, int32_t arg2 @ esi, int32_t arg3)
{
    // 第一条实际指令: RECT rect
    RECT rect
    int32_t var_c = __security_cookie ^ &rect
    int32_t ebx
    int32_t var_20 = ebx
    int32_t edi
    int32_t var_28 = edi
    arg1[0x1098].b = 0
    char const* const var_34
    
    if (arg3 != 1)
        char const* const var_2c = "OpenGLInterface::RenderTargetSetMonitorTarget"
        int32_t var_30 = 0x12eb
        var_34 = "OpenGLGraphics.cpp"
        sub_4c5870("Halt", &data_83f3d3, var_34, var_30, var_2c)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    GetClientRect(data_30785e0, &rect)
    int32_t ecx_2 = rect.right - rect.left
    int32_t edx_1 = rect.bottom - rect.top
    void* ebx_1 = *arg1
    var_34 = nullptr
    (*(ebx_1 + 0x58))(0, var_34, ecx_2, edx_1)
    BOOL eax_6 = wglMakeCurrent(arg1[2], arg1[1])
    data_3079888(0x8d40, 0)
    int32_t result = arg1[5]
    arg1[8] = arg1[4]
    arg1[9] = result
    
    if (eax_6 == 0)
        result = sub_4c5680("OpenGL failed to set monitor render target")
    
    sub_5a6aba(arg2 ^ &var_34)
    return result
}

// 函数名称: sub_585b80
// 虚拟地址: 0x585b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585b80()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDebugMessageCallbackARB")
    PROC eax = wglGetProcAddress("glDebugMessageCallbackARB")
    data_307984c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDebugMessageControlARB")
    data_3079850 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDebugMessageInsertARB")
    data_3079854 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetDebugMessageLogARB")
    data_3079858 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

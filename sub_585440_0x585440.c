// 函数名称: sub_585440
// 虚拟地址: 0x585440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585440()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDebugMessageCallbackAMD")
    PROC eax = wglGetProcAddress("glDebugMessageCallbackAMD")
    data_3079724 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDebugMessageEnableAMD")
    data_3079728 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDebugMessageInsertAMD")
    data_307972c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetDebugMessageLogAMD")
    data_3079730 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

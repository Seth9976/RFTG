// 函数名称: sub_585900
// 虚拟地址: 0x585900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585900()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindVertexArrayAPPLE")
    PROC eax = wglGetProcAddress("glBindVertexArrayAPPLE")
    data_30797e0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteVertexArraysAPPLE")
    data_30797e4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGenVertexArraysAPPLE")
    data_30797e8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glIsVertexArrayAPPLE")
    data_30797ec = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

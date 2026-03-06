// 函数名称: sub_58e700
// 虚拟地址: 0x58e700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e700()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glAsyncMarkerSGIX")
    PROC eax = wglGetProcAddress("glAsyncMarkerSGIX")
    data_307b074 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteAsyncMarkersSGIX")
    data_307b078 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glFinishAsyncSGIX")
    data_307b07c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGenAsyncMarkersSGIX")
    data_307b080 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glIsAsyncMarkerSGIX")
    data_307b084 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glPollAsyncSGIX")
    data_307b088 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

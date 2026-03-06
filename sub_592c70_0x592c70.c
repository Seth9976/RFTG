// 函数名称: sub_592c70
// 虚拟地址: 0x592c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592c70()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglCreatePbufferARB")
    PROC eax = wglGetProcAddress("wglCreatePbufferARB")
    data_307b3f8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglDestroyPbufferARB")
    data_307b3fc = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglGetPbufferDCARB")
    data_307b400 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglQueryPbufferARB")
    data_307b404 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglReleasePbufferDCARB")
    data_307b408 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

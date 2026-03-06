// 函数名称: sub_592d60
// 虚拟地址: 0x592d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592d60()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglCreatePbufferEXT")
    PROC eax = wglGetProcAddress("wglCreatePbufferEXT")
    data_307b440 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglDestroyPbufferEXT")
    data_307b444 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglGetPbufferDCEXT")
    data_307b448 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglQueryPbufferEXT")
    data_307b44c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglReleasePbufferDCEXT")
    data_307b450 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_592c00
// 虚拟地址: 0x592c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592c00()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglCreateBufferRegionARB")
    PROC eax = wglGetProcAddress("wglCreateBufferRegionARB")
    data_307b3d8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglDeleteBufferRegionARB")
    data_307b3dc = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglRestoreBufferRegionARB")
    data_307b3e0 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglSaveBufferRegionARB")
    data_307b3e4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

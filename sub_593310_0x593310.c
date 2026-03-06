// 函数名称: sub_593310
// 虚拟地址: 0x593310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_593310()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglBindVideoImageNV")
    PROC eax = wglGetProcAddress("wglBindVideoImageNV")
    data_307b558 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglGetVideoDeviceNV")
    data_307b55c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglGetVideoInfoNV")
    data_307b560 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglReleaseVideoDeviceNV")
    data_307b564 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("wglReleaseVideoImageNV")
    data_307b568 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglSendPbufferToVideoNV")
    data_307b56c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

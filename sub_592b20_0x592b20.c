// 函数名称: sub_592b20
// 虚拟地址: 0x592b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592b20()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglBlitContextFramebufferAMD")
    PROC eax = wglGetProcAddress("wglBlitContextFramebufferAMD")
    data_307b3b4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglCreateAssociatedContextAMD")
    data_307b3b8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglCreateAssociatedContextAttribsAMD")
    data_307b3bc = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglDeleteAssociatedContextAMD")
    data_307b3c0 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("wglGetContextGPUIDAMD")
    data_307b3c4 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("wglGetCurrentAssociatedContextAMD")
    data_307b3c8 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("wglGetGPUIDsAMD")
    data_307b3cc = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("wglGetGPUInfoAMD")
    data_307b3d0 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglMakeAssociatedContextCurrentAMD")
    data_307b3d4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

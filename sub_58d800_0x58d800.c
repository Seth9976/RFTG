// 函数名称: sub_58d800
// 虚拟地址: 0x58d800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58d800()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glTexImage2DMultisampleCoverageNV")
    PROC eax = wglGetProcAddress("glTexImage2DMultisampleCoverageNV")
    data_307adf0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glTexImage3DMultisampleCoverageNV")
    data_307adf4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glTextureImage2DMultisampleCoverageNV")
    data_307adf8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glTextureImage2DMultisampleNV")
    data_307adfc = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glTextureImage3DMultisampleCoverageNV")
    data_307ae00 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTextureImage3DMultisampleNV")
    data_307ae04 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

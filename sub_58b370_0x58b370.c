// 函数名称: sub_58b370
// 虚拟地址: 0x58b370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b370()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetPixelTransformParameterfvEXT")
    PROC eax = wglGetProcAddress("glGetPixelTransformParameterfvEXT")
    data_307a794 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetPixelTransformParameterivEXT")
    data_307a798 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glPixelTransformParameterfEXT")
    data_307a79c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glPixelTransformParameterfvEXT")
    data_307a7a0 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glPixelTransformParameteriEXT")
    data_307a7a4 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glPixelTransformParameterivEXT")
    data_307a7a8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

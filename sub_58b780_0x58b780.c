// 函数名称: sub_58b780
// 虚拟地址: 0x58b780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b780()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glAreTexturesResidentEXT")
    PROC eax = wglGetProcAddress("glAreTexturesResidentEXT")
    data_307a850 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBindTextureEXT")
    data_307a854 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDeleteTexturesEXT")
    data_307a858 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGenTexturesEXT")
    data_307a85c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glIsTextureEXT")
    data_307a860 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glPrioritizeTexturesEXT")
    data_307a864 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

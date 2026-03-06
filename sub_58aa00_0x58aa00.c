// 函数名称: sub_58aa00
// 虚拟地址: 0x58aa00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58aa00()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFogCoordPointerEXT")
    PROC eax = wglGetProcAddress("glFogCoordPointerEXT")
    data_307a5f4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glFogCoorddEXT")
    data_307a5f8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glFogCoorddvEXT")
    data_307a5fc = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glFogCoordfEXT")
    data_307a600 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glFogCoordfvEXT")
    data_307a604 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

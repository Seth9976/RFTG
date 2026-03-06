// 函数名称: sub_58a930
// 虚拟地址: 0x58a930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58a930()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glColorMaskIndexedEXT")
    PROC eax = wglGetProcAddress("glColorMaskIndexedEXT")
    data_307a5d0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDisableIndexedEXT")
    data_307a5d4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glEnableIndexedEXT")
    data_307a5d8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGetBooleanIndexedvEXT")
    data_307a5dc = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetIntegerIndexedvEXT")
    data_307a5e0 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glIsEnabledIndexedEXT")
    data_307a5e4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

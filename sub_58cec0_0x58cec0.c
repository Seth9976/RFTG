// 函数名称: sub_58cec0
// 虚拟地址: 0x58cec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58cec0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginOcclusionQueryNV")
    PROC eax = wglGetProcAddress("glBeginOcclusionQueryNV")
    data_307ac60 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteOcclusionQueriesNV")
    data_307ac64 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glEndOcclusionQueryNV")
    data_307ac68 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGenOcclusionQueriesNV")
    data_307ac6c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetOcclusionQueryivNV")
    data_307ac70 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetOcclusionQueryuivNV")
    data_307ac74 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glIsOcclusionQueryNV")
    data_307ac78 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

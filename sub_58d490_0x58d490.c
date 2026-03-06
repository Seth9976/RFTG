// 函数名称: sub_58d490
// 虚拟地址: 0x58d490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58d490()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetVideoi64vNV")
    PROC eax = wglGetProcAddress("glGetVideoi64vNV")
    data_307ad5c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetVideoivNV")
    data_307ad60 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGetVideoui64vNV")
    data_307ad64 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGetVideouivNV")
    data_307ad68 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glPresentFrameDualFillNV")
    data_307ad6c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glPresentFrameKeyedNV")
    data_307ad70 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_58c610
// 虚拟地址: 0x58c610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c610()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetProgramNamedParameterdvNV")
    PROC eax = wglGetProcAddress("glGetProgramNamedParameterdvNV")
    data_307aad0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetProgramNamedParameterfvNV")
    data_307aad4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glProgramNamedParameter4dNV")
    data_307aad8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glProgramNamedParameter4dvNV")
    data_307aadc = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glProgramNamedParameter4fNV")
    data_307aae0 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glProgramNamedParameter4fvNV")
    data_307aae4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

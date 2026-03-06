// 函数名称: sub_58c430
// 虚拟地址: 0x58c430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c430()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glEvalMapsNV")
    PROC eax = wglGetProcAddress("glEvalMapsNV")
    data_307aa84 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetMapAttribParameterfvNV")
    data_307aa88 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGetMapAttribParameterivNV")
    data_307aa8c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGetMapControlPointsNV")
    data_307aa90 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetMapParameterfvNV")
    data_307aa94 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetMapParameterivNV")
    data_307aa98 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glMapControlPointsNV")
    data_307aa9c = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glMapParameterfvNV")
    data_307aaa0 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMapParameterivNV")
    data_307aaa4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

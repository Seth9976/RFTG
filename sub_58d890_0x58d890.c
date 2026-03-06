// 函数名称: sub_58d890
// 虚拟地址: 0x58d890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58d890()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glActiveVaryingNV")
    PROC eax = wglGetProcAddress("glActiveVaryingNV")
    data_307ae08 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBeginTransformFeedbackNV")
    data_307ae0c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBindBufferBaseNV")
    data_307ae10 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glBindBufferOffsetNV")
    data_307ae14 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glBindBufferRangeNV")
    data_307ae18 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glEndTransformFeedbackNV")
    data_307ae1c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGetActiveVaryingNV")
    data_307ae20 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glGetTransformFeedbackVaryingNV")
    data_307ae24 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glGetVaryingLocationNV")
    data_307ae28 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glTransformFeedbackAttribsNV")
    data_307ae2c = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTransformFeedbackVaryingsNV")
    data_307ae30 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

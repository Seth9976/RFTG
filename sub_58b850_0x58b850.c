// 函数名称: sub_58b850
// 虚拟地址: 0x58b850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b850()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginTransformFeedbackEXT")
    PROC eax = wglGetProcAddress("glBeginTransformFeedbackEXT")
    data_307a874 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBindBufferBaseEXT")
    data_307a878 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBindBufferOffsetEXT")
    data_307a87c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glBindBufferRangeEXT")
    data_307a880 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glEndTransformFeedbackEXT")
    data_307a884 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetTransformFeedbackVaryingEXT")
    data_307a888 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTransformFeedbackVaryingsEXT")
    data_307a88c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_58d990
// 虚拟地址: 0x58d990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58d990()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindTransformFeedbackNV")
    PROC eax = wglGetProcAddress("glBindTransformFeedbackNV")
    data_307ae34 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteTransformFeedbacksNV")
    data_307ae38 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDrawTransformFeedbackNV")
    data_307ae3c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGenTransformFeedbacksNV")
    data_307ae40 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glIsTransformFeedbackNV")
    data_307ae44 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glPauseTransformFeedbackNV")
    data_307ae48 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glResumeTransformFeedbackNV")
    data_307ae4c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

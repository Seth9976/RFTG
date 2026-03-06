// 函数名称: sub_587af0
// 虚拟地址: 0x587af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587af0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindTransformFeedback")
    PROC eax = wglGetProcAddress("glBindTransformFeedback")
    data_3079db8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteTransformFeedbacks")
    data_3079dbc = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDrawTransformFeedback")
    data_3079dc0 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGenTransformFeedbacks")
    data_3079dc4 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glIsTransformFeedback")
    data_3079dc8 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glPauseTransformFeedback")
    data_3079dcc = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glResumeTransformFeedback")
    data_3079dd0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

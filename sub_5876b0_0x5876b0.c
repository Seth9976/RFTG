// 函数名称: sub_5876b0
// 虚拟地址: 0x5876b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5876b0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetActiveSubroutineName")
    PROC eax = wglGetProcAddress("glGetActiveSubroutineName")
    data_3079d08 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetActiveSubroutineUniformName")
    data_3079d0c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGetActiveSubroutineUniformiv")
    data_3079d10 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGetProgramStageiv")
    data_3079d14 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetSubroutineIndex")
    data_3079d18 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetSubroutineUniformLocation")
    data_3079d1c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGetUniformSubroutineuiv")
    data_3079d20 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glUniformSubroutinesuiv")
    data_3079d24 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_584da0
// 虚拟地址: 0x584da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_584da0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glUniformMatrix2x3fv")
    PROC eax = wglGetProcAddress("glUniformMatrix2x3fv")
    data_30795f8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glUniformMatrix2x4fv")
    data_30795fc = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glUniformMatrix3x2fv")
    data_3079600 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glUniformMatrix3x4fv")
    data_3079604 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glUniformMatrix4x2fv")
    data_3079608 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glUniformMatrix4x3fv")
    data_307960c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

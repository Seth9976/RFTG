// 函数名称: sub_585a70
// 虚拟地址: 0x585a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585a70()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glClearDepthf")
    PROC eax = wglGetProcAddress("glClearDepthf")
    data_3079818 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDepthRangef")
    data_307981c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGetShaderPrecisionFormat")
    data_3079820 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glReleaseShaderCompiler")
    data_3079824 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glShaderBinary")
    data_3079828 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

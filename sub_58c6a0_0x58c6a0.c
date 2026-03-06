// 函数名称: sub_58c6a0
// 虚拟地址: 0x58c6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c6a0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glProgramEnvParameterI4iNV")
    PROC eax = wglGetProcAddress("glProgramEnvParameterI4iNV")
    data_307aaf0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glProgramEnvParameterI4ivNV")
    data_307aaf4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glProgramEnvParameterI4uiNV")
    data_307aaf8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glProgramEnvParameterI4uivNV")
    data_307aafc = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glProgramEnvParametersI4ivNV")
    data_307ab00 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glProgramEnvParametersI4uivNV")
    data_307ab04 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glProgramLocalParameterI4iNV")
    data_307ab08 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glProgramLocalParameterI4ivNV")
    data_307ab0c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glProgramLocalParameterI4uiNV")
    data_307ab10 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glProgramLocalParameterI4uivNV")
    data_307ab14 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glProgramLocalParametersI4ivNV")
    data_307ab18 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glProgramLocalParametersI4uivNV")
    data_307ab1c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

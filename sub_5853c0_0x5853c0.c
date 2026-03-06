// 函数名称: sub_5853c0
// 虚拟地址: 0x5853c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5853c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBlendEquationSeparatei")
    PROC eax = wglGetProcAddress("glBlendEquationSeparatei")
    data_307970c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBlendEquationi")
    data_3079710 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBlendFuncSeparatei")
    data_3079714 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glBlendFunci")
    data_3079718 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMinSampleShading")
    data_307971c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

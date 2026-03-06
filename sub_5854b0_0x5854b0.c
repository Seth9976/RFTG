// 函数名称: sub_5854b0
// 虚拟地址: 0x5854b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5854b0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBlendEquationIndexedAMD")
    PROC eax = wglGetProcAddress("glBlendEquationIndexedAMD")
    data_3079734 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBlendEquationSeparateIndexedAMD")
    data_3079738 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBlendFuncIndexedAMD")
    data_307973c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glBlendFuncSeparateIndexedAMD")
    data_3079740 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

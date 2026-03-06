// 函数名称: sub_585c60
// 虚拟地址: 0x585c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585c60()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawElementsBaseVertex")
    PROC eax = wglGetProcAddress("glDrawElementsBaseVertex")
    data_3079870 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawElementsInstancedBaseVertex")
    data_3079874 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDrawRangeElementsBaseVertex")
    data_3079878 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMultiDrawElementsBaseVertex")
    data_307987c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

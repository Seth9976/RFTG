// 函数名称: sub_58c100
// 虚拟地址: 0x58c100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c100()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBufferRegionEnabled")
    PROC eax = wglGetProcAddress("glBufferRegionEnabled")
    data_307a9f4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteBufferRegion")
    data_307a9f8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDrawBufferRegion")
    data_307a9fc = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glNewBufferRegion")
    data_307aa00 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glReadBufferRegion")
    data_307aa04 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

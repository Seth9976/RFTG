// 函数名称: sub_58c050
// 虚拟地址: 0x58c050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c050()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glColorPointervINTEL")
    PROC eax = wglGetProcAddress("glColorPointervINTEL")
    data_307a9dc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glNormalPointervINTEL")
    data_307a9e0 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glTexCoordPointervINTEL")
    data_307a9e4 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexPointervINTEL")
    data_307a9e8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

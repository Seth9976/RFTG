// 函数名称: sub_58bf90
// 虚拟地址: 0x58bf90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58bf90()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glColorPointerListIBM")
    PROC eax = wglGetProcAddress("glColorPointerListIBM")
    data_307a9bc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glEdgeFlagPointerListIBM")
    data_307a9c0 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glFogCoordPointerListIBM")
    data_307a9c4 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glIndexPointerListIBM")
    data_307a9c8 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glNormalPointerListIBM")
    data_307a9cc = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glSecondaryColorPointerListIBM")
    data_307a9d0 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glTexCoordPointerListIBM")
    data_307a9d4 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexPointerListIBM")
    data_307a9d8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

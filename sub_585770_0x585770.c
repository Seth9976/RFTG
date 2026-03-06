// 函数名称: sub_585770
// 虚拟地址: 0x585770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585770()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDeleteFencesAPPLE")
    PROC eax = wglGetProcAddress("glDeleteFencesAPPLE")
    data_30797a4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glFinishFenceAPPLE")
    data_30797a8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glFinishObjectAPPLE")
    data_30797ac = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGenFencesAPPLE")
    data_30797b0 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glIsFenceAPPLE")
    data_30797b4 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glSetFenceAPPLE")
    data_30797b8 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glTestFenceAPPLE")
    data_30797bc = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTestObjectAPPLE")
    data_30797c0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

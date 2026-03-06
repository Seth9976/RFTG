// 函数名称: sub_585970
// 虚拟地址: 0x585970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585970()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFlushVertexArrayRangeAPPLE")
    PROC eax = wglGetProcAddress("glFlushVertexArrayRangeAPPLE")
    data_30797f0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glVertexArrayParameteriAPPLE")
    data_30797f4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexArrayRangeAPPLE")
    data_30797f8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

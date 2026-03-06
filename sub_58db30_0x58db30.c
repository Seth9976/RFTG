// 函数名称: sub_58db30
// 虚拟地址: 0x58db30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58db30()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFlushVertexArrayRangeNV")
    PROC eax = wglGetProcAddress("glFlushVertexArrayRangeNV")
    data_307ae78 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glVertexArrayRangeNV")
    data_307ae7c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

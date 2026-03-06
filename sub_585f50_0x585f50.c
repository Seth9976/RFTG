// 函数名称: sub_585f50
// 虚拟地址: 0x585f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585f50()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetProgramBinary")
    PROC eax = wglGetProcAddress("glGetProgramBinary")
    data_30798e8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glProgramBinary")
    data_30798ec = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glProgramParameteri")
    data_30798f0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

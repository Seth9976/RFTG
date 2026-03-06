// 函数名称: sub_589040
// 虚拟地址: 0x589040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_589040()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetVertexAttribArrayObjectfvATI")
    PROC eax = wglGetProcAddress("glGetVertexAttribArrayObjectfvATI")
    data_307a154 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetVertexAttribArrayObjectivATI")
    data_307a158 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexAttribArrayObjectATI")
    data_307a15c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

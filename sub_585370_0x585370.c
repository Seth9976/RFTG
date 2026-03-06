// 函数名称: sub_585370
// 虚拟地址: 0x585370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585370()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFramebufferTexture")
    PROC eax = wglGetProcAddress("glFramebufferTexture")
    data_30796fc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetBufferParameteri64v")
    data_3079700 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetInteger64i_v")
    data_3079704 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_587db0
// 虚拟地址: 0x587db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587db0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindVertexArray")
    PROC eax = wglGetProcAddress("glBindVertexArray")
    data_3079e24 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteVertexArrays")
    data_3079e28 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGenVertexArrays")
    data_3079e2c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glIsVertexArray")
    data_3079e30 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

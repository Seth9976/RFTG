// 函数名称: sub_585af0
// 虚拟地址: 0x585af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585af0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawArraysInstancedBaseInstance")
    PROC eax = wglGetProcAddress("glDrawArraysInstancedBaseInstance")
    data_307982c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawElementsInstancedBaseInstance")
    data_3079830 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance")
    data_3079834 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

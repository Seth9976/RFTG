// 函数名称: sub_587ba0
// 虚拟地址: 0x587ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587ba0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginQueryIndexed")
    PROC eax = wglGetProcAddress("glBeginQueryIndexed")
    data_3079dd4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawTransformFeedbackStream")
    data_3079dd8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glEndQueryIndexed")
    data_3079ddc = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetQueryIndexediv")
    data_3079de0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

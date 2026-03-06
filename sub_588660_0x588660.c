// 函数名称: sub_588660
// 虚拟地址: 0x588660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_588660()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindAttribLocationARB")
    PROC eax = wglGetProcAddress("glBindAttribLocationARB")
    data_3079fa8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetActiveAttribARB")
    data_3079fac = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetAttribLocationARB")
    data_3079fb0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

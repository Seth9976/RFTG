// 函数名称: sub_58e990
// 虚拟地址: 0x58e990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e990()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glColorTableParameterfvSGI")
    PROC eax = wglGetProcAddress("glColorTableParameterfvSGI")
    data_307b0f8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glColorTableParameterivSGI")
    data_307b0fc = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glColorTableSGI")
    data_307b100 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glCopyColorTableSGI")
    data_307b104 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetColorTableParameterfvSGI")
    data_307b108 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetColorTableParameterivSGI")
    data_307b10c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetColorTableSGI")
    data_307b110 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

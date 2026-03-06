// 函数名称: sub_58b300
// 虚拟地址: 0x58b300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b300()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glColorTableEXT")
    PROC eax = wglGetProcAddress("glColorTableEXT")
    data_307a784 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetColorTableEXT")
    data_307a788 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGetColorTableParameterfvEXT")
    data_307a78c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetColorTableParameterivEXT")
    data_307a790 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

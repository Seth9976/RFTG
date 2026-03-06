// 函数名称: sub_58e920
// 虚拟地址: 0x58e920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e920()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glSpriteParameterfSGIX")
    PROC eax = wglGetProcAddress("glSpriteParameterfSGIX")
    data_307b0e4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glSpriteParameterfvSGIX")
    data_307b0e8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glSpriteParameteriSGIX")
    data_307b0ec = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glSpriteParameterivSGIX")
    data_307b0f0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

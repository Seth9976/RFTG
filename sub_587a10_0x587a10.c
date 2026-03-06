// 函数名称: sub_587a10
// 虚拟地址: 0x587a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587a10()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glTexStorage1D")
    PROC eax = wglGetProcAddress("glTexStorage1D")
    data_3079d94 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glTexStorage2D")
    data_3079d98 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glTexStorage3D")
    data_3079d9c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glTextureStorage1DEXT")
    data_3079da0 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glTextureStorage2DEXT")
    data_3079da4 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTextureStorage3DEXT")
    data_3079da8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_587770
// 虚拟地址: 0x587770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587770()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCompileShaderIncludeARB")
    PROC eax = wglGetProcAddress("glCompileShaderIncludeARB")
    data_3079d28 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteNamedStringARB")
    data_3079d2c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGetNamedStringARB")
    data_3079d30 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGetNamedStringivARB")
    data_3079d34 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glIsNamedStringARB")
    data_3079d38 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glNamedStringARB")
    data_3079d3c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

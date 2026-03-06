// 函数名称: sub_5878f0
// 虚拟地址: 0x5878f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5878f0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCompressedTexImage1DARB")
    PROC eax = wglGetProcAddress("glCompressedTexImage1DARB")
    data_3079d68 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glCompressedTexImage2DARB")
    data_3079d6c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glCompressedTexImage3DARB")
    data_3079d70 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glCompressedTexSubImage1DARB")
    data_3079d74 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glCompressedTexSubImage2DARB")
    data_3079d78 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glCompressedTexSubImage3DARB")
    data_3079d7c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetCompressedTexImageARB")
    data_3079d80 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

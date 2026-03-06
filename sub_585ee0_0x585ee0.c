// 函数名称: sub_585ee0
// 虚拟地址: 0x585ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585ee0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFramebufferTextureARB")
    PROC eax = wglGetProcAddress("glFramebufferTextureARB")
    data_30798d8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glFramebufferTextureFaceARB")
    data_30798dc = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glFramebufferTextureLayerARB")
    data_30798e0 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glProgramParameteriARB")
    data_30798e4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

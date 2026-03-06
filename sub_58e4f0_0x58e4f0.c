// 函数名称: sub_58e4f0
// 虚拟地址: 0x58e4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e4f0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glClearDepthfOES")
    PROC eax = wglGetProcAddress("glClearDepthfOES")
    data_307b02c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glClipPlanefOES")
    data_307b030 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDepthRangefOES")
    data_307b034 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glFrustumfOES")
    data_307b038 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetClipPlanefOES")
    data_307b03c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glOrthofOES")
    data_307b040 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

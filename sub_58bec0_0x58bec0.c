// 函数名称: sub_58bec0
// 虚拟地址: 0x58bec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58bec0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetImageTransformParameterfvHP")
    PROC eax = wglGetProcAddress("glGetImageTransformParameterfvHP")
    data_307a99c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetImageTransformParameterivHP")
    data_307a9a0 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glImageTransformParameterfHP")
    data_307a9a4 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glImageTransformParameterfvHP")
    data_307a9a8 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glImageTransformParameteriHP")
    data_307a9ac = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glImageTransformParameterivHP")
    data_307a9b0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

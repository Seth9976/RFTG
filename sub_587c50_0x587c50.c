// 函数名称: sub_587c50
// 虚拟地址: 0x587c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587c50()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glLoadTransposeMatrixdARB")
    PROC eax = wglGetProcAddress("glLoadTransposeMatrixdARB")
    data_3079dec = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glLoadTransposeMatrixfARB")
    data_3079df0 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glMultTransposeMatrixdARB")
    data_3079df4 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMultTransposeMatrixfARB")
    data_3079df8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

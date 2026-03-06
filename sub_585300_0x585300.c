// 函数名称: sub_585300
// 虚拟地址: 0x585300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585300()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawArraysInstanced")
    PROC eax = wglGetProcAddress("glDrawArraysInstanced")
    data_30796ec = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawElementsInstanced")
    data_30796f0 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glPrimitiveRestartIndex")
    data_30796f4 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTexBuffer")
    data_30796f8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

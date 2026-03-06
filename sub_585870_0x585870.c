// 函数名称: sub_585870
// 虚拟地址: 0x585870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585870()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetObjectParameterivAPPLE")
    PROC eax = wglGetProcAddress("glGetObjectParameterivAPPLE")
    data_30797cc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glObjectPurgeableAPPLE")
    data_30797d0 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glObjectUnpurgeableAPPLE")
    data_30797d4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

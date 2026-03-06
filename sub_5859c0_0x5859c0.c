// 函数名称: sub_5859c0
// 虚拟地址: 0x5859c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5859c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDisableVertexAttribAPPLE")
    PROC eax = wglGetProcAddress("glDisableVertexAttribAPPLE")
    data_30797fc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glEnableVertexAttribAPPLE")
    data_3079800 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glIsVertexAttribEnabledAPPLE")
    data_3079804 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glMapVertexAttrib1dAPPLE")
    data_3079808 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glMapVertexAttrib1fAPPLE")
    data_307980c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glMapVertexAttrib2dAPPLE")
    data_3079810 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMapVertexAttrib2fAPPLE")
    data_3079814 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

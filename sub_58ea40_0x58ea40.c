// 函数名称: sub_58ea40
// 虚拟地址: 0x58ea40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58ea40()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGlobalAlphaFactorbSUN")
    PROC eax = wglGetProcAddress("glGlobalAlphaFactorbSUN")
    data_307b118 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGlobalAlphaFactordSUN")
    data_307b11c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGlobalAlphaFactorfSUN")
    data_307b120 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGlobalAlphaFactoriSUN")
    data_307b124 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGlobalAlphaFactorsSUN")
    data_307b128 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGlobalAlphaFactorubSUN")
    data_307b12c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGlobalAlphaFactoruiSUN")
    data_307b130 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGlobalAlphaFactorusSUN")
    data_307b134 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

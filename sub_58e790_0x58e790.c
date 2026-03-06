// 函数名称: sub_58e790
// 虚拟地址: 0x58e790
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e790()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFragmentColorMaterialSGIX")
    PROC eax = wglGetProcAddress("glFragmentColorMaterialSGIX")
    data_307b094 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glFragmentLightModelfSGIX")
    data_307b098 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glFragmentLightModelfvSGIX")
    data_307b09c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glFragmentLightModeliSGIX")
    data_307b0a0 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glFragmentLightModelivSGIX")
    data_307b0a4 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glFragmentLightfSGIX")
    data_307b0a8 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glFragmentLightfvSGIX")
    data_307b0ac = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glFragmentLightiSGIX")
    data_307b0b0 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glFragmentLightivSGIX")
    data_307b0b4 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glFragmentMaterialfSGIX")
    data_307b0b8 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glFragmentMaterialfvSGIX")
    data_307b0bc = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glFragmentMaterialiSGIX")
    data_307b0c0 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glFragmentMaterialivSGIX")
    data_307b0c4 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glGetFragmentLightfvSGIX")
    data_307b0c8 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glGetFragmentLightivSGIX")
    data_307b0cc = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glGetFragmentMaterialfvSGIX")
    data_307b0d0 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glGetFragmentMaterialivSGIX")
    data_307b0d4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_592e50
// 虚拟地址: 0x592e50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592e50()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglDisableGenlockI3D")
    PROC eax = wglGetProcAddress("wglDisableGenlockI3D")
    data_307b480 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglEnableGenlockI3D")
    data_307b484 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglGenlockSampleRateI3D")
    data_307b488 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglGenlockSourceDelayI3D")
    data_307b48c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("wglGenlockSourceEdgeI3D")
    data_307b490 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("wglGenlockSourceI3D")
    data_307b494 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("wglGetGenlockSampleRateI3D")
    data_307b498 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("wglGetGenlockSourceDelayI3D")
    data_307b49c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("wglGetGenlockSourceEdgeI3D")
    data_307b4a0 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("wglGetGenlockSourceI3D")
    data_307b4a4 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("wglIsEnabledGenlockI3D")
    data_307b4a8 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglQueryGenlockMaxSourceDelayI3D")
    data_307b4ac = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

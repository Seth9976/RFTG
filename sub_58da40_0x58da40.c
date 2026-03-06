// 函数名称: sub_58da40
// 虚拟地址: 0x58da40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58da40()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glVDPAUFiniNV")
    PROC eax = wglGetProcAddress("glVDPAUFiniNV")
    data_307ae50 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glVDPAUGetSurfaceivNV")
    data_307ae54 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glVDPAUInitNV")
    data_307ae58 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glVDPAUIsSurfaceNV")
    data_307ae5c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glVDPAUMapSurfacesNV")
    data_307ae60 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glVDPAURegisterOutputSurfaceNV")
    data_307ae64 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glVDPAURegisterVideoSurfaceNV")
    data_307ae68 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glVDPAUSurfaceAccessNV")
    data_307ae6c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glVDPAUUnmapSurfacesNV")
    data_307ae70 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVDPAUUnregisterSurfaceNV")
    data_307ae74 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

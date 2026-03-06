// 函数名称: sub_5930c0
// 虚拟地址: 0x5930c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5930c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglDXCloseDeviceNV")
    PROC eax = wglGetProcAddress("wglDXCloseDeviceNV")
    data_307b4e0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglDXLockObjectsNV")
    data_307b4e4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglDXObjectAccessNV")
    data_307b4e8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglDXOpenDeviceNV")
    data_307b4ec = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("wglDXRegisterObjectNV")
    data_307b4f0 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("wglDXSetResourceShareHandleNV")
    data_307b4f4 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("wglDXUnlockObjectsNV")
    data_307b4f8 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglDXUnregisterObjectNV")
    data_307b4fc = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

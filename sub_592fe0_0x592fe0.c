// 函数名称: sub_592fe0
// 虚拟地址: 0x592fe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592fe0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglDisableFrameLockI3D")
    PROC eax = wglGetProcAddress("wglDisableFrameLockI3D")
    data_307b4c0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglEnableFrameLockI3D")
    data_307b4c4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglIsEnabledFrameLockI3D")
    data_307b4c8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglQueryFrameLockMasterI3D")
    data_307b4cc = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

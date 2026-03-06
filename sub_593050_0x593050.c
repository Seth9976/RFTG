// 函数名称: sub_593050
// 虚拟地址: 0x593050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_593050()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglBeginFrameTrackingI3D")
    PROC eax = wglGetProcAddress("wglBeginFrameTrackingI3D")
    data_307b4d0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglEndFrameTrackingI3D")
    data_307b4d4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglGetFrameUsageI3D")
    data_307b4d8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglQueryFrameTrackingI3D")
    data_307b4dc = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

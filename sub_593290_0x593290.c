// 函数名称: sub_593290
// 虚拟地址: 0x593290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_593290()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglBindVideoCaptureDeviceNV")
    PROC eax = wglGetProcAddress("wglBindVideoCaptureDeviceNV")
    data_307b544 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglEnumerateVideoCaptureDevicesNV")
    data_307b548 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglLockVideoCaptureDeviceNV")
    data_307b54c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglQueryVideoCaptureDeviceNV")
    data_307b550 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglReleaseVideoCaptureDeviceNV")
    data_307b554 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

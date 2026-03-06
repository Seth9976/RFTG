// 函数名称: sub_592f70
// 虚拟地址: 0x592f70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592f70()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglAssociateImageBufferEventsI3D")
    PROC eax = wglGetProcAddress("wglAssociateImageBufferEventsI3D")
    data_307b4b0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglCreateImageBufferI3D")
    data_307b4b4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglDestroyImageBufferI3D")
    data_307b4b8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglReleaseImageBufferEventsI3D")
    data_307b4bc = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

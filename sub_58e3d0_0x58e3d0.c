// 函数名称: sub_58e3d0
// 虚拟地址: 0x58e3d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e3d0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginVideoCaptureNV")
    PROC eax = wglGetProcAddress("glBeginVideoCaptureNV")
    data_307affc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBindVideoCaptureStreamBufferNV")
    data_307b000 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBindVideoCaptureStreamTextureNV")
    data_307b004 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glEndVideoCaptureNV")
    data_307b008 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetVideoCaptureStreamdvNV")
    data_307b00c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetVideoCaptureStreamfvNV")
    data_307b010 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGetVideoCaptureStreamivNV")
    data_307b014 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glGetVideoCaptureivNV")
    data_307b018 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glVideoCaptureNV")
    data_307b01c = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glVideoCaptureStreamParameterdvNV")
    data_307b020 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glVideoCaptureStreamParameterfvNV")
    data_307b024 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVideoCaptureStreamParameterivNV")
    data_307b028 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

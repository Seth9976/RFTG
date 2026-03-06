// 函数名称: sub_583b40
// 虚拟地址: 0x583b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_583b40()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCopyTexSubImage3D")
    PROC eax = wglGetProcAddress("glCopyTexSubImage3D")
    data_30792b4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawRangeElements")
    data_30792b8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glTexImage3D")
    data_30792bc = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTexSubImage3D")
    data_30792c0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_589610
// 虚拟地址: 0x589610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_589610()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCopyTexImage1DEXT")
    PROC eax = wglGetProcAddress("glCopyTexImage1DEXT")
    data_307a25c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glCopyTexImage2DEXT")
    data_307a260 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glCopyTexSubImage1DEXT")
    data_307a264 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glCopyTexSubImage2DEXT")
    data_307a268 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glCopyTexSubImage3DEXT")
    data_307a26c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

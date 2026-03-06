// 函数名称: sub_593180
// 虚拟地址: 0x593180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_593180()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglCreateAffinityDCNV")
    PROC eax = wglGetProcAddress("wglCreateAffinityDCNV")
    data_307b504 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglDeleteDCNV")
    data_307b508 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglEnumGpuDevicesNV")
    data_307b50c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglEnumGpusFromAffinityDCNV")
    data_307b510 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglEnumGpusNV")
    data_307b514 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

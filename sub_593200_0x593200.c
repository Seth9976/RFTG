// 函数名称: sub_593200
// 虚拟地址: 0x593200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_593200()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglBindSwapBarrierNV")
    PROC eax = wglGetProcAddress("wglBindSwapBarrierNV")
    data_307b524 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglJoinSwapGroupNV")
    data_307b528 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglQueryFrameCountNV")
    data_307b52c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglQueryMaxSwapGroupsNV")
    data_307b530 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("wglQuerySwapGroupNV")
    data_307b534 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglResetFrameCountNV")
    data_307b538 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

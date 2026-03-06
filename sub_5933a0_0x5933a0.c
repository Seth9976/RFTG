// 函数名称: sub_5933a0
// 虚拟地址: 0x5933a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5933a0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglGetMscRateOML")
    PROC eax = wglGetProcAddress("wglGetMscRateOML")
    data_307b570 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglGetSyncValuesOML")
    data_307b574 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglSwapBuffersMscOML")
    data_307b578 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("wglSwapLayerBuffersMscOML")
    data_307b57c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("wglWaitForMscOML")
    data_307b580 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglWaitForSbcOML")
    data_307b584 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

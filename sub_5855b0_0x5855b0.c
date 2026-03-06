// 函数名称: sub_5855b0
// 虚拟地址: 0x5855b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5855b0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginPerfMonitorAMD")
    PROC eax = wglGetProcAddress("glBeginPerfMonitorAMD")
    data_3079758 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeletePerfMonitorsAMD")
    data_307975c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glEndPerfMonitorAMD")
    data_3079760 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGenPerfMonitorsAMD")
    data_3079764 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGetPerfMonitorCounterDataAMD")
    data_3079768 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetPerfMonitorCounterInfoAMD")
    data_307976c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGetPerfMonitorCounterStringAMD")
    data_3079770 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glGetPerfMonitorCountersAMD")
    data_3079774 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glGetPerfMonitorGroupStringAMD")
    data_3079778 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glGetPerfMonitorGroupsAMD")
    data_307977c = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glSelectPerfMonitorCountersAMD")
    data_3079780 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

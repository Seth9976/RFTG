// 函数名称: sub_5843e0
// 虚拟地址: 0x5843e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5843e0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginQuery")
    PROC eax = wglGetProcAddress("glBeginQuery")
    data_3079438 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBindBuffer")
    data_307943c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBufferData")
    data_3079440 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glBufferSubData")
    data_3079444 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glDeleteBuffers")
    data_3079448 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glDeleteQueries")
    data_307944c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glEndQuery")
    data_3079450 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glGenBuffers")
    data_3079454 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glGenQueries")
    data_3079458 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glGetBufferParameteriv")
    data_307945c = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glGetBufferPointerv")
    data_3079460 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glGetBufferSubData")
    data_3079464 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glGetQueryObjectiv")
    data_3079468 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glGetQueryObjectuiv")
    data_307946c = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glGetQueryiv")
    data_3079470 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glIsBuffer")
    data_3079474 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glIsQuery")
    data_3079478 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glMapBuffer")
    data_307947c = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glUnmapBuffer")
    data_3079480 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_5894a0
// 虚拟地址: 0x5894a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5894a0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glConvolutionFilter1DEXT")
    PROC eax = wglGetProcAddress("glConvolutionFilter1DEXT")
    data_307a220 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glConvolutionFilter2DEXT")
    data_307a224 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glConvolutionParameterfEXT")
    data_307a228 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glConvolutionParameterfvEXT")
    data_307a22c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glConvolutionParameteriEXT")
    data_307a230 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glConvolutionParameterivEXT")
    data_307a234 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glCopyConvolutionFilter1DEXT")
    data_307a238 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glCopyConvolutionFilter2DEXT")
    data_307a23c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glGetConvolutionFilterEXT")
    data_307a240 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glGetConvolutionParameterfvEXT")
    data_307a244 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glGetConvolutionParameterivEXT")
    data_307a248 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glGetSeparableFilterEXT")
    data_307a24c = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glSeparableFilter2DEXT")
    data_307a250 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

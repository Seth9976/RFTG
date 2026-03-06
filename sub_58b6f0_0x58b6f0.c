// 函数名称: sub_58b6f0
// 虚拟地址: 0x58b6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b6f0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glClearColorIiEXT")
    PROC eax = wglGetProcAddress("glClearColorIiEXT")
    data_307a838 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glClearColorIuiEXT")
    data_307a83c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glGetTexParameterIivEXT")
    data_307a840 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glGetTexParameterIuivEXT")
    data_307a844 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glTexParameterIivEXT")
    data_307a848 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTexParameterIuivEXT")
    data_307a84c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

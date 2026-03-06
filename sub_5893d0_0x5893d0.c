// 函数名称: sub_5893d0
// 虚拟地址: 0x5893d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5893d0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetUniformBufferSizeEXT")
    PROC eax = wglGetProcAddress("glGetUniformBufferSizeEXT")
    data_307a1f4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetUniformOffsetEXT")
    data_307a1f8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glUniformBufferEXT")
    data_307a1fc = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

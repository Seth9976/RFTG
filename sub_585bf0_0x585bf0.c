// 函数名称: sub_585bf0
// 虚拟地址: 0x585bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585bf0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBlendEquationSeparateiARB")
    PROC eax = wglGetProcAddress("glBlendEquationSeparateiARB")
    data_3079860 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBlendEquationiARB")
    data_3079864 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBlendFuncSeparateiARB")
    data_3079868 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glBlendFunciARB")
    data_307986c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_592de0
// 虚拟地址: 0x592de0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592de0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglGetGammaTableI3D")
    PROC eax = wglGetProcAddress("wglGetGammaTableI3D")
    data_307b470 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglGetGammaTableParametersI3D")
    data_307b474 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglSetGammaTableI3D")
    data_307b478 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglSetGammaTableParametersI3D")
    data_307b47c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

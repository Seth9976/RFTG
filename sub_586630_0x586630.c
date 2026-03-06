// 函数名称: sub_586630
// 虚拟地址: 0x586630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_586630()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCurrentPaletteMatrixARB")
    PROC eax = wglGetProcAddress("glCurrentPaletteMatrixARB")
    data_3079a18 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glMatrixIndexPointerARB")
    data_3079a1c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glMatrixIndexubvARB")
    data_3079a20 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glMatrixIndexuivARB")
    data_3079a24 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMatrixIndexusvARB")
    data_3079a28 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

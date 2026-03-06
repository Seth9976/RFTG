// 函数名称: sub_592cf0
// 虚拟地址: 0x592cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_592cf0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("wglBindDisplayColorTableEXT")
    PROC eax = wglGetProcAddress("wglBindDisplayColorTableEXT")
    data_307b424 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("wglCreateDisplayColorTableEXT")
    data_307b428 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("wglDestroyDisplayColorTableEXT")
    data_307b42c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("wglLoadDisplayColorTableEXT")
    data_307b430 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

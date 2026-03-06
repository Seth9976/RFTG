// 函数名称: sub_585560
// 虚拟地址: 0x585560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585560()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDeleteNamesAMD")
    PROC eax = wglGetProcAddress("glDeleteNamesAMD")
    data_307974c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGenNamesAMD")
    data_3079750 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glIsNameAMD")
    data_3079754 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

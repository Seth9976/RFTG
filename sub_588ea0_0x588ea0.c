// 函数名称: sub_588ea0
// 虚拟地址: 0x588ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_588ea0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glPNTrianglesfATI")
    PROC eax = wglGetProcAddress("glPNTrianglesfATI")
    data_307a114 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glPNTrianglesiATI")
    data_307a118 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_58e600
// 虚拟地址: 0x58e600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e600()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glSampleMaskSGIS")
    PROC eax = wglGetProcAddress("glSampleMaskSGIS")
    data_307b054 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glSamplePatternSGIS")
    data_307b058 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

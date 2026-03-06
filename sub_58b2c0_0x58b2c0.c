// 函数名称: sub_58b2c0
// 虚拟地址: 0x58b2c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b2c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glSampleMaskEXT")
    PROC eax = wglGetProcAddress("glSampleMaskEXT")
    data_307a77c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glSamplePatternEXT")
    data_307a780 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

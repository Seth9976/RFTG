// 函数名称: sub_58d410
// 虚拟地址: 0x58d410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58d410()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFlushPixelDataRangeNV")
    PROC eax = wglGetProcAddress("glFlushPixelDataRangeNV")
    data_307ad4c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glPixelDataRangeNV")
    data_307ad50 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

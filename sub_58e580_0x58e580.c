// 函数名称: sub_58e580
// 虚拟地址: 0x58e580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e580()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDetailTexFuncSGIS")
    PROC eax = wglGetProcAddress("glDetailTexFuncSGIS")
    data_307b044 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glGetDetailTexFuncSGIS")
    data_307b048 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

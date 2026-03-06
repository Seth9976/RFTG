// 函数名称: sub_58e640
// 虚拟地址: 0x58e640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e640()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetSharpenTexFuncSGIS")
    PROC eax = wglGetProcAddress("glGetSharpenTexFuncSGIS")
    data_307b05c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glSharpenTexFuncSGIS")
    data_307b060 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

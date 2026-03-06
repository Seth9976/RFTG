// 函数名称: sub_58e5c0
// 虚拟地址: 0x58e5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e5c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFogFuncSGIS")
    PROC eax = wglGetProcAddress("glFogFuncSGIS")
    data_307b04c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glGetFogFuncSGIS")
    data_307b050 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

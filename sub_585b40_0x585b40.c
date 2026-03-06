// 函数名称: sub_585b40
// 虚拟地址: 0x585b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585b40()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindFragDataLocationIndexed")
    PROC eax = wglGetProcAddress("glBindFragDataLocationIndexed")
    data_3079838 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glGetFragDataIndex")
    data_307983c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

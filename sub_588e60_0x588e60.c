// 函数名称: sub_588e60
// 虚拟地址: 0x588e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_588e60()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glMapObjectBufferATI")
    PROC eax = wglGetProcAddress("glMapObjectBufferATI")
    data_307a10c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glUnmapObjectBufferATI")
    data_307a110 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

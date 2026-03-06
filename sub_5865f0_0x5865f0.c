// 函数名称: sub_5865f0
// 虚拟地址: 0x5865f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5865f0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glFlushMappedBufferRange")
    PROC eax = wglGetProcAddress("glFlushMappedBufferRange")
    data_3079a10 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glMapBufferRange")
    data_3079a14 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

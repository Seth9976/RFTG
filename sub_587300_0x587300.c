// 函数名称: sub_587300
// 虚拟地址: 0x587300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587300()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindImageTexture")
    PROC eax = wglGetProcAddress("glBindImageTexture")
    data_3079c64 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glMemoryBarrier")
    data_3079c68 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

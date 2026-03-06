// 函数名称: sub_58b660
// 虚拟地址: 0x58b660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b660()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindImageTextureEXT")
    PROC eax = wglGetProcAddress("glBindImageTextureEXT")
    data_307a814 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glMemoryBarrierEXT")
    data_307a818 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

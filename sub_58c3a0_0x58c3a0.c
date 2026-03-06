// 函数名称: sub_58c3a0
// 虚拟地址: 0x58c3a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c3a0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginConditionalRenderNV")
    PROC eax = wglGetProcAddress("glBeginConditionalRenderNV")
    data_307aa6c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glEndConditionalRenderNV")
    data_307aa70 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

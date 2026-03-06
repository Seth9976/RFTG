// 函数名称: sub_585520
// 虚拟地址: 0x585520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_585520()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glMultiDrawArraysIndirectAMD")
    PROC eax = wglGetProcAddress("glMultiDrawArraysIndirectAMD")
    data_3079744 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glMultiDrawElementsIndirectAMD")
    data_3079748 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

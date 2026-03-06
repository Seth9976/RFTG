// 函数名称: sub_5878b0
// 虚拟地址: 0x5878b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5878b0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glPatchParameterfv")
    PROC eax = wglGetProcAddress("glPatchParameterfv")
    data_3079d5c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glPatchParameteri")
    data_3079d60 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

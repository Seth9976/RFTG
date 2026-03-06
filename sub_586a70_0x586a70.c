// 函数名称: sub_586a70
// 虚拟地址: 0x586a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_586a70()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glPointParameterfARB")
    PROC eax = wglGetProcAddress("glPointParameterfARB")
    data_3079ad8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glPointParameterfvARB")
    data_3079adc = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

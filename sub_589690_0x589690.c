// 函数名称: sub_589690
// 虚拟地址: 0x589690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_589690()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glCullParameterdvEXT")
    PROC eax = wglGetProcAddress("glCullParameterdvEXT")
    data_307a270 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glCullParameterfvEXT")
    data_307a274 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

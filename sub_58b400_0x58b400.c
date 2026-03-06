// 函数名称: sub_58b400
// 虚拟地址: 0x58b400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b400()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glPointParameterfEXT")
    PROC eax = wglGetProcAddress("glPointParameterfEXT")
    data_307a7ac = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glPointParameterfvEXT")
    data_307a7b0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

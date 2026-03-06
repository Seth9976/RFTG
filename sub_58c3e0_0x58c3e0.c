// 函数名称: sub_58c3e0
// 虚拟地址: 0x58c3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c3e0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glClearDepthdNV")
    PROC eax = wglGetProcAddress("glClearDepthdNV")
    data_307aa78 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDepthBoundsdNV")
    data_307aa7c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glDepthRangedNV")
    data_307aa80 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

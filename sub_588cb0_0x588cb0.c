// 函数名称: sub_588cb0
// 虚拟地址: 0x588cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_588cb0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetTexBumpParameterfvATI")
    PROC eax = wglGetProcAddress("glGetTexBumpParameterfvATI")
    data_307a0c4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glGetTexBumpParameterivATI")
    data_307a0c8 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glTexBumpParameterfvATI")
    data_307a0cc = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTexBumpParameterivATI")
    data_307a0d0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

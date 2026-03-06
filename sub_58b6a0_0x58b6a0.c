// 函数名称: sub_58b6a0
// 虚拟地址: 0x58b6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b6a0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glTexSubImage1DEXT")
    PROC eax = wglGetProcAddress("glTexSubImage1DEXT")
    data_307a820 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glTexSubImage2DEXT")
    data_307a824 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTexSubImage3DEXT")
    data_307a828 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

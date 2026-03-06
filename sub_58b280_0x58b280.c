// 函数名称: sub_58b280
// 虚拟地址: 0x58b280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b280()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glMultiDrawArraysEXT")
    PROC eax = wglGetProcAddress("glMultiDrawArraysEXT")
    data_307a774 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glMultiDrawElementsEXT")
    data_307a778 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

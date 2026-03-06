// 函数名称: sub_58bf50
// 虚拟地址: 0x58bf50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58bf50()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glMultiModeDrawArraysIBM")
    PROC eax = wglGetProcAddress("glMultiModeDrawArraysIBM")
    data_307a9b4 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glMultiModeDrawElementsIBM")
    data_307a9b8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

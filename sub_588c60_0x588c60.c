// 函数名称: sub_588c60
// 虚拟地址: 0x588c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_588c60()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawElementArrayATI")
    PROC eax = wglGetProcAddress("glDrawElementArrayATI")
    data_307a0b8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawRangeElementArrayATI")
    data_307a0bc = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glElementPointerATI")
    data_307a0c0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

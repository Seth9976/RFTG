// 函数名称: sub_58c0c0
// 虚拟地址: 0x58c0c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c0c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glTexScissorFuncINTEL")
    PROC eax = wglGetProcAddress("glTexScissorFuncINTEL")
    data_307a9ec = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glTexScissorINTEL")
    data_307a9f0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

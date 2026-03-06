// 函数名称: sub_58a9c0
// 虚拟地址: 0x58a9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58a9c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawArraysInstancedEXT")
    PROC eax = wglGetProcAddress("glDrawArraysInstancedEXT")
    data_307a5e8 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glDrawElementsInstancedEXT")
    data_307a5ec = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

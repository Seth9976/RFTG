// 函数名称: sub_588ee0
// 虚拟地址: 0x588ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_588ee0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glStencilFuncSeparateATI")
    PROC eax = wglGetProcAddress("glStencilFuncSeparateATI")
    data_307a11c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glStencilOpSeparateATI")
    data_307a120 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

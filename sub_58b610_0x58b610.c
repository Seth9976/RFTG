// 函数名称: sub_58b610
// 虚拟地址: 0x58b610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b610()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glActiveProgramEXT")
    PROC eax = wglGetProcAddress("glActiveProgramEXT")
    data_307a808 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glCreateShaderProgramEXT")
    data_307a80c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glUseShaderProgramEXT")
    data_307a810 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_58eb00
// 虚拟地址: 0x58eb00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58eb00()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glReplacementCodePointerSUN")
    PROC eax = wglGetProcAddress("glReplacementCodePointerSUN")
    data_307b13c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glReplacementCodeubSUN")
    data_307b140 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glReplacementCodeubvSUN")
    data_307b144 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glReplacementCodeuiSUN")
    data_307b148 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glReplacementCodeuivSUN")
    data_307b14c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glReplacementCodeusSUN")
    data_307b150 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glReplacementCodeusvSUN")
    data_307b154 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

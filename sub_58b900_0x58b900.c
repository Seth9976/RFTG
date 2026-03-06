// 函数名称: sub_58b900
// 虚拟地址: 0x58b900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b900()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glArrayElementEXT")
    PROC eax = wglGetProcAddress("glArrayElementEXT")
    data_307a890 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glColorPointerEXT")
    data_307a894 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDrawArraysEXT")
    data_307a898 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glEdgeFlagPointerEXT")
    data_307a89c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glIndexPointerEXT")
    data_307a8a0 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glNormalPointerEXT")
    data_307a8a4 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glTexCoordPointerEXT")
    data_307a8a8 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexPointerEXT")
    data_307a8ac = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

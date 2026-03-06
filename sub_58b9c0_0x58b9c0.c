// 函数名称: sub_58b9c0
// 虚拟地址: 0x58b9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58b9c0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glGetVertexAttribLdvEXT")
    PROC eax = wglGetProcAddress("glGetVertexAttribLdvEXT")
    data_307a8b0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT")
    data_307a8b4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glVertexAttribL1dEXT")
    data_307a8b8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glVertexAttribL1dvEXT")
    data_307a8bc = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glVertexAttribL2dEXT")
    data_307a8c0 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glVertexAttribL2dvEXT")
    data_307a8c4 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glVertexAttribL3dEXT")
    data_307a8c8 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glVertexAttribL3dvEXT")
    data_307a8cc = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glVertexAttribL4dEXT")
    data_307a8d0 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glVertexAttribL4dvEXT")
    data_307a8d4 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexAttribLPointerEXT")
    data_307a8d8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

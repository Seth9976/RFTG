// 函数名称: sub_58be70
// 虚拟地址: 0x58be70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58be70()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glVertexWeightPointerEXT")
    PROC eax = wglGetProcAddress("glVertexWeightPointerEXT")
    data_307a984 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glVertexWeightfEXT")
    data_307a988 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexWeightfvEXT")
    data_307a98c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

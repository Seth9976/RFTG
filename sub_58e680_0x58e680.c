// 函数名称: sub_58e680
// 虚拟地址: 0x58e680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58e680()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glTexImage4DSGIS")
    PROC eax = wglGetProcAddress("glTexImage4DSGIS")
    data_307b064 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC result = wglGetProcAddress("glTexSubImage4DSGIS")
    data_307b068 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_5865a0
// 虚拟地址: 0x5865a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5865a0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glDrawArraysInstancedARB")
    PROC eax = wglGetProcAddress("glDrawArraysInstancedARB")
    data_3079a00 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDrawElementsInstancedARB")
    data_3079a04 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexAttribDivisorARB")
    data_3079a08 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

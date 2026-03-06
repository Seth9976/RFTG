// 函数名称: sub_587f10
// 虚拟地址: 0x587f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_587f10()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glVertexBlendARB")
    PROC eax = wglGetProcAddress("glVertexBlendARB")
    data_3079e5c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glWeightPointerARB")
    data_3079e60 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glWeightbvARB")
    data_3079e64 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glWeightdvARB")
    data_3079e68 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glWeightfvARB")
    data_3079e6c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glWeightivARB")
    data_3079e70 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glWeightsvARB")
    data_3079e74 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glWeightubvARB")
    data_3079e78 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glWeightuivARB")
    data_3079e7c = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glWeightusvARB")
    data_3079e80 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

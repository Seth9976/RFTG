// 函数名称: sub_5866b0
// 虚拟地址: 0x5866b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5866b0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glActiveTextureARB")
    PROC eax = wglGetProcAddress("glActiveTextureARB")
    data_3079a30 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glClientActiveTextureARB")
    data_3079a34 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glMultiTexCoord1dARB")
    data_3079a38 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glMultiTexCoord1dvARB")
    data_3079a3c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glMultiTexCoord1fARB")
    data_3079a40 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glMultiTexCoord1fvARB")
    data_3079a44 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glMultiTexCoord1iARB")
    data_3079a48 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glMultiTexCoord1ivARB")
    data_3079a4c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glMultiTexCoord1sARB")
    data_3079a50 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glMultiTexCoord1svARB")
    data_3079a54 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glMultiTexCoord2dARB")
    data_3079a58 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glMultiTexCoord2dvARB")
    data_3079a5c = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glMultiTexCoord2fARB")
    data_3079a60 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glMultiTexCoord2fvARB")
    data_3079a64 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glMultiTexCoord2iARB")
    data_3079a68 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glMultiTexCoord2ivARB")
    data_3079a6c = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glMultiTexCoord2sARB")
    data_3079a70 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glMultiTexCoord2svARB")
    data_3079a74 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glMultiTexCoord3dARB")
    data_3079a78 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glMultiTexCoord3dvARB")
    data_3079a7c = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glMultiTexCoord3fARB")
    data_3079a80 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glMultiTexCoord3fvARB")
    data_3079a84 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glMultiTexCoord3iARB")
    data_3079a88 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glMultiTexCoord3ivARB")
    data_3079a8c = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glMultiTexCoord3sARB")
    data_3079a90 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glMultiTexCoord3svARB")
    data_3079a94 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glMultiTexCoord4dARB")
    data_3079a98 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glMultiTexCoord4dvARB")
    data_3079a9c = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glMultiTexCoord4fARB")
    data_3079aa0 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glMultiTexCoord4fvARB")
    data_3079aa4 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glMultiTexCoord4iARB")
    data_3079aa8 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glMultiTexCoord4ivARB")
    data_3079aac = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glMultiTexCoord4sARB")
    data_3079ab0 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glMultiTexCoord4svARB")
    data_3079ab4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

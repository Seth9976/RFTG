// 函数名称: sub_589090
// 虚拟地址: 0x589090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_589090()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glClientActiveVertexStreamATI")
    PROC eax = wglGetProcAddress("glClientActiveVertexStreamATI")
    data_307a160 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glNormalStream3bATI")
    data_307a164 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glNormalStream3bvATI")
    data_307a168 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glNormalStream3dATI")
    data_307a16c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glNormalStream3dvATI")
    data_307a170 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glNormalStream3fATI")
    data_307a174 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glNormalStream3fvATI")
    data_307a178 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glNormalStream3iATI")
    data_307a17c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glNormalStream3ivATI")
    data_307a180 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glNormalStream3sATI")
    data_307a184 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glNormalStream3svATI")
    data_307a188 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glVertexBlendEnvfATI")
    data_307a18c = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glVertexBlendEnviATI")
    data_307a190 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glVertexStream2dATI")
    data_307a194 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glVertexStream2dvATI")
    data_307a198 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glVertexStream2fATI")
    data_307a19c = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glVertexStream2fvATI")
    data_307a1a0 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glVertexStream2iATI")
    data_307a1a4 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glVertexStream2ivATI")
    data_307a1a8 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glVertexStream2sATI")
    data_307a1ac = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glVertexStream2svATI")
    data_307a1b0 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glVertexStream3dATI")
    data_307a1b4 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glVertexStream3dvATI")
    data_307a1b8 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glVertexStream3fATI")
    data_307a1bc = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glVertexStream3fvATI")
    data_307a1c0 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glVertexStream3iATI")
    data_307a1c4 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glVertexStream3ivATI")
    data_307a1c8 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glVertexStream3sATI")
    data_307a1cc = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glVertexStream3svATI")
    data_307a1d0 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glVertexStream4dATI")
    data_307a1d4 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glVertexStream4dvATI")
    data_307a1d8 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glVertexStream4fATI")
    data_307a1dc = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glVertexStream4fvATI")
    data_307a1e0 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glVertexStream4iATI")
    data_307a1e4 = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glVertexStream4ivATI")
    data_307a1e8 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glVertexStream4sATI")
    data_307a1ec = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexStream4svATI")
    data_307a1f0 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

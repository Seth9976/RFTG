// 函数名称: sub_58c180
// 虚拟地址: 0x58c180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58c180()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glWindowPos2dMESA")
    PROC eax = wglGetProcAddress("glWindowPos2dMESA")
    data_307aa0c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glWindowPos2dvMESA")
    data_307aa10 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glWindowPos2fMESA")
    data_307aa14 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glWindowPos2fvMESA")
    data_307aa18 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glWindowPos2iMESA")
    data_307aa1c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glWindowPos2ivMESA")
    data_307aa20 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glWindowPos2sMESA")
    data_307aa24 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glWindowPos2svMESA")
    data_307aa28 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glWindowPos3dMESA")
    data_307aa2c = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glWindowPos3dvMESA")
    data_307aa30 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glWindowPos3fMESA")
    data_307aa34 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glWindowPos3fvMESA")
    data_307aa38 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glWindowPos3iMESA")
    data_307aa3c = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glWindowPos3ivMESA")
    data_307aa40 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glWindowPos3sMESA")
    data_307aa44 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glWindowPos3svMESA")
    data_307aa48 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glWindowPos4dMESA")
    data_307aa4c = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glWindowPos4dvMESA")
    data_307aa50 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glWindowPos4fMESA")
    data_307aa54 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glWindowPos4fvMESA")
    data_307aa58 = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glWindowPos4iMESA")
    data_307aa5c = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glWindowPos4ivMESA")
    data_307aa60 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glWindowPos4sMESA")
    data_307aa64 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glWindowPos4svMESA")
    data_307aa68 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

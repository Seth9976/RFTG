// 函数名称: sub_58ebb0
// 虚拟地址: 0x58ebb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58ebb0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glColor3fVertex3fSUN")
    PROC eax = wglGetProcAddress("glColor3fVertex3fSUN")
    data_307b158 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glColor3fVertex3fvSUN")
    data_307b15c = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glColor4fNormal3fVertex3fSUN")
    data_307b160 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glColor4fNormal3fVertex3fvSUN")
    data_307b164 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glColor4ubVertex2fSUN")
    data_307b168 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glColor4ubVertex2fvSUN")
    data_307b16c = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glColor4ubVertex3fSUN")
    data_307b170 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glColor4ubVertex3fvSUN")
    data_307b174 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glNormal3fVertex3fSUN")
    data_307b178 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glNormal3fVertex3fvSUN")
    data_307b17c = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glReplacementCodeuiColor3fVertex3fSUN")
    data_307b180 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN")
    data_307b184 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN")
    data_307b188 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN")
    data_307b18c = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN")
    data_307b190 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN")
    data_307b194 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN")
    data_307b198 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN")
    data_307b19c = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN")
    data_307b1a0 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN")
    data_307b1a4 = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN")
    data_307b1a8 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN")
    data_307b1ac = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN")
    data_307b1b0 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN")
    data_307b1b4 = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glReplacementCodeuiVertex3fSUN")
    data_307b1b8 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glReplacementCodeuiVertex3fvSUN")
    data_307b1bc = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN")
    data_307b1c0 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN")
    data_307b1c4 = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN")
    data_307b1c8 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN")
    data_307b1cc = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN")
    data_307b1d0 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN")
    data_307b1d4 = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN")
    data_307b1d8 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN")
    data_307b1dc = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glTexCoord2fVertex3fSUN")
    data_307b1e0 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glTexCoord2fVertex3fvSUN")
    data_307b1e4 = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN")
    data_307b1e8 = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN")
    data_307b1ec = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glTexCoord4fVertex4fSUN")
    data_307b1f0 = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glTexCoord4fVertex4fvSUN")
    data_307b1f4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

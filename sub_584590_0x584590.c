// 函数名称: sub_584590
// 虚拟地址: 0x584590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_584590()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glAttachShader")
    PROC eax = wglGetProcAddress("glAttachShader")
    data_3079484 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBindAttribLocation")
    data_3079488 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBlendEquationSeparate")
    data_307948c = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glCompileShader")
    data_3079490 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glCreateProgram")
    data_3079494 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glCreateShader")
    data_3079498 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glDeleteProgram")
    data_307949c = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glDeleteShader")
    data_30794a0 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glDetachShader")
    data_30794a4 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glDisableVertexAttribArray")
    data_30794a8 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glDrawBuffers")
    data_30794ac = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glEnableVertexAttribArray")
    data_30794b0 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glGetActiveAttrib")
    data_30794b4 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glGetActiveUniform")
    data_30794b8 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glGetAttachedShaders")
    data_30794bc = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glGetAttribLocation")
    data_30794c0 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glGetProgramInfoLog")
    data_30794c4 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glGetProgramiv")
    data_30794c8 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glGetShaderInfoLog")
    data_30794cc = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glGetShaderSource")
    data_30794d0 = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glGetShaderiv")
    data_30794d4 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glGetUniformLocation")
    data_30794d8 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glGetUniformfv")
    data_30794dc = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glGetUniformiv")
    data_30794e0 = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glGetVertexAttribPointerv")
    data_30794e4 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glGetVertexAttribdv")
    data_30794e8 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glGetVertexAttribfv")
    data_30794ec = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glGetVertexAttribiv")
    data_30794f0 = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glIsProgram")
    data_30794f4 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glIsShader")
    data_30794f8 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glLinkProgram")
    data_30794fc = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glShaderSource")
    data_3079500 = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glStencilFuncSeparate")
    data_3079504 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glStencilMaskSeparate")
    data_3079508 = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glStencilOpSeparate")
    data_307950c = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glUniform1f")
    data_3079510 = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glUniform1fv")
    data_3079514 = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glUniform1i")
    data_3079518 = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glUniform1iv")
    data_307951c = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_39 = wglGetProcAddress("glUniform2f")
    data_3079520 = eax_39
    
    if (eax_39 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_40 = wglGetProcAddress("glUniform2fv")
    data_3079524 = eax_40
    
    if (eax_40 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_41 = wglGetProcAddress("glUniform2i")
    data_3079528 = eax_41
    
    if (eax_41 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_42 = wglGetProcAddress("glUniform2iv")
    data_307952c = eax_42
    
    if (eax_42 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_43 = wglGetProcAddress("glUniform3f")
    data_3079530 = eax_43
    
    if (eax_43 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_44 = wglGetProcAddress("glUniform3fv")
    data_3079534 = eax_44
    
    if (eax_44 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_45 = wglGetProcAddress("glUniform3i")
    data_3079538 = eax_45
    
    if (eax_45 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_46 = wglGetProcAddress("glUniform3iv")
    data_307953c = eax_46
    
    if (eax_46 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_47 = wglGetProcAddress("glUniform4f")
    data_3079540 = eax_47
    
    if (eax_47 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_48 = wglGetProcAddress("glUniform4fv")
    data_3079544 = eax_48
    
    if (eax_48 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_49 = wglGetProcAddress("glUniform4i")
    data_3079548 = eax_49
    
    if (eax_49 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_50 = wglGetProcAddress("glUniform4iv")
    data_307954c = eax_50
    
    if (eax_50 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_51 = wglGetProcAddress("glUniformMatrix2fv")
    data_3079550 = eax_51
    
    if (eax_51 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_52 = wglGetProcAddress("glUniformMatrix3fv")
    data_3079554 = eax_52
    
    if (eax_52 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_53 = wglGetProcAddress("glUniformMatrix4fv")
    data_3079558 = eax_53
    
    if (eax_53 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_54 = wglGetProcAddress("glUseProgram")
    data_307955c = eax_54
    
    if (eax_54 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_55 = wglGetProcAddress("glValidateProgram")
    data_3079560 = eax_55
    
    if (eax_55 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_56 = wglGetProcAddress("glVertexAttrib1d")
    data_3079564 = eax_56
    
    if (eax_56 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_57 = wglGetProcAddress("glVertexAttrib1dv")
    data_3079568 = eax_57
    
    if (eax_57 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_58 = wglGetProcAddress("glVertexAttrib1f")
    data_307956c = eax_58
    
    if (eax_58 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_59 = wglGetProcAddress("glVertexAttrib1fv")
    data_3079570 = eax_59
    
    if (eax_59 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_60 = wglGetProcAddress("glVertexAttrib1s")
    data_3079574 = eax_60
    
    if (eax_60 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_61 = wglGetProcAddress("glVertexAttrib1sv")
    data_3079578 = eax_61
    
    if (eax_61 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_62 = wglGetProcAddress("glVertexAttrib2d")
    data_307957c = eax_62
    
    if (eax_62 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_63 = wglGetProcAddress("glVertexAttrib2dv")
    data_3079580 = eax_63
    
    if (eax_63 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_64 = wglGetProcAddress("glVertexAttrib2f")
    data_3079584 = eax_64
    
    if (eax_64 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_65 = wglGetProcAddress("glVertexAttrib2fv")
    data_3079588 = eax_65
    
    if (eax_65 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_66 = wglGetProcAddress("glVertexAttrib2s")
    data_307958c = eax_66
    
    if (eax_66 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_67 = wglGetProcAddress("glVertexAttrib2sv")
    data_3079590 = eax_67
    
    if (eax_67 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_68 = wglGetProcAddress("glVertexAttrib3d")
    data_3079594 = eax_68
    
    if (eax_68 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_69 = wglGetProcAddress("glVertexAttrib3dv")
    data_3079598 = eax_69
    
    if (eax_69 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_70 = wglGetProcAddress("glVertexAttrib3f")
    data_307959c = eax_70
    
    if (eax_70 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_71 = wglGetProcAddress("glVertexAttrib3fv")
    data_30795a0 = eax_71
    
    if (eax_71 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_72 = wglGetProcAddress("glVertexAttrib3s")
    data_30795a4 = eax_72
    
    if (eax_72 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_73 = wglGetProcAddress("glVertexAttrib3sv")
    data_30795a8 = eax_73
    
    if (eax_73 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_74 = wglGetProcAddress("glVertexAttrib4Nbv")
    data_30795ac = eax_74
    
    if (eax_74 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_75 = wglGetProcAddress("glVertexAttrib4Niv")
    data_30795b0 = eax_75
    
    if (eax_75 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_76 = wglGetProcAddress("glVertexAttrib4Nsv")
    data_30795b4 = eax_76
    
    if (eax_76 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_77 = wglGetProcAddress("glVertexAttrib4Nub")
    data_30795b8 = eax_77
    
    if (eax_77 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_78 = wglGetProcAddress("glVertexAttrib4Nubv")
    data_30795bc = eax_78
    
    if (eax_78 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_79 = wglGetProcAddress("glVertexAttrib4Nuiv")
    data_30795c0 = eax_79
    
    if (eax_79 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_80 = wglGetProcAddress("glVertexAttrib4Nusv")
    data_30795c4 = eax_80
    
    if (eax_80 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_81 = wglGetProcAddress("glVertexAttrib4bv")
    data_30795c8 = eax_81
    
    if (eax_81 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_82 = wglGetProcAddress("glVertexAttrib4d")
    data_30795cc = eax_82
    
    if (eax_82 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_83 = wglGetProcAddress("glVertexAttrib4dv")
    data_30795d0 = eax_83
    
    if (eax_83 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_84 = wglGetProcAddress("glVertexAttrib4f")
    data_30795d4 = eax_84
    
    if (eax_84 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_85 = wglGetProcAddress("glVertexAttrib4fv")
    data_30795d8 = eax_85
    
    if (eax_85 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_86 = wglGetProcAddress("glVertexAttrib4iv")
    data_30795dc = eax_86
    
    if (eax_86 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_87 = wglGetProcAddress("glVertexAttrib4s")
    data_30795e0 = eax_87
    
    if (eax_87 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_88 = wglGetProcAddress("glVertexAttrib4sv")
    data_30795e4 = eax_88
    
    if (eax_88 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_89 = wglGetProcAddress("glVertexAttrib4ubv")
    data_30795e8 = eax_89
    
    if (eax_89 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_90 = wglGetProcAddress("glVertexAttrib4uiv")
    data_30795ec = eax_90
    
    if (eax_90 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_91 = wglGetProcAddress("glVertexAttrib4usv")
    data_30795f0 = eax_91
    
    if (eax_91 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexAttribPointer")
    data_30795f4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

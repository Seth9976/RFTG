// 函数名称: sub_586dc0
// 虚拟地址: 0x586dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_586dc0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glActiveShaderProgram")
    PROC eax = wglGetProcAddress("glActiveShaderProgram")
    data_3079b70 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBindProgramPipeline")
    data_3079b74 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glCreateShaderProgramv")
    data_3079b78 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glDeleteProgramPipelines")
    data_3079b7c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGenProgramPipelines")
    data_3079b80 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetProgramPipelineInfoLog")
    data_3079b84 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGetProgramPipelineiv")
    data_3079b88 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glIsProgramPipeline")
    data_3079b8c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glProgramUniform1d")
    data_3079b90 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glProgramUniform1dv")
    data_3079b94 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glProgramUniform1f")
    data_3079b98 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glProgramUniform1fv")
    data_3079b9c = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glProgramUniform1i")
    data_3079ba0 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glProgramUniform1iv")
    data_3079ba4 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glProgramUniform1ui")
    data_3079ba8 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glProgramUniform1uiv")
    data_3079bac = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glProgramUniform2d")
    data_3079bb0 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glProgramUniform2dv")
    data_3079bb4 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glProgramUniform2f")
    data_3079bb8 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glProgramUniform2fv")
    data_3079bbc = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glProgramUniform2i")
    data_3079bc0 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glProgramUniform2iv")
    data_3079bc4 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glProgramUniform2ui")
    data_3079bc8 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glProgramUniform2uiv")
    data_3079bcc = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glProgramUniform3d")
    data_3079bd0 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glProgramUniform3dv")
    data_3079bd4 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glProgramUniform3f")
    data_3079bd8 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glProgramUniform3fv")
    data_3079bdc = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glProgramUniform3i")
    data_3079be0 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glProgramUniform3iv")
    data_3079be4 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glProgramUniform3ui")
    data_3079be8 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glProgramUniform3uiv")
    data_3079bec = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glProgramUniform4d")
    data_3079bf0 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glProgramUniform4dv")
    data_3079bf4 = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glProgramUniform4f")
    data_3079bf8 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glProgramUniform4fv")
    data_3079bfc = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glProgramUniform4i")
    data_3079c00 = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glProgramUniform4iv")
    data_3079c04 = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glProgramUniform4ui")
    data_3079c08 = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_39 = wglGetProcAddress("glProgramUniform4uiv")
    data_3079c0c = eax_39
    
    if (eax_39 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_40 = wglGetProcAddress("glProgramUniformMatrix2dv")
    data_3079c10 = eax_40
    
    if (eax_40 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_41 = wglGetProcAddress("glProgramUniformMatrix2fv")
    data_3079c14 = eax_41
    
    if (eax_41 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_42 = wglGetProcAddress("glProgramUniformMatrix2x3dv")
    data_3079c18 = eax_42
    
    if (eax_42 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_43 = wglGetProcAddress("glProgramUniformMatrix2x3fv")
    data_3079c1c = eax_43
    
    if (eax_43 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_44 = wglGetProcAddress("glProgramUniformMatrix2x4dv")
    data_3079c20 = eax_44
    
    if (eax_44 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_45 = wglGetProcAddress("glProgramUniformMatrix2x4fv")
    data_3079c24 = eax_45
    
    if (eax_45 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_46 = wglGetProcAddress("glProgramUniformMatrix3dv")
    data_3079c28 = eax_46
    
    if (eax_46 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_47 = wglGetProcAddress("glProgramUniformMatrix3fv")
    data_3079c2c = eax_47
    
    if (eax_47 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_48 = wglGetProcAddress("glProgramUniformMatrix3x2dv")
    data_3079c30 = eax_48
    
    if (eax_48 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_49 = wglGetProcAddress("glProgramUniformMatrix3x2fv")
    data_3079c34 = eax_49
    
    if (eax_49 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_50 = wglGetProcAddress("glProgramUniformMatrix3x4dv")
    data_3079c38 = eax_50
    
    if (eax_50 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_51 = wglGetProcAddress("glProgramUniformMatrix3x4fv")
    data_3079c3c = eax_51
    
    if (eax_51 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_52 = wglGetProcAddress("glProgramUniformMatrix4dv")
    data_3079c40 = eax_52
    
    if (eax_52 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_53 = wglGetProcAddress("glProgramUniformMatrix4fv")
    data_3079c44 = eax_53
    
    if (eax_53 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_54 = wglGetProcAddress("glProgramUniformMatrix4x2dv")
    data_3079c48 = eax_54
    
    if (eax_54 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_55 = wglGetProcAddress("glProgramUniformMatrix4x2fv")
    data_3079c4c = eax_55
    
    if (eax_55 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_56 = wglGetProcAddress("glProgramUniformMatrix4x3dv")
    data_3079c50 = eax_56
    
    if (eax_56 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_57 = wglGetProcAddress("glProgramUniformMatrix4x3fv")
    data_3079c54 = eax_57
    
    if (eax_57 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_58 = wglGetProcAddress("glUseProgramStages")
    data_3079c58 = eax_58
    
    if (eax_58 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glValidateProgramPipeline")
    data_3079c5c = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

// 函数名称: sub_584e30
// 虚拟地址: 0x584e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_584e30()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBeginConditionalRender")
    PROC eax = wglGetProcAddress("glBeginConditionalRender")
    data_3079610 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBeginTransformFeedback")
    data_3079614 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glBindFragDataLocation")
    data_3079618 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glClampColor")
    data_307961c = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glClearBufferfi")
    data_3079620 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glClearBufferfv")
    data_3079624 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glClearBufferiv")
    data_3079628 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glClearBufferuiv")
    data_307962c = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glColorMaski")
    data_3079630 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glDisablei")
    data_3079634 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glEnablei")
    data_3079638 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glEndConditionalRender")
    data_307963c = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glEndTransformFeedback")
    data_3079640 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glGetBooleani_v")
    data_3079644 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glGetFragDataLocation")
    data_3079648 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glGetStringi")
    data_307964c = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glGetTexParameterIiv")
    data_3079650 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glGetTexParameterIuiv")
    data_3079654 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glGetTransformFeedbackVarying")
    data_3079658 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glGetUniformuiv")
    data_307965c = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glGetVertexAttribIiv")
    data_3079660 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glGetVertexAttribIuiv")
    data_3079664 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glIsEnabledi")
    data_3079668 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glTexParameterIiv")
    data_307966c = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glTexParameterIuiv")
    data_3079670 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glTransformFeedbackVaryings")
    data_3079674 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glUniform1ui")
    data_3079678 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glUniform1uiv")
    data_307967c = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glUniform2ui")
    data_3079680 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glUniform2uiv")
    data_3079684 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glUniform3ui")
    data_3079688 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glUniform3uiv")
    data_307968c = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glUniform4ui")
    data_3079690 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glUniform4uiv")
    data_3079694 = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glVertexAttribI1i")
    data_3079698 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glVertexAttribI1iv")
    data_307969c = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glVertexAttribI1ui")
    data_30796a0 = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glVertexAttribI1uiv")
    data_30796a4 = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glVertexAttribI2i")
    data_30796a8 = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_39 = wglGetProcAddress("glVertexAttribI2iv")
    data_30796ac = eax_39
    
    if (eax_39 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_40 = wglGetProcAddress("glVertexAttribI2ui")
    data_30796b0 = eax_40
    
    if (eax_40 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_41 = wglGetProcAddress("glVertexAttribI2uiv")
    data_30796b4 = eax_41
    
    if (eax_41 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_42 = wglGetProcAddress("glVertexAttribI3i")
    data_30796b8 = eax_42
    
    if (eax_42 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_43 = wglGetProcAddress("glVertexAttribI3iv")
    data_30796bc = eax_43
    
    if (eax_43 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_44 = wglGetProcAddress("glVertexAttribI3ui")
    data_30796c0 = eax_44
    
    if (eax_44 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_45 = wglGetProcAddress("glVertexAttribI3uiv")
    data_30796c4 = eax_45
    
    if (eax_45 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_46 = wglGetProcAddress("glVertexAttribI4bv")
    data_30796c8 = eax_46
    
    if (eax_46 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_47 = wglGetProcAddress("glVertexAttribI4i")
    data_30796cc = eax_47
    
    if (eax_47 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_48 = wglGetProcAddress("glVertexAttribI4iv")
    data_30796d0 = eax_48
    
    if (eax_48 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_49 = wglGetProcAddress("glVertexAttribI4sv")
    data_30796d4 = eax_49
    
    if (eax_49 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_50 = wglGetProcAddress("glVertexAttribI4ubv")
    data_30796d8 = eax_50
    
    if (eax_50 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_51 = wglGetProcAddress("glVertexAttribI4ui")
    data_30796dc = eax_51
    
    if (eax_51 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_52 = wglGetProcAddress("glVertexAttribI4uiv")
    data_30796e0 = eax_52
    
    if (eax_52 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_53 = wglGetProcAddress("glVertexAttribI4usv")
    data_30796e4 = eax_53
    
    if (eax_53 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexAttribIPointer")
    data_30796e8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

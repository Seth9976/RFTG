// 函数名称: sub_58de40
// 虚拟地址: 0x58de40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_58de40()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glAreProgramsResidentNV")
    PROC eax = wglGetProcAddress("glAreProgramsResidentNV")
    data_307aefc = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glBindProgramNV")
    data_307af00 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDeleteProgramsNV")
    data_307af04 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glExecuteProgramNV")
    data_307af08 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGenProgramsNV")
    data_307af0c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetProgramParameterdvNV")
    data_307af10 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGetProgramParameterfvNV")
    data_307af14 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glGetProgramStringNV")
    data_307af18 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glGetProgramivNV")
    data_307af1c = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glGetTrackMatrixivNV")
    data_307af20 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glGetVertexAttribPointervNV")
    data_307af24 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glGetVertexAttribdvNV")
    data_307af28 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glGetVertexAttribfvNV")
    data_307af2c = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glGetVertexAttribivNV")
    data_307af30 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glIsProgramNV")
    data_307af34 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glLoadProgramNV")
    data_307af38 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glProgramParameter4dNV")
    data_307af3c = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glProgramParameter4dvNV")
    data_307af40 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glProgramParameter4fNV")
    data_307af44 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glProgramParameter4fvNV")
    data_307af48 = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glProgramParameters4dvNV")
    data_307af4c = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glProgramParameters4fvNV")
    data_307af50 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glRequestResidentProgramsNV")
    data_307af54 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glTrackMatrixNV")
    data_307af58 = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glVertexAttrib1dNV")
    data_307af5c = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glVertexAttrib1dvNV")
    data_307af60 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glVertexAttrib1fNV")
    data_307af64 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glVertexAttrib1fvNV")
    data_307af68 = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glVertexAttrib1sNV")
    data_307af6c = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glVertexAttrib1svNV")
    data_307af70 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glVertexAttrib2dNV")
    data_307af74 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glVertexAttrib2dvNV")
    data_307af78 = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glVertexAttrib2fNV")
    data_307af7c = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glVertexAttrib2fvNV")
    data_307af80 = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glVertexAttrib2sNV")
    data_307af84 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glVertexAttrib2svNV")
    data_307af88 = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glVertexAttrib3dNV")
    data_307af8c = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glVertexAttrib3dvNV")
    data_307af90 = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glVertexAttrib3fNV")
    data_307af94 = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_39 = wglGetProcAddress("glVertexAttrib3fvNV")
    data_307af98 = eax_39
    
    if (eax_39 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_40 = wglGetProcAddress("glVertexAttrib3sNV")
    data_307af9c = eax_40
    
    if (eax_40 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_41 = wglGetProcAddress("glVertexAttrib3svNV")
    data_307afa0 = eax_41
    
    if (eax_41 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_42 = wglGetProcAddress("glVertexAttrib4dNV")
    data_307afa4 = eax_42
    
    if (eax_42 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_43 = wglGetProcAddress("glVertexAttrib4dvNV")
    data_307afa8 = eax_43
    
    if (eax_43 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_44 = wglGetProcAddress("glVertexAttrib4fNV")
    data_307afac = eax_44
    
    if (eax_44 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_45 = wglGetProcAddress("glVertexAttrib4fvNV")
    data_307afb0 = eax_45
    
    if (eax_45 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_46 = wglGetProcAddress("glVertexAttrib4sNV")
    data_307afb4 = eax_46
    
    if (eax_46 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_47 = wglGetProcAddress("glVertexAttrib4svNV")
    data_307afb8 = eax_47
    
    if (eax_47 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_48 = wglGetProcAddress("glVertexAttrib4ubNV")
    data_307afbc = eax_48
    
    if (eax_48 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_49 = wglGetProcAddress("glVertexAttrib4ubvNV")
    data_307afc0 = eax_49
    
    if (eax_49 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_50 = wglGetProcAddress("glVertexAttribPointerNV")
    data_307afc4 = eax_50
    
    if (eax_50 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_51 = wglGetProcAddress("glVertexAttribs1dvNV")
    data_307afc8 = eax_51
    
    if (eax_51 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_52 = wglGetProcAddress("glVertexAttribs1fvNV")
    data_307afcc = eax_52
    
    if (eax_52 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_53 = wglGetProcAddress("glVertexAttribs1svNV")
    data_307afd0 = eax_53
    
    if (eax_53 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_54 = wglGetProcAddress("glVertexAttribs2dvNV")
    data_307afd4 = eax_54
    
    if (eax_54 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_55 = wglGetProcAddress("glVertexAttribs2fvNV")
    data_307afd8 = eax_55
    
    if (eax_55 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_56 = wglGetProcAddress("glVertexAttribs2svNV")
    data_307afdc = eax_56
    
    if (eax_56 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_57 = wglGetProcAddress("glVertexAttribs3dvNV")
    data_307afe0 = eax_57
    
    if (eax_57 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_58 = wglGetProcAddress("glVertexAttribs3fvNV")
    data_307afe4 = eax_58
    
    if (eax_58 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_59 = wglGetProcAddress("glVertexAttribs3svNV")
    data_307afe8 = eax_59
    
    if (eax_59 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_60 = wglGetProcAddress("glVertexAttribs4dvNV")
    data_307afec = eax_60
    
    if (eax_60 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_61 = wglGetProcAddress("glVertexAttribs4fvNV")
    data_307aff0 = eax_61
    
    if (eax_61 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_62 = wglGetProcAddress("glVertexAttribs4svNV")
    data_307aff4 = eax_62
    
    if (eax_62 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexAttribs4ubvNV")
    data_307aff8 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

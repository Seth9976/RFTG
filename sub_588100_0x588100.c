// 函数名称: sub_588100
// 虚拟地址: 0x588100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_588100()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindProgramARB")
    PROC eax = wglGetProcAddress("glBindProgramARB")
    data_3079eb0 = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glDeleteProgramsARB")
    data_3079eb4 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glDisableVertexAttribArrayARB")
    data_3079eb8 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glEnableVertexAttribArrayARB")
    data_3079ebc = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glGenProgramsARB")
    data_3079ec0 = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glGetProgramEnvParameterdvARB")
    data_3079ec4 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glGetProgramEnvParameterfvARB")
    data_3079ec8 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glGetProgramLocalParameterdvARB")
    data_3079ecc = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glGetProgramLocalParameterfvARB")
    data_3079ed0 = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glGetProgramStringARB")
    data_3079ed4 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glGetProgramivARB")
    data_3079ed8 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glGetVertexAttribPointervARB")
    data_3079edc = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glGetVertexAttribdvARB")
    data_3079ee0 = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glGetVertexAttribfvARB")
    data_3079ee4 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glGetVertexAttribivARB")
    data_3079ee8 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glIsProgramARB")
    data_3079eec = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glProgramEnvParameter4dARB")
    data_3079ef0 = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glProgramEnvParameter4dvARB")
    data_3079ef4 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glProgramEnvParameter4fARB")
    data_3079ef8 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glProgramEnvParameter4fvARB")
    data_3079efc = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glProgramLocalParameter4dARB")
    data_3079f00 = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glProgramLocalParameter4dvARB")
    data_3079f04 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glProgramLocalParameter4fARB")
    data_3079f08 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glProgramLocalParameter4fvARB")
    data_3079f0c = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glProgramStringARB")
    data_3079f10 = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glVertexAttrib1dARB")
    data_3079f14 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glVertexAttrib1dvARB")
    data_3079f18 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glVertexAttrib1fARB")
    data_3079f1c = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glVertexAttrib1fvARB")
    data_3079f20 = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glVertexAttrib1sARB")
    data_3079f24 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glVertexAttrib1svARB")
    data_3079f28 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glVertexAttrib2dARB")
    data_3079f2c = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glVertexAttrib2dvARB")
    data_3079f30 = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glVertexAttrib2fARB")
    data_3079f34 = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glVertexAttrib2fvARB")
    data_3079f38 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glVertexAttrib2sARB")
    data_3079f3c = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glVertexAttrib2svARB")
    data_3079f40 = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glVertexAttrib3dARB")
    data_3079f44 = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glVertexAttrib3dvARB")
    data_3079f48 = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_39 = wglGetProcAddress("glVertexAttrib3fARB")
    data_3079f4c = eax_39
    
    if (eax_39 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_40 = wglGetProcAddress("glVertexAttrib3fvARB")
    data_3079f50 = eax_40
    
    if (eax_40 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_41 = wglGetProcAddress("glVertexAttrib3sARB")
    data_3079f54 = eax_41
    
    if (eax_41 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_42 = wglGetProcAddress("glVertexAttrib3svARB")
    data_3079f58 = eax_42
    
    if (eax_42 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_43 = wglGetProcAddress("glVertexAttrib4NbvARB")
    data_3079f5c = eax_43
    
    if (eax_43 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_44 = wglGetProcAddress("glVertexAttrib4NivARB")
    data_3079f60 = eax_44
    
    if (eax_44 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_45 = wglGetProcAddress("glVertexAttrib4NsvARB")
    data_3079f64 = eax_45
    
    if (eax_45 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_46 = wglGetProcAddress("glVertexAttrib4NubARB")
    data_3079f68 = eax_46
    
    if (eax_46 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_47 = wglGetProcAddress("glVertexAttrib4NubvARB")
    data_3079f6c = eax_47
    
    if (eax_47 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_48 = wglGetProcAddress("glVertexAttrib4NuivARB")
    data_3079f70 = eax_48
    
    if (eax_48 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_49 = wglGetProcAddress("glVertexAttrib4NusvARB")
    data_3079f74 = eax_49
    
    if (eax_49 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_50 = wglGetProcAddress("glVertexAttrib4bvARB")
    data_3079f78 = eax_50
    
    if (eax_50 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_51 = wglGetProcAddress("glVertexAttrib4dARB")
    data_3079f7c = eax_51
    
    if (eax_51 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_52 = wglGetProcAddress("glVertexAttrib4dvARB")
    data_3079f80 = eax_52
    
    if (eax_52 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_53 = wglGetProcAddress("glVertexAttrib4fARB")
    data_3079f84 = eax_53
    
    if (eax_53 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_54 = wglGetProcAddress("glVertexAttrib4fvARB")
    data_3079f88 = eax_54
    
    if (eax_54 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_55 = wglGetProcAddress("glVertexAttrib4ivARB")
    data_3079f8c = eax_55
    
    if (eax_55 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_56 = wglGetProcAddress("glVertexAttrib4sARB")
    data_3079f90 = eax_56
    
    if (eax_56 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_57 = wglGetProcAddress("glVertexAttrib4svARB")
    data_3079f94 = eax_57
    
    if (eax_57 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_58 = wglGetProcAddress("glVertexAttrib4ubvARB")
    data_3079f98 = eax_58
    
    if (eax_58 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_59 = wglGetProcAddress("glVertexAttrib4uivARB")
    data_3079f9c = eax_59
    
    if (eax_59 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_60 = wglGetProcAddress("glVertexAttrib4usvARB")
    data_3079fa0 = eax_60
    
    if (eax_60 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexAttribPointerARB")
    data_3079fa4 = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

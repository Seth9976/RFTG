// 函数名称: sub_5896d0
// 虚拟地址: 0x5896d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

PROCsub_5896d0()
{
    // 第一条实际指令: PROC eax = wglGetProcAddress("glBindMultiTextureEXT")
    PROC eax = wglGetProcAddress("glBindMultiTextureEXT")
    data_307a27c = eax
    int32_t ebx
    ebx.b = eax == 0
    PROC eax_1 = wglGetProcAddress("glCheckNamedFramebufferStatusEXT")
    data_307a280 = eax_1
    
    if (eax_1 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_2 = wglGetProcAddress("glClientAttribDefaultEXT")
    data_307a284 = eax_2
    
    if (eax_2 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_3 = wglGetProcAddress("glCompressedMultiTexImage1DEXT")
    data_307a288 = eax_3
    
    if (eax_3 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_4 = wglGetProcAddress("glCompressedMultiTexImage2DEXT")
    data_307a28c = eax_4
    
    if (eax_4 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_5 = wglGetProcAddress("glCompressedMultiTexImage3DEXT")
    data_307a290 = eax_5
    
    if (eax_5 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_6 = wglGetProcAddress("glCompressedMultiTexSubImage1DEXT")
    data_307a294 = eax_6
    
    if (eax_6 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_7 = wglGetProcAddress("glCompressedMultiTexSubImage2DEXT")
    data_307a298 = eax_7
    
    if (eax_7 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_8 = wglGetProcAddress("glCompressedMultiTexSubImage3DEXT")
    data_307a29c = eax_8
    
    if (eax_8 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_9 = wglGetProcAddress("glCompressedTextureImage1DEXT")
    data_307a2a0 = eax_9
    
    if (eax_9 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_10 = wglGetProcAddress("glCompressedTextureImage2DEXT")
    data_307a2a4 = eax_10
    
    if (eax_10 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_11 = wglGetProcAddress("glCompressedTextureImage3DEXT")
    data_307a2a8 = eax_11
    
    if (eax_11 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_12 = wglGetProcAddress("glCompressedTextureSubImage1DEXT")
    data_307a2ac = eax_12
    
    if (eax_12 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_13 = wglGetProcAddress("glCompressedTextureSubImage2DEXT")
    data_307a2b0 = eax_13
    
    if (eax_13 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_14 = wglGetProcAddress("glCompressedTextureSubImage3DEXT")
    data_307a2b4 = eax_14
    
    if (eax_14 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_15 = wglGetProcAddress("glCopyMultiTexImage1DEXT")
    data_307a2b8 = eax_15
    
    if (eax_15 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_16 = wglGetProcAddress("glCopyMultiTexImage2DEXT")
    data_307a2bc = eax_16
    
    if (eax_16 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_17 = wglGetProcAddress("glCopyMultiTexSubImage1DEXT")
    data_307a2c0 = eax_17
    
    if (eax_17 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_18 = wglGetProcAddress("glCopyMultiTexSubImage2DEXT")
    data_307a2c4 = eax_18
    
    if (eax_18 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_19 = wglGetProcAddress("glCopyMultiTexSubImage3DEXT")
    data_307a2c8 = eax_19
    
    if (eax_19 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_20 = wglGetProcAddress("glCopyTextureImage1DEXT")
    data_307a2cc = eax_20
    
    if (eax_20 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_21 = wglGetProcAddress("glCopyTextureImage2DEXT")
    data_307a2d0 = eax_21
    
    if (eax_21 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_22 = wglGetProcAddress("glCopyTextureSubImage1DEXT")
    data_307a2d4 = eax_22
    
    if (eax_22 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_23 = wglGetProcAddress("glCopyTextureSubImage2DEXT")
    data_307a2d8 = eax_23
    
    if (eax_23 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_24 = wglGetProcAddress("glCopyTextureSubImage3DEXT")
    data_307a2dc = eax_24
    
    if (eax_24 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_25 = wglGetProcAddress("glDisableClientStateIndexedEXT")
    data_307a2e0 = eax_25
    
    if (eax_25 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_26 = wglGetProcAddress("glDisableClientStateiEXT")
    data_307a2e4 = eax_26
    
    if (eax_26 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_27 = wglGetProcAddress("glDisableVertexArrayAttribEXT")
    data_307a2e8 = eax_27
    
    if (eax_27 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_28 = wglGetProcAddress("glDisableVertexArrayEXT")
    data_307a2ec = eax_28
    
    if (eax_28 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_29 = wglGetProcAddress("glEnableClientStateIndexedEXT")
    data_307a2f0 = eax_29
    
    if (eax_29 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_30 = wglGetProcAddress("glEnableClientStateiEXT")
    data_307a2f4 = eax_30
    
    if (eax_30 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_31 = wglGetProcAddress("glEnableVertexArrayAttribEXT")
    data_307a2f8 = eax_31
    
    if (eax_31 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_32 = wglGetProcAddress("glEnableVertexArrayEXT")
    data_307a2fc = eax_32
    
    if (eax_32 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_33 = wglGetProcAddress("glFlushMappedNamedBufferRangeEXT")
    data_307a300 = eax_33
    
    if (eax_33 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_34 = wglGetProcAddress("glFramebufferDrawBufferEXT")
    data_307a304 = eax_34
    
    if (eax_34 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_35 = wglGetProcAddress("glFramebufferDrawBuffersEXT")
    data_307a308 = eax_35
    
    if (eax_35 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_36 = wglGetProcAddress("glFramebufferReadBufferEXT")
    data_307a30c = eax_36
    
    if (eax_36 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_37 = wglGetProcAddress("glGenerateMultiTexMipmapEXT")
    data_307a310 = eax_37
    
    if (eax_37 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_38 = wglGetProcAddress("glGenerateTextureMipmapEXT")
    data_307a314 = eax_38
    
    if (eax_38 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_39 = wglGetProcAddress("glGetCompressedMultiTexImageEXT")
    data_307a318 = eax_39
    
    if (eax_39 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_40 = wglGetProcAddress("glGetCompressedTextureImageEXT")
    data_307a31c = eax_40
    
    if (eax_40 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_41 = wglGetProcAddress("glGetDoubleIndexedvEXT")
    data_307a320 = eax_41
    
    if (eax_41 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_42 = wglGetProcAddress("glGetDoublei_vEXT")
    data_307a324 = eax_42
    
    if (eax_42 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_43 = wglGetProcAddress("glGetFloatIndexedvEXT")
    data_307a328 = eax_43
    
    if (eax_43 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_44 = wglGetProcAddress("glGetFloati_vEXT")
    data_307a32c = eax_44
    
    if (eax_44 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_45 = wglGetProcAddress("glGetFramebufferParameterivEXT")
    data_307a330 = eax_45
    
    if (eax_45 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_46 = wglGetProcAddress("glGetMultiTexEnvfvEXT")
    data_307a334 = eax_46
    
    if (eax_46 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_47 = wglGetProcAddress("glGetMultiTexEnvivEXT")
    data_307a338 = eax_47
    
    if (eax_47 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_48 = wglGetProcAddress("glGetMultiTexGendvEXT")
    data_307a33c = eax_48
    
    if (eax_48 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_49 = wglGetProcAddress("glGetMultiTexGenfvEXT")
    data_307a340 = eax_49
    
    if (eax_49 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_50 = wglGetProcAddress("glGetMultiTexGenivEXT")
    data_307a344 = eax_50
    
    if (eax_50 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_51 = wglGetProcAddress("glGetMultiTexImageEXT")
    data_307a348 = eax_51
    
    if (eax_51 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_52 = wglGetProcAddress("glGetMultiTexLevelParameterfvEXT")
    data_307a34c = eax_52
    
    if (eax_52 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_53 = wglGetProcAddress("glGetMultiTexLevelParameterivEXT")
    data_307a350 = eax_53
    
    if (eax_53 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_54 = wglGetProcAddress("glGetMultiTexParameterIivEXT")
    data_307a354 = eax_54
    
    if (eax_54 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_55 = wglGetProcAddress("glGetMultiTexParameterIuivEXT")
    data_307a358 = eax_55
    
    if (eax_55 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_56 = wglGetProcAddress("glGetMultiTexParameterfvEXT")
    data_307a35c = eax_56
    
    if (eax_56 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_57 = wglGetProcAddress("glGetMultiTexParameterivEXT")
    data_307a360 = eax_57
    
    if (eax_57 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_58 = wglGetProcAddress("glGetNamedBufferParameterivEXT")
    data_307a364 = eax_58
    
    if (eax_58 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_59 = wglGetProcAddress("glGetNamedBufferPointervEXT")
    data_307a368 = eax_59
    
    if (eax_59 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_60 = wglGetProcAddress("glGetNamedBufferSubDataEXT")
    data_307a36c = eax_60
    
    if (eax_60 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_61 = wglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT")
    data_307a370 = eax_61
    
    if (eax_61 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_62 = wglGetProcAddress("glGetNamedProgramLocalParameterIivEXT")
    data_307a374 = eax_62
    
    if (eax_62 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_63 = wglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT")
    data_307a378 = eax_63
    
    if (eax_63 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_64 = wglGetProcAddress("glGetNamedProgramLocalParameterdvEXT")
    data_307a37c = eax_64
    
    if (eax_64 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_65 = wglGetProcAddress("glGetNamedProgramLocalParameterfvEXT")
    data_307a380 = eax_65
    
    if (eax_65 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_66 = wglGetProcAddress("glGetNamedProgramStringEXT")
    data_307a384 = eax_66
    
    if (eax_66 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_67 = wglGetProcAddress("glGetNamedProgramivEXT")
    data_307a388 = eax_67
    
    if (eax_67 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_68 = wglGetProcAddress("glGetNamedRenderbufferParameterivEXT")
    data_307a38c = eax_68
    
    if (eax_68 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_69 = wglGetProcAddress("glGetPointerIndexedvEXT")
    data_307a390 = eax_69
    
    if (eax_69 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_70 = wglGetProcAddress("glGetPointeri_vEXT")
    data_307a394 = eax_70
    
    if (eax_70 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_71 = wglGetProcAddress("glGetTextureImageEXT")
    data_307a398 = eax_71
    
    if (eax_71 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_72 = wglGetProcAddress("glGetTextureLevelParameterfvEXT")
    data_307a39c = eax_72
    
    if (eax_72 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_73 = wglGetProcAddress("glGetTextureLevelParameterivEXT")
    data_307a3a0 = eax_73
    
    if (eax_73 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_74 = wglGetProcAddress("glGetTextureParameterIivEXT")
    data_307a3a4 = eax_74
    
    if (eax_74 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_75 = wglGetProcAddress("glGetTextureParameterIuivEXT")
    data_307a3a8 = eax_75
    
    if (eax_75 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_76 = wglGetProcAddress("glGetTextureParameterfvEXT")
    data_307a3ac = eax_76
    
    if (eax_76 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_77 = wglGetProcAddress("glGetTextureParameterivEXT")
    data_307a3b0 = eax_77
    
    if (eax_77 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_78 = wglGetProcAddress("glGetVertexArrayIntegeri_vEXT")
    data_307a3b4 = eax_78
    
    if (eax_78 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_79 = wglGetProcAddress("glGetVertexArrayIntegervEXT")
    data_307a3b8 = eax_79
    
    if (eax_79 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_80 = wglGetProcAddress("glGetVertexArrayPointeri_vEXT")
    data_307a3bc = eax_80
    
    if (eax_80 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_81 = wglGetProcAddress("glGetVertexArrayPointervEXT")
    data_307a3c0 = eax_81
    
    if (eax_81 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_82 = wglGetProcAddress("glMapNamedBufferEXT")
    data_307a3c4 = eax_82
    
    if (eax_82 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_83 = wglGetProcAddress("glMapNamedBufferRangeEXT")
    data_307a3c8 = eax_83
    
    if (eax_83 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_84 = wglGetProcAddress("glMatrixFrustumEXT")
    data_307a3cc = eax_84
    
    if (eax_84 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_85 = wglGetProcAddress("glMatrixLoadIdentityEXT")
    data_307a3d0 = eax_85
    
    if (eax_85 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_86 = wglGetProcAddress("glMatrixLoadTransposedEXT")
    data_307a3d4 = eax_86
    
    if (eax_86 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_87 = wglGetProcAddress("glMatrixLoadTransposefEXT")
    data_307a3d8 = eax_87
    
    if (eax_87 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_88 = wglGetProcAddress("glMatrixLoaddEXT")
    data_307a3dc = eax_88
    
    if (eax_88 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_89 = wglGetProcAddress("glMatrixLoadfEXT")
    data_307a3e0 = eax_89
    
    if (eax_89 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_90 = wglGetProcAddress("glMatrixMultTransposedEXT")
    data_307a3e4 = eax_90
    
    if (eax_90 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_91 = wglGetProcAddress("glMatrixMultTransposefEXT")
    data_307a3e8 = eax_91
    
    if (eax_91 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_92 = wglGetProcAddress("glMatrixMultdEXT")
    data_307a3ec = eax_92
    
    if (eax_92 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_93 = wglGetProcAddress("glMatrixMultfEXT")
    data_307a3f0 = eax_93
    
    if (eax_93 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_94 = wglGetProcAddress("glMatrixOrthoEXT")
    data_307a3f4 = eax_94
    
    if (eax_94 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_95 = wglGetProcAddress("glMatrixPopEXT")
    data_307a3f8 = eax_95
    
    if (eax_95 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_96 = wglGetProcAddress("glMatrixPushEXT")
    data_307a3fc = eax_96
    
    if (eax_96 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_97 = wglGetProcAddress("glMatrixRotatedEXT")
    data_307a400 = eax_97
    
    if (eax_97 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_98 = wglGetProcAddress("glMatrixRotatefEXT")
    data_307a404 = eax_98
    
    if (eax_98 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_99 = wglGetProcAddress("glMatrixScaledEXT")
    data_307a408 = eax_99
    
    if (eax_99 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_100 = wglGetProcAddress("glMatrixScalefEXT")
    data_307a40c = eax_100
    
    if (eax_100 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_101 = wglGetProcAddress("glMatrixTranslatedEXT")
    data_307a410 = eax_101
    
    if (eax_101 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_102 = wglGetProcAddress("glMatrixTranslatefEXT")
    data_307a414 = eax_102
    
    if (eax_102 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_103 = wglGetProcAddress("glMultiTexBufferEXT")
    data_307a418 = eax_103
    
    if (eax_103 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_104 = wglGetProcAddress("glMultiTexCoordPointerEXT")
    data_307a41c = eax_104
    
    if (eax_104 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_105 = wglGetProcAddress("glMultiTexEnvfEXT")
    data_307a420 = eax_105
    
    if (eax_105 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_106 = wglGetProcAddress("glMultiTexEnvfvEXT")
    data_307a424 = eax_106
    
    if (eax_106 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_107 = wglGetProcAddress("glMultiTexEnviEXT")
    data_307a428 = eax_107
    
    if (eax_107 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_108 = wglGetProcAddress("glMultiTexEnvivEXT")
    data_307a42c = eax_108
    
    if (eax_108 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_109 = wglGetProcAddress("glMultiTexGendEXT")
    data_307a430 = eax_109
    
    if (eax_109 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_110 = wglGetProcAddress("glMultiTexGendvEXT")
    data_307a434 = eax_110
    
    if (eax_110 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_111 = wglGetProcAddress("glMultiTexGenfEXT")
    data_307a438 = eax_111
    
    if (eax_111 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_112 = wglGetProcAddress("glMultiTexGenfvEXT")
    data_307a43c = eax_112
    
    if (eax_112 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_113 = wglGetProcAddress("glMultiTexGeniEXT")
    data_307a440 = eax_113
    
    if (eax_113 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_114 = wglGetProcAddress("glMultiTexGenivEXT")
    data_307a444 = eax_114
    
    if (eax_114 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_115 = wglGetProcAddress("glMultiTexImage1DEXT")
    data_307a448 = eax_115
    
    if (eax_115 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_116 = wglGetProcAddress("glMultiTexImage2DEXT")
    data_307a44c = eax_116
    
    if (eax_116 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_117 = wglGetProcAddress("glMultiTexImage3DEXT")
    data_307a450 = eax_117
    
    if (eax_117 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_118 = wglGetProcAddress("glMultiTexParameterIivEXT")
    data_307a454 = eax_118
    
    if (eax_118 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_119 = wglGetProcAddress("glMultiTexParameterIuivEXT")
    data_307a458 = eax_119
    
    if (eax_119 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_120 = wglGetProcAddress("glMultiTexParameterfEXT")
    data_307a45c = eax_120
    
    if (eax_120 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_121 = wglGetProcAddress("glMultiTexParameterfvEXT")
    data_307a460 = eax_121
    
    if (eax_121 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_122 = wglGetProcAddress("glMultiTexParameteriEXT")
    data_307a464 = eax_122
    
    if (eax_122 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_123 = wglGetProcAddress("glMultiTexParameterivEXT")
    data_307a468 = eax_123
    
    if (eax_123 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_124 = wglGetProcAddress("glMultiTexRenderbufferEXT")
    data_307a46c = eax_124
    
    if (eax_124 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_125 = wglGetProcAddress("glMultiTexSubImage1DEXT")
    data_307a470 = eax_125
    
    if (eax_125 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_126 = wglGetProcAddress("glMultiTexSubImage2DEXT")
    data_307a474 = eax_126
    
    if (eax_126 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_127 = wglGetProcAddress("glMultiTexSubImage3DEXT")
    data_307a478 = eax_127
    
    if (eax_127 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_128 = wglGetProcAddress("glNamedBufferDataEXT")
    data_307a47c = eax_128
    
    if (eax_128 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_129 = wglGetProcAddress("glNamedBufferSubDataEXT")
    data_307a480 = eax_129
    
    if (eax_129 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_130 = wglGetProcAddress("glNamedCopyBufferSubDataEXT")
    data_307a484 = eax_130
    
    if (eax_130 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_131 = wglGetProcAddress("glNamedFramebufferRenderbufferEXT")
    data_307a488 = eax_131
    
    if (eax_131 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_132 = wglGetProcAddress("glNamedFramebufferTexture1DEXT")
    data_307a48c = eax_132
    
    if (eax_132 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_133 = wglGetProcAddress("glNamedFramebufferTexture2DEXT")
    data_307a490 = eax_133
    
    if (eax_133 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_134 = wglGetProcAddress("glNamedFramebufferTexture3DEXT")
    data_307a494 = eax_134
    
    if (eax_134 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_135 = wglGetProcAddress("glNamedFramebufferTextureEXT")
    data_307a498 = eax_135
    
    if (eax_135 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_136 = wglGetProcAddress("glNamedFramebufferTextureFaceEXT")
    data_307a49c = eax_136
    
    if (eax_136 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_137 = wglGetProcAddress("glNamedFramebufferTextureLayerEXT")
    data_307a4a0 = eax_137
    
    if (eax_137 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_138 = wglGetProcAddress("glNamedProgramLocalParameter4dEXT")
    data_307a4a4 = eax_138
    
    if (eax_138 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_139 = wglGetProcAddress("glNamedProgramLocalParameter4dvEXT")
    data_307a4a8 = eax_139
    
    if (eax_139 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_140 = wglGetProcAddress("glNamedProgramLocalParameter4fEXT")
    data_307a4ac = eax_140
    
    if (eax_140 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_141 = wglGetProcAddress("glNamedProgramLocalParameter4fvEXT")
    data_307a4b0 = eax_141
    
    if (eax_141 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_142 = wglGetProcAddress("glNamedProgramLocalParameterI4iEXT")
    data_307a4b4 = eax_142
    
    if (eax_142 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_143 = wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT")
    data_307a4b8 = eax_143
    
    if (eax_143 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_144 = wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT")
    data_307a4bc = eax_144
    
    if (eax_144 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_145 = wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT")
    data_307a4c0 = eax_145
    
    if (eax_145 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_146 = wglGetProcAddress("glNamedProgramLocalParameters4fvEXT")
    data_307a4c4 = eax_146
    
    if (eax_146 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_147 = wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT")
    data_307a4c8 = eax_147
    
    if (eax_147 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_148 = wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT")
    data_307a4cc = eax_148
    
    if (eax_148 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_149 = wglGetProcAddress("glNamedProgramStringEXT")
    data_307a4d0 = eax_149
    
    if (eax_149 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_150 = wglGetProcAddress("glNamedRenderbufferStorageEXT")
    data_307a4d4 = eax_150
    
    if (eax_150 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_151 = wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT")
    data_307a4d8 = eax_151
    
    if (eax_151 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_152 = wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT")
    data_307a4dc = eax_152
    
    if (eax_152 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_153 = wglGetProcAddress("glProgramUniform1fEXT")
    data_307a4e0 = eax_153
    
    if (eax_153 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_154 = wglGetProcAddress("glProgramUniform1fvEXT")
    data_307a4e4 = eax_154
    
    if (eax_154 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_155 = wglGetProcAddress("glProgramUniform1iEXT")
    data_307a4e8 = eax_155
    
    if (eax_155 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_156 = wglGetProcAddress("glProgramUniform1ivEXT")
    data_307a4ec = eax_156
    
    if (eax_156 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_157 = wglGetProcAddress("glProgramUniform1uiEXT")
    data_307a4f0 = eax_157
    
    if (eax_157 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_158 = wglGetProcAddress("glProgramUniform1uivEXT")
    data_307a4f4 = eax_158
    
    if (eax_158 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_159 = wglGetProcAddress("glProgramUniform2fEXT")
    data_307a4f8 = eax_159
    
    if (eax_159 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_160 = wglGetProcAddress("glProgramUniform2fvEXT")
    data_307a4fc = eax_160
    
    if (eax_160 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_161 = wglGetProcAddress("glProgramUniform2iEXT")
    data_307a500 = eax_161
    
    if (eax_161 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_162 = wglGetProcAddress("glProgramUniform2ivEXT")
    data_307a504 = eax_162
    
    if (eax_162 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_163 = wglGetProcAddress("glProgramUniform2uiEXT")
    data_307a508 = eax_163
    
    if (eax_163 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_164 = wglGetProcAddress("glProgramUniform2uivEXT")
    data_307a50c = eax_164
    
    if (eax_164 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_165 = wglGetProcAddress("glProgramUniform3fEXT")
    data_307a510 = eax_165
    
    if (eax_165 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_166 = wglGetProcAddress("glProgramUniform3fvEXT")
    data_307a514 = eax_166
    
    if (eax_166 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_167 = wglGetProcAddress("glProgramUniform3iEXT")
    data_307a518 = eax_167
    
    if (eax_167 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_168 = wglGetProcAddress("glProgramUniform3ivEXT")
    data_307a51c = eax_168
    
    if (eax_168 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_169 = wglGetProcAddress("glProgramUniform3uiEXT")
    data_307a520 = eax_169
    
    if (eax_169 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_170 = wglGetProcAddress("glProgramUniform3uivEXT")
    data_307a524 = eax_170
    
    if (eax_170 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_171 = wglGetProcAddress("glProgramUniform4fEXT")
    data_307a528 = eax_171
    
    if (eax_171 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_172 = wglGetProcAddress("glProgramUniform4fvEXT")
    data_307a52c = eax_172
    
    if (eax_172 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_173 = wglGetProcAddress("glProgramUniform4iEXT")
    data_307a530 = eax_173
    
    if (eax_173 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_174 = wglGetProcAddress("glProgramUniform4ivEXT")
    data_307a534 = eax_174
    
    if (eax_174 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_175 = wglGetProcAddress("glProgramUniform4uiEXT")
    data_307a538 = eax_175
    
    if (eax_175 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_176 = wglGetProcAddress("glProgramUniform4uivEXT")
    data_307a53c = eax_176
    
    if (eax_176 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_177 = wglGetProcAddress("glProgramUniformMatrix2fvEXT")
    data_307a540 = eax_177
    
    if (eax_177 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_178 = wglGetProcAddress("glProgramUniformMatrix2x3fvEXT")
    data_307a544 = eax_178
    
    if (eax_178 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_179 = wglGetProcAddress("glProgramUniformMatrix2x4fvEXT")
    data_307a548 = eax_179
    
    if (eax_179 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_180 = wglGetProcAddress("glProgramUniformMatrix3fvEXT")
    data_307a54c = eax_180
    
    if (eax_180 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_181 = wglGetProcAddress("glProgramUniformMatrix3x2fvEXT")
    data_307a550 = eax_181
    
    if (eax_181 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_182 = wglGetProcAddress("glProgramUniformMatrix3x4fvEXT")
    data_307a554 = eax_182
    
    if (eax_182 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_183 = wglGetProcAddress("glProgramUniformMatrix4fvEXT")
    data_307a558 = eax_183
    
    if (eax_183 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_184 = wglGetProcAddress("glProgramUniformMatrix4x2fvEXT")
    data_307a55c = eax_184
    
    if (eax_184 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_185 = wglGetProcAddress("glProgramUniformMatrix4x3fvEXT")
    data_307a560 = eax_185
    
    if (eax_185 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_186 = wglGetProcAddress("glPushClientAttribDefaultEXT")
    data_307a564 = eax_186
    
    if (eax_186 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_187 = wglGetProcAddress("glTextureBufferEXT")
    data_307a568 = eax_187
    
    if (eax_187 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_188 = wglGetProcAddress("glTextureImage1DEXT")
    data_307a56c = eax_188
    
    if (eax_188 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_189 = wglGetProcAddress("glTextureImage2DEXT")
    data_307a570 = eax_189
    
    if (eax_189 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_190 = wglGetProcAddress("glTextureImage3DEXT")
    data_307a574 = eax_190
    
    if (eax_190 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_191 = wglGetProcAddress("glTextureParameterIivEXT")
    data_307a578 = eax_191
    
    if (eax_191 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_192 = wglGetProcAddress("glTextureParameterIuivEXT")
    data_307a57c = eax_192
    
    if (eax_192 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_193 = wglGetProcAddress("glTextureParameterfEXT")
    data_307a580 = eax_193
    
    if (eax_193 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_194 = wglGetProcAddress("glTextureParameterfvEXT")
    data_307a584 = eax_194
    
    if (eax_194 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_195 = wglGetProcAddress("glTextureParameteriEXT")
    data_307a588 = eax_195
    
    if (eax_195 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_196 = wglGetProcAddress("glTextureParameterivEXT")
    data_307a58c = eax_196
    
    if (eax_196 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_197 = wglGetProcAddress("glTextureRenderbufferEXT")
    data_307a590 = eax_197
    
    if (eax_197 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_198 = wglGetProcAddress("glTextureSubImage1DEXT")
    data_307a594 = eax_198
    
    if (eax_198 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_199 = wglGetProcAddress("glTextureSubImage2DEXT")
    data_307a598 = eax_199
    
    if (eax_199 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_200 = wglGetProcAddress("glTextureSubImage3DEXT")
    data_307a59c = eax_200
    
    if (eax_200 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_201 = wglGetProcAddress("glUnmapNamedBufferEXT")
    data_307a5a0 = eax_201
    
    if (eax_201 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_202 = wglGetProcAddress("glVertexArrayColorOffsetEXT")
    data_307a5a4 = eax_202
    
    if (eax_202 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_203 = wglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT")
    data_307a5a8 = eax_203
    
    if (eax_203 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_204 = wglGetProcAddress("glVertexArrayFogCoordOffsetEXT")
    data_307a5ac = eax_204
    
    if (eax_204 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_205 = wglGetProcAddress("glVertexArrayIndexOffsetEXT")
    data_307a5b0 = eax_205
    
    if (eax_205 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_206 = wglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT")
    data_307a5b4 = eax_206
    
    if (eax_206 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_207 = wglGetProcAddress("glVertexArrayNormalOffsetEXT")
    data_307a5b8 = eax_207
    
    if (eax_207 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_208 = wglGetProcAddress("glVertexArraySecondaryColorOffsetEXT")
    data_307a5bc = eax_208
    
    if (eax_208 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_209 = wglGetProcAddress("glVertexArrayTexCoordOffsetEXT")
    data_307a5c0 = eax_209
    
    if (eax_209 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_210 = wglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT")
    data_307a5c4 = eax_210
    
    if (eax_210 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC eax_211 = wglGetProcAddress("glVertexArrayVertexAttribOffsetEXT")
    data_307a5c8 = eax_211
    
    if (eax_211 == 0 || ebx.b != 0)
        ebx.b = 1
    
    PROC result = wglGetProcAddress("glVertexArrayVertexOffsetEXT")
    data_307a5cc = result
    
    if (result != 0 && ebx.b == 0)
        result.b = 0
        return result
    
    result.b = 1
    return result
}

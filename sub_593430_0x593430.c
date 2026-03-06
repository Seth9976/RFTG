// 函数名称: sub_593430
// 虚拟地址: 0x593430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_593430()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    data_307b5b4 = wglGetProcAddress("wglGetExtensionsStringARB")
    PROC eax_1
    char* edx
    eax_1, edx = wglGetProcAddress("wglGetExtensionsStringEXT")
    bool cond:0 = data_307b5b4 != 0
    data_307b5b8 = eax_1
    char* const esi
    char* eax_2
    
    if (cond:0)
        eax_2, edx = data_307b5b4(wglGetCurrentDC())
        esi = eax_2
        eax_1 = data_307b5b8
    else if (eax_1 != 0)
        eax_2, edx = eax_1()
        esi = eax_2
        eax_1 = data_307b5b8
    else
        esi = &data_83f3d3
    char* ecx_1 = nullptr
    
    if (esi != 0 && *esi != 0)
        do
            ecx_1 = &ecx_1[1]
        while (*(ecx_1 + esi) != 0)
    
    int32_t edi = ecx_1 + esi
    
    if (data_307b5b4 == 0)
        var_8:3.b = 1
    
    if (data_307b5b4 != 0 || eax_1 != 0)
        var_8:3.b = 0
    
    int32_t var_18 = edi
    char const* const var_1c = "WGL_3DFX_multisample"
    char eax_5
    int32_t ecx_2
    char* edx_1
    eax_5, ecx_2, edx_1 = sub_583a80(esi, edx, ecx_1)
    data_307b3ad = eax_5
    int32_t var_20 = edi
    char const* const var_24 = "WGL_3DL_stereo_control"
    char eax_7
    int32_t ecx_3
    char* edx_2
    eax_7, ecx_3, edx_2 = sub_583a80(esi, edx_1, ecx_2)
    bool cond:3 = data_307b5bc != 0
    data_307b3ae = eax_7
    
    if (cond:3 || eax_7 != 0 || var_8:3.b != eax_7)
        PROC eax_8
        eax_8, ecx_3, edx_2 = wglGetProcAddress("wglSetStereoEmitterState3DL")
        data_307b3b0 = eax_8
        eax_8.b = eax_8 == 0
        eax_8.b = eax_8.b == 0
        data_307b3ae = eax_8.b
    
    int32_t var_18_1 = edi
    char const* const var_1c_1 = "WGL_AMD_gpu_association"
    char eax_10
    int32_t ecx_4
    char* edx_3
    eax_10, ecx_4, edx_3 = sub_583a80(esi, edx_2, ecx_3)
    bool cond:4 = data_307b5bc != 0
    data_307b3af = eax_10
    
    if (cond:4 || eax_10 != 0 || var_8:3.b != eax_10)
        char eax_11
        eax_11, ecx_4, edx_3 = sub_592b20()
        ecx_4.b = eax_11 == 0
        data_307b3af = ecx_4.b
    
    int32_t var_18_2 = edi
    char const* const var_1c_2 = "WGL_ARB_buffer_region"
    char eax_13
    int32_t ecx_5
    char* edx_4
    eax_13, ecx_5, edx_4 = sub_583a80(esi, edx_3, ecx_4)
    bool cond:6 = data_307b5bc != 0
    data_307b588 = eax_13
    
    if (cond:6 || eax_13 != 0 || var_8:3.b != eax_13)
        char eax_14
        eax_14, ecx_5, edx_4 = sub_592c00()
        edx_4.b = eax_14 == 0
        data_307b588 = edx_4.b
    
    int32_t var_18_3 = edi
    char const* const var_1c_3 = "WGL_ARB_create_context"
    char eax_16
    int32_t ecx_6
    char* edx_5
    eax_16, ecx_6, edx_5 = sub_583a80(esi, edx_4, ecx_5)
    bool cond:8 = data_307b5bc != 0
    data_307b589 = eax_16
    
    if (cond:8 || eax_16 != 0 || var_8:3.b != eax_16)
        PROC eax_17
        eax_17, ecx_6, edx_5 = wglGetProcAddress("wglCreateContextAttribsARB")
        data_307b3e8 = eax_17
        eax_17.b = eax_17 == 0
        eax_17.b = eax_17.b == 0
        data_307b589 = eax_17.b
    
    int32_t var_18_4 = edi
    char const* const var_1c_4 = "WGL_ARB_create_context_profile"
    char eax_19
    int32_t ecx_7
    char* edx_6
    eax_19, ecx_7, edx_6 = sub_583a80(esi, edx_5, ecx_6)
    data_307b58a = eax_19
    int32_t var_20_1 = edi
    char const* const var_24_1 = "WGL_ARB_create_context_robustness"
    char eax_21
    int32_t ecx_8
    char* edx_7
    eax_21, ecx_8, edx_7 = sub_583a80(esi, edx_6, ecx_7)
    data_307b58b = eax_21
    int32_t var_28 = edi
    char const* const var_2c = "WGL_ARB_extensions_string"
    char eax_23
    int32_t ecx_9
    char* edx_8
    eax_23, ecx_9, edx_8 = sub_583a80(esi, edx_7, ecx_8)
    bool cond:10 = data_307b5bc != 0
    data_307b58c = eax_23
    
    if (cond:10 || eax_23 != 0 || var_8:3.b != eax_23)
        PROC eax_24
        eax_24, ecx_9, edx_8 = wglGetProcAddress("wglGetExtensionsStringARB")
        data_307b3ec = eax_24
        eax_24.b = eax_24 == 0
        ecx_9.b = eax_24.b == 0
        data_307b58c = ecx_9.b
    
    int32_t var_18_5 = edi
    char const* const var_1c_5 = "WGL_ARB_framebuffer_sRGB"
    char eax_26
    int32_t ecx_10
    char* edx_9
    eax_26, ecx_10, edx_9 = sub_583a80(esi, edx_8, ecx_9)
    data_307b58d = eax_26
    int32_t var_20_2 = edi
    char const* const var_24_2 = "WGL_ARB_make_current_read"
    char eax_28
    int32_t ecx_11
    char* edx_10
    eax_28, ecx_11, edx_10 = sub_583a80(esi, edx_9, ecx_10)
    bool cond:11 = data_307b5bc != 0
    data_307b58e = eax_28
    
    if (cond:11 || eax_28 != 0 || var_8:3.b != eax_28)
        PROC eax_29 = wglGetProcAddress("wglGetCurrentReadDCARB")
        data_307b3f0 = eax_29
        var_8:2.b = eax_29 == 0
        PROC eax_30
        eax_30, ecx_11, edx_10 = wglGetProcAddress("wglMakeContextCurrentARB")
        data_307b3f4 = eax_30
        
        if (eax_30 == 0 || var_8:2.b != 0)
            eax_30.b = 1
        else
            eax_30.b = 0
        
        edx_10.b = eax_30.b == 0
        data_307b58e = edx_10.b
    
    int32_t var_18_6 = edi
    char const* const var_1c_6 = "WGL_ARB_multisample"
    char eax_32
    int32_t ecx_12
    char* edx_11
    eax_32, ecx_12, edx_11 = sub_583a80(esi, edx_10, ecx_11)
    data_307b58f = eax_32
    int32_t var_20_3 = edi
    char const* const var_24_3 = "WGL_ARB_pbuffer"
    char eax_34
    int32_t ecx_13
    char* edx_12
    eax_34, ecx_13, edx_12 = sub_583a80(esi, edx_11, ecx_12)
    bool cond:12 = data_307b5bc != 0
    data_307b590 = eax_34
    
    if (cond:12 || eax_34 != 0 || var_8:3.b != eax_34)
        bool eax_35
        eax_35, ecx_13, edx_12 = sub_592c70()
        data_307b590 = eax_35 == 0
    
    int32_t var_18_7 = edi
    char const* const var_1c_7 = "WGL_ARB_pixel_format"
    char eax_37
    int32_t ecx_14
    char* edx_13
    eax_37, ecx_14, edx_13 = sub_583a80(esi, edx_12, ecx_13)
    bool cond:15 = data_307b5bc != 0
    data_307b591 = eax_37
    
    if (cond:15 || eax_37 != 0 || var_8:3.b != eax_37)
        PROC eax_38 = wglGetProcAddress("wglChoosePixelFormatARB")
        data_307b40c = eax_38
        var_8:2.b = eax_38 == 0
        PROC eax_39 = wglGetProcAddress("wglGetPixelFormatAttribfvARB")
        data_307b410 = eax_39
        bool cond:14_1
        
        if (eax_39 != 0)
            cond:14_1 = var_8:2.b == 0
            var_8:2.b = 0
        
        if (eax_39 == 0 || not(cond:14_1))
            var_8:2.b = 1
        
        PROC eax_40
        eax_40, ecx_14, edx_13 = wglGetProcAddress("wglGetPixelFormatAttribivARB")
        data_307b414 = eax_40
        
        if (eax_40 == 0 || var_8:2.b != 0)
            eax_40.b = 1
        else
            eax_40.b = 0
        
        ecx_14.b = eax_40.b == 0
        data_307b591 = ecx_14.b
    
    int32_t var_18_8 = edi
    char const* const var_1c_8 = "WGL_ARB_pixel_format_float"
    char eax_42
    int32_t ecx_15
    char* edx_14
    eax_42, ecx_15, edx_14 = sub_583a80(esi, edx_13, ecx_14)
    data_307b592 = eax_42
    int32_t var_20_4 = edi
    char const* const var_24_4 = "WGL_ARB_render_texture"
    char eax_44
    int32_t ecx_16
    char* edx_15
    eax_44, ecx_16, edx_15 = sub_583a80(esi, edx_14, ecx_15)
    bool cond:16 = data_307b5bc != 0
    data_307b593 = eax_44
    
    if (cond:16 || eax_44 != 0 || var_8:3.b != eax_44)
        PROC eax_45 = wglGetProcAddress("wglBindTexImageARB")
        data_307b418 = eax_45
        var_8:2.b = eax_45 == 0
        PROC eax_46 = wglGetProcAddress("wglReleaseTexImageARB")
        data_307b41c = eax_46
        bool cond:18_1
        
        if (eax_46 != 0)
            cond:18_1 = var_8:2.b == 0
            var_8:2.b = 0
        
        if (eax_46 == 0 || not(cond:18_1))
            var_8:2.b = 1
        
        PROC eax_47
        eax_47, ecx_16, edx_15 = wglGetProcAddress("wglSetPbufferAttribARB")
        data_307b420 = eax_47
        
        if (eax_47 == 0 || var_8:2.b != 0)
            eax_47.b = 1
        else
            eax_47.b = 0
        
        edx_15.b = eax_47.b == 0
        data_307b593 = edx_15.b
    
    int32_t var_18_9 = edi
    char const* const var_1c_9 = "WGL_ATI_pixel_format_float"
    char eax_49
    int32_t ecx_17
    char* edx_16
    eax_49, ecx_17, edx_16 = sub_583a80(esi, edx_15, ecx_16)
    data_307b594 = eax_49
    int32_t var_20_5 = edi
    char const* const var_24_5 = "WGL_ATI_render_texture_rectangle"
    char eax_51
    int32_t ecx_18
    char* edx_17
    eax_51, ecx_18, edx_17 = sub_583a80(esi, edx_16, ecx_17)
    data_307b595 = eax_51
    int32_t var_28_1 = edi
    char const* const var_2c_1 = "WGL_EXT_create_context_es2_profile"
    char eax_53
    int32_t ecx_19
    char* edx_18
    eax_53, ecx_19, edx_18 = sub_583a80(esi, edx_17, ecx_18)
    data_307b596 = eax_53
    int32_t var_30 = edi
    char const* const var_34 = "WGL_EXT_depth_float"
    char eax_55
    int32_t ecx_20
    char* edx_19
    eax_55, ecx_20, edx_19 = sub_583a80(esi, edx_18, ecx_19)
    data_307b597 = eax_55
    int32_t var_38 = edi
    char const* const var_3c = "WGL_EXT_display_color_table"
    char eax_57
    int32_t ecx_21
    char* edx_20
    eax_57, ecx_21, edx_20 = sub_583a80(esi, edx_19, ecx_20)
    bool cond:19 = data_307b5bc != 0
    data_307b598 = eax_57
    
    if (cond:19 || eax_57 != 0 || var_8:3.b != eax_57)
        bool eax_58
        eax_58, ecx_21, edx_20 = sub_592cf0()
        data_307b598 = eax_58 == 0
    
    int32_t var_18_10 = edi
    char const* const var_1c_10 = "WGL_EXT_extensions_string"
    char eax_60
    int32_t ecx_22
    char* edx_21
    eax_60, ecx_22, edx_21 = sub_583a80(esi, edx_20, ecx_21)
    bool cond:22 = data_307b5bc != 0
    data_307b599 = eax_60
    
    if (cond:22 || eax_60 != 0 || var_8:3.b != eax_60)
        PROC eax_61
        eax_61, ecx_22, edx_21 = wglGetProcAddress("wglGetExtensionsStringEXT")
        data_307b434 = eax_61
        eax_61.b = eax_61 == 0
        ecx_22.b = eax_61.b == 0
        data_307b599 = ecx_22.b
    
    int32_t var_18_11 = edi
    char const* const var_1c_11 = "WGL_EXT_framebuffer_sRGB"
    char eax_63
    int32_t ecx_23
    char* edx_22
    eax_63, ecx_23, edx_22 = sub_583a80(esi, edx_21, ecx_22)
    data_307b59a = eax_63
    int32_t var_20_6 = edi
    char const* const var_24_6 = "WGL_EXT_make_current_read"
    char eax_65
    int32_t ecx_24
    char* edx_23
    eax_65, ecx_24, edx_23 = sub_583a80(esi, edx_22, ecx_23)
    bool cond:23 = data_307b5bc != 0
    data_307b59b = eax_65
    
    if (cond:23 || eax_65 != 0 || var_8:3.b != eax_65)
        PROC eax_66 = wglGetProcAddress("wglGetCurrentReadDCEXT")
        data_307b438 = eax_66
        var_8:2.b = eax_66 == 0
        PROC eax_67
        eax_67, ecx_24, edx_23 = wglGetProcAddress("wglMakeContextCurrentEXT")
        data_307b43c = eax_67
        
        if (eax_67 == 0 || var_8:2.b != 0)
            eax_67.b = 1
        else
            eax_67.b = 0
        
        edx_23.b = eax_67.b == 0
        data_307b59b = edx_23.b
    
    int32_t var_18_12 = edi
    char const* const var_1c_12 = "WGL_EXT_multisample"
    char eax_69
    int32_t ecx_25
    char* edx_24
    eax_69, ecx_25, edx_24 = sub_583a80(esi, edx_23, ecx_24)
    data_307b59c = eax_69
    int32_t var_20_7 = edi
    char const* const var_24_7 = "WGL_EXT_pbuffer"
    char eax_71
    int32_t ecx_26
    char* edx_25
    eax_71, ecx_26, edx_25 = sub_583a80(esi, edx_24, ecx_25)
    bool cond:24 = data_307b5bc != 0
    data_307b59d = eax_71
    
    if (cond:24 || eax_71 != 0 || var_8:3.b != eax_71)
        bool eax_72
        eax_72, ecx_26, edx_25 = sub_592d60()
        data_307b59d = eax_72 == 0
    
    int32_t var_18_13 = edi
    char const* const var_1c_13 = "WGL_EXT_pixel_format"
    char eax_74
    int32_t ecx_27
    char* edx_26
    eax_74, ecx_27, edx_26 = sub_583a80(esi, edx_25, ecx_26)
    bool cond:27 = data_307b5bc != 0
    data_307b59e = eax_74
    
    if (cond:27 || eax_74 != 0 || var_8:3.b != eax_74)
        PROC eax_75 = wglGetProcAddress("wglChoosePixelFormatEXT")
        data_307b454 = eax_75
        var_8:2.b = eax_75 == 0
        PROC eax_76 = wglGetProcAddress("wglGetPixelFormatAttribfvEXT")
        data_307b458 = eax_76
        bool cond:26_1
        
        if (eax_76 != 0)
            cond:26_1 = var_8:2.b == 0
            var_8:2.b = 0
        
        if (eax_76 == 0 || not(cond:26_1))
            var_8:2.b = 1
        
        PROC eax_77
        eax_77, ecx_27, edx_26 = wglGetProcAddress("wglGetPixelFormatAttribivEXT")
        data_307b45c = eax_77
        
        if (eax_77 == 0 || var_8:2.b != 0)
            eax_77.b = 1
        else
            eax_77.b = 0
        
        ecx_27.b = eax_77.b == 0
        data_307b59e = ecx_27.b
    
    int32_t var_18_14 = edi
    char const* const var_1c_14 = "WGL_EXT_pixel_format_packed_float"
    char eax_79
    int32_t ecx_28
    char* edx_27
    eax_79, ecx_28, edx_27 = sub_583a80(esi, edx_26, ecx_27)
    data_307b59f = eax_79
    int32_t var_20_8 = edi
    char const* const var_24_8 = "WGL_EXT_swap_control"
    char eax_81
    int32_t ecx_29
    char* edx_28
    eax_81, ecx_29, edx_28 = sub_583a80(esi, edx_27, ecx_28)
    bool cond:28 = data_307b5bc != 0
    data_307b5a0 = eax_81
    
    if (cond:28 || eax_81 != 0 || var_8:3.b != eax_81)
        PROC eax_82 = wglGetProcAddress("wglGetSwapIntervalEXT")
        data_307b460 = eax_82
        var_8:2.b = eax_82 == 0
        PROC eax_83
        eax_83, ecx_29, edx_28 = wglGetProcAddress("wglSwapIntervalEXT")
        data_307b464 = eax_83
        
        if (eax_83 == 0 || var_8:2.b != 0)
            eax_83.b = 1
        else
            eax_83.b = 0
        
        edx_28.b = eax_83.b == 0
        data_307b5a0 = edx_28.b
    
    int32_t var_18_15 = edi
    char const* const var_1c_15 = "WGL_I3D_digital_video_control"
    char eax_85
    int32_t ecx_30
    char* edx_29
    eax_85, ecx_30, edx_29 = sub_583a80(esi, edx_28, ecx_29)
    bool cond:31 = data_307b5bc != 0
    data_307b5a1 = eax_85
    
    if (cond:31 || eax_85 != 0 || var_8:3.b != eax_85)
        PROC eax_86 = wglGetProcAddress("wglGetDigitalVideoParametersI3D")
        data_307b468 = eax_86
        var_8:2.b = eax_86 == 0
        PROC eax_87
        eax_87, ecx_30, edx_29 = wglGetProcAddress("wglSetDigitalVideoParametersI3D")
        data_307b46c = eax_87
        
        if (eax_87 == 0 || var_8:2.b != 0)
            eax_87.b = 1
        else
            eax_87.b = 0
        
        eax_87.b = eax_87.b == 0
        data_307b5a1 = eax_87.b
    
    int32_t var_18_16 = edi
    char const* const var_1c_16 = "WGL_I3D_gamma"
    char eax_89
    int32_t ecx_31
    char* edx_30
    eax_89, ecx_31, edx_30 = sub_583a80(esi, edx_29, ecx_30)
    bool cond:32 = data_307b5bc != 0
    data_307b5a2 = eax_89
    
    if (cond:32 || eax_89 != 0 || var_8:3.b != eax_89)
        char eax_90
        eax_90, ecx_31, edx_30 = sub_592de0()
        ecx_31.b = eax_90 == 0
        data_307b5a2 = ecx_31.b
    
    int32_t var_18_17 = edi
    char const* const var_1c_17 = "WGL_I3D_genlock"
    char eax_92
    int32_t ecx_32
    char* edx_31
    eax_92, ecx_32, edx_31 = sub_583a80(esi, edx_30, ecx_31)
    bool cond:33 = data_307b5bc != 0
    data_307b5a3 = eax_92
    
    if (cond:33 || eax_92 != 0 || var_8:3.b != eax_92)
        char eax_93
        eax_93, ecx_32, edx_31 = sub_592e50()
        edx_31.b = eax_93 == 0
        data_307b5a3 = edx_31.b
    
    int32_t var_18_18 = edi
    char const* const var_1c_18 = "WGL_I3D_image_buffer"
    char eax_95
    int32_t ecx_33
    char* edx_32
    eax_95, ecx_33, edx_32 = sub_583a80(esi, edx_31, ecx_32)
    bool cond:34 = data_307b5bc != 0
    data_307b5a4 = eax_95
    
    if (cond:34 || eax_95 != 0 || var_8:3.b != eax_95)
        bool eax_96
        eax_96, ecx_33, edx_32 = sub_592f70()
        data_307b5a4 = eax_96 == 0
    
    int32_t var_18_19 = edi
    char const* const var_1c_19 = "WGL_I3D_swap_frame_lock"
    char eax_98
    int32_t ecx_34
    char* edx_33
    eax_98, ecx_34, edx_33 = sub_583a80(esi, edx_32, ecx_33)
    bool cond:35 = data_307b5bc != 0
    data_307b5a5 = eax_98
    
    if (cond:35 || eax_98 != 0 || var_8:3.b != eax_98)
        char eax_99
        eax_99, ecx_34, edx_33 = sub_592fe0()
        ecx_34.b = eax_99 == 0
        data_307b5a5 = ecx_34.b
    
    int32_t var_18_20 = edi
    char const* const var_1c_20 = "WGL_I3D_swap_frame_usage"
    char eax_101
    int32_t ecx_35
    char* edx_34
    eax_101, ecx_35, edx_34 = sub_583a80(esi, edx_33, ecx_34)
    bool cond:36 = data_307b5bc != 0
    data_307b5a6 = eax_101
    
    if (cond:36 || eax_101 != 0 || var_8:3.b != eax_101)
        char eax_102
        eax_102, ecx_35, edx_34 = sub_593050()
        edx_34.b = eax_102 == 0
        data_307b5a6 = edx_34.b
    
    int32_t var_18_21 = edi
    char const* const var_1c_21 = "WGL_NV_DX_interop"
    char eax_104
    int32_t ecx_36
    char* edx_35
    eax_104, ecx_36, edx_35 = sub_583a80(esi, edx_34, ecx_35)
    bool cond:38 = data_307b5bc != 0
    data_307b5a7 = eax_104
    
    if (cond:38 || eax_104 != 0 || var_8:3.b != eax_104)
        bool eax_105
        eax_105, ecx_36, edx_35 = sub_5930c0()
        data_307b5a7 = eax_105 == 0
    
    int32_t var_18_22 = edi
    char const* const var_1c_22 = "WGL_NV_copy_image"
    char eax_107
    int32_t ecx_37
    char* edx_36
    eax_107, ecx_37, edx_36 = sub_583a80(esi, edx_35, ecx_36)
    bool cond:39 = data_307b5bc != 0
    data_307b5a8 = eax_107
    
    if (cond:39 || eax_107 != 0 || var_8:3.b != eax_107)
        PROC eax_108
        eax_108, ecx_37, edx_36 = wglGetProcAddress("wglCopyImageSubDataNV")
        data_307b500 = eax_108
        eax_108.b = eax_108 == 0
        ecx_37.b = eax_108.b == 0
        data_307b5a8 = ecx_37.b
    
    int32_t var_18_23 = edi
    char const* const var_1c_23 = "WGL_NV_float_buffer"
    char eax_110
    int32_t ecx_38
    char* edx_37
    eax_110, ecx_38, edx_37 = sub_583a80(esi, edx_36, ecx_37)
    data_307b5a9 = eax_110
    int32_t var_20_9 = edi
    char const* const var_24_9 = "WGL_NV_gpu_affinity"
    char eax_112
    int32_t ecx_39
    char* edx_38
    eax_112, ecx_39, edx_38 = sub_583a80(esi, edx_37, ecx_38)
    bool cond:41 = data_307b5bc != 0
    data_307b5aa = eax_112
    
    if (cond:41 || eax_112 != 0 || var_8:3.b != eax_112)
        char eax_113
        eax_113, ecx_39, edx_38 = sub_593180()
        edx_38.b = eax_113 == 0
        data_307b5aa = edx_38.b
    
    int32_t var_18_24 = edi
    char const* const var_1c_24 = "WGL_NV_multisample_coverage"
    char eax_115
    int32_t ecx_40
    char* edx_39
    eax_115, ecx_40, edx_39 = sub_583a80(esi, edx_38, ecx_39)
    data_307b5ab = eax_115
    int32_t var_20_10 = edi
    char const* const var_24_10 = "WGL_NV_present_video"
    char eax_117
    int32_t ecx_41
    char* edx_40
    eax_117, ecx_41, edx_40 = sub_583a80(esi, edx_39, ecx_40)
    bool cond:43 = data_307b5bc != 0
    data_307b5ac = eax_117
    
    if (cond:43 || eax_117 != 0 || var_8:3.b != eax_117)
        PROC eax_118 = wglGetProcAddress("wglBindVideoDeviceNV")
        data_307b518 = eax_118
        var_8:2.b = eax_118 == 0
        PROC eax_119 = wglGetProcAddress("wglEnumerateVideoDevicesNV")
        data_307b51c = eax_119
        bool cond:42_1
        
        if (eax_119 != 0)
            cond:42_1 = var_8:2.b == 0
            var_8:2.b = 0
        
        if (eax_119 == 0 || not(cond:42_1))
            var_8:2.b = 1
        
        PROC eax_120
        eax_120, ecx_41, edx_40 = wglGetProcAddress("wglQueryCurrentContextNV")
        data_307b520 = eax_120
        
        if (eax_120 == 0 || var_8:2.b != 0)
            eax_120.b = 1
        else
            eax_120.b = 0
        
        eax_120.b = eax_120.b == 0
        data_307b5ac = eax_120.b
    
    int32_t var_18_25 = edi
    char const* const var_1c_25 = "WGL_NV_render_depth_texture"
    char eax_122
    int32_t ecx_42
    char* edx_41
    eax_122, ecx_42, edx_41 = sub_583a80(esi, edx_40, ecx_41)
    data_307b5ad = eax_122
    int32_t var_20_11 = edi
    char const* const var_24_11 = "WGL_NV_render_texture_rectangle"
    char eax_124
    int32_t ecx_43
    char* edx_42
    eax_124, ecx_43, edx_42 = sub_583a80(esi, edx_41, ecx_42)
    data_307b5ae = eax_124
    int32_t var_28_2 = edi
    char const* const var_2c_2 = "WGL_NV_swap_group"
    char eax_126
    int32_t ecx_44
    char* edx_43
    eax_126, ecx_44, edx_43 = sub_583a80(esi, edx_42, ecx_43)
    bool cond:44 = data_307b5bc != 0
    data_307b5af = eax_126
    PROC (__stdcall* const ebx)(PSTR param0)
    
    if (cond:44 || eax_126 != 0)
        ebx.b = var_8:3.b
    label_593d62:
        char eax_127
        eax_127, ecx_44, edx_43 = sub_593200()
        ecx_44.b = eax_127 == 0
        data_307b5af = ecx_44.b
    else
        ebx.b = var_8:3.b
        
        if (wglGetProcAddress != 0)
            goto label_593d62
    
    int32_t var_18_26 = edi
    char const* const var_1c_26 = "WGL_NV_vertex_array_range"
    char eax_129
    int32_t ecx_45
    char* edx_44
    eax_129, ecx_45, edx_44 = sub_583a80(esi, edx_43, ecx_44)
    bool cond:46 = data_307b5bc != 0
    data_307b5b0 = eax_129
    
    if (cond:46 || eax_129 != 0 || wglGetProcAddress != 0)
        PROC eax_130 = wglGetProcAddress("wglAllocateMemoryNV")
        data_307b53c = eax_130
        ebx.b = eax_130 == 0
        PROC eax_131
        eax_131, ecx_45, edx_44 = wglGetProcAddress("wglFreeMemoryNV")
        data_307b540 = eax_131
        
        if (eax_131 == 0 || wglGetProcAddress != 0)
            eax_131.b = 1
        else
            eax_131.b = 0
        
        edx_44.b = eax_131.b == 0
        data_307b5b0 = edx_44.b
    
    int32_t var_18_27 = edi
    char const* const var_1c_27 = "WGL_NV_video_capture"
    char eax_133
    int32_t ecx_46
    char* edx_45
    eax_133, ecx_46, edx_45 = sub_583a80(esi, edx_44, ecx_45)
    bool cond:47 = data_307b5bc != 0
    data_307b5b1 = eax_133
    
    if (cond:47 || eax_133 != 0 || wglGetProcAddress != 0)
        bool eax_134
        eax_134, ecx_46, edx_45 = sub_593290()
        data_307b5b1 = eax_134 == 0
    
    int32_t var_18_28 = edi
    char const* const var_1c_28 = "WGL_NV_video_output"
    char eax_136
    int32_t ecx_47
    char* edx_46
    eax_136, ecx_47, edx_46 = sub_583a80(esi, edx_45, ecx_46)
    bool cond:48 = data_307b5bc != 0
    data_307b5b2 = eax_136
    
    if (cond:48 || eax_136 != 0 || wglGetProcAddress != 0)
        char eax_137
        eax_137, ecx_47, edx_46 = sub_593310()
        ecx_47.b = eax_137 == 0
        data_307b5b2 = ecx_47.b
    
    int32_t var_18_29 = edi
    char const* const var_1c_29 = "WGL_OML_sync_control"
    char eax_139 = sub_583a80(esi, edx_46, ecx_47)
    bool cond:49 = data_307b5bc != 0
    data_307b5b3 = eax_139
    
    if (cond:49 || eax_139 != 0 || wglGetProcAddress != 0)
        data_307b5b3 = sub_5933a0() == 0
    
    return 0
}

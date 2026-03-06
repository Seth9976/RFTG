// 函数名称: sub_58ef30
// 虚拟地址: 0x58ef30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_58ef30()
{
    // 第一条实际指令: uint8_t* eax = glGetString(0x1f02)
    uint8_t* eax = glGetString(0x1f02)
    uint8_t* ecx = nullptr
    
    if (eax != 0)
        uint8_t i = *eax
        
        if (i != 0)
            while (i != 0x2e)
                ecx = &ecx[1]
                i = *(ecx + eax)
                
                if (i == 0)
                    break
        
        i = *(ecx + eax)
        
        if ((i == 0 || i == 0x2e) && ecx != 0)
            uint32_t eax_1 = zx.d(*(ecx + eax + 1))
            int32_t edx_2 = zx.d(*(ecx + eax - 1)) - 0x30
            int32_t eax_2 = eax_1 - 0x30
            
            if (eax_1 - 0x30 s< 0 || eax_2 s> 9)
                eax_2 = 0
            
            if (edx_2 u<= 9)
                if (edx_2 == 1)
                    if (eax_2 == 0)
                        return 2
                    
                    goto label_58efbe
                
                if (edx_2 s> 4 || (edx_2 == 4 && eax_2 s>= 2))
                    data_307b20a = 1
                label_58f07d:
                    data_307b209 = 1
                label_58f083:
                    data_307b208 = 1
                label_58f089:
                    data_307b207 = 1
                label_58f08f:
                    data_307b206 = 1
                label_58f095:
                    data_307b205 = 1
                label_58f09b:
                    data_307b204 = 1
                label_58f0a1:
                    data_307b203 = 1
                label_58f0a7:
                    data_307b202 = 1
                label_58f0ad:
                    data_307b201 = 1
                    data_307b200 = 1
                    ecx.b = 1
                else
                label_58efbe:
                    data_307b20a = 0
                    
                    if (edx_2 == 4 && eax_2 s>= 1)
                        goto label_58f07d
                    
                    data_307b209 = 0
                    
                    if (edx_2 == 4)
                        goto label_58f083
                    
                    data_307b208 = 0
                    
                    if (edx_2 == 3 && eax_2 s>= edx_2)
                        goto label_58f089
                    
                    data_307b207 = 0
                    
                    if (edx_2 == 3 && eax_2 s>= 2)
                        goto label_58f08f
                    
                    data_307b206 = 0
                    
                    if (edx_2 == 3 && eax_2 s>= 1)
                        goto label_58f095
                    
                    data_307b205 = 0
                    
                    if (edx_2 == 3)
                        goto label_58f09b
                    
                    data_307b204 = 0
                    
                    if (edx_2 == 2 && eax_2 s>= 1)
                        goto label_58f0a1
                    
                    data_307b203 = 0
                    
                    if (edx_2 == 2)
                        goto label_58f0a7
                    
                    data_307b202 = 0
                    
                    if (edx_2 == 1 && eax_2 s>= 5)
                        goto label_58f0ad
                    
                    data_307b201 = 0
                    
                    if (edx_2 != 1 || eax_2 s< 4)
                        data_307b200 = 0
                        
                        if (edx_2 != 1 || eax_2 s< 3)
                            ecx.b = 0
                        else
                            ecx.b = 1
                    else
                        data_307b200 = 1
                        ecx.b = 1
                
                data_307b1ff = ecx.b
                ecx.b = ecx.b == 1
                data_307b1fe = ecx.b
                
                if (ecx.b == 1 || (edx_2 == 1 && eax_2 s>= 2))
                    data_307b1fd = 1
                    data_307b1fc = 1
                else
                    data_307b1fd = 0
                    
                    if (edx_2 != 1 || eax_2 s< 1)
                        data_307b1fc = 0
                    else
                        data_307b1fc = 1
                
                uint8_t* eax_4
                int32_t ecx_1
                char* edx_3
                eax_4, ecx_1, edx_3 = glGetString(0x1f03)
                uint8_t* esi = eax_4
                
                if (esi == 0)
                    esi = &data_83f3d3
                
                char* eax_5 = nullptr
                
                if (esi != 0 && *esi != 0)
                    do
                        eax_5 = &eax_5[1]
                    while (*(eax_5 + esi) != 0)
                
                int32_t edi = eax_5 + esi
                
                if (data_307b5bc == 0 && data_307b1fd == 0)
                    if (data_307b1ff == 0)
                        goto label_58f17e
                    
                    goto label_58f165
                
                bool eax_6
                eax_6, ecx_1, edx_3 = sub_583b40()
                bool cond:2_1 = data_307b5bc != 0
                data_307b1fd = eax_6 == 0
                
                if (not(cond:2_1) && data_307b1ff == 0)
                label_58f17e:
                    
                    if (data_307b200 == 0)
                        goto label_58f1a0
                    
                    goto label_58f187
                
            label_58f165:
                char eax_7
                eax_7, ecx_1, edx_3 = sub_583bb0()
                ecx_1.b = eax_7 == 0
                bool cond:3_1 = data_307b5bc != 0
                data_307b1ff = ecx_1.b
                
                if (not(cond:3_1) && data_307b200 == 0)
                label_58f1a0:
                    
                    if (data_307b201 == 0)
                        goto label_58f1c1
                    
                    goto label_58f1a9
                
            label_58f187:
                char eax_8
                eax_8, ecx_1, edx_3 = sub_583fc0()
                edx_3.b = eax_8 == 0
                bool cond:4_1 = data_307b5bc != 0
                data_307b200 = edx_3.b
                
                if (not(cond:4_1) && data_307b201 == 0)
                label_58f1c1:
                    
                    if (data_307b202 == 0)
                        goto label_58f1e3
                    
                    goto label_58f1ca
                
            label_58f1a9:
                bool eax_9
                eax_9, ecx_1, edx_3 = sub_5843e0()
                bool cond:5_1 = data_307b5bc != 0
                data_307b201 = eax_9 == 0
                
                if (not(cond:5_1) && data_307b202 == 0)
                label_58f1e3:
                    
                    if (data_307b203 == 0)
                        goto label_58f205
                    
                    goto label_58f1ec
                
            label_58f1ca:
                char eax_10
                eax_10, ecx_1, edx_3 = sub_584590()
                ecx_1.b = eax_10 == 0
                bool cond:6_1 = data_307b5bc != 0
                data_307b202 = ecx_1.b
                
                if (not(cond:6_1) && data_307b203 == 0)
                label_58f205:
                    
                    if (data_307b204 == 0)
                        goto label_58f226
                    
                    goto label_58f20e
                
            label_58f1ec:
                char eax_11
                eax_11, ecx_1, edx_3 = sub_584da0()
                edx_3.b = eax_11 == 0
                bool cond:7_1 = data_307b5bc != 0
                data_307b203 = edx_3.b
                
                if (not(cond:7_1) && data_307b204 == 0)
                label_58f226:
                    
                    if (data_307b205 == 0)
                        goto label_58f248
                    
                    goto label_58f22f
                
            label_58f20e:
                bool eax_12
                eax_12, ecx_1, edx_3 = sub_584e30()
                bool cond:8_1 = data_307b5bc != 0
                data_307b204 = eax_12 == 0
                
                if (not(cond:8_1) && data_307b205 == 0)
                label_58f248:
                    
                    if (data_307b206 == 0)
                        goto label_58f26a
                    
                    goto label_58f251
                
            label_58f22f:
                char eax_13
                eax_13, ecx_1, edx_3 = sub_585300()
                ecx_1.b = eax_13 == 0
                bool cond:9_1 = data_307b5bc != 0
                data_307b205 = ecx_1.b
                
                if (not(cond:9_1) && data_307b206 == 0)
                label_58f26a:
                    
                    if (data_307b207 == 0)
                        goto label_58f297
                    
                    goto label_58f278
                
            label_58f251:
                char eax_14
                eax_14, ecx_1, edx_3 = sub_585370()
                edx_3.b = eax_14 == 0
                bool cond:10_1 = data_307b5bc != 0
                data_307b206 = edx_3.b
                
                if (cond:10_1 || data_307b207 != 0)
                label_58f278:
                    PROC eax_15
                    eax_15, ecx_1, edx_3 = wglGetProcAddress("glVertexAttribDivisor")
                    data_3079708 = eax_15
                    eax_15.b = eax_15 == 0
                    eax_15.b = eax_15.b == 0
                    bool cond:13_1 = data_307b5bc != 0
                    data_307b207 = eax_15.b
                    
                    if (cond:13_1 || data_307b208 != 0)
                    label_58f2a0:
                        char eax_16
                        eax_16, ecx_1, edx_3 = sub_5853c0()
                        ecx_1.b = eax_16 == 0
                        data_307b208 = ecx_1.b
                else
                label_58f297:
                    
                    if (data_307b208 != 0)
                        goto label_58f2a0
                
                int32_t var_10 = edi
                char const* const var_14 = "GL_3DFX_multisample"
                char eax_18
                int32_t ecx_2
                char* edx_4
                eax_18, ecx_2, edx_4 = sub_583a80(esi, edx_3, ecx_1)
                data_307b20b = eax_18
                int32_t var_18 = edi
                char const* const var_1c = "GL_3DFX_tbuffer"
                char eax_20
                int32_t ecx_3
                char* edx_5
                eax_20, ecx_3, edx_5 = sub_583a80(esi, edx_4, ecx_2)
                bool cond:15 = data_307b5bc != 0
                data_307b20c = eax_20
                
                if (cond:15 || eax_20 != 0)
                    PROC eax_21
                    eax_21, ecx_3, edx_5 = wglGetProcAddress("glTbufferMask3DFX")
                    data_3079720 = eax_21
                    eax_21.b = eax_21 == 0
                    edx_5.b = eax_21.b == 0
                    data_307b20c = edx_5.b
                
                int32_t var_10_1 = edi
                char const* const var_14_1 = "GL_3DFX_texture_compression_FXT1"
                char eax_23
                int32_t ecx_4
                char* edx_6
                eax_23, ecx_4, edx_6 = sub_583a80(esi, edx_5, ecx_3)
                data_307b20d = eax_23
                int32_t var_18_1 = edi
                char const* const var_1c_1 = "GL_AMD_blend_minmax_factor"
                char eax_25
                int32_t ecx_5
                char* edx_7
                eax_25, ecx_5, edx_7 = sub_583a80(esi, edx_6, ecx_4)
                data_307b20e = eax_25
                int32_t var_20 = edi
                char const* const var_24 = "GL_AMD_conservative_depth"
                char eax_27
                int32_t ecx_6
                char* edx_8
                eax_27, ecx_6, edx_8 = sub_583a80(esi, edx_7, ecx_5)
                data_307b20f = eax_27
                int32_t var_28 = edi
                char const* const var_2c = "GL_AMD_debug_output"
                char eax_29
                int32_t ecx_7
                char* edx_9
                eax_29, ecx_7, edx_9 = sub_583a80(esi, edx_8, ecx_6)
                bool cond:16 = data_307b5bc != 0
                data_307b210 = eax_29
                
                if (cond:16 || eax_29 != 0)
                    bool eax_30
                    eax_30, ecx_7, edx_9 = sub_585440()
                    data_307b210 = eax_30 == 0
                
                int32_t var_10_2 = edi
                char const* const var_14_2 = "GL_AMD_depth_clamp_separate"
                char eax_32
                int32_t ecx_8
                char* edx_10
                eax_32, ecx_8, edx_10 = sub_583a80(esi, edx_9, ecx_7)
                data_307b211 = eax_32
                int32_t var_18_2 = edi
                char const* const var_1c_2 = "GL_AMD_draw_buffers_blend"
                char eax_34
                int32_t ecx_9
                char* edx_11
                eax_34, ecx_9, edx_11 = sub_583a80(esi, edx_10, ecx_8)
                bool cond:17 = data_307b5bc != 0
                data_307b212 = eax_34
                
                if (cond:17 || eax_34 != 0)
                    char eax_35
                    eax_35, ecx_9, edx_11 = sub_5854b0()
                    ecx_9.b = eax_35 == 0
                    data_307b212 = ecx_9.b
                
                int32_t var_10_3 = edi
                char const* const var_14_3 = "GL_AMD_multi_draw_indirect"
                char eax_37
                int32_t ecx_10
                char* edx_12
                eax_37, ecx_10, edx_12 = sub_583a80(esi, edx_11, ecx_9)
                bool cond:18 = data_307b5bc != 0
                data_307b213 = eax_37
                
                if (cond:18 || eax_37 != 0)
                    char eax_38
                    eax_38, ecx_10, edx_12 = sub_585520()
                    edx_12.b = eax_38 == 0
                    data_307b213 = edx_12.b
                
                int32_t var_10_4 = edi
                char const* const var_14_4 = "GL_AMD_name_gen_delete"
                char eax_40
                int32_t ecx_11
                char* edx_13
                eax_40, ecx_11, edx_13 = sub_583a80(esi, edx_12, ecx_10)
                bool cond:19 = data_307b5bc != 0
                data_307b214 = eax_40
                
                if (cond:19 || eax_40 != 0)
                    bool eax_41
                    eax_41, ecx_11, edx_13 = sub_585560()
                    data_307b214 = eax_41 == 0
                
                int32_t var_10_5 = edi
                char const* const var_14_5 = "GL_AMD_performance_monitor"
                char eax_43
                int32_t ecx_12
                char* edx_14
                eax_43, ecx_12, edx_14 = sub_583a80(esi, edx_13, ecx_11)
                bool cond:20 = data_307b5bc != 0
                data_307b215 = eax_43
                
                if (cond:20 || eax_43 != 0)
                    char eax_44
                    eax_44, ecx_12, edx_14 = sub_5855b0()
                    ecx_12.b = eax_44 == 0
                    data_307b215 = ecx_12.b
                
                int32_t var_10_6 = edi
                char const* const var_14_6 = "GL_AMD_sample_positions"
                char eax_46
                int32_t ecx_13
                char* edx_15
                eax_46, ecx_13, edx_15 = sub_583a80(esi, edx_14, ecx_12)
                bool cond:22 = data_307b5bc != 0
                data_307b216 = eax_46
                
                if (cond:22 || eax_46 != 0)
                    PROC eax_47
                    eax_47, ecx_13, edx_15 = wglGetProcAddress("glSetMultisamplefvAMD")
                    data_3079784 = eax_47
                    eax_47.b = eax_47 == 0
                    edx_15.b = eax_47.b == 0
                    data_307b216 = edx_15.b
                
                int32_t var_10_7 = edi
                char const* const var_14_7 = "GL_AMD_seamless_cubemap_per_texture"
                char eax_49
                int32_t ecx_14
                char* edx_16
                eax_49, ecx_14, edx_16 = sub_583a80(esi, edx_15, ecx_13)
                data_307b217 = eax_49
                int32_t var_18_3 = edi
                char const* const var_1c_3 = "GL_AMD_shader_stencil_export"
                char eax_51
                int32_t ecx_15
                char* edx_17
                eax_51, ecx_15, edx_17 = sub_583a80(esi, edx_16, ecx_14)
                data_307b218 = eax_51
                int32_t var_20_1 = edi
                char const* const var_24_1 = "GL_AMD_texture_texture4"
                char eax_53
                int32_t ecx_16
                char* edx_18
                eax_53, ecx_16, edx_18 = sub_583a80(esi, edx_17, ecx_15)
                data_307b219 = eax_53
                int32_t var_28_1 = edi
                char const* const var_2c_1 = "GL_AMD_transform_feedback3_lines_triangles"
                char eax_55
                int32_t ecx_17
                char* edx_19
                eax_55, ecx_17, edx_19 = sub_583a80(esi, edx_18, ecx_16)
                data_307b21a = eax_55
                int32_t var_30 = edi
                char const* const var_34 = "GL_AMD_vertex_shader_tessellator"
                char eax_57
                int32_t ecx_18
                char* edx_20
                eax_57, ecx_18, edx_20 = sub_583a80(esi, edx_19, ecx_17)
                bool cond:23 = data_307b5bc != 0
                data_307b21b = eax_57
                
                if (cond:23 || eax_57 != 0)
                    bool eax_58
                    eax_58, ecx_18, edx_20 = sub_5856b0()
                    data_307b21b = eax_58 == 0
                
                int32_t var_10_8 = edi
                char const* const var_14_8 = "GL_APPLE_aux_depth_stencil"
                char eax_60
                int32_t ecx_19
                char* edx_21
                eax_60, ecx_19, edx_21 = sub_583a80(esi, edx_20, ecx_18)
                data_307b21c = eax_60
                int32_t var_18_4 = edi
                char const* const var_1c_4 = "GL_APPLE_client_storage"
                char eax_62
                int32_t ecx_20
                char* edx_22
                eax_62, ecx_20, edx_22 = sub_583a80(esi, edx_21, ecx_19)
                data_307b21d = eax_62
                int32_t var_20_2 = edi
                char const* const var_24_2 = "GL_APPLE_element_array"
                char eax_64
                int32_t ecx_21
                char* edx_23
                eax_64, ecx_21, edx_23 = sub_583a80(esi, edx_22, ecx_20)
                bool cond:24 = data_307b5bc != 0
                data_307b21e = eax_64
                
                if (cond:24 || eax_64 != 0)
                    char eax_65
                    eax_65, ecx_21, edx_23 = sub_5856f0()
                    ecx_21.b = eax_65 == 0
                    data_307b21e = ecx_21.b
                
                int32_t var_10_9 = edi
                char const* const var_14_9 = "GL_APPLE_fence"
                char eax_67
                int32_t ecx_22
                char* edx_24
                eax_67, ecx_22, edx_24 = sub_583a80(esi, edx_23, ecx_21)
                bool cond:25 = data_307b5bc != 0
                data_307b21f = eax_67
                
                if (cond:25 || eax_67 != 0)
                    char eax_68
                    eax_68, ecx_22, edx_24 = sub_585770()
                    edx_24.b = eax_68 == 0
                    data_307b21f = edx_24.b
                
                int32_t var_10_10 = edi
                char const* const var_14_10 = "GL_APPLE_float_pixels"
                char eax_70
                int32_t ecx_23
                char* edx_25
                eax_70, ecx_23, edx_25 = sub_583a80(esi, edx_24, ecx_22)
                data_307b220 = eax_70
                int32_t var_18_5 = edi
                char const* const var_1c_5 = "GL_APPLE_flush_buffer_range"
                char eax_72
                int32_t ecx_24
                char* edx_26
                eax_72, ecx_24, edx_26 = sub_583a80(esi, edx_25, ecx_23)
                bool cond:26 = data_307b5bc != 0
                data_307b221 = eax_72
                
                if (cond:26 || eax_72 != 0)
                    bool eax_73
                    eax_73, ecx_24, edx_26 = sub_585830()
                    data_307b221 = eax_73 == 0
                
                int32_t var_10_11 = edi
                char const* const var_14_11 = "GL_APPLE_object_purgeable"
                char eax_75
                int32_t ecx_25
                char* edx_27
                eax_75, ecx_25, edx_27 = sub_583a80(esi, edx_26, ecx_24)
                bool cond:27 = data_307b5bc != 0
                data_307b222 = eax_75
                
                if (cond:27 || eax_75 != 0)
                    char eax_76
                    eax_76, ecx_25, edx_27 = sub_585870()
                    ecx_25.b = eax_76 == 0
                    data_307b222 = ecx_25.b
                
                int32_t var_10_12 = edi
                char const* const var_14_12 = "GL_APPLE_pixel_buffer"
                char eax_78
                int32_t ecx_26
                char* edx_28
                eax_78, ecx_26, edx_28 = sub_583a80(esi, edx_27, ecx_25)
                data_307b223 = eax_78
                int32_t var_18_6 = edi
                char const* const var_1c_6 = "GL_APPLE_rgb_422"
                char eax_80
                int32_t ecx_27
                char* edx_29
                eax_80, ecx_27, edx_29 = sub_583a80(esi, edx_28, ecx_26)
                data_307b224 = eax_80
                int32_t var_20_3 = edi
                char const* const var_24_3 = "GL_APPLE_row_bytes"
                char eax_82
                int32_t ecx_28
                char* edx_30
                eax_82, ecx_28, edx_30 = sub_583a80(esi, edx_29, ecx_27)
                data_307b225 = eax_82
                int32_t var_28_2 = edi
                char const* const var_2c_2 = "GL_APPLE_specular_vector"
                char eax_84
                int32_t ecx_29
                char* edx_31
                eax_84, ecx_29, edx_31 = sub_583a80(esi, edx_30, ecx_28)
                data_307b226 = eax_84
                int32_t var_30_1 = edi
                char const* const var_34_1 = "GL_APPLE_texture_range"
                char eax_86
                int32_t ecx_30
                char* edx_32
                eax_86, ecx_30, edx_32 = sub_583a80(esi, edx_31, ecx_29)
                bool cond:28 = data_307b5bc != 0
                data_307b227 = eax_86
                
                if (cond:28 || eax_86 != 0)
                    char eax_87
                    eax_87, ecx_30, edx_32 = sub_5858c0()
                    edx_32.b = eax_87 == 0
                    data_307b227 = edx_32.b
                
                int32_t var_10_13 = edi
                char const* const var_14_13 = "GL_APPLE_transform_hint"
                char eax_89
                int32_t ecx_31
                char* edx_33
                eax_89, ecx_31, edx_33 = sub_583a80(esi, edx_32, ecx_30)
                data_307b228 = eax_89
                int32_t var_18_7 = edi
                char const* const var_1c_7 = "GL_APPLE_vertex_array_object"
                char eax_91
                int32_t ecx_32
                char* edx_34
                eax_91, ecx_32, edx_34 = sub_583a80(esi, edx_33, ecx_31)
                bool cond:29 = data_307b5bc != 0
                data_307b229 = eax_91
                
                if (cond:29 || eax_91 != 0)
                    bool eax_92
                    eax_92, ecx_32, edx_34 = sub_585900()
                    data_307b229 = eax_92 == 0
                
                int32_t var_10_14 = edi
                char const* const var_14_14 = "GL_APPLE_vertex_array_range"
                char eax_94
                int32_t ecx_33
                char* edx_35
                eax_94, ecx_33, edx_35 = sub_583a80(esi, edx_34, ecx_32)
                bool cond:30 = data_307b5bc != 0
                data_307b22a = eax_94
                
                if (cond:30 || eax_94 != 0)
                    char eax_95
                    eax_95, ecx_33, edx_35 = sub_585970()
                    ecx_33.b = eax_95 == 0
                    data_307b22a = ecx_33.b
                
                int32_t var_10_15 = edi
                char const* const var_14_15 = "GL_APPLE_vertex_program_evaluators"
                char eax_97
                int32_t ecx_34
                char* edx_36
                eax_97, ecx_34, edx_36 = sub_583a80(esi, edx_35, ecx_33)
                bool cond:31 = data_307b5bc != 0
                data_307b22b = eax_97
                
                if (cond:31 || eax_97 != 0)
                    char eax_98
                    eax_98, ecx_34, edx_36 = sub_5859c0()
                    edx_36.b = eax_98 == 0
                    data_307b22b = edx_36.b
                
                int32_t var_10_16 = edi
                char const* const var_14_16 = "GL_APPLE_ycbcr_422"
                char eax_100
                int32_t ecx_35
                char* edx_37
                eax_100, ecx_35, edx_37 = sub_583a80(esi, edx_36, ecx_34)
                data_307b22c = eax_100
                int32_t var_18_8 = edi
                char const* const var_1c_8 = "GL_ARB_ES2_compatibility"
                char eax_102
                int32_t ecx_36
                char* edx_38
                eax_102, ecx_36, edx_38 = sub_583a80(esi, edx_37, ecx_35)
                bool cond:32 = data_307b5bc != 0
                data_307b22d = eax_102
                
                if (cond:32 || eax_102 != 0)
                    bool eax_103
                    eax_103, ecx_36, edx_38 = sub_585a70()
                    data_307b22d = eax_103 == 0
                
                int32_t var_10_17 = edi
                char const* const var_14_17 = "GL_ARB_base_instance"
                char eax_105
                int32_t ecx_37
                char* edx_39
                eax_105, ecx_37, edx_39 = sub_583a80(esi, edx_38, ecx_36)
                bool cond:33 = data_307b5bc != 0
                data_307b22e = eax_105
                
                if (cond:33 || eax_105 != 0)
                    char eax_106
                    eax_106, ecx_37, edx_39 = sub_585af0()
                    ecx_37.b = eax_106 == 0
                    data_307b22e = ecx_37.b
                
                int32_t var_10_18 = edi
                char const* const var_14_18 = "GL_ARB_blend_func_extended"
                char eax_108
                int32_t ecx_38
                char* edx_40
                eax_108, ecx_38, edx_40 = sub_583a80(esi, edx_39, ecx_37)
                bool cond:34 = data_307b5bc != 0
                data_307b22f = eax_108
                
                if (cond:34 || eax_108 != 0)
                    char eax_109
                    eax_109, ecx_38, edx_40 = sub_585b40()
                    edx_40.b = eax_109 == 0
                    data_307b22f = edx_40.b
                
                int32_t var_10_19 = edi
                char const* const var_14_19 = "GL_ARB_cl_event"
                char eax_111
                int32_t ecx_39
                char* edx_41
                eax_111, ecx_39, edx_41 = sub_583a80(esi, edx_40, ecx_38)
                bool cond:36 = data_307b5bc != 0
                data_307b230 = eax_111
                
                if (cond:36 || eax_111 != 0)
                    PROC eax_112
                    eax_112, ecx_39, edx_41 = wglGetProcAddress("glCreateSyncFromCLeventARB")
                    data_3079840 = eax_112
                    eax_112.b = eax_112 == 0
                    eax_112.b = eax_112.b == 0
                    data_307b230 = eax_112.b
                
                int32_t var_10_20 = edi
                char const* const var_14_20 = "GL_ARB_color_buffer_float"
                char eax_114
                int32_t ecx_40
                char* edx_42
                eax_114, ecx_40, edx_42 = sub_583a80(esi, edx_41, ecx_39)
                bool cond:38 = data_307b5bc != 0
                data_307b231 = eax_114
                
                if (cond:38 || eax_114 != 0)
                    PROC eax_115
                    eax_115, ecx_40, edx_42 = wglGetProcAddress("glClampColorARB")
                    data_3079844 = eax_115
                    eax_115.b = eax_115 == 0
                    ecx_40.b = eax_115.b == 0
                    data_307b231 = ecx_40.b
                
                int32_t var_10_21 = edi
                char const* const var_14_21 = "GL_ARB_compatibility"
                char eax_117
                int32_t ecx_41
                char* edx_43
                eax_117, ecx_41, edx_43 = sub_583a80(esi, edx_42, ecx_40)
                data_307b232 = eax_117
                int32_t var_18_9 = edi
                char const* const var_1c_9 = "GL_ARB_compressed_texture_pixel_storage"
                char eax_119
                int32_t ecx_42
                char* edx_44
                eax_119, ecx_42, edx_44 = sub_583a80(esi, edx_43, ecx_41)
                data_307b233 = eax_119
                int32_t var_20_4 = edi
                char const* const var_24_4 = "GL_ARB_conservative_depth"
                char eax_121
                int32_t ecx_43
                char* edx_45
                eax_121, ecx_43, edx_45 = sub_583a80(esi, edx_44, ecx_42)
                data_307b234 = eax_121
                int32_t var_28_3 = edi
                char const* const var_2c_3 = "GL_ARB_copy_buffer"
                char eax_123
                int32_t ecx_44
                char* edx_46
                eax_123, ecx_44, edx_46 = sub_583a80(esi, edx_45, ecx_43)
                bool cond:40 = data_307b5bc != 0
                data_307b235 = eax_123
                
                if (cond:40 || eax_123 != 0)
                    PROC eax_124
                    eax_124, ecx_44, edx_46 = wglGetProcAddress("glCopyBufferSubData")
                    data_3079848 = eax_124
                    eax_124.b = eax_124 == 0
                    edx_46.b = eax_124.b == 0
                    data_307b235 = edx_46.b
                
                int32_t var_10_22 = edi
                char const* const var_14_22 = "GL_ARB_debug_output"
                char eax_126
                int32_t ecx_45
                char* edx_47
                eax_126, ecx_45, edx_47 = sub_583a80(esi, edx_46, ecx_44)
                bool cond:41 = data_307b5bc != 0
                data_307b236 = eax_126
                
                if (cond:41 || eax_126 != 0)
                    bool eax_127
                    eax_127, ecx_45, edx_47 = sub_585b80()
                    data_307b236 = eax_127 == 0
                
                int32_t var_10_23 = edi
                char const* const var_14_23 = "GL_ARB_depth_buffer_float"
                char eax_129
                int32_t ecx_46
                char* edx_48
                eax_129, ecx_46, edx_48 = sub_583a80(esi, edx_47, ecx_45)
                data_307b237 = eax_129
                int32_t var_18_10 = edi
                char const* const var_1c_10 = "GL_ARB_depth_clamp"
                char eax_131
                int32_t ecx_47
                char* edx_49
                eax_131, ecx_47, edx_49 = sub_583a80(esi, edx_48, ecx_46)
                data_307b238 = eax_131
                int32_t var_20_5 = edi
                char const* const var_24_5 = "GL_ARB_depth_texture"
                char eax_133
                int32_t ecx_48
                char* edx_50
                eax_133, ecx_48, edx_50 = sub_583a80(esi, edx_49, ecx_47)
                data_307b239 = eax_133
                int32_t var_28_4 = edi
                char const* const var_2c_4 = "GL_ARB_draw_buffers"
                char eax_135
                int32_t ecx_49
                char* edx_51
                eax_135, ecx_49, edx_51 = sub_583a80(esi, edx_50, ecx_48)
                bool cond:43 = data_307b5bc != 0
                data_307b23a = eax_135
                
                if (cond:43 || eax_135 != 0)
                    PROC eax_136
                    eax_136, ecx_49, edx_51 = wglGetProcAddress("glDrawBuffersARB")
                    data_307985c = eax_136
                    eax_136.b = eax_136 == 0
                    ecx_49.b = eax_136.b == 0
                    data_307b23a = ecx_49.b
                
                int32_t var_10_24 = edi
                char const* const var_14_24 = "GL_ARB_draw_buffers_blend"
                char eax_138
                int32_t ecx_50
                char* edx_52
                eax_138, ecx_50, edx_52 = sub_583a80(esi, edx_51, ecx_49)
                bool cond:44 = data_307b5bc != 0
                data_307b23b = eax_138
                
                if (cond:44 || eax_138 != 0)
                    char eax_139
                    eax_139, ecx_50, edx_52 = sub_585bf0()
                    edx_52.b = eax_139 == 0
                    data_307b23b = edx_52.b
                
                int32_t var_10_25 = edi
                char const* const var_14_25 = "GL_ARB_draw_elements_base_vertex"
                char eax_141
                int32_t ecx_51
                char* edx_53
                eax_141, ecx_51, edx_53 = sub_583a80(esi, edx_52, ecx_50)
                bool cond:45 = data_307b5bc != 0
                data_307b23c = eax_141
                
                if (cond:45 || eax_141 != 0)
                    bool eax_142
                    eax_142, ecx_51, edx_53 = sub_585c60()
                    data_307b23c = eax_142 == 0
                
                int32_t var_10_26 = edi
                char const* const var_14_26 = "GL_ARB_draw_indirect"
                char eax_144
                int32_t ecx_52
                char* edx_54
                eax_144, ecx_52, edx_54 = sub_583a80(esi, edx_53, ecx_51)
                bool cond:46 = data_307b5bc != 0
                data_307b23d = eax_144
                
                if (cond:46 || eax_144 != 0)
                    char eax_145
                    eax_145, ecx_52, edx_54 = sub_585cd0()
                    ecx_52.b = eax_145 == 0
                    data_307b23d = ecx_52.b
                
                int32_t var_10_27 = edi
                char const* const var_14_27 = "GL_ARB_draw_instanced"
                char eax_147
                int32_t ecx_53
                char* edx_55
                eax_147, ecx_53, edx_55 = sub_583a80(esi, edx_54, ecx_52)
                data_307b23e = eax_147
                int32_t var_18_11 = edi
                char const* const var_1c_11 = "GL_ARB_explicit_attrib_location"
                char eax_149
                int32_t ecx_54
                char* edx_56
                eax_149, ecx_54, edx_56 = sub_583a80(esi, edx_55, ecx_53)
                data_307b23f = eax_149
                int32_t var_20_6 = edi
                char const* const var_24_6 = "GL_ARB_fragment_coord_conventions"
                char eax_151
                int32_t ecx_55
                char* edx_57
                eax_151, ecx_55, edx_57 = sub_583a80(esi, edx_56, ecx_54)
                data_307b240 = eax_151
                int32_t var_28_5 = edi
                char const* const var_2c_5 = "GL_ARB_fragment_program"
                char eax_153
                int32_t ecx_56
                char* edx_58
                eax_153, ecx_56, edx_58 = sub_583a80(esi, edx_57, ecx_55)
                data_307b241 = eax_153
                int32_t var_30_2 = edi
                char const* const var_34_2 = "GL_ARB_fragment_program_shadow"
                char eax_155
                int32_t ecx_57
                char* edx_59
                eax_155, ecx_57, edx_59 = sub_583a80(esi, edx_58, ecx_56)
                data_307b242 = eax_155
                int32_t var_38 = edi
                char const* const var_3c = "GL_ARB_fragment_shader"
                char eax_157
                int32_t ecx_58
                char* edx_60
                eax_157, ecx_58, edx_60 = sub_583a80(esi, edx_59, ecx_57)
                data_307b243 = eax_157
                int32_t var_40 = edi
                char const* const var_44 = "GL_ARB_framebuffer_object"
                char eax_159
                int32_t ecx_59
                char* edx_61
                eax_159, ecx_59, edx_61 = sub_583a80(esi, edx_60, ecx_58)
                bool cond:47 = data_307b5bc != 0
                data_307b244 = eax_159
                
                if (cond:47 || eax_159 != 0)
                    char eax_160
                    eax_160, ecx_59, edx_61 = sub_585d10()
                    edx_61.b = eax_160 == 0
                    data_307b244 = edx_61.b
                
                int32_t var_10_28 = edi
                char const* const var_14_28 = "GL_ARB_framebuffer_sRGB"
                char eax_162
                int32_t ecx_60
                char* edx_62
                eax_162, ecx_60, edx_62 = sub_583a80(esi, edx_61, ecx_59)
                data_307b245 = eax_162
                int32_t var_18_12 = edi
                char const* const var_1c_12 = "GL_ARB_geometry_shader4"
                char eax_164
                int32_t ecx_61
                char* edx_63
                eax_164, ecx_61, edx_63 = sub_583a80(esi, edx_62, ecx_60)
                bool cond:48 = data_307b5bc != 0
                data_307b246 = eax_164
                
                if (cond:48 || eax_164 != 0)
                    bool eax_165
                    eax_165, ecx_61, edx_63 = sub_585ee0()
                    data_307b246 = eax_165 == 0
                
                int32_t var_10_29 = edi
                char const* const var_14_29 = "GL_ARB_get_program_binary"
                char eax_167
                int32_t ecx_62
                char* edx_64
                eax_167, ecx_62, edx_64 = sub_583a80(esi, edx_63, ecx_61)
                bool cond:49 = data_307b5bc != 0
                data_307b247 = eax_167
                
                if (cond:49 || eax_167 != 0)
                    char eax_168
                    eax_168, ecx_62, edx_64 = sub_585f50()
                    ecx_62.b = eax_168 == 0
                    data_307b247 = ecx_62.b
                
                int32_t var_10_30 = edi
                char const* const var_14_30 = "GL_ARB_gpu_shader5"
                char eax_170
                int32_t ecx_63
                char* edx_65
                eax_170, ecx_63, edx_65 = sub_583a80(esi, edx_64, ecx_62)
                data_307b248 = eax_170
                int32_t var_18_13 = edi
                char const* const var_1c_13 = "GL_ARB_gpu_shader_fp64"
                char eax_172
                int32_t ecx_64
                char* edx_66
                eax_172, ecx_64, edx_66 = sub_583a80(esi, edx_65, ecx_63)
                bool cond:50 = data_307b5bc != 0
                data_307b249 = eax_172
                
                if (cond:50 || eax_172 != 0)
                    char eax_173
                    eax_173, ecx_64, edx_66 = sub_585fa0()
                    edx_66.b = eax_173 == 0
                    data_307b249 = edx_66.b
                
                int32_t var_10_31 = edi
                char const* const var_14_31 = "GL_ARB_half_float_pixel"
                char eax_175
                int32_t ecx_65
                char* edx_67
                eax_175, ecx_65, edx_67 = sub_583a80(esi, edx_66, ecx_64)
                data_307b24a = eax_175
                int32_t var_18_14 = edi
                char const* const var_1c_14 = "GL_ARB_half_float_vertex"
                char eax_177
                int32_t ecx_66
                char* edx_68
                eax_177, ecx_66, edx_68 = sub_583a80(esi, edx_67, ecx_65)
                data_307b24b = eax_177
                int32_t var_20_7 = edi
                char const* const var_24_7 = "GL_ARB_imaging"
                char eax_179
                int32_t ecx_67
                char* edx_69
                eax_179, ecx_67, edx_69 = sub_583a80(esi, edx_68, ecx_66)
                bool cond:51 = data_307b5bc != 0
                data_307b24c = eax_179
                
                if (cond:51 || eax_179 != 0)
                    bool eax_180
                    eax_180, ecx_67, edx_69 = sub_5862b0()
                    data_307b24c = eax_180 == 0
                
                int32_t var_10_32 = edi
                char const* const var_14_32 = "GL_ARB_instanced_arrays"
                char eax_182
                int32_t ecx_68
                char* edx_70
                eax_182, ecx_68, edx_70 = sub_583a80(esi, edx_69, ecx_67)
                bool cond:52 = data_307b5bc != 0
                data_307b24d = eax_182
                
                if (cond:52 || eax_182 != 0)
                    char eax_183
                    eax_183, ecx_68, edx_70 = sub_5865a0()
                    ecx_68.b = eax_183 == 0
                    data_307b24d = ecx_68.b
                
                int32_t var_10_33 = edi
                char const* const var_14_33 = "GL_ARB_internalformat_query"
                char eax_185
                int32_t ecx_69
                char* edx_71
                eax_185, ecx_69, edx_71 = sub_583a80(esi, edx_70, ecx_68)
                bool cond:54 = data_307b5bc != 0
                data_307b24e = eax_185
                
                if (cond:54 || eax_185 != 0)
                    PROC eax_186
                    eax_186, ecx_69, edx_71 = wglGetProcAddress("glGetInternalformativ")
                    data_3079a0c = eax_186
                    eax_186.b = eax_186 == 0
                    edx_71.b = eax_186.b == 0
                    data_307b24e = edx_71.b
                
                int32_t var_10_34 = edi
                char const* const var_14_34 = "GL_ARB_map_buffer_alignment"
                char eax_188
                int32_t ecx_70
                char* edx_72
                eax_188, ecx_70, edx_72 = sub_583a80(esi, edx_71, ecx_69)
                data_307b24f = eax_188
                int32_t var_18_15 = edi
                char const* const var_1c_15 = "GL_ARB_map_buffer_range"
                char eax_190
                int32_t ecx_71
                char* edx_73
                eax_190, ecx_71, edx_73 = sub_583a80(esi, edx_72, ecx_70)
                bool cond:55 = data_307b5bc != 0
                data_307b250 = eax_190
                
                if (cond:55 || eax_190 != 0)
                    bool eax_191
                    eax_191, ecx_71, edx_73 = sub_5865f0()
                    data_307b250 = eax_191 == 0
                
                int32_t var_10_35 = edi
                char const* const var_14_35 = "GL_ARB_matrix_palette"
                char eax_193
                int32_t ecx_72
                char* edx_74
                eax_193, ecx_72, edx_74 = sub_583a80(esi, edx_73, ecx_71)
                bool cond:56 = data_307b5bc != 0
                data_307b251 = eax_193
                
                if (cond:56 || eax_193 != 0)
                    char eax_194
                    eax_194, ecx_72, edx_74 = sub_586630()
                    ecx_72.b = eax_194 == 0
                    data_307b251 = ecx_72.b
                
                int32_t var_10_36 = edi
                char const* const var_14_36 = "GL_ARB_multisample"
                char eax_196
                int32_t ecx_73
                char* edx_75
                eax_196, ecx_73, edx_75 = sub_583a80(esi, edx_74, ecx_72)
                bool cond:58 = data_307b5bc != 0
                data_307b252 = eax_196
                
                if (cond:58 || eax_196 != 0)
                    PROC eax_197
                    eax_197, ecx_73, edx_75 = wglGetProcAddress("glSampleCoverageARB")
                    data_3079a2c = eax_197
                    eax_197.b = eax_197 == 0
                    edx_75.b = eax_197.b == 0
                    data_307b252 = edx_75.b
                
                int32_t var_10_37 = edi
                char const* const var_14_37 = "GL_ARB_multitexture"
                char eax_199
                int32_t ecx_74
                char* edx_76
                eax_199, ecx_74, edx_76 = sub_583a80(esi, edx_75, ecx_73)
                bool cond:59 = data_307b5bc != 0
                data_307b253 = eax_199
                
                if (cond:59 || eax_199 != 0)
                    bool eax_200
                    eax_200, ecx_74, edx_76 = sub_5866b0()
                    data_307b253 = eax_200 == 0
                
                int32_t var_10_38 = edi
                char const* const var_14_38 = "GL_ARB_occlusion_query"
                char eax_202
                int32_t ecx_75
                char* edx_77
                eax_202, ecx_75, edx_77 = sub_583a80(esi, edx_76, ecx_74)
                bool cond:60 = data_307b5bc != 0
                data_307b254 = eax_202
                
                if (cond:60 || eax_202 != 0)
                    char eax_203
                    eax_203, ecx_75, edx_77 = sub_5869b0()
                    ecx_75.b = eax_203 == 0
                    data_307b254 = ecx_75.b
                
                int32_t var_10_39 = edi
                char const* const var_14_39 = "GL_ARB_occlusion_query2"
                char eax_205
                int32_t ecx_76
                char* edx_78
                eax_205, ecx_76, edx_78 = sub_583a80(esi, edx_77, ecx_75)
                data_307b255 = eax_205
                int32_t var_18_16 = edi
                char const* const var_1c_16 = "GL_ARB_pixel_buffer_object"
                char eax_207
                int32_t ecx_77
                char* edx_79
                eax_207, ecx_77, edx_79 = sub_583a80(esi, edx_78, ecx_76)
                data_307b256 = eax_207
                int32_t var_20_8 = edi
                char const* const var_24_8 = "GL_ARB_point_parameters"
                char eax_209
                int32_t ecx_78
                char* edx_80
                eax_209, ecx_78, edx_80 = sub_583a80(esi, edx_79, ecx_77)
                bool cond:61 = data_307b5bc != 0
                data_307b257 = eax_209
                
                if (cond:61 || eax_209 != 0)
                    char eax_210
                    eax_210, ecx_78, edx_80 = sub_586a70()
                    edx_80.b = eax_210 == 0
                    data_307b257 = edx_80.b
                
                int32_t var_10_40 = edi
                char const* const var_14_40 = "GL_ARB_point_sprite"
                char eax_212
                int32_t ecx_79
                char* edx_81
                eax_212, ecx_79, edx_81 = sub_583a80(esi, edx_80, ecx_78)
                data_307b258 = eax_212
                int32_t var_18_17 = edi
                char const* const var_1c_17 = "GL_ARB_provoking_vertex"
                char eax_214
                int32_t ecx_80
                char* edx_82
                eax_214, ecx_80, edx_82 = sub_583a80(esi, edx_81, ecx_79)
                bool cond:63 = data_307b5bc != 0
                data_307b259 = eax_214
                
                if (cond:63 || eax_214 != 0)
                    PROC eax_215
                    eax_215, ecx_80, edx_82 = wglGetProcAddress("glProvokingVertex")
                    data_3079ae0 = eax_215
                    eax_215.b = eax_215 == 0
                    eax_215.b = eax_215.b == 0
                    data_307b259 = eax_215.b
                
                int32_t var_10_41 = edi
                char const* const var_14_41 = "GL_ARB_robustness"
                char eax_217
                int32_t ecx_81
                char* edx_83
                eax_217, ecx_81, edx_83 = sub_583a80(esi, edx_82, ecx_80)
                bool cond:64 = data_307b5bc != 0
                data_307b25a = eax_217
                
                if (cond:64 || eax_217 != 0)
                    char eax_218
                    eax_218, ecx_81, edx_83 = sub_586ab0()
                    ecx_81.b = eax_218 == 0
                    data_307b25a = ecx_81.b
                
                int32_t var_10_42 = edi
                char const* const var_14_42 = "GL_ARB_sample_shading"
                char eax_220
                int32_t ecx_82
                char* edx_84
                eax_220, ecx_82, edx_84 = sub_583a80(esi, edx_83, ecx_81)
                bool cond:66 = data_307b5bc != 0
                data_307b25b = eax_220
                
                if (cond:66 || eax_220 != 0)
                    PROC eax_221
                    eax_221, ecx_82, edx_84 = wglGetProcAddress("glMinSampleShadingARB")
                    data_3079b34 = eax_221
                    eax_221.b = eax_221 == 0
                    edx_84.b = eax_221.b == 0
                    data_307b25b = edx_84.b
                
                int32_t var_10_43 = edi
                char const* const var_14_43 = "GL_ARB_sampler_objects"
                char eax_223
                int32_t ecx_83
                char* edx_85
                eax_223, ecx_83, edx_85 = sub_583a80(esi, edx_84, ecx_82)
                bool cond:67 = data_307b5bc != 0
                data_307b25c = eax_223
                
                if (cond:67 || eax_223 != 0)
                    bool eax_224
                    eax_224, ecx_83, edx_85 = sub_586c80()
                    data_307b25c = eax_224 == 0
                
                int32_t var_10_44 = edi
                char const* const var_14_44 = "GL_ARB_seamless_cube_map"
                char eax_226
                int32_t ecx_84
                char* edx_86
                eax_226, ecx_84, edx_86 = sub_583a80(esi, edx_85, ecx_83)
                data_307b25d = eax_226
                int32_t var_18_18 = edi
                char const* const var_1c_18 = "GL_ARB_separate_shader_objects"
                char eax_228
                int32_t ecx_85
                char* edx_87
                eax_228, ecx_85, edx_87 = sub_583a80(esi, edx_86, ecx_84)
                bool cond:68 = data_307b5bc != 0
                data_307b25e = eax_228
                
                if (cond:68 || eax_228 != 0)
                    char eax_229
                    eax_229, ecx_85, edx_87 = sub_586dc0()
                    ecx_85.b = eax_229 == 0
                    data_307b25e = ecx_85.b
                
                int32_t var_10_45 = edi
                char const* const var_14_45 = "GL_ARB_shader_atomic_counters"
                char eax_231
                int32_t ecx_86
                char* edx_88
                eax_231, ecx_86, edx_88 = sub_583a80(esi, edx_87, ecx_85)
                bool cond:70 = data_307b5bc != 0
                data_307b25f = eax_231
                
                if (cond:70 || eax_231 != 0)
                    PROC eax_232
                    eax_232, ecx_86, edx_88 = wglGetProcAddress("glGetActiveAtomicCounterBufferiv")
                    data_3079c60 = eax_232
                    eax_232.b = eax_232 == 0
                    edx_88.b = eax_232.b == 0
                    data_307b25f = edx_88.b
                
                int32_t var_10_46 = edi
                char const* const var_14_46 = "GL_ARB_shader_bit_encoding"
                char eax_234
                int32_t ecx_87
                char* edx_89
                eax_234, ecx_87, edx_89 = sub_583a80(esi, edx_88, ecx_86)
                data_307b260 = eax_234
                int32_t var_18_19 = edi
                char const* const var_1c_19 = "GL_ARB_shader_image_load_store"
                char eax_236
                int32_t ecx_88
                char* edx_90
                eax_236, ecx_88, edx_90 = sub_583a80(esi, edx_89, ecx_87)
                bool cond:71 = data_307b5bc != 0
                data_307b261 = eax_236
                
                if (cond:71 || eax_236 != 0)
                    bool eax_237
                    eax_237, ecx_88, edx_90 = sub_587300()
                    data_307b261 = eax_237 == 0
                
                int32_t var_10_47 = edi
                char const* const var_14_47 = "GL_ARB_shader_objects"
                char eax_239
                int32_t ecx_89
                char* edx_91
                eax_239, ecx_89, edx_91 = sub_583a80(esi, edx_90, ecx_88)
                bool cond:72 = data_307b5bc != 0
                data_307b262 = eax_239
                
                if (cond:72 || eax_239 != 0)
                    char eax_240
                    eax_240, ecx_89, edx_91 = sub_587340()
                    ecx_89.b = eax_240 == 0
                    data_307b262 = ecx_89.b
                
                int32_t var_10_48 = edi
                char const* const var_14_48 = "GL_ARB_shader_precision"
                char eax_242
                int32_t ecx_90
                char* edx_92
                eax_242, ecx_90, edx_92 = sub_583a80(esi, edx_91, ecx_89)
                data_307b263 = eax_242
                int32_t var_18_20 = edi
                char const* const var_1c_20 = "GL_ARB_shader_stencil_export"
                char eax_244
                int32_t ecx_91
                char* edx_93
                eax_244, ecx_91, edx_93 = sub_583a80(esi, edx_92, ecx_90)
                data_307b264 = eax_244
                int32_t var_20_9 = edi
                char const* const var_24_9 = "GL_ARB_shader_subroutine"
                char eax_246
                int32_t ecx_92
                char* edx_94
                eax_246, ecx_92, edx_94 = sub_583a80(esi, edx_93, ecx_91)
                bool cond:73 = data_307b5bc != 0
                data_307b265 = eax_246
                
                if (cond:73 || eax_246 != 0)
                    char eax_247
                    eax_247, ecx_92, edx_94 = sub_5876b0()
                    edx_94.b = eax_247 == 0
                    data_307b265 = edx_94.b
                
                int32_t var_10_49 = edi
                char const* const var_14_49 = "GL_ARB_shader_texture_lod"
                char eax_249
                int32_t ecx_93
                char* edx_95
                eax_249, ecx_93, edx_95 = sub_583a80(esi, edx_94, ecx_92)
                data_307b266 = eax_249
                int32_t var_18_21 = edi
                char const* const var_1c_21 = "GL_ARB_shading_language_100"
                char eax_251
                int32_t ecx_94
                char* edx_96
                eax_251, ecx_94, edx_96 = sub_583a80(esi, edx_95, ecx_93)
                data_307b267 = eax_251
                int32_t var_20_10 = edi
                char const* const var_24_10 = "GL_ARB_shading_language_420pack"
                char eax_253
                int32_t ecx_95
                char* edx_97
                eax_253, ecx_95, edx_97 = sub_583a80(esi, edx_96, ecx_94)
                data_307b268 = eax_253
                int32_t var_28_6 = edi
                char const* const var_2c_6 = "GL_ARB_shading_language_include"
                char eax_255
                int32_t ecx_96
                char* edx_98
                eax_255, ecx_96, edx_98 = sub_583a80(esi, edx_97, ecx_95)
                bool cond:74 = data_307b5bc != 0
                data_307b269 = eax_255
                
                if (cond:74 || eax_255 != 0)
                    bool eax_256
                    eax_256, ecx_96, edx_98 = sub_587770()
                    data_307b269 = eax_256 == 0
                
                int32_t var_10_50 = edi
                char const* const var_14_50 = "GL_ARB_shading_language_packing"
                char eax_258
                int32_t ecx_97
                char* edx_99
                eax_258, ecx_97, edx_99 = sub_583a80(esi, edx_98, ecx_96)
                data_307b26a = eax_258
                int32_t var_18_22 = edi
                char const* const var_1c_22 = "GL_ARB_shadow"
                char eax_260
                int32_t ecx_98
                char* edx_100
                eax_260, ecx_98, edx_100 = sub_583a80(esi, edx_99, ecx_97)
                data_307b26b = eax_260
                int32_t var_20_11 = edi
                char const* const var_24_11 = "GL_ARB_shadow_ambient"
                char eax_262
                int32_t ecx_99
                char* edx_101
                eax_262, ecx_99, edx_101 = sub_583a80(esi, edx_100, ecx_98)
                data_307b26c = eax_262
                int32_t var_28_7 = edi
                char const* const var_2c_7 = "GL_ARB_sync"
                char eax_264
                int32_t ecx_100
                char* edx_102
                eax_264, ecx_100, edx_102 = sub_583a80(esi, edx_101, ecx_99)
                bool cond:75 = data_307b5bc != 0
                data_307b26d = eax_264
                
                if (cond:75 || eax_264 != 0)
                    char eax_265
                    eax_265, ecx_100, edx_102 = sub_587800()
                    ecx_100.b = eax_265 == 0
                    data_307b26d = ecx_100.b
                
                int32_t var_10_51 = edi
                char const* const var_14_51 = "GL_ARB_tessellation_shader"
                char eax_267
                int32_t ecx_101
                char* edx_103
                eax_267, ecx_101, edx_103 = sub_583a80(esi, edx_102, ecx_100)
                bool cond:76 = data_307b5bc != 0
                data_307b26e = eax_267
                
                if (cond:76 || eax_267 != 0)
                    char eax_268
                    eax_268, ecx_101, edx_103 = sub_5878b0()
                    edx_103.b = eax_268 == 0
                    data_307b26e = edx_103.b
                
                int32_t var_10_52 = edi
                char const* const var_14_52 = "GL_ARB_texture_border_clamp"
                char eax_270
                int32_t ecx_102
                char* edx_104
                eax_270, ecx_102, edx_104 = sub_583a80(esi, edx_103, ecx_101)
                data_307b26f = eax_270
                int32_t var_18_23 = edi
                char const* const var_1c_23 = "GL_ARB_texture_buffer_object"
                char eax_272
                int32_t ecx_103
                char* edx_105
                eax_272, ecx_103, edx_105 = sub_583a80(esi, edx_104, ecx_102)
                bool cond:78 = data_307b5bc != 0
                data_307b270 = eax_272
                
                if (cond:78 || eax_272 != 0)
                    PROC eax_273
                    eax_273, ecx_103, edx_105 = wglGetProcAddress("glTexBufferARB")
                    data_3079d64 = eax_273
                    eax_273.b = eax_273 == 0
                    eax_273.b = eax_273.b == 0
                    data_307b270 = eax_273.b
                
                int32_t var_10_53 = edi
                char const* const var_14_53 = "GL_ARB_texture_buffer_object_rgb32"
                char eax_275
                int32_t ecx_104
                char* edx_106
                eax_275, ecx_104, edx_106 = sub_583a80(esi, edx_105, ecx_103)
                data_307b271 = eax_275
                int32_t var_18_24 = edi
                char const* const var_1c_24 = "GL_ARB_texture_compression"
                char eax_277
                int32_t ecx_105
                char* edx_107
                eax_277, ecx_105, edx_107 = sub_583a80(esi, edx_106, ecx_104)
                bool cond:79 = data_307b5bc != 0
                data_307b272 = eax_277
                
                if (cond:79 || eax_277 != 0)
                    char eax_278
                    eax_278, ecx_105, edx_107 = sub_5878f0()
                    ecx_105.b = eax_278 == 0
                    data_307b272 = ecx_105.b
                
                int32_t var_10_54 = edi
                char const* const var_14_54 = "GL_ARB_texture_compression_bptc"
                char eax_280
                int32_t ecx_106
                char* edx_108
                eax_280, ecx_106, edx_108 = sub_583a80(esi, edx_107, ecx_105)
                data_307b273 = eax_280
                int32_t var_18_25 = edi
                char const* const var_1c_25 = "GL_ARB_texture_compression_rgtc"
                char eax_282
                int32_t ecx_107
                char* edx_109
                eax_282, ecx_107, edx_109 = sub_583a80(esi, edx_108, ecx_106)
                data_307b274 = eax_282
                int32_t var_20_12 = edi
                char const* const var_24_12 = "GL_ARB_texture_cube_map"
                char eax_284
                int32_t ecx_108
                char* edx_110
                eax_284, ecx_108, edx_110 = sub_583a80(esi, edx_109, ecx_107)
                data_307b275 = eax_284
                int32_t var_28_8 = edi
                char const* const var_2c_8 = "GL_ARB_texture_cube_map_array"
                char eax_286
                int32_t ecx_109
                char* edx_111
                eax_286, ecx_109, edx_111 = sub_583a80(esi, edx_110, ecx_108)
                data_307b276 = eax_286
                int32_t var_30_3 = edi
                char const* const var_34_3 = "GL_ARB_texture_env_add"
                char eax_288
                int32_t ecx_110
                char* edx_112
                eax_288, ecx_110, edx_112 = sub_583a80(esi, edx_111, ecx_109)
                data_307b277 = eax_288
                int32_t var_38_1 = edi
                char const* const var_3c_1 = "GL_ARB_texture_env_combine"
                char eax_290
                int32_t ecx_111
                char* edx_113
                eax_290, ecx_111, edx_113 = sub_583a80(esi, edx_112, ecx_110)
                data_307b278 = eax_290
                int32_t var_40_1 = edi
                char const* const var_44_1 = "GL_ARB_texture_env_crossbar"
                char eax_292
                int32_t ecx_112
                char* edx_114
                eax_292, ecx_112, edx_114 = sub_583a80(esi, edx_113, ecx_111)
                data_307b279 = eax_292
                int32_t var_48 = edi
                char const* const var_4c = "GL_ARB_texture_env_dot3"
                char eax_294
                int32_t ecx_113
                char* edx_115
                eax_294, ecx_113, edx_115 = sub_583a80(esi, edx_114, ecx_112)
                data_307b27a = eax_294
                int32_t var_10_55 = edi
                char const* const var_14_55 = "GL_ARB_texture_float"
                char eax_296
                int32_t ecx_114
                char* edx_116
                eax_296, ecx_114, edx_116 = sub_583a80(esi, edx_115, ecx_113)
                data_307b27b = eax_296
                int32_t var_18_26 = edi
                char const* const var_1c_26 = "GL_ARB_texture_gather"
                char eax_298
                int32_t ecx_115
                char* edx_117
                eax_298, ecx_115, edx_117 = sub_583a80(esi, edx_116, ecx_114)
                data_307b27c = eax_298
                int32_t var_20_13 = edi
                char const* const var_24_13 = "GL_ARB_texture_mirrored_repeat"
                char eax_300
                int32_t ecx_116
                char* edx_118
                eax_300, ecx_116, edx_118 = sub_583a80(esi, edx_117, ecx_115)
                data_307b27d = eax_300
                int32_t var_28_9 = edi
                char const* const var_2c_9 = "GL_ARB_texture_multisample"
                char eax_302
                int32_t ecx_117
                char* edx_119
                eax_302, ecx_117, edx_119 = sub_583a80(esi, edx_118, ecx_116)
                bool cond:80 = data_307b5bc != 0
                data_307b27e = eax_302
                
                if (cond:80 || eax_302 != 0)
                    char eax_303
                    eax_303, ecx_117, edx_119 = sub_5879a0()
                    edx_119.b = eax_303 == 0
                    data_307b27e = edx_119.b
                
                int32_t var_10_56 = edi
                char const* const var_14_56 = "GL_ARB_texture_non_power_of_two"
                char eax_305
                int32_t ecx_118
                char* edx_120
                eax_305, ecx_118, edx_120 = sub_583a80(esi, edx_119, ecx_117)
                data_307b27f = eax_305
                int32_t var_18_27 = edi
                char const* const var_1c_27 = "GL_ARB_texture_query_lod"
                char eax_307
                int32_t ecx_119
                char* edx_121
                eax_307, ecx_119, edx_121 = sub_583a80(esi, edx_120, ecx_118)
                data_307b280 = eax_307
                int32_t var_20_14 = edi
                char const* const var_24_14 = "GL_ARB_texture_rectangle"
                char eax_309
                int32_t ecx_120
                char* edx_122
                eax_309, ecx_120, edx_122 = sub_583a80(esi, edx_121, ecx_119)
                data_307b281 = eax_309
                int32_t var_28_10 = edi
                char const* const var_2c_10 = "GL_ARB_texture_rg"
                char eax_311
                int32_t ecx_121
                char* edx_123
                eax_311, ecx_121, edx_123 = sub_583a80(esi, edx_122, ecx_120)
                data_307b282 = eax_311
                int32_t var_30_4 = edi
                char const* const var_34_4 = "GL_ARB_texture_rgb10_a2ui"
                char eax_313
                int32_t ecx_122
                char* edx_124
                eax_313, ecx_122, edx_124 = sub_583a80(esi, edx_123, ecx_121)
                data_307b283 = eax_313
                int32_t var_38_2 = edi
                char const* const var_3c_2 = "GL_ARB_texture_storage"
                char eax_315
                int32_t ecx_123
                char* edx_125
                eax_315, ecx_123, edx_125 = sub_583a80(esi, edx_124, ecx_122)
                bool cond:81 = data_307b5bc != 0
                data_307b284 = eax_315
                
                if (cond:81 || eax_315 != 0)
                    bool eax_316
                    eax_316, ecx_123, edx_125 = sub_587a10()
                    data_307b284 = eax_316 == 0
                
                int32_t var_10_57 = edi
                char const* const var_14_57 = "GL_ARB_texture_swizzle"
                char eax_318
                int32_t ecx_124
                char* edx_126
                eax_318, ecx_124, edx_126 = sub_583a80(esi, edx_125, ecx_123)
                data_307b285 = eax_318
                int32_t var_18_28 = edi
                char const* const var_1c_28 = "GL_ARB_timer_query"
                char eax_320
                int32_t ecx_125
                char* edx_127
                eax_320, ecx_125, edx_127 = sub_583a80(esi, edx_126, ecx_124)
                bool cond:82 = data_307b5bc != 0
                data_307b286 = eax_320
                
                if (cond:82 || eax_320 != 0)
                    char eax_321
                    eax_321, ecx_125, edx_127 = sub_587aa0()
                    ecx_125.b = eax_321 == 0
                    data_307b286 = ecx_125.b
                
                int32_t var_10_58 = edi
                char const* const var_14_58 = "GL_ARB_transform_feedback2"
                char eax_323
                int32_t ecx_126
                char* edx_128
                eax_323, ecx_126, edx_128 = sub_583a80(esi, edx_127, ecx_125)
                bool cond:83 = data_307b5bc != 0
                data_307b287 = eax_323
                
                if (cond:83 || eax_323 != 0)
                    char eax_324
                    eax_324, ecx_126, edx_128 = sub_587af0()
                    edx_128.b = eax_324 == 0
                    data_307b287 = edx_128.b
                
                int32_t var_10_59 = edi
                char const* const var_14_59 = "GL_ARB_transform_feedback3"
                char eax_326
                int32_t ecx_127
                char* edx_129
                eax_326, ecx_127, edx_129 = sub_583a80(esi, edx_128, ecx_126)
                bool cond:84 = data_307b5bc != 0
                data_307b288 = eax_326
                
                if (cond:84 || eax_326 != 0)
                    bool eax_327
                    eax_327, ecx_127, edx_129 = sub_587ba0()
                    data_307b288 = eax_327 == 0
                
                int32_t var_10_60 = edi
                char const* const var_14_60 = "GL_ARB_transform_feedback_instanced"
                char eax_329
                int32_t ecx_128
                char* edx_130
                eax_329, ecx_128, edx_130 = sub_583a80(esi, edx_129, ecx_127)
                bool cond:85 = data_307b5bc != 0
                data_307b289 = eax_329
                
                if (cond:85 || eax_329 != 0)
                    char eax_330
                    eax_330, ecx_128, edx_130 = sub_587c10()
                    ecx_128.b = eax_330 == 0
                    data_307b289 = ecx_128.b
                
                int32_t var_10_61 = edi
                char const* const var_14_61 = "GL_ARB_transpose_matrix"
                char eax_332
                int32_t ecx_129
                char* edx_131
                eax_332, ecx_129, edx_131 = sub_583a80(esi, edx_130, ecx_128)
                bool cond:86 = data_307b5bc != 0
                data_307b28a = eax_332
                
                if (cond:86 || eax_332 != 0)
                    char eax_333
                    eax_333, ecx_129, edx_131 = sub_587c50()
                    edx_131.b = eax_333 == 0
                    data_307b28a = edx_131.b
                
                int32_t var_10_62 = edi
                char const* const var_14_62 = "GL_ARB_uniform_buffer_object"
                char eax_335
                int32_t ecx_130
                char* edx_132
                eax_335, ecx_130, edx_132 = sub_583a80(esi, edx_131, ecx_129)
                bool cond:87 = data_307b5bc != 0
                data_307b28b = eax_335
                
                if (cond:87 || eax_335 != 0)
                    bool eax_336
                    eax_336, ecx_130, edx_132 = sub_587cc0()
                    data_307b28b = eax_336 == 0
                
                int32_t var_10_63 = edi
                char const* const var_14_63 = "GL_ARB_vertex_array_bgra"
                char eax_338
                int32_t ecx_131
                char* edx_133
                eax_338, ecx_131, edx_133 = sub_583a80(esi, edx_132, ecx_130)
                data_307b28c = eax_338
                int32_t var_18_29 = edi
                char const* const var_1c_29 = "GL_ARB_vertex_array_object"
                char eax_340
                int32_t ecx_132
                char* edx_134
                eax_340, ecx_132, edx_134 = sub_583a80(esi, edx_133, ecx_131)
                bool cond:88 = data_307b5bc != 0
                data_307b28d = eax_340
                
                if (cond:88 || eax_340 != 0)
                    char eax_341
                    eax_341, ecx_132, edx_134 = sub_587db0()
                    ecx_132.b = eax_341 == 0
                    data_307b28d = ecx_132.b
                
                int32_t var_10_64 = edi
                char const* const var_14_64 = "GL_ARB_vertex_attrib_64bit"
                char eax_343
                int32_t ecx_133
                char* edx_135
                eax_343, ecx_133, edx_135 = sub_583a80(esi, edx_134, ecx_132)
                bool cond:89 = data_307b5bc != 0
                data_307b28e = eax_343
                
                if (cond:89 || eax_343 != 0)
                    char eax_344
                    eax_344, ecx_133, edx_135 = sub_587e20()
                    edx_135.b = eax_344 == 0
                    data_307b28e = edx_135.b
                
                int32_t var_10_65 = edi
                char const* const var_14_65 = "GL_ARB_vertex_blend"
                char eax_346
                int32_t ecx_134
                char* edx_136
                eax_346, ecx_134, edx_136 = sub_583a80(esi, edx_135, ecx_133)
                bool cond:90 = data_307b5bc != 0
                data_307b28f = eax_346
                
                if (cond:90 || eax_346 != 0)
                    bool eax_347
                    eax_347, ecx_134, edx_136 = sub_587f10()
                    data_307b28f = eax_347 == 0
                
                int32_t var_10_66 = edi
                char const* const var_14_66 = "GL_ARB_vertex_buffer_object"
                char eax_349
                int32_t ecx_135
                char* edx_137
                eax_349, ecx_135, edx_137 = sub_583a80(esi, edx_136, ecx_134)
                bool cond:91 = data_307b5bc != 0
                data_307b290 = eax_349
                
                if (cond:91 || eax_349 != 0)
                    char eax_350
                    eax_350, ecx_135, edx_137 = sub_588000()
                    ecx_135.b = eax_350 == 0
                    data_307b290 = ecx_135.b
                
                int32_t var_10_67 = edi
                char const* const var_14_67 = "GL_ARB_vertex_program"
                char eax_352
                int32_t ecx_136
                char* edx_138
                eax_352, ecx_136, edx_138 = sub_583a80(esi, edx_137, ecx_135)
                bool cond:92 = data_307b5bc != 0
                data_307b291 = eax_352
                
                if (cond:92 || eax_352 != 0)
                    char eax_353
                    eax_353, ecx_136, edx_138 = sub_588100()
                    edx_138.b = eax_353 == 0
                    data_307b291 = edx_138.b
                
                int32_t var_10_68 = edi
                char const* const var_14_68 = "GL_ARB_vertex_shader"
                char eax_355
                int32_t ecx_137
                char* edx_139
                eax_355, ecx_137, edx_139 = sub_583a80(esi, edx_138, ecx_136)
                bool cond:93 = data_307b5bc != 0
                data_307b292 = eax_355
                
                if (cond:93 || eax_355 != 0)
                    bool eax_356
                    eax_356, ecx_137, edx_139 = sub_588660()
                    data_307b292 = eax_356 == 0
                
                int32_t var_10_69 = edi
                char const* const var_14_69 = "GL_ARB_vertex_type_2_10_10_10_rev"
                char eax_358
                int32_t ecx_138
                char* edx_140
                eax_358, ecx_138, edx_140 = sub_583a80(esi, edx_139, ecx_137)
                bool cond:94 = data_307b5bc != 0
                data_307b293 = eax_358
                
                if (cond:94 || eax_358 != 0)
                    char eax_359
                    eax_359, ecx_138, edx_140 = sub_5886b0()
                    ecx_138.b = eax_359 == 0
                    data_307b293 = ecx_138.b
                
                int32_t var_10_70 = edi
                char const* const var_14_70 = "GL_ARB_viewport_array"
                char eax_361
                int32_t ecx_139
                char* edx_141
                eax_361, ecx_139, edx_141 = sub_583a80(esi, edx_140, ecx_138)
                bool cond:95 = data_307b5bc != 0
                data_307b294 = eax_361
                
                if (cond:95 || eax_361 != 0)
                    char eax_362
                    eax_362, ecx_139, edx_141 = sub_588a00()
                    edx_141.b = eax_362 == 0
                    data_307b294 = edx_141.b
                
                int32_t var_10_71 = edi
                char const* const var_14_71 = "GL_ARB_window_pos"
                char eax_364
                int32_t ecx_140
                char* edx_142
                eax_364, ecx_140, edx_142 = sub_583a80(esi, edx_141, ecx_139)
                bool cond:96 = data_307b5bc != 0
                data_307b295 = eax_364
                
                if (cond:96 || eax_364 != 0)
                    bool eax_365
                    eax_365, ecx_140, edx_142 = sub_588af0()
                    data_307b295 = eax_365 == 0
                
                int32_t var_10_72 = edi
                char const* const var_14_72 = "GL_ATIX_point_sprites"
                char eax_367
                int32_t ecx_141
                char* edx_143
                eax_367, ecx_141, edx_143 = sub_583a80(esi, edx_142, ecx_140)
                data_307b296 = eax_367
                int32_t var_18_30 = edi
                char const* const var_1c_30 = "GL_ATIX_texture_env_combine3"
                char eax_369
                int32_t ecx_142
                char* edx_144
                eax_369, ecx_142, edx_144 = sub_583a80(esi, edx_143, ecx_141)
                data_307b297 = eax_369
                int32_t var_20_15 = edi
                char const* const var_24_15 = "GL_ATIX_texture_env_route"
                char eax_371
                int32_t ecx_143
                char* edx_145
                eax_371, ecx_143, edx_145 = sub_583a80(esi, edx_144, ecx_142)
                data_307b298 = eax_371
                int32_t var_28_11 = edi
                char const* const var_2c_11 = "GL_ATIX_vertex_shader_output_point_size"
                char eax_373
                int32_t ecx_144
                char* edx_146
                eax_373, ecx_144, edx_146 = sub_583a80(esi, edx_145, ecx_143)
                data_307b299 = eax_373
                int32_t var_30_5 = edi
                char const* const var_34_5 = "GL_ATI_draw_buffers"
                char eax_375
                int32_t ecx_145
                char* edx_147
                eax_375, ecx_145, edx_147 = sub_583a80(esi, edx_146, ecx_144)
                bool cond:98 = data_307b5bc != 0
                data_307b29a = eax_375
                
                if (cond:98 || eax_375 != 0)
                    PROC eax_376
                    eax_376, ecx_145, edx_147 = wglGetProcAddress("glDrawBuffersATI")
                    data_307a0b4 = eax_376
                    eax_376.b = eax_376 == 0
                    ecx_145.b = eax_376.b == 0
                    data_307b29a = ecx_145.b
                
                int32_t var_10_73 = edi
                char const* const var_14_73 = "GL_ATI_element_array"
                char eax_378
                int32_t ecx_146
                char* edx_148
                eax_378, ecx_146, edx_148 = sub_583a80(esi, edx_147, ecx_145)
                bool cond:99 = data_307b5bc != 0
                data_307b29b = eax_378
                
                if (cond:99 || eax_378 != 0)
                    char eax_379
                    eax_379, ecx_146, edx_148 = sub_588c60()
                    edx_148.b = eax_379 == 0
                    data_307b29b = edx_148.b
                
                int32_t var_10_74 = edi
                char const* const var_14_74 = "GL_ATI_envmap_bumpmap"
                char eax_381
                int32_t ecx_147
                char* edx_149
                eax_381, ecx_147, edx_149 = sub_583a80(esi, edx_148, ecx_146)
                bool cond:100 = data_307b5bc != 0
                data_307b29c = eax_381
                
                if (cond:100 || eax_381 != 0)
                    bool eax_382
                    eax_382, ecx_147, edx_149 = sub_588cb0()
                    data_307b29c = eax_382 == 0
                
                int32_t var_10_75 = edi
                char const* const var_14_75 = "GL_ATI_fragment_shader"
                char eax_384
                int32_t ecx_148
                char* edx_150
                eax_384, ecx_148, edx_150 = sub_583a80(esi, edx_149, ecx_147)
                bool cond:101 = data_307b5bc != 0
                data_307b29d = eax_384
                
                if (cond:101 || eax_384 != 0)
                    char eax_385
                    eax_385, ecx_148, edx_150 = sub_588d20()
                    ecx_148.b = eax_385 == 0
                    data_307b29d = ecx_148.b
                
                int32_t var_10_76 = edi
                char const* const var_14_76 = "GL_ATI_map_object_buffer"
                char eax_387
                int32_t ecx_149
                char* edx_151
                eax_387, ecx_149, edx_151 = sub_583a80(esi, edx_150, ecx_148)
                bool cond:102 = data_307b5bc != 0
                data_307b29e = eax_387
                
                if (cond:102 || eax_387 != 0)
                    char eax_388
                    eax_388, ecx_149, edx_151 = sub_588e60()
                    edx_151.b = eax_388 == 0
                    data_307b29e = edx_151.b
                
                int32_t var_10_77 = edi
                char const* const var_14_77 = "GL_ATI_meminfo"
                char eax_390
                int32_t ecx_150
                char* edx_152
                eax_390, ecx_150, edx_152 = sub_583a80(esi, edx_151, ecx_149)
                data_307b29f = eax_390
                int32_t var_18_31 = edi
                char const* const var_1c_31 = "GL_ATI_pn_triangles"
                char eax_392
                int32_t ecx_151
                char* edx_153
                eax_392, ecx_151, edx_153 = sub_583a80(esi, edx_152, ecx_150)
                bool cond:103 = data_307b5bc != 0
                data_307b2a0 = eax_392
                
                if (cond:103 || eax_392 != 0)
                    bool eax_393
                    eax_393, ecx_151, edx_153 = sub_588ea0()
                    data_307b2a0 = eax_393 == 0
                
                int32_t var_10_78 = edi
                char const* const var_14_78 = "GL_ATI_separate_stencil"
                char eax_395
                int32_t ecx_152
                char* edx_154
                eax_395, ecx_152, edx_154 = sub_583a80(esi, edx_153, ecx_151)
                bool cond:104 = data_307b5bc != 0
                data_307b2a1 = eax_395
                
                if (cond:104 || eax_395 != 0)
                    char eax_396
                    eax_396, ecx_152, edx_154 = sub_588ee0()
                    ecx_152.b = eax_396 == 0
                    data_307b2a1 = ecx_152.b
                
                int32_t var_10_79 = edi
                char const* const var_14_79 = "GL_ATI_shader_texture_lod"
                char eax_398
                int32_t ecx_153
                char* edx_155
                eax_398, ecx_153, edx_155 = sub_583a80(esi, edx_154, ecx_152)
                data_307b2a2 = eax_398
                int32_t var_18_32 = edi
                char const* const var_1c_32 = "GL_ATI_text_fragment_shader"
                char eax_400
                int32_t ecx_154
                char* edx_156
                eax_400, ecx_154, edx_156 = sub_583a80(esi, edx_155, ecx_153)
                data_307b2a3 = eax_400
                int32_t var_20_16 = edi
                char const* const var_24_16 = "GL_ATI_texture_compression_3dc"
                char eax_402
                int32_t ecx_155
                char* edx_157
                eax_402, ecx_155, edx_157 = sub_583a80(esi, edx_156, ecx_154)
                data_307b2a4 = eax_402
                int32_t var_28_12 = edi
                char const* const var_2c_12 = "GL_ATI_texture_env_combine3"
                char eax_404
                int32_t ecx_156
                char* edx_158
                eax_404, ecx_156, edx_158 = sub_583a80(esi, edx_157, ecx_155)
                data_307b2a5 = eax_404
                int32_t var_30_6 = edi
                char const* const var_34_6 = "GL_ATI_texture_float"
                char eax_406
                int32_t ecx_157
                char* edx_159
                eax_406, ecx_157, edx_159 = sub_583a80(esi, edx_158, ecx_156)
                data_307b2a6 = eax_406
                int32_t var_38_3 = edi
                char const* const var_3c_3 = "GL_ATI_texture_mirror_once"
                char eax_408
                int32_t ecx_158
                char* edx_160
                eax_408, ecx_158, edx_160 = sub_583a80(esi, edx_159, ecx_157)
                data_307b2a7 = eax_408
                int32_t var_40_2 = edi
                char const* const var_44_2 = "GL_ATI_vertex_array_object"
                char eax_410
                int32_t ecx_159
                char* edx_161
                eax_410, ecx_159, edx_161 = sub_583a80(esi, edx_160, ecx_158)
                bool cond:105 = data_307b5bc != 0
                data_307b2a8 = eax_410
                
                if (cond:105 || eax_410 != 0)
                    char eax_411
                    eax_411, ecx_159, edx_161 = sub_588f20()
                    edx_161.b = eax_411 == 0
                    data_307b2a8 = edx_161.b
                
                int32_t var_10_80 = edi
                char const* const var_14_80 = "GL_ATI_vertex_attrib_array_object"
                char eax_413
                int32_t ecx_160
                char* edx_162
                eax_413, ecx_160, edx_162 = sub_583a80(esi, edx_161, ecx_159)
                bool cond:106 = data_307b5bc != 0
                data_307b2a9 = eax_413
                
                if (cond:106 || eax_413 != 0)
                    bool eax_414
                    eax_414, ecx_160, edx_162 = sub_589040()
                    data_307b2a9 = eax_414 == 0
                
                int32_t var_10_81 = edi
                char const* const var_14_81 = "GL_ATI_vertex_streams"
                char eax_416
                int32_t ecx_161
                char* edx_163
                eax_416, ecx_161, edx_163 = sub_583a80(esi, edx_162, ecx_160)
                bool cond:107 = data_307b5bc != 0
                data_307b2aa = eax_416
                
                if (cond:107 || eax_416 != 0)
                    char eax_417
                    eax_417, ecx_161, edx_163 = sub_589090()
                    ecx_161.b = eax_417 == 0
                    data_307b2aa = ecx_161.b
                
                int32_t var_10_82 = edi
                char const* const var_14_82 = "GL_EXT_422_pixels"
                char eax_419
                int32_t ecx_162
                char* edx_164
                eax_419, ecx_162, edx_164 = sub_583a80(esi, edx_163, ecx_161)
                data_307b2ab = eax_419
                int32_t var_18_33 = edi
                char const* const var_1c_33 = "GL_EXT_Cg_shader"
                char eax_421
                int32_t ecx_163
                char* edx_165
                eax_421, ecx_163, edx_165 = sub_583a80(esi, edx_164, ecx_162)
                data_307b2ac = eax_421
                int32_t var_20_17 = edi
                char const* const var_24_17 = "GL_EXT_abgr"
                char eax_423
                int32_t ecx_164
                char* edx_166
                eax_423, ecx_164, edx_166 = sub_583a80(esi, edx_165, ecx_163)
                data_307b2ad = eax_423
                int32_t var_28_13 = edi
                char const* const var_2c_13 = "GL_EXT_bgra"
                char eax_425
                int32_t ecx_165
                char* edx_167
                eax_425, ecx_165, edx_167 = sub_583a80(esi, edx_166, ecx_164)
                data_307b2ae = eax_425
                int32_t var_30_7 = edi
                char const* const var_34_7 = "GL_EXT_bindable_uniform"
                char eax_427
                int32_t ecx_166
                char* edx_168
                eax_427, ecx_166, edx_168 = sub_583a80(esi, edx_167, ecx_165)
                bool cond:108 = data_307b5bc != 0
                data_307b2af = eax_427
                
                if (cond:108 || eax_427 != 0)
                    char eax_428
                    eax_428, ecx_166, edx_168 = sub_5893d0()
                    edx_168.b = eax_428 == 0
                    data_307b2af = edx_168.b
                
                int32_t var_10_83 = edi
                char const* const var_14_83 = "GL_EXT_blend_color"
                char eax_430
                int32_t ecx_167
                char* edx_169
                eax_430, ecx_167, edx_169 = sub_583a80(esi, edx_168, ecx_166)
                bool cond:110 = data_307b5bc != 0
                data_307b2b0 = eax_430
                
                if (cond:110 || eax_430 != 0)
                    PROC eax_431
                    eax_431, ecx_167, edx_169 = wglGetProcAddress("glBlendColorEXT")
                    data_307a200 = eax_431
                    eax_431.b = eax_431 == 0
                    eax_431.b = eax_431.b == 0
                    data_307b2b0 = eax_431.b
                
                int32_t var_10_84 = edi
                char const* const var_14_84 = "GL_EXT_blend_equation_separate"
                char eax_433
                int32_t ecx_168
                char* edx_170
                eax_433, ecx_168, edx_170 = sub_583a80(esi, edx_169, ecx_167)
                bool cond:112 = data_307b5bc != 0
                data_307b2b1 = eax_433
                
                if (cond:112 || eax_433 != 0)
                    PROC eax_434
                    eax_434, ecx_168, edx_170 = wglGetProcAddress("glBlendEquationSeparateEXT")
                    data_307a204 = eax_434
                    eax_434.b = eax_434 == 0
                    ecx_168.b = eax_434.b == 0
                    data_307b2b1 = ecx_168.b
                
                int32_t var_10_85 = edi
                char const* const var_14_85 = "GL_EXT_blend_func_separate"
                char eax_436
                int32_t ecx_169
                char* edx_171
                eax_436, ecx_169, edx_171 = sub_583a80(esi, edx_170, ecx_168)
                bool cond:114 = data_307b5bc != 0
                data_307b2b2 = eax_436
                
                if (cond:114 || eax_436 != 0)
                    PROC eax_437
                    eax_437, ecx_169, edx_171 = wglGetProcAddress("glBlendFuncSeparateEXT")
                    data_307a208 = eax_437
                    eax_437.b = eax_437 == 0
                    edx_171.b = eax_437.b == 0
                    data_307b2b2 = edx_171.b
                
                int32_t var_10_86 = edi
                char const* const var_14_86 = "GL_EXT_blend_logic_op"
                char eax_439
                int32_t ecx_170
                char* edx_172
                eax_439, ecx_170, edx_172 = sub_583a80(esi, edx_171, ecx_169)
                data_307b2b3 = eax_439
                int32_t var_18_34 = edi
                char const* const var_1c_34 = "GL_EXT_blend_minmax"
                char eax_441
                int32_t ecx_171
                char* edx_173
                eax_441, ecx_171, edx_173 = sub_583a80(esi, edx_172, ecx_170)
                bool cond:116 = data_307b5bc != 0
                data_307b2b4 = eax_441
                
                if (cond:116 || eax_441 != 0)
                    PROC eax_442
                    eax_442, ecx_171, edx_173 = wglGetProcAddress("glBlendEquationEXT")
                    data_307a20c = eax_442
                    eax_442.b = eax_442 == 0
                    eax_442.b = eax_442.b == 0
                    data_307b2b4 = eax_442.b
                
                int32_t var_10_87 = edi
                char const* const var_14_87 = "GL_EXT_blend_subtract"
                char eax_444
                int32_t ecx_172
                char* edx_174
                eax_444, ecx_172, edx_174 = sub_583a80(esi, edx_173, ecx_171)
                data_307b2b5 = eax_444
                int32_t var_18_35 = edi
                char const* const var_1c_35 = "GL_EXT_clip_volume_hint"
                char eax_446
                int32_t ecx_173
                char* edx_175
                eax_446, ecx_173, edx_175 = sub_583a80(esi, edx_174, ecx_172)
                data_307b2b6 = eax_446
                int32_t var_20_18 = edi
                char const* const var_24_18 = "GL_EXT_cmyka"
                char eax_448
                int32_t ecx_174
                char* edx_176
                eax_448, ecx_174, edx_176 = sub_583a80(esi, edx_175, ecx_173)
                data_307b2b7 = eax_448
                int32_t var_28_14 = edi
                char const* const var_2c_14 = "GL_EXT_color_subtable"
                char eax_450
                int32_t ecx_175
                char* edx_177
                eax_450, ecx_175, edx_177 = sub_583a80(esi, edx_176, ecx_174)
                bool cond:117 = data_307b5bc != 0
                data_307b2b8 = eax_450
                
                if (cond:117 || eax_450 != 0)
                    char eax_451
                    eax_451, ecx_175, edx_177 = sub_589420()
                    ecx_175.b = eax_451 == 0
                    data_307b2b8 = ecx_175.b
                
                int32_t var_10_88 = edi
                char const* const var_14_88 = "GL_EXT_compiled_vertex_array"
                char eax_453
                int32_t ecx_176
                char* edx_178
                eax_453, ecx_176, edx_178 = sub_583a80(esi, edx_177, ecx_175)
                bool cond:118 = data_307b5bc != 0
                data_307b2b9 = eax_453
                
                if (cond:118 || eax_453 != 0)
                    char eax_454
                    eax_454, ecx_176, edx_178 = sub_589460()
                    edx_178.b = eax_454 == 0
                    data_307b2b9 = edx_178.b
                
                int32_t var_10_89 = edi
                char const* const var_14_89 = "GL_EXT_convolution"
                char eax_456
                int32_t ecx_177
                char* edx_179
                eax_456, ecx_177, edx_179 = sub_583a80(esi, edx_178, ecx_176)
                bool cond:119 = data_307b5bc != 0
                data_307b2ba = eax_456
                
                if (cond:119 || eax_456 != 0)
                    bool eax_457
                    eax_457, ecx_177, edx_179 = sub_5894a0()
                    data_307b2ba = eax_457 == 0
                
                int32_t var_10_90 = edi
                char const* const var_14_90 = "GL_EXT_coordinate_frame"
                char eax_459
                int32_t ecx_178
                char* edx_180
                eax_459, ecx_178, edx_180 = sub_583a80(esi, edx_179, ecx_177)
                bool cond:120 = data_307b5bc != 0
                data_307b2bb = eax_459
                
                if (cond:120 || eax_459 != 0)
                    char eax_460
                    eax_460, ecx_178, edx_180 = sub_5895d0()
                    ecx_178.b = eax_460 == 0
                    data_307b2bb = ecx_178.b
                
                int32_t var_10_91 = edi
                char const* const var_14_91 = "GL_EXT_copy_texture"
                char eax_462
                int32_t ecx_179
                char* edx_181
                eax_462, ecx_179, edx_181 = sub_583a80(esi, edx_180, ecx_178)
                bool cond:121 = data_307b5bc != 0
                data_307b2bc = eax_462
                
                if (cond:121 || eax_462 != 0)
                    char eax_463
                    eax_463, ecx_179, edx_181 = sub_589610()
                    edx_181.b = eax_463 == 0
                    data_307b2bc = edx_181.b
                
                int32_t var_10_92 = edi
                char const* const var_14_92 = "GL_EXT_cull_vertex"
                char eax_465
                int32_t ecx_180
                char* edx_182
                eax_465, ecx_180, edx_182 = sub_583a80(esi, edx_181, ecx_179)
                bool cond:122 = data_307b5bc != 0
                data_307b2bd = eax_465
                
                if (cond:122 || eax_465 != 0)
                    bool eax_466
                    eax_466, ecx_180, edx_182 = sub_589690()
                    data_307b2bd = eax_466 == 0
                
                int32_t var_10_93 = edi
                char const* const var_14_93 = "GL_EXT_depth_bounds_test"
                char eax_468
                int32_t ecx_181
                char* edx_183
                eax_468, ecx_181, edx_183 = sub_583a80(esi, edx_182, ecx_180)
                bool cond:124 = data_307b5bc != 0
                data_307b2be = eax_468
                
                if (cond:124 || eax_468 != 0)
                    PROC eax_469
                    eax_469, ecx_181, edx_183 = wglGetProcAddress("glDepthBoundsEXT")
                    data_307a278 = eax_469
                    eax_469.b = eax_469 == 0
                    ecx_181.b = eax_469.b == 0
                    data_307b2be = ecx_181.b
                
                int32_t var_10_94 = edi
                char const* const var_14_94 = "GL_EXT_direct_state_access"
                char eax_471
                int32_t ecx_182
                char* edx_184
                eax_471, ecx_182, edx_184 = sub_583a80(esi, edx_183, ecx_181)
                bool cond:125 = data_307b5bc != 0
                data_307b2bf = eax_471
                
                if (cond:125 || eax_471 != 0)
                    char eax_472
                    eax_472, ecx_182, edx_184 = sub_5896d0()
                    edx_184.b = eax_472 == 0
                    data_307b2bf = edx_184.b
                
                int32_t var_10_95 = edi
                char const* const var_14_95 = "GL_EXT_draw_buffers2"
                char eax_474
                int32_t ecx_183
                char* edx_185
                eax_474, ecx_183, edx_185 = sub_583a80(esi, edx_184, ecx_182)
                bool cond:126 = data_307b5bc != 0
                data_307b2c0 = eax_474
                
                if (cond:126 || eax_474 != 0)
                    bool eax_475
                    eax_475, ecx_183, edx_185 = sub_58a930()
                    data_307b2c0 = eax_475 == 0
                
                int32_t var_10_96 = edi
                char const* const var_14_96 = "GL_EXT_draw_instanced"
                char eax_477
                int32_t ecx_184
                char* edx_186
                eax_477, ecx_184, edx_186 = sub_583a80(esi, edx_185, ecx_183)
                bool cond:127 = data_307b5bc != 0
                data_307b2c1 = eax_477
                
                if (cond:127 || eax_477 != 0)
                    char eax_478
                    eax_478, ecx_184, edx_186 = sub_58a9c0()
                    ecx_184.b = eax_478 == 0
                    data_307b2c1 = ecx_184.b
                
                int32_t var_10_97 = edi
                char const* const var_14_97 = "GL_EXT_draw_range_elements"
                char eax_480
                int32_t ecx_185
                char* edx_187
                eax_480, ecx_185, edx_187 = sub_583a80(esi, edx_186, ecx_184)
                bool cond:129 = data_307b5bc != 0
                data_307b2c2 = eax_480
                
                if (cond:129 || eax_480 != 0)
                    PROC eax_481
                    eax_481, ecx_185, edx_187 = wglGetProcAddress("glDrawRangeElementsEXT")
                    data_307a5f0 = eax_481
                    eax_481.b = eax_481 == 0
                    edx_187.b = eax_481.b == 0
                    data_307b2c2 = edx_187.b
                
                int32_t var_10_98 = edi
                char const* const var_14_98 = "GL_EXT_fog_coord"
                char eax_483
                int32_t ecx_186
                char* edx_188
                eax_483, ecx_186, edx_188 = sub_583a80(esi, edx_187, ecx_185)
                bool cond:130 = data_307b5bc != 0
                data_307b2c3 = eax_483
                
                if (cond:130 || eax_483 != 0)
                    bool eax_484
                    eax_484, ecx_186, edx_188 = sub_58aa00()
                    data_307b2c3 = eax_484 == 0
                
                int32_t var_10_99 = edi
                char const* const var_14_99 = "GL_EXT_fragment_lighting"
                char eax_486
                int32_t ecx_187
                char* edx_189
                eax_486, ecx_187, edx_189 = sub_583a80(esi, edx_188, ecx_186)
                bool cond:131 = data_307b5bc != 0
                data_307b2c4 = eax_486
                
                if (cond:131 || eax_486 != 0)
                    char eax_487
                    eax_487, ecx_187, edx_189 = sub_58aa80()
                    ecx_187.b = eax_487 == 0
                    data_307b2c4 = ecx_187.b
                
                int32_t var_10_100 = edi
                char const* const var_14_100 = "GL_EXT_framebuffer_blit"
                char eax_489
                int32_t ecx_188
                char* edx_190
                eax_489, ecx_188, edx_190 = sub_583a80(esi, edx_189, ecx_187)
                bool cond:133 = data_307b5bc != 0
                data_307b2c5 = eax_489
                
                if (cond:133 || eax_489 != 0)
                    PROC eax_490
                    eax_490, ecx_188, edx_190 = wglGetProcAddress("glBlitFramebufferEXT")
                    data_307a650 = eax_490
                    eax_490.b = eax_490 == 0
                    edx_190.b = eax_490.b == 0
                    data_307b2c5 = edx_190.b
                
                int32_t var_10_101 = edi
                char const* const var_14_101 = "GL_EXT_framebuffer_multisample"
                char eax_492
                int32_t ecx_189
                char* edx_191
                eax_492, ecx_189, edx_191 = sub_583a80(esi, edx_190, ecx_188)
                bool cond:135 = data_307b5bc != 0
                data_307b2c6 = eax_492
                
                if (cond:135 || eax_492 != 0)
                    PROC eax_493
                    eax_493, ecx_189, edx_191 = wglGetProcAddress("glRenderbufferStorageMultisampleEXT")
                    data_307a654 = eax_493
                    eax_493.b = eax_493 == 0
                    eax_493.b = eax_493.b == 0
                    data_307b2c6 = eax_493.b
                
                int32_t var_10_102 = edi
                char const* const var_14_102 = "GL_EXT_framebuffer_multisample_blit_scaled"
                char eax_495
                int32_t ecx_190
                char* edx_192
                eax_495, ecx_190, edx_192 = sub_583a80(esi, edx_191, ecx_189)
                data_307b2c7 = eax_495
                int32_t var_18_36 = edi
                char const* const var_1c_36 = "GL_EXT_framebuffer_object"
                char eax_497
                int32_t ecx_191
                char* edx_193
                eax_497, ecx_191, edx_193 = sub_583a80(esi, edx_192, ecx_190)
                bool cond:136 = data_307b5bc != 0
                data_307b2c8 = eax_497
                
                if (cond:136 || eax_497 != 0)
                    char eax_498
                    eax_498, ecx_191, edx_193 = sub_58ac20()
                    ecx_191.b = eax_498 == 0
                    data_307b2c8 = ecx_191.b
                
                int32_t var_10_103 = edi
                char const* const var_14_103 = "GL_EXT_framebuffer_sRGB"
                char eax_500
                int32_t ecx_192
                char* edx_194
                eax_500, ecx_192, edx_194 = sub_583a80(esi, edx_193, ecx_191)
                data_307b2c9 = eax_500
                int32_t var_18_37 = edi
                char const* const var_1c_37 = "GL_EXT_geometry_shader4"
                char eax_502
                int32_t ecx_193
                char* edx_195
                eax_502, ecx_193, edx_195 = sub_583a80(esi, edx_194, ecx_192)
                bool cond:137 = data_307b5bc != 0
                data_307b2ca = eax_502
                
                if (cond:137 || eax_502 != 0)
                    char eax_503
                    eax_503, ecx_193, edx_195 = sub_58adb0()
                    edx_195.b = eax_503 == 0
                    data_307b2ca = edx_195.b
                
                int32_t var_10_104 = edi
                char const* const var_14_104 = "GL_EXT_gpu_program_parameters"
                char eax_505
                int32_t ecx_194
                char* edx_196
                eax_505, ecx_194, edx_196 = sub_583a80(esi, edx_195, ecx_193)
                bool cond:138 = data_307b5bc != 0
                data_307b2cb = eax_505
                
                if (cond:138 || eax_505 != 0)
                    bool eax_506
                    eax_506, ecx_194, edx_196 = sub_58ae00()
                    data_307b2cb = eax_506 == 0
                
                int32_t var_10_105 = edi
                char const* const var_14_105 = "GL_EXT_gpu_shader4"
                char eax_508
                int32_t ecx_195
                char* edx_197
                eax_508, ecx_195, edx_197 = sub_583a80(esi, edx_196, ecx_194)
                bool cond:139 = data_307b5bc != 0
                data_307b2cc = eax_508
                
                if (cond:139 || eax_508 != 0)
                    char eax_509
                    eax_509, ecx_195, edx_197 = sub_58ae40()
                    ecx_195.b = eax_509 == 0
                    data_307b2cc = ecx_195.b
                
                int32_t var_10_106 = edi
                char const* const var_14_106 = "GL_EXT_histogram"
                char eax_511
                int32_t ecx_196
                char* edx_198
                eax_511, ecx_196, edx_198 = sub_583a80(esi, edx_197, ecx_195)
                bool cond:140 = data_307b5bc != 0
                data_307b2cd = eax_511
                
                if (cond:140 || eax_511 != 0)
                    char eax_512
                    eax_512, ecx_196, edx_198 = sub_58b140()
                    edx_198.b = eax_512 == 0
                    data_307b2cd = edx_198.b
                
                int32_t var_10_107 = edi
                char const* const var_14_107 = "GL_EXT_index_array_formats"
                char eax_514
                int32_t ecx_197
                char* edx_199
                eax_514, ecx_197, edx_199 = sub_583a80(esi, edx_198, ecx_196)
                data_307b2ce = eax_514
                int32_t var_18_38 = edi
                char const* const var_1c_38 = "GL_EXT_index_func"
                char eax_516
                int32_t ecx_198
                char* edx_200
                eax_516, ecx_198, edx_200 = sub_583a80(esi, edx_199, ecx_197)
                bool cond:142 = data_307b5bc != 0
                data_307b2cf = eax_516
                
                if (cond:142 || eax_516 != 0)
                    PROC eax_517
                    eax_517, ecx_198, edx_200 = wglGetProcAddress("glIndexFuncEXT")
                    data_307a760 = eax_517
                    eax_517.b = eax_517 == 0
                    eax_517.b = eax_517.b == 0
                    data_307b2cf = eax_517.b
                
                int32_t var_10_108 = edi
                char const* const var_14_108 = "GL_EXT_index_material"
                char eax_519
                int32_t ecx_199
                char* edx_201
                eax_519, ecx_199, edx_201 = sub_583a80(esi, edx_200, ecx_198)
                bool cond:144 = data_307b5bc != 0
                data_307b2d0 = eax_519
                
                if (cond:144 || eax_519 != 0)
                    PROC eax_520
                    eax_520, ecx_199, edx_201 = wglGetProcAddress("glIndexMaterialEXT")
                    data_307a764 = eax_520
                    eax_520.b = eax_520 == 0
                    ecx_199.b = eax_520.b == 0
                    data_307b2d0 = ecx_199.b
                
                int32_t var_10_109 = edi
                char const* const var_14_109 = "GL_EXT_index_texture"
                char eax_522
                int32_t ecx_200
                char* edx_202
                eax_522, ecx_200, edx_202 = sub_583a80(esi, edx_201, ecx_199)
                data_307b2d1 = eax_522
                int32_t var_18_39 = edi
                char const* const var_1c_39 = "GL_EXT_light_texture"
                char eax_524
                int32_t ecx_201
                char* edx_203
                eax_524, ecx_201, edx_203 = sub_583a80(esi, edx_202, ecx_200)
                bool cond:145 = data_307b5bc != 0
                data_307b2d2 = eax_524
                
                if (cond:145 || eax_524 != 0)
                    char eax_525
                    eax_525, ecx_201, edx_203 = sub_58b230()
                    edx_203.b = eax_525 == 0
                    data_307b2d2 = edx_203.b
                
                int32_t var_10_110 = edi
                char const* const var_14_110 = "GL_EXT_misc_attribute"
                char eax_527
                int32_t ecx_202
                char* edx_204
                eax_527, ecx_202, edx_204 = sub_583a80(esi, edx_203, ecx_201)
                data_307b2d3 = eax_527
                int32_t var_18_40 = edi
                char const* const var_1c_40 = "GL_EXT_multi_draw_arrays"
                char eax_529
                int32_t ecx_203
                char* edx_205
                eax_529, ecx_203, edx_205 = sub_583a80(esi, edx_204, ecx_202)
                bool cond:146 = data_307b5bc != 0
                data_307b2d4 = eax_529
                
                if (cond:146 || eax_529 != 0)
                    bool eax_530
                    eax_530, ecx_203, edx_205 = sub_58b280()
                    data_307b2d4 = eax_530 == 0
                
                int32_t var_10_111 = edi
                char const* const var_14_111 = "GL_EXT_multisample"
                char eax_532
                int32_t ecx_204
                char* edx_206
                eax_532, ecx_204, edx_206 = sub_583a80(esi, edx_205, ecx_203)
                bool cond:147 = data_307b5bc != 0
                data_307b2d5 = eax_532
                
                if (cond:147 || eax_532 != 0)
                    char eax_533
                    eax_533, ecx_204, edx_206 = sub_58b2c0()
                    ecx_204.b = eax_533 == 0
                    data_307b2d5 = ecx_204.b
                
                int32_t var_10_112 = edi
                char const* const var_14_112 = "GL_EXT_packed_depth_stencil"
                char eax_535
                int32_t ecx_205
                char* edx_207
                eax_535, ecx_205, edx_207 = sub_583a80(esi, edx_206, ecx_204)
                data_307b2d6 = eax_535
                int32_t var_18_41 = edi
                char const* const var_1c_41 = "GL_EXT_packed_float"
                char eax_537
                int32_t ecx_206
                char* edx_208
                eax_537, ecx_206, edx_208 = sub_583a80(esi, edx_207, ecx_205)
                data_307b2d7 = eax_537
                int32_t var_20_19 = edi
                char const* const var_24_19 = "GL_EXT_packed_pixels"
                char eax_539
                int32_t ecx_207
                char* edx_209
                eax_539, ecx_207, edx_209 = sub_583a80(esi, edx_208, ecx_206)
                data_307b2d8 = eax_539
                int32_t var_28_15 = edi
                char const* const var_2c_15 = "GL_EXT_paletted_texture"
                char eax_541
                int32_t ecx_208
                char* edx_210
                eax_541, ecx_208, edx_210 = sub_583a80(esi, edx_209, ecx_207)
                bool cond:148 = data_307b5bc != 0
                data_307b2d9 = eax_541
                
                if (cond:148 || eax_541 != 0)
                    char eax_542
                    eax_542, ecx_208, edx_210 = sub_58b300()
                    edx_210.b = eax_542 == 0
                    data_307b2d9 = edx_210.b
                
                int32_t var_10_113 = edi
                char const* const var_14_113 = "GL_EXT_pixel_buffer_object"
                char eax_544
                int32_t ecx_209
                char* edx_211
                eax_544, ecx_209, edx_211 = sub_583a80(esi, edx_210, ecx_208)
                data_307b2da = eax_544
                int32_t var_18_42 = edi
                char const* const var_1c_42 = "GL_EXT_pixel_transform"
                char eax_546
                int32_t ecx_210
                char* edx_212
                eax_546, ecx_210, edx_212 = sub_583a80(esi, edx_211, ecx_209)
                bool cond:149 = data_307b5bc != 0
                data_307b2db = eax_546
                
                if (cond:149 || eax_546 != 0)
                    bool eax_547
                    eax_547, ecx_210, edx_212 = sub_58b370()
                    data_307b2db = eax_547 == 0
                
                int32_t var_10_114 = edi
                char const* const var_14_114 = "GL_EXT_pixel_transform_color_table"
                char eax_549
                int32_t ecx_211
                char* edx_213
                eax_549, ecx_211, edx_213 = sub_583a80(esi, edx_212, ecx_210)
                data_307b2dc = eax_549
                int32_t var_18_43 = edi
                char const* const var_1c_43 = "GL_EXT_point_parameters"
                char eax_551
                int32_t ecx_212
                char* edx_214
                eax_551, ecx_212, edx_214 = sub_583a80(esi, edx_213, ecx_211)
                bool cond:150 = data_307b5bc != 0
                data_307b2dd = eax_551
                
                if (cond:150 || eax_551 != 0)
                    char eax_552
                    eax_552, ecx_212, edx_214 = sub_58b400()
                    ecx_212.b = eax_552 == 0
                    data_307b2dd = ecx_212.b
                
                int32_t var_10_115 = edi
                char const* const var_14_115 = "GL_EXT_polygon_offset"
                char eax_554
                int32_t ecx_213
                char* edx_215
                eax_554, ecx_213, edx_215 = sub_583a80(esi, edx_214, ecx_212)
                bool cond:152 = data_307b5bc != 0
                data_307b2de = eax_554
                
                if (cond:152 || eax_554 != 0)
                    PROC eax_555
                    eax_555, ecx_213, edx_215 = wglGetProcAddress("glPolygonOffsetEXT")
                    data_307a7b4 = eax_555
                    eax_555.b = eax_555 == 0
                    edx_215.b = eax_555.b == 0
                    data_307b2de = edx_215.b
                
                int32_t var_10_116 = edi
                char const* const var_14_116 = "GL_EXT_provoking_vertex"
                char eax_557
                int32_t ecx_214
                char* edx_216
                eax_557, ecx_214, edx_216 = sub_583a80(esi, edx_215, ecx_213)
                bool cond:154 = data_307b5bc != 0
                data_307b2df = eax_557
                
                if (cond:154 || eax_557 != 0)
                    PROC eax_558
                    eax_558, ecx_214, edx_216 = wglGetProcAddress("glProvokingVertexEXT")
                    data_307a7b8 = eax_558
                    eax_558.b = eax_558 == 0
                    eax_558.b = eax_558.b == 0
                    data_307b2df = eax_558.b
                
                int32_t var_10_117 = edi
                char const* const var_14_117 = "GL_EXT_rescale_normal"
                char eax_560
                int32_t ecx_215
                char* edx_217
                eax_560, ecx_215, edx_217 = sub_583a80(esi, edx_216, ecx_214)
                data_307b2e0 = eax_560
                int32_t var_18_44 = edi
                char const* const var_1c_44 = "GL_EXT_scene_marker"
                char eax_562
                int32_t ecx_216
                char* edx_218
                eax_562, ecx_216, edx_218 = sub_583a80(esi, edx_217, ecx_215)
                bool cond:155 = data_307b5bc != 0
                data_307b2e1 = eax_562
                
                if (cond:155 || eax_562 != 0)
                    char eax_563
                    eax_563, ecx_216, edx_218 = sub_58b440()
                    ecx_216.b = eax_563 == 0
                    data_307b2e1 = ecx_216.b
                
                int32_t var_10_118 = edi
                char const* const var_14_118 = "GL_EXT_secondary_color"
                char eax_565
                int32_t ecx_217
                char* edx_219
                eax_565, ecx_217, edx_219 = sub_583a80(esi, edx_218, ecx_216)
                bool cond:156 = data_307b5bc != 0
                data_307b2e2 = eax_565
                
                if (cond:156 || eax_565 != 0)
                    char eax_566
                    eax_566, ecx_217, edx_219 = sub_58b480()
                    edx_219.b = eax_566 == 0
                    data_307b2e2 = edx_219.b
                
                int32_t var_10_119 = edi
                char const* const var_14_119 = "GL_EXT_separate_shader_objects"
                char eax_568
                int32_t ecx_218
                char* edx_220
                eax_568, ecx_218, edx_220 = sub_583a80(esi, edx_219, ecx_217)
                bool cond:157 = data_307b5bc != 0
                data_307b2e3 = eax_568
                
                if (cond:157 || eax_568 != 0)
                    bool eax_569
                    eax_569, ecx_218, edx_220 = sub_58b610()
                    data_307b2e3 = eax_569 == 0
                
                int32_t var_10_120 = edi
                char const* const var_14_120 = "GL_EXT_separate_specular_color"
                char eax_571
                int32_t ecx_219
                char* edx_221
                eax_571, ecx_219, edx_221 = sub_583a80(esi, edx_220, ecx_218)
                data_307b2e4 = eax_571
                int32_t var_18_45 = edi
                char const* const var_1c_45 = "GL_EXT_shader_image_load_store"
                char eax_573
                int32_t ecx_220
                char* edx_222
                eax_573, ecx_220, edx_222 = sub_583a80(esi, edx_221, ecx_219)
                bool cond:158 = data_307b5bc != 0
                data_307b2e5 = eax_573
                
                if (cond:158 || eax_573 != 0)
                    char eax_574
                    eax_574, ecx_220, edx_222 = sub_58b660()
                    ecx_220.b = eax_574 == 0
                    data_307b2e5 = ecx_220.b
                
                int32_t var_10_121 = edi
                char const* const var_14_121 = "GL_EXT_shadow_funcs"
                char eax_576
                int32_t ecx_221
                char* edx_223
                eax_576, ecx_221, edx_223 = sub_583a80(esi, edx_222, ecx_220)
                data_307b2e6 = eax_576
                int32_t var_18_46 = edi
                char const* const var_1c_46 = "GL_EXT_shared_texture_palette"
                char eax_578
                int32_t ecx_222
                char* edx_224
                eax_578, ecx_222, edx_224 = sub_583a80(esi, edx_223, ecx_221)
                data_307b2e7 = eax_578
                int32_t var_20_20 = edi
                char const* const var_24_20 = "GL_EXT_stencil_clear_tag"
                char eax_580
                int32_t ecx_223
                char* edx_225
                eax_580, ecx_223, edx_225 = sub_583a80(esi, edx_224, ecx_222)
                data_307b2e8 = eax_580
                int32_t var_28_16 = edi
                char const* const var_2c_16 = "GL_EXT_stencil_two_side"
                char eax_582
                int32_t ecx_224
                char* edx_226
                eax_582, ecx_224, edx_226 = sub_583a80(esi, edx_225, ecx_223)
                bool cond:160 = data_307b5bc != 0
                data_307b2e9 = eax_582
                
                if (cond:160 || eax_582 != 0)
                    PROC eax_583
                    eax_583, ecx_224, edx_226 = wglGetProcAddress("glActiveStencilFaceEXT")
                    data_307a81c = eax_583
                    eax_583.b = eax_583 == 0
                    edx_226.b = eax_583.b == 0
                    data_307b2e9 = edx_226.b
                
                int32_t var_10_122 = edi
                char const* const var_14_122 = "GL_EXT_stencil_wrap"
                char eax_585
                int32_t ecx_225
                char* edx_227
                eax_585, ecx_225, edx_227 = sub_583a80(esi, edx_226, ecx_224)
                data_307b2ea = eax_585
                int32_t var_18_47 = edi
                char const* const var_1c_47 = "GL_EXT_subtexture"
                char eax_587
                int32_t ecx_226
                char* edx_228
                eax_587, ecx_226, edx_228 = sub_583a80(esi, edx_227, ecx_225)
                bool cond:161 = data_307b5bc != 0
                data_307b2eb = eax_587
                
                if (cond:161 || eax_587 != 0)
                    bool eax_588
                    eax_588, ecx_226, edx_228 = sub_58b6a0()
                    data_307b2eb = eax_588 == 0
                
                int32_t var_10_123 = edi
                char const* const var_14_123 = "GL_EXT_texture"
                char eax_590
                int32_t ecx_227
                char* edx_229
                eax_590, ecx_227, edx_229 = sub_583a80(esi, edx_228, ecx_226)
                data_307b2ec = eax_590
                int32_t var_18_48 = edi
                char const* const var_1c_48 = "GL_EXT_texture3D"
                char eax_592
                int32_t ecx_228
                char* edx_230
                eax_592, ecx_228, edx_230 = sub_583a80(esi, edx_229, ecx_227)
                bool cond:163 = data_307b5bc != 0
                data_307b2ed = eax_592
                
                if (cond:163 || eax_592 != 0)
                    PROC eax_593
                    eax_593, ecx_228, edx_230 = wglGetProcAddress("glTexImage3DEXT")
                    data_307a82c = eax_593
                    eax_593.b = eax_593 == 0
                    ecx_228.b = eax_593.b == 0
                    data_307b2ed = ecx_228.b
                
                int32_t var_10_124 = edi
                char const* const var_14_124 = "GL_EXT_texture_array"
                char eax_595
                int32_t ecx_229
                char* edx_231
                eax_595, ecx_229, edx_231 = sub_583a80(esi, edx_230, ecx_228)
                bool cond:165 = data_307b5bc != 0
                data_307b2ee = eax_595
                
                if (cond:165 || eax_595 != 0)
                    PROC eax_596
                    eax_596, ecx_229, edx_231 = wglGetProcAddress("glFramebufferTextureLayerEXT")
                    data_307a830 = eax_596
                    eax_596.b = eax_596 == 0
                    edx_231.b = eax_596.b == 0
                    data_307b2ee = edx_231.b
                
                int32_t var_10_125 = edi
                char const* const var_14_125 = "GL_EXT_texture_buffer_object"
                char eax_598
                int32_t ecx_230
                char* edx_232
                eax_598, ecx_230, edx_232 = sub_583a80(esi, edx_231, ecx_229)
                bool cond:167 = data_307b5bc != 0
                data_307b2ef = eax_598
                
                if (cond:167 || eax_598 != 0)
                    PROC eax_599
                    eax_599, ecx_230, edx_232 = wglGetProcAddress("glTexBufferEXT")
                    data_307a834 = eax_599
                    eax_599.b = eax_599 == 0
                    eax_599.b = eax_599.b == 0
                    data_307b2ef = eax_599.b
                
                int32_t var_10_126 = edi
                char const* const var_14_126 = "GL_EXT_texture_compression_dxt1"
                char eax_601
                int32_t ecx_231
                char* edx_233
                eax_601, ecx_231, edx_233 = sub_583a80(esi, edx_232, ecx_230)
                data_307b2f0 = eax_601
                int32_t var_18_49 = edi
                char const* const var_1c_49 = "GL_EXT_texture_compression_latc"
                char eax_603
                int32_t ecx_232
                char* edx_234
                eax_603, ecx_232, edx_234 = sub_583a80(esi, edx_233, ecx_231)
                data_307b2f1 = eax_603
                int32_t var_20_21 = edi
                char const* const var_24_21 = "GL_EXT_texture_compression_rgtc"
                char eax_605
                int32_t ecx_233
                char* edx_235
                eax_605, ecx_233, edx_235 = sub_583a80(esi, edx_234, ecx_232)
                data_307b2f2 = eax_605
                int32_t var_28_17 = edi
                char const* const var_2c_17 = "GL_EXT_texture_compression_s3tc"
                char eax_607
                int32_t ecx_234
                char* edx_236
                eax_607, ecx_234, edx_236 = sub_583a80(esi, edx_235, ecx_233)
                data_307b2f3 = eax_607
                int32_t var_30_8 = edi
                char const* const var_34_8 = "GL_EXT_texture_cube_map"
                char eax_609
                int32_t ecx_235
                char* edx_237
                eax_609, ecx_235, edx_237 = sub_583a80(esi, edx_236, ecx_234)
                data_307b2f4 = eax_609
                int32_t var_38_4 = edi
                char const* const var_3c_4 = "GL_EXT_texture_edge_clamp"
                char eax_611
                int32_t ecx_236
                char* edx_238
                eax_611, ecx_236, edx_238 = sub_583a80(esi, edx_237, ecx_235)
                data_307b2f5 = eax_611
                int32_t var_40_3 = edi
                char const* const var_44_3 = "GL_EXT_texture_env"
                char eax_613
                int32_t ecx_237
                char* edx_239
                eax_613, ecx_237, edx_239 = sub_583a80(esi, edx_238, ecx_236)
                data_307b2f6 = eax_613
                int32_t var_48_1 = edi
                char const* const var_4c_1 = "GL_EXT_texture_env_add"
                char eax_615
                int32_t ecx_238
                char* edx_240
                eax_615, ecx_238, edx_240 = sub_583a80(esi, edx_239, ecx_237)
                data_307b2f7 = eax_615
                int32_t var_10_127 = edi
                char const* const var_14_127 = "GL_EXT_texture_env_combine"
                char eax_617
                int32_t ecx_239
                char* edx_241
                eax_617, ecx_239, edx_241 = sub_583a80(esi, edx_240, ecx_238)
                data_307b2f8 = eax_617
                int32_t var_18_50 = edi
                char const* const var_1c_50 = "GL_EXT_texture_env_dot3"
                char eax_619
                int32_t ecx_240
                char* edx_242
                eax_619, ecx_240, edx_242 = sub_583a80(esi, edx_241, ecx_239)
                data_307b2f9 = eax_619
                int32_t var_20_22 = edi
                char const* const var_24_22 = "GL_EXT_texture_filter_anisotropic"
                char eax_621
                int32_t ecx_241
                char* edx_243
                eax_621, ecx_241, edx_243 = sub_583a80(esi, edx_242, ecx_240)
                data_307b2fa = eax_621
                int32_t var_28_18 = edi
                char const* const var_2c_18 = "GL_EXT_texture_integer"
                char eax_623
                int32_t ecx_242
                char* edx_244
                eax_623, ecx_242, edx_244 = sub_583a80(esi, edx_243, ecx_241)
                bool cond:168 = data_307b5bc != 0
                data_307b2fb = eax_623
                
                if (cond:168 || eax_623 != 0)
                    char eax_624
                    eax_624, ecx_242, edx_244 = sub_58b6f0()
                    ecx_242.b = eax_624 == 0
                    data_307b2fb = ecx_242.b
                
                int32_t var_10_128 = edi
                char const* const var_14_128 = "GL_EXT_texture_lod_bias"
                char eax_626
                int32_t ecx_243
                char* edx_245
                eax_626, ecx_243, edx_245 = sub_583a80(esi, edx_244, ecx_242)
                data_307b2fc = eax_626
                int32_t var_18_51 = edi
                char const* const var_1c_51 = "GL_EXT_texture_mirror_clamp"
                char eax_628
                int32_t ecx_244
                char* edx_246
                eax_628, ecx_244, edx_246 = sub_583a80(esi, edx_245, ecx_243)
                data_307b2fd = eax_628
                int32_t var_20_23 = edi
                char const* const var_24_23 = "GL_EXT_texture_object"
                char eax_630
                int32_t ecx_245
                char* edx_247
                eax_630, ecx_245, edx_247 = sub_583a80(esi, edx_246, ecx_244)
                bool cond:169 = data_307b5bc != 0
                data_307b2fe = eax_630
                
                if (cond:169 || eax_630 != 0)
                    char eax_631
                    eax_631, ecx_245, edx_247 = sub_58b780()
                    edx_247.b = eax_631 == 0
                    data_307b2fe = edx_247.b
                
                int32_t var_10_129 = edi
                char const* const var_14_129 = "GL_EXT_texture_perturb_normal"
                char eax_633
                int32_t ecx_246
                char* edx_248
                eax_633, ecx_246, edx_248 = sub_583a80(esi, edx_247, ecx_245)
                bool cond:171 = data_307b5bc != 0
                data_307b2ff = eax_633
                
                if (cond:171 || eax_633 != 0)
                    PROC eax_634
                    eax_634, ecx_246, edx_248 = wglGetProcAddress("glTextureNormalEXT")
                    data_307a868 = eax_634
                    eax_634.b = eax_634 == 0
                    eax_634.b = eax_634.b == 0
                    data_307b2ff = eax_634.b
                
                int32_t var_10_130 = edi
                char const* const var_14_130 = "GL_EXT_texture_rectangle"
                char eax_636
                int32_t ecx_247
                char* edx_249
                eax_636, ecx_247, edx_249 = sub_583a80(esi, edx_248, ecx_246)
                data_307b300 = eax_636
                int32_t var_18_52 = edi
                char const* const var_1c_52 = "GL_EXT_texture_sRGB"
                char eax_638
                int32_t ecx_248
                char* edx_250
                eax_638, ecx_248, edx_250 = sub_583a80(esi, edx_249, ecx_247)
                data_307b301 = eax_638
                int32_t var_20_24 = edi
                char const* const var_24_24 = "GL_EXT_texture_sRGB_decode"
                char eax_640
                int32_t ecx_249
                char* edx_251
                eax_640, ecx_249, edx_251 = sub_583a80(esi, edx_250, ecx_248)
                data_307b302 = eax_640
                int32_t var_28_19 = edi
                char const* const var_2c_19 = "GL_EXT_texture_shared_exponent"
                char eax_642
                int32_t ecx_250
                char* edx_252
                eax_642, ecx_250, edx_252 = sub_583a80(esi, edx_251, ecx_249)
                data_307b303 = eax_642
                int32_t var_30_9 = edi
                char const* const var_34_9 = "GL_EXT_texture_snorm"
                char eax_644
                int32_t ecx_251
                char* edx_253
                eax_644, ecx_251, edx_253 = sub_583a80(esi, edx_252, ecx_250)
                data_307b304 = eax_644
                int32_t var_38_5 = edi
                char const* const var_3c_5 = "GL_EXT_texture_swizzle"
                char eax_646
                int32_t ecx_252
                char* edx_254
                eax_646, ecx_252, edx_254 = sub_583a80(esi, edx_253, ecx_251)
                data_307b305 = eax_646
                int32_t var_40_4 = edi
                char const* const var_44_4 = "GL_EXT_timer_query"
                char eax_648
                int32_t ecx_253
                char* edx_255
                eax_648, ecx_253, edx_255 = sub_583a80(esi, edx_254, ecx_252)
                bool cond:172 = data_307b5bc != 0
                data_307b306 = eax_648
                
                if (cond:172 || eax_648 != 0)
                    char eax_649
                    eax_649, ecx_253, edx_255 = sub_58b810()
                    ecx_253.b = eax_649 == 0
                    data_307b306 = ecx_253.b
                
                int32_t var_10_131 = edi
                char const* const var_14_131 = "GL_EXT_transform_feedback"
                char eax_651
                int32_t ecx_254
                char* edx_256
                eax_651, ecx_254, edx_256 = sub_583a80(esi, edx_255, ecx_253)
                bool cond:173 = data_307b5bc != 0
                data_307b307 = eax_651
                
                if (cond:173 || eax_651 != 0)
                    char eax_652
                    eax_652, ecx_254, edx_256 = sub_58b850()
                    edx_256.b = eax_652 == 0
                    data_307b307 = edx_256.b
                
                int32_t var_10_132 = edi
                char const* const var_14_132 = "GL_EXT_vertex_array"
                char eax_654
                int32_t ecx_255
                char* edx_257
                eax_654, ecx_255, edx_257 = sub_583a80(esi, edx_256, ecx_254)
                bool cond:174 = data_307b5bc != 0
                data_307b308 = eax_654
                
                if (cond:174 || eax_654 != 0)
                    bool eax_655
                    eax_655, ecx_255, edx_257 = sub_58b900()
                    data_307b308 = eax_655 == 0
                
                int32_t var_10_133 = edi
                char const* const var_14_133 = "GL_EXT_vertex_array_bgra"
                char eax_657
                int32_t ecx_256
                char* edx_258
                eax_657, ecx_256, edx_258 = sub_583a80(esi, edx_257, ecx_255)
                data_307b309 = eax_657
                int32_t var_18_53 = edi
                char const* const var_1c_53 = "GL_EXT_vertex_attrib_64bit"
                char eax_659
                int32_t ecx_257
                char* edx_259
                eax_659, ecx_257, edx_259 = sub_583a80(esi, edx_258, ecx_256)
                bool cond:175 = data_307b5bc != 0
                data_307b30a = eax_659
                
                if (cond:175 || eax_659 != 0)
                    char eax_660
                    eax_660, ecx_257, edx_259 = sub_58b9c0()
                    ecx_257.b = eax_660 == 0
                    data_307b30a = ecx_257.b
                
                int32_t var_10_134 = edi
                char const* const var_14_134 = "GL_EXT_vertex_shader"
                char eax_662
                int32_t ecx_258
                char* edx_260
                eax_662, ecx_258, edx_260 = sub_583a80(esi, edx_259, ecx_257)
                bool cond:176 = data_307b5bc != 0
                data_307b30b = eax_662
                
                if (cond:176 || eax_662 != 0)
                    char eax_663
                    eax_663, ecx_258, edx_260 = sub_58bac0()
                    edx_260.b = eax_663 == 0
                    data_307b30b = edx_260.b
                
                int32_t var_10_135 = edi
                char const* const var_14_135 = "GL_EXT_vertex_weighting"
                char eax_665
                int32_t ecx_259
                char* edx_261
                eax_665, ecx_259, edx_261 = sub_583a80(esi, edx_260, ecx_258)
                bool cond:177 = data_307b5bc != 0
                data_307b30c = eax_665
                
                if (cond:177 || eax_665 != 0)
                    bool eax_666
                    eax_666, ecx_259, edx_261 = sub_58be70()
                    data_307b30c = eax_666 == 0
                
                int32_t var_10_136 = edi
                char const* const var_14_136 = "GL_EXT_x11_sync_object"
                char eax_668
                int32_t ecx_260
                char* edx_262
                eax_668, ecx_260, edx_262 = sub_583a80(esi, edx_261, ecx_259)
                bool cond:179 = data_307b5bc != 0
                data_307b30d = eax_668
                
                if (cond:179 || eax_668 != 0)
                    PROC eax_669
                    eax_669, ecx_260, edx_262 = wglGetProcAddress("glImportSyncEXT")
                    data_307a990 = eax_669
                    eax_669.b = eax_669 == 0
                    ecx_260.b = eax_669.b == 0
                    data_307b30d = ecx_260.b
                
                int32_t var_10_137 = edi
                char const* const var_14_137 = "GL_GREMEDY_frame_terminator"
                char eax_671
                int32_t ecx_261
                char* edx_263
                eax_671, ecx_261, edx_263 = sub_583a80(esi, edx_262, ecx_260)
                bool cond:181 = data_307b5bc != 0
                data_307b30e = eax_671
                
                if (cond:181 || eax_671 != 0)
                    PROC eax_672
                    eax_672, ecx_261, edx_263 = wglGetProcAddress("glFrameTerminatorGREMEDY")
                    data_307a994 = eax_672
                    eax_672.b = eax_672 == 0
                    edx_263.b = eax_672.b == 0
                    data_307b30e = edx_263.b
                
                int32_t var_10_138 = edi
                char const* const var_14_138 = "GL_GREMEDY_string_marker"
                char eax_674
                int32_t ecx_262
                char* edx_264
                eax_674, ecx_262, edx_264 = sub_583a80(esi, edx_263, ecx_261)
                bool cond:183 = data_307b5bc != 0
                data_307b30f = eax_674
                
                if (cond:183 || eax_674 != 0)
                    PROC eax_675
                    eax_675, ecx_262, edx_264 = wglGetProcAddress("glStringMarkerGREMEDY")
                    data_307a998 = eax_675
                    eax_675.b = eax_675 == 0
                    eax_675.b = eax_675.b == 0
                    data_307b30f = eax_675.b
                
                int32_t var_10_139 = edi
                char const* const var_14_139 = "GL_HP_convolution_border_modes"
                char eax_677
                int32_t ecx_263
                char* edx_265
                eax_677, ecx_263, edx_265 = sub_583a80(esi, edx_264, ecx_262)
                data_307b310 = eax_677
                int32_t var_18_54 = edi
                char const* const var_1c_54 = "GL_HP_image_transform"
                char eax_679
                int32_t ecx_264
                char* edx_266
                eax_679, ecx_264, edx_266 = sub_583a80(esi, edx_265, ecx_263)
                bool cond:184 = data_307b5bc != 0
                data_307b311 = eax_679
                
                if (cond:184 || eax_679 != 0)
                    char eax_680
                    eax_680, ecx_264, edx_266 = sub_58bec0()
                    ecx_264.b = eax_680 == 0
                    data_307b311 = ecx_264.b
                
                int32_t var_10_140 = edi
                char const* const var_14_140 = "GL_HP_occlusion_test"
                char eax_682
                int32_t ecx_265
                char* edx_267
                eax_682, ecx_265, edx_267 = sub_583a80(esi, edx_266, ecx_264)
                data_307b312 = eax_682
                int32_t var_18_55 = edi
                char const* const var_1c_55 = "GL_HP_texture_lighting"
                char eax_684
                int32_t ecx_266
                char* edx_268
                eax_684, ecx_266, edx_268 = sub_583a80(esi, edx_267, ecx_265)
                data_307b313 = eax_684
                int32_t var_20_25 = edi
                char const* const var_24_25 = "GL_IBM_cull_vertex"
                char eax_686
                int32_t ecx_267
                char* edx_269
                eax_686, ecx_267, edx_269 = sub_583a80(esi, edx_268, ecx_266)
                data_307b314 = eax_686
                int32_t var_28_20 = edi
                char const* const var_2c_20 = "GL_IBM_multimode_draw_arrays"
                char eax_688
                int32_t ecx_268
                char* edx_270
                eax_688, ecx_268, edx_270 = sub_583a80(esi, edx_269, ecx_267)
                bool cond:185 = data_307b5bc != 0
                data_307b315 = eax_688
                
                if (cond:185 || eax_688 != 0)
                    char eax_689
                    eax_689, ecx_268, edx_270 = sub_58bf50()
                    edx_270.b = eax_689 == 0
                    data_307b315 = edx_270.b
                
                int32_t var_10_141 = edi
                char const* const var_14_141 = "GL_IBM_rasterpos_clip"
                char eax_691
                int32_t ecx_269
                char* edx_271
                eax_691, ecx_269, edx_271 = sub_583a80(esi, edx_270, ecx_268)
                data_307b316 = eax_691
                int32_t var_18_56 = edi
                char const* const var_1c_56 = "GL_IBM_static_data"
                char eax_693
                int32_t ecx_270
                char* edx_272
                eax_693, ecx_270, edx_272 = sub_583a80(esi, edx_271, ecx_269)
                data_307b317 = eax_693
                int32_t var_20_26 = edi
                char const* const var_24_26 = "GL_IBM_texture_mirrored_repeat"
                char eax_695
                int32_t ecx_271
                char* edx_273
                eax_695, ecx_271, edx_273 = sub_583a80(esi, edx_272, ecx_270)
                data_307b318 = eax_695
                int32_t var_28_21 = edi
                char const* const var_2c_21 = "GL_IBM_vertex_array_lists"
                char eax_697
                int32_t ecx_272
                char* edx_274
                eax_697, ecx_272, edx_274 = sub_583a80(esi, edx_273, ecx_271)
                bool cond:186 = data_307b5bc != 0
                data_307b319 = eax_697
                
                if (cond:186 || eax_697 != 0)
                    bool eax_698
                    eax_698, ecx_272, edx_274 = sub_58bf90()
                    data_307b319 = eax_698 == 0
                
                int32_t var_10_142 = edi
                char const* const var_14_142 = "GL_INGR_color_clamp"
                char eax_700
                int32_t ecx_273
                char* edx_275
                eax_700, ecx_273, edx_275 = sub_583a80(esi, edx_274, ecx_272)
                data_307b31a = eax_700
                int32_t var_18_57 = edi
                char const* const var_1c_57 = "GL_INGR_interlace_read"
                char eax_702
                int32_t ecx_274
                char* edx_276
                eax_702, ecx_274, edx_276 = sub_583a80(esi, edx_275, ecx_273)
                data_307b31b = eax_702
                int32_t var_20_27 = edi
                char const* const var_24_27 = "GL_INTEL_parallel_arrays"
                char eax_704
                int32_t ecx_275
                char* edx_277
                eax_704, ecx_275, edx_277 = sub_583a80(esi, edx_276, ecx_274)
                bool cond:187 = data_307b5bc != 0
                data_307b31c = eax_704
                
                if (cond:187 || eax_704 != 0)
                    char eax_705
                    eax_705, ecx_275, edx_277 = sub_58c050()
                    ecx_275.b = eax_705 == 0
                    data_307b31c = ecx_275.b
                
                int32_t var_10_143 = edi
                char const* const var_14_143 = "GL_INTEL_texture_scissor"
                char eax_707
                int32_t ecx_276
                char* edx_278
                eax_707, ecx_276, edx_278 = sub_583a80(esi, edx_277, ecx_275)
                bool cond:188 = data_307b5bc != 0
                data_307b31d = eax_707
                
                if (cond:188 || eax_707 != 0)
                    char eax_708
                    eax_708, ecx_276, edx_278 = sub_58c0c0()
                    edx_278.b = eax_708 == 0
                    data_307b31d = edx_278.b
                
                int32_t var_10_144 = edi
                char const* const var_14_144 = "GL_KTX_buffer_region"
                char eax_710
                int32_t ecx_277
                char* edx_279
                eax_710, ecx_277, edx_279 = sub_583a80(esi, edx_278, ecx_276)
                bool cond:189 = data_307b5bc != 0
                data_307b31e = eax_710
                
                if (cond:189 || eax_710 != 0)
                    bool eax_711
                    eax_711, ecx_277, edx_279 = sub_58c100()
                    data_307b31e = eax_711 == 0
                
                int32_t var_10_145 = edi
                char const* const var_14_145 = "GL_MESAX_texture_stack"
                char eax_713
                int32_t ecx_278
                char* edx_280
                eax_713, ecx_278, edx_280 = sub_583a80(esi, edx_279, ecx_277)
                data_307b31f = eax_713
                int32_t var_18_58 = edi
                char const* const var_1c_58 = "GL_MESA_pack_invert"
                char eax_715
                int32_t ecx_279
                char* edx_281
                eax_715, ecx_279, edx_281 = sub_583a80(esi, edx_280, ecx_278)
                data_307b320 = eax_715
                int32_t var_20_28 = edi
                char const* const var_24_28 = "GL_MESA_resize_buffers"
                char eax_717
                int32_t ecx_280
                char* edx_282
                eax_717, ecx_280, edx_282 = sub_583a80(esi, edx_281, ecx_279)
                bool cond:191 = data_307b5bc != 0
                data_307b321 = eax_717
                
                if (cond:191 || eax_717 != 0)
                    PROC eax_718
                    eax_718, ecx_280, edx_282 = wglGetProcAddress("glResizeBuffersMESA")
                    data_307aa08 = eax_718
                    eax_718.b = eax_718 == 0
                    ecx_280.b = eax_718.b == 0
                    data_307b321 = ecx_280.b
                
                int32_t var_10_146 = edi
                char const* const var_14_146 = "GL_MESA_window_pos"
                char eax_720
                int32_t ecx_281
                char* edx_283
                eax_720, ecx_281, edx_283 = sub_583a80(esi, edx_282, ecx_280)
                bool cond:192 = data_307b5bc != 0
                data_307b322 = eax_720
                
                if (cond:192 || eax_720 != 0)
                    char eax_721
                    eax_721, ecx_281, edx_283 = sub_58c180()
                    edx_283.b = eax_721 == 0
                    data_307b322 = edx_283.b
                
                int32_t var_10_147 = edi
                char const* const var_14_147 = "GL_MESA_ycbcr_texture"
                char eax_723
                int32_t ecx_282
                char* edx_284
                eax_723, ecx_282, edx_284 = sub_583a80(esi, edx_283, ecx_281)
                data_307b323 = eax_723
                int32_t var_18_59 = edi
                char const* const var_1c_59 = "GL_NVX_gpu_memory_info"
                char eax_725
                int32_t ecx_283
                char* edx_285
                eax_725, ecx_283, edx_285 = sub_583a80(esi, edx_284, ecx_282)
                data_307b324 = eax_725
                int32_t var_20_29 = edi
                char const* const var_24_29 = "GL_NV_blend_square"
                char eax_727
                int32_t ecx_284
                char* edx_286
                eax_727, ecx_284, edx_286 = sub_583a80(esi, edx_285, ecx_283)
                data_307b325 = eax_727
                int32_t var_28_22 = edi
                char const* const var_2c_22 = "GL_NV_conditional_render"
                char eax_729
                int32_t ecx_285
                char* edx_287
                eax_729, ecx_285, edx_287 = sub_583a80(esi, edx_286, ecx_284)
                bool cond:193 = data_307b5bc != 0
                data_307b326 = eax_729
                
                if (cond:193 || eax_729 != 0)
                    bool eax_730
                    eax_730, ecx_285, edx_287 = sub_58c3a0()
                    data_307b326 = eax_730 == 0
                
                int32_t var_10_148 = edi
                char const* const var_14_148 = "GL_NV_copy_depth_to_color"
                char eax_732
                int32_t ecx_286
                char* edx_288
                eax_732, ecx_286, edx_288 = sub_583a80(esi, edx_287, ecx_285)
                data_307b327 = eax_732
                int32_t var_18_60 = edi
                char const* const var_1c_60 = "GL_NV_copy_image"
                char eax_734
                int32_t ecx_287
                char* edx_289
                eax_734, ecx_287, edx_289 = sub_583a80(esi, edx_288, ecx_286)
                bool cond:195 = data_307b5bc != 0
                data_307b328 = eax_734
                
                if (cond:195 || eax_734 != 0)
                    PROC eax_735
                    eax_735, ecx_287, edx_289 = wglGetProcAddress("glCopyImageSubDataNV")
                    data_307aa74 = eax_735
                    eax_735.b = eax_735 == 0
                    ecx_287.b = eax_735.b == 0
                    data_307b328 = ecx_287.b
                
                int32_t var_10_149 = edi
                char const* const var_14_149 = "GL_NV_depth_buffer_float"
                char eax_737
                int32_t ecx_288
                char* edx_290
                eax_737, ecx_288, edx_290 = sub_583a80(esi, edx_289, ecx_287)
                bool cond:196 = data_307b5bc != 0
                data_307b329 = eax_737
                
                if (cond:196 || eax_737 != 0)
                    char eax_738
                    eax_738, ecx_288, edx_290 = sub_58c3e0()
                    edx_290.b = eax_738 == 0
                    data_307b329 = edx_290.b
                
                int32_t var_10_150 = edi
                char const* const var_14_150 = "GL_NV_depth_clamp"
                char eax_740
                int32_t ecx_289
                char* edx_291
                eax_740, ecx_289, edx_291 = sub_583a80(esi, edx_290, ecx_288)
                data_307b32a = eax_740
                int32_t var_18_61 = edi
                char const* const var_1c_61 = "GL_NV_depth_range_unclamped"
                char eax_742
                int32_t ecx_290
                char* edx_292
                eax_742, ecx_290, edx_292 = sub_583a80(esi, edx_291, ecx_289)
                data_307b32b = eax_742
                int32_t var_20_30 = edi
                char const* const var_24_30 = "GL_NV_evaluators"
                char eax_744
                int32_t ecx_291
                char* edx_293
                eax_744, ecx_291, edx_293 = sub_583a80(esi, edx_292, ecx_290)
                bool cond:197 = data_307b5bc != 0
                data_307b32c = eax_744
                
                if (cond:197 || eax_744 != 0)
                    bool eax_745
                    eax_745, ecx_291, edx_293 = sub_58c430()
                    data_307b32c = eax_745 == 0
                
                int32_t var_10_151 = edi
                char const* const var_14_151 = "GL_NV_explicit_multisample"
                char eax_747
                int32_t ecx_292
                char* edx_294
                eax_747, ecx_292, edx_294 = sub_583a80(esi, edx_293, ecx_291)
                bool cond:198 = data_307b5bc != 0
                data_307b32d = eax_747
                
                if (cond:198 || eax_747 != 0)
                    char eax_748
                    eax_748, ecx_292, edx_294 = sub_58c510()
                    ecx_292.b = eax_748 == 0
                    data_307b32d = ecx_292.b
                
                int32_t var_10_152 = edi
                char const* const var_14_152 = "GL_NV_fence"
                char eax_750
                int32_t ecx_293
                char* edx_295
                eax_750, ecx_293, edx_295 = sub_583a80(esi, edx_294, ecx_292)
                bool cond:199 = data_307b5bc != 0
                data_307b32e = eax_750
                
                if (cond:199 || eax_750 != 0)
                    char eax_751
                    eax_751, ecx_293, edx_295 = sub_58c560()
                    edx_295.b = eax_751 == 0
                    data_307b32e = edx_295.b
                
                int32_t var_10_153 = edi
                char const* const var_14_153 = "GL_NV_float_buffer"
                char eax_753
                int32_t ecx_294
                char* edx_296
                eax_753, ecx_294, edx_296 = sub_583a80(esi, edx_295, ecx_293)
                data_307b32f = eax_753
                int32_t var_18_62 = edi
                char const* const var_1c_62 = "GL_NV_fog_distance"
                char eax_755
                int32_t ecx_295
                char* edx_297
                eax_755, ecx_295, edx_297 = sub_583a80(esi, edx_296, ecx_294)
                data_307b330 = eax_755
                int32_t var_20_31 = edi
                char const* const var_24_31 = "GL_NV_fragment_program"
                char eax_757
                int32_t ecx_296
                char* edx_298
                eax_757, ecx_296, edx_298 = sub_583a80(esi, edx_297, ecx_295)
                bool cond:200 = data_307b5bc != 0
                data_307b331 = eax_757
                
                if (cond:200 || eax_757 != 0)
                    bool eax_758
                    eax_758, ecx_296, edx_298 = sub_58c610()
                    data_307b331 = eax_758 == 0
                
                int32_t var_10_154 = edi
                char const* const var_14_154 = "GL_NV_fragment_program2"
                char eax_760
                int32_t ecx_297
                char* edx_299
                eax_760, ecx_297, edx_299 = sub_583a80(esi, edx_298, ecx_296)
                data_307b332 = eax_760
                int32_t var_18_63 = edi
                char const* const var_1c_63 = "GL_NV_gpu_program4"
                char eax_762
                int32_t ecx_298
                char* edx_300
                eax_762, ecx_298, edx_300 = sub_583a80(esi, edx_299, ecx_297)
                data_307b333 = eax_762
                int32_t var_20_32 = edi
                char const* const var_24_32 = "GL_NV_fragment_program_option"
                char eax_764
                int32_t ecx_299
                char* edx_301
                eax_764, ecx_299, edx_301 = sub_583a80(esi, edx_300, ecx_298)
                data_307b334 = eax_764
                int32_t var_28_23 = edi
                char const* const var_2c_23 = "GL_NV_framebuffer_multisample_coverage"
                char eax_766
                int32_t ecx_300
                char* edx_302
                eax_766, ecx_300, edx_302 = sub_583a80(esi, edx_301, ecx_299)
                bool cond:202 = data_307b5bc != 0
                data_307b335 = eax_766
                
                if (cond:202 || eax_766 != 0)
                    PROC eax_767
                    eax_767, ecx_300, edx_302 =
                        wglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV")
                    data_307aae8 = eax_767
                    eax_767.b = eax_767 == 0
                    ecx_300.b = eax_767.b == 0
                    data_307b335 = ecx_300.b
                
                int32_t var_10_155 = edi
                char const* const var_14_155 = "GL_NV_gpu_program4"
                char eax_769
                int32_t ecx_301
                char* edx_303
                eax_769, ecx_301, edx_303 = sub_583a80(esi, edx_302, ecx_300)
                bool cond:204 = data_307b5bc != 0
                data_307b336 = eax_769
                
                if (cond:204 || eax_769 != 0)
                    PROC eax_770
                    eax_770, ecx_301, edx_303 = wglGetProcAddress("glProgramVertexLimitNV")
                    data_307aaec = eax_770
                    eax_770.b = eax_770 == 0
                    edx_303.b = eax_770.b == 0
                    data_307b336 = edx_303.b
                
                int32_t var_10_156 = edi
                char const* const var_14_156 = "GL_NV_geometry_shader4"
                char eax_772
                int32_t ecx_302
                char* edx_304
                eax_772, ecx_302, edx_304 = sub_583a80(esi, edx_303, ecx_301)
                data_307b337 = eax_772
                int32_t var_18_64 = edi
                char const* const var_1c_64 = "GL_NV_gpu_program4"
                char eax_774
                int32_t ecx_303
                char* edx_305
                eax_774, ecx_303, edx_305 = sub_583a80(esi, edx_304, ecx_302)
                bool cond:205 = data_307b5bc != 0
                data_307b338 = eax_774
                
                if (cond:205 || eax_774 != 0)
                    bool eax_775
                    eax_775, ecx_303, edx_305 = sub_58c6a0()
                    data_307b338 = eax_775 == 0
                
                int32_t var_10_157 = edi
                char const* const var_14_157 = "GL_NV_gpu_program5"
                char eax_777
                int32_t ecx_304
                char* edx_306
                eax_777, ecx_304, edx_306 = sub_583a80(esi, edx_305, ecx_303)
                data_307b339 = eax_777
                int32_t var_18_65 = edi
                char const* const var_1c_65 = "GL_NV_gpu_program_fp64"
                char eax_779
                int32_t ecx_305
                char* edx_307
                eax_779, ecx_305, edx_307 = sub_583a80(esi, edx_306, ecx_304)
                data_307b33a = eax_779
                int32_t var_20_33 = edi
                char const* const var_24_33 = "GL_NV_gpu_shader5"
                char eax_781
                int32_t ecx_306
                char* edx_308
                eax_781, ecx_306, edx_308 = sub_583a80(esi, edx_307, ecx_305)
                bool cond:206 = data_307b5bc != 0
                data_307b33b = eax_781
                
                if (cond:206 || eax_781 != 0)
                    char eax_782
                    eax_782, ecx_306, edx_308 = sub_58c7c0()
                    ecx_306.b = eax_782 == 0
                    data_307b33b = ecx_306.b
                
                int32_t var_10_158 = edi
                char const* const var_14_158 = "GL_NV_half_float"
                char eax_784
                int32_t ecx_307
                char* edx_309
                eax_784, ecx_307, edx_309 = sub_583a80(esi, edx_308, ecx_306)
                bool cond:207 = data_307b5bc != 0
                data_307b33c = eax_784
                
                if (cond:207 || eax_784 != 0)
                    char eax_785
                    eax_785, ecx_307, edx_309 = sub_58cac0()
                    edx_309.b = eax_785 == 0
                    data_307b33c = edx_309.b
                
                int32_t var_10_159 = edi
                char const* const var_14_159 = "GL_NV_light_max_exponent"
                char eax_787
                int32_t ecx_308
                char* edx_310
                eax_787, ecx_308, edx_310 = sub_583a80(esi, edx_309, ecx_307)
                data_307b33d = eax_787
                int32_t var_18_66 = edi
                char const* const var_1c_66 = "GL_NV_multisample_coverage"
                char eax_789
                int32_t ecx_309
                char* edx_311
                eax_789, ecx_309, edx_311 = sub_583a80(esi, edx_310, ecx_308)
                data_307b33e = eax_789
                int32_t var_20_34 = edi
                char const* const var_24_34 = "GL_NV_multisample_filter_hint"
                char eax_791
                int32_t ecx_310
                char* edx_312
                eax_791, ecx_310, edx_312 = sub_583a80(esi, edx_311, ecx_309)
                data_307b33f = eax_791
                int32_t var_28_24 = edi
                char const* const var_2c_24 = "GL_NV_occlusion_query"
                char eax_793
                int32_t ecx_311
                char* edx_313
                eax_793, ecx_311, edx_313 = sub_583a80(esi, edx_312, ecx_310)
                bool cond:208 = data_307b5bc != 0
                data_307b340 = eax_793
                
                if (cond:208 || eax_793 != 0)
                    bool eax_794
                    eax_794, ecx_311, edx_313 = sub_58cec0()
                    data_307b340 = eax_794 == 0
                
                int32_t var_10_160 = edi
                char const* const var_14_160 = "GL_NV_packed_depth_stencil"
                char eax_796
                int32_t ecx_312
                char* edx_314
                eax_796, ecx_312, edx_314 = sub_583a80(esi, edx_313, ecx_311)
                data_307b341 = eax_796
                int32_t var_18_67 = edi
                char const* const var_1c_67 = "GL_NV_parameter_buffer_object"
                char eax_798
                int32_t ecx_313
                char* edx_315
                eax_798, ecx_313, edx_315 = sub_583a80(esi, edx_314, ecx_312)
                bool cond:209 = data_307b5bc != 0
                data_307b342 = eax_798
                
                if (cond:209 || eax_798 != 0)
                    char eax_799
                    eax_799, ecx_313, edx_315 = sub_58cf70()
                    ecx_313.b = eax_799 == 0
                    data_307b342 = ecx_313.b
                
                int32_t var_10_161 = edi
                char const* const var_14_161 = "GL_NV_parameter_buffer_object2"
                char eax_801
                int32_t ecx_314
                char* edx_316
                eax_801, ecx_314, edx_316 = sub_583a80(esi, edx_315, ecx_313)
                data_307b343 = eax_801
                int32_t var_18_68 = edi
                char const* const var_1c_68 = "GL_NV_path_rendering"
                char eax_803
                int32_t ecx_315
                char* edx_317
                eax_803, ecx_315, edx_317 = sub_583a80(esi, edx_316, ecx_314)
                bool cond:210 = data_307b5bc != 0
                data_307b344 = eax_803
                
                if (cond:210 || eax_803 != 0)
                    char eax_804
                    eax_804, ecx_315, edx_317 = sub_58cfc0()
                    edx_317.b = eax_804 == 0
                    data_307b344 = edx_317.b
                
                int32_t var_10_162 = edi
                char const* const var_14_162 = "GL_NV_pixel_data_range"
                char eax_806
                int32_t ecx_316
                char* edx_318
                eax_806, ecx_316, edx_318 = sub_583a80(esi, edx_317, ecx_315)
                bool cond:211 = data_307b5bc != 0
                data_307b345 = eax_806
                
                if (cond:211 || eax_806 != 0)
                    bool eax_807
                    eax_807, ecx_316, edx_318 = sub_58d410()
                    data_307b345 = eax_807 == 0
                
                int32_t var_10_163 = edi
                char const* const var_14_163 = "GL_NV_point_sprite"
                char eax_809
                int32_t ecx_317
                char* edx_319
                eax_809, ecx_317, edx_319 = sub_583a80(esi, edx_318, ecx_316)
                bool cond:212 = data_307b5bc != 0
                data_307b346 = eax_809
                
                if (cond:212 || eax_809 != 0)
                    char eax_810
                    eax_810, ecx_317, edx_319 = sub_58d450()
                    ecx_317.b = eax_810 == 0
                    data_307b346 = ecx_317.b
                
                int32_t var_10_164 = edi
                char const* const var_14_164 = "GL_NV_present_video"
                char eax_812
                int32_t ecx_318
                char* edx_320
                eax_812, ecx_318, edx_320 = sub_583a80(esi, edx_319, ecx_317)
                bool cond:213 = data_307b5bc != 0
                data_307b347 = eax_812
                
                if (cond:213 || eax_812 != 0)
                    char eax_813
                    eax_813, ecx_318, edx_320 = sub_58d490()
                    edx_320.b = eax_813 == 0
                    data_307b347 = edx_320.b
                
                int32_t var_10_165 = edi
                char const* const var_14_165 = "GL_NV_primitive_restart"
                char eax_815
                int32_t ecx_319
                char* edx_321
                eax_815, ecx_319, edx_321 = sub_583a80(esi, edx_320, ecx_318)
                bool cond:214 = data_307b5bc != 0
                data_307b348 = eax_815
                
                if (cond:214 || eax_815 != 0)
                    bool eax_816
                    eax_816, ecx_319, edx_321 = sub_58d520()
                    data_307b348 = eax_816 == 0
                
                int32_t var_10_166 = edi
                char const* const var_14_166 = "GL_NV_register_combiners"
                char eax_818
                int32_t ecx_320
                char* edx_322
                eax_818, ecx_320, edx_322 = sub_583a80(esi, edx_321, ecx_319)
                bool cond:215 = data_307b5bc != 0
                data_307b349 = eax_818
                
                if (cond:215 || eax_818 != 0)
                    char eax_819
                    eax_819, ecx_320, edx_322 = sub_58d560()
                    ecx_320.b = eax_819 == 0
                    data_307b349 = ecx_320.b
                
                int32_t var_10_167 = edi
                char const* const var_14_167 = "GL_NV_register_combiners2"
                char eax_821
                int32_t ecx_321
                char* edx_323
                eax_821, ecx_321, edx_323 = sub_583a80(esi, edx_322, ecx_320)
                bool cond:216 = data_307b5bc != 0
                data_307b34a = eax_821
                
                if (cond:216 || eax_821 != 0)
                    char eax_822
                    eax_822, ecx_321, edx_323 = sub_58d690()
                    edx_323.b = eax_822 == 0
                    data_307b34a = edx_323.b
                
                int32_t var_10_168 = edi
                char const* const var_14_168 = "GL_NV_shader_buffer_load"
                char eax_824
                int32_t ecx_322
                char* edx_324
                eax_824, ecx_322, edx_324 = sub_583a80(esi, edx_323, ecx_321)
                bool cond:217 = data_307b5bc != 0
                data_307b34b = eax_824
                
                if (cond:217 || eax_824 != 0)
                    bool eax_825
                    eax_825, ecx_322, edx_324 = sub_58d6d0()
                    data_307b34b = eax_825 == 0
                
                int32_t var_10_169 = edi
                char const* const var_14_169 = "GL_NV_gpu_program5"
                char eax_827
                int32_t ecx_323
                char* edx_325
                eax_827, ecx_323, edx_325 = sub_583a80(esi, edx_324, ecx_322)
                data_307b34c = eax_827
                int32_t var_18_69 = edi
                char const* const var_1c_69 = "GL_NV_texgen_emboss"
                char eax_829
                int32_t ecx_324
                char* edx_326
                eax_829, ecx_324, edx_326 = sub_583a80(esi, edx_325, ecx_323)
                data_307b34d = eax_829
                int32_t var_20_35 = edi
                char const* const var_24_35 = "GL_NV_texgen_reflection"
                char eax_831
                int32_t ecx_325
                char* edx_327
                eax_831, ecx_325, edx_327 = sub_583a80(esi, edx_326, ecx_324)
                data_307b34e = eax_831
                int32_t var_28_25 = edi
                char const* const var_2c_25 = "GL_NV_texture_barrier"
                char eax_833
                int32_t ecx_326
                char* edx_328
                eax_833, ecx_326, edx_328 = sub_583a80(esi, edx_327, ecx_325)
                bool cond:219 = data_307b5bc != 0
                data_307b34f = eax_833
                
                if (cond:219 || eax_833 != 0)
                    PROC eax_834
                    eax_834, ecx_326, edx_328 = wglGetProcAddress("glTextureBarrierNV")
                    data_307adec = eax_834
                    eax_834.b = eax_834 == 0
                    ecx_326.b = eax_834.b == 0
                    data_307b34f = ecx_326.b
                
                int32_t var_10_170 = edi
                char const* const var_14_170 = "GL_NV_texture_compression_vtc"
                char eax_836
                int32_t ecx_327
                char* edx_329
                eax_836, ecx_327, edx_329 = sub_583a80(esi, edx_328, ecx_326)
                data_307b350 = eax_836
                int32_t var_18_70 = edi
                char const* const var_1c_70 = "GL_NV_texture_env_combine4"
                char eax_838
                int32_t ecx_328
                char* edx_330
                eax_838, ecx_328, edx_330 = sub_583a80(esi, edx_329, ecx_327)
                data_307b351 = eax_838
                int32_t var_20_36 = edi
                char const* const var_24_36 = "GL_NV_texture_expand_normal"
                char eax_840
                int32_t ecx_329
                char* edx_331
                eax_840, ecx_329, edx_331 = sub_583a80(esi, edx_330, ecx_328)
                data_307b352 = eax_840
                int32_t var_28_26 = edi
                char const* const var_2c_26 = "GL_NV_texture_multisample"
                char eax_842
                int32_t ecx_330
                char* edx_332
                eax_842, ecx_330, edx_332 = sub_583a80(esi, edx_331, ecx_329)
                bool cond:220 = data_307b5bc != 0
                data_307b353 = eax_842
                
                if (cond:220 || eax_842 != 0)
                    char eax_843
                    eax_843, ecx_330, edx_332 = sub_58d800()
                    edx_332.b = eax_843 == 0
                    data_307b353 = edx_332.b
                
                int32_t var_10_171 = edi
                char const* const var_14_171 = "GL_NV_texture_rectangle"
                char eax_845
                int32_t ecx_331
                char* edx_333
                eax_845, ecx_331, edx_333 = sub_583a80(esi, edx_332, ecx_330)
                data_307b354 = eax_845
                int32_t var_18_71 = edi
                char const* const var_1c_71 = "GL_NV_texture_shader"
                char eax_847
                int32_t ecx_332
                char* edx_334
                eax_847, ecx_332, edx_334 = sub_583a80(esi, edx_333, ecx_331)
                data_307b355 = eax_847
                int32_t var_20_37 = edi
                char const* const var_24_37 = "GL_NV_texture_shader2"
                char eax_849
                int32_t ecx_333
                char* edx_335
                eax_849, ecx_333, edx_335 = sub_583a80(esi, edx_334, ecx_332)
                data_307b356 = eax_849
                int32_t var_28_27 = edi
                char const* const var_2c_27 = "GL_NV_texture_shader3"
                char eax_851
                int32_t ecx_334
                char* edx_336
                eax_851, ecx_334, edx_336 = sub_583a80(esi, edx_335, ecx_333)
                data_307b357 = eax_851
                int32_t var_30_10 = edi
                char const* const var_34_10 = "GL_NV_transform_feedback"
                char eax_853
                int32_t ecx_335
                char* edx_337
                eax_853, ecx_335, edx_337 = sub_583a80(esi, edx_336, ecx_334)
                bool cond:221 = data_307b5bc != 0
                data_307b358 = eax_853
                
                if (cond:221 || eax_853 != 0)
                    bool eax_854
                    eax_854, ecx_335, edx_337 = sub_58d890()
                    data_307b358 = eax_854 == 0
                
                int32_t var_10_172 = edi
                char const* const var_14_172 = "GL_NV_transform_feedback2"
                char eax_856
                int32_t ecx_336
                char* edx_338
                eax_856, ecx_336, edx_338 = sub_583a80(esi, edx_337, ecx_335)
                bool cond:222 = data_307b5bc != 0
                data_307b359 = eax_856
                
                if (cond:222 || eax_856 != 0)
                    char eax_857
                    eax_857, ecx_336, edx_338 = sub_58d990()
                    ecx_336.b = eax_857 == 0
                    data_307b359 = ecx_336.b
                
                int32_t var_10_173 = edi
                char const* const var_14_173 = "GL_NV_vdpau_interop"
                char eax_859
                int32_t ecx_337
                char* edx_339
                eax_859, ecx_337, edx_339 = sub_583a80(esi, edx_338, ecx_336)
                bool cond:223 = data_307b5bc != 0
                data_307b35a = eax_859
                
                if (cond:223 || eax_859 != 0)
                    char eax_860
                    eax_860, ecx_337, edx_339 = sub_58da40()
                    edx_339.b = eax_860 == 0
                    data_307b35a = edx_339.b
                
                int32_t var_10_174 = edi
                char const* const var_14_174 = "GL_NV_vertex_array_range"
                char eax_862
                int32_t ecx_338
                char* edx_340
                eax_862, ecx_338, edx_340 = sub_583a80(esi, edx_339, ecx_337)
                bool cond:224 = data_307b5bc != 0
                data_307b35b = eax_862
                
                if (cond:224 || eax_862 != 0)
                    bool eax_863
                    eax_863, ecx_338, edx_340 = sub_58db30()
                    data_307b35b = eax_863 == 0
                
                int32_t var_10_175 = edi
                char const* const var_14_175 = "GL_NV_vertex_array_range2"
                char eax_865
                int32_t ecx_339
                char* edx_341
                eax_865, ecx_339, edx_341 = sub_583a80(esi, edx_340, ecx_338)
                data_307b35c = eax_865
                int32_t var_18_72 = edi
                char const* const var_1c_72 = "GL_NV_vertex_attrib_integer_64bit"
                char eax_867
                int32_t ecx_340
                char* edx_342
                eax_867, ecx_340, edx_342 = sub_583a80(esi, edx_341, ecx_339)
                bool cond:225 = data_307b5bc != 0
                data_307b35d = eax_867
                
                if (cond:225 || eax_867 != 0)
                    char eax_868
                    eax_868, ecx_340, edx_342 = sub_58db70()
                    ecx_340.b = eax_868 == 0
                    data_307b35d = ecx_340.b
                
                int32_t var_10_176 = edi
                char const* const var_14_176 = "GL_NV_vertex_buffer_unified_memory"
                char eax_870
                int32_t ecx_341
                char* edx_343
                eax_870, ecx_341, edx_343 = sub_583a80(esi, edx_342, ecx_340)
                bool cond:226 = data_307b5bc != 0
                data_307b35e = eax_870
                
                if (cond:226 || eax_870 != 0)
                    char eax_871
                    eax_871, ecx_341, edx_343 = sub_58dd20()
                    edx_343.b = eax_871 == 0
                    data_307b35e = edx_343.b
                
                int32_t var_10_177 = edi
                char const* const var_14_177 = "GL_NV_vertex_program"
                char eax_873
                int32_t ecx_342
                char* edx_344
                eax_873, ecx_342, edx_344 = sub_583a80(esi, edx_343, ecx_341)
                bool cond:227 = data_307b5bc != 0
                data_307b35f = eax_873
                
                if (cond:227 || eax_873 != 0)
                    bool eax_874
                    eax_874, ecx_342, edx_344 = sub_58de40()
                    data_307b35f = eax_874 == 0
                
                int32_t var_10_178 = edi
                char const* const var_14_178 = "GL_NV_vertex_program1_1"
                char eax_876
                int32_t ecx_343
                char* edx_345
                eax_876, ecx_343, edx_345 = sub_583a80(esi, edx_344, ecx_342)
                data_307b360 = eax_876
                int32_t var_18_73 = edi
                char const* const var_1c_73 = "GL_NV_vertex_program2"
                char eax_878
                int32_t ecx_344
                char* edx_346
                eax_878, ecx_344, edx_346 = sub_583a80(esi, edx_345, ecx_343)
                data_307b361 = eax_878
                int32_t var_20_38 = edi
                char const* const var_24_38 = "GL_NV_vertex_program2_option"
                char eax_880
                int32_t ecx_345
                char* edx_347
                eax_880, ecx_345, edx_347 = sub_583a80(esi, edx_346, ecx_344)
                data_307b362 = eax_880
                int32_t var_28_28 = edi
                char const* const var_2c_28 = "GL_NV_vertex_program3"
                char eax_882
                int32_t ecx_346
                char* edx_348
                eax_882, ecx_346, edx_348 = sub_583a80(esi, edx_347, ecx_345)
                data_307b363 = eax_882
                int32_t var_30_11 = edi
                char const* const var_34_11 = "GL_NV_gpu_program4"
                char eax_884
                int32_t ecx_347
                char* edx_349
                eax_884, ecx_347, edx_349 = sub_583a80(esi, edx_348, ecx_346)
                data_307b364 = eax_884
                int32_t var_38_6 = edi
                char const* const var_3c_6 = "GL_NV_video_capture"
                char eax_886
                int32_t ecx_348
                char* edx_350
                eax_886, ecx_348, edx_350 = sub_583a80(esi, edx_349, ecx_347)
                bool cond:228 = data_307b5bc != 0
                data_307b365 = eax_886
                
                if (cond:228 || eax_886 != 0)
                    char eax_887
                    eax_887, ecx_348, edx_350 = sub_58e3d0()
                    ecx_348.b = eax_887 == 0
                    data_307b365 = ecx_348.b
                
                int32_t var_10_179 = edi
                char const* const var_14_179 = "GL_OES_byte_coordinates"
                char eax_889
                int32_t ecx_349
                char* edx_351
                eax_889, ecx_349, edx_351 = sub_583a80(esi, edx_350, ecx_348)
                data_307b366 = eax_889
                int32_t var_18_74 = edi
                char const* const var_1c_74 = "GL_OES_compressed_paletted_texture"
                char eax_891
                int32_t ecx_350
                char* edx_352
                eax_891, ecx_350, edx_352 = sub_583a80(esi, edx_351, ecx_349)
                data_307b367 = eax_891
                int32_t var_20_39 = edi
                char const* const var_24_39 = "GL_OES_read_format"
                char eax_893
                int32_t ecx_351
                char* edx_353
                eax_893, ecx_351, edx_353 = sub_583a80(esi, edx_352, ecx_350)
                data_307b368 = eax_893
                int32_t var_28_29 = edi
                char const* const var_2c_29 = "GL_OES_single_precision"
                char eax_895
                int32_t ecx_352
                char* edx_354
                eax_895, ecx_352, edx_354 = sub_583a80(esi, edx_353, ecx_351)
                bool cond:229 = data_307b5bc != 0
                data_307b369 = eax_895
                
                if (cond:229 || eax_895 != 0)
                    char eax_896
                    eax_896, ecx_352, edx_354 = sub_58e4f0()
                    edx_354.b = eax_896 == 0
                    data_307b369 = edx_354.b
                
                int32_t var_10_180 = edi
                char const* const var_14_180 = "GL_OML_interlace"
                char eax_898
                int32_t ecx_353
                char* edx_355
                eax_898, ecx_353, edx_355 = sub_583a80(esi, edx_354, ecx_352)
                data_307b36a = eax_898
                int32_t var_18_75 = edi
                char const* const var_1c_75 = "GL_OML_resample"
                char eax_900
                int32_t ecx_354
                char* edx_356
                eax_900, ecx_354, edx_356 = sub_583a80(esi, edx_355, ecx_353)
                data_307b36b = eax_900
                int32_t var_20_40 = edi
                char const* const var_24_40 = "GL_OML_subsample"
                char eax_902
                int32_t ecx_355
                char* edx_357
                eax_902, ecx_355, edx_357 = sub_583a80(esi, edx_356, ecx_354)
                data_307b36c = eax_902
                int32_t var_28_30 = edi
                char const* const var_2c_30 = "GL_PGI_misc_hints"
                char eax_904
                int32_t ecx_356
                char* edx_358
                eax_904, ecx_356, edx_358 = sub_583a80(esi, edx_357, ecx_355)
                data_307b36d = eax_904
                int32_t var_30_12 = edi
                char const* const var_34_12 = "GL_PGI_vertex_hints"
                char eax_906
                int32_t ecx_357
                char* edx_359
                eax_906, ecx_357, edx_359 = sub_583a80(esi, edx_358, ecx_356)
                data_307b36e = eax_906
                int32_t var_38_7 = edi
                char const* const var_3c_7 = "GL_REND_screen_coordinates"
                char eax_908
                int32_t ecx_358
                char* edx_360
                eax_908, ecx_358, edx_360 = sub_583a80(esi, edx_359, ecx_357)
                data_307b36f = eax_908
                int32_t var_40_5 = edi
                char const* const var_44_5 = "GL_S3_s3tc"
                char eax_910
                int32_t ecx_359
                char* edx_361
                eax_910, ecx_359, edx_361 = sub_583a80(esi, edx_360, ecx_358)
                data_307b370 = eax_910
                int32_t var_48_2 = edi
                char const* const var_4c_2 = "GL_SGIS_color_range"
                char eax_912
                int32_t ecx_360
                char* edx_362
                eax_912, ecx_360, edx_362 = sub_583a80(esi, edx_361, ecx_359)
                data_307b371 = eax_912
                int32_t var_10_181 = edi
                char const* const var_14_181 = "GL_SGIS_detail_texture"
                char eax_914
                int32_t ecx_361
                char* edx_363
                eax_914, ecx_361, edx_363 = sub_583a80(esi, edx_362, ecx_360)
                bool cond:230 = data_307b5bc != 0
                data_307b372 = eax_914
                
                if (cond:230 || eax_914 != 0)
                    bool eax_915
                    eax_915, ecx_361, edx_363 = sub_58e580()
                    data_307b372 = eax_915 == 0
                
                int32_t var_10_182 = edi
                char const* const var_14_182 = "GL_SGIS_fog_function"
                char eax_917
                int32_t ecx_362
                char* edx_364
                eax_917, ecx_362, edx_364 = sub_583a80(esi, edx_363, ecx_361)
                bool cond:231 = data_307b5bc != 0
                data_307b373 = eax_917
                
                if (cond:231 || eax_917 != 0)
                    char eax_918
                    eax_918, ecx_362, edx_364 = sub_58e5c0()
                    ecx_362.b = eax_918 == 0
                    data_307b373 = ecx_362.b
                
                int32_t var_10_183 = edi
                char const* const var_14_183 = "GL_SGIS_generate_mipmap"
                char eax_920
                int32_t ecx_363
                char* edx_365
                eax_920, ecx_363, edx_365 = sub_583a80(esi, edx_364, ecx_362)
                data_307b374 = eax_920
                int32_t var_18_76 = edi
                char const* const var_1c_76 = "GL_SGIS_multisample"
                char eax_922
                int32_t ecx_364
                char* edx_366
                eax_922, ecx_364, edx_366 = sub_583a80(esi, edx_365, ecx_363)
                bool cond:232 = data_307b5bc != 0
                data_307b375 = eax_922
                
                if (cond:232 || eax_922 != 0)
                    char eax_923
                    eax_923, ecx_364, edx_366 = sub_58e600()
                    edx_366.b = eax_923 == 0
                    data_307b375 = edx_366.b
                
                int32_t var_10_184 = edi
                char const* const var_14_184 = "GL_SGIS_pixel_texture"
                char eax_925
                int32_t ecx_365
                char* edx_367
                eax_925, ecx_365, edx_367 = sub_583a80(esi, edx_366, ecx_364)
                data_307b376 = eax_925
                int32_t var_18_77 = edi
                char const* const var_1c_77 = "GL_SGIS_point_line_texgen"
                char eax_927
                int32_t ecx_366
                char* edx_368
                eax_927, ecx_366, edx_368 = sub_583a80(esi, edx_367, ecx_365)
                data_307b377 = eax_927
                int32_t var_20_41 = edi
                char const* const var_24_41 = "GL_SGIS_sharpen_texture"
                char eax_929
                int32_t ecx_367
                char* edx_369
                eax_929, ecx_367, edx_369 = sub_583a80(esi, edx_368, ecx_366)
                bool cond:233 = data_307b5bc != 0
                data_307b378 = eax_929
                
                if (cond:233 || eax_929 != 0)
                    bool eax_930
                    eax_930, ecx_367, edx_369 = sub_58e640()
                    data_307b378 = eax_930 == 0
                
                int32_t var_10_185 = edi
                char const* const var_14_185 = "GL_SGIS_texture4D"
                char eax_932
                int32_t ecx_368
                char* edx_370
                eax_932, ecx_368, edx_370 = sub_583a80(esi, edx_369, ecx_367)
                bool cond:234 = data_307b5bc != 0
                data_307b379 = eax_932
                
                if (cond:234 || eax_932 != 0)
                    char eax_933
                    eax_933, ecx_368, edx_370 = sub_58e680()
                    ecx_368.b = eax_933 == 0
                    data_307b379 = ecx_368.b
                
                int32_t var_10_186 = edi
                char const* const var_14_186 = "GL_SGIS_texture_border_clamp"
                char eax_935
                int32_t ecx_369
                char* edx_371
                eax_935, ecx_369, edx_371 = sub_583a80(esi, edx_370, ecx_368)
                data_307b37a = eax_935
                int32_t var_18_78 = edi
                char const* const var_1c_78 = "GL_SGIS_texture_edge_clamp"
                char eax_937
                int32_t ecx_370
                char* edx_372
                eax_937, ecx_370, edx_372 = sub_583a80(esi, edx_371, ecx_369)
                data_307b37b = eax_937
                int32_t var_20_42 = edi
                char const* const var_24_42 = "GL_SGIS_texture_filter4"
                char eax_939
                int32_t ecx_371
                char* edx_373
                eax_939, ecx_371, edx_373 = sub_583a80(esi, edx_372, ecx_370)
                bool cond:235 = data_307b5bc != 0
                data_307b37c = eax_939
                
                if (cond:235 || eax_939 != 0)
                    char eax_940
                    eax_940, ecx_371, edx_373 = sub_58e6c0()
                    edx_373.b = eax_940 == 0
                    data_307b37c = edx_373.b
                
                int32_t var_10_187 = edi
                char const* const var_14_187 = "GL_SGIS_texture_lod"
                char eax_942
                int32_t ecx_372
                char* edx_374
                eax_942, ecx_372, edx_374 = sub_583a80(esi, edx_373, ecx_371)
                data_307b37d = eax_942
                int32_t var_18_79 = edi
                char const* const var_1c_79 = "GL_SGIS_texture_select"
                char eax_944
                int32_t ecx_373
                char* edx_375
                eax_944, ecx_373, edx_375 = sub_583a80(esi, edx_374, ecx_372)
                data_307b37e = eax_944
                int32_t var_20_43 = edi
                char const* const var_24_43 = "GL_SGIX_async"
                char eax_946
                int32_t ecx_374
                char* edx_376
                eax_946, ecx_374, edx_376 = sub_583a80(esi, edx_375, ecx_373)
                bool cond:236 = data_307b5bc != 0
                data_307b37f = eax_946
                
                if (cond:236 || eax_946 != 0)
                    bool eax_947
                    eax_947, ecx_374, edx_376 = sub_58e700()
                    data_307b37f = eax_947 == 0
                
                int32_t var_10_188 = edi
                char const* const var_14_188 = "GL_SGIX_async_histogram"
                char eax_949
                int32_t ecx_375
                char* edx_377
                eax_949, ecx_375, edx_377 = sub_583a80(esi, edx_376, ecx_374)
                data_307b380 = eax_949
                int32_t var_18_80 = edi
                char const* const var_1c_80 = "GL_SGIX_async_pixel"
                char eax_951
                int32_t ecx_376
                char* edx_378
                eax_951, ecx_376, edx_378 = sub_583a80(esi, edx_377, ecx_375)
                data_307b381 = eax_951
                int32_t var_20_44 = edi
                char const* const var_24_44 = "GL_SGIX_blend_alpha_minmax"
                char eax_953
                int32_t ecx_377
                char* edx_379
                eax_953, ecx_377, edx_379 = sub_583a80(esi, edx_378, ecx_376)
                data_307b382 = eax_953
                int32_t var_28_31 = edi
                char const* const var_2c_31 = "GL_SGIX_clipmap"
                char eax_955
                int32_t ecx_378
                char* edx_380
                eax_955, ecx_378, edx_380 = sub_583a80(esi, edx_379, ecx_377)
                data_307b383 = eax_955
                int32_t var_30_13 = edi
                char const* const var_34_13 = "GL_SGIX_convolution_accuracy"
                char eax_957
                int32_t ecx_379
                char* edx_381
                eax_957, ecx_379, edx_381 = sub_583a80(esi, edx_380, ecx_378)
                data_307b384 = eax_957
                int32_t var_38_8 = edi
                char const* const var_3c_8 = "GL_SGIX_depth_texture"
                char eax_959
                int32_t ecx_380
                char* edx_382
                eax_959, ecx_380, edx_382 = sub_583a80(esi, edx_381, ecx_379)
                data_307b385 = eax_959
                int32_t var_40_6 = edi
                char const* const var_44_6 = "GL_SGIX_flush_raster"
                char eax_961
                int32_t ecx_381
                char* edx_383
                eax_961, ecx_381, edx_383 = sub_583a80(esi, edx_382, ecx_380)
                bool cond:238 = data_307b5bc != 0
                data_307b386 = eax_961
                
                if (cond:238 || eax_961 != 0)
                    PROC eax_962
                    eax_962, ecx_381, edx_383 = wglGetProcAddress("glFlushRasterSGIX")
                    data_307b08c = eax_962
                    eax_962.b = eax_962 == 0
                    ecx_381.b = eax_962.b == 0
                    data_307b386 = ecx_381.b
                
                int32_t var_10_189 = edi
                char const* const var_14_189 = "GL_SGIX_fog_offset"
                char eax_964
                int32_t ecx_382
                char* edx_384
                eax_964, ecx_382, edx_384 = sub_583a80(esi, edx_383, ecx_381)
                data_307b387 = eax_964
                int32_t var_18_81 = edi
                char const* const var_1c_81 = "GL_SGIX_fog_texture"
                char eax_966
                int32_t ecx_383
                char* edx_385
                eax_966, ecx_383, edx_385 = sub_583a80(esi, edx_384, ecx_382)
                bool cond:240 = data_307b5bc != 0
                data_307b388 = eax_966
                
                if (cond:240 || eax_966 != 0)
                    PROC eax_967
                    eax_967, ecx_383, edx_385 = wglGetProcAddress("glTextureFogSGIX")
                    data_307b090 = eax_967
                    eax_967.b = eax_967 == 0
                    edx_385.b = eax_967.b == 0
                    data_307b388 = edx_385.b
                
                int32_t var_10_190 = edi
                char const* const var_14_190 = "GL_SGIX_fragment_specular_lighting"
                char eax_969
                int32_t ecx_384
                char* edx_386
                eax_969, ecx_384, edx_386 = sub_583a80(esi, edx_385, ecx_383)
                bool cond:241 = data_307b5bc != 0
                data_307b389 = eax_969
                
                if (cond:241 || eax_969 != 0)
                    bool eax_970
                    eax_970, ecx_384, edx_386 = sub_58e790()
                    data_307b389 = eax_970 == 0
                
                int32_t var_10_191 = edi
                char const* const var_14_191 = "GL_SGIX_framezoom"
                char eax_972
                int32_t ecx_385
                char* edx_387
                eax_972, ecx_385, edx_387 = sub_583a80(esi, edx_386, ecx_384)
                bool cond:243 = data_307b5bc != 0
                data_307b38a = eax_972
                
                if (cond:243 || eax_972 != 0)
                    PROC eax_973
                    eax_973, ecx_385, edx_387 = wglGetProcAddress("glFrameZoomSGIX")
                    data_307b0d8 = eax_973
                    eax_973.b = eax_973 == 0
                    ecx_385.b = eax_973.b == 0
                    data_307b38a = ecx_385.b
                
                int32_t var_10_192 = edi
                char const* const var_14_192 = "GL_SGIX_interlace"
                char eax_975
                int32_t ecx_386
                char* edx_388
                eax_975, ecx_386, edx_388 = sub_583a80(esi, edx_387, ecx_385)
                data_307b38b = eax_975
                int32_t var_18_82 = edi
                char const* const var_1c_82 = "GL_SGIX_ir_instrument1"
                char eax_977
                int32_t ecx_387
                char* edx_389
                eax_977, ecx_387, edx_389 = sub_583a80(esi, edx_388, ecx_386)
                data_307b38c = eax_977
                int32_t var_20_45 = edi
                char const* const var_24_45 = "GL_SGIX_list_priority"
                char eax_979
                int32_t ecx_388
                char* edx_390
                eax_979, ecx_388, edx_390 = sub_583a80(esi, edx_389, ecx_387)
                data_307b38d = eax_979
                int32_t var_28_32 = edi
                char const* const var_2c_32 = "GL_SGIX_pixel_texture"
                char eax_981
                int32_t ecx_389
                char* edx_391
                eax_981, ecx_389, edx_391 = sub_583a80(esi, edx_390, ecx_388)
                bool cond:245 = data_307b5bc != 0
                data_307b38e = eax_981
                
                if (cond:245 || eax_981 != 0)
                    PROC eax_982
                    eax_982, ecx_389, edx_391 = wglGetProcAddress("glPixelTexGenSGIX")
                    data_307b0dc = eax_982
                    eax_982.b = eax_982 == 0
                    edx_391.b = eax_982.b == 0
                    data_307b38e = edx_391.b
                
                int32_t var_10_193 = edi
                char const* const var_14_193 = "GL_SGIX_pixel_texture_bits"
                char eax_984
                int32_t ecx_390
                char* edx_392
                eax_984, ecx_390, edx_392 = sub_583a80(esi, edx_391, ecx_389)
                data_307b38f = eax_984
                int32_t var_18_83 = edi
                char const* const var_1c_83 = "GL_SGIX_reference_plane"
                char eax_986
                int32_t ecx_391
                char* edx_393
                eax_986, ecx_391, edx_393 = sub_583a80(esi, edx_392, ecx_390)
                bool cond:247 = data_307b5bc != 0
                data_307b390 = eax_986
                
                if (cond:247 || eax_986 != 0)
                    PROC eax_987
                    eax_987, ecx_391, edx_393 = wglGetProcAddress("glReferencePlaneSGIX")
                    data_307b0e0 = eax_987
                    eax_987.b = eax_987 == 0
                    eax_987.b = eax_987.b == 0
                    data_307b390 = eax_987.b
                
                int32_t var_10_194 = edi
                char const* const var_14_194 = "GL_SGIX_resample"
                char eax_989
                int32_t ecx_392
                char* edx_394
                eax_989, ecx_392, edx_394 = sub_583a80(esi, edx_393, ecx_391)
                data_307b391 = eax_989
                int32_t var_18_84 = edi
                char const* const var_1c_84 = "GL_SGIX_shadow"
                char eax_991
                int32_t ecx_393
                char* edx_395
                eax_991, ecx_393, edx_395 = sub_583a80(esi, edx_394, ecx_392)
                data_307b392 = eax_991
                int32_t var_20_46 = edi
                char const* const var_24_46 = "GL_SGIX_shadow_ambient"
                char eax_993
                int32_t ecx_394
                char* edx_396
                eax_993, ecx_394, edx_396 = sub_583a80(esi, edx_395, ecx_393)
                data_307b393 = eax_993
                int32_t var_28_33 = edi
                char const* const var_2c_33 = "GL_SGIX_sprite"
                char eax_995
                int32_t ecx_395
                char* edx_397
                eax_995, ecx_395, edx_397 = sub_583a80(esi, edx_396, ecx_394)
                bool cond:248 = data_307b5bc != 0
                data_307b394 = eax_995
                
                if (cond:248 || eax_995 != 0)
                    char eax_996
                    eax_996, ecx_395, edx_397 = sub_58e920()
                    ecx_395.b = eax_996 == 0
                    data_307b394 = ecx_395.b
                
                int32_t var_10_195 = edi
                char const* const var_14_195 = "GL_SGIX_tag_sample_buffer"
                char eax_998
                int32_t ecx_396
                char* edx_398
                eax_998, ecx_396, edx_398 = sub_583a80(esi, edx_397, ecx_395)
                bool cond:250 = data_307b5bc != 0
                data_307b395 = eax_998
                
                if (cond:250 || eax_998 != 0)
                    PROC eax_999
                    eax_999, ecx_396, edx_398 = wglGetProcAddress("glTagSampleBufferSGIX")
                    data_307b0f4 = eax_999
                    eax_999.b = eax_999 == 0
                    edx_398.b = eax_999.b == 0
                    data_307b395 = edx_398.b
                
                int32_t var_10_196 = edi
                char const* const var_14_196 = "GL_SGIX_texture_add_env"
                char eax_1001
                int32_t ecx_397
                char* edx_399
                eax_1001, ecx_397, edx_399 = sub_583a80(esi, edx_398, ecx_396)
                data_307b396 = eax_1001
                int32_t var_18_85 = edi
                char const* const var_1c_85 = "GL_SGIX_texture_coordinate_clamp"
                char eax_1003
                int32_t ecx_398
                char* edx_400
                eax_1003, ecx_398, edx_400 = sub_583a80(esi, edx_399, ecx_397)
                data_307b397 = eax_1003
                int32_t var_20_47 = edi
                char const* const var_24_47 = "GL_SGIX_texture_lod_bias"
                char eax_1005
                int32_t ecx_399
                char* edx_401
                eax_1005, ecx_399, edx_401 = sub_583a80(esi, edx_400, ecx_398)
                data_307b398 = eax_1005
                int32_t var_28_34 = edi
                char const* const var_2c_34 = "GL_SGIX_texture_multi_buffer"
                char eax_1007
                int32_t ecx_400
                char* edx_402
                eax_1007, ecx_400, edx_402 = sub_583a80(esi, edx_401, ecx_399)
                data_307b399 = eax_1007
                int32_t var_30_14 = edi
                char const* const var_34_14 = "GL_SGIX_texture_range"
                char eax_1009
                int32_t ecx_401
                char* edx_403
                eax_1009, ecx_401, edx_403 = sub_583a80(esi, edx_402, ecx_400)
                data_307b39a = eax_1009
                int32_t var_38_9 = edi
                char const* const var_3c_9 = "GL_SGIX_texture_scale_bias"
                char eax_1011
                int32_t ecx_402
                char* edx_404
                eax_1011, ecx_402, edx_404 = sub_583a80(esi, edx_403, ecx_401)
                data_307b39b = eax_1011
                int32_t var_40_7 = edi
                char const* const var_44_7 = "GL_SGIX_vertex_preclip"
                char eax_1013
                int32_t ecx_403
                char* edx_405
                eax_1013, ecx_403, edx_405 = sub_583a80(esi, edx_404, ecx_402)
                data_307b39c = eax_1013
                int32_t var_48_3 = edi
                char const* const var_4c_3 = "GL_SGIX_vertex_preclip_hint"
                char eax_1015
                int32_t ecx_404
                char* edx_406
                eax_1015, ecx_404, edx_406 = sub_583a80(esi, edx_405, ecx_403)
                data_307b39d = eax_1015
                int32_t var_10_197 = edi
                char const* const var_14_197 = "GL_SGIX_ycrcb"
                char eax_1017
                int32_t ecx_405
                char* edx_407
                eax_1017, ecx_405, edx_407 = sub_583a80(esi, edx_406, ecx_404)
                data_307b39e = eax_1017
                int32_t var_18_86 = edi
                char const* const var_1c_86 = "GL_SGI_color_matrix"
                char eax_1019
                int32_t ecx_406
                char* edx_408
                eax_1019, ecx_406, edx_408 = sub_583a80(esi, edx_407, ecx_405)
                data_307b39f = eax_1019
                int32_t var_20_48 = edi
                char const* const var_24_48 = "GL_SGI_color_table"
                char eax_1021
                int32_t ecx_407
                char* edx_409
                eax_1021, ecx_407, edx_409 = sub_583a80(esi, edx_408, ecx_406)
                bool cond:251 = data_307b5bc != 0
                data_307b3a0 = eax_1021
                
                if (cond:251 || eax_1021 != 0)
                    bool eax_1022
                    eax_1022, ecx_407, edx_409 = sub_58e990()
                    data_307b3a0 = eax_1022 == 0
                
                int32_t var_10_198 = edi
                char const* const var_14_198 = "GL_SGI_texture_color_table"
                char eax_1024
                int32_t ecx_408
                char* edx_410
                eax_1024, ecx_408, edx_410 = sub_583a80(esi, edx_409, ecx_407)
                data_307b3a1 = eax_1024
                int32_t var_18_87 = edi
                char const* const var_1c_87 = "GL_SUNX_constant_data"
                char eax_1026
                int32_t ecx_409
                char* edx_411
                eax_1026, ecx_409, edx_411 = sub_583a80(esi, edx_410, ecx_408)
                bool cond:253 = data_307b5bc != 0
                data_307b3a2 = eax_1026
                
                if (cond:253 || eax_1026 != 0)
                    PROC eax_1027
                    eax_1027, ecx_409, edx_411 = wglGetProcAddress("glFinishTextureSUNX")
                    data_307b114 = eax_1027
                    eax_1027.b = eax_1027 == 0
                    ecx_409.b = eax_1027.b == 0
                    data_307b3a2 = ecx_409.b
                
                int32_t var_10_199 = edi
                char const* const var_14_199 = "GL_SUN_convolution_border_modes"
                char eax_1029
                int32_t ecx_410
                char* edx_412
                eax_1029, ecx_410, edx_412 = sub_583a80(esi, edx_411, ecx_409)
                data_307b3a3 = eax_1029
                int32_t var_18_88 = edi
                char const* const var_1c_88 = "GL_SUN_global_alpha"
                char eax_1031
                int32_t ecx_411
                char* edx_413
                eax_1031, ecx_411, edx_413 = sub_583a80(esi, edx_412, ecx_410)
                bool cond:254 = data_307b5bc != 0
                data_307b3a4 = eax_1031
                
                if (cond:254 || eax_1031 != 0)
                    char eax_1032
                    eax_1032, ecx_411, edx_413 = sub_58ea40()
                    edx_413.b = eax_1032 == 0
                    data_307b3a4 = edx_413.b
                
                int32_t var_10_200 = edi
                char const* const var_14_200 = "GL_SUN_mesh_array"
                char eax_1034
                int32_t ecx_412
                char* edx_414
                eax_1034, ecx_412, edx_414 = sub_583a80(esi, edx_413, ecx_411)
                data_307b3a5 = eax_1034
                int32_t var_18_89 = edi
                char const* const var_1c_89 = "GL_SUN_read_video_pixels"
                char eax_1036
                int32_t ecx_413
                char* edx_415
                eax_1036, ecx_413, edx_415 = sub_583a80(esi, edx_414, ecx_412)
                bool cond:256 = data_307b5bc != 0
                data_307b3a6 = eax_1036
                
                if (cond:256 || eax_1036 != 0)
                    PROC eax_1037
                    eax_1037, ecx_413, edx_415 = wglGetProcAddress("glReadVideoPixelsSUN")
                    data_307b138 = eax_1037
                    eax_1037.b = eax_1037 == 0
                    eax_1037.b = eax_1037.b == 0
                    data_307b3a6 = eax_1037.b
                
                int32_t var_10_201 = edi
                char const* const var_14_201 = "GL_SUN_slice_accum"
                char eax_1039
                int32_t ecx_414
                char* edx_416
                eax_1039, ecx_414, edx_416 = sub_583a80(esi, edx_415, ecx_413)
                data_307b3a7 = eax_1039
                int32_t var_18_90 = edi
                char const* const var_1c_90 = "GL_SUN_triangle_list"
                char eax_1041
                int32_t ecx_415
                char* edx_417
                eax_1041, ecx_415, edx_417 = sub_583a80(esi, edx_416, ecx_414)
                bool cond:257 = data_307b5bc != 0
                data_307b3a8 = eax_1041
                
                if (cond:257 || eax_1041 != 0)
                    char eax_1042
                    eax_1042, ecx_415, edx_417 = sub_58eb00()
                    ecx_415.b = eax_1042 == 0
                    data_307b3a8 = ecx_415.b
                
                int32_t var_10_202 = edi
                char const* const var_14_202 = "GL_SUN_vertex"
                char eax_1044
                int32_t ecx_416
                char* edx_418
                eax_1044, ecx_416, edx_418 = sub_583a80(esi, edx_417, ecx_415)
                bool cond:258 = data_307b5bc != 0
                data_307b3a9 = eax_1044
                
                if (cond:258 || eax_1044 != 0)
                    char eax_1045
                    eax_1045, ecx_416, edx_418 = sub_58ebb0()
                    edx_418.b = eax_1045 == 0
                    data_307b3a9 = edx_418.b
                
                int32_t var_10_203 = edi
                char const* const var_14_203 = "GL_WIN_phong_shading"
                char eax_1047
                int32_t ecx_417
                char* edx_419
                eax_1047, ecx_417, edx_419 = sub_583a80(esi, edx_418, ecx_416)
                data_307b3aa = eax_1047
                int32_t var_18_91 = edi
                char const* const var_1c_91 = "GL_WIN_specular_fog"
                char eax_1049
                int32_t ecx_418
                char* edx_420
                eax_1049, ecx_418, edx_420 = sub_583a80(esi, edx_419, ecx_417)
                data_307b3ab = eax_1049
                int32_t var_20_49 = edi
                char const* const var_24_49 = "GL_WIN_swap_hint"
                char eax_1051 = sub_583a80(esi, edx_420, ecx_418)
                bool cond:260 = data_307b5bc != 0
                data_307b3ac = eax_1051
                
                if (cond:260 || eax_1051 != 0)
                    PROC eax_1052 = wglGetProcAddress("glAddSwapHintRectWIN")
                    data_307b1f8 = eax_1052
                    eax_1052.b = eax_1052 == 0
                    eax_1052.b = eax_1052.b == 0
                    data_307b3ac = eax_1052.b
                
                return 0
    
    return 1
}

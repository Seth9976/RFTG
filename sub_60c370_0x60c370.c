// 函数名称: sub_60c370
// 虚拟地址: 0x60c370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_60c370(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t eax = sub_5c9760(arg1)
    int32_t eax = sub_5c9760(arg1)
    
    if ((eax.b & 2) == 0 && sub_5cb4f0(arg1, eax | 2) s< 0)
        sub_5cb4f0(arg1, eax)
        return 0
    
    int32_t __saved_edi_3 = 0x138
    int32_t var_1c_3 = 1
    void* result = sub_5d0ad0()
    
    if (result == 0)
        sub_5cd050(result)
        return 0
    
    int32_t __saved_edi_5 = 0x104
    int32_t var_1c_4 = 1
    int32_t* eax_5 = sub_5d0ad0()
    
    if (eax_5 == 0)
        sub_609870(result)
        sub_5cd050(0)
        return 0
    
    *(result + 4) = sub_609290
    *(result + 8) = sub_6092c0
    *(result + 0xc) = sub_609db0
    *(result + 0x1c) = sub_60a8a0
    *(result + 0x20) = sub_60ac10
    *(result + 0x24) = sub_609330
    *(result + 0x28) = sub_60af00
    *(result + 0x2c) = sub_60af80
    *(result + 0x30) = sub_6093c0
    *(result + 0x34) = sub_609640
    *(result + 0x38) = sub_60b070
    *(result + 0x3c) = sub_60b110
    *(result + 0x40) = sub_60b1a0
    *(result + 0x44) = sub_60b420
    *(result + 0x48) = sub_60b630
    *(result + 0x4c) = sub_60ba30
    *(result + 0x50) = sub_60bed0
    *(result + 0x54) = sub_60c1d0
    *(result + 0x58) = sub_60c1f0
    *(result + 0x5c) = sub_609870
    *(result + 0x60) = sub_60c260
    *(result + 0x64) = sub_60c300
    __builtin_memcpy(result + 0x68, &data_8bae04, 0x54)
    *(result + 0x6c) = 2
    *(result + 0x134) = eax_5
    *(result + 0xbc) = arg1
    int32_t eax_7 = sub_5ca770(arg1)
    *eax_5 = eax_7
    
    if (eax_7 != 0 && sub_5cb370(arg1, eax_7) s>= 0 && sub_6089a0(eax_5) s>= 0)
        if ((arg2 & 4) == 0)
            sub_5ca8f0(0)
        else
            sub_5ca8f0(1)
        
        int32_t eax_11
        int32_t edx
        eax_11, edx = sub_5ca950()
        
        if (eax_11 s> 0)
            *(result + 0x6c) |= 4
        
        char var_8
        int32_t eax_12
        int32_t ecx_1
        int32_t edx_1
        eax_12, ecx_1, edx_1 = sub_5ca4c0(eax_11, edx, &var_8, 0x14, &var_8)
        
        if (eax_12 == 0 && (var_8 & 1) != 0)
            eax_5[1] = 1
        
        if (eax_5[1] != 0)
            void* esi_2
            eax_12, ecx_1, edx_1, esi_2 = sub_5ca380(eax_12, edx_1, ecx_1, "GL_ARB_debug_output")
            
            if (eax_12 != 0)
                int32_t eax_13 = sub_5ca2e0("glDebugMessageCallbackARB")
                int32_t eax_14 = *(esi_2 + 0x7c)
                *(esi_2 + 8) = 1
                eax_14(0x8244, esi_2 + 0x14)
                (*(esi_2 + 0x7c))(0x8245, esi_2 + 0x18)
                eax_13(sub_609180, result)
                eax_12, edx_1, ecx_1 = (*(esi_2 + 0x64))(0x8242)
        
        int32_t eax_16
        int32_t ecx_3
        int32_t edx_4
        void* esi_3
        int32_t edi_4
        eax_16, ecx_3, edx_4, esi_3, edi_4 =
            sub_5ca380(eax_12, edx_1, ecx_1, "GL_ARB_texture_rectangle")
        int32_t eax_17
        
        if (eax_16 == 0)
            eax_17, esi_3, edi_4 = sub_5ca380(eax_16, edx_4, ecx_3, "GL_EXT_texture_rectangle")
        
        int32_t eax_18
        int32_t ecx_4
        int32_t edx_6
        
        if (eax_16 != 0 || eax_17 != 0)
            int32_t eax_19 = *(esi_3 + 0x78)
            *(esi_3 + 0x1c) = edi_4
            eax_18 = eax_19(0x84f8, &var_8)
            ecx_4 = var_8.d
            *(result + 0xb4) = ecx_4
            edx_6 = var_8.d
            *(result + 0xb8) = edx_6
        else
            edx_6 = (*(esi_3 + 0x78))(0xd33, &var_8)
            eax_18 = var_8.d
            *(result + 0xb4) = eax_18
            ecx_4 = var_8.d
            *(result + 0xb8) = ecx_4
        
        int32_t eax_20
        void* esi_4
        int32_t edi_5
        eax_20, esi_4, edi_5 = sub_5ca380(eax_18, edx_6, ecx_4, "GL_ARB_multitexture")
        
        if (eax_20 != 0)
            int32_t eax_21 = sub_5ca2e0("glActiveTextureARB")
            *(esi_4 + 0xe4) = eax_21
            
            if (eax_21 != 0)
                int32_t ecx_5 = *(esi_4 + 0x78)
                *(esi_4 + 0xe0) = edi_5
                ecx_5(0x84e2, esi_4 + 0xe8)
        
        char* eax_23 = sub_5cec90("SDL_RENDER_OPENGL_SHADERS")
        
        if (eax_23 == 0 || *eax_23 != 0x30)
            *(esi_4 + 0x100) = sub_6452e0()
        
        char const* const eax_25 = "ENABLED"
        
        if (*(esi_4 + 0x100) == 0)
            eax_25 = "DISABLED"
        
        char const* const var_1c_15 = eax_25
        int32_t eax_26
        int32_t ecx_6
        int32_t edx_7
        eax_26, ecx_6, edx_7 = sub_5ce920(6, "OpenGL shaders: %s")
        
        if (*(esi_4 + 0x100) != 0 && *(esi_4 + 0xe8) s>= 3)
            edx_7 = *(result + 0x70)
            *(result + (edx_7 << 2) + 0x74) = 0x32315659
            *(result + 0x70) += edi_5
            eax_26 = *(result + 0x70)
            *(result + (eax_26 << 2) + 0x74) = 0x56555949
            *(result + 0x70) += edi_5
        
        int32_t eax_27
        void* esi_5
        int32_t edi_6
        eax_27, esi_5, edi_6 = sub_5ca380(eax_26, edx_7, ecx_6, "GL_EXT_framebuffer_object")
        
        if (eax_27 != 0)
            *(esi_5 + 0x2c) = edi_6
            *(esi_5 + 0xec) = sub_5ca2e0("glGenFramebuffersEXT")
            *(esi_5 + 0xf0) = sub_5ca2e0("glDeleteFramebuffersEXT")
            *(esi_5 + 0xf4) = sub_5ca2e0("glFramebufferTexture2DEXT")
            *(esi_5 + 0xf8) = sub_5ca2e0("glBindFramebufferEXT")
            *(esi_5 + 0xfc) = sub_5ca2e0("glCheckFramebufferStatusEXT")
            *(result + 0x6c) |= 8
        
        *(esi_5 + 0x30) = 0
        sub_609bc0()
        return result
    
    sub_609870(result)
    return 0
}

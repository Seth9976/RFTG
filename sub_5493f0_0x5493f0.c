// 函数名称: sub_5493f0
// 虚拟地址: 0x5493f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5493f0(int32_t arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d342
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_60 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result_2 = data_3079498(arg1)
    int32_t result
    
    if (result_2 == 0)
        result = 0
    else
        char* const esi_1 = &data_83f3d3
        char* const var_18 = &data_83f3d3
        int32_t var_8_1 = 0
        
        if (sub_5a8e80(arg2, "#define NEED_SKINNING_VERSION") != 0)
            char* const var_44_1 = &data_83f3d3
            char* const var_30_1 = &data_83f3d3
            var_8_1.b = 1
            sub_4c42b0(&var_18, "#version 140\n#define VERSION_130\n")
            var_8_1.b = 0
            void var_50
            sub_50a930(&var_50)
            esi_1 = var_18
        
        void** edx_1 = sub_5a8e80(arg2, "#define NEED_ANDROID_SAMPLEREXTERNALOES")
        char* const eax_5
        void** edx_2
        
        if (esi_1 == 0 || *esi_1 == 0)
            edx_2 = sub_4c42b0(&var_18, "#define GLSL\n")
            eax_5 = var_18
        else
            void* esi_4 = *(sub_4c4060(&var_18) + 8)
            sub_4c4160(esi_4 + 0xd, edx_1, &var_18, esi_4 + 0xd, 1)
            eax_5 = var_18
            __builtin_strcpy(esi_4 + eax_5, "#define GLSL\n")
            edx_2 = 0x4c534c47
        
        void** edx_3
        char* const ebx_2
        void** var_68_4
        void* esi_6
        
        if (arg1 != 0x8b31)
            if (arg1 != 0x8b30)
                sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0x10e5, "GLLoadShader")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_5 == 0 || *eax_5 == 0)
                edx_3 = sub_4c42b0(&var_18, "#define HAVE_PIXEL_SHADER\n")
                ebx_2 = var_18
            else
                esi_6 = *(sub_4c4060(&var_18) + 8)
                var_68_4 = esi_6 + 0x1a
                sub_4c4160(esi_6 + 0x1a, edx_2, &var_18, var_68_4, 1)
                ebx_2 = var_18
                edx_3 = sub_5ab990(esi_6 + ebx_2, "#define HAVE_PIXEL_SHADER\n", 0x1b, var_68_4, 1)
        else if (eax_5 == 0 || *eax_5 == 0)
            edx_3 = sub_4c42b0(&var_18, "#define HAVE_VERTEX_SHADER\n")
            ebx_2 = var_18
        else
            esi_6 = *(sub_4c4060(&var_18) + 8)
            var_68_4 = esi_6 + 0x1b
            sub_4c4160(esi_6 + 0x1b, edx_2, &var_18, var_68_4, 1)
            ebx_2 = var_18
            edx_3 = sub_5ab990(esi_6 + ebx_2, "#define HAVE_VERTEX_SHADER\n", 0x1c, var_68_4, 1)
        
        if (data_307881e != 0)
            if (ebx_2 == 0 || *ebx_2 == 0)
                edx_3 = sub_4c42b0(&var_18, "#define HAVE_ADRENO420\n")
                ebx_2 = var_18
            else
                void* esi_10 = *(sub_4c4060(&var_18) + 8)
                sub_4c4160(esi_10 + 0x17, edx_3, &var_18, esi_10 + 0x17, 1)
                ebx_2 = var_18
                __builtin_strcpy(esi_10 + ebx_2, "#define HAVE_ADRENO420\n")
                edx_3 = 0x5244415f
        
        if (data_30785cc == 3)
            if (ebx_2 == 0 || *ebx_2 == 0)
                edx_3 = sub_4c42b0(&var_18, "#define HAVE_RIFT\n")
                ebx_2 = var_18
            else
                void* esi_12 = *(sub_4c4060(&var_18) + 8)
                sub_4c4160(esi_12 + 0x12, edx_3, &var_18, esi_12 + 0x12, 1)
                ebx_2 = var_18
                __builtin_strncpy(esi_12 + ebx_2, "#define HAVE_RIFT\n", 0x13)
                edx_3 = 0x4649525f
        
        if (data_30785cc == 5)
            if (ebx_2 == 0 || *ebx_2 == 0)
                sub_4c42b0(&var_18, "#define HAVE_OPENVR\n")
                ebx_2 = var_18
            else
                void* esi_14 = *(sub_4c4060(&var_18) + 8)
                sub_4c4160(esi_14 + 0x14, edx_3, &var_18, esi_14 + 0x14, 1)
                ebx_2 = var_18
                __builtin_strncpy(esi_14 + ebx_2, "#define HAVE_OPENVR\n", 0x15)
        
        char* const eax_24 = &data_83f3d3
        
        if (ebx_2 != 0)
            eax_24 = ebx_2
        
        char* const var_2c = eax_24
        char* const eax_26 = *(arg3 + 0x20)
        char* var_28_1 = arg2
        
        if (eax_26 == 0)
            eax_26 = &data_83f3d3
        
        char* const var_64_2 = eax_26
        char* var_1c
        char* eax_28 = *sub_4c4a50(&var_1c, "pre glShaderSource error in %s")
        
        if (eax_28 == 0)
            eax_28 = &data_83f3d3
        
        sub_543ca0(0x10fd, eax_28)
        char* eax_29 = var_1c
        
        if (eax_29 != 0 && *eax_29 != 0)
            void* eax_31 = sub_4c4060(&var_1c)
            int32_t temp0_1 = *(eax_31 + 4)
            *(eax_31 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_16 = *(eax_31 + 0xc) + 0x10
                sub_4f4430(eax_31, sub_4f4380(esi_16), esi_16)
        
        int32_t result_1 = result_2
        data_3079500(result_1, 2, &var_2c, 0)
        char* const eax_35 = *(arg3 + 0x20)
        
        if (eax_35 == 0)
            eax_35 = &data_83f3d3
        
        char* const var_64_5 = eax_35
        char* eax_37 = *sub_4c4a50(&var_1c, "glShaderSource error in %s")
        
        if (eax_37 == 0)
            eax_37 = &data_83f3d3
        
        sub_543ca0(0x1101, eax_37)
        char* eax_38 = var_1c
        
        if (eax_38 != 0 && *eax_38 != 0)
            void* eax_40 = sub_4c4060(&var_1c)
            int32_t temp1_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_18 = *(eax_40 + 0xc) + 0x10
                sub_4f4430(eax_40, sub_4f4380(esi_18), esi_18)
                result_1 = result_2
        
        data_3079490(result_1)
        int32_t var_24 = 0
        data_30794d4(result_1, 0x8b81, &var_24)
        
        if (var_24 != 0)
        label_5498d1:
            int32_t var_8_3 = 0xffffffff
            
            if (ebx_2 != 0 && *ebx_2 != 0)
                void* eax_46 = sub_4c4060(&var_18)
                int32_t temp2_1 = *(eax_46 + 4)
                *(eax_46 + 4) -= 1
                
                if (temp2_1 == 1)
                    int32_t esi_20 = *(eax_46 + 0xc) + 0x10
                    sub_4f4430(eax_46, sub_4f4380(esi_20), esi_20)
                    result_1 = result_2
            
            result = result_1
        else
            var_1c = nullptr
            data_30794d4(result_1, 0x8b84, &var_1c)
            char* edi_7 = var_1c
            
            if (edi_7 == 0)
                goto label_5498d1
            
            __alloca_probe_16(edi_7)
            
            if (&var_60 != 0)
                data_30794cc(result_1, edi_7, 0, &var_60)
                char const* const ecx_10 = "vertex"
                
                if (arg1 != 0x8b31)
                    ecx_10 = "pixel"
                
                char* const eax_44 = *(arg3 + 0x20)
                
                if (eax_44 == 0)
                    eax_44 = &data_83f3d3
                
                int32_t* var_64_12 = &var_60
                char* const var_68_9 = eax_44
                char const* const var_6c_7 = ecx_10
                sub_4c5680("Could not compile %s shader %s:\n%s\n")
            
            data_30794a0(result_1)
            int32_t var_8_2 = 0xffffffff
            sub_4c43d0(&var_18)
            result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

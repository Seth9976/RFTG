// 函数名称: sub_561930
// 虚拟地址: 0x561930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_561930(int32_t arg1, float arg2 @ edx, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = *arg3
    float ebx = arg2
    int128_t* var_101c
    float* var_1018
    int128_t* var_1018_14
    void* var_1014_1
    void* var_1014_21
    float var_f80
    float var_f74
    float var_f68
    float var_f30
    float var_f24
    float var_f20
    void* eax_74
    float* ecx_58
    long double x87_r7_16
    
    if (eax_2 - 0x5d u<= 0x29)
        switch (eax_2)
            case 0x5d
                var_1014_1 = arg3[2]
                var_1018 = ebx
            label_562396:
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018, var_1014_1)
                int128_t* eax_86
                eax_86.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_86
            case 0x5e
                void* edx = arg3[2]
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, ebx i+ 0x40, edx)
                int128_t* eax_6
                eax_6.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_6
            case 0x5f
                void* ecx_3 = arg3[2]
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, ebx + 0x80, ecx_3)
                int128_t* eax_7
                eax_7.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_7
            case 0x60, 0x61, 0x62
                int32_t var_1014_5 = eax_2
                void var_f10
                int32_t eax_13 = sub_4dbbd0(eax_2, &var_f10, eax_2 - 0x5d) << 6
                
                if (eax_13 s> arg3[2])
                    sub_4c5680("dx11 not large enough instance buffer in shader to draw mesh")
                    eax_13 = arg3[2]
                
                int128_t* var_1018_4 = &var_f10
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018_4, eax_13)
                int128_t* eax_14
                eax_14.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_14
            case 0x63
                char const* const var_1014_17 = "Dx11GraphicsSetSpecialRenderState"
                int32_t var_1018_10 = 0x699
                var_101c = "Windows\WindowsDx11.cpp"
                sub_4c5870("Halt", &data_83f3d3, var_101c, var_1018_10, var_1014_17)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case 0x64
                char const* const var_1014_18 = "Dx11GraphicsSetSpecialRenderState"
                int32_t var_1018_11 = 0x6a9
                var_101c = "Windows\WindowsDx11.cpp"
                sub_4c5870("Halt", &data_83f3d3, var_101c, var_1018_11, var_1014_18)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case 0x65
                char const* const var_1014_19 = "Dx11GraphicsSetSpecialRenderState"
                int32_t var_1018_12 = 0x6c2
                var_101c = "Windows\WindowsDx11.cpp"
                sub_4c5870("Halt", &data_83f3d3, var_101c, var_1018_12, var_1014_19)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            case 0x66
                void* ebx_5 = *(ebx i+ 0x33c)
                
                if (ebx_5 != 0)
                    void* eax_15 = *(ebx_5 + 0x2c)
                    
                    if (eax_15 != 0)
                        if (*(eax_15 + 0x80) s<= 0)
                            char const* const var_1014_8 = "XArray<struct Mat4>::operator []"
                            int32_t var_1018_5 = 0xb5
                            var_101c = "c:\ax2010\engine\xArray.h"
                            sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, var_101c, 
                                var_1018_5, var_1014_8)
                            
                            if (IsDebuggerPresent() != 1)
                                sub_4c5a30()
                                noreturn
                            
                            breakpoint
                        
                        int128_t* ebx_6 = *(eax_15 + 0x7c)
                        
                        if (ebx_6 != 0)
                            int32_t eax_19 = *(eax_15 + 0x80) << 6
                            
                            if (eax_19 s> arg3[2])
                                sub_4c5680("dx11 not enough bones in shader to draw mesh")
                                eax_19 = arg3[2]
                            
                            var_101c = arg3[1] + arg4
                            sub_5ab990(var_101c, ebx_6, eax_19)
                            int128_t* eax_22
                            eax_22.b = 1
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return eax_22
                        
                        char const* const var_1014_9 = "Dx11GraphicsSetSpecialRenderState"
                        int32_t var_1018_6 = 0x671
                        var_101c = "Windows\WindowsDx11.cpp"
                        sub_4c5870("pBones", &data_83f3d3, var_101c, var_1018_6, var_1014_9)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                
                sub_4c5680("Can't use bones shader on non-animation structure\n")
                int32_t eax_23
                eax_23.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_23
            case 0x67, 0x68, 0x69, 0x6a
                int32_t var_1014_13 = eax_2 - 0x5d
                sub_533c50((eax_2 << 5) + *(ebx i+ 0x350) + 0x1dc, 
                    fconvert.s(fconvert.t(*(data_27e7fcc + 0x50))))
                float var_f38
                float var_fb0 = fconvert.s(fconvert.t(var_f38))
                void* eax_26 = 0x2c
                float var_f34
                float var_fac = fconvert.s(fconvert.t(var_f34))
                float var_fa8 = fconvert.s(fconvert.t(var_f30))
                long double x87_r7_5 = float.t(0)
                float var_fa4 = fconvert.s(x87_r7_5)
                float var_f2c
                float var_fa0 = fconvert.s(fconvert.t(var_f2c))
                float var_f28
                float var_f9c = fconvert.s(fconvert.t(var_f28))
                float var_f98 = fconvert.s(fconvert.t(var_f24))
                float var_f94 = fconvert.s(x87_r7_5)
                float var_f90 = fconvert.s(fconvert.t(var_f20))
                float var_f1c
                float var_f8c = fconvert.s(fconvert.t(var_f1c))
                float var_f18
                float var_f88 = fconvert.s(fconvert.t(var_f18))
                
                if (arg3[2] s< 0x2c)
                    sub_4c5680("dx11 not enough texAnims in shader")
                    eax_26 = arg3[2]
                
                float* var_1018_9 = &var_fb0
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018_9, eax_26)
                int128_t* eax_27
                eax_27.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_27
            case 0x6b
                void* edx_32 = arg3[2]
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, ebx i+ 0x340, edx_32)
                int128_t* eax_72
                eax_72.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_72
            case 0x6c
                var_1014_21 = arg3[2]
                var_1018_14 = ebx i+ 0x2f8
            label_561db8:
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018_14, var_1014_21)
                int128_t* eax_40
                eax_40.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_40
            case 0x6f
                void var_1000
                sub_4e2170(&var_1000)
                __builtin_memcpy(&var_f30, &var_1000, 0x1c)
                ecx_58 = &var_f20
                void var_f50
                eax_74 = &var_f50
            label_562211:
                sub_55b480(eax_74, arg2, ecx_58)
                float edx_33 = *(eax_74 + 4)
                var_f24 = *eax_74
                int32_t ecx_60 = *(eax_74 + 8)
                var_f20 = edx_33
                int32_t var_f1c_5 = ecx_60
                void* ecx_61 = arg3[2]
                int32_t var_f18_7 = *(eax_74 + 0xc)
                float* var_1018_21 = &var_f24
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018_21, ecx_61)
                int128_t* eax_78
                eax_78.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_78
            case 0x70
                void var_f58
                __builtin_memcpy(&var_f58, 0x27e8090, 0x1c)
                void var_f48
                ecx_58 = &var_f48
                void var_fe0
                eax_74 = &var_fe0
                goto label_562211
            case 0x71
                void* ecx_64 = arg3[2]
                int32_t* var_1018_22 = &data_27e8024
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018_22, ecx_64)
                int128_t* eax_79
                eax_79.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_79
            case 0x72
                var_1014_1 = arg3[2]
                var_1018 = ebx i+ 0xc0
                goto label_562396
            case 0x73
                void* edx_3 = arg3[2]
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, ebx i+ 0x100, edx_3)
                int128_t* eax_11
                eax_11.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_11
            case 0x74
                sub_4e3690(&var_f80, arg2, arg3[4])
                var_f68 = var_f80
                float edx_12 = var_f74
                float ecx_22 = *(ebx i+ 0x2ec)
                var_f80 = *(ebx i+ 0x2e8)
                float eax_37 = *(ebx i+ 0x2f4)
                float edx_13 = *(ebx i+ 0x2f0)
                var_f24 = fconvert.s(fconvert.t(var_f80) * fconvert.t(var_f68))
                var_f74 = eax_37
                float var_f7c
                var_f20 = fconvert.s(fconvert.t(ecx_22) * fconvert.t(var_f7c))
                float var_f78
                float var_f1c_1 = fconvert.s(fconvert.t(edx_13) * fconvert.t(var_f78))
                x87_r7_16 = fconvert.t(var_f74) * fconvert.t(edx_12)
            label_561da5:
                float var_f18_1 = fconvert.s(x87_r7_16)
                var_1014_21 = arg3[2]
                var_1018_14 = &var_f24
                goto label_561db8
            case 0x75
                sub_55b480(&var_f68, arg2, ebx i+ 0x278)
                float ecx_42 = var_f68
                float var_f64
                var_f20 = var_f64
                var_f24 = ecx_42
                void* eax_60 = arg3[2]
                int32_t var_f5c
                int32_t var_f18_5 = var_f5c
                int32_t var_f60
                int32_t var_f1c_3 = var_f60
                float* var_1018_17 = &var_f24
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018_17, eax_60)
                int128_t* eax_61
                eax_61.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_61
            case 0x76
                float var_fd0
                sub_4e3690(&var_fd0, arg2, arg3[4])
                var_f68 = var_fd0
                float ecx_49 = *(ebx i+ 0x2ac)
                var_f24 = *(ebx i+ 0x2a8)
                long double x87_r7_34 = fconvert.t(var_f24) * fconvert.t(var_f68)
                float eax_64 = *(ebx i+ 0x2b4)
                var_f20 = ecx_49
                void* ecx_50 = arg3[2]
                var_f80 = fconvert.s(x87_r7_34)
                float var_fcc
                float var_f7c_3 = fconvert.s(fconvert.t(var_f20) * fconvert.t(var_fcc))
                float var_fc8
                long double x87_r7_38 = fconvert.t(*(ebx i+ 0x2b0)) * fconvert.t(var_fc8)
                float* var_1018_18 = &var_f80
                var_101c = arg3[1] + arg4
                float var_f78_3 = fconvert.s(x87_r7_38)
                float var_fc4
                var_f74 = fconvert.s(fconvert.t(eax_64) * fconvert.t(var_fc4))
                sub_5ab990(var_101c, var_1018_18, ecx_50)
                int128_t* eax_67
                eax_67.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_67
            case 0x77
                void* edx_10 = arg3[2]
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, ebx i+ 0x1dc, edx_10)
                int128_t* eax_34
                eax_34.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_34
            case 0x78
                var_1014_1 = arg3[2]
                var_1018 = ebx i+ 0x19c
                goto label_562396
            case 0x79
                int32_t i = 0
                float var_f5c_2 = fconvert.s(float.t(0))
                void* ecx_29 = ebx i+ 0x250
                float* eax_48
                
                do
                    var_f68 = fconvert.s(fconvert.t(*(ecx_29 - 8)))
                    float var_f18_2 = var_f5c_2
                    float var_f64_2 = fconvert.s(fconvert.t(*(ecx_29 - 4)))
                    long double x87_r7_20 = fconvert.t(*ecx_29)
                    eax_48 = arg3[1] + arg4
                    *(eax_48 + i) = var_f68
                    float var_f60_2 = fconvert.s(x87_r7_20)
                    *(eax_48 + i + 4) = var_f64_2
                    *(eax_48 + i + 8) = var_f60_2
                    i += 0x10
                    ecx_29 += 0xc
                while (i s< 0x40)
                
                eax_48.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_48
            case 0x7a
                int32_t i_1 = 0
                float var_f5c_3 = fconvert.s(float.t(0))
                void* ecx_32 = ebx i+ 0x280
                float* eax_51
                
                do
                    var_f68 = fconvert.s(fconvert.t(*(ecx_32 - 8)))
                    float var_f18_3 = var_f5c_3
                    float var_f64_3 = fconvert.s(fconvert.t(*(ecx_32 - 4)))
                    long double x87_r7_24 = fconvert.t(*ecx_32)
                    eax_51 = arg3[1] + arg4
                    *(eax_51 + i_1) = var_f68
                    float var_f60_3 = fconvert.s(x87_r7_24)
                    *(eax_51 + i_1 + 4) = var_f64_3
                    *(eax_51 + i_1 + 8) = var_f60_3
                    i_1 += 0x10
                    ecx_32 += 0xc
                while (i_1 s< 0x40)
                
                eax_51.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_51
            case 0x7b
                if (arg3[2] != 0x40)
                    char const* const var_1014_23 = "Dx11GraphicsSetSpecialRenderState"
                    int32_t var_1018_16 = 0x715
                    var_101c = "Windows\WindowsDx11.cpp"
                    sub_4c5870("sizeof(float) * 4 * 4 == pRenderState->registerCount", &data_83f3d3, 
                        var_101c, var_1018_16, var_1014_23)
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                int32_t i_3 = 0
                int32_t* eax_58
                int32_t i_2
                
                do
                    float var_fc0
                    sub_4e3690(&var_fc0, arg2, arg3[4])
                    var_f80 = var_fc0
                    var_f68 = *(i_3 i+ ebx + 0x2a8)
                    long double x87_r7_26 = fconvert.t(var_f68) * fconvert.t(var_f80)
                    float eax_55 = *(i_3 i+ ebx + 0x2b0)
                    float var_fb4
                    var_f74 = var_fb4
                    float edx_18 = *(i_3 i+ ebx + 0x2ac)
                    var_f24 = fconvert.s(x87_r7_26)
                    float edx_19 = *(i_3 i+ ebx + 0x2b4)
                    void* eax_56 = arg3[1]
                    float edx_20 = var_f24
                    float var_fbc
                    var_f20 = fconvert.s(fconvert.t(edx_18) * fconvert.t(var_fbc))
                    eax_58 = eax_56 + i_3 + arg4
                    *eax_58 = edx_20
                    float var_fb8
                    float var_f1c_2 = fconvert.s(fconvert.t(eax_55) * fconvert.t(var_fb8))
                    eax_58[1] = var_f20
                    long double x87_r7_32 = fconvert.t(edx_19) * fconvert.t(var_f74)
                    eax_58[2] = var_f1c_2
                    i_2 = i_3 + 0x10
                    i_3 = i_2
                    arg2 = fconvert.s(x87_r7_32)
                    eax_58[3] = arg2
                while (i_2 s< 0x40)
                eax_58.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_58
            case 0x7c
                void* eax_80 = data_27e7fcc
                var_f24 = fconvert.s(fconvert.t(*(eax_80 + 0x50)))
                void* eax_81 = data_27e7fe4
                var_f20 = fconvert.s(fconvert.t(*(eax_80 + 0x4c)))
                float var_f1c_6 = fconvert.s(fconvert.t(*(eax_81 + 0x90)))
                x87_r7_16 = float.t(0)
                goto label_561da5
            case 0x7d
                void* ecx_67 = arg3[2]
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, ebx i+ 0x30c, ecx_67)
                int128_t* eax_82
                eax_82.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_82
            case 0x7e
                var_1014_1 = arg3[2]
                var_1018 = ebx i+ 0x31c
                goto label_562396
            case 0x7f
                void* edx_15 = arg3[2]
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, ebx i+ 0x2fc, edx_15)
                int128_t* eax_45
                eax_45.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_45
            case 0x80
                void* eax_84 = data_3079204
                float var_f28_1 =
                    fconvert.s(fconvert.t(*(eax_84 + 0x24)) / fconvert.t(*(eax_84 + 0x20)))
                long double x87_r7_46 = float.t(0)
                var_f24 = fconvert.s(x87_r7_46)
                var_f68 = var_f28_1
                var_f20 = fconvert.s(x87_r7_46)
                float var_f64_6 = var_f24
                float var_f60_6 = var_f20
                float var_f5c_6 = fconvert.s(x87_r7_46)
                var_1014_1 = arg3[2]
                var_1018 = &var_f68
                goto label_562396
            case 0x81, 0x82, 0x83, 0x84
                var_1014_1 = arg3[2]
                var_1018 = *(ebx i+ 0x350) + eax_2 * 0x10 + 0x72c
                goto label_562396
            case 0x85
                var_1014_1 = arg3[2]
                var_1018 = &data_27e847c
                goto label_562396
            case 0x86
                void* ecx_53 = arg3[2]
                int32_t* var_1018_19 = &data_27e846c
                var_101c = arg3[1] + arg4
                sub_5ab990(var_101c, var_1018_19, ecx_53)
                int128_t* eax_68
                eax_68.b = 1
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_68
    eax_2.b = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}

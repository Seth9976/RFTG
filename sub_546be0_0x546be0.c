// 函数名称: sub_546be0
// 虚拟地址: 0x546be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_546be0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t* var_fe4
    int32_t* var_fe4
    int32_t eax_1 = __security_cookie ^ &var_fe4
    void* edx = arg6 - 0x5d
    float var_f44
    float var_f34
    int32_t* eax_2
    
    switch (edx)
        case nullptr
            sub_544390(arg4, 1)
            int32_t eax_4
            eax_4.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_4
        case 1
            sub_544390(arg4, 1)
            int32_t eax_5
            eax_5.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_5
        case 2
            sub_544390(arg4, 1)
            int32_t eax_7
            eax_7.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_7
        case 3, 4, 5
            int32_t* var_ff4_1 = arg6
            void var_f10
            sub_544390(arg4, sub_4dbbd0(arg6, &var_f10, arg3))
            int32_t eax_9
            eax_9.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_9
        case 6
            eax_2 = nullptr
            var_fe4 = nullptr
            
            if (arg5 s<= 0)
                goto label_54779a
            
            do
                if (eax_2 s< *(arg2 + 0x184))
                    *(*(arg2 + 0x180) + (var_fe4 << 2))
                    sub_532ec0()
                    sub_5442d0(var_fe4 + arg4)
                    eax_2 = var_fe4
                
                eax_2 += 1
                var_fe4 = eax_2
            while (eax_2 s< arg5)
            
            eax_2.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_2
        case 7
            int32_t* esi_3 = nullptr
            var_fe4 = nullptr
            
            if (arg5 s<= 0)
                goto label_54779a
            
            do
                if (esi_3 s>= *(arg2 + 0x184))
                    sub_544150(esi_3 + arg4)
                else
                    int32_t* ebx_5 = var_fe4
                    *(*(arg2 + 0x180) + (ebx_5 << 2))
                    void* eax_38
                    int32_t edx_15
                    eax_38, edx_15 = sub_532ec0()
                    float var_fc8
                    sub_4e3690(&var_fc8, edx_15, arg3)
                    float edx_16 = var_fc8
                    float var_fa8
                    sub_533660(&var_fa8, eax_38)
                    var_f34 = fconvert.s(fconvert.t(var_fa8) * fconvert.t(edx_16))
                    float var_fc4
                    float var_fa4
                    float var_f30_2 = fconvert.s(fconvert.t(var_fa4) * fconvert.t(var_fc4))
                    float var_fc0
                    float var_fa0
                    float var_f2c_2 = fconvert.s(fconvert.t(var_fa0) * fconvert.t(var_fc0))
                    float var_fbc
                    float var_f9c
                    float var_f28_2 = fconvert.s(fconvert.t(var_f9c) * fconvert.t(var_fbc))
                    sub_544150(ebx_5 + arg4)
                    esi_3 = var_fe4
                
                esi_3 += 1
                var_fe4 = esi_3
            while (esi_3 s< arg5)
            
            int32_t* eax_42
            eax_42.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_42
        case 8
            int32_t* esi_6 = nullptr
            var_fe4 = nullptr
            
            if (arg5 s<= 0)
                goto label_54779a
            
            do
                if (esi_6 s>= *(arg2 + 0x184))
                    sub_544150(esi_6 + arg4)
                else
                    int32_t* ebx_8 = var_fe4
                    *(*(arg2 + 0x180) + (ebx_8 << 2))
                    float var_fb8
                    sub_533760(&var_fb8, sub_532ec0())
                    var_f34 = var_fb8
                    int32_t var_fb4
                    int32_t var_f30_3 = var_fb4
                    int32_t var_fb0
                    int32_t var_f2c_3 = var_fb0
                    int32_t var_fac
                    int32_t var_f28_3 = var_fac
                    sub_544150(ebx_8 + arg4)
                    esi_6 = var_fe4
                
                esi_6 += 1
                var_fe4 = esi_6
            while (esi_6 s< arg5)
            
            int32_t* eax_46
            eax_46.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_46
        case 9
            void* edi_2 = *(arg2 + 0x33c)
            
            if (edi_2 != 0)
                void* eax_20 = *(edi_2 + 0x2c)
                
                if (eax_20 != 0)
                    if (*(eax_20 + 0x80) s<= 0)
                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                            "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_4c5a30()
                            noreturn
                        
                        breakpoint
                    
                    int32_t* eax_22 = *(eax_20 + 0x80)
                    
                    if (arg5 s< eax_22)
                        eax_22 = arg5
                    
                    if (*(eax_20 + 0x7c) != 0 && eax_22 s> 0)
                        sub_544390(arg4, eax_22)
                        int32_t eax_24
                        eax_24.b = 1
                        sub_5a6aba(eax_1 ^ &var_fe4)
                        return eax_24
                    
                    sub_4c5870("pBones && numShaderConstants > 0", &data_83f3d3, "OpenGLGraphics.cpp", 
                        0xb04, "GLGraphicsSetSpecialRenderState")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            
            sub_4c5680("Can't use bones shader on non-animation structure\n")
            int32_t eax_26
            eax_26.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_26
        case 0xa, 0xb, 0xc, 0xd
            int32_t var_ff4_3 = arg3
            sub_533c50(*(arg2 + 0x350) + (arg6 << 5) + 0x1dc, 
                fconvert.s(fconvert.t(*(data_27e7fcc + 0x50))))
            sub_54b8d0(&var_f34, &var_f34)
            float* var_ff4_5 = &var_f34
            data_3079554(arg4)
            int32_t eax_19
            eax_19.b = 1
            int32_t __saved_edi
            int32_t var_18
            sub_5a6aba(var_18 ^ &__saved_edi)
            return eax_19
        case 0xe
            sub_544150(arg4)
            int32_t* eax_67
            eax_67.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_67
        case 0xf
            int32_t var_ff4_9 = arg3
            sub_5440e0(arg4, fconvert.s(fconvert.t(*(arg2 + 0x2f8))))
            int32_t eax_33
            eax_33.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_33
        case 0x12
            void var_f68
            sub_4e2170(&var_f68)
            __builtin_memcpy(&var_f34, &var_f68, 0x1c)
            sub_5442d0(arg4)
            int32_t* eax_69
            eax_69.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_69
        case 0x13
            __builtin_memcpy(&var_f34, 0x27e8090, 0x1c)
            sub_5442d0(arg4)
            int32_t* eax_71
            eax_71.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_71
        case 0x14
            sub_544150(arg4)
            int32_t* eax_72
            eax_72.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_72
        case 0x15
            sub_544390(arg4, 1)
            int32_t eax_13
            eax_13.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_13
        case 0x16
            sub_544390(arg4, 1)
            int32_t eax_15
            eax_15.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_15
        case 0x17
            float var_f98
            sub_4e3690(&var_f98, edx, arg3)
            float ecx_39 = *(arg2 + 0x2f4)
            float edx_12 = *(arg2 + 0x2ec)
            var_f34 = fconvert.s(fconvert.t(*(arg2 + 0x2e8)) * fconvert.t(var_f98))
            float var_f94
            float var_f30_1 = fconvert.s(fconvert.t(var_f94) * fconvert.t(edx_12))
            float var_f90
            float var_f2c_1 = fconvert.s(fconvert.t(*(arg2 + 0x2f0)) * fconvert.t(var_f90))
            float var_f8c
            float var_f28_1 = fconvert.s(fconvert.t(ecx_39) * fconvert.t(var_f8c))
            sub_544150(arg4)
            int32_t* eax_31
            eax_31.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_31
        case 0x18
            var_f44 = *(arg2 + 0x278)
            int32_t var_f40_3 = *(arg2 + 0x27c)
            int32_t var_f3c_3 = *(arg2 + 0x280)
            sub_5442d0(arg4)
            int32_t* eax_49
            eax_49.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_49
        case 0x19
            float var_f88
            sub_4e3690(&var_f88, edx, arg3)
            float var_f84
            float edx_27 = var_f84
            float eax_52 = *(arg2 + 0x2b4)
            float ecx_67 = *(arg2 + 0x2ac)
            var_f34 = fconvert.s(fconvert.t(*(arg2 + 0x2a8)) * fconvert.t(var_f88))
            float var_f30_4 = fconvert.s(fconvert.t(ecx_67) * fconvert.t(edx_27))
            float var_f80
            float var_f2c_4 = fconvert.s(fconvert.t(*(arg2 + 0x2b0)) * fconvert.t(var_f80))
            float var_f7c
            float var_f28_4 = fconvert.s(fconvert.t(eax_52) * fconvert.t(var_f7c))
        label_547792:
            sub_544150(arg4)
        label_54779a:
            eax_2.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_2
        case 0x1a
            sub_544390(arg4, 1)
            int32_t eax_12
            eax_12.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_12
        case 0x1b
            sub_544390(arg4, 1)
            int32_t eax_10
            eax_10.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_10
        case 0x1c
            if (arg5 s> 4)
                sub_4c5870("registerCount <= 4", &data_83f3d3, "OpenGLGraphics.cpp", 0xb78, 
                    "GLGraphicsSetSpecialRenderState")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t esi_8 = 0
            
            if (arg5 s<= 0)
                goto label_54779a
            
            void* edi_3 = arg2 + 0x248
            
            do
                var_f44 = *edi_3
                int32_t var_f40_5 = *(edi_3 + 4)
                int32_t var_f3c_5 = *(edi_3 + 8)
                sub_5442d0(esi_8 + arg4)
                esi_8 += 1
                edi_3 += 0xc
            while (esi_8 s< arg5)
            
            int32_t* eax_56
            eax_56.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_56
        case 0x1d
            if (arg5 s> 4)
                sub_4c5870("registerCount <= 4", &data_83f3d3, "OpenGLGraphics.cpp", 0xb83, 
                    "GLGraphicsSetSpecialRenderState")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t esi_9 = 0
            
            if (arg5 s<= 0)
                goto label_54779a
            
            void* edi_4 = arg2 + 0x278
            
            do
                var_f44 = *edi_4
                int32_t var_f40_6 = *(edi_4 + 4)
                int32_t var_f3c_6 = *(edi_4 + 8)
                sub_5442d0(esi_9 + arg4)
                esi_9 += 1
                edi_4 += 0xc
            while (esi_9 s< arg5)
            
            int32_t* eax_59
            eax_59.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_59
        case 0x1e
            if (arg5 s> 4)
                sub_4c5870("registerCount <= 4", &data_83f3d3, "OpenGLGraphics.cpp", 0xb8e, 
                    "GLGraphicsSetSpecialRenderState")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t esi_10 = 0
            
            if (arg5 s<= 0)
                goto label_54779a
            
            void* edi_5 = arg2 + 0x2a8
            int32_t* eax_64
            
            do
                float var_f78
                sub_4e3690(&var_f78, edx, arg3)
                float eax_63 = *(edi_5 + 0xc)
                float ecx_80 = *(edi_5 + 4)
                var_f34 = fconvert.s(fconvert.t(*edi_5) * fconvert.t(var_f78))
                float var_f74
                float var_f30_5 = fconvert.s(fconvert.t(ecx_80) * fconvert.t(var_f74))
                float var_f70
                float var_f2c_5 = fconvert.s(fconvert.t(*(edi_5 + 8)) * fconvert.t(var_f70))
                float var_f6c
                float var_f28_5 = fconvert.s(fconvert.t(eax_63) * fconvert.t(var_f6c))
                eax_64, edx = sub_544150(esi_10 + arg4)
                esi_10 += 1
                edi_5 += 0x10
            while (esi_10 s< arg5)
            
            eax_64.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_64
        case 0x1f
            void* eax_73 = data_27e7fcc
            void* edx_39 = data_27e7fe4
            var_f34 = fconvert.s(fconvert.t(*(eax_73 + 0x50)))
            float var_f30_6 = fconvert.s(fconvert.t(*(eax_73 + 0x4c)))
            float var_f2c_6 = fconvert.s(fconvert.t(*(edx_39 + 0x90)))
            float var_f28_6 = fconvert.s(float.t(0))
            sub_544150(arg4)
            int32_t* eax_75
            eax_75.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_75
        case 0x20
            sub_544150(arg4)
            int32_t* eax_76
            eax_76.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_76
        case 0x21
            sub_544150(arg4)
            int32_t* eax_77
            eax_77.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_77
        case 0x22
            sub_544150(arg4)
            int32_t* eax_37
            eax_37.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_37
        case 0x23
            void* eax_78 = data_307882c
            long double x87_r7_41 = float.t(0)
            float var_fdc_5 = fconvert.s(x87_r7_41)
            var_f34 = fconvert.s(fconvert.t(*(eax_78 + 0x24)) / fconvert.t(*(eax_78 + 0x20)))
            float var_f30_7 = var_fdc_5
            float var_f2c_7 = fconvert.s(x87_r7_41)
            float var_f28_7 = fconvert.s(x87_r7_41)
            goto label_547792
        case 0x24, 0x25, 0x26, 0x27
            *(arg2 + 0x350)
            sub_544150(arg4)
            int32_t* eax_35
            eax_35.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_35
        case 0x29
            sub_544150(arg4)
            int32_t* eax_66
            eax_66.b = 1
            sub_5a6aba(eax_1 ^ &var_fe4)
            return eax_66
    
    eax_2.b = 0
    sub_5a6aba(eax_1 ^ &var_fe4)
    return eax_2
}

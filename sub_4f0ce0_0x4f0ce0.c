// 函数名称: sub_4f0ce0
// 虚拟地址: 0x4f0ce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4f0ce0(int32_t arg1, uint32_t arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_693c88
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_2b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi = *(arg2 + 0x30)
    uint32_t result = sub_466320(**(esi + 0x2e4))
    void* esi_3 = *(esi + 0x2dc) * 0x134 + *result
    result.b = *(esi_3 + 0xda)
    char var_1bd = result.b
    
    if (*(esi_3 + 0x128) != 0 || *(esi_3 + 0x124) != 0 || *(esi_3 + 0x12c) != 0 || result.b != 0
            || *(esi_3 + 0x120) != 0)
        void* eax_5 = data_27e7fcc
        
        if (eax_5 == 0)
            sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_7 = *(eax_5 + 0x30)
        *(eax_7 + 0x28) += 1
        void* eax_10 = *(*(arg2 + 0x30) + 0x2e4)
        void* var_1c4 = eax_10
        result = *(eax_10 + 0x60)
        
        if (((result.b & 1) == 0 || *(arg2 + 0x40) == 0)
                && ((result.b & 2) == 0 || *(arg2 + 0x40) != 0))
            float eax_11 = sub_4eff00(arg2, arg4)
            float var_1c8 = eax_11
            float var_1d8
            float var_148
            
            if (var_1bd == 0)
                float var_f4
                int32_t var_f0_1
                
                if (*(esi_3 + 0xdf) == 0)
                    char var_1aa_2 = var_1c8:2.b
                    char var_1ab_2 = eax_11:1.b
                    char var_1a9_3 = var_1c8:3.b
                    var_1ab_2.w = 0
                    char var_1a9_4 = 0
                    var_f4 = eax_11.b.d
                    var_f0_1 = 0.d
                else
                    char var_1a9_1 = var_1c8:3.b
                    char ecx_6 = var_1c8:2.b
                    char var_1ab
                    var_1ab.w = 0
                    var_f4 = 0.d
                    char var_1aa_1 = ecx_6
                    char var_1ab_1 = eax_11:1.b
                    char var_1a9_2 = 0xff
                    var_f0_1 = eax_11.b.d
                
                float var_b8[0x8]
                __builtin_memcpy(&var_b8, &arg4[0x1a], 0x20)
                void var_38
                __builtin_memcpy(&var_38, &arg4[0x1a], 0x20)
                
                if (sub_4f3e80(arg3) != 0)
                    float var_168
                    sub_405f60(&var_168, arg3)
                    __builtin_memcpy(&var_38, &var_168, 0x20)
                
                result = sub_4ef8a0(&var_38, &var_f4)
                
                if (var_f4:3.b != 0)
                    void* ebx_2 = esi_3
                    int32_t eax_19 = *(arg2 + 0x38)
                    int32_t edx_7 = *(ebx_2 + 0xf4)
                    int32_t edi_3
                    
                    if (eax_19 s>= 0)
                        edi_3 = edx_7 - 1
                        
                        if (eax_19 s<= edx_7 - 1)
                            edi_3 = eax_19
                    else
                        edi_3 = 0
                    
                    int32_t ecx_12 = *(arg2 + 0x34)
                    int32_t eax_20 = *(ebx_2 + 0xf0)
                    
                    if (ecx_12 s< 0)
                        ecx_12 = 0
                    else if (ecx_12 s> eax_20 - 1)
                        ecx_12 = eax_20 - 1
                    
                    int32_t var_2bc_3 = eax_20
                    int32_t var_2c0_2 = edx_7
                    float var_248
                    sub_4da5c0(&var_248, edx_7, ecx_12, edi_3, ecx_12)
                    var_1d8 = var_248
                    char** ecx_14 = *(ebx_2 + 0x128)
                    int32_t* edx_10 = *(ebx_2 + 0x124)
                    int32_t var_23c
                    int32_t var_1cc_2 = var_23c
                    int32_t* var_1b4_1 = edx_10
                    
                    if (ecx_14 != 0)
                        int32_t* eax_23 = sub_514ee0(ecx_14)
                        var_1b4_1 = eax_23
                        edx_10 = eax_23
                    
                    void* ecx_15 = var_1c4
                    int32_t* eax_24 = *(ecx_15 + 0x1c)
                    
                    if (eax_24 != 0)
                        var_1b4_1 = eax_24
                        edx_10 = eax_24
                    
                    char var_1ac_2
                    var_1ac_2.d = *(ebx_2 + 0x12c)
                    int32_t eax_26 = *(ecx_15 + 0x18)
                    
                    if (eax_26 != 0)
                        var_1ac_2.d = eax_26
                    
                    *(eax_7 + 0x2c) += 1
                    float var_228
                    float var_218
                    float var_208
                    float var_1f8[0x4]
                    void var_164
                    float var_154
                    float var_150
                    float var_14c
                    float var_138
                    float var_128
                    float var_118
                    float var_108
                    float var_104
                    float var_f8
                    float var_e8
                    float var_e4
                    float var_d8[0x7]
                    float var_98[0x4]
                    float var_58[0x7]
                    float var_34
                    float var_24
                    float var_20
                    float var_1c
                    
                    if (*(ebx_2 + 0x120) != 0)
                        if (edx_10 == 0)
                            if ((data_3165a8c & 1) == 0)
                                data_3165a8c.d |= 1
                                int32_t* var_8_1 = edx_10
                                char** eax_28
                                eax_28, edx_10 = sub_509140(5, "sys/draw3d.material")
                                data_3165a88 = eax_28
                                int32_t var_8_2 = 0xffffffff
                            
                            ecx_15 = data_3165a88
                            var_1b4_1 = ecx_15
                        
                        int32_t* eax_35 = *(ebx_2 + 0x130)
                        
                        if (eax_35 u> 4)
                            sub_4c5870("Halt", &data_83f3d3, "Particle.cpp", 0x893, "ParticleSpotDraw")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        float* var_2bc_4
                        
                        switch (eax_35)
                            case 1
                                __builtin_memcpy(&var_164, 0x27e8090, 0x1c)
                                var_f8 = fconvert.s(fconvert.t(var_154) - fconvert.t(var_24))
                                var_f4 = fconvert.s(fconvert.t(var_150) - fconvert.t(var_20))
                                float eax_29 = var_f4
                                float var_f0_2 = fconvert.s(fconvert.t(var_14c) - fconvert.t(var_1c))
                                var_108 = var_f8
                                var_104 = eax_29
                                float var_100_2 = var_f0_2
                                float* eax_30 = sub_4132a0(&var_108, &var_128)
                                float ecx_17 = eax_30[1]
                                var_f8 = *eax_30
                                int32_t edx_13 = eax_30[2]
                                var_f4 = ecx_17
                                int32_t var_f0_3 = edx_13
                                sub_413320(&var_138, &var_f8, &data_8409cc)
                                var_108 = var_138
                                float var_134
                                var_104 = var_134
                                int32_t var_130
                                int32_t var_100_3 = var_130
                                float* eax_33 = sub_4132a0(&var_108, &var_228)
                                float edx_16 = eax_33[1]
                                int32_t eax_34 = eax_33[2]
                                var_108 = *eax_33
                                var_104 = edx_16
                                var_2bc_4 = &var_f8
                                int32_t var_100_4 = eax_34
                            label_4f138b:
                                float* eax_45 = sub_4137a0(&data_8409b4, var_2bc_4)
                                int32_t ecx_33 = eax_45[1]
                                var_34 = *eax_45
                                edx_10 = eax_45[2]
                                int32_t* var_28_3 = eax_45[3]
                                int32_t* var_2c_3 = edx_10
                                int32_t var_30_3 = ecx_33
                                ebx_2 = esi_3
                            case 2
                                void* var_2bc_5 = ecx_15
                                eax_35 = sub_406230(&var_1d8, &data_8409b4, 
                                    fconvert.s(fneg(fconvert.t(data_30d7348))))
                                int32_t edx_18 = eax_35[1]
                                var_34 = *eax_35
                                int32_t var_30_1 = edx_18
                                edx_10 = eax_35[3]
                                int32_t var_2c_1 = eax_35[2]
                                int32_t* var_28_1 = edx_10
                            case 3
                                __builtin_memcpy(&var_164, 0x27e8090, 0x1c)
                                sub_465a20(&var_208, edx_10, &var_34)
                                var_108 = var_208
                                float var_204
                                var_104 = var_204
                                var_f8 = fconvert.s(fconvert.t(var_154) - fconvert.t(var_24))
                                int32_t var_200
                                int32_t var_100_5 = var_200
                                var_118 = var_f8
                                var_f4 = fconvert.s(fconvert.t(var_150) - fconvert.t(var_20))
                                float edx_21 = var_f4
                                float var_f0_4 = fconvert.s(fconvert.t(var_14c) - fconvert.t(var_1c))
                                float* eax_39 = sub_4132a0(&var_118, &var_218)
                                float edx_22 = eax_39[1]
                                int32_t eax_40 = eax_39[2]
                                var_f8 = *eax_39
                                var_f4 = edx_22
                                int32_t var_f0_5 = eax_40
                                sub_413320(&var_118, &var_108, &var_f8)
                                var_f8 = var_118
                                var_f4 = edx_21
                                float var_f0_6 = var_f0_4
                                float* eax_43 = sub_4132a0(&var_f8, &var_1f8)
                                float edx_25 = eax_43[1]
                                int32_t eax_44 = eax_43[2]
                                var_f8 = *eax_43
                                var_f4 = edx_25
                                var_2bc_4 = &var_108
                                int32_t var_f0_7 = eax_44
                                goto label_4f138b
                            case 4
                                eax_35 = sub_4f3d90(arg2 + 0xc, &data_8409b4)
                                int32_t edx_19 = eax_35[1]
                                var_34 = *eax_35
                                int32_t var_30_2 = edx_19
                                edx_10 = eax_35[3]
                                int32_t var_2c_2 = eax_35[2]
                                int32_t* var_28_2 = edx_10
                                ebx_2 = esi_3
                        
                        long double x87_r7_18 = fconvert.t(arg4[3])
                        long double x87_r6_1 = float.t(0)
                        x87_r6_1 - x87_r7_18
                        eax_35.w = (x87_r6_1 < x87_r7_18 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_18) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_18 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (p_1)
                            void* eax_46 = var_1c4
                            var_f8 = *(eax_46 + 0x40)
                            long double x87_r7_19 = fconvert.t(var_f8)
                            float edx_29 = *(eax_46 + 0x48)
                            __builtin_memcpy(&var_164, 0x27e8090, 0x1c)
                            var_108 = fconvert.s(x87_r7_19 - fconvert.t(var_154))
                            float eax_47 = var_108
                            var_f4 = *(eax_46 + 0x44)
                            long double x87_r7_22 = fconvert.t(var_f4) - fconvert.t(var_150)
                            var_f8 = eax_47
                            var_104 = fconvert.s(x87_r7_22)
                            var_f4 = var_104
                            float var_f0_9 = fconvert.s(fconvert.t(edx_29) - fconvert.t(var_14c))
                            float* eax_48 = sub_4132a0(&var_f8, &var_1f8)
                            edx_10 = eax_48[1]
                            float eax_49 = eax_48[2]
                            var_f8 = *eax_48
                            long double x87_r7_25 = fconvert.t(arg4[3])
                            var_f4 = edx_10
                            long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_25))
                            var_108 = fconvert.s(x87_r7_26 * fconvert.t(var_f8))
                            var_104 = fconvert.s(fconvert.t(var_f4) * x87_r7_26)
                            float var_24_1 = fconvert.s(fconvert.t(var_108) + fconvert.t(var_24))
                            float var_20_1 = fconvert.s(fconvert.t(var_104) + fconvert.t(var_20))
                            float var_1c_1 = fconvert.s(
                                fconvert.t(fconvert.s(x87_r7_26 * fconvert.t(eax_49)))
                                + fconvert.t(var_1c))
                        
                        sub_406370(&var_98, edx_10, &var_38)
                        long double x87_r7_35 = fconvert.t(fconvert.s(fconvert.t(arg4[0x1a])))
                        long double x87_r6_7 = x87_r7_35 * fconvert.t(*arg4)
                        __builtin_memcpy(&var_d8, &var_98, 0x40)
                        var_f8 = fconvert.s(x87_r6_7)
                        var_f4 = fconvert.s(fconvert.t(arg4[1]) * x87_r7_35)
                        float ecx_40 = var_f4
                        float var_f0_11 = fconvert.s(x87_r7_35 * fconvert.t(arg4[2]))
                        var_e8 = var_f8
                        var_e4 = ecx_40
                        float var_e0_3 = var_f0_11
                        sub_4f3d30(&var_58, var_f0_11, &var_e8)
                        __builtin_memcpy(&var_98, &var_58, 0x40)
                        sub_406020(&var_58, &var_d8, &var_98)
                        void* const var_2bc_7 = nullptr
                        char** eax_56 = *(ebx_2 + 0x120)
                        __builtin_memcpy(&var_98, &var_58, 0x40)
                        result = sub_4e0050(eax_56, &var_98, var_1b4_1, var_1ac_2.d, var_2bc_7)
                    else
                        float var_1e8
                        float var_188
                        float var_124
                        
                        if (*(ecx_15 + 0x74) == 0)
                            if (edx_10 == 0 && *(ebx_2 + 0xe1) != edx_10.b)
                                if ((data_3165a8c & 8) == 0)
                                    data_3165a8c.d |= 8
                                    int32_t var_8_7 = 3
                                    char** eax_111
                                    eax_111, ecx_15 =
                                        sub_509140(edx_10 + 5, "sys\SpriteAdditive.material")
                                    data_3165a7c = eax_111
                                    int32_t var_8_8 = 0xffffffff
                                
                                var_1b4_1 = data_3165a7c
                            
                            long double x87_r7_78 = fconvert.t(*(arg2 + 0x24))
                            long double x87_r6_20 = float.t(0)
                            x87_r6_20 - x87_r7_78
                            uint32_t eax_112
                            eax_112.w = (x87_r6_20 < x87_r7_78 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_20, x87_r7_78) ? 1 : 0) << 0xa
                                | (x87_r6_20 == x87_r7_78 ? 1 : 0) << 0xe | 0x3000
                            bool p_3 = unimplemented  {test ah, 0x44}
                            void var_158
                            float var_144
                            float var_140
                            int32_t* const eax_113
                            
                            if (p_3)
                                void* var_2bc_23 = ecx_15
                                int32_t* eax_114 = sub_406230(&var_158, &data_8409cc, 
                                    fconvert.s(fconvert.t(*(arg2 + 0x24))))
                                x87_r7_78 = float.t(0)
                                float ecx_91 = eax_114[1]
                                var_148 = *eax_114
                                int32_t var_13c_2 = eax_114[3]
                                var_144 = ecx_91
                                var_140 = eax_114[2]
                                eax_113 = &var_148
                            else
                                eax_113 = &data_840998
                            
                            bool cond:2_1 = *(ebx_2 + 0x130) != 4
                            int32_t edx_83 = eax_113[1]
                            var_1e8 = *eax_113
                            int32_t var_1e4_1 = edx_83
                            int32_t var_1e0_1 = eax_113[2]
                            int32_t var_1dc_1 = eax_113[3]
                            var_e8 = 0f
                            var_e4 = 0f
                            float var_e0_16 = 0f
                            
                            if (not(cond:2_1))
                                float* eax_117 = sub_4132a0(arg2 + 0xc, &var_148)
                                int32_t edx_85 = eax_117[1]
                                int32_t eax_118 = eax_117[2]
                                var_124 = *eax_117
                                int32_t var_120_5 = edx_85
                                int32_t var_11c_5 = eax_118
                                float* eax_119 = sub_413800(&var_158, &data_8409cc)
                                x87_r7_78 = float.t(0)
                                int32_t ecx_95 = eax_119[1]
                                ebx_2 = esi_3
                                var_34 = *eax_119
                                int32_t var_30_8 = ecx_95
                                int32_t var_2c_8 = eax_119[2]
                                int32_t var_28_8 = eax_119[3]
                            
                            long double x87_r6_21 = fconvert.t(*(ebx_2 + 0x100))
                            x87_r7_78 - x87_r6_21
                            int32_t eax_116
                            eax_116.w = (x87_r7_78 < x87_r6_21 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_78, x87_r6_21) ? 1 : 0) << 0xa
                                | (x87_r7_78 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800
                            bool p_4 = unimplemented  {test ah, 0x44}
                            bool p_5
                            
                            if (not(p_4))
                                long double x87_r6_22 = fconvert.t(*(ebx_2 + 0x104))
                                x87_r7_78 - x87_r6_22
                                eax_116.w = (x87_r7_78 < x87_r6_22 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_78, x87_r6_22) ? 1 : 0) << 0xa
                                    | (x87_r7_78 == x87_r6_22 ? 1 : 0) << 0xe | 0x3800
                                p_5 = unimplemented  {test ah, 0x44}
                            
                            if (p_4 || p_5)
                                var_108 = fconvert.s(fconvert.t(*(ebx_2 + 0x100)))
                                long double x87_r6_24 = fconvert.t(*(ebx_2 + 0x104))
                                var_124 = var_108
                                var_104 = fconvert.s(x87_r6_24)
                                float var_120_6 = var_104
                                float var_11c_6 = fconvert.s(x87_r7_78)
                                sub_405970(&var_148, &var_124, &var_1e8)
                                var_108 = var_148
                                long double x87_r7_81 = fconvert.t(var_108) * fconvert.t(*arg4)
                                var_104 = var_144
                                var_118 = fconvert.s(x87_r7_81)
                                long double x87_r7_82 = fconvert.t(arg4[1])
                                var_e8 = var_118
                                long double x87_r7_84 = fconvert.t(arg4[2])
                                var_e4 = fconvert.s(x87_r7_82 * fconvert.t(var_104))
                                var_e0_16 = fconvert.s(x87_r7_84 * fconvert.t(var_140))
                            
                            sub_4f3c40(&var_98, arg4, &var_1e8, &var_e8)
                            __builtin_memcpy(&var_d8, &var_98, 0x40)
                            sub_406370(&var_188, arg4, &var_38)
                            __builtin_memcpy(&var_98, &var_188, 0x40)
                            float* edx_93 = &var_98
                            sub_406020(&var_58, edx_93, &var_d8)
                            __builtin_memcpy(&var_d8, &var_58, 0x40)
                            float var_3c
                            uint32_t eax_128 = &var_3c
                            sub_4ef0a0(eax_128, edx_93, &var_d8)
                            
                            if (*(arg2 + 0x40) != 0 && *(ebx_2 + 0xe0) != 0)
                                long double x87_r6_25 = float.t(1)
                                var_108 = fconvert.s(fconvert.t(var_e8) - x87_r6_25)
                                var_124 = var_108
                                float* var_2bc_27 = &var_124
                                var_104 = fconvert.s(x87_r6_25 + fconvert.t(var_e4))
                                float var_120_7 = var_104
                                float var_11c_7 = fconvert.s(fconvert.t(var_e0_16) + fconvert.t(0.0))
                                sub_4f3c40(&var_188, arg4, &var_1e8, var_2bc_27)
                                __builtin_memcpy(&var_d8, &var_188, 0x40)
                                float* edx_97 = &var_98
                                float var_2a8[0x10]
                                sub_406020(&var_2a8, edx_97, &var_d8)
                                __builtin_memcpy(&var_98, &var_2a8, 0x40)
                                float var_bc
                                sub_4ef0a0(&var_bc, edx_97, &var_98)
                                float eax_133
                                int32_t edx_98
                                eax_133, edx_98 = sub_4da3e0(0, 0, 0, var_1c8:3.b u>> 2)
                                int32_t var_e0_17 = edx_98
                                int32_t* var_2cc_9 = &var_e4
                                var_e4 = eax_133
                                eax_128 = sub_4d9b80(eax_133, &var_e4, var_1b4_1, &var_bc, &var_1d8, 
                                    var_2cc_9)
                            
                            if (var_1ac_2.d == 0)
                                eax_128 = sub_5311d0(*(*(sub_466320(var_1b4_1) + 4) + 4) + 4, 0x53)
                                var_1ac_2.d = eax_128
                            
                            result = sub_4d9b80(eax_128, &var_f4, var_1b4_1, &var_3c, &var_1d8, &var_f4)
                        else
                            if (edx_10 == 0)
                                if (*(ebx_2 + 0xe1) == edx_10.b)
                                    if ((data_3165a8c & 4) == 0)
                                        data_3165a8c.d |= 4
                                        int32_t var_8_5 = 2
                                        data_3165a80 = sub_509140(5, "sys/particle_3d.material")
                                        int32_t var_8_6 = 0xffffffff
                                    
                                    edx_10 = data_3165a80
                                    var_1b4_1 = edx_10
                                else
                                    if ((data_3165a8c & 2) == 0)
                                        data_3165a8c.d |= 2
                                        int32_t var_8_3 = 1
                                        char** eax_58
                                        eax_58, edx_10 =
                                            sub_509140(edx_10 + 5, "sys/particle_3d_additive.material")
                                        data_3165a84 = eax_58
                                        int32_t var_8_4 = 0xffffffff
                                    
                                    var_1b4_1 = data_3165a84
                            
                            float var_88
                            uint32_t esi_14
                            
                            if (*(ebx_2 + 0xe2) != 0 || *(ebx_2 + 0xe3) != 0)
                                esi_14 = arg2
                                int32_t eax_60 = *(esi_14 + 0x284)
                                
                                if (eax_60 s<= 1)
                                    goto label_4f1845
                                
                                uint32_t edx_34 = *(*(esi_14 + 0x30) + 0x2e4)
                                
                                if (*(edx_34 + 0x75) == 0)
                                    int32_t eax_61 = eax_60 * 9
                                    float ecx_48 = *(esi_14 + (eax_61 << 2) + 0x24)
                                    var_e8 = *(esi_14 + (eax_61 << 2) + 0x20)
                                    int32_t edx_36 = *(esi_14 + (eax_61 << 2) + 0x28)
                                    float* var_2bc_9 = &var_e8
                                    var_e4 = ecx_48
                                    int32_t var_e0_4 = edx_36
                                    float* eax_63 = sub_405830(&var_1f8, arg3, var_2bc_9)
                                    float edx_37 = eax_63[1]
                                    int32_t var_e0_5 = eax_63[2]
                                    var_e8 = *eax_63
                                    var_e4 = edx_37
                                    edx_34 = sub_4e2000(&var_e8)
                                    esi_14 = arg2
                                
                                int32_t ebx_3 = *(esi_14 + 0x284)
                                
                                if (ebx_3 s> 0x10)
                                    sub_4c5870("pSpot->numTrailSegments <= MAX_TRAIL_SEGMENTS", 
                                        &data_83f3d3, "Particle.cpp", 0x8c7, "ParticleSpotDraw")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edi_10 = 1
                                
                                if (ebx_3 s> 1)
                                    float* esi_17 = arg2 + 0x8c
                                    
                                    do
                                        sub_4ca140(&var_b8, edx_34, &var_1d8)
                                        float* ecx_51 = nullptr
                                        float* edx_38 = nullptr
                                        
                                        if (edi_10 != 1)
                                            ecx_51 = &esi_17[-0x1b]
                                        
                                        if (edi_10 != ebx_3 - 1)
                                            edx_38 = esi_17
                                        
                                        float* var_2bc_11 = ecx_51
                                        sub_4f07c0(&var_88, edx_38, ecx_51, &var_88, &esi_17[-0x12], 
                                            fconvert.s(fconvert.t(esi_17[-0xb])))
                                        sub_4e0890(&var_88, 4)
                                        int32_t* eax_70 = var_1ac_2.d
                                        sub_4deaf0(eax_70, &var_f4, &var_88, &var_b8, eax_70, var_1b4_1)
                                        edx_34 = arg2
                                        ebx_3 = *(edx_34 + 0x284)
                                        edi_10 += 1
                                        esi_17 = &esi_17[9]
                                    while (edi_10 s< ebx_3)
                                
                                result = arg2
                                
                                if (*(*(*(result + 0x30) + 0x2e4) + 0x75) == 0)
                                    result = sub_4e2080()
                            else
                                esi_14 = arg2
                            label_4f1845:
                                long double x87_r7_38 = fconvert.t(-0.5f)
                                var_88 = fconvert.s(x87_r7_38)
                                float var_84_1 = fconvert.s(x87_r7_38)
                                long double x87_r6_10 = float.t(0)
                                float var_80 = fconvert.s(x87_r6_10)
                                long double x87_r5_1 = fconvert.t(0.5f)
                                float var_7c_1 = fconvert.s(x87_r5_1)
                                float var_6c_1 = fconvert.s(x87_r5_1)
                                float var_64_1 = fconvert.s(x87_r5_1)
                                float var_60_1 = fconvert.s(x87_r5_1)
                                float var_78_1 = fconvert.s(x87_r7_38)
                                float var_70_1 = fconvert.s(x87_r7_38)
                                float var_74_1 = fconvert.s(x87_r6_10)
                                float var_68_1 = fconvert.s(x87_r6_10)
                                float var_5c_1 = fconvert.s(x87_r6_10)
                                sub_4ca140(&var_b8, edx_10, &var_1d8)
                                float edx_42 = *(esi_14 + 0x30)
                                float ecx_55 = *(ebx_2 + 0xfc)
                                var_104 = *(ebx_2 + 0xf8)
                                float var_100_9 = ecx_55
                                
                                if (*(*(edx_42 i+ 0x2e4) + 0x18) != 0)
                                    float eax_75
                                    float edx_43
                                    eax_75, edx_43 = sub_418560(var_1ac_2.d)
                                    var_e4 = eax_75
                                    long double x87_r6_12 = fconvert.t(0.0099999997764825821)
                                    ecx_55 = fconvert.s(fconvert.t(var_e4) * x87_r6_12
                                        / float.t(*(ebx_2 + 0xf4)))
                                    var_104 = ecx_55
                                    edx_42 = fconvert.s(x87_r6_12 * fconvert.t(edx_43)
                                        / float.t(*(ebx_2 + 0xf0)))
                                    float var_100_10 = edx_42
                                
                                int32_t eax_76 = *(ebx_2 + 0x130)
                                
                                if (eax_76 u> 4)
                                    sub_4c5870("Halt", &data_83f3d3, "Particle.cpp", 0x936, 
                                        "ParticleSpotDraw")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                float* var_2bc_16
                                int32_t* eax_78
                                
                                switch (eax_76)
                                    case 0
                                        float var_2bc_14 = ecx_55
                                        void var_238
                                        int32_t* eax_77 = sub_406230(&var_238, &data_8409b4, 
                                            fconvert.s(fneg(fconvert.t(data_30d7348))))
                                        float edx_44 = eax_77[1]
                                        var_128 = *eax_77
                                        int32_t ecx_57 = eax_77[2]
                                        var_124 = edx_44
                                        int32_t var_120_1 = ecx_57
                                        int32_t var_11c_1 = eax_77[3]
                                        float var_258[0x4]
                                        eax_78 = sub_48b870(&var_258)
                                        int32_t edx_46 = eax_78[1]
                                        var_34 = *eax_78
                                        int32_t var_30_4 = edx_46
                                        int32_t var_2c_4 = eax_78[2]
                                        int32_t var_28_4 = eax_78[3]
                                    case 1
                                        void var_1a8
                                        __builtin_memcpy(&var_1a8, 0x27e8090, 0x1c)
                                        float var_198
                                        var_e8 = fconvert.s(fconvert.t(var_24) - fconvert.t(var_198))
                                        float var_194
                                        var_e4 = fconvert.s(fconvert.t(var_20) - fconvert.t(var_194))
                                        float ecx_60 = var_e4
                                        float var_190
                                        float var_e0_7 =
                                            fconvert.s(fconvert.t(var_1c) - fconvert.t(var_190))
                                        var_118 = var_e8
                                        float var_114_3 = ecx_60
                                        float var_110_3 = var_e0_7
                                        float* eax_80 = sub_4132a0(&var_118, &var_1f8)
                                        float edx_49 = eax_80[1]
                                        int32_t eax_81 = eax_80[2]
                                        var_e8 = *eax_80
                                        var_e4 = edx_49
                                        int32_t var_e0_8 = eax_81
                                        sub_413320(&var_218, &var_e8, &data_8409cc)
                                        var_118 = var_218
                                        int32_t var_214
                                        int32_t var_114_4 = var_214
                                        int32_t var_210
                                        int32_t var_110_4 = var_210
                                        float* eax_84 = sub_4132a0(&var_118, &var_208)
                                        int32_t edx_52 = eax_84[1]
                                        int32_t eax_85 = eax_84[2]
                                        var_118 = *eax_84
                                        int32_t var_114_5 = edx_52
                                        var_2bc_16 = &var_e8
                                        int32_t var_110_5 = eax_85
                                    label_4f1c69:
                                        int32_t* eax_96 = sub_4137a0(&data_8409b4, var_2bc_16)
                                        int32_t ecx_75 = eax_96[1]
                                        var_34 = *eax_96
                                        int32_t* var_28_7 = eax_96[3]
                                        int32_t var_2c_7 = eax_96[2]
                                        int32_t var_30_7 = ecx_75
                                        ebx_2 = esi_3
                                    case 2
                                        var_34 = 0f
                                        int32_t var_30_6 = 0
                                        int32_t var_2c_6 = 0
                                        int32_t var_28_6 = 0x3f800000
                                    case 3
                                        __builtin_memcpy(&var_164, 0x27e8090, 0x1c)
                                        sub_465a20(&var_228, edx_42, &var_34)
                                        var_118 = var_228
                                        int32_t var_224
                                        int32_t var_114_6 = var_224
                                        var_e8 = fconvert.s(fconvert.t(var_154) - fconvert.t(var_24))
                                        int32_t var_220
                                        int32_t var_110_6 = var_220
                                        var_138 = var_e8
                                        var_e4 = fconvert.s(fconvert.t(var_150) - fconvert.t(var_20))
                                        float var_134_1 = var_e4
                                        float var_130_1 =
                                            fconvert.s(fconvert.t(var_14c) - fconvert.t(var_1c))
                                        float* eax_89 = sub_4132a0(&var_138, &var_1e8)
                                        int32_t edx_58 = eax_89[1]
                                        int32_t eax_90 = eax_89[2]
                                        var_138 = *eax_89
                                        int32_t var_134_2 = edx_58
                                        int32_t var_130_2 = eax_90
                                        sub_413320(&var_1d8, &var_118, &var_138)
                                        var_138 = var_1d8
                                        int32_t var_244
                                        int32_t var_134_3 = var_244
                                        int32_t var_240
                                        int32_t var_130_3 = var_240
                                        float* eax_93 = sub_4132a0(&var_138, &var_148)
                                        long double x87_r7_60 = fconvert.t(-0f)
                                        float ecx_73 = *eax_93
                                        var_e8 = fconvert.s(x87_r7_60)
                                        int32_t edx_61 = eax_93[1]
                                        int32_t eax_94 = eax_93[2]
                                        var_e4 = fconvert.s(fconvert.t(-1f))
                                        var_138 = ecx_73
                                        float var_e0_10 = fconvert.s(x87_r7_60)
                                        int32_t var_134_4 = edx_61
                                        float edx_62 = var_e4
                                        var_124 = var_e8
                                        int32_t var_130_4 = eax_94
                                        float var_120_2 = edx_62
                                        var_2bc_16 = &var_118
                                        float var_11c_2 = var_e0_10
                                        goto label_4f1c69
                                    case 4
                                        eax_78 = sub_4f3d90(esi_14 + 0xc, &data_8409b4)
                                        int32_t edx_54 = eax_78[1]
                                        var_34 = *eax_78
                                        int32_t var_30_5 = edx_54
                                        int32_t var_2c_5 = eax_78[2]
                                        int32_t var_28_5 = eax_78[3]
                                        ebx_2 = esi_3
                                
                                float* ecx_79 = arg4
                                long double x87_r7_61 = fconvert.t(ecx_79[3])
                                long double x87_r6_15 = float.t(0)
                                x87_r6_15 - x87_r7_61
                                eax_78.w = (x87_r6_15 < x87_r7_61 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_15, x87_r7_61) ? 1 : 0) << 0xa
                                    | (x87_r6_15 == x87_r7_61 ? 1 : 0) << 0xe
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (p_2)
                                    void* eax_97 = var_1c4
                                    var_e8 = *(eax_97 + 0x40)
                                    long double x87_r7_62 = fconvert.t(var_e8)
                                    float edx_66 = *(eax_97 + 0x48)
                                    __builtin_memcpy(&var_164, 0x27e8090, 0x1c)
                                    var_118 = fconvert.s(x87_r7_62 - fconvert.t(var_154))
                                    float eax_98 = var_118
                                    var_e4 = *(eax_97 + 0x44)
                                    long double x87_r7_65 = fconvert.t(var_e4) - fconvert.t(var_150)
                                    var_124 = eax_98
                                    float var_120_3 = fconvert.s(x87_r7_65)
                                    float var_11c_3 =
                                        fconvert.s(fconvert.t(edx_66) - fconvert.t(var_14c))
                                    int32_t* eax_99 = sub_4132a0(&var_124, &var_148)
                                    float edx_68 = eax_99[1]
                                    float eax_100 = eax_99[2]
                                    var_118 = *eax_99
                                    ecx_79 = arg4
                                    long double x87_r7_69 =
                                        fconvert.t(fconvert.s(fconvert.t(ecx_79[3])))
                                    var_e8 = fconvert.s(x87_r7_69 * fconvert.t(var_118))
                                    var_e4 = fconvert.s(fconvert.t(edx_68) * x87_r7_69)
                                    float var_24_2 = fconvert.s(fconvert.t(var_e8) + fconvert.t(var_24))
                                    float var_20_2 = fconvert.s(fconvert.t(var_e4) + fconvert.t(var_20))
                                    float var_1c_2 = fconvert.s(
                                        fconvert.t(fconvert.s(x87_r7_69 * fconvert.t(eax_100)))
                                        + fconvert.t(var_1c))
                                
                                float* var_2c0_10 = ecx_79
                                int16_t top_1 = 0
                                sub_4ef140(&var_188, 
                                    sub_4f0130(arg2, ebx_2 + 0x100, &var_104, &var_188, 
                                        fconvert.s(fconvert.t(*(arg2 + 0x24))), arg4), 
                                    &var_88)
                                
                                if (sub_4eadf0(&data_840a00, &arg4[0x17]) == 0)
                                    int32_t* eax_109 = var_1ac_2.d
                                    result = sub_4deaf0(eax_109, &var_f4, &var_88, &var_b8, eax_109, 
                                        var_1b4_1)
                                else
                                    int32_t i = 0
                                    var_1c4 = &var_80
                                    
                                    do
                                        unimplemented  {fld st0, dword [eax-0x8]}
                                        __builtin_memcpy(&var_164, 0x27e8090, 0x1c)
                                        unimplemented  {fsub st0, dword [ebp-0x150]}
                                        var_108 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x104], st0})
                                        unimplemented  {fstp dword [ebp-0x104], st0}
                                        unimplemented  {fld st0, dword [eax-0x4]}
                                        unimplemented  {fsub st0, dword [ebp-0x14c]}
                                        var_104 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0x100], st0})
                                        unimplemented  {fstp dword [ebp-0x100], st0}
                                        unimplemented  {fld st0, dword [eax]}
                                        unimplemented  {fsub st0, dword [ebp-0x148]}
                                        float ecx_82 = var_104
                                        float var_100_11 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xfc], st0})
                                        unimplemented  {fstp dword [ebp-0xfc], st0}
                                        unimplemented  {fld1 }
                                        var_124 = var_108
                                        float var_2bc_18 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                                        unimplemented  {fstp dword [esp+0x4], st0}
                                        float var_120_4 = ecx_82
                                        unimplemented  {fldz }
                                        float var_11c_4 = var_100_11
                                        float var_2c0_12 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        sub_413260(&var_124)
                                        unimplemented  {call 0x413260}
                                        float var_2c4_9 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                                        unimplemented  {fstp dword [esp+0x8], st0}
                                        unimplemented  {fld st0, dword [eax+0x60]}
                                        float var_2c8_7 =
                                            fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                                        unimplemented  {fstp dword [esp+0x4], st0}
                                        unimplemented  {fld st0, dword [eax+0x5c]}
                                        float var_2cc_6 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        sub_4069e0(var_2cc_6, var_2c8_7, var_2c4_9, var_2c0_12, 
                                            var_2bc_18)
                                        float var_e0_14 =
                                            fconvert.s(unimplemented  {fstp dword [ebp-0xdc], st0})
                                        unimplemented  {fstp dword [ebp-0xdc], st0}
                                        unimplemented  {fld st0, dword [ebp-0xdc]}
                                        float var_2bc_19 =
                                            fconvert.s(unimplemented  {fstp dword [esp], st0})
                                        unimplemented  {fstp dword [esp], st0}
                                        top_1 += 1
                                        float eax_106 = sub_4658f0(&data_27e8020, &var_f4, var_2bc_19)
                                        var_1c4 += 0xc
                                        float var_110_9 = eax_106
                                        eax_106.b = var_f4:3.b
                                        var_110_9:3.b = eax_106.b
                                        (&var_34)[i * 2] = var_f0_1
                                        *(&var_38 + (i << 3)) = var_110_9
                                        i += 1
                                    while (i s< 4)
                                    
                                    unimplemented  {fld st0, dword [ebp-0x60]}
                                    unimplemented  {fadd dword [ebp-0x84]}
                                    var_f8 = fconvert.s(unimplemented  {fstp dword [ebp-0xf4], st0})
                                    unimplemented  {fstp dword [ebp-0xf4], st0}
                                    unimplemented  {fld st0, dword [ebp-0x5c]}
                                    unimplemented  {fadd dword [ebp-0x80]}
                                    char var_2d0_1 = 1
                                    var_f4 = fconvert.s(unimplemented  {fstp dword [ebp-0xf0], st0})
                                    unimplemented  {fstp dword [ebp-0xf0], st0}
                                    unimplemented  {fld st0, dword [ebp-0x58]}
                                    unimplemented  {fadd dword [ebp-0x7c]}
                                    float var_f0_12 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0xec], st0})
                                    unimplemented  {fstp dword [ebp-0xec], st0}
                                    unimplemented  {fld st0, dword [ebp-0xf4]}
                                    unimplemented  {fld st0, qword [0x8a5368]}
                                    unimplemented  {fmul st1, st0}
                                    unimplemented  {fxch st0, st1}
                                    unimplemented  {fxch st0, st1}
                                    var_e8 = fconvert.s(unimplemented  {fstp dword [ebp-0xe4], st0})
                                    unimplemented  {fstp dword [ebp-0xe4], st0}
                                    float edx_76 = var_e8
                                    unimplemented  {fld st0, dword [ebp-0xf0]}
                                    unimplemented  {fmul st0, st1}
                                    var_e4 = fconvert.s(unimplemented  {fstp dword [ebp-0xe0], st0})
                                    unimplemented  {fstp dword [ebp-0xe0], st0}
                                    unimplemented  {fmul st0, dword [ebp-0xec]}
                                    float var_e0_15 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0xdc], st0})
                                    unimplemented  {fstp dword [ebp-0xdc], st0}
                                    result = sub_4de380(&var_38, var_e0_15, &var_88, &var_b8, &var_38, 
                                        var_2d0_1, edx_76, var_e4, var_e0_15, var_1ac_2.d, var_1b4_1)
            else
                long double x87_r7_1 = float.t(0)
                void* eax_12 = data_27e7fd0
                var_148 = fconvert.s(x87_r7_1)
                float var_144_1 = fconvert.s(x87_r7_1)
                long double x87_r7_2 = float.t(*(eax_12 + 0x14))
                var_1d8 = var_148
                float var_1d4_1 = var_144_1
                float var_140_1 = fconvert.s(x87_r7_2)
                float var_1d0_1 = var_140_1
                float var_1cc_1 = fconvert.s(float.t(*(eax_12 + 0x18)))
                int80_t st0_1
                st0_1, result = sub_4da140(var_140_1, &var_1c8, &var_1d8, &var_1c8)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

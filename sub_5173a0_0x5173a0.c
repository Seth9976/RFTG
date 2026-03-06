// 函数名称: sub_5173a0
// 虚拟地址: 0x5173a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_5173a0(int32_t arg1, int32_t arg2, float* arg3, float* arg4, int32_t* arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* edi = *arg5 * 0xd0 + arg6 + 0x6c
    int32_t var_28c = arg6
    long double st0_1 =
        sub_4064d0(fconvert.s(fconvert.t(fconvert.s(sub_518a50((*edi << 6) + arg8) - fconvert.t(0.0)))))
    long double temp1 = fconvert.t(9.99999975e-06f)
    st0_1 - temp1
    float* result
    result.w = (st0_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp1) ? 1 : 0) << 0xa
        | (st0_1 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        int32_t eax_11 = sub_518990((*edi << 6) + arg8)
        float* ebx_1 = arg4
        long double x87_r7_4 = fconvert.t(ebx_1[5])
        float var_148
        __builtin_memcpy(&var_148, eax_11, 0x40)
        float var_144
        long double x87_r6_1 = fconvert.t(var_144)
        long double x87_r5_2 = fconvert.t(var_148)
        float var_140
        long double x87_r4_3 = fconvert.t(var_140)
        float var_13c
        float var_188 = fconvert.s(x87_r7_4 * x87_r6_1 + x87_r5_2 * fconvert.t(ebx_1[4])
            + x87_r4_3 * fconvert.t(ebx_1[6]) + fconvert.t(var_13c))
        float var_134
        long double x87_r3_4 = fconvert.t(var_134)
        float var_138
        long double x87_r2_2 = fconvert.t(var_138)
        float var_130
        float var_12c
        float var_184_1 = fconvert.s(fconvert.t(ebx_1[5]) * x87_r3_4 + x87_r2_2 * fconvert.t(ebx_1[4])
            + fconvert.t(var_130) * fconvert.t(ebx_1[6]) + fconvert.t(var_12c))
        float var_128
        float var_124
        float var_120
        float var_11c
        float var_180_1 = fconvert.s(fconvert.t(ebx_1[5]) * fconvert.t(var_124)
            + fconvert.t(var_128) * fconvert.t(ebx_1[4]) + fconvert.t(var_120) * fconvert.t(ebx_1[6])
            + fconvert.t(var_11c))
        float var_20 = fconvert.s(x87_r4_3 * fconvert.t(arg3[2]) + x87_r6_1 * fconvert.t(arg3[1])
            + x87_r5_2 * fconvert.t(*arg3))
        float var_1c_1 = fconvert.s(x87_r3_4 * fconvert.t(arg3[1]) + x87_r2_2 * fconvert.t(*arg3)
            + fconvert.t(var_130) * fconvert.t(arg3[2]))
        float var_18_1 = fconvert.s(fconvert.t(var_128) * fconvert.t(*arg3)
            + fconvert.t(var_124) * fconvert.t(arg3[1]) + fconvert.t(var_120) * fconvert.t(arg3[2]))
        float var_38 = var_20
        float var_34_1 = var_1c_1
        float var_30_1 = var_18_1
        int32_t i_2 = 0
        float var_1d8
        float var_1d4
        float var_1d0
        float var_1c8
        float var_108
        float var_f8
        float var_50
        float var_44
        int32_t i
        
        do
            int32_t j = 0
            float var_2c = var_188
            float var_28_1 = var_184_1
            float var_24_1 = var_180_1
            
            if (arg2 - 1 s> 0)
                do
                    if (j != 0 && arg5[j - 1] != *(arg5[j] * 0xd0 + arg6 + 0x6c))
                        sub_4c5870(
                            "i == 0 || boneIndicies[i-1] == defBones[boneIndicies[i]].parentBoneIndex", 
                            &data_83f3d3, "Animation.cpp", 0x514, 0x88b4a0)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t* esi_5 = arg5[j] * 0x2c + arg7
                    var_2c = fconvert.s(fconvert.t(var_2c) - fconvert.t(esi_5[4]))
                    float var_28_2 = fconvert.s(fconvert.t(var_28_1) - fconvert.t(esi_5[5]))
                    int32_t var_ec_1 = esi_5[3]
                    float var_24_2 = fconvert.s(fconvert.t(var_24_1) - fconvert.t(esi_5[6]))
                    float edx_6 = esi_5[2]
                    long double x87_r7_29 = fneg(fconvert.t(esi_5[1]))
                    var_f8 = fconvert.s(fneg(fconvert.t(*esi_5)))
                    float var_f4_1 = fconvert.s(x87_r7_29)
                    float var_f0_1 = fconvert.s(fneg(fconvert.t(edx_6)))
                    float var_1f8
                    sub_405970(&var_1f8, &var_2c, &var_f8)
                    var_2c = var_1f8
                    float var_1f4
                    var_28_1 = var_1f4
                    float var_1f0
                    var_24_1 = var_1f0
                    float var_a4_2 = fconvert.s(fneg(fconvert.t(esi_5[1])))
                    int32_t esi_6 = esi_5[3]
                    long double x87_r7_37 = fneg(fconvert.t(esi_5[2]))
                    var_108 = fconvert.s(fneg(fconvert.t(*esi_5)))
                    float var_104_1 = var_a4_2
                    float var_100_1 = fconvert.s(x87_r7_37)
                    int32_t var_fc_1 = esi_6
                    float var_228
                    sub_405970(&var_228, &var_38, &var_108)
                    var_38 = var_228
                    j += 1
                    int32_t var_224
                    int32_t var_34_2 = var_224
                    int32_t var_220
                    int32_t var_30_2 = var_220
                while (j s< arg2 - 1)
            
            int32_t edi_1 = arg5[arg2 - 2]
            int32_t* eax_25 = arg5[arg2 - 1] * 0x2c + arg7 + 0x10
            float edx_16 = eax_25[1]
            float eax_26 = eax_25[2]
            int32_t var_d8_1 = edi_1
            var_20 = *eax_25
            float var_1c_2 = edx_16
            float var_18_2 = eax_26
            float var_d0_2
            float var_cc_2
            float var_c8_2
            float var_b8_2
            float var_b4_2
            float var_b0_2
            
            while (true)
                void* esi_9 = edi_1 * 0x2c + arg7
                long double x87_r7_40 = fconvert.t(*(esi_9 + 0x20))
                float var_5c = fconvert.s(fconvert.t(*(esi_9 + 0x1c)) * fconvert.t(var_2c))
                float var_58_1 = fconvert.s(x87_r7_40 * fconvert.t(var_28_1))
                float var_54_1 = fconvert.s(fconvert.t(*(esi_9 + 0x24)) * fconvert.t(var_24_1))
                float var_218
                sub_405970(&var_218, &var_5c, esi_9)
                var_b8_2 = fconvert.s(fconvert.t(*(esi_9 + 0x10)) + fconvert.t(var_218))
                float var_214
                var_b4_2 = fconvert.s(fconvert.t(*(esi_9 + 0x14)) + fconvert.t(var_214))
                float var_210
                var_b0_2 = fconvert.s(fconvert.t(*(esi_9 + 0x18)) + fconvert.t(var_210))
                float var_238
                sub_405970(&var_238, &var_38, esi_9)
                long double x87_r7_50 = fconvert.t(var_20)
                float ecx_24 = var_238
                long double x87_r6_12 = fconvert.t(var_1c_2)
                long double x87_r5_7 = fconvert.t(var_18_2)
                long double x87_r7_54 = fconvert.t(fconvert.s(x87_r7_50 * x87_r7_50
                    + x87_r6_12 * x87_r6_12 + x87_r5_7 * x87_r5_7))
                long double x87_r6_16 = fconvert.t(9.99999975e-06f)
                x87_r6_16 - x87_r7_54
                int32_t eax_31
                eax_31.w = (x87_r6_16 < x87_r7_54 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_16, x87_r7_54) ? 1 : 0) << 0xa
                    | (x87_r6_16 == x87_r7_54 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    long double x87_r6_17 = fconvert.t(var_2c)
                    long double x87_r5_9 = fconvert.t(var_28_1)
                    long double x87_r4_14 = fconvert.t(var_24_1)
                    long double temp2_1 = fconvert.t(fconvert.s(x87_r6_17 * x87_r6_17
                        + x87_r5_9 * x87_r5_9 + x87_r4_14 * x87_r4_14))
                    x87_r7_54 - temp2_1
                    eax_31.w = (x87_r7_54 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_54, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_54 == temp2_1 ? 1 : 0) << 0xe
                    bool p_2 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_2))
                        float var_208[0x4]
                        float* eax_32 = sub_4131a0(&var_20, &var_208)
                        int32_t edx_22 = eax_32[1]
                        int32_t eax_33 = eax_32[2]
                        var_44 = *eax_32
                        int32_t var_40_1 = edx_22
                        int32_t var_3c_1 = eax_33
                        float* eax_34 = sub_4131a0(&var_2c, &var_1c8)
                        int32_t edx_23 = eax_34[1]
                        int32_t eax_35 = eax_34[2]
                        float var_68 = *eax_34
                        int32_t var_64_1 = edx_23
                        int32_t var_60_1 = eax_35
                        int32_t* eax_36 = sub_4f3d90(&var_68, &var_44)
                        void* eax_37 = esi_9
                        long double x87_r6_21 = fconvert.t(eax_36[3])
                        long double x87_r4_16 = fconvert.t(*eax_36)
                        long double x87_r3_10 = fconvert.t(eax_36[1])
                        long double x87_r3_12 = fconvert.t(eax_36[2])
                        float var_16c_1 = fconvert.s(fconvert.t(*(eax_37 + 0xc)) * x87_r6_21
                            - fconvert.t(*eax_37) * x87_r4_16 - fconvert.t(*(eax_37 + 4)) * x87_r3_10
                            - x87_r3_12 * fconvert.t(*(eax_37 + 8)))
                        float var_174_1 = fconvert.s(fconvert.t(*(eax_37 + 0xc)) * x87_r3_10
                            + fconvert.t(*(eax_37 + 4)) * x87_r6_21
                            + fconvert.t(*(eax_37 + 8)) * x87_r4_16 - x87_r3_12 * fconvert.t(*eax_37))
                        ebx_1 = arg4
                        edi_1 = var_d8_1
                        long double x87_r6_24 = x87_r6_21 * fconvert.t(*(eax_37 + 8))
                            + x87_r3_12 * fconvert.t(*(eax_37 + 0xc)) + x87_r3_10 * fconvert.t(*eax_37)
                        long double x87_r5_19 = fconvert.t(*(eax_37 + 4))
                        *eax_37 = fconvert.s(fconvert.t(*(eax_37 + 0xc)) * x87_r4_16
                            + x87_r6_21 * fconvert.t(*eax_37) + fconvert.t(*(eax_37 + 4)) * x87_r3_12
                            - x87_r3_10 * fconvert.t(*(eax_37 + 8)))
                        *(eax_37 + 4) = var_174_1
                        esi_9 = eax_37
                        *(eax_37 + 8) = fconvert.s(x87_r6_24 - x87_r4_16 * x87_r5_19)
                        *(eax_37 + 0xc) = var_16c_1
                
                long double x87_r7_62 = fconvert.t(*(esi_9 + 0x20))
                var_50 = fconvert.s(fconvert.t(*(esi_9 + 0x1c)) * fconvert.t(var_20))
                float var_4c_1 = fconvert.s(x87_r7_62 * fconvert.t(var_1c_2))
                float var_48_1 = fconvert.s(fconvert.t(*(esi_9 + 0x24)) * fconvert.t(var_18_2))
                sub_405970(&var_1d8, &var_50, esi_9)
                var_d0_2 = fconvert.s(fconvert.t(*(esi_9 + 0x10)) + fconvert.t(var_1d8))
                long double x87_r7_68 = fconvert.t(*(esi_9 + 0x14))
                var_20 = var_d0_2
                var_2c = var_b8_2
                var_cc_2 = fconvert.s(x87_r7_68 + fconvert.t(var_1d4))
                var_1c_2 = var_cc_2
                long double x87_r7_71 = fconvert.t(*(esi_9 + 0x18)) + fconvert.t(var_1d0)
                var_38 = ecx_24
                var_c8_2 = fconvert.s(x87_r7_71)
                var_18_2 = var_c8_2
                var_28_1 = var_b4_2
                var_24_1 = var_b0_2
                int32_t var_234
                int32_t var_34_3 = var_234
                int32_t var_230
                int32_t var_30_3 = var_230
                
                if (edi_1 == *arg5)
                    break
                
                int32_t eax_44 = *(edi_1 * 0xd0 + arg6 + 0x6c)
                var_d8_1 = eax_44
                edi_1 = eax_44
            
            long double x87_r7_78 = fconvert.t(fconvert.s(fconvert.t(var_cc_2) - fconvert.t(var_b4_2)))
            long double x87_r6_25 = fconvert.t(fconvert.s(fconvert.t(var_d0_2) - fconvert.t(var_b8_2)))
            long double x87_r5_20 = fconvert.t(fconvert.s(fconvert.t(var_c8_2) - fconvert.t(var_b0_2)))
            long double x87_r7_83 = fconvert.t(fconvert.s(x87_r5_20 * x87_r5_20 + x87_r6_25 * x87_r6_25
                + x87_r7_78 * x87_r7_78))
            long double temp3_1 = fconvert.t(9.99999975e-06f)
            x87_r7_83 - temp3_1
            int32_t eax_43
            eax_43.w = (x87_r7_83 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_83, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_83 == temp3_1 ? 1 : 0) << 0xe
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                break
            
            i = i_2 + 1
            i_2 = i
        while (i s< 0x64)
        long double x87_r6_30 = fconvert.t(2.0)
        long double x87_r6_32 = fconvert.t(ebx_1[1])
        long double x87_r5_23 = fconvert.t(ebx_1[2])
        long double x87_r4_26 = fconvert.t(ebx_1[3])
        long double x87_r3_25 = fconvert.t(*ebx_1)
        long double x87_r3_26 = x87_r3_25 * x87_r3_25
        long double x87_r4_30 = fconvert.t(fconvert.s(x87_r6_32 * x87_r6_32 - x87_r5_23 * x87_r5_23
            + x87_r4_26 * x87_r4_26 - x87_r3_26))
        long double x87_r2_28 = fconvert.t(fconvert.s((fconvert.t(ebx_1[1]) * fconvert.t(*ebx_1)
            - fconvert.t(ebx_1[3]) * fconvert.t(ebx_1[2])) * x87_r6_30))
        long double x87_r1_11 = fconvert.t(fconvert.s((fconvert.t(ebx_1[2]) * fconvert.t(ebx_1[1])
            + fconvert.t(ebx_1[3]) * fconvert.t(*ebx_1)) * x87_r6_30))
        var_20 = fconvert.s(fconvert.t(var_140) * x87_r1_11 + fconvert.t(var_148) * x87_r2_28
            + fconvert.t(var_144) * x87_r4_30)
        long double x87_r2_37 = fconvert.t(var_124)
        float var_1c_3 = fconvert.s(fconvert.t(var_134) * x87_r4_30 + fconvert.t(var_138) * x87_r2_28
            + fconvert.t(var_130) * x87_r1_11)
        long double x87_r1_18 = fconvert.t(var_128)
        float var_18_3 =
            fconvert.s(x87_r1_11 * fconvert.t(var_120) + x87_r2_28 * x87_r1_18 + x87_r4_30 * x87_r2_37)
        int32_t i_1 = 0
        long double x87_r4_34 = fconvert.t(ebx_1[2])
        long double x87_r3_42 = fconvert.t(ebx_1[1])
        long double x87_r2_43 = fconvert.t(ebx_1[3])
        long double x87_r4_38 = fconvert.t(fconvert.s(x87_r6_30 *
            (fconvert.t(ebx_1[2]) * fconvert.t(ebx_1[1]) - fconvert.t(ebx_1[3]) * fconvert.t(*ebx_1))))
        long double x87_r2_45 = fconvert.t(fconvert.s((fconvert.t(ebx_1[3]) * fconvert.t(ebx_1[1])
            + fconvert.t(ebx_1[2]) * fconvert.t(*ebx_1)) * x87_r6_30))
        long double x87_r1_24 = fconvert.t(fconvert.s(x87_r4_34 * x87_r4_34 - x87_r3_42 * x87_r3_42
            - x87_r3_26 + x87_r2_43 * x87_r2_43))
        var_38 = fconvert.s(fconvert.t(var_140) * x87_r1_24 + fconvert.t(var_148) * x87_r2_45
            + fconvert.t(var_144) * x87_r4_38)
        float var_34_4 = fconvert.s(fconvert.t(var_134) * x87_r4_38 + fconvert.t(var_138) * x87_r2_45
            + fconvert.t(var_130) * x87_r1_24)
        float var_30_4 =
            fconvert.s(x87_r4_38 * x87_r2_37 + x87_r2_45 * x87_r1_18 + x87_r1_24 * fconvert.t(var_120))
        
        if (arg2 - 1 s> 0)
            do
                int32_t* esi_14 = arg5[i_1] * 0x2c + arg7
                int32_t eax_49 = esi_14[3]
                float var_a4_4 = fconvert.s(fneg(fconvert.t(esi_14[1])))
                long double x87_r7_98 = fconvert.t(esi_14[2])
                var_108 = fconvert.s(fneg(fconvert.t(*esi_14)))
                float var_104_2 = var_a4_4
                float var_100_2 = fconvert.s(fneg(x87_r7_98))
                int32_t var_fc_2 = eax_49
                sub_405970(&var_1d8, &var_20, &var_108)
                var_20 = var_1d8
                float var_1c_4 = var_1d4
                float var_18_4 = var_1d0
                float var_8c_4 = fconvert.s(fneg(fconvert.t(esi_14[1])))
                int32_t esi_15 = esi_14[3]
                long double x87_r7_105 = fneg(fconvert.t(esi_14[2]))
                var_f8 = fconvert.s(fneg(fconvert.t(*esi_14)))
                float var_f4_2 = var_8c_4
                float var_f0_2 = fconvert.s(x87_r7_105)
                int32_t var_ec_2 = esi_15
                sub_405970(&var_1c8, &var_38, &var_f8)
                i_1 += 1
                var_38 = var_1c8
                int32_t var_1c4
                int32_t var_34_5 = var_1c4
                int32_t var_1c0
                int32_t var_30_5 = var_1c0
            while (i_1 s< arg2 - 1)
        
        float* eax_55 = sub_4131a0(&var_38, &var_1d8)
        int32_t edx_47 = eax_55[1]
        int32_t eax_56 = eax_55[2]
        var_50 = *eax_55
        int32_t var_4c_2 = edx_47
        int32_t var_48_2 = eax_56
        float* eax_57 = sub_4131a0(&var_20, &var_1c8)
        int32_t edx_48 = eax_57[1]
        int32_t eax_58 = eax_57[2]
        var_44 = *eax_57
        int32_t var_40_2 = edx_48
        int32_t var_3c_2 = eax_58
        float var_1e8[0x4]
        float* eax_59 = sub_413800(&var_1e8, &var_50)
        int32_t edx_49 = eax_59[1]
        int32_t esi_18 = eax_59[2]
        int32_t edi_7 = eax_59[3]
        result = arg5[arg2 - 1] * 0x2c + arg7
        *result = *eax_59
        result[1] = edx_49
        result[2] = esi_18
        result[3] = edi_7
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

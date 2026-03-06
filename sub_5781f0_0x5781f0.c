// 函数名称: sub_5781f0
// 虚拟地址: 0x5781f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5781f0()
{
    // 第一条实际指令: void var_154
    void var_154
    int32_t eax_1 = __security_cookie ^ &var_154
    
    if (data_273bc2c != 0)
        float var_50
        float* eax_2 = sub_575ca0(&var_50)
        bool cond:1_1 = data_273bc31:1.b == 0
        int32_t var_a0[0x2]
        int32_t ecx_1 = __builtin_memcpy(&var_a0, eax_2, 0x40)
        float var_150
        float var_140
        float var_108
        float var_c0
        float var_bc_1
        float var_b8_1
        float var_b4_1
        float var_b0
        float var_60
        
        if (cond:1_1)
        label_5786f2:
            int32_t var_164_3 = 0
            int32_t var_168_1 = ecx_1
            void* eax_21
            char edx_12
            eax_21, edx_12 = sub_575c20(data_273ac2c)
            int32_t* eax_23 = sub_4f52e0(&var_a0, &var_108, eax_21, edx_12)
            float edx_13 = eax_23[1]
            var_c0 = *eax_23
            var_bc_1 = edx_13
            int32_t i = 1
            var_b8_1 = eax_23[2]
            var_b4_1 = eax_23[3]
            
            if (data_273bc2c s> 1)
                do
                    int32_t ebx_3 = (&data_273ac2c)[i]
                    void** eax_24 = sub_4f4890(data_273ac20)
                    int32_t ecx_13 = 0
                    int32_t* edx_15 = nullptr
                    void* esi_7
                    
                    while (true)
                        if (ecx_13 s>= eax_24[1])
                            sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, 
                                "FindElement")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        esi_7 = *eax_24
                        
                        if (*(edx_15 + esi_7) == ebx_3)
                            break
                        
                        ecx_13 += 1
                        edx_15 = &edx_15[0x46]
                    
                    void* esi_8 = esi_7 + ecx_13 * 0x118
                    int32_t* eax_26 = sub_4f4990(&var_a0, &var_108, esi_8 + 0x1c, &var_108, &var_a0)
                    int32_t edx_17 = eax_26[1]
                    var_140 = *eax_26
                    int32_t var_13c_3 = edx_17
                    int32_t var_138_3 = eax_26[2]
                    int32_t var_134_3 = eax_26[3]
                    sub_4fc810(&var_60, esi_8 + 0x74, &var_140)
                    var_b0 = var_60
                    int32_t var_5c
                    int32_t var_ac_2 = var_5c
                    int32_t var_58
                    int32_t var_a8_2 = var_58
                    int32_t var_54
                    int32_t var_a4_2 = var_54
                    float* eax_28 = sub_4684b0(&var_c0, &var_b0, &var_150)
                    float edx_23 = eax_28[1]
                    var_c0 = *eax_28
                    var_bc_1 = edx_23
                    i += 1
                    var_b8_1 = eax_28[2]
                    var_b4_1 = eax_28[3]
                while (i s< data_273bc2c)
        else
            ecx_1 = 0x8000
            void* eax_5
            char edx_1
            
            if ((0x8000 & GetKeyState(0x11)) == 0)
                if (data_273bc2c == 1)
                    eax_5, edx_1 = sub_575c20(data_273ac2c)
                    int32_t var_164_1 = 0
                    goto label_578318
                
                sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, "Editor\UIEditor.cpp", 0x3b9, 
                    "TransformCorner")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (data_273bc31:1.b == 0)
                goto label_5786f2
            
            ecx_1 = 0x8000
            
            if ((0x8000 & GetKeyState(0x11)) == 0)
                goto label_5786f2
            
            if (data_273bc2c != 1)
                sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, "Editor\UIEditor.cpp", 0x3bf, 
                    "TransformCorner")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_5, edx_1 = sub_575c20(data_273ac2c)
            int32_t var_164_2 = 1
        label_578318:
            int32_t* eax_9 = sub_4f52e0(&var_a0, &var_108, eax_5, edx_1)
            float ecx_2 = eax_9[1]
            var_c0 = *eax_9
            var_bc_1 = ecx_2
            var_b8_1 = eax_9[2]
            var_b4_1 = eax_9[3]
        
        long double x87_r7_1 = float.t(0)
        int32_t i_2 = 0
        var_a0[0] = fconvert.s(x87_r7_1)
        int32_t i_1 = 0
        var_a0[1] = fconvert.s(x87_r7_1)
        float var_98_1 = fconvert.s(x87_r7_1)
        long double x87_r6_1 = fconvert.t(0.5f)
        float var_94_1 = fconvert.s(x87_r6_1)
        float var_90_1 = fconvert.s(x87_r7_1)
        long double x87_r5_1 = float.t(1)
        float var_8c_1 = fconvert.s(x87_r5_1)
        float var_7c_1 = fconvert.s(x87_r5_1)
        float var_78_1 = fconvert.s(x87_r5_1)
        float var_70_1 = fconvert.s(x87_r5_1)
        float var_68_1 = fconvert.s(x87_r5_1)
        float var_64_1 = fconvert.s(x87_r5_1)
        float var_88_1 = fconvert.s(x87_r6_1)
        float var_80_1 = fconvert.s(x87_r6_1)
        float var_6c_1 = fconvert.s(x87_r6_1)
        float var_84_1 = fconvert.s(x87_r7_1)
        float var_74_1 = fconvert.s(x87_r7_1)
        double var_e0 = fconvert.d(fconvert.t(var_b8_1) - fconvert.t(var_c0))
        double var_d8_1 = fconvert.d(fconvert.t(var_b4_1) - fconvert.t(var_bc_1))
        void arg_4
        
        do
            long double x87_r7_8 = fconvert.t(8.0)
            long double x87_r6_10 = fconvert.t(fconvert.s(
                fconvert.t((&var_a0)[i_1][0]) * fconvert.t(var_e0) + fconvert.t(var_c0)))
            float var_130_1 = fconvert.s(x87_r6_10 + x87_r7_8)
            var_9c
            long double x87_r5_4 = fconvert.t(fconvert.s(
                fconvert.t(*(&var_9c + (i_1 << 3))) * fconvert.t(var_d8_1) + fconvert.t(var_bc_1)))
            float var_12c_1 = fconvert.s(x87_r5_4 + x87_r7_8)
            float var_11c_1 = fconvert.s(x87_r5_4 - x87_r7_8)
            var_150 = fconvert.s(fconvert.t(fconvert.s(x87_r6_10 - x87_r7_8)))
            var_140 = var_150
            float var_13c_1 = fconvert.s(fconvert.t(var_11c_1))
            float var_138_1 = fconvert.s(fconvert.t(var_130_1))
            float var_134_1 = fconvert.s(fconvert.t(var_12c_1))
            
            if (sub_4057a0(&var_140, &arg_4) != 0)
                sub_5a6aba(eax_1 ^ &var_154)
                return i_1
            
            i_1 += 1
        while (i_1 s< 8)
        
        int32_t var_4c = 2
        var_50 = 0f
        int32_t var_48 = 1
        int32_t var_44_1 = 0
        int32_t var_40
        __builtin_memcpy(&var_40, 
            "\x05\x00\x00\x00\x03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x"
        "00\x07\x00\x00\x00\x06\x00\x00\x00", 
            0x20)
        int32_t* edi_4 = &var_4c
        
        do
            int32_t eax_14 = edi_4[-1]
            long double x87_r6_12 = fconvert.t(var_e0)
            long double x87_r5_7 = fconvert.t(var_c0)
            long double x87_r4_4 = fconvert.t(var_d8_1)
            long double x87_r3_1 = fconvert.t(var_bc_1)
            long double x87_r3_3 =
                fconvert.t(fconvert.s(fconvert.t((&var_a0)[eax_14][0]) * x87_r6_12 + x87_r5_7))
            long double x87_r1_1 = fconvert.t(8.0)
            float var_128_2 = fconvert.s(x87_r3_3 + x87_r1_1)
            int32_t __saved_edi
            long double x87_r1_3 = fconvert.t(fconvert.s(
                fconvert.t((&__saved_edi)[eax_14 * 2 + 0x31]) * x87_r4_4 + x87_r3_1))
            float var_124_2 = fconvert.s(x87_r1_3 + x87_r1_1)
            float var_11c_2 = fconvert.s(x87_r1_3 - x87_r1_1)
            var_b0 = fconvert.s(fconvert.t(fconvert.s(x87_r3_3 - x87_r1_1)))
            var_108 = var_b0
            float var_104_1 = fconvert.s(fconvert.t(var_11c_2))
            float var_100_1 = fconvert.s(fconvert.t(var_128_2))
            int32_t eax_17 = *edi_4
            float var_fc_1 = fconvert.s(fconvert.t(var_124_2))
            long double x87_r6_16 =
                fconvert.t(fconvert.s(x87_r5_7 + x87_r6_12 * fconvert.t((&var_a0)[eax_17][0])))
            float var_e8_1 = fconvert.s(x87_r6_16 + x87_r1_1)
            long double x87_r5_15 = fconvert.t(fconvert.s(
                x87_r4_4 * fconvert.t((&__saved_edi)[eax_17 * 2 + 0x31]) + x87_r3_1))
            float var_e4_1 = fconvert.s(x87_r5_15 + x87_r1_1)
            float var_f4_1 = fconvert.s(x87_r5_15 - x87_r1_1)
            var_140 = fconvert.s(fconvert.t(fconvert.s(x87_r6_16 - x87_r1_1)))
            float var_13c_2 = fconvert.s(fconvert.t(var_f4_1))
            float var_138_2 = fconvert.s(fconvert.t(var_e8_1))
            float var_134_2 = fconvert.s(fconvert.t(var_e4_1))
            var_60 = var_140
            float var_58_1 = var_138_2
            float var_54_1 = var_134_2
            float var_5c_1 = var_13c_2
            float var_d0[0x4]
            float* eax_20 = sub_4684b0(&var_108, &var_60, &var_d0)
            float edx_10 = eax_20[1]
            float var_118 = *eax_20
            long double x87_r7_28 = fconvert.t(var_118)
            long double x87_r6_18 = fconvert.t(var_c0)
            float ecx_10 = eax_20[2]
            x87_r6_18 - x87_r7_28
            float edx_11 = eax_20[3]
            eax_20.w = (x87_r6_18 < x87_r7_28 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_18, x87_r7_28) ? 1 : 0) << 0xa
                | (x87_r6_18 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
            long double x87_r6_19
            
            if ((eax_20:1.b & 0x41) != 0)
                x87_r6_19 = fconvert.t(var_b8_1)
            else
                x87_r6_19 = x87_r7_28
                x87_r7_28 = x87_r6_18
            
            var_150 = fconvert.s(x87_r6_19)
            long double x87_r6_20 = fconvert.t(edx_10)
            long double x87_r5_18 = fconvert.t(var_bc_1)
            x87_r5_18 - x87_r6_20
            eax_20.w = (x87_r5_18 < x87_r6_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_18, x87_r6_20) ? 1 : 0) << 0xa
                | (x87_r5_18 == x87_r6_20 ? 1 : 0) << 0xe | 0x2800
            long double x87_r5_19
            
            if ((eax_20:1.b & 0x41) != 0)
                x87_r7_28 = x87_r5_18
                x87_r5_19 = fconvert.t(var_b4_1)
            else
                x87_r5_19 = x87_r6_20
                x87_r6_20 = x87_r5_18
            
            float var_14c_2 = fconvert.s(x87_r5_19)
            long double x87_r5_20 = fconvert.t(ecx_10)
            long double x87_r4_9 = fconvert.t(var_b8_1)
            x87_r4_9 - x87_r5_20
            eax_20.w = (x87_r4_9 < x87_r5_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_9, x87_r5_20) ? 1 : 0) << 0xa
                | (x87_r4_9 == x87_r5_20 ? 1 : 0) << 0xe | 0x2800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                x87_r6_20 = x87_r5_20
            
            long double x87_r7_29 = x87_r6_20
            float var_148_2 = fconvert.s(x87_r7_28)
            long double x87_r6_22 = fconvert.t(edx_11)
            long double x87_r5_21 = fconvert.t(var_b4_1)
            x87_r5_21 - x87_r6_22
            eax_20.w = (x87_r5_21 < x87_r6_22 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_21, x87_r6_22) ? 1 : 0) << 0xa
                | (x87_r5_21 == x87_r6_22 ? 1 : 0) << 0xe | 0x3000
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                x87_r7_29 = x87_r6_22
            
            float var_144_2 = fconvert.s(x87_r7_29)
            var_118 = var_150
            float var_114_2 = var_14c_2
            float var_110_2 = var_148_2
            float var_10c_2 = var_144_2
            
            if (sub_4057a0(&var_118, &arg_4) != 0)
                int32_t eax_35 = (&var_48)[i_2 * 3]
                sub_5a6aba(eax_1 ^ &var_154)
                return eax_35
            
            i_2 += 1
            edi_4 = &edi_4[3]
        while (i_2 s< 4)
    
    sub_5a6aba(eax_1 ^ &var_154)
    return 0xffffffff
}

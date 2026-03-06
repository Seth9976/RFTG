// 函数名称: sub_529dc0
// 虚拟地址: 0x529dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_529dc0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (data_30da51c != 0)
        float var_11c
        float var_9c
        float var_8c
        float var_88_1
        float var_84_1
        float var_80_1
        
        if (data_30da525:1.b == 0)
        label_529f14:
            void* eax_12 = sub_528f30(data_30d951c)
            float edx_4 = *(eax_12 + 0xc)
            var_8c = *(eax_12 + 8)
            var_88_1 = edx_4
            int32_t i = 1
            var_84_1 = *(eax_12 + 0x10)
            var_80_1 = *(eax_12 + 0x14)
            
            if (data_30da51c s> 1)
                do
                    void* eax_14 = sub_528f30(data_30d951c)
                    int32_t edx_6 = *(eax_14 + 0xc)
                    var_9c = *(eax_14 + 8)
                    int32_t var_98_1 = edx_6
                    int32_t var_94_1 = *(eax_14 + 0x10)
                    int32_t var_90_1 = *(eax_14 + 0x14)
                    int32_t* eax_15 = sub_4684b0(&var_8c, &var_9c, &var_11c)
                    float edx_9 = eax_15[1]
                    var_8c = *eax_15
                    var_88_1 = edx_9
                    i += 1
                    var_84_1 = eax_15[2]
                    var_80_1 = eax_15[3]
                while (i s< data_30da51c)
        else
            int16_t eax_2 = GetKeyState(0x11)
            HWND eax_3
            
            if ((0x8000 & eax_2) != 0 && *(data_27e7bbc + 0x18) != 0)
                eax_3 = GetFocus()
            
            if ((0x8000 & eax_2) != 0 && *(data_27e7bbc + 0x18) != 0 && eax_3 == data_30785e0)
                if (data_30da525:1.b != 0 && sub_528030() != 0)
                    if (data_30da51c != 1)
                        sub_4c5870("gUI2Editor.s.activeSetCount == 1", &data_83f3d3, "UI2.cpp", 0x103d, 
                            "UI2TransformCorner")
                        
                        if (IsDebuggerPresent() != 1)
                            sub_4c5a30()
                            noreturn
                        
                        breakpoint
                    
                    sub_528f30(data_30d951c)
                    sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x1040, "UI2TransformCorner")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                goto label_529f14
            
            if (data_30da51c != 1)
                sub_4c5870("gUI2Editor.s.activeSetCount == 1", &data_83f3d3, "UI2.cpp", 0x1036, 
                    "UI2TransformCorner")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_6 = sub_528f30(data_30d951c)
            float edx_2 = *(eax_6 + 0xc)
            var_8c = *(eax_6 + 8)
            var_88_1 = edx_2
            var_84_1 = *(eax_6 + 0x10)
            var_80_1 = *(eax_6 + 0x14)
        
        long double x87_r7_1 = float.t(0)
        int32_t i_1 = 0
        int32_t var_4c[0x2]
        var_4c[0] = fconvert.s(x87_r7_1)
        var_4c[1] = fconvert.s(x87_r7_1)
        float var_44_1 = fconvert.s(x87_r7_1)
        long double x87_r6_1 = fconvert.t(0.5f)
        float var_40_1 = fconvert.s(x87_r6_1)
        float var_3c_1 = fconvert.s(x87_r7_1)
        long double x87_r5_1 = float.t(1)
        float var_38_1 = fconvert.s(x87_r5_1)
        float var_28_1 = fconvert.s(x87_r5_1)
        float var_24_1 = fconvert.s(x87_r5_1)
        float var_1c_1 = fconvert.s(x87_r5_1)
        float var_14_1 = fconvert.s(x87_r5_1)
        float var_10_1 = fconvert.s(x87_r5_1)
        float var_34_1 = fconvert.s(x87_r6_1)
        float var_2c_1 = fconvert.s(x87_r6_1)
        float var_18_1 = fconvert.s(x87_r6_1)
        float var_30_1 = fconvert.s(x87_r7_1)
        float var_20_1 = fconvert.s(x87_r7_1)
        double var_12c_1 = fconvert.d(fconvert.t(var_84_1) - fconvert.t(var_8c))
        double var_124_1 = fconvert.d(fconvert.t(var_80_1) - fconvert.t(var_88_1))
        void arg_4
        
        do
            long double x87_r7_8 = fconvert.t(8.0)
            long double x87_r6_10 = fconvert.t(fconvert.s(
                fconvert.t((&var_4c)[i_1][0]) * fconvert.t(var_12c_1) + fconvert.t(var_8c)))
            float var_d4_1 = fconvert.s(x87_r6_10 + x87_r7_8)
            var_48
            long double x87_r5_4 = fconvert.t(fconvert.s(
                fconvert.t(*(&var_48 + (i_1 << 3))) * fconvert.t(var_124_1) + fconvert.t(var_88_1)))
            float var_d0_1 = fconvert.s(x87_r5_4 + x87_r7_8)
            var_9c = fconvert.s(fconvert.t(fconvert.s(x87_r6_10 - x87_r7_8)))
            float var_98_2 = fconvert.s(fconvert.t(fconvert.s(x87_r5_4 - x87_r7_8)))
            float var_94_2 = fconvert.s(fconvert.t(var_d4_1))
            float var_90_2 = fconvert.s(fconvert.t(var_d0_1))
            
            if (sub_4057a0(&var_9c, &arg_4) != 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return i_1
            
            i_1 += 1
        while (i_1 s< 8)
        
        int32_t var_78 = 2
        int32_t var_7c_1 = 0
        int32_t var_74 = 1
        int32_t var_70_1 = 0
        int32_t var_6c
        __builtin_memcpy(&var_6c, 
            "\x05\x00\x00\x00\x03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x"
        "00\x07\x00\x00\x00\x06\x00\x00\x00", 
            0x20)
        int32_t* edi_1 = &var_78
        
        for (int32_t i_2 = 0; i_2 s< 4; )
            int32_t eax_19 = edi_1[-1]
            long double x87_r6_12 = fconvert.t(var_12c_1)
            long double x87_r5_7 = fconvert.t(var_8c)
            long double x87_r4_4 = fconvert.t(var_124_1)
            long double x87_r3_1 = fconvert.t(var_88_1)
            long double x87_r3_3 =
                fconvert.t(fconvert.s(fconvert.t((&var_4c)[eax_19][0]) * x87_r6_12 + x87_r5_7))
            long double x87_r1_1 = fconvert.t(8.0)
            float var_c4_2 = fconvert.s(x87_r3_3 + x87_r1_1)
            long double x87_r1_3 = fconvert.t(fconvert.s(
                fconvert.t((&__saved_ebp)[eax_19 * 2 - 0x11]) * x87_r4_4 + x87_r3_1))
            float var_c0_2 = fconvert.s(x87_r1_3 + x87_r1_1)
            var_11c = fconvert.s(fconvert.t(fconvert.s(x87_r3_3 - x87_r1_1)))
            float var_118_1 = fconvert.s(fconvert.t(fconvert.s(x87_r1_3 - x87_r1_1)))
            float var_114_1 = fconvert.s(fconvert.t(var_c4_2))
            int32_t eax_22 = *edi_1
            float var_110_1 = fconvert.s(fconvert.t(var_c0_2))
            long double x87_r6_16 =
                fconvert.t(fconvert.s(x87_r5_7 + x87_r6_12 * fconvert.t((&var_4c)[eax_22][0])))
            float var_10c_1 = fconvert.s(x87_r6_16 + x87_r1_1)
            long double x87_r5_15 = fconvert.t(fconvert.s(
                x87_r4_4 * fconvert.t((&__saved_ebp)[eax_22 * 2 - 0x11]) + x87_r3_1))
            float var_108_1 = fconvert.s(x87_r5_15 + x87_r1_1)
            float var_f8_1 = fconvert.s(x87_r5_15 - x87_r1_1)
            var_9c = fconvert.s(fconvert.t(fconvert.s(x87_r6_16 - x87_r1_1)))
            float var_98_3 = fconvert.s(fconvert.t(var_f8_1))
            float var_94_3 = fconvert.s(fconvert.t(var_10c_1))
            float var_90_3 = fconvert.s(fconvert.t(var_108_1))
            float var_ac = var_9c
            float var_a4_1 = var_94_3
            float var_a0_1 = var_90_3
            float var_a8_1 = var_98_3
            float var_13c[0x4]
            float* eax_25 = sub_4684b0(&var_11c, &var_ac, &var_13c)
            float edx_17 = eax_25[1]
            float var_e4 = *eax_25
            long double x87_r7_28 = fconvert.t(var_e4)
            long double x87_r6_18 = fconvert.t(var_8c)
            float ecx_16 = eax_25[2]
            x87_r6_18 - x87_r7_28
            float edx_18 = eax_25[3]
            eax_25.w = (x87_r6_18 < x87_r7_28 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_18, x87_r7_28) ? 1 : 0) << 0xa
                | (x87_r6_18 == x87_r7_28 ? 1 : 0) << 0xe | 0x3000
            long double x87_r6_19
            
            if ((eax_25:1.b & 0x41) != 0)
                x87_r6_19 = fconvert.t(var_84_1)
            else
                x87_r6_19 = x87_r7_28
                x87_r7_28 = x87_r6_18
            
            long double x87_r6_20 = fconvert.t(edx_17)
            long double x87_r5_18 = fconvert.t(var_88_1)
            x87_r5_18 - x87_r6_20
            eax_25.w = (x87_r5_18 < x87_r6_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_18, x87_r6_20) ? 1 : 0) << 0xa
                | (x87_r5_18 == x87_r6_20 ? 1 : 0) << 0xe | 0x2800
            long double x87_r5_19
            
            if ((eax_25:1.b & 0x41) != 0)
                x87_r7_28 = x87_r5_18
                x87_r5_19 = fconvert.t(var_80_1)
            else
                x87_r5_19 = x87_r6_20
                x87_r6_20 = x87_r5_18
            
            float var_b8_2 = fconvert.s(x87_r5_19)
            long double x87_r5_20 = fconvert.t(ecx_16)
            long double x87_r4_9 = fconvert.t(var_84_1)
            x87_r4_9 - x87_r5_20
            eax_25.w = (x87_r4_9 < x87_r5_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_9, x87_r5_20) ? 1 : 0) << 0xa
                | (x87_r4_9 == x87_r5_20 ? 1 : 0) << 0xe | 0x2800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                x87_r6_20 = x87_r5_20
            
            long double x87_r7_29 = x87_r6_20
            float var_b4_2 = fconvert.s(x87_r7_28)
            long double x87_r6_22 = fconvert.t(edx_18)
            long double x87_r5_21 = fconvert.t(var_80_1)
            x87_r5_21 - x87_r6_22
            eax_25.w = (x87_r5_21 < x87_r6_22 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_21, x87_r6_22) ? 1 : 0) << 0xa
                | (x87_r5_21 == x87_r6_22 ? 1 : 0) << 0xe | 0x3000
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                x87_r7_29 = x87_r6_22
            
            float var_b0_2 = fconvert.s(x87_r7_29)
            var_e4 = fconvert.s(x87_r6_19)
            float var_e0_2 = var_b8_2
            float var_dc_2 = var_b4_2
            float var_d8_2 = var_b0_2
            
            if (sub_4057a0(&var_e4, &arg_4) != 0)
                int32_t eax_31 = (&var_74)[i_2 * 3]
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_31
            
            i_2 += 1
            edi_1 = &edi_1[3]
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}

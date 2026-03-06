// 函数名称: sub_5a37e0
// 虚拟地址: 0x5a37e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_5a37e0(int32_t arg1, int32_t arg2, float* arg3, int16_t arg4 @ x87control, void* arg5, float* arg6, float* arg7, int32_t arg8, void* arg9, float* arg10)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = arg8
    long double x87_r7 = float.t(0)
    int32_t ecx_1 = *(arg5 + 0x48)
    float* edi = arg7
    float* var_b4 = edi
    int32_t var_94 = ecx_1
    float* var_90
    
    if ((ecx_1.b & 1) == 0 && arg6 s> 0)
        long double x87_r6_1 = float.t(1)
        int32_t var_a4_1 = 3
        var_90 = edi
        float* var_a0_1 = &edi[arg9]
        float* i_6 = arg6
        float* i
        
        do
            long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(*var_a0_1)))
            x87_r7 - x87_r4_2
            float* eax_3
            eax_3.w = (x87_r7 < x87_r4_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7, x87_r4_2) ? 1 : 0) << 0xa
                | (x87_r7 == x87_r4_2 ? 1 : 0) << 0xe | 0x2000
            bool p_1 = unimplemented  {test ah, 0x44}
            long double x87_r4_3
            
            if (not(p_1))
                x87_r4_3 = x87_r4_2
            else
                x87_r4_3 = x87_r6_1 / x87_r4_2
            
            int32_t j = 0
            long double x87_r4_4 = fconvert.t(fconvert.s(x87_r4_3))
            
            if (edx s>= 4)
                float* ebx_1 = var_90
                
                do
                    if (j != arg9)
                        *ebx_1 = fconvert.s(fconvert.t(*ebx_1) * x87_r4_4)
                    
                    if (j + 1 != arg9)
                        ebx_1[1] = fconvert.s(fconvert.t(ebx_1[1]) * x87_r4_4)
                    
                    if (j + 2 != arg9)
                        int32_t ecx_4 = var_a4_1 + j
                        edi[ecx_4 - 1] = fconvert.s(fconvert.t(edi[ecx_4 - 1]) * x87_r4_4)
                    
                    if (j + 3 != arg9)
                        int32_t ecx_7 = var_a4_1 + j
                        edi[ecx_7] = fconvert.s(fconvert.t(edi[ecx_7]) * x87_r4_4)
                    
                    j += 4
                    ebx_1 = &ebx_1[4]
                while (j s< edx - 3)
                
                ecx_1 = var_94
            
            if (j s< edx)
                float* ecx_12 = &edi[var_a4_1 + j - 3]
                
                do
                    if (j != arg9)
                        *ecx_12 = fconvert.s(fconvert.t(*ecx_12) * x87_r4_4)
                    
                    j += 1
                    ecx_12 = &ecx_12[1]
                while (j s< edx)
                
                ecx_1 = var_94
            
            var_a4_1 += edx
            var_a0_1 = &var_a0_1[edx]
            var_90 = &var_90[edx]
            i = i_6
            i_6 -= 1
        while (i != 1)
        x87_r7 = x87_r6_1
    
    float* i_12 = arg6
    void* ebx_2 = nullptr
    int32_t eax_5 = 0
    void* var_94_1 = nullptr
    void var_8c
    
    if (edx s> 0)
        do
            if (eax_5 == arg9)
                edi = var_b4
                i_12 = arg6
            
            if (eax_5 != arg9 || (ecx_1.b & 2) != 0)
                *(&var_8c + (ebx_2 << 1)) = eax_5.w
                ebx_2 += 1
            
            eax_5 += 1
        while (eax_5 s< edx)
        
        var_94_1 = ebx_2
    
    float* eax_6 = arg10
    int32_t mxcsr
    long double x87_r4_7
    
    switch (eax_6)
        case nullptr
            if (i_12 s> 0)
                long double x87_r6_2 = float.t(1)
                float* esi_5 = arg3
                long double x87_r4_5 = fconvert.t(0.5)
                float* ebx_3 = edi
                float* var_a8_1 = arg6
                
                while (true)
                    int32_t ecx_13 = 0
                    long double x87_r7_2
                    
                    if (edx s<= 0)
                        x87_r4_7 = x87_r7
                        x87_r7_2 = x87_r4_5
                    else
                        float* edi_1 = ebx_3
                        
                        while (true)
                            long double x87_r3_13 = fconvert.t(fconvert.s(fconvert.t(*edi_1)))
                            x87_r3_13 - x87_r7
                            eax_6.w = (x87_r3_13 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_13, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r3_13 == x87_r7 ? 1 : 0) << 0xe | 0x1800
                            bool p_2 = unimplemented  {test ah, 0x5}
                            float var_a4_2
                            
                            if (p_2)
                                x87_r3_13 - x87_r6_2
                                eax_6.w = (x87_r3_13 < x87_r6_2 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r3_13, x87_r6_2) ? 1 : 0) << 0xa
                                    | (x87_r3_13 == x87_r6_2 ? 1 : 0) << 0xe | 0x1800
                                
                                if ((eax_6:1.b & 0x41) != 0)
                                    var_a4_2 = fconvert.s(x87_r3_13)
                                else
                                    var_a4_2 = fconvert.s(x87_r6_2)
                                    x87_r4_5 = x87_r3_13
                                
                                x87_r4_7 = x87_r7
                                x87_r7_2 = x87_r4_5
                            else
                                x87_r4_7 = x87_r7
                                x87_r7_2 = x87_r3_13
                                var_a4_2 = fconvert.s(x87_r4_7)
                            
                            ecx_13 += 1
                            int16_t x87status_1
                            int16_t temp0_7
                            temp0_7, x87status_1 = __fnstcw_memmem16(arg4)
                            var_90:2.w = temp0_7
                            edi_1 = &edi_1[1]
                            int16_t x87control
                            int16_t x87status_2
                            x87control, x87status_2 = __fldcw_memmem16((zx.d(var_90:2.w) | 0xc00).w)
                            eax_6.b = (int.d(fconvert.t(var_a4_2) * fconvert.t(255.0) + x87_r7_2)).b
                            *(esi_5 + ecx_13 - 1) = eax_6.b
                            int16_t x87status_3
                            arg4, x87status_3 = __fldcw_memmem16(var_90:2.w)
                            
                            if (ecx_13 s>= edx)
                                break
                            
                            x87_r4_5 = x87_r7_2
                            x87_r7 = x87_r4_7
                    
                    eax_6 = edx << 2
                    ebx_3 += eax_6
                    esi_5 += edx
                    float* temp3_1 = var_a8_1
                    var_a8_1 -= 1
                    
                    if (temp3_1 == 1)
                        break
                    
                    x87_r4_5 = x87_r7_2
                    x87_r7 = x87_r4_7
        case 1
            if (i_12 s> 0)
                long double x87_r6_5 = fconvert.t(0.000122070312f)
                long double x87_r5_5 = fconvert.t(0.99999994f)
                long double x87_r4_10 = float.t(1)
                int32_t edi_2 = 0
                long double x87_r2_2 = fconvert.t(0.5)
                float* i_7 = arg6
                long double x87_r1 = fconvert.t(0.99999994039535522)
                float* i_1
                
                do
                    int32_t ecx_18 = 0
                    
                    if (ebx_2 s>= 4)
                        while (true)
                            int32_t esi_7 = zx.d(*(&var_8c + (ecx_18 << 1))) + edi_2
                            float var_90_1 = fconvert.s(fconvert.t(var_b4[esi_7]))
                            long double temp4_1 = fconvert.t(var_90_1)
                            x87_r6_5 - temp4_1
                            eax_6.w = (x87_r6_5 < temp4_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r6_5 == temp4_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_3 = unimplemented  {test ah, 0x5}
                            
                            if (p_3)
                                var_90_1 = fconvert.s(x87_r6_5)
                            
                            long double x87_r1_2 = fconvert.t(var_90_1)
                            x87_r1_2 - x87_r7
                            eax_6.w = (x87_r1_2 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_2, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r1_2 == x87_r7 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_6:1.b & 0x41) == 0)
                                var_90_1 = fconvert.s(x87_r5_5)
                            
                            float var_a0_2 = fconvert.s(fconvert.t(var_90_1))
                            int32_t eax_10 = *(((var_a0_2 - 0x39000000) u>> 0x14 << 2) + u"\rs\rz\r")
                            *(arg3 + esi_7) = ((zx.d((var_a0_2 u>> 0xc).b) * zx.d(eax_10.w)
                                + (eax_10 u>> 7 & 0x1fffe00)) u>> 0x10).b
                            void var_8a
                            int32_t esi_9 = zx.d(*(&var_8a + (ecx_18 << 1))) + edi_2
                            float var_90_2 = fconvert.s(fconvert.t(var_b4[esi_9]))
                            long double temp17_1 = fconvert.t(var_90_2)
                            x87_r6_5 - temp17_1
                            float* eax_13
                            eax_13.w = (x87_r6_5 < temp17_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, temp17_1) ? 1 : 0) << 0xa
                                | (x87_r6_5 == temp17_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_4 = unimplemented  {test ah, 0x5}
                            
                            if (p_4)
                                var_90_2 = fconvert.s(x87_r6_5)
                            
                            long double x87_r1_5 = fconvert.t(var_90_2)
                            x87_r1_5 - x87_r7
                            eax_13.w = (x87_r1_5 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_5, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r1_5 == x87_r7 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_13:1.b & 0x41) == 0)
                                var_90_2 = fconvert.s(x87_r5_5)
                            
                            float var_a0_3 = fconvert.s(fconvert.t(var_90_2))
                            int32_t eax_16 = *(((var_a0_3 - 0x39000000) u>> 0x14 << 2) + u"\rs\rz\r")
                            *(arg3 + esi_9) = ((zx.d((var_a0_3 u>> 0xc).b) * zx.d(eax_16.w)
                                + (eax_16 u>> 7 & 0x1fffe00)) u>> 0x10).b
                            void var_88
                            int32_t esi_11 = zx.d(*(&var_88 + (ecx_18 << 1))) + edi_2
                            float var_90_3 = fconvert.s(fconvert.t(var_b4[esi_11]))
                            long double temp20_1 = fconvert.t(var_90_3)
                            x87_r6_5 - temp20_1
                            float* eax_19
                            eax_19.w = (x87_r6_5 < temp20_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, temp20_1) ? 1 : 0) << 0xa
                                | (x87_r6_5 == temp20_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_5 = unimplemented  {test ah, 0x5}
                            
                            if (p_5)
                                var_90_3 = fconvert.s(x87_r6_5)
                            
                            long double x87_r1_8 = fconvert.t(var_90_3)
                            x87_r1_8 - x87_r7
                            eax_19.w = (x87_r1_8 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_8, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r1_8 == x87_r7 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_19:1.b & 0x41) == 0)
                                var_90_3 = fconvert.s(x87_r5_5)
                            
                            float var_a0_4 = fconvert.s(fconvert.t(var_90_3))
                            int32_t eax_22 = *(((var_a0_4 - 0x39000000) u>> 0x14 << 2) + u"\rs\rz\r")
                            *(arg3 + esi_11) = ((zx.d((var_a0_4 u>> 0xc).b) * zx.d(eax_22.w)
                                + (eax_22 u>> 7 & 0x1fffe00)) u>> 0x10).b
                            int16_t var_86[0x3f]
                            int32_t esi_13 = zx.d(var_86[ecx_18]) + edi_2
                            float var_90_4 = fconvert.s(fconvert.t(var_b4[esi_13]))
                            long double temp21_1 = fconvert.t(var_90_4)
                            x87_r6_5 - temp21_1
                            float* eax_25
                            eax_25.w = (x87_r6_5 < temp21_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, temp21_1) ? 1 : 0) << 0xa
                                | (x87_r6_5 == temp21_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_6 = unimplemented  {test ah, 0x5}
                            
                            if (p_6)
                                var_90_4 = fconvert.s(x87_r6_5)
                            
                            long double x87_r1_11 = fconvert.t(var_90_4)
                            x87_r1_11 - x87_r7
                            eax_25.w = (x87_r1_11 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_11, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r1_11 == x87_r7 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_25:1.b & 0x41) == 0)
                                var_90_4 = fconvert.s(x87_r5_5)
                            
                            ecx_18 += 4
                            float var_a0_5 = fconvert.s(fconvert.t(var_90_4))
                            int32_t eax_28 = *(((var_a0_5 - 0x39000000) u>> 0x14 << 2) + u"\rs\rz\r")
                            ebx_2 = var_94_1
                            *(arg3 + esi_13) = ((zx.d((var_a0_5 u>> 0xc).b) * zx.d(eax_28.w)
                                + (eax_28 u>> 7 & 0x1fffe00)) u>> 0x10).b
                            eax_6 = ebx_2 - 3
                            
                            if (ecx_18 s>= eax_6)
                                break
                            
                            x87_r6_5 = x87_r6_5
                        
                        long double x87_r1_14 = x87_r7
                        x87_r7 = float.t(0)
                        x87_r6_5 = x87_r6_5
                        x87_r1 = x87_r1_14
                    
                    if (ecx_18 s< ebx_2)
                        while (true)
                            int32_t esi_15 = zx.d(*(&var_8c + (ecx_18 << 1))) + edi_2
                            float var_90_5 = fconvert.s(fconvert.t(var_b4[esi_15]))
                            long double temp13_1 = fconvert.t(var_90_5)
                            x87_r6_5 - temp13_1
                            eax_6.w = (x87_r6_5 < temp13_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_5, temp13_1) ? 1 : 0) << 0xa
                                | (x87_r6_5 == temp13_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_7 = unimplemented  {test ah, 0x5}
                            
                            if (p_7)
                                var_90_5 = fconvert.s(x87_r6_5)
                            
                            long double x87_r1_18 = fconvert.t(var_90_5)
                            x87_r1_18 - x87_r7
                            eax_6.w = (x87_r1_18 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_18, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r1_18 == x87_r7 ? 1 : 0) << 0xe | 0x1000
                            
                            if ((eax_6:1.b & 0x41) == 0)
                                var_90_5 = fconvert.s(x87_r5_5)
                            
                            ecx_18 += 1
                            float var_a0_6 = fconvert.s(fconvert.t(var_90_5))
                            int32_t eax_34 = *(((var_a0_6 - 0x39000000) u>> 0x14 << 2) + u"\rs\rz\r")
                            ebx_2 = var_94_1
                            eax_6 = arg3
                            *(eax_6 + esi_15) = ((zx.d((var_a0_6 u>> 0xc).b) * zx.d(eax_34.w)
                                + (eax_34 u>> 7 & 0x1fffe00)) u>> 0x10).b
                            
                            if (ecx_18 s>= ebx_2)
                                break
                            
                            x87_r6_5 = x87_r6_5
                        
                        long double x87_r1_21 = x87_r7
                        x87_r7 = float.t(0)
                        x87_r6_5 = x87_r6_5
                        x87_r1 = x87_r1_21
                    
                    if ((ecx_1 & 2) == 0)
                        long double x87_r0_6 = fconvert.t(fconvert.s(fconvert.t(var_b4[arg9 + edi_2])))
                        x87_r0_6 - x87_r7
                        float* eax_37
                        eax_37.w = (x87_r0_6 < x87_r7 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r0_6, x87_r7) ? 1 : 0) << 0xa
                            | (x87_r0_6 == x87_r7 ? 1 : 0) << 0xe
                        bool p_8 = unimplemented  {test ah, 0x5}
                        float var_90_6
                        long double x87_r1_24
                        
                        if (p_8)
                            long double x87_r1_25 = x87_r7
                            x87_r7 = x87_r1
                            x87_r1_25 - x87_r4_10
                            eax_37.w = (x87_r1_25 < x87_r4_10 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_25, x87_r4_10) ? 1 : 0) << 0xa
                                | (x87_r1_25 == x87_r4_10 ? 1 : 0) << 0xe | 0x800
                            
                            if ((eax_37:1.b & 0x41) != 0)
                                var_90_6 = fconvert.s(x87_r1_25)
                                x87_r1_24 = float.t(0)
                            else
                                var_90_6 = fconvert.s(x87_r4_10)
                                x87_r1_24 = float.t(0)
                                x87_r2_2 = x87_r1_25
                        else
                            x87_r1_24 = float.t(0)
                            var_90_6 = fconvert.s(x87_r1_24)
                        
                        long double x87_r0_9 = fconvert.t(var_90_6)
                        int16_t x87status_4
                        int16_t temp0_36
                        temp0_36, x87status_4 = __fnstcw_memmem16(arg4)
                        var_90_6:2.w = temp0_36
                        eax_6 = zx.d(var_90_6:2.w) | 0xc00
                        int16_t x87control_1
                        int16_t x87status_5
                        x87control_1, x87status_5 = __fldcw_memmem16(eax_6.w)
                        void* edx_36
                        edx_36.b = (int.d(x87_r0_9 * fconvert.t(255.0) + x87_r2_2)).b
                        (arg9 + arg3)[edi_2] = edx_36.b
                        int16_t x87status_6
                        arg4, x87status_6 = __fldcw_memmem16(var_90_6:2.w)
                        x87_r1 = x87_r7
                        x87_r7 = x87_r1_24
                    
                    edi_2 += arg8
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_6
        case 2
            if (i_12 s> 0)
                long double x87_r6_9 = float.t(1)
                void* ebx_9 = arg3
                float* var_a4_4 = edi
                long double x87_r4_12 = fconvert.t(65535.0)
                float* i_13 = i_12
                
                while (true)
                    long double x87_r7_7
                    
                    if (edx s<= 0)
                        x87_r4_7 = x87_r7
                        x87_r7_7 = x87_r4_12
                    else
                        float* esi_16 = var_a4_4
                        void* ecx_23 = ebx_9
                        int32_t edi_3 = edx
                        
                        while (true)
                            long double x87_r3_19 = fconvert.t(fconvert.s(fconvert.t(*esi_16)))
                            x87_r3_19 - x87_r7
                            eax_6.w = (x87_r3_19 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_19, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r3_19 == x87_r7 ? 1 : 0) << 0xe | 0x1800
                            bool p_9 = unimplemented  {test ah, 0x5}
                            float var_94_2
                            
                            if (p_9)
                                x87_r3_19 - x87_r6_9
                                eax_6.w = (x87_r3_19 < x87_r6_9 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r3_19, x87_r6_9) ? 1 : 0) << 0xa
                                    | (x87_r3_19 == x87_r6_9 ? 1 : 0) << 0xe | 0x1800
                                
                                if ((eax_6:1.b & 0x41) != 0)
                                    var_94_2 = fconvert.s(x87_r3_19)
                                else
                                    var_94_2 = fconvert.s(x87_r6_9)
                                    x87_r4_12 = x87_r3_19
                                
                                x87_r4_7 = x87_r7
                                x87_r7_7 = x87_r4_12
                            else
                                x87_r4_7 = x87_r7
                                x87_r7_7 = x87_r3_19
                                var_94_2 = fconvert.s(x87_r4_7)
                            
                            esi_16 = &esi_16[1]
                            int16_t x87status_7
                            int16_t temp0_44
                            temp0_44, x87status_7 = __fnstcw_memmem16(arg4)
                            var_90:2.w = temp0_44
                            ecx_23 += 2
                            int32_t temp18_1 = edi_3
                            edi_3 -= 1
                            int16_t x87control_2
                            int16_t x87status_8
                            x87control_2, x87status_8 = __fldcw_memmem16((zx.d(var_90:2.w) | 0xc00).w)
                            eax_6.w = (int.d(fconvert.t(var_94_2) * x87_r7_7 + fconvert.t(0.5))).w
                            *(ecx_23 - 2) = eax_6.w
                            int16_t x87status_9
                            arg4, x87status_9 = __fldcw_memmem16(var_90:2.w)
                            
                            if (temp18_1 == 1)
                                break
                            
                            x87_r4_12 = x87_r7_7
                            x87_r7 = x87_r4_7
                    
                    eax_6 = edx << 2
                    var_a4_4 += eax_6
                    float* i_15 = i_13
                    i_13 -= 1
                    ebx_9 += edx << 1
                    
                    if (i_15 == 1)
                        break
                    
                    x87_r4_12 = x87_r7_7
                    x87_r7 = x87_r4_7
        case 3
            if (i_12 s> 0)
                int32_t eax_41 = ecx_1 & 2
                int16_t top_1 = 0xfffc
                int32_t var_a4_5 = eax_41
                int32_t var_a0_7 = 0
                float* i_9 = i_12
                float* i_2
                
                do
                    int32_t edi_4 = 0
                    
                    if (ebx_2 s> 0)
                        do
                            int32_t esi_18 = zx.d(*(&var_8c + (edi_4 << 1))) + var_a0_7
                            unimplemented  {fld st0, dword [ecx+esi*4]}
                            float var_a8_2 = fconvert.s(unimplemented  {fstp dword [ebp-0xa4], st0})
                            unimplemented  {fstp dword [ebp-0xa4], st0}
                            unimplemented  {fld st0, dword [ebp-0xa4]}
                            unimplemented  {fcom st0, st4} f- unimplemented  {fcom st0, st4}
                            bool c0_18 =
                                unimplemented  {fcom st0, st4} f< unimplemented  {fcom st0, st4}
                            bool c2_18 = is_unordered.t(unimplemented  {fcom st0, st4}, 
                                unimplemented  {fcom st0, st4})
                            bool c3_18 =
                                unimplemented  {fcom st0, st4} f== unimplemented  {fcom st0, st4}
                            eax_41.w = (c0_18 ? 1 : 0) << 8 | (c2_18 ? 1 : 0) << 0xa
                                | (c3_18 ? 1 : 0) << 0xe | ((top_1 - 1) & 7) << 0xb
                            bool p_10 = unimplemented  {test ah, 0x5}
                            int16_t top_5
                            
                            if (p_10)
                                unimplemented  {fcom st0, st3} f- unimplemented  {fcom st0, st3}
                                bool c0_19 =
                                    unimplemented  {fcom st0, st3} f< unimplemented  {fcom st0, st3}
                                bool c2_19 = is_unordered.t(unimplemented  {fcom st0, st3}, 
                                    unimplemented  {fcom st0, st3})
                                bool c3_19 =
                                    unimplemented  {fcom st0, st3} f== unimplemented  {fcom st0, st3}
                                eax_41.w = (c0_19 ? 1 : 0) << 8 | (c2_19 ? 1 : 0) << 0xa
                                    | (c3_19 ? 1 : 0) << 0xe | ((top_1 - 1) & 7) << 0xb
                                
                                if ((eax_41:1.b & 0x41) != 0)
                                    float var_94_5 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x90], st0})
                                    unimplemented  {fstp dword [ebp-0x90], st0}
                                    top_5 = top_1
                                else
                                    unimplemented  {fstp st0, st0}
                                    unimplemented  {fstp st0, st0}
                                    top_5 = top_1
                                    unimplemented  {fxch st0, st2}
                                    unimplemented  {fxch st0, st2}
                                    float var_94_4 =
                                        fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                                    unimplemented  {fxch st0, st2}
                                    unimplemented  {fxch st0, st2}
                                
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st3}
                            else
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                top_5 = top_1
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st3}
                                float var_94_3 = fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                            
                            unimplemented  {fld st0, dword [ebp-0x90]}
                            long double temp14_1 = fconvert.t(0.0031308000907301903)
                            unimplemented  {fcom st0, qword [0x8a5590]} f- temp14_1
                            bool c0_20 = unimplemented  {fcom st0, qword [0x8a5590]} f< temp14_1
                            bool c2_20 =
                                is_unordered.t(unimplemented  {fcom st0, qword [0x8a5590]}, temp14_1)
                            bool c3_20 = unimplemented  {fcom st0, qword [0x8a5590]} f== temp14_1
                            eax_41.w = (c0_20 ? 1 : 0) << 8 | (c2_20 ? 1 : 0) << 0xa
                                | (c3_20 ? 1 : 0) << 0xe | ((top_5 - 1) & 7) << 0xb
                            bool p_11 = unimplemented  {test ah, 0x41}
                            int16_t top_7
                            
                            if (p_11)
                                unimplemented  {fstp st3, st0}
                                unimplemented  {fstp st3, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st2, st0}
                                unimplemented  {fstp st2, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fld st0, qword [0x8a5580]}
                                arg4 = sub_686c10(mxcsr, arg4)
                                float var_a8_4 = fconvert.s(unimplemented  {fstp dword [ebp-0xa4], st0})
                                unimplemented  {fstp dword [ebp-0xa4], st0}
                                unimplemented  {fld st0, dword [ebp-0xa4]}
                                edx = arg8
                                unimplemented  {fmul st0, qword [0x8a5578]}
                                unimplemented  {fsub st0, qword [0x8a5570]}
                                float var_a8_5 = fconvert.s(unimplemented  {fstp dword [ebp-0xa4], st0})
                                unimplemented  {fstp dword [ebp-0xa4], st0}
                                unimplemented  {fld st0, qword [0x8a5368]}
                                unimplemented  {fld1 }
                                unimplemented  {fldz }
                                top_7 = top_5 + 1
                                unimplemented  {fld st0, qword [0x8a5640]}
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st1}
                                unimplemented  {fxch st0, st1}
                            else
                                unimplemented  {fmul st0, qword [0x8a5588]}
                                float var_a8_3 = fconvert.s(unimplemented  {fstp dword [ebp-0xa4], st0})
                                unimplemented  {fstp dword [ebp-0xa4], st0}
                                top_7 = top_5
                            
                            unimplemented  {fld st0, dword [ebp-0xa4]}
                            int16_t x87status_10
                            int16_t temp0_46
                            temp0_46, x87status_10 = __fnstcw_memmem16(arg4)
                            var_90:2.w = temp0_46
                            edi_4 += 1
                            unimplemented  {fmul st0, st4}
                            unimplemented  {fadd st0, st2}
                            int16_t x87control_3
                            int16_t x87status_11
                            x87control_3, x87status_11 = __fldcw_memmem16((zx.d(var_90:2.w) | 0xc00).w)
                            int16_t var_a8_7 = (int.d(unimplemented  {fistp dword [ebp-0xa4], st0})).w
                            unimplemented  {fistp dword [ebp-0xa4], st0}
                            top_1 = top_7
                            eax_41.w = var_a8_7
                            *(arg3 + (esi_18 << 1)) = eax_41.w
                            int16_t x87status_12
                            arg4, x87status_12 = __fldcw_memmem16(var_90:2.w)
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fxch st0, st3}
                        while (edi_4 s< ebx_2)
                    
                    if (var_a4_5 == 0)
                        unimplemented  {fld st0, dword [eax+ecx*4]}
                        float var_a8_8 = fconvert.s(unimplemented  {fstp dword [ebp-0xa4], st0})
                        unimplemented  {fstp dword [ebp-0xa4], st0}
                        unimplemented  {fld st0, dword [ebp-0xa4]}
                        unimplemented  {fcom st0, st4} f- unimplemented  {fcom st0, st4}
                        unimplemented  {fcom st0, st4} f< unimplemented  {fcom st0, st4}
                        is_unordered.t(unimplemented  {fcom st0, st4}, unimplemented  {fcom st0, st4})
                        unimplemented  {fcom st0, st4} f== unimplemented  {fcom st0, st4}
                        bool p_12 = unimplemented  {test ah, 0x5}
                        int16_t top_24
                        
                        if (p_12)
                            unimplemented  {fcom st0, st3} f- unimplemented  {fcom st0, st3}
                            bool c0_22 =
                                unimplemented  {fcom st0, st3} f< unimplemented  {fcom st0, st3}
                            bool c2_22 = is_unordered.t(unimplemented  {fcom st0, st3}, 
                                unimplemented  {fcom st0, st3})
                            bool c3_22 =
                                unimplemented  {fcom st0, st3} f== unimplemented  {fcom st0, st3}
                            
                            if ((((c0_22 ? 1 : 0) << 8 | (c2_22 ? 1 : 0) << 0xa | (c3_22 ? 1 : 0) << 0xe
                                    | ((top_1 - 1) & 7) << 0xb):1.b & 0x41) != 0)
                                float var_94_8 = fconvert.s(unimplemented  {fstp dword [ebp-0x90], st0})
                                unimplemented  {fstp dword [ebp-0x90], st0}
                                top_24 = top_1
                            else
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                top_24 = top_1
                                unimplemented  {fxch st0, st2}
                                unimplemented  {fxch st0, st2}
                                float var_94_7 = fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                                unimplemented  {fxch st0, st2}
                                unimplemented  {fxch st0, st2}
                            
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fxch st0, st3}
                        else
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            top_24 = top_1
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fxch st0, st3}
                            float var_94_6 = fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                        
                        unimplemented  {fld st0, dword [ebp-0x90]}
                        int16_t x87status_13
                        int16_t temp0_47
                        temp0_47, x87status_13 = __fnstcw_memmem16(arg4)
                        var_90:2.w = temp0_47
                        unimplemented  {fmul st0, st4}
                        unimplemented  {fadd st0, st2}
                        int16_t x87control_4
                        int16_t x87status_14
                        x87control_4, x87status_14 = __fldcw_memmem16((zx.d(var_90:2.w) | 0xc00).w)
                        int16_t var_a8_10 = (int.d(unimplemented  {fistp dword [ebp-0xa4], st0})).w
                        unimplemented  {fistp dword [ebp-0xa4], st0}
                        top_1 = top_24
                        eax_41.w = var_a8_10
                        *(arg3 + ((arg9 + var_a0_7) << 1)) = eax_41.w
                        int16_t x87status_15
                        arg4, x87status_15 = __fldcw_memmem16(var_90:2.w)
                        unimplemented  {fxch st0, st3}
                        unimplemented  {fxch st0, st3}
                    
                    var_a0_7 += edx
                    i_2 = i_9
                    i_9 -= 1
                while (i_2 != 1)
                unimplemented  {fstp st2, st0}
                unimplemented  {fstp st2, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_41
        case 4
            if (i_12 s> 0)
                long double x87_r6_12 = float.t(1)
                float* ebx_10 = arg3
                float* i_14 = i_12
                long double x87_r4_17 = fconvert.t(4294967295.0)
                
                while (true)
                    long double x87_r7_8
                    
                    if (edx s<= 0)
                        x87_r4_7 = x87_r7
                        x87_r7_8 = x87_r4_17
                    else
                        void* ecx_29 = ebx_10
                        int32_t esi_20 = edx
                        
                        while (true)
                            long double x87_r3_24 =
                                fconvert.t(fconvert.s(fconvert.t(*(var_b4 - arg3 + ecx_29))))
                            x87_r3_24 - x87_r7
                            eax_6.w = (x87_r3_24 < x87_r7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_24, x87_r7) ? 1 : 0) << 0xa
                                | (x87_r3_24 == x87_r7 ? 1 : 0) << 0xe | 0x1800
                            bool p_13 = unimplemented  {test ah, 0x5}
                            float var_94_9
                            
                            if (p_13)
                                x87_r3_24 - x87_r6_12
                                eax_6.w = (x87_r3_24 < x87_r6_12 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r3_24, x87_r6_12) ? 1 : 0) << 0xa
                                    | (x87_r3_24 == x87_r6_12 ? 1 : 0) << 0xe | 0x1800
                                
                                if ((eax_6:1.b & 0x41) != 0)
                                    var_94_9 = fconvert.s(x87_r3_24)
                                else
                                    var_94_9 = fconvert.s(x87_r6_12)
                                    x87_r4_17 = x87_r3_24
                                
                                x87_r4_7 = x87_r7
                                x87_r7_8 = x87_r4_17
                            else
                                x87_r4_7 = x87_r7
                                x87_r7_8 = x87_r3_24
                                var_94_9 = fconvert.s(x87_r4_7)
                            
                            ecx_29 += 4
                            int16_t x87status_16
                            int16_t temp0_54
                            temp0_54, x87status_16 = __fnstcw_memmem16(arg4)
                            var_90:2.w = temp0_54
                            int32_t temp19_1 = esi_20
                            esi_20 -= 1
                            int16_t x87control_5
                            int16_t x87status_17
                            x87control_5, x87status_17 = __fldcw_memmem16(var_90:2.w | 0xc00)
                            *(ecx_29 - 4) = (int.q(fconvert.t(var_94_9) * x87_r7_8 + fconvert.t(0.5))).d
                            int16_t x87status_18
                            arg4, x87status_18 = __fldcw_memmem16(var_90:2.w)
                            
                            if (temp19_1 == 1)
                                break
                            
                            x87_r4_17 = x87_r7_8
                            x87_r7 = x87_r4_7
                    
                    eax_6 = edx << 2
                    ebx_10 += eax_6
                    float* i_16 = i_14
                    i_14 -= 1
                    
                    if (i_16 == 1)
                        break
                    
                    x87_r4_17 = x87_r7_8
                    x87_r7 = x87_r4_7
        case 5
            if (i_12 s> 0)
                int16_t top_26 = 0xfffc
                int32_t edx_37 = 0
                int32_t var_a8_13 = 0
                float* i_8 = arg6
                float* i_3
                
                do
                    int32_t edi_7 = 0
                    
                    if (ebx_2 s> 0)
                        do
                            int32_t esi_22 = zx.d(*(&var_8c + (edi_7 << 1))) + edx_37
                            unimplemented  {fld st0, dword [eax+esi*4]}
                            float var_98_12 = fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                            unimplemented  {fstp dword [ebp-0x94], st0}
                            unimplemented  {fld st0, dword [ebp-0x94]}
                            unimplemented  {fcom st0, st4} f- unimplemented  {fcom st0, st4}
                            unimplemented  {fcom st0, st4} f< unimplemented  {fcom st0, st4}
                            is_unordered.t(unimplemented  {fcom st0, st4}, 
                                unimplemented  {fcom st0, st4})
                            unimplemented  {fcom st0, st4} f== unimplemented  {fcom st0, st4}
                            bool p_14 = unimplemented  {test ah, 0x5}
                            int16_t top_30
                            
                            if (p_14)
                                unimplemented  {fcom st0, st3} f- unimplemented  {fcom st0, st3}
                                bool c0_26 =
                                    unimplemented  {fcom st0, st3} f< unimplemented  {fcom st0, st3}
                                bool c2_26 = is_unordered.t(unimplemented  {fcom st0, st3}, 
                                    unimplemented  {fcom st0, st3})
                                bool c3_26 =
                                    unimplemented  {fcom st0, st3} f== unimplemented  {fcom st0, st3}
                                
                                if ((((c0_26 ? 1 : 0) << 8 | (c2_26 ? 1 : 0) << 0xa
                                        | (c3_26 ? 1 : 0) << 0xe | ((top_26 - 1) & 7) << 0xb):1.b & 0x41) != 0)
                                    float var_94_12 =
                                        fconvert.s(unimplemented  {fstp dword [ebp-0x90], st0})
                                    unimplemented  {fstp dword [ebp-0x90], st0}
                                    top_30 = top_26
                                else
                                    unimplemented  {fstp st0, st0}
                                    unimplemented  {fstp st0, st0}
                                    top_30 = top_26
                                    unimplemented  {fxch st0, st2}
                                    unimplemented  {fxch st0, st2}
                                    float var_94_11 =
                                        fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                                    unimplemented  {fxch st0, st2}
                                    unimplemented  {fxch st0, st2}
                                
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st3}
                            else
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                top_30 = top_26
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st3}
                                float var_94_10 = fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                            
                            unimplemented  {fld st0, dword [ebp-0x90]}
                            unimplemented  {fcom st0, qword [0x8a5590]}
                                f- fconvert.t(0.0031308000907301903)
                            unimplemented  {fcom st0, qword [0x8a5590]}
                            unimplemented  {fcom st0, qword [0x8a5590]}
                            unimplemented  {fcom st0, qword [0x8a5590]}
                            bool p_15 = unimplemented  {test ah, 0x41}
                            int16_t top_32
                            
                            if (p_15)
                                unimplemented  {fstp st3, st0}
                                unimplemented  {fstp st3, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st2, st0}
                                unimplemented  {fstp st2, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fstp st1, st0}
                                unimplemented  {fld st0, qword [0x8a5580]}
                                arg4 = sub_686c10(mxcsr, arg4)
                                float var_98_14 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                                unimplemented  {fstp dword [ebp-0x94], st0}
                                unimplemented  {fld st0, dword [ebp-0x94]}
                                edx_37 = var_a8_13
                                unimplemented  {fmul st0, qword [0x8a5578]}
                                unimplemented  {fsub st0, qword [0x8a5570]}
                                float var_98_15 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                                unimplemented  {fstp dword [ebp-0x94], st0}
                                unimplemented  {fld1 }
                                unimplemented  {fldz }
                                unimplemented  {fld st0, qword [0x8a5368]}
                                top_32 = top_30 + 1
                                unimplemented  {fld st0, qword [0x8a5638]}
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st3}
                                unimplemented  {fxch st0, st2}
                                unimplemented  {fxch st0, st2}
                            else
                                unimplemented  {fmul st0, qword [0x8a5588]}
                                float var_98_13 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                                unimplemented  {fstp dword [ebp-0x94], st0}
                                top_32 = top_30
                            
                            unimplemented  {fld st0, dword [ebp-0x94]}
                            edi_7 += 1
                            int16_t x87status_19
                            int16_t temp0_56
                            temp0_56, x87status_19 = __fnstcw_memmem16(arg4)
                            var_90:2.w = temp0_56
                            unimplemented  {fmul st0, st4}
                            eax_6 = arg3
                            unimplemented  {fadd st0, st2}
                            int16_t x87control_6
                            int16_t x87status_20
                            x87control_6, x87status_20 = __fldcw_memmem16(var_90:2.w | 0xc00)
                            int32_t var_9c_1 = (int.q(unimplemented  {fistp qword [ebp-0x98], st0})).d
                            unimplemented  {fistp qword [ebp-0x98], st0}
                            top_26 = top_32
                            eax_6[esi_22] = var_9c_1
                            int16_t x87status_21
                            arg4, x87status_21 = __fldcw_memmem16(var_90:2.w)
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fxch st0, st3}
                        while (edi_7 s< ebx_2)
                    
                    if ((ecx_1 & 2) == 0)
                        unimplemented  {fld st0, dword [ecx+eax]}
                        float var_98_17 = fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                        unimplemented  {fstp dword [ebp-0x94], st0}
                        unimplemented  {fld st0, dword [ebp-0x94]}
                        unimplemented  {fcom st0, st4} f- unimplemented  {fcom st0, st4}
                        unimplemented  {fcom st0, st4} f< unimplemented  {fcom st0, st4}
                        is_unordered.t(unimplemented  {fcom st0, st4}, unimplemented  {fcom st0, st4})
                        unimplemented  {fcom st0, st4} f== unimplemented  {fcom st0, st4}
                        bool p_16 = unimplemented  {test ah, 0x5}
                        int16_t top_49
                        
                        if (p_16)
                            unimplemented  {fcom st0, st3} f- unimplemented  {fcom st0, st3}
                            bool c0_29 =
                                unimplemented  {fcom st0, st3} f< unimplemented  {fcom st0, st3}
                            bool c2_29 = is_unordered.t(unimplemented  {fcom st0, st3}, 
                                unimplemented  {fcom st0, st3})
                            bool c3_29 =
                                unimplemented  {fcom st0, st3} f== unimplemented  {fcom st0, st3}
                            
                            if ((((c0_29 ? 1 : 0) << 8 | (c2_29 ? 1 : 0) << 0xa | (c3_29 ? 1 : 0) << 0xe
                                    | ((top_26 - 1) & 7) << 0xb):1.b & 0x41) != 0)
                                float var_94_15 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x90], st0})
                                unimplemented  {fstp dword [ebp-0x90], st0}
                                top_49 = top_26
                            else
                                unimplemented  {fstp st0, st0}
                                unimplemented  {fstp st0, st0}
                                top_49 = top_26
                                unimplemented  {fxch st0, st2}
                                unimplemented  {fxch st0, st2}
                                float var_94_14 = fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                                unimplemented  {fxch st0, st2}
                                unimplemented  {fxch st0, st2}
                            
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fxch st0, st3}
                        else
                            unimplemented  {fstp st0, st0}
                            unimplemented  {fstp st0, st0}
                            top_49 = top_26
                            unimplemented  {fxch st0, st3}
                            unimplemented  {fxch st0, st3}
                            float var_94_13 = fconvert.s(unimplemented  {fst dword [ebp-0x90], st0})
                        
                        unimplemented  {fld st0, dword [ebp-0x90]}
                        int16_t x87status_22
                        int16_t temp0_57
                        temp0_57, x87status_22 = __fnstcw_memmem16(arg4)
                        var_90:2.w = temp0_57
                        unimplemented  {fmul st0, st4}
                        unimplemented  {fadd st0, st2}
                        int16_t x87control_7
                        int16_t x87status_23
                        x87control_7, x87status_23 = __fldcw_memmem16(var_90:2.w | 0xc00)
                        int32_t var_9c_2 = (int.q(unimplemented  {fistp qword [ebp-0x98], st0})).d
                        unimplemented  {fistp qword [ebp-0x98], st0}
                        top_26 = top_49
                        eax_6 = var_9c_2
                        *((arg9 + edx_37) * 4 + arg3) = eax_6
                        int16_t x87status_24
                        arg4, x87status_24 = __fldcw_memmem16(var_90:2.w)
                        unimplemented  {fxch st0, st3}
                        unimplemented  {fxch st0, st3}
                    
                    edx_37 += arg8
                    i_3 = i_8
                    i_8 -= 1
                    var_a8_13 = edx_37
                while (i_3 != 1)
                unimplemented  {fstp st2, st0}
                unimplemented  {fstp st2, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                unimplemented  {fstp st0, st0}
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_6
        case 6
            if (i_12 s> 0)
                int32_t ecx_39 = edx << 2
                int32_t var_94_16 = 0
                float* var_a0_8 = arg3
                void* var_a4_7 = &edi[2]
                float* i_10 = i_12
                float* i_4
                
                do
                    int32_t edi_9 = 0
                    
                    if (arg8 s>= 4)
                        void* edx_39 = var_a4_7
                        float* eax_53 = var_a0_8
                        int32_t j_3 = ((arg8 - 4) u>> 2) + 1
                        edi_9 = j_3 << 2
                        int32_t j_1
                        
                        do
                            long double x87_r7_9 = fconvert.t(*(eax_53 + var_b4 - arg3))
                            eax_53 = &eax_53[4]
                            eax_53[-4] = fconvert.s(x87_r7_9)
                            edx_39 += 0x10
                            j_1 = j_3
                            j_3 -= 1
                            eax_53[-3] = fconvert.s(fconvert.t(*(edx_39 - 0x14)))
                            eax_53[-2] = fconvert.s(fconvert.t(*(edx_39 - 0x10)))
                            eax_53[-1] = fconvert.s(fconvert.t(*(edx_39 - 0xc)))
                        while (j_1 != 1)
                    
                    if (edi_9 s< arg8)
                        void* eax_56 = &arg3[var_94_16 + edi_9]
                        int32_t j_4 = arg8 - edi_9
                        int32_t j_2
                        
                        do
                            long double x87_r7_13 = fconvert.t(*(eax_56 + var_b4 - arg3))
                            eax_56 += 4
                            j_2 = j_4
                            j_4 -= 1
                            *(eax_56 - 4) = fconvert.s(x87_r7_13)
                        while (j_2 != 1)
                    
                    var_94_16 += arg8
                    var_a4_7 += ecx_39
                    var_a0_8 = &var_a0_8[edx]
                    i_4 = i_10
                    i_10 -= 1
                while (i_4 != 1)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return ecx_39
        case 7
            int16_t top_51 = 0
            
            if (i_12 s> 0)
                float* eax_59 = ecx_1 & 2
                int32_t ecx_46 = 0
                float* var_a4_8 = eax_59
                int32_t var_a8_15 = 0
                float* i_11 = i_12
                float* i_5
                
                do
                    int32_t edi_10 = 0
                    
                    if (ebx_2 s> 0)
                        do
                            int32_t esi_28 = zx.d(*(&var_8c + (edi_10 << 1))) + ecx_46
                            unimplemented  {fld st0, dword [eax+esi*4]}
                            float var_98_19 = fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                            unimplemented  {fstp dword [ebp-0x94], st0}
                            int16_t top_54 = top_51 - 1
                            unimplemented  {fld st0, dword [ebp-0x94]}
                            long double temp1_1 = fconvert.t(0.0031308000907301903)
                            unimplemented  {fcom st0, qword [0x8a5590]} f- temp1_1
                            bool c0_30 = unimplemented  {fcom st0, qword [0x8a5590]} f< temp1_1
                            bool c2_30 =
                                is_unordered.t(unimplemented  {fcom st0, qword [0x8a5590]}, temp1_1)
                            bool c3_30 = unimplemented  {fcom st0, qword [0x8a5590]} f== temp1_1
                            float* eax_60
                            eax_60.w = (c0_30 ? 1 : 0) << 8 | (c2_30 ? 1 : 0) << 0xa
                                | (c3_30 ? 1 : 0) << 0xe | (top_54 & 7) << 0xb
                            bool p_17 = unimplemented  {test ah, 0x41}
                            
                            if (p_17)
                                unimplemented  {fld st0, qword [0x8a5580]}
                                arg4 = sub_686c10(mxcsr, arg4)
                                float var_98_20 =
                                    fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                                unimplemented  {fstp dword [ebp-0x94], st0}
                                top_54 += 1
                                unimplemented  {fld st0, dword [ebp-0x94]}
                                ecx_46 = var_a8_15
                                unimplemented  {fmul st0, qword [0x8a5578]}
                                edx = arg8
                                unimplemented  {fsub st0, qword [0x8a5570]}
                            else
                                unimplemented  {fmul st0, qword [0x8a5588]}
                            
                            eax_59 = arg3
                            float var_98_21 = fconvert.s(unimplemented  {fstp dword [ebp-0x94], st0})
                            unimplemented  {fstp dword [ebp-0x94], st0}
                            unimplemented  {fld st0, dword [ebp-0x94]}
                            edi_10 += 1
                            eax_59[esi_28] = fconvert.s(unimplemented  {fstp dword [eax+esi*4], st0})
                            unimplemented  {fstp dword [eax+esi*4], st0}
                            top_51 = top_54 + 1
                        while (edi_10 s< ebx_2)
                    
                    if (var_a4_8 == 0)
                        eax_59 = (arg9 + ecx_46) * 4
                        unimplemented  {fld st0, dword [eax+esi]}
                        *(eax_59 + arg3) = fconvert.s(unimplemented  {fstp dword [eax+esi], st0})
                        unimplemented  {fstp dword [eax+esi], st0}
                    
                    ecx_46 += edx
                    i_5 = i_11
                    i_11 -= 1
                    var_a8_15 = ecx_46
                while (i_5 != 1)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return eax_59
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_6
}

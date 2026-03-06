// 函数名称: sub_64c010
// 虚拟地址: 0x64c010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_64c010(float arg1, int32_t arg2, float arg3, float arg4)
{
    // 第一条实际指令: float* ecx = __chkstk(0x7f30)
    float* ecx = __chkstk(0x7f30)
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int128_t (* edi)[0x770]
    int128_t (* var_10)[0x770] = edi
    __alloca_probe_16(arg2 * 4)
    int32_t* var_14 = &var_10
    int32_t eax_3 = sub_5a881a(0x44)
    int128_t var_7f34[0x770]
    sub_5abfc0(&var_7f34, 0, 0x7700)
    long double x87_r7 = fconvert.t(arg4)
    long double x87_r5 = fconvert.t(-30f)
    long double x87_r4 = fconvert.t(999f)
    long double x87_r3 = fconvert.t(999.0)
    long double x87_r2 = fconvert.t(-30.0)
    var_10 = &var_7f34
    float* var_18_1 = ecx
    int32_t var_28 = 0x820408
    void* const var_24 = &data_8202ac
    
    while (true)
        void* ecx_2 = 2 - ecx + var_18_1
        void* const edx_1 = var_24
        void var_134
        float* esi_2 = &var_134
        int32_t edi_1 = 0x38
        long double x87_r1_14
        
        while (true)
            float var_8_1 = fconvert.s(x87_r4)
            
            if (ecx_2 - 2 s>= 0x58)
                var_8_1 = fconvert.s(x87_r5)
            else
                long double x87_r0_1 = fconvert.t(*(edx_1 - 4))
                x87_r0_1 - x87_r3
                void* eax_5
                eax_5.w = (x87_r0_1 < x87_r3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_1, x87_r3) ? 1 : 0) << 0xa
                    | (x87_r0_1 == x87_r3 ? 1 : 0) << 0xe | 0x800
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    var_8_1 = fconvert.s(fconvert.t(*(edx_1 - 4)))
            
            void* eax_6
            
            if (ecx_2 - 1 s>= 0x58)
                long double x87_r0_5 = fconvert.t(var_8_1)
                x87_r0_5 - x87_r2
                eax_6.w = (x87_r0_5 < x87_r2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_5, x87_r2) ? 1 : 0) << 0xa
                    | (x87_r0_5 == x87_r2 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_6:1.b & 0x41) == 0)
                    var_8_1 = fconvert.s(x87_r5)
                
                x87_r1_14 = x87_r7
                x87_r7 = x87_r4
            else
                long double x87_r1_11 = fconvert.t(var_8_1)
                long double x87_r0_4 = fconvert.t(*edx_1)
                x87_r0_4 - x87_r1_11
                eax_6.w = (x87_r0_4 < x87_r1_11 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_4, x87_r1_11) ? 1 : 0) << 0xa
                    | (x87_r0_4 == x87_r1_11 ? 1 : 0) << 0xe | 0x1000
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (not(p_2))
                    var_8_1 = fconvert.s(fconvert.t(*edx_1))
                
                x87_r1_14 = fconvert.t(arg4)
            
            if (ecx_2 s>= 0x58)
                long double x87_r0_7 = fconvert.t(var_8_1)
                x87_r0_7 - x87_r2
                eax_6.w = (x87_r0_7 < x87_r2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_7, x87_r2) ? 1 : 0) << 0xa
                    | (x87_r0_7 == x87_r2 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_6:1.b & 0x41) == 0)
                    var_8_1 = fconvert.s(x87_r5)
            else
                x87_r2 = x87_r1_14
                long double x87_r1_15 = fconvert.t(var_8_1)
                long double x87_r0_6 = fconvert.t(*(edx_1 + 4))
                x87_r0_6 - x87_r1_15
                eax_6.w = (x87_r0_6 < x87_r1_15 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_6, x87_r1_15) ? 1 : 0) << 0xa
                    | (x87_r0_6 == x87_r1_15 ? 1 : 0) << 0xe | 0x1000
                bool p_3 = unimplemented  {test ah, 0x5}
                
                if (not(p_3))
                    var_8_1 = fconvert.s(fconvert.t(*(edx_1 + 4)))
                
                x87_r1_14 = fconvert.t(arg4)
            
            ecx_2 += 1
            
            if (ecx_2 s>= 0x58)
                long double x87_r0_9 = fconvert.t(var_8_1)
                x87_r0_9 - x87_r2
                eax_6.w = (x87_r0_9 < x87_r2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_9, x87_r2) ? 1 : 0) << 0xa
                    | (x87_r0_9 == x87_r2 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_6:1.b & 0x41) == 0)
                    var_8_1 = fconvert.s(x87_r5)
            else
                x87_r2 = x87_r1_14
                long double x87_r1_18 = fconvert.t(var_8_1)
                long double x87_r0_8 = fconvert.t(*(edx_1 + 8))
                x87_r0_8 - x87_r1_18
                eax_6.w = (x87_r0_8 < x87_r1_18 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_8, x87_r1_18) ? 1 : 0) << 0xa
                    | (x87_r0_8 == x87_r1_18 ? 1 : 0) << 0xe | 0x1000
                bool p_4 = unimplemented  {test ah, 0x5}
                
                if (not(p_4))
                    var_8_1 = fconvert.s(fconvert.t(*(edx_1 + 8)))
                
                x87_r1_14 = fconvert.t(arg4)
            
            edx_1 += 4
            *esi_2 = fconvert.s(fconvert.t(var_8_1))
            esi_2 = &esi_2[1]
            int32_t temp1_1 = edi_1
            edi_1 -= 1
            
            if (temp1_1 == 1)
                break
            
            long double x87_r1_8 = x87_r7
            x87_r7 = x87_r1_14
            x87_r4 = x87_r1_8
        
        int128_t (* ebx_1)[0x770] = var_10
        long double x87_r6_3 = x87_r1_14
        __builtin_memcpy(&(*ebx_1)[0x1c], var_28, 0x540)
        __builtin_memcpy(ebx_1, var_28, 0xe0)
        __builtin_memcpy(&(*ebx_1)[0xe], var_28, 0xe0)
        int32_t i_15 = 8
        void* ecx_3 = ebx_1 + 4
        int32_t esi_6 = 0xf
        
        while (true)
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = sx.q(esi_6 + 1)
            float var_8_2 = fconvert.s(float.t((eax_8 ^ edx_3) - edx_3) * x87_r5 + x87_r6_3)
            long double x87_r4_5 = fconvert.t(var_8_2)
            x87_r4_5 - x87_r7
            int32_t eax_10
            eax_10.w = (x87_r4_5 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_5, x87_r7) ? 1 : 0) << 0xa
                | (x87_r4_5 == x87_r7 ? 1 : 0) << 0xe | 0x2000
            bool p_5 = unimplemented  {test ah, 0x5}
            
            if (p_5)
                goto label_64c24b
            
            long double x87_r4_6 = x87_r6_3
            x87_r6_3 = x87_r4_5
            x87_r4_6 - x87_r7
            eax_10.w = (x87_r4_6 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_6, x87_r7) ? 1 : 0) << 0xa
                | (x87_r4_6 == x87_r7 ? 1 : 0) << 0xe | 0x2000
            long double x87_r5_6
            long double x87_r7_3
            
            if ((eax_10:1.b & 0x41) != 0)
                x87_r4_5 = x87_r6_3
                x87_r6_3 = x87_r4_6
            label_64c24b:
                x87_r4_5 - x87_r7
                eax_10.w = (x87_r4_5 < x87_r7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_5, x87_r7) ? 1 : 0) << 0xa
                    | (x87_r4_5 == x87_r7 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax_10:1.b & 0x41) != 0)
                    x87_r5_6 = x87_r7
                    x87_r7_3 = x87_r5
                else
                    x87_r6_3 - x87_r7
                    eax_10.w = (x87_r6_3 < x87_r7 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7 ? 1 : 0) << 0xe | 0x2800
                    bool p_6 = unimplemented  {test ah, 0x5}
                    
                    if (p_6)
                        x87_r5_6 = x87_r7
                        x87_r7_3 = x87_r5
                    else
                        var_8_2 = fconvert.s(x87_r7)
                        x87_r7_3 = x87_r5
                        x87_r5_6 = x87_r7
            else
                x87_r5_6 = x87_r4_6
                x87_r7_3 = x87_r5
                var_8_2 = fconvert.s(x87_r5_6)
            
            int32_t eax_12
            int32_t edx_4
            edx_4:eax_12 = sx.q(esi_6)
            *(ecx_3 - 4) = fconvert.s(fconvert.t(*(ecx_3 - 4)) + fconvert.t(var_8_2))
            float var_8_3 = fconvert.s(float.t((eax_12 ^ edx_4) - edx_4) * x87_r7_3 + x87_r6_3)
            long double x87_r4_12 = fconvert.t(var_8_3)
            x87_r4_12 - x87_r5_6
            int32_t eax_14
            eax_14.w = (x87_r4_12 < x87_r5_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_12, x87_r5_6) ? 1 : 0) << 0xa
                | (x87_r4_12 == x87_r5_6 ? 1 : 0) << 0xe | 0x2000
            bool p_7 = unimplemented  {test ah, 0x5}
            
            if (p_7)
                goto label_64c2aa
            
            long double x87_r4_13 = x87_r6_3
            x87_r6_3 = x87_r4_12
            x87_r4_13 - x87_r5_6
            eax_14.w = (x87_r4_13 < x87_r5_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_13, x87_r5_6) ? 1 : 0) << 0xa
                | (x87_r4_13 == x87_r5_6 ? 1 : 0) << 0xe | 0x2000
            
            if ((eax_14:1.b & 0x41) != 0)
                x87_r4_12 = x87_r6_3
                x87_r6_3 = x87_r4_13
            label_64c2aa:
                x87_r4_12 - x87_r5_6
                eax_14.w = (x87_r4_12 < x87_r5_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_12, x87_r5_6) ? 1 : 0) << 0xa
                    | (x87_r4_12 == x87_r5_6 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax_14:1.b & 0x41) == 0)
                    x87_r5_6 - x87_r6_3
                    eax_14.w = (x87_r5_6 < x87_r6_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_6, x87_r6_3) ? 1 : 0) << 0xa
                        | (x87_r5_6 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
                    
                    if ((eax_14:1.b & 0x41) == 0)
                        var_8_3 = fconvert.s(x87_r5_6)
            else
                x87_r7_3 = x87_r4_13
                var_8_3 = fconvert.s(x87_r5_6)
            
            int32_t eax_16
            int32_t edx_5
            edx_5:eax_16 = sx.q(esi_6 - 1)
            *ecx_3 = fconvert.s(fconvert.t(*ecx_3) + fconvert.t(var_8_3))
            float var_8_4 = fconvert.s(float.t((eax_16 ^ edx_5) - edx_5) * x87_r7_3 + x87_r6_3)
            long double x87_r4_19 = fconvert.t(var_8_4)
            x87_r4_19 - x87_r5_6
            int32_t eax_18
            eax_18.w = (x87_r4_19 < x87_r5_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_19, x87_r5_6) ? 1 : 0) << 0xa
                | (x87_r4_19 == x87_r5_6 ? 1 : 0) << 0xe | 0x2000
            bool p_8 = unimplemented  {test ah, 0x5}
            
            if (p_8)
                goto label_64c2f8
            
            long double x87_r4_20 = x87_r6_3
            x87_r6_3 = x87_r4_19
            x87_r4_20 - x87_r5_6
            eax_18.w = (x87_r4_20 < x87_r5_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_20, x87_r5_6) ? 1 : 0) << 0xa
                | (x87_r4_20 == x87_r5_6 ? 1 : 0) << 0xe | 0x2000
            
            if ((eax_18:1.b & 0x41) != 0)
                x87_r4_19 = x87_r6_3
                x87_r6_3 = x87_r4_20
            label_64c2f8:
                x87_r4_19 - x87_r5_6
                eax_18.w = (x87_r4_19 < x87_r5_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_19, x87_r5_6) ? 1 : 0) << 0xa
                    | (x87_r4_19 == x87_r5_6 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax_18:1.b & 0x41) == 0)
                    x87_r5_6 - x87_r6_3
                    eax_18.w = (x87_r5_6 < x87_r6_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_6, x87_r6_3) ? 1 : 0) << 0xa
                        | (x87_r5_6 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
                    
                    if ((eax_18:1.b & 0x41) == 0)
                        var_8_4 = fconvert.s(x87_r5_6)
            else
                x87_r7_3 = x87_r4_20
                var_8_4 = fconvert.s(x87_r5_6)
            
            int32_t eax_20
            int32_t edx_6
            edx_6:eax_20 = sx.q(esi_6 - 2)
            *(ecx_3 + 4) = fconvert.s(fconvert.t(*(ecx_3 + 4)) + fconvert.t(var_8_4))
            float var_8_5 = fconvert.s(float.t((eax_20 ^ edx_6) - edx_6) * x87_r7_3 + x87_r6_3)
            long double x87_r4_26 = fconvert.t(var_8_5)
            x87_r4_26 - x87_r5_6
            int32_t eax_22
            eax_22.w = (x87_r4_26 < x87_r5_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_26, x87_r5_6) ? 1 : 0) << 0xa
                | (x87_r4_26 == x87_r5_6 ? 1 : 0) << 0xe | 0x2000
            bool p_9 = unimplemented  {test ah, 0x5}
            
            if (p_9)
                goto label_64c348
            
            long double x87_r4_27 = x87_r6_3
            x87_r6_3 = x87_r4_26
            x87_r4_27 - x87_r5_6
            eax_22.w = (x87_r4_27 < x87_r5_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_27, x87_r5_6) ? 1 : 0) << 0xa
                | (x87_r4_27 == x87_r5_6 ? 1 : 0) << 0xe | 0x2000
            
            if ((eax_22:1.b & 0x41) != 0)
                x87_r4_26 = x87_r6_3
                x87_r6_3 = x87_r4_27
            label_64c348:
                x87_r4_26 - x87_r5_6
                eax_22.w = (x87_r4_26 < x87_r5_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_26, x87_r5_6) ? 1 : 0) << 0xa
                    | (x87_r4_26 == x87_r5_6 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax_22:1.b & 0x41) == 0)
                    x87_r5_6 - x87_r6_3
                    eax_22.w = (x87_r5_6 < x87_r6_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_6, x87_r6_3) ? 1 : 0) << 0xa
                        | (x87_r5_6 == x87_r6_3 ? 1 : 0) << 0xe | 0x2800
                    
                    if ((eax_22:1.b & 0x41) == 0)
                        var_8_5 = fconvert.s(x87_r5_6)
            else
                x87_r7_3 = x87_r4_27
                var_8_5 = fconvert.s(x87_r5_6)
            
            esi_6 -= 4
            long double x87_r4_29 = fconvert.t(*(ecx_3 + 8)) + fconvert.t(var_8_5)
            ecx_3 += 0x10
            *(ecx_3 - 8) = fconvert.s(x87_r4_29)
            
            if (esi_6 s> 0xffffffd7)
                x87_r5 = x87_r7_3
                x87_r7 = x87_r5_6
            else
                int32_t i_16 = i_15
                i_15 -= 1
                
                if (i_16 == 1)
                    break
                
                x87_r5 = x87_r7_3
                x87_r7 = x87_r5_6
                esi_6 = 0xf
        
        float* ecx_4 = var_18_1
        int32_t i_8 = i_15
        void var_834
        void* ebx_2 = &var_834
        long double x87_r7_7 = fconvert.t(*ecx_4) + fconvert.t(100.0)
        var_10 = var_10
        double var_40_1 = fconvert.d(x87_r7_7)
        int32_t edx_9
        int32_t i
        
        do
            int32_t i_14 = 2
            
            if (i_8 s>= 2)
                i_14 = i_8
            
            int128_t (* edx_8)[0x770] = var_10
            float* var_14_2 = ecx_4
            sub_64bfb0(edx_8, 
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_40_1) - float.t(i_14) * fconvert.t(10.0)
                    - fconvert.t(30.0)))))
            __builtin_memcpy(ebx_2, &var_134, 0xe0)
            sub_64bfb0(ebx_2, 
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(100.0) - float.t(i_8) * fconvert.t(10.0)
                    - fconvert.t(30.0)))))
            ecx_4, edx_9 = sub_64bf40(edx_8, edx_8, ebx_2)
            var_10 = &(*var_10)[0xe]
            i = i_8 + 1
            ebx_2 += 0xe0
            i_8 = i
        while (i s< 8)
        int128_t* edi_6 = &(*ebx_1)[0xe]
        void var_754
        void* esi_7 = &var_754
        int32_t i_13 = 7
        int32_t i_1
        
        do
            edx_9 = sub_64bed0(esi_7, sub_64bed0(esi_7 - 0xe0, edx_9, esi_7), edi_6)
            esi_7 += 0xe0
            edi_6 = &edi_6[0xe]
            i_1 = i_13
            i_13 -= 1
        while (i_1 != 1)
        var_28 += 0x540
        var_18_1 = &var_18_1[1]
        void* eax_31 = var_24 + 0x10
        var_24 = eax_31
        var_10 = var_10
        
        if (eax_31 s>= 0x8203bc)
            break
        
        x87_r4 = fconvert.t(999f)
        x87_r7 = fconvert.t(arg4)
        x87_r5 = fconvert.t(-30f)
        x87_r3 = fconvert.t(999.0)
        x87_r2 = fconvert.t(-30.0)
    
    float* esi_8 = nullptr
    float* var_c_7 = nullptr
    long double result
    
    while (true)
        int32_t eax_32 = sub_5a881a(0x20)
        long double x87_r7_19 = float.t(var_c_7) * fconvert.t(0.5)
        *(eax_3 + (esi_8 << 2)) = eax_32
        double var_40_2 = fconvert.d(x87_r7_19)
        var_18_1.q = fconvert.d((x87_r7_19 + fconvert.t(5.9657840728759766))
            * fconvert.t(0.69314700365066528) / fconvert.t(arg1))
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_2
        long double st0_1
        st0_1, x87control_2 = sub_686950(mxcsr, sub_6870ac(mxcsr, x87control), var_18_1)
        int32_t eax_33 = sub_685f40(st0_1)
        int16_t x87control_3
        long double st0_2
        st0_2, x87control_3 =
            sub_686ac0(mxcsr, x87control_2, float.t(eax_33) * fconvert.t(arg1) + fconvert.t(1.0))
        long double x87_r7_29 = st0_2 * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)
        var_18_1.q = fconvert.d(x87_r7_29 + x87_r7_29)
        int16_t x87control_4
        long double st0_3
        st0_3, x87control_4 = sub_5aaa90(mxcsr, x87control_3, var_18_1)
        var_10 = sub_685f40(st0_3)
        int16_t x87control_5
        long double st0_4
        st0_4, x87control_5 = sub_686ac0(mxcsr, x87control_4, float.t(eax_33 + 1) * fconvert.t(arg1))
        long double x87_r7_36 = st0_4 * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)
        var_18_1.q = fconvert.d(x87_r7_36 + x87_r7_36)
        long double st0_5
        st0_5, x87control = sub_686950(mxcsr, x87control_5, var_18_1)
        int32_t var_28_1 = sub_685f40(st0_5)
        
        if (var_10 s> esi_8)
            var_10 = esi_8
        
        if (var_10 s< 0)
            var_10 = nullptr
        
        if (var_28_1 s>= 0x11)
            var_28_1 = 0x10
        
        int32_t var_20_1 = 0
        int32_t eax_36 = *(eax_3 + (esi_8 << 2))
        var_18_1 = esi_8 + 1
        
        while (true)
            uint32_t var_14_6 = 0xe8
            float* eax_37 = sub_5a881a(var_14_6)
            *(eax_32 + (var_20_1 << 2)) = eax_37
            int32_t edi_7
            int32_t ecx_11
            
            if (arg2 s> 0)
                edi_7, ecx_11 = __memfill_u32(var_14_6, 0x4479c000, arg2)
            int128_t (* eax_38)[0x770] = var_10
            int128_t (* var_c_10)[0x770] = eax_38
            int32_t __saved_ebp
            
            if (eax_38 s<= var_28_1)
                int32_t eax_40 = var_20_1 + (eax_38 << 3)
                int32_t var_24_1 = eax_40 * 0x38
                void* var_1c_1 = &(&__saved_ebp)[eax_40 * 0x38 - 0x1f95]
                void* eax_56
                
                do
                    int32_t j = 0
                    int32_t i_9 = 0
                    double var_4c_1 = fconvert.d(float.t(var_c_10) * fconvert.t(0.5))
                    void* i_2
                    
                    do
                        long double x87_r7_43 = float.t(i_9) * fconvert.t(0.125) + fconvert.t(var_4c_1)
                        double var_34_1 = fconvert.d(x87_r7_43)
                        int16_t x87control_6 = sub_6870ac(mxcsr, x87control)
                        int32_t j_1 = sub_685f40((x87_r7_43 - fconvert.t(2.0625)
                            + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                            / fconvert.t(arg1))
                        x87control = sub_6870ac(mxcsr, x87control_6)
                        int32_t eax_42 = sub_685f40((fconvert.t(var_34_1) - fconvert.t(1.9375)
                            + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                            / fconvert.t(arg1) + fconvert.t(1.0))
                        int32_t edx_15 = eax_42
                        int32_t var_30_2 = eax_42
                        
                        if (j_1 s< 0)
                            j_1 = 0
                        
                        if (j_1 s> arg2)
                            j_1 = arg2
                        
                        if (j_1 s< j)
                            j = j_1
                        
                        if (edx_15 s< 0)
                            edx_15 = 0
                            var_30_2 = 0
                        
                        if (edx_15 s> arg2)
                            edx_15 = arg2
                            var_30_2 = edx_15
                        
                        if (j s< edx_15)
                            int32_t eax_45
                            
                            if (edx_15 - j s>= 4)
                                int32_t edi_10 = j + 2
                                void* ecx_21 = var_14_6 + (edi_10 << 2)
                                
                                do
                                    if (j s>= arg2)
                                        goto label_64c773
                                    
                                    long double x87_r7_54 = fconvert.t(*(ecx_21 - 8))
                                    int32_t edx_17 = var_24_1 + i_9
                                    long double x87_r6_7 = fconvert.t(*(&var_7f34 + (edx_17 << 2)))
                                    x87_r6_7 - x87_r7_54
                                    eax_45.w = (x87_r6_7 < x87_r7_54 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_7, x87_r7_54) ? 1 : 0) << 0xa
                                        | (x87_r6_7 == x87_r7_54 ? 1 : 0) << 0xe
                                    bool p_10 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_10))
                                        *(ecx_21 - 8) =
                                            fconvert.s(fconvert.t((&__saved_ebp)[edx_17 - 0x1fcc]))
                                    
                                    if (edi_10 - 1 s>= arg2)
                                        j += 1
                                        goto label_64c773
                                    
                                    long double x87_r7_56 = fconvert.t(*(ecx_21 - 4))
                                    long double x87_r6_8 = fconvert.t((&__saved_ebp)[edx_17 - 0x1fcc])
                                    x87_r6_8 - x87_r7_56
                                    int32_t eax_46
                                    eax_46.w = (x87_r6_8 < x87_r7_56 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_8, x87_r7_56) ? 1 : 0) << 0xa
                                        | (x87_r6_8 == x87_r7_56 ? 1 : 0) << 0xe
                                    bool p_11 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_11))
                                        *(ecx_21 - 4) =
                                            fconvert.s(fconvert.t((&__saved_ebp)[edx_17 - 0x1fcc]))
                                    
                                    if (edi_10 s>= arg2)
                                        j += 2
                                        goto label_64c773
                                    
                                    long double x87_r7_58 = fconvert.t(*ecx_21)
                                    long double x87_r6_9 = fconvert.t((&__saved_ebp)[edx_17 - 0x1fcc])
                                    x87_r6_9 - x87_r7_58
                                    eax_46.w = (x87_r6_9 < x87_r7_58 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_9, x87_r7_58) ? 1 : 0) << 0xa
                                        | (x87_r6_9 == x87_r7_58 ? 1 : 0) << 0xe
                                    bool p_12 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_12))
                                        *ecx_21 =
                                            fconvert.s(fconvert.t((&__saved_ebp)[edx_17 - 0x1fcc]))
                                    
                                    if (edi_10 + 1 s>= arg2)
                                        j += 3
                                        goto label_64c773
                                    
                                    long double x87_r7_60 = fconvert.t(*(ecx_21 + 4))
                                    long double x87_r6_10 = fconvert.t((&__saved_ebp)[edx_17 - 0x1fcc])
                                    x87_r6_10 - x87_r7_60
                                    int32_t eax_47
                                    eax_47.w = (x87_r6_10 < x87_r7_60 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_10, x87_r7_60) ? 1 : 0) << 0xa
                                        | (x87_r6_10 == x87_r7_60 ? 1 : 0) << 0xe
                                    bool p_13 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_13))
                                        *(ecx_21 + 4) =
                                            fconvert.s(fconvert.t((&__saved_ebp)[edx_17 - 0x1fcc]))
                                    
                                    edx_15 = var_30_2
                                    j += 4
                                    ecx_21 += 0x10
                                    edi_10 += 4
                                while (j s< edx_15 - 3)
                            
                            if (j s< edx_15)
                                while (j s< arg2)
                                    long double x87_r7_62 = fconvert.t(*(var_14_6 + (j << 2)))
                                    int32_t ecx_23 = i_9 + var_24_1
                                    long double x87_r6_11 = fconvert.t(*(&var_7f34 + (ecx_23 << 2)))
                                    x87_r6_11 - x87_r7_62
                                    eax_45.w = (x87_r6_11 < x87_r7_62 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_11, x87_r7_62) ? 1 : 0) << 0xa
                                        | (x87_r6_11 == x87_r7_62 ? 1 : 0) << 0xe
                                    bool p_14 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_14))
                                        *(var_14_6 + (j << 2)) =
                                            fconvert.s(fconvert.t((&__saved_ebp)[ecx_23 - 0x1fcc]))
                                    
                                    j += 1
                                    
                                    if (j s>= edx_15)
                                        break
                        
                    label_64c773:
                        i_2 = i_9 + 1
                        i_9 = i_2
                    while (i_2 s< 0x38)
                    
                    if (j s< arg2)
                        if (arg2 - j s>= 4)
                            int32_t i_12 = ((arg2 - j - 4) u>> 2) + 1
                            void* ecx_25 = var_14_6 + (j << 2) + 8
                            j += i_12 << 2
                            void* ecx_26 = ecx_25
                            int32_t i_3
                            
                            do
                                long double x87_r7_64 = fconvert.t(*(ecx_26 - 8))
                                long double x87_r6_12 = fconvert.t(*var_1c_1)
                                x87_r6_12 - x87_r7_64
                                void* eax_49
                                eax_49.w = (x87_r6_12 < x87_r7_64 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_12, x87_r7_64) ? 1 : 0) << 0xa
                                    | (x87_r6_12 == x87_r7_64 ? 1 : 0) << 0xe
                                bool p_15 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_15))
                                    *(ecx_26 - 8) = fconvert.s(fconvert.t(*var_1c_1))
                                
                                long double x87_r7_66 = fconvert.t(*(ecx_26 - 4))
                                long double x87_r6_13 = fconvert.t(*var_1c_1)
                                x87_r6_13 - x87_r7_66
                                void* eax_51
                                eax_51.w = (x87_r6_13 < x87_r7_66 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_13, x87_r7_66) ? 1 : 0) << 0xa
                                    | (x87_r6_13 == x87_r7_66 ? 1 : 0) << 0xe
                                bool p_16 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_16))
                                    *(ecx_26 - 4) = fconvert.s(fconvert.t(*var_1c_1))
                                
                                long double x87_r7_68 = fconvert.t(*ecx_26)
                                long double x87_r6_14 = fconvert.t(*var_1c_1)
                                x87_r6_14 - x87_r7_68
                                void* eax_53
                                eax_53.w = (x87_r6_14 < x87_r7_68 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_14, x87_r7_68) ? 1 : 0) << 0xa
                                    | (x87_r6_14 == x87_r7_68 ? 1 : 0) << 0xe
                                bool p_17 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_17))
                                    *ecx_26 = fconvert.s(fconvert.t(*var_1c_1))
                                
                                long double x87_r7_70 = fconvert.t(*(ecx_26 + 4))
                                long double x87_r6_15 = fconvert.t(*var_1c_1)
                                x87_r6_15 - x87_r7_70
                                i_2.w = (x87_r6_15 < x87_r7_70 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_15, x87_r7_70) ? 1 : 0) << 0xa
                                    | (x87_r6_15 == x87_r7_70 ? 1 : 0) << 0xe
                                bool p_18 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_18))
                                    *(ecx_26 + 4) = fconvert.s(fconvert.t(*var_1c_1))
                                
                                ecx_26 += 0x10
                                i_3 = i_12
                                i_12 -= 1
                            while (i_3 != 1)
                        
                        if (j s< arg2)
                            float* ecx_27 = var_1c_1
                            
                            do
                                long double x87_r7_72 = fconvert.t(*(var_14_6 + (j << 2)))
                                long double x87_r6_16 = fconvert.t(*ecx_27)
                                x87_r6_16 - x87_r7_72
                                i_2.w = (x87_r6_16 < x87_r7_72 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_16, x87_r7_72) ? 1 : 0) << 0xa
                                    | (x87_r6_16 == x87_r7_72 ? 1 : 0) << 0xe
                                bool p_19 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_19))
                                    *(var_14_6 + (j << 2)) = fconvert.s(fconvert.t(*ecx_27))
                                
                                j += 1
                            while (j s< arg2)
                    
                    var_24_1 += 0x1c0
                    var_1c_1 += 0x700
                    eax_56 = var_c_10 + 1
                    var_c_10 = eax_56
                while (eax_56 s<= var_28_1)
            
            uint32_t ebx_8 = var_14_6
            
            if (var_18_1 s< 0x11)
                int32_t esi_9 = 0
                int32_t var_8_6 = 0
                
                while (true)
                    long double x87_r7_76 = float.t(var_8_6) * fconvert.t(0.125) + fconvert.t(var_40_2)
                    double var_4c_2 = fconvert.d(x87_r7_76)
                    int16_t x87control_7 = sub_6870ac(mxcsr, x87control)
                    int32_t edi_13 = sub_685f40((x87_r7_76 - fconvert.t(2.0625)
                        + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                        / fconvert.t(arg1))
                    x87control = sub_6870ac(mxcsr, x87control_7)
                    int32_t eax_58 = sub_685f40((fconvert.t(var_4c_2) - fconvert.t(1.9375)
                        + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                        / fconvert.t(arg1) + fconvert.t(1.0))
                    int32_t edx_25 = eax_58
                    int32_t var_c_11 = eax_58
                    
                    if (edi_13 s< 0)
                        edi_13 = 0
                    
                    if (edi_13 s> arg2)
                        edi_13 = arg2
                    
                    if (edi_13 s< esi_9)
                        esi_9 = edi_13
                    
                    if (edx_25 s< 0)
                        edx_25 = 0
                        var_c_11 = 0
                    
                    if (edx_25 s> arg2)
                        edx_25 = arg2
                        var_c_11 = edx_25
                    
                    if (esi_9 s< edx_25)
                        if (edx_25 - esi_9 s>= 4)
                            int32_t edi_14 = esi_9 + 2
                            int32_t ecx_30 = ebx_8 + (edi_14 << 2)
                            
                            while (true)
                                if (esi_9 s>= arg2)
                                    goto label_64ca16
                                
                                long double x87_r7_87 = fconvert.t(*(ecx_30 - 8))
                                int32_t edx_29 = var_8_6 + (var_20_1 + (var_18_1 << 3)) * 0x38
                                long double x87_r6_17 = fconvert.t(*(&var_7f34 + (edx_29 << 2)))
                                x87_r6_17 - x87_r7_87
                                int32_t eax_62
                                eax_62.w = (x87_r6_17 < x87_r7_87 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_17, x87_r7_87) ? 1 : 0) << 0xa
                                    | (x87_r6_17 == x87_r7_87 ? 1 : 0) << 0xe
                                bool p_20 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_20))
                                    *(ecx_30 - 8) =
                                        fconvert.s(fconvert.t((&__saved_ebp)[edx_29 - 0x1fcc]))
                                
                                if (edi_14 - 1 s>= arg2)
                                    esi_9 += 1
                                else
                                    long double x87_r7_89 = fconvert.t(*(ecx_30 - 4))
                                    long double x87_r6_18 = fconvert.t((&__saved_ebp)[edx_29 - 0x1fcc])
                                    x87_r6_18 - x87_r7_89
                                    int32_t eax_63
                                    eax_63.w = (x87_r6_18 < x87_r7_89 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_18, x87_r7_89) ? 1 : 0) << 0xa
                                        | (x87_r6_18 == x87_r7_89 ? 1 : 0) << 0xe
                                    bool p_21 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_21))
                                        *(ecx_30 - 4) =
                                            fconvert.s(fconvert.t((&__saved_ebp)[edx_29 - 0x1fcc]))
                                    
                                    if (edi_14 s>= arg2)
                                        esi_9 += 2
                                    else
                                        long double x87_r7_91 = fconvert.t(*ecx_30)
                                        long double x87_r6_19 =
                                            fconvert.t((&__saved_ebp)[edx_29 - 0x1fcc])
                                        x87_r6_19 - x87_r7_91
                                        eax_63.w = (x87_r6_19 < x87_r7_91 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r6_19, x87_r7_91) ? 1 : 0) << 0xa
                                            | (x87_r6_19 == x87_r7_91 ? 1 : 0) << 0xe
                                        bool p_22 = unimplemented  {test ah, 0x5}
                                        
                                        if (not(p_22))
                                            *ecx_30 =
                                                fconvert.s(fconvert.t((&__saved_ebp)[edx_29 - 0x1fcc]))
                                        
                                        if (edi_14 + 1 s>= arg2)
                                            esi_9 += 3
                                        else
                                            long double x87_r7_93 = fconvert.t(*(ecx_30 + 4))
                                            long double x87_r6_20 =
                                                fconvert.t((&__saved_ebp)[edx_29 - 0x1fcc])
                                            x87_r6_20 - x87_r7_93
                                            int32_t eax_64
                                            eax_64.w = (x87_r6_20 < x87_r7_93 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_20, x87_r7_93) ? 1 : 0) << 0xa
                                                | (x87_r6_20 == x87_r7_93 ? 1 : 0) << 0xe
                                            bool p_23 = unimplemented  {test ah, 0x5}
                                            
                                            if (not(p_23))
                                                *(ecx_30 + 4) = fconvert.s(fconvert.t((&__saved_ebp)[
                                                    edx_29 - 0x1fcc]))
                                            
                                            edx_25 = var_c_11
                                            ebx_8 = var_14_6
                                            esi_9 += 4
                                            ecx_30 += 0x10
                                            edi_14 += 4
                                            
                                            if (esi_9 s>= edx_25 - 3)
                                                break
                                            
                                            continue
                                
                                ebx_8 = var_14_6
                                goto label_64ca16
                        
                        if (esi_9 s< edx_25)
                            while (esi_9 s< arg2)
                                long double x87_r7_95 = fconvert.t(*(ebx_8 + (esi_9 << 2)))
                                int32_t ecx_34 = var_8_6 + (var_20_1 + (var_18_1 << 3)) * 0x38
                                long double x87_r6_21 = fconvert.t(*(&var_7f34 + (ecx_34 << 2)))
                                x87_r6_21 - x87_r7_95
                                int32_t eax_67
                                eax_67.w = (x87_r6_21 < x87_r7_95 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_21, x87_r7_95) ? 1 : 0) << 0xa
                                    | (x87_r6_21 == x87_r7_95 ? 1 : 0) << 0xe
                                bool p_24 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_24))
                                    *(ebx_8 + (esi_9 << 2)) =
                                        fconvert.s(fconvert.t((&__saved_ebp)[ecx_34 - 0x1fcc]))
                                
                                esi_9 += 1
                                
                                if (esi_9 s>= edx_25)
                                    break
                    
                label_64ca16:
                    int32_t eax_69 = var_8_6 + 1
                    var_8_6 = eax_69
                    
                    if (eax_69 s>= 0x38)
                        break
                
                if (esi_9 s< arg2)
                    if (arg2 - esi_9 s>= 4)
                        int32_t i_11 = ((arg2 - esi_9 - 4) u>> 2) + 1
                        void* edx_32 = ebx_8 + (esi_9 << 2) + 8
                        void* edi_19 = &(&__saved_ebp)[(var_20_1 + (var_18_1 << 3)) * 0x38 - 0x1f95]
                        esi_9 += i_11 << 2
                        int32_t i_4
                        
                        do
                            long double x87_r7_97 = fconvert.t(*(edx_32 - 8))
                            long double x87_r6_22 = fconvert.t(*edi_19)
                            x87_r6_22 - x87_r7_97
                            int32_t eax_71
                            eax_71.w = (x87_r6_22 < x87_r7_97 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_22, x87_r7_97) ? 1 : 0) << 0xa
                                | (x87_r6_22 == x87_r7_97 ? 1 : 0) << 0xe
                            bool p_25 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_25))
                                *(edx_32 - 8) = fconvert.s(fconvert.t(*edi_19))
                            
                            long double x87_r7_99 = fconvert.t(*(edx_32 - 4))
                            long double x87_r6_23 = fconvert.t(*edi_19)
                            x87_r6_23 - x87_r7_99
                            eax_71.w = (x87_r6_23 < x87_r7_99 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_23, x87_r7_99) ? 1 : 0) << 0xa
                                | (x87_r6_23 == x87_r7_99 ? 1 : 0) << 0xe
                            bool p_26 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_26))
                                *(edx_32 - 4) = fconvert.s(fconvert.t(*edi_19))
                            
                            long double x87_r7_101 = fconvert.t(*edx_32)
                            long double x87_r6_24 = fconvert.t(*edi_19)
                            x87_r6_24 - x87_r7_101
                            eax_71.w = (x87_r6_24 < x87_r7_101 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_24, x87_r7_101) ? 1 : 0) << 0xa
                                | (x87_r6_24 == x87_r7_101 ? 1 : 0) << 0xe
                            bool p_27 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_27))
                                *edx_32 = fconvert.s(fconvert.t(*edi_19))
                            
                            long double x87_r7_103 = fconvert.t(*(edx_32 + 4))
                            long double x87_r6_25 = fconvert.t(*edi_19)
                            x87_r6_25 - x87_r7_103
                            eax_71.w = (x87_r6_25 < x87_r7_103 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_25, x87_r7_103) ? 1 : 0) << 0xa
                                | (x87_r6_25 == x87_r7_103 ? 1 : 0) << 0xe
                            bool p_28 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_28))
                                *(edx_32 + 4) = fconvert.s(fconvert.t(*edi_19))
                            
                            edx_32 += 0x10
                            i_4 = i_11
                            i_11 -= 1
                        while (i_4 != 1)
                    
                    if (esi_9 s< arg2)
                        void* ecx_46 = &(&__saved_ebp)[(var_20_1 + (var_18_1 << 3)) * 0x38 - 0x1f95]
                        
                        do
                            long double x87_r7_105 = fconvert.t(*(ebx_8 + (esi_9 << 2)))
                            long double x87_r6_26 = fconvert.t(*ecx_46)
                            x87_r6_26 - x87_r7_105
                            int32_t eax_72
                            eax_72.w = (x87_r6_26 < x87_r7_105 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_26, x87_r7_105) ? 1 : 0) << 0xa
                                | (x87_r6_26 == x87_r7_105 ? 1 : 0) << 0xe
                            bool p_29 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_29))
                                *(ebx_8 + (esi_9 << 2)) = fconvert.s(fconvert.t(*ecx_46))
                            
                            esi_9 += 1
                        while (esi_9 s< arg2)
            
            int32_t i_5 = 0
            int32_t i_10 = 0
            float* esi_11 = *(eax_32 + (var_20_1 << 2)) + 8
            
            do
                x87control = sub_6870ac(mxcsr, x87control)
                int32_t eax_74 = sub_685f40((float.t(i_10) * fconvert.t(0.125) + fconvert.t(var_40_2)
                    - fconvert.t(2.0) + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
                    / fconvert.t(arg1))
                long double x87_r7_114
                
                if (eax_74 s< 0)
                    x87_r7_114 = fconvert.t(-999f)
                else if (eax_74 s< arg2)
                    x87_r7_114 = fconvert.t(*(ebx_8 + (eax_74 << 2)))
                else
                    x87_r7_114 = fconvert.t(-999f)
                
                i_5 += 1
                *esi_11 = fconvert.s(x87_r7_114)
                esi_11 = &esi_11[1]
                i_10 = i_5
            while (i_5 s< 0x38)
            
            result = fconvert.t(-200.0)
            int32_t i_6 = 0
            void* ecx_50 = *(eax_36 + (var_20_1 << 2)) + 0xc
            int32_t eax_75
            
            do
                long double x87_r6_27 = fconvert.t(*(ecx_50 - 4))
                x87_r6_27 - result
                eax_75.w = (x87_r6_27 < result ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_27, result) ? 1 : 0) << 0xa
                    | (x87_r6_27 == result ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_75:1.b & 0x41) == 0)
                    break
                
                long double x87_r6_28 = fconvert.t(*ecx_50)
                x87_r6_28 - result
                eax_75.w = (x87_r6_28 < result ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_28, result) ? 1 : 0) << 0xa
                    | (x87_r6_28 == result ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_75:1.b & 0x41) == 0)
                    i_6 += 1
                    break
                
                long double x87_r6_29 = fconvert.t(*(ecx_50 + 4))
                x87_r6_29 - result
                eax_75.w = (x87_r6_29 < result ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_29, result) ? 1 : 0) << 0xa
                    | (x87_r6_29 == result ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_75:1.b & 0x41) == 0)
                    i_6 += 2
                    break
                
                long double x87_r6_30 = fconvert.t(*(ecx_50 + 8))
                x87_r6_30 - result
                eax_75.w = (x87_r6_30 < result ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_30, result) ? 1 : 0) << 0xa
                    | (x87_r6_30 == result ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_75:1.b & 0x41) == 0)
                    i_6 += 3
                    break
                
                i_6 += 4
                ecx_50 += 0x10
            while (i_6 s< 0x10)
            
            int32_t i_7 = 0x37
            float* ecx_53 = *(eax_36 + (var_20_1 << 2)) + 0xe0
            *eax_37 = fconvert.s(float.t(i_6))
            
            do
                long double x87_r6_32 = fconvert.t(ecx_53[1])
                x87_r6_32 - result
                eax_75.w = (x87_r6_32 < result ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_32, result) ? 1 : 0) << 0xa
                    | (x87_r6_32 == result ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_75:1.b & 0x41) == 0)
                    break
                
                long double x87_r6_33 = fconvert.t(*ecx_53)
                x87_r6_33 - result
                eax_75.w = (x87_r6_33 < result ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_33, result) ? 1 : 0) << 0xa
                    | (x87_r6_33 == result ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_75:1.b & 0x41) == 0)
                    i_7 -= 1
                    break
                
                i_7 -= 2
                ecx_53 -= 8
            while (i_7 s> 0x11)
            
            edi_7 = var_20_1 + 1
            var_20_1 = edi_7
            eax_37[1] = fconvert.s(float.t(i_7))
            
            if (edi_7 s>= 8)
                break
        
        esi_8 = var_18_1
        var_c_7 = esi_8
        
        if (esi_8 s>= 0x11)
            break
    
    return result
}

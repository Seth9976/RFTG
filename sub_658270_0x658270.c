// 函数名称: sub_658270
// 虚拟地址: 0x658270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_658270(void* arg1, void* arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: float esi = arg4
    float esi = arg4
    int32_t edi = esi << 3
    __alloca_probe_16(edi + 8)
    int32_t __saved_edi
    int32_t* var_c = &__saved_edi
    __alloca_probe_16(edi)
    int32_t i = esi i+ 1
    
    if (i != 0)
        int32_t eax_2 = arg3
        void* edx_1 = arg1
        int32_t ecx_2 = eax_2 - i
        void* var_8_1 = edx_1 + (i << 2) + 8
        
        do
            var_8_1 -= 4
            long double x87_r6_1 = float.t(0)
            i -= 1
            ecx_2 += 1
            int32_t var_10_1 = ecx_2
            int32_t i_8 = i
            
            if (i s< eax_2)
                if (ecx_2 s>= 4)
                    void* ecx_3 = var_8_1
                    void* edx_2 = edx_1 + 8
                    int32_t j_1 = ((eax_2 - i - 4) u>> 2) + 1
                    i_8 = i + (j_1 << 2)
                    int32_t j
                    
                    do
                        ecx_3 += 0x10
                        long double x87_r5_2 = fconvert.t(*(edx_2 - 8)) * fconvert.t(*(ecx_3 - 0x18))
                        edx_2 += 0x10
                        j = j_1
                        j_1 -= 1
                        x87_r6_1 = x87_r6_1 + x87_r5_2
                            + fconvert.t(*(edx_2 - 0x14)) * fconvert.t(*(ecx_3 - 0x14))
                            + fconvert.t(*(edx_2 - 0x10)) * fconvert.t(*(ecx_3 - 0x10))
                            + fconvert.t(*(edx_2 - 0xc)) * fconvert.t(*(ecx_3 - 0xc))
                    while (j != 1)
                    ecx_2 = var_10_1
                    edx_1 = arg1
                    eax_2 = arg3
                
                if (i_8 s< eax_2)
                    float* ecx_6 = edx_1 + ((i_8 - i) << 2)
                    
                    do
                        long double x87_r5_9 = fconvert.t(*(edx_1 + (i_8 << 2)))
                        i_8 += 1
                        long double x87_r5_10 = x87_r5_9 * fconvert.t(*ecx_6)
                        ecx_6 = &ecx_6[1]
                        x87_r6_1 = x87_r6_1 + x87_r5_10
                    while (i_8 s< eax_2)
                    
                    ecx_2 = var_10_1
            
            *(var_c + (i << 3)) = fconvert.d(x87_r6_1)
        while (i != 0)
        
        esi = arg4
    
    int32_t edx_3 = 0
    long double x87_r7_3 = fconvert.t(*var_c) * fconvert.t(1.0000000001)
    int32_t var_8_2 = 0
    double var_18 = fconvert.d(x87_r7_3)
    long double x87_r6_7 = fconvert.t(*var_c) * fconvert.t(1.0000000000000001e-09) + fconvert.t(1e-10)
    int32_t var_2c
    
    if (esi s> 0)
        void* edi_1 = &var_c[-4]
        void* var_10_2 = edi_1
        var_18:4.d = &__saved_edi - var_c
        
        while (true)
            long double x87_r7_4 = fneg(fconvert.t(*(edi_1 + 0x18)))
            x87_r7_3 - x87_r6_7
            int32_t* eax_6
            eax_6.w = (x87_r7_3 < x87_r6_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_3, x87_r6_7) ? 1 : 0) << 0xa
                | (x87_r7_3 == x87_r6_7 ? 1 : 0) << 0xe | 0x2000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                var_18 = fconvert.d(x87_r6_7)
                var_2c = 0
                sub_5abfc0(&(&__saved_edi)[edx_3 * 2], var_2c.b, (esi i- edx_3) * 8)
                break
            
            int32_t esi_3 = 0
            
            if (edx_3 s>= 4)
                int32_t i_5 = ((edx_3 - 4) u>> 2) + 1
                void* eax_7 = &var_18:4
                void* ecx_8 = edi_1
                esi_3 = i_5 << 2
                int32_t i_1
                
                do
                    eax_7 += 0x20
                    long double x87_r3_2 = fconvert.t(*(ecx_8 + 0x10)) * fconvert.t(*(eax_7 - 0x30))
                    ecx_8 -= 0x20
                    i_1 = i_5
                    i_5 -= 1
                    x87_r7_4 = x87_r7_4 - x87_r3_2
                        - fconvert.t(*(ecx_8 + 0x28)) * fconvert.t(*(eax_7 - 0x28))
                        - fconvert.t(*(eax_7 - 0x20)) * fconvert.t(*(ecx_8 + 0x20))
                        - fconvert.t(*(ecx_8 + 0x18)) * fconvert.t(*(eax_7 - 0x18))
                while (i_1 != 1)
                edi_1 = var_10_2
                edx_3 = var_8_2
            
            if (esi_3 s< edx_3)
                void* eax_10 = &var_c[(edx_3 - esi_3) * 2]
                
                do
                    long double x87_r3_9 = fconvert.t(*(&__saved_edi + (esi_3 << 3)))
                    esi_3 += 1
                    long double x87_r3_10 = x87_r3_9 * fconvert.t(*eax_10)
                    eax_10 -= 8
                    x87_r7_4 = x87_r7_4 - x87_r3_10
                while (esi_3 s< edx_3)
            
            long double x87_r7_8 = x87_r7_4 / x87_r7_3
            int32_t esi_4 = 0
            *(&__saved_edi + (edx_3 << 3)) = fconvert.d(x87_r7_8)
            int32_t eax_12
            int32_t edx_6
            edx_6:eax_12 = sx.q(edx_3)
            eax_6 = (eax_12 - edx_6) s>> 1
            
            if (eax_6 s>= 4)
                void* edx_8 = var_18:4.d + edi_1
                int32_t i_9 = (&eax_6[-1] u>> 2) + 1
                void* ecx_10 = &var_18:4
                esi_4 = i_9 << 2
                int32_t i_2
                
                do
                    long double x87_r3_11 = fconvert.t(*(ecx_10 - 0x10))
                    ecx_10 += 0x20
                    long double x87_r2_1 = fconvert.t(*(edx_8 + 8))
                    edx_8 -= 0x20
                    i_2 = i_9
                    i_9 -= 1
                    *(ecx_10 - 0x30) = fconvert.d(x87_r2_1 * x87_r7_8 + fconvert.t(*(ecx_10 - 0x30)))
                    *(edx_8 + 0x28) = fconvert.d(x87_r3_11 * x87_r7_8 + fconvert.t(*(edx_8 + 0x28)))
                    long double x87_r3_14 = fconvert.t(*(ecx_10 - 0x28))
                    *(ecx_10 - 0x28) = fconvert.d(fconvert.t(*(edx_8 + 0x20)) * x87_r7_8
                        + fconvert.t(*(ecx_10 - 0x28)))
                    *(edx_8 + 0x20) = fconvert.d(x87_r3_14 * x87_r7_8 + fconvert.t(*(edx_8 + 0x20)))
                    long double x87_r3_17 = fconvert.t(*(ecx_10 - 0x20))
                    *(ecx_10 - 0x20) = fconvert.d(fconvert.t(*(edx_8 + 0x18)) * x87_r7_8
                        + fconvert.t(*(ecx_10 - 0x20)))
                    *(edx_8 + 0x18) = fconvert.d(x87_r3_17 * x87_r7_8 + fconvert.t(*(edx_8 + 0x18)))
                    long double x87_r3_20 = fconvert.t(*(ecx_10 - 0x18))
                    *(ecx_10 - 0x18) = fconvert.d(fconvert.t(*(edx_8 + 0x10)) * x87_r7_8
                        + fconvert.t(*(ecx_10 - 0x18)))
                    *(edx_8 + 0x10) = fconvert.d(x87_r3_20 * x87_r7_8 + fconvert.t(*(edx_8 + 0x10)))
                while (i_2 != 1)
                edi_1 = var_10_2
            
            if (esi_4 s< eax_6)
                double* ecx_13 = &(&__saved_edi)[(var_8_2 - esi_4) * 2 - 2]
                
                do
                    long double x87_r3_23 = fconvert.t(*(&__saved_edi + (esi_4 << 3)))
                    esi_4 += 1
                    long double x87_r2_13 = fconvert.t(*ecx_13)
                    ecx_13 -= 8
                    *(&var_2c + (esi_4 << 3)) =
                        fconvert.d(x87_r2_13 * x87_r7_8 + fconvert.t(*(&var_2c + (esi_4 << 3))))
                    ecx_13[1] = fconvert.d(x87_r3_23 * x87_r7_8 + fconvert.t(ecx_13[1]))
                while (esi_4 s< eax_6)
            
            if ((var_8_2.b & 1) != 0)
                *(&__saved_edi + (esi_4 << 3)) = fconvert.d(
                    fconvert.t(*(&__saved_edi + (esi_4 << 3))) * x87_r7_8
                    + fconvert.t(*(&__saved_edi + (esi_4 << 3))))
            
            esi = arg4
            int32_t edx_10 = var_8_2 + 1
            edi_1 += 8
            var_8_2 = edx_10
            var_10_2 = edi_1
            x87_r7_3 = x87_r7_3 * (float.t(1) - x87_r7_8 * x87_r7_8)
            
            if (edx_10 s>= esi)
                var_18 = fconvert.d(x87_r6_7)
                break
            
            edx_3 = var_8_2
    
    long double x87_r6_8 = fconvert.t(0.98999999999999999)
    int32_t ecx_15 = 0
    long double x87_r5_12 = x87_r6_8
    
    if (esi s>= 4)
        int32_t i_6 = ((esi - 4) u>> 2) + 1
        void* eax_19 = &var_18:4
        ecx_15 = i_6 << 2
        int32_t i_3
        
        do
            eax_19 += 0x20
            i_3 = i_6
            i_6 -= 1
            *(eax_19 - 0x30) = fconvert.d(x87_r5_12 * fconvert.t(*(eax_19 - 0x30)))
            long double x87_r5_13 = x87_r5_12 * x87_r6_8
            *(eax_19 - 0x28) = fconvert.d(fconvert.t(*(eax_19 - 0x28)) * x87_r5_13)
            long double x87_r5_14 = x87_r5_13 * x87_r6_8
            *(eax_19 - 0x20) = fconvert.d(x87_r5_14 * fconvert.t(*(eax_19 - 0x20)))
            long double x87_r5_15 = x87_r5_14 * x87_r6_8
            *(eax_19 - 0x18) = fconvert.d(fconvert.t(*(eax_19 - 0x18)) * x87_r5_15)
            x87_r5_12 = x87_r5_15 * x87_r6_8
        while (i_3 != 1)
    
    while (ecx_15 s< esi)
        long double x87_r4_15 = fconvert.t(*(&__saved_edi + (ecx_15 << 3)))
        ecx_15 += 1
        *(&var_2c + (ecx_15 << 3)) = fconvert.d(x87_r4_15 * x87_r5_12)
        x87_r5_12 = x87_r5_12 * x87_r6_8
    
    void* ecx_17 = arg2
    int32_t edi_4 = 0
    
    if (esi s>= 4)
        void* ecx_16 = ecx_17 + 8
        int32_t i_7 = ((esi - 4) u>> 2) + 1
        void* eax_20 = &var_18:4
        edi_4 = i_7 << 2
        int32_t i_4
        
        do
            long double x87_r6_9 = fconvert.t(*(eax_20 - 0x10))
            eax_20 += 0x20
            *(ecx_16 - 8) = fconvert.s(x87_r6_9)
            ecx_16 += 0x10
            i_4 = i_7
            i_7 -= 1
            *(ecx_16 - 0x14) = fconvert.s(fconvert.t(*(eax_20 - 0x28)))
            *(ecx_16 - 0x10) = fconvert.s(fconvert.t(*(eax_20 - 0x20)))
            *(ecx_16 - 0xc) = fconvert.s(fconvert.t(*(eax_20 - 0x18)))
        while (i_4 != 1)
        ecx_17 = arg2
    
    while (edi_4 s< esi)
        long double x87_r6_13 = fconvert.t(*(&__saved_edi + (edi_4 << 3)))
        edi_4 += 1
        *(ecx_17 + (edi_4 << 2) - 4) = fconvert.s(x87_r6_13)
    
    return fconvert.t(fconvert.s(x87_r6_8))
}

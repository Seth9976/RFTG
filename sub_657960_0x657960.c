// 函数名称: sub_657960
// 虚拟地址: 0x657960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_657960(void* arg1, float arg2, void* arg3, void* arg4, void* arg5)
{
    // 第一条实际指令: void* ebx = arg3
    void* ebx = arg3
    float esi
    float var_38 = esi
    float edi
    float var_3c = edi
    int32_t edi_1 = *(arg1 + 4)
    float var_30 = fconvert.s(fconvert.t(*(arg1 + 0xc)))
    int32_t var_1c = 0
    __alloca_probe_16(edi_1 << 2)
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(arg1 + 0x9c))
    int32_t eax_4 = (eax_2 - edx) s>> 1
    int32_t* var_c = &var_3c
    int32_t var_18 = 2
    
    if (eax_4 s>= 2)
        var_18 = eax_4
    
    float var_14 = fconvert.s(fconvert.t(*(arg2 i+ 0x3c)) - float.t(eax_4 - 2))
    long double x87_r7_3 = float.t(0)
    long double temp1 = fconvert.t(var_14)
    x87_r7_3 - temp1
    int32_t eax_5
    eax_5.w = (x87_r7_3 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax_5:1.b & 0x41) == 0)
        var_14 = fconvert.s(x87_r7_3)
    
    long double x87_r7_4 = fconvert.t(var_14)
    long double x87_r6 = fconvert.t(*(arg2 i+ 0x3c))
    x87_r6 - x87_r7_4
    eax_5.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        var_14 = fconvert.s(fconvert.t(*(arg2 i+ 0x3c)))
    
    int32_t eax_6 = 0
    
    if (edi_1 s>= 4)
        void* ecx_1 = ebx + 0xc
        void* ebx_1 = 0xfffffffc - &var_3c
        int32_t* eax_7 = &var_38
        int32_t edx_7 = ((edi_1 - 4) u>> 2) + 1
        int32_t edi_2 = edx_7 << 2
        void* var_28_1 = ebx_1
        
        while (true)
            void* edi_3 = ebx_1 + eax_7
            long double x87_r7_7 = fconvert.t(*(edi_3 + *(arg1 + 0x24))) * fconvert.t(*(ecx_1 - 0xc))
            ecx_1 += 0x10
            eax_7[-1] = fconvert.s(x87_r7_7)
            *eax_7 = fconvert.s(fconvert.t(*(ebx - &var_3c + eax_7))
                * fconvert.t(*(edi_3 + *(arg1 + 0x24) + 4)))
            long double x87_r7_11 =
                fconvert.t(*(4 - &var_3c + eax_7 + *(arg1 + 0x24))) * fconvert.t(*(ecx_1 - 0x14))
            float* edi_7 = 8 - &var_3c + eax_7
            eax_7 = &eax_7[4]
            int32_t temp2_1 = edx_7
            edx_7 -= 1
            eax_7[-3] = fconvert.s(x87_r7_11)
            eax_7[-2] = fconvert.s(fconvert.t(*(edi_7 + *(arg1 + 0x24))) * fconvert.t(*(ecx_1 - 0x10)))
            
            if (temp2_1 == 1)
                break
            
            ebx_1 = var_28_1
        
        eax_6 = edi_2
        ebx = arg3
    
    if (eax_6 s< edi_1)
        float* ecx_2 = &(&var_3c)[eax_6]
        
        do
            long double x87_r7_14 = fconvert.t(*(*(arg1 + 0x24) + (eax_6 << 2)))
            eax_6 += 1
            long double x87_r7_15 = x87_r7_14 * fconvert.t(*(ecx_2 + ebx - &var_3c))
            ecx_2 = &ecx_2[1]
            ecx_2[-1] = fconvert.s(x87_r7_15)
        while (eax_6 s< edi_1)
    
    sub_657410(arg1 + 0x10, &var_3c, &var_3c)
    long double x87_r7_16 = fconvert.t(var_3c)
    int32_t eax_8 = *(arg5 + 0x8c)
    float entry_ebx
    float var_24_2 = fconvert.s(x87_r7_16 * x87_r7_16
        + fconvert.t(var_38) * fconvert.t(0.69999999999999996) * fconvert.t(var_38)
        + fconvert.t(entry_ebx) * fconvert.t(0.20000000000000001) * fconvert.t(entry_ebx))
    float var_8_2
    long double x87_r7_20
    
    if (eax_8 != 0)
        long double x87_r6_10 = fconvert.t(var_24_2)
        x87_r7_20 = x87_r6_10
        long double x87_r6_12 = fconvert.t(fconvert.s(fconvert.t(*(arg5 + 0x84)) + x87_r6_10))
        *(arg5 + 0x84) = fconvert.s(x87_r6_12)
        var_8_2 = fconvert.s(x87_r6_12)
        *(arg5 + 0x88) = fconvert.s(x87_r7_20 + fconvert.t(*(arg5 + 0x88)))
    else
        x87_r7_20 = fconvert.t(var_24_2)
        long double x87_r6_9 = fconvert.t(fconvert.s(x87_r7_20 + fconvert.t(*(arg5 + 0x88))))
        *(arg5 + 0x84) = fconvert.s(x87_r6_9)
        var_8_2 = fconvert.s(x87_r6_9)
        *(arg5 + 0x88) = fconvert.s(x87_r7_20)
    
    *(arg5 + 0x84) = fconvert.s(fconvert.t(*(arg5 + 0x84)) - fconvert.t(*(arg5 + (eax_8 << 2) + 0x48)))
    *(arg5 + (eax_8 << 2) + 0x48) = fconvert.s(x87_r7_20)
    *(arg5 + 0x8c) += 1
    float var_8_3 = fconvert.s(fconvert.t(var_8_2) * fconvert.t(0.0625))
    
    if (*(arg5 + 0x8c) s>= 0xf)
        *(arg5 + 0x8c) = 0
    
    int32_t edx_11 = fconvert.s(fconvert.t(var_8_3)) & 0x7fffffff
    long double x87_r7_26 = float.t(edx_11)
    
    if (edx_11 s< 0)
        x87_r7_26 = x87_r7_26 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_17 = fconvert.t(7.1771142984289327e-07)
    int32_t eax_10
    int32_t edx_12
    edx_12:eax_10 = sx.q(edi_1)
    long double x87_r5_2 = fconvert.t(764.6162109375)
    int32_t edx_14 = (eax_10 - edx_12) s>> 1
    int32_t ecx_4 = 0
    long double x87_r4 = fconvert.t(0.5)
    float var_8_4 =
        fconvert.s(fconvert.t(fconvert.s(x87_r7_26 * x87_r6_17 - x87_r5_2)) * x87_r4 - fconvert.t(15.0))
    
    if (edx_14 s> 0)
        long double x87_r4_3 = fconvert.t(var_30)
        
        do
            long double x87_r2_1 = fconvert.t((&var_38)[ecx_4])
            long double x87_r1_1 = fconvert.t((&var_3c)[ecx_4])
            int32_t eax_13 = fconvert.s(x87_r2_1 * x87_r2_1 + x87_r1_1 * x87_r1_1) & 0x7fffffff
            long double x87_r2_4 = float.t(eax_13)
            
            if (eax_13 s< 0)
                x87_r2_4 = x87_r2_4 + fconvert.t(4.2949673e+09f)
            
            float var_10_2 =
                fconvert.s(fconvert.t(fconvert.s(x87_r2_4 * x87_r6_17 - x87_r5_2)) * x87_r4)
            long double x87_r2_9 = fconvert.t(var_10_2)
            long double x87_r1_3 = fconvert.t(var_8_4)
            x87_r1_3 - x87_r2_9
            eax_13.w = (x87_r1_3 < x87_r2_9 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_3, x87_r2_9) ? 1 : 0) << 0xa
                | (x87_r1_3 == x87_r2_9 ? 1 : 0) << 0xe | 0x800
            
            if ((eax_13:1.b & 0x41) == 0)
                var_10_2 = fconvert.s(x87_r2_9)
            
            long double x87_r1_4 = fconvert.t(var_10_2)
            x87_r1_4 - x87_r4_3
            eax_13.w = (x87_r1_4 < x87_r4_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_4, x87_r4_3) ? 1 : 0) << 0xa
                | (x87_r1_4 == x87_r4_3 ? 1 : 0) << 0xe | 0x1000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                var_10_2 = fconvert.s(x87_r4_3)
            
            (&var_3c)[ecx_4 s>> 1] = fconvert.s(fconvert.t(var_10_2))
            ecx_4 += 2
            var_8_4 = fconvert.s(x87_r2_9 - x87_r1_3)
        while (ecx_4 s< edx_14)
    
    long double result = fconvert.t(-99999f)
    long double x87_r4_5 = fconvert.t(var_14)
    int32_t i_1 = 0
    void* var_28_2 = arg2 i+ 0x20
    int32_t* var_24_3 = arg5 + 0x44
    void* ebx_9 = arg4 + 8
    int32_t i
    
    do
        int32_t esi_3 = *(ebx_9 - 4)
        int32_t edi_8 = 0
        float var_10_3 = fconvert.s(float.t(0))
        
        if (esi_3 s>= 4)
            void* ecx_8 = &var_c[*(ebx_9 - 8) + 2]
            void* eax_17 = *ebx_9 + 8
            int32_t j_4 = ((esi_3 - 4) u>> 2) + 1
            edi_8 = j_4 << 2
            int32_t j
            
            do
                eax_17 += 0x10
                long double x87_r3_4 = fconvert.t(*(ecx_8 - 8)) * fconvert.t(*(eax_17 - 0x18))
                ecx_8 += 0x10
                j = j_4
                j_4 -= 1
                arg2 = fconvert.s(fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(x87_r3_4 + fconvert.t(var_10_3)))
                    + fconvert.t(*(ecx_8 - 0x14)) * fconvert.t(*(eax_17 - 0x14))))
                    + fconvert.t(*(eax_17 - 0x10)) * fconvert.t(*(ecx_8 - 0x10)))
                var_10_3 = fconvert.s(fconvert.t(arg2)
                    + fconvert.t(*(ecx_8 - 0xc)) * fconvert.t(*(eax_17 - 0xc)))
            while (j != 1)
        
        if (edi_8 s< esi_3)
            void* eax_19 = *ebx_9 + (edi_8 << 2)
            void* ecx_11 = &var_c[*(ebx_9 - 8) + edi_8]
            int32_t j_5 = esi_3 - edi_8
            int32_t j_1
            
            do
                eax_19 += 4
                long double x87_r3_13 = fconvert.t(*ecx_11) * fconvert.t(*(eax_19 - 4))
                ecx_11 += 4
                j_1 = j_5
                j_5 -= 1
                var_10_3 = fconvert.s(x87_r3_13 + fconvert.t(var_10_3))
            while (j_1 != 1)
        
        int32_t ecx_12 = *var_24_3
        int32_t ecx_13 = ecx_12 - 1
        float var_8_5 = fconvert.s(result)
        arg2 = fconvert.s(fconvert.t(99999f))
        
        if (ecx_12 - 1 s< 0)
            ecx_13 += 0x11
        
        long double x87_r3_17 = fconvert.t(fconvert.s(fconvert.t(*(ebx_9 + 4)) * fconvert.t(var_10_3)))
        int32_t edx_22 = i_1 + ecx_13
        long double x87_r2_19 = fconvert.t(*(arg5 + (edx_22 << 2)))
        void* edx_23 = arg5 + (edx_22 << 2)
        x87_r2_19 - x87_r3_17
        void* eax_21
        eax_21.w = (x87_r2_19 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_19, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_19 == x87_r3_17 ? 1 : 0) << 0xe | 0x1800
        bool p_2 = unimplemented  {test ah, 0x5}
        float var_10_5
        
        if (p_2)
            var_10_5 = fconvert.s(fconvert.t(*edx_23))
        else
            var_10_5 = fconvert.s(x87_r3_17)
        
        long double x87_r2_21 = fconvert.t(*edx_23)
        x87_r2_21 - x87_r3_17
        eax_21.w = (x87_r2_21 < x87_r3_17 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_21, x87_r3_17) ? 1 : 0) << 0xa
            | (x87_r2_21 == x87_r3_17 ? 1 : 0) << 0xe | 0x1800
        float var_14_1
        
        if ((eax_21:1.b & 0x41) != 0)
            var_14_1 = fconvert.s(fconvert.t(*edx_23))
        else
            var_14_1 = fconvert.s(x87_r3_17)
        
        int32_t edi_9 = 0
        
        if (var_18 s>= 4)
            int32_t j_6 = ((var_18 - 4) u>> 2) + 1
            edi_9 = j_6 << 2
            int32_t j_2
            
            do
                void* edx_24 = edx_23 - 4
                int32_t ecx_14 = ecx_13 - 1
                
                if (ecx_13 - 1 s< 0)
                    ecx_14 += 0x11
                    edx_24 += 0x44
                
                long double x87_r2_23 = fconvert.t(var_8_5)
                long double x87_r1_6 = fconvert.t(*edx_24)
                x87_r1_6 - x87_r2_23
                eax_21.w = (x87_r1_6 < x87_r2_23 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_6, x87_r2_23) ? 1 : 0) << 0xa
                    | (x87_r1_6 == x87_r2_23 ? 1 : 0) << 0xe | 0x1800
                bool p_3 = unimplemented  {test ah, 0x5}
                
                if (p_3)
                    var_8_5 = fconvert.s(fconvert.t(*edx_24))
                
                long double x87_r2_25 = fconvert.t(arg2)
                long double x87_r1_7 = fconvert.t(*edx_24)
                x87_r1_7 - x87_r2_25
                eax_21.w = (x87_r1_7 < x87_r2_25 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_7, x87_r2_25) ? 1 : 0) << 0xa
                    | (x87_r1_7 == x87_r2_25 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_21:1.b & 0x41) != 0)
                    arg2 = fconvert.s(fconvert.t(*edx_24))
                
                void* edx_25 = edx_24 - 4
                int32_t ecx_15 = ecx_14 - 1
                
                if (ecx_14 - 1 s< 0)
                    ecx_15 += 0x11
                    edx_25 += 0x44
                
                long double x87_r2_27 = fconvert.t(var_8_5)
                long double x87_r1_8 = fconvert.t(*edx_25)
                x87_r1_8 - x87_r2_27
                eax_21.w = (x87_r1_8 < x87_r2_27 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_8, x87_r2_27) ? 1 : 0) << 0xa
                    | (x87_r1_8 == x87_r2_27 ? 1 : 0) << 0xe | 0x1800
                bool p_4 = unimplemented  {test ah, 0x5}
                
                if (p_4)
                    var_8_5 = fconvert.s(fconvert.t(*edx_25))
                
                long double x87_r2_29 = fconvert.t(arg2)
                long double x87_r1_9 = fconvert.t(*edx_25)
                x87_r1_9 - x87_r2_29
                eax_21.w = (x87_r1_9 < x87_r2_29 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_9, x87_r2_29) ? 1 : 0) << 0xa
                    | (x87_r1_9 == x87_r2_29 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_21:1.b & 0x41) != 0)
                    arg2 = fconvert.s(fconvert.t(*edx_25))
                
                float* edx_26 = edx_25 - 4
                int32_t ecx_16 = ecx_15 - 1
                
                if (ecx_15 - 1 s< 0)
                    ecx_16 += 0x11
                    edx_26 = &edx_26[0x11]
                
                long double x87_r2_31 = fconvert.t(var_8_5)
                long double x87_r1_10 = fconvert.t(*edx_26)
                x87_r1_10 - x87_r2_31
                eax_21.w = (x87_r1_10 < x87_r2_31 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_10, x87_r2_31) ? 1 : 0) << 0xa
                    | (x87_r1_10 == x87_r2_31 ? 1 : 0) << 0xe | 0x1800
                bool p_5 = unimplemented  {test ah, 0x5}
                
                if (p_5)
                    var_8_5 = fconvert.s(fconvert.t(*edx_26))
                
                long double x87_r2_33 = fconvert.t(arg2)
                long double x87_r1_11 = fconvert.t(*edx_26)
                x87_r1_11 - x87_r2_33
                eax_21.w = (x87_r1_11 < x87_r2_33 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_11, x87_r2_33) ? 1 : 0) << 0xa
                    | (x87_r1_11 == x87_r2_33 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_21:1.b & 0x41) != 0)
                    arg2 = fconvert.s(fconvert.t(*edx_26))
                
                edx_23 = edx_26 - 4
                ecx_13 = ecx_16 - 1
                
                if (ecx_16 - 1 s< 0)
                    ecx_13 += 0x11
                    edx_23 += 0x44
                
                long double x87_r2_35 = fconvert.t(var_8_5)
                long double x87_r1_12 = fconvert.t(*edx_23)
                x87_r1_12 - x87_r2_35
                eax_21.w = (x87_r1_12 < x87_r2_35 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_12, x87_r2_35) ? 1 : 0) << 0xa
                    | (x87_r1_12 == x87_r2_35 ? 1 : 0) << 0xe | 0x1800
                bool p_6 = unimplemented  {test ah, 0x5}
                
                if (p_6)
                    var_8_5 = fconvert.s(fconvert.t(*edx_23))
                
                long double x87_r2_37 = fconvert.t(arg2)
                long double x87_r1_13 = fconvert.t(*edx_23)
                x87_r1_13 - x87_r2_37
                eax_21.w = (x87_r1_13 < x87_r2_37 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_13, x87_r2_37) ? 1 : 0) << 0xa
                    | (x87_r1_13 == x87_r2_37 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_21:1.b & 0x41) != 0)
                    arg2 = fconvert.s(fconvert.t(*edx_23))
                
                j_2 = j_6
                j_6 -= 1
            while (j_2 != 1)
        
        if (edi_9 s< var_18)
            void* edx_29 = arg5 + ((i_1 + ecx_13) << 2)
            int32_t j_7 = var_18 - edi_9
            int32_t j_3
            
            do
                edx_29 -= 4
                int32_t temp7_1 = ecx_13
                ecx_13 -= 1
                
                if (temp7_1 - 1 s< 0)
                    ecx_13 += 0x11
                    edx_29 += 0x44
                
                long double x87_r2_39 = fconvert.t(var_8_5)
                long double x87_r1_14 = fconvert.t(*edx_29)
                x87_r1_14 - x87_r2_39
                void* eax_22
                eax_22.w = (x87_r1_14 < x87_r2_39 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_14, x87_r2_39) ? 1 : 0) << 0xa
                    | (x87_r1_14 == x87_r2_39 ? 1 : 0) << 0xe | 0x1800
                bool p_7 = unimplemented  {test ah, 0x5}
                
                if (p_7)
                    var_8_5 = fconvert.s(fconvert.t(*edx_29))
                
                long double x87_r2_41 = fconvert.t(arg2)
                long double x87_r1_15 = fconvert.t(*edx_29)
                x87_r1_15 - x87_r2_41
                eax_22.w = (x87_r1_15 < x87_r2_41 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_15, x87_r2_41) ? 1 : 0) << 0xa
                    | (x87_r1_15 == x87_r2_41 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_22:1.b & 0x41) != 0)
                    arg2 = fconvert.s(fconvert.t(*edx_29))
                
                j_3 = j_7
                j_7 -= 1
            while (j_3 != 1)
        
        float var_30_2 = fconvert.s(fconvert.t(var_14_1) - fconvert.t(arg2))
        *(arg5 + ((*var_24_3 + i_1) << 2)) = fconvert.s(x87_r3_17)
        *var_24_3 += 1
        
        if (*var_24_3 s>= 0x11)
            *var_24_3 = 0
        
        long double x87_r3_18 = fconvert.t(fconvert.s(fconvert.t(var_10_5) - fconvert.t(var_8_5)))
        float* esi_9 = var_28_2
        long double x87_r2_48 = fconvert.t(esi_9[-7]) + x87_r4_5
        x87_r2_48 - x87_r3_18
        int32_t eax_24
        eax_24.w = (x87_r2_48 < x87_r3_18 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_48, x87_r3_18) ? 1 : 0) << 0xa
            | (x87_r2_48 == x87_r3_18 ? 1 : 0) << 0xe | 0x2000
        bool p_8 = unimplemented  {test ah, 0x5}
        
        if (not(p_8))
            var_1c |= 5
        
        long double x87_r3_19 = fconvert.t(var_30_2)
        long double x87_r2_50 = fconvert.t(*esi_9) - x87_r4_5
        x87_r2_50 - x87_r3_19
        eax_24.w = (x87_r2_50 < x87_r3_19 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_50, x87_r3_19) ? 1 : 0) << 0xa
            | (x87_r2_50 == x87_r3_19 ? 1 : 0) << 0xe | 0x2000
        
        if ((eax_24:1.b & 0x41) == 0)
            var_1c |= 2
        
        i = i_1 + 0x24
        ebx_9 += 0x10
        i_1 = i
        var_24_3 = &var_24_3[0x24]
        var_28_2 = &esi_9[1]
    while (i s< 0xfc)
    return result
}

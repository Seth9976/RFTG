// 函数名称: sub_493160
// 虚拟地址: 0x493160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_493160(int32_t arg1, int128_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    double var_a1c = fconvert.d(fconvert.t(-1.0))
    long double x87_r7_1 = float.t(0)
    double var_a3c = fconvert.d(x87_r7_1)
    int32_t edx
    edx.b = arg4 == 0
    int32_t esi = edx
    int32_t i_8 = 0xffffffff
    int32_t var_a08 = 0
    int32_t var_a10 = esi
    void var_2e4
    sub_491fd0(arg2, &var_2e4, arg4)
    
    if (arg5 == 2)
        int32_t eax_3 = 0
        
        if (data_2691be0 s> 0)
            long double x87_r7_2 = float.t(1)
            long double x87_r6_1 = float.t(0)
            int32_t ecx_2 = esi * 0xb4
            int32_t edx_1 = *(ecx_2 + arg2 + 0x2c)
            
            while (true)
                long double x87_r6_2
                long double x87_r7_3
                
                if (*((eax_3 << 3) + &data_8c6820) != edx_1
                        || *((eax_3 << 3) + &data_8c6824) != *(ecx_2 + arg2 + 0x30))
                    *(&var_2e4 + (eax_3 << 3)) = fconvert.d(x87_r6_1)
                    x87_r6_2 = x87_r7_2
                    x87_r7_3 = x87_r6_1
                else
                    x87_r6_2 = x87_r7_2
                    x87_r7_3 = x87_r6_1
                    *(&var_2e4 + (eax_3 << 3)) = fconvert.d(x87_r6_2)
                
                eax_3 += 1
                
                if (eax_3 s>= data_2691be0)
                    break
                
                x87_r6_1 = x87_r7_3
                x87_r7_2 = x87_r6_2
    
    long double x87_r7_5 = fconvert.t(fconvert.d(x87_r7_1))
    int32_t i = 0
    void var_a04
    void var_9fc
    void var_2dc
    void var_2d4
    int64_t var_2cc[0x49]
    
    if (data_2691be0 s>= 4)
        void* edi_2 = &var_9fc
        void* ecx_3 = &var_a04
        
        do
            int32_t edx_2 = *((i << 3) + &data_8c6820)
            bool cond:1_1
            
            if (edx_2 == 0)
                cond:1_1 = *(esi * 0xb4 + arg2 + 0x3c) != edx_2.b
                esi = var_a10
            
            if (edx_2 != 0 || not(cond:1_1))
                if (edx_2.b s< 0 || (*((i << 3) + &data_8c6824) & 0x80) != 0)
                    int32_t edx_4 = esi * 0xb4
                    
                    if (*(edx_4 + arg2 + 0xa3) != 0 && *(edx_4 + arg2 + 0x3c) == 0)
                        goto label_49329f
                else
                label_49329f:
                    var_a08 += 1
                    *ecx_3 = fconvert.d(fconvert.t(*(&var_2e4 + (i << 3))))
                    *edi_2 = i
                    ecx_3 += 0x10
                    x87_r7_5 = x87_r7_5 + fconvert.t(*(&var_2e4 + (i << 3)))
                    edi_2 += 0x10
            
            int32_t edx_5 = *((i << 3) + &data_8c6828)
            bool cond:3_1
            
            if (edx_5 == 0)
                cond:3_1 = *(esi * 0xb4 + arg2 + 0x3c) != edx_5.b
                esi = var_a10
            
            if (edx_5 != 0 || not(cond:3_1))
                if (edx_5.b s< 0 || (*((i << 3) + &data_8c682c) & 0x80) != 0)
                    int32_t edx_7 = esi * 0xb4
                    
                    if (*(edx_7 + arg2 + 0xa3) != 0 && *(edx_7 + arg2 + 0x3c) == 0)
                        goto label_493301
                else
                label_493301:
                    var_a08 += 1
                    *ecx_3 = fconvert.d(fconvert.t(*(&var_2dc + (i << 3))))
                    *edi_2 = i + 1
                    x87_r7_5 = x87_r7_5 + fconvert.t(*(&var_2dc + (i << 3)))
                    ecx_3 += 0x10
                    edi_2 += 0x10
            
            int32_t edx_9 = *((i << 3) + &data_8c6830)
            bool cond:5_1
            
            if (edx_9 == 0)
                cond:5_1 = *(esi * 0xb4 + arg2 + 0x3c) != edx_9.b
                esi = var_a10
            
            if (edx_9 != 0 || not(cond:5_1))
                if (edx_9.b s< 0 || (*((i << 3) + &data_8c6834) & 0x80) != 0)
                    int32_t edx_11 = esi * 0xb4
                    
                    if (*(edx_11 + arg2 + 0xa3) != 0 && *(edx_11 + arg2 + 0x3c) == 0)
                        goto label_493366
                else
                label_493366:
                    var_a08 += 1
                    *ecx_3 = fconvert.d(fconvert.t(*(&var_2d4 + (i << 3))))
                    *edi_2 = i + 2
                    x87_r7_5 = x87_r7_5 + fconvert.t(*(&var_2d4 + (i << 3)))
                    ecx_3 += 0x10
                    edi_2 += 0x10
            
            int32_t edx_13 = *((i << 3) + &data_8c6838)
            bool cond:6_1
            
            if (edx_13 == 0)
                cond:6_1 = *(esi * 0xb4 + arg2 + 0x3c) != edx_13.b
                esi = var_a10
            
            if (edx_13 != 0 || not(cond:6_1))
                if (edx_13.b s< 0 || (*((i << 3) + &data_8c683c) & 0x80) != 0)
                    int32_t edx_15 = esi * 0xb4
                    
                    if (*(edx_15 + arg2 + 0xa3) != 0 && *(edx_15 + arg2 + 0x3c) == 0)
                        goto label_4933cb
                else
                label_4933cb:
                    var_a08 += 1
                    *ecx_3 = fconvert.d(fconvert.t(var_2cc[i]))
                    *edi_2 = i + 3
                    x87_r7_5 = x87_r7_5 + fconvert.t(var_2cc[i])
                    ecx_3 += 0x10
                    edi_2 += 0x10
            
            i += 4
        while (i s< data_2691be0 - 3)
    
    if (i s< data_2691be0)
        void* edx_21 = &(&__saved_ebp)[var_a08 * 4 - 0x27e]
        
        do
            int32_t ecx_4 = *((i << 3) + &data_8c6820)
            
            if (ecx_4 != 0 || *(esi * 0xb4 + arg2 + 0x3c) == ecx_4.b)
                if (ecx_4.b s< 0 || (*((i << 3) + &data_8c6824) & 0x80) != 0)
                    int32_t ecx_6 = esi * 0xb4
                    
                    if (*(ecx_6 + arg2 + 0xa3) != 0 && *(ecx_6 + arg2 + 0x3c) == 0)
                        goto label_493457
                else
                label_493457:
                    var_a08 += 1
                    *(edx_21 - 8) = fconvert.d(fconvert.t(*(&var_2e4 + (i << 3))))
                    *edx_21 = i
                    edx_21 += 0x10
                    x87_r7_5 = x87_r7_5 + fconvert.t(*(&var_2e4 + (i << 3)))
            
            i += 1
        while (i s< data_2691be0)
    
    int32_t edx_22 = 0
    
    if (var_a08 s>= 4)
        int32_t i_9 = ((var_a08 - 4) u>> 2) + 1
        void var_9f4
        void* eax_4 = &var_9f4
        edx_22 = i_9 << 2
        int32_t i_1
        
        do
            long double x87_r6_8 = fconvert.t(*(eax_4 - 0x10))
            eax_4 += 0x40
            i_1 = i_9
            i_9 -= 1
            *(eax_4 - 0x50) = fconvert.d(x87_r6_8 / x87_r7_5)
            *(eax_4 - 0x40) = fconvert.d(fconvert.t(*(eax_4 - 0x40)) / x87_r7_5)
            *(eax_4 - 0x30) = fconvert.d(fconvert.t(*(eax_4 - 0x30)) / x87_r7_5)
            *(eax_4 - 0x20) = fconvert.d(fconvert.t(*(eax_4 - 0x20)) / x87_r7_5)
        while (i_1 != 1)
    
    if (edx_22 s< var_a08)
        void* eax_7 = &(&__saved_ebp)[edx_22 * 4 - 0x280]
        int32_t i_10 = var_a08 - edx_22
        int32_t i_2
        
        do
            long double x87_r6_16 = fconvert.t(*eax_7)
            eax_7 += 0x10
            i_2 = i_10
            i_10 -= 1
            *(eax_7 - 0x10) = fconvert.d(x87_r6_16 / x87_r7_5)
        while (i_2 != 1)
    
    int32_t var_a54_1 = 0x10
    sub_5a7ac0(&var_a04, var_a08, 0x10, sub_492c10)
    int32_t edx_23 = data_2691be0
    
    if (edx_23 s> 0)
        __builtin_memset(&var_2e4, 0, (edx_23 & 0x1fffffff) * 8)
    
    long double x87_r7_6 = float.t(0)
    int32_t i_3 = 0
    double var_a2c_1 = fconvert.d(x87_r7_6)
    data_27e7a9c = 0
    int32_t eax_8
    
    if (edx_23 s> 0)
        void* edi_5 = &var_9fc
        
        do
            long double x87_r6_18 = fconvert.t(*(edi_5 - 8))
            var_a54_1.q = fconvert.d(x87_r7_6)
            void* var_a5c
            var_a5c.q = fconvert.d(x87_r6_18)
            *edi_5
            sub_492c40(edi_5, arg2, arg5, *arg3, var_a5c, var_a54_1)
            x87_r7_6 = fconvert.t(fconvert.d(x87_r6_18)) + fconvert.t(var_a2c_1)
            var_a2c_1 = fconvert.d(x87_r7_6)
            long double x87_r6_20 = fconvert.t(0.80000000000000004)
            x87_r6_20 - x87_r7_6
            eax_8.w = (x87_r6_20 < x87_r7_6 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_20, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_20 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                break
            
            int32_t ecx_14 = data_27e7a9c
            
            if (ecx_14 s> 0x32)
                long double x87_r6_21 = fconvert.t(0.69999999999999996)
                x87_r6_21 - x87_r7_6
                eax_8.w = (x87_r6_21 < x87_r7_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_21, x87_r7_6) ? 1 : 0) << 0xa
                    | (x87_r6_21 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (not(p_2))
                    sub_4c5680("AI Early out")
                    break
            
            if (ecx_14 s> 0xc8)
                sub_4c5680("AI Very early out: %g")
                break
            
            i_3 += 1
            edi_5 += 0x10
        while (i_3 s< data_2691be0)
    
    int32_t edi_6 = data_2691be0
    long double x87_r7_9 = fconvert.t(var_a1c)
    int32_t i_4 = 0
    
    if (edi_6 s>= 4)
        do
            long double temp4_1 = fconvert.t(*(&var_2e4 + (i_4 << 3)))
            x87_r7_9 - temp4_1
            eax_8.w = (x87_r7_9 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp4_1 ? 1 : 0) << 0xe | 0x3800
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                i_8 = i_4
                x87_r7_9 = fconvert.t(*(&var_2e4 + (i_4 << 3)))
            
            long double temp5_1 = fconvert.t(*(&var_2dc + (i_4 << 3)))
            x87_r7_9 - temp5_1
            eax_8.w = (x87_r7_9 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp5_1 ? 1 : 0) << 0xe | 0x3800
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (not(p_4))
                x87_r7_9 = fconvert.t(*(&var_2dc + (i_4 << 3)))
                i_8 = i_4 + 1
            
            long double temp6_1 = fconvert.t(*(&var_2d4 + (i_4 << 3)))
            x87_r7_9 - temp6_1
            eax_8.w = (x87_r7_9 < temp6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp6_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp6_1 ? 1 : 0) << 0xe | 0x3800
            bool p_5 = unimplemented  {test ah, 0x5}
            
            if (not(p_5))
                x87_r7_9 = fconvert.t(*(&var_2d4 + (i_4 << 3)))
                i_8 = i_4 + 2
            
            long double temp7_1 = fconvert.t(var_2cc[i_4])
            x87_r7_9 - temp7_1
            eax_8.w = (x87_r7_9 < temp7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp7_1 ? 1 : 0) << 0xe | 0x3800
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (not(p_6))
                x87_r7_9 = fconvert.t(var_2cc[i_4])
                i_8 = i_4 + 3
            
            i_4 += 4
        while (i_4 s< edi_6 - 3)
        
        var_a1c = fconvert.d(x87_r7_9)
    
    if (i_4 s< edi_6)
        do
            long double temp3_1 = fconvert.t(*(&var_2e4 + (i_4 << 3)))
            x87_r7_9 - temp3_1
            eax_8.w = (x87_r7_9 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp3_1 ? 1 : 0) << 0xe | 0x3800
            bool p_7 = unimplemented  {test ah, 0x5}
            
            if (not(p_7))
                i_8 = i_4
                x87_r7_9 = fconvert.t(*(&var_2e4 + (i_4 << 3)))
            
            i_4 += 1
        while (i_4 s< edi_6)
        
        var_a1c = fconvert.d(x87_r7_9)
    
    if (arg5 == 1)
        int32_t i_5 = 0
        int32_t var_84
        __builtin_memset(&var_84, 0, 0x78)
        int32_t var_7c
        void* j
        
        if (edi_6 s> 0)
            do
                int32_t edi_7 = *((i_5 << 3) + &data_8c6820)
                j = &data_8c6a84
                int32_t* ecx_15 = &var_7c
                
                do
                    int32_t edx_28 = *(j - 4)
                    
                    if (edx_28 == edi_7 || edx_28 == *((i_5 << 3) + &data_8c6824))
                        *(ecx_15 - 8) =
                            fconvert.d(fconvert.t(*(&var_2e4 + (i_5 << 3))) + fconvert.t(*(ecx_15 - 8)))
                    
                    int32_t edx_29 = *j
                    
                    if (edx_29 == edi_7 || edx_29 == *((i_5 << 3) + &data_8c6824))
                        *ecx_15 = fconvert.d(fconvert.t(*(&var_2e4 + (i_5 << 3))) + fconvert.t(*ecx_15))
                    
                    int32_t edx_30 = *(j + 4)
                    
                    if (edx_30 == edi_7 || edx_30 == *((i_5 << 3) + &data_8c6824))
                        *(ecx_15 + 8) =
                            fconvert.d(fconvert.t(*(&var_2e4 + (i_5 << 3))) + fconvert.t(*(ecx_15 + 8)))
                    
                    int32_t edx_31 = *(j + 8)
                    
                    if (edx_31 == edi_7 || edx_31 == *((i_5 << 3) + &data_8c6824))
                        *(ecx_15 + 0x10) = fconvert.d(fconvert.t(*(&var_2e4 + (i_5 << 3)))
                            + fconvert.t(*(ecx_15 + 0x10)))
                    
                    int32_t edx_32 = *(j + 0xc)
                    
                    if (edx_32 == edi_7 || edx_32 == *((i_5 << 3) + &data_8c6824))
                        *(ecx_15 + 0x18) = fconvert.d(fconvert.t(*(&var_2e4 + (i_5 << 3)))
                            + fconvert.t(*(ecx_15 + 0x18)))
                    
                    j += 0x14
                    ecx_15 = &ecx_15[0xa]
                while (j s< &data_8c6ac0)
                
                i_5 += 1
            while (i_5 s< data_2691be0)
        
        long double x87_r7_20 = fconvert.t(-1.0)
        int32_t i_12 = i_8
        void* i_6 = &data_8c6a84
        int32_t* ecx_16 = &var_7c
        
        do
            long double temp10_1 = fconvert.t(*(ecx_16 - 8))
            x87_r7_20 - temp10_1
            j.w = (x87_r7_20 < temp10_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_20, temp10_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp10_1 ? 1 : 0) << 0xe | 0x3800
            bool p_8 = unimplemented  {test ah, 0x5}
            
            if (not(p_8))
                i_12 = *(i_6 - 4)
                x87_r7_20 = fconvert.t(*(ecx_16 - 8))
            
            long double temp12_1 = fconvert.t(*ecx_16)
            x87_r7_20 - temp12_1
            j.w = (x87_r7_20 < temp12_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_20, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp12_1 ? 1 : 0) << 0xe | 0x3800
            bool p_9 = unimplemented  {test ah, 0x5}
            
            if (not(p_9))
                i_12 = *i_6
                x87_r7_20 = fconvert.t(*ecx_16)
            
            long double temp14_1 = fconvert.t(*(ecx_16 + 8))
            x87_r7_20 - temp14_1
            j.w = (x87_r7_20 < temp14_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_20, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp14_1 ? 1 : 0) << 0xe | 0x3800
            bool p_10 = unimplemented  {test ah, 0x5}
            
            if (not(p_10))
                i_12 = *(i_6 + 4)
                x87_r7_20 = fconvert.t(*(ecx_16 + 8))
            
            long double temp16_1 = fconvert.t(*(ecx_16 + 0x10))
            x87_r7_20 - temp16_1
            j.w = (x87_r7_20 < temp16_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_20, temp16_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp16_1 ? 1 : 0) << 0xe | 0x3800
            bool p_11 = unimplemented  {test ah, 0x5}
            
            if (not(p_11))
                i_12 = *(i_6 + 8)
                x87_r7_20 = fconvert.t(*(ecx_16 + 0x10))
            
            long double temp17_1 = fconvert.t(*(ecx_16 + 0x18))
            x87_r7_20 - temp17_1
            j.w = (x87_r7_20 < temp17_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_20, temp17_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == temp17_1 ? 1 : 0) << 0xe | 0x3800
            bool p_12 = unimplemented  {test ah, 0x5}
            
            if (not(p_12))
                i_12 = *(i_6 + 0xc)
                x87_r7_20 = fconvert.t(*(ecx_16 + 0x18))
            
            i_6 += 0x14
            ecx_16 = &ecx_16[0xa]
        while (i_6 s< &data_8c6ac0)
        
        *arg3 = i_12
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return j
    
    *arg3 = *((i_8 << 3) + &data_8c6820)
    arg3[1] = *((i_8 << 3) + &data_8c6824)
    void var_544
    int32_t eax_11
    int16_t x87control
    int80_t st0_1
    st0_1, eax_11, x87control = sub_491fd0(arg2, &var_544, arg4)
    int32_t ebx_2 = data_2691be0
    int32_t i_11 = 0xffffffff
    int32_t i_7 = 0
    data_2691bb0 = fconvert.d(fconvert.t(*(&var_544 + (i_8 << 3))) + fconvert.t(data_2691bb0))
    long double x87_r7_23 = fconvert.t(-1.0)
    
    if (ebx_2 s>= 4)
        int32_t i_13 = 2
        
        do
            long double temp9_1 = fconvert.t(*(&var_544 + (i_7 << 3)))
            x87_r7_23 - temp9_1
            eax_11.w = (x87_r7_23 < temp9_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_23, temp9_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp9_1 ? 1 : 0) << 0xe | 0x3800
            bool p_13 = unimplemented  {test ah, 0x5}
            
            if (not(p_13))
                i_11 = i_7
                x87_r7_23 = fconvert.t(*(&var_544 + (i_7 << 3)))
            
            void var_53c
            long double temp11_1 = fconvert.t(*(&var_53c + (i_7 << 3)))
            x87_r7_23 - temp11_1
            eax_11.w = (x87_r7_23 < temp11_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_23, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp11_1 ? 1 : 0) << 0xe | 0x3800
            bool p_14 = unimplemented  {test ah, 0x5}
            
            if (not(p_14))
                i_11 = i_13 - 1
                x87_r7_23 = fconvert.t(*(&var_53c + (i_7 << 3)))
            
            void var_534
            long double temp13_1 = fconvert.t(*(&var_534 + (i_7 << 3)))
            x87_r7_23 - temp13_1
            eax_11.w = (x87_r7_23 < temp13_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_23, temp13_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp13_1 ? 1 : 0) << 0xe | 0x3800
            bool p_15 = unimplemented  {test ah, 0x5}
            
            if (not(p_15))
                i_11 = i_13
                x87_r7_23 = fconvert.t(*(&var_534 + (i_7 << 3)))
            
            int64_t var_52c[0x49]
            long double temp15_1 = fconvert.t(var_52c[i_7])
            x87_r7_23 - temp15_1
            eax_11.w = (x87_r7_23 < temp15_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_23, temp15_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp15_1 ? 1 : 0) << 0xe | 0x3800
            bool p_16 = unimplemented  {test ah, 0x5}
            
            if (not(p_16))
                i_11 = i_13 + 1
                x87_r7_23 = fconvert.t(var_52c[i_7])
            
            i_7 += 4
            i_13 += 4
        while (i_7 s< ebx_2 - 3)
    
    for (; i_7 s< ebx_2; i_7 += 1)
        long double temp8_1 = fconvert.t(*(&var_544 + (i_7 << 3)))
        x87_r7_23 - temp8_1
        eax_11.w = (x87_r7_23 < temp8_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_23, temp8_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp8_1 ? 1 : 0) << 0xe | 0x3800
        bool p_17 = unimplemented  {test ah, 0x5}
        
        if (not(p_17))
            i_11 = i_7
            x87_r7_23 = fconvert.t(*(&var_544 + (i_7 << 3)))
    
    if (i_11 != i_8)
        data_2691bac += 1
    else
        data_2691bb8 += 1
    
    long double x87_r7_24 = fconvert.t(var_a1c)
    long double x87_r6_22 = float.t(0)
    x87_r6_22 - x87_r7_24
    eax_11.w = (x87_r6_22 < x87_r7_24 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_22, x87_r7_24) ? 1 : 0) << 0xa
        | (x87_r6_22 == x87_r7_24 ? 1 : 0) << 0xe
    bool p_18 = unimplemented  {test ah, 0x44}
    
    if (not(p_18))
        char const* const var_a50_2 = "Did not find any action choices!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    int32_t esi_7 = 0
    int32_t mxcsr
    
    if (ebx_2 s> 0)
        do
            long double x87_r7_27 =
                fconvert.t(*(&var_2e4 + (esi_7 << 3))) / fconvert.t(var_a1c) * fconvert.t(20.0)
            x87control = sub_6870ac(mxcsr, x87control)
            esi_7 += 1
            var_a3c = fconvert.d(x87_r7_27 + fconvert.t(var_a3c))
        while (esi_7 s< ebx_2)
    
    int32_t esi_8 = 0
    
    if (ebx_2 s> 0)
        do
            long double x87_r7_31 =
                fconvert.t(*(&var_2e4 + (esi_8 << 3))) / fconvert.t(var_a1c) * fconvert.t(20.0)
            x87control = sub_6870ac(mxcsr, x87control)
            esi_8 += 1
            void var_54c
            *(&var_54c + (esi_8 << 3)) = fconvert.d(x87_r7_31 / fconvert.t(var_a3c))
        while (esi_8 s< ebx_2)
    
    int128_t* eax_12 = sub_5abfc0(&data_2609940, 0, 0x40000)
    data_27e7a98 = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_12
}

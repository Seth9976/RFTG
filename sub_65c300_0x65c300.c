// 函数名称: sub_65c300
// 虚拟地址: 0x65c300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65c300(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, float arg6, float arg7, void* arg8)
{
    // 第一条实际指令: int32_t eax_1 = arg4 - arg1
    int32_t eax_1 = arg4 - arg1
    int32_t ecx = arg3 - arg5
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(ecx)
    int32_t temp0 = divs.dp.d(sx.q(ecx), eax_1)
    int32_t eax_7
    
    if (ecx s>= 0)
        eax_7 = temp0 + 1
    else
        eax_7 = temp0 - 1
    
    int32_t var_8 = arg5
    long double x87_r6 = fconvert.t(7.3142857551574707)
    int32_t var_18 = 0
    long double x87_r5 = fconvert.t(1023.5)
    int32_t eax_9 = sub_685f40(fconvert.t(*(arg6 i+ (arg1 << 2))) * x87_r6 + x87_r5)
    int32_t ecx_1
    
    if (eax_9 s<= 0x3ff)
        int32_t ecx_2
        ecx_2.b = eax_9 s< 0
        ecx_1 = (ecx_2 - 1) & eax_9
    else
        ecx_1 = 0x3ff
    
    int32_t eax_12
    int32_t edx_3
    edx_3:eax_12 = sx.q(temp0 * eax_1)
    int32_t esi_1 = arg5 - ecx_1
    int32_t ebx_5 = esi_1 * esi_1
    void* esi_2 = arg8
    int32_t var_10 = 1
    long double x87_r5_3 = fconvert.t(*(arg7 i+ (arg1 << 2))) + fconvert.t(*(esi_2 + 0x458))
    long double x87_r4 = fconvert.t(*(arg6 i+ (arg1 << 2)))
    x87_r4 - x87_r5_3
    int32_t eax_14
    eax_14.w = (x87_r4 < x87_r5_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r5_3) ? 1 : 0) << 0xa
        | (x87_r4 == x87_r5_3 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x41}
    long double x87_r4_1
    
    if (p)
    label_65c3ff:
        arg5 = arg1 + 1
        
        if (arg1 + 1 s< arg4)
            float* esi_3 = arg6 i+ ((arg1 + 1) << 2)
            
            do
                int32_t eax_17 = var_18 + (eax_3 ^ edx) - edx - ((eax_12 ^ edx_3) - edx_3)
                var_18 = eax_17
                
                if (eax_17 s< eax_1)
                    var_8 += temp0
                else
                    var_8 += eax_7
                    var_18 = eax_17 - eax_1
                
                int32_t eax_19 = sub_685f40(fconvert.t(*esi_3) * x87_r6 + x87_r5)
                int32_t ecx_7
                
                if (eax_19 s<= 0x3ff)
                    int32_t ecx_8
                    ecx_8.b = eax_19 s< 0
                    ecx_7 = (ecx_8 - 1) & eax_19
                else
                    ecx_7 = 0x3ff
                
                long double x87_r5_13 =
                    fconvert.t(*(arg7 i- arg6 + esi_3)) + fconvert.t(*(arg8 + 0x458))
                var_10 += 1
                long double x87_r4_3 = fconvert.t(*esi_3)
                int32_t eax_21 = var_8 - ecx_7
                x87_r4_3 - x87_r5_13
                ebx_5 += eax_21 * eax_21
                int32_t eax_22
                eax_22.w = (x87_r4_3 < x87_r5_13 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_3, x87_r5_13) ? 1 : 0) << 0xa
                    | (x87_r4_3 == x87_r5_13 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1) && ecx_7 != 0)
                    x87_r4_1 = fconvert.t(fconvert.s(float.t(var_8)))
                    long double x87_r5_17 = fconvert.t(*(arg8 + 0x448)) + x87_r4_1
                    long double x87_r3_4 = fconvert.t(fconvert.s(float.t(ecx_7)))
                    x87_r3_4 - x87_r5_17
                    eax_22.w = (x87_r3_4 < x87_r5_17 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r3_4, x87_r5_17) ? 1 : 0) << 0xa
                        | (x87_r3_4 == x87_r5_17 ? 1 : 0) << 0xe | 0x1800
                    x87_r6 = x87_r3_4
                    
                    if ((eax_22:1.b & 0x41) == 0)
                        return 1
                    
                    long double x87_r4_4 = x87_r4_1 - fconvert.t(*(arg8 + 0x44c))
                    x87_r4_4 - x87_r5_17
                    eax_22.w = (x87_r4_4 < x87_r5_17 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_4, x87_r5_17) ? 1 : 0) << 0xa
                        | (x87_r4_4 == x87_r5_17 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_22:1.b & 0x41) == 0)
                        return 1
                
                eax_14 = arg5 + 1
                esi_3 = &esi_3[1]
                arg5 = eax_14
            while (eax_14 s< arg4)
            
            esi_2 = arg8
        
        long double x87_r7_6 = fconvert.t(*(esi_2 + 0x448))
        long double x87_r7_8 = x87_r7_6 * x87_r7_6 / fconvert.t(fconvert.s(float.t(var_10)))
        long double x87_r5_19 = fconvert.t(*(esi_2 + 0x450))
        x87_r5_19 - x87_r7_8
        eax_14.w = (x87_r5_19 < x87_r7_8 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_19, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r5_19 == x87_r7_8 ? 1 : 0) << 0xe | 0x3000
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            return 0
        
        long double x87_r6_3 = fconvert.t(*(esi_2 + 0x44c))
        long double x87_r6_4 = x87_r6_3 * x87_r6_3
        long double x87_r7_9 = x87_r6_4 / x87_r6_4
        long double x87_r6_5 = fconvert.t(*(esi_2 + 0x450))
        x87_r6_5 - x87_r7_9
        eax_14.w = (x87_r6_5 < x87_r7_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_5, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_9 ? 1 : 0) << 0xe
        bool p_3 = unimplemented  {test ah, 0x5}
        bool p_4
        
        if (p_3)
            long double x87_r7_10 = float.t(divs.dp.d(sx.q(ebx_5), var_10))
            long double x87_r6_6 = fconvert.t(*(esi_2 + 0x450))
            x87_r6_6 - x87_r7_10
            int32_t eax_27
            eax_27.w = (x87_r6_6 < x87_r7_10 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_6, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_6 == x87_r7_10 ? 1 : 0) << 0xe
            p_4 = unimplemented  {test ah, 0x5}
        
        if (not(p_3) || p_4)
            return 0
    else
        x87_r4_1 = fconvert.t(fconvert.s(float.t(arg5)))
        long double x87_r5_7 = fconvert.t(*(esi_2 + 0x448)) + x87_r4_1
        long double x87_r3_2 = fconvert.t(fconvert.s(float.t(ecx_1)))
        x87_r3_2 - x87_r5_7
        eax_14.w = (x87_r3_2 < x87_r5_7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r3_2, x87_r5_7) ? 1 : 0) << 0xa
            | (x87_r3_2 == x87_r5_7 ? 1 : 0) << 0xe | 0x1800
        x87_r6 = x87_r3_2
        
        if ((eax_14:1.b & 0x41) != 0)
            long double x87_r4_2 = x87_r4_1 - fconvert.t(*(esi_2 + 0x44c))
            x87_r4_2 - x87_r5_7
            eax_14.w = (x87_r4_2 < x87_r5_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_2, x87_r5_7) ? 1 : 0) << 0xa
                | (x87_r4_2 == x87_r5_7 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_14:1.b & 0x41) != 0)
                goto label_65c3ff
    return 1
}

// 函数名称: sub_65dc00
// 虚拟地址: 0x65dc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_65dc00(int32_t arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: void* ebx = arg2
    void* ebx = arg2
    int32_t i_1 = arg1
    __alloca_probe_16((i_1 << 3) + 8)
    uint32_t edx = 0
    int32_t __saved_edi
    int32_t* edi = &__saved_edi
    double var_34
    
    if (i_1 s>= 0)
        if (i_1 + 1 s>= 4)
            void* eax_2 = ebx + 8
            uint32_t i_4 = (i_1 + 1) u>> 2
            void* ecx_1 = &var_34:4
            edx = i_4 << 2
            uint32_t i
            
            do
                long double x87_r7_1 = fconvert.t(*(eax_2 - 8))
                eax_2 += 0x10
                *(ecx_1 - 0x10) = fconvert.d(x87_r7_1)
                ecx_1 += 0x20
                i = i_4
                i_4 -= 1
                *(ecx_1 - 0x28) = fconvert.d(fconvert.t(*(eax_2 - 0x14)))
                *(ecx_1 - 0x20) = fconvert.d(fconvert.t(*(eax_2 - 0x10)))
                *(ecx_1 - 0x18) = fconvert.d(fconvert.t(*(eax_2 - 0xc)))
            while (i != 1)
            ebx = arg2
        
        while (edx s<= i_1)
            long double x87_r7_5 = fconvert.t(*(ebx + (edx << 2)))
            edx += 1
            void var_48
            *(&var_48 + (edx << 3)) = fconvert.d(x87_r7_5)
    
    int32_t i_2 = i_1
    
    if (i_1 s<= 0)
        return 
    
    long double x87_r7_6 = float.t(0)
    void* ebx_2 = (i_1 << 3) + 0xfffffff0
    void* var_c_1 = ebx_2
    float* var_8_1 = arg3 + (i_1 << 2) - 4
    
    do
        long double x87_r6_1 = x87_r7_6
        double var_24_1 = fconvert.d(x87_r6_1)
        long double x87_r5_1 = float.t(i_1 - 1)
        double var_2c_1 = fconvert.d(x87_r5_1)
        double var_14_1 = fconvert.d(float.t(i_2))
        
        while (true)
            long double x87_r4_2 = fconvert.t(*(ebx_2 + edi + 0x10))
            int32_t i_3 = i_1
            long double x87_r3_1 = x87_r7_6
            double var_1c_1 = fconvert.d(x87_r3_1)
            long double x87_r2_1 = x87_r7_6
            
            if (i_1 s>= 4)
                int32_t edx_4 = ((i_1 - 4) u>> 2) + 1
                void* ecx_3 = ebx_2 + edi
                i_3 -= edx_4 << 2
                long double x87_r2_30
                long double x87_r2_36
                
                while (true)
                    ecx_3 -= 0x20
                    int32_t temp2_1 = edx_4
                    edx_4 -= 1
                    long double x87_r2_6 = x87_r3_1 * x87_r6_1 + x87_r4_2
                    long double x87_r2_9 = x87_r4_2 * x87_r6_1 + fconvert.t(*(ecx_3 + 0x28))
                    long double x87_r2_15 = x87_r2_6 * x87_r6_1 + x87_r2_9
                    long double x87_r2_18 = x87_r2_9 * x87_r6_1 + fconvert.t(*(ecx_3 + 0x20))
                    long double x87_r2_24 = x87_r2_15 * x87_r6_1 + x87_r2_18
                    long double x87_r2_27 = x87_r2_18 * x87_r6_1 + fconvert.t(*(ecx_3 + 0x18))
                    x87_r2_30 = (((x87_r2_1 * x87_r6_1 + x87_r3_1) * x87_r6_1 + x87_r2_6) * x87_r6_1
                        + x87_r2_15) * x87_r6_1 + x87_r2_24
                    x87_r3_1 = x87_r2_24 * x87_r6_1 + x87_r2_27
                    x87_r2_36 = x87_r2_27 * x87_r6_1 + fconvert.t(*(ecx_3 + 0x10))
                    
                    if (temp2_1 == 1)
                        break
                    
                    x87_r2_1 = x87_r2_30
                    x87_r4_2 = x87_r2_36
                
                ebx_2 = var_c_1
                var_1c_1 = fconvert.d(x87_r3_1)
                x87_r2_1 = x87_r2_30
                x87_r4_2 = x87_r2_36
            
            long double x87_r7_7
            
            if (i_3 s<= 0)
                x87_r7_7 = x87_r2_1
            else
                void* ecx_4 = &edi[i_3 * 2 - 2]
                long double x87_r2_41
                long double x87_r2_44
                long double x87_r2_47
                
                while (true)
                    i_3 -= 1
                    ecx_4 -= 8
                    x87_r2_41 = x87_r2_1 * x87_r6_1 + x87_r3_1
                    x87_r2_44 = x87_r3_1 * x87_r6_1 + x87_r4_2
                    x87_r2_47 = x87_r4_2 * x87_r6_1 + fconvert.t(*(ecx_4 + 8))
                    
                    if (i_3 s<= 0)
                        break
                    
                    x87_r4_2 = x87_r2_47
                    x87_r2_1 = x87_r2_41
                    x87_r3_1 = x87_r2_44
                
                x87_r7_7 = x87_r2_47
                var_1c_1 = fconvert.d(x87_r2_44)
                long double x87_r3_11 = x87_r6_1
                x87_r6_1 = x87_r2_41
                x87_r3_1 = x87_r2_44
                x87_r4_2 = x87_r3_11
            
            long double x87_r4_11 = x87_r4_2 * fconvert.t(var_14_1)
            var_34 = fconvert.d(x87_r4_11)
            long double x87_r5_2 = x87_r5_1 * (x87_r3_1 * x87_r5_1 * x87_r3_1 - x87_r6_1 * x87_r4_11)
            x87_r5_2 - x87_r7_7
            i_3.w = (x87_r5_2 < x87_r7_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_2, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r5_2 == x87_r7_7 ? 1 : 0) << 0xe | 0x2800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                return 
            
            x87_r3_1 - x87_r7_7
            i_3.w = (x87_r3_1 < x87_r7_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_1, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r3_1 == x87_r7_7 ? 1 : 0) << 0xe | 0x3000
            long double x87_r7_9
            long double x87_r6_6
            
            if ((i_3:1.b & 0x41) != 0)
                x87_r7_9 = fconvert.t(var_1c_1) - __CIasin_default(x87_r7_7)
                x87_r6_6 = fconvert.t(-9.9999999999999995e-07)
                x87_r6_6 - x87_r7_9
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (p_2)
                    x87_r7_9 = x87_r6_6
            else
                x87_r7_9 = __CIasin_default(x87_r7_7) + fconvert.t(var_1c_1)
                x87_r6_6 = fconvert.t(9.9999999999999995e-07)
                x87_r6_6 - x87_r7_9
                
                if ((((x87_r6_6 < x87_r7_9 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_6, x87_r7_9) ? 1 : 0) << 0xa
                        | (x87_r6_6 == x87_r7_9 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
                    x87_r7_9 = x87_r6_6
            long double x87_r7_12 = fconvert.t(var_34) / x87_r7_9
            x87_r6_1 = fconvert.t(var_24_1) - x87_r7_12
            var_24_1 = fconvert.d(x87_r6_1)
            long double x87_r5_4 = float.t(0)
            x87_r5_4 - x87_r7_12
            
            if ((((x87_r5_4 < x87_r7_12 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_4, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r5_4 == x87_r7_12 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
                x87_r7_12 = x87_r7_12 * fconvert.t(-1.0)
            
            x87_r7_6 = x87_r5_4
            fabs(x87_r7_12 / x87_r6_1) - fconvert.t(9.9999999999999994e-12)
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                break
            
            x87_r5_1 = fconvert.t(var_2c_1)
        
        *var_8_1 = fconvert.s(x87_r6_1)
        int32_t j_1 = i_1
        
        if (i_1 s>= 4)
            int32_t j_2 = ((i_1 - 4) u>> 2) + 1
            void* eax_5 = ebx_2 + edi
            j_1 -= j_2 << 2
            int32_t j
            
            do
                long double x87_r5_10 = fconvert.t(*(eax_5 + 0x10))
                eax_5 -= 0x20
                j = j_2
                j_2 -= 1
                long double x87_r5_12 = x87_r5_10 * x87_r6_1 + fconvert.t(*(eax_5 + 0x28))
                *(eax_5 + 0x28) = fconvert.d(x87_r5_12)
                long double x87_r5_14 = x87_r5_12 * x87_r6_1 + fconvert.t(*(eax_5 + 0x20))
                *(eax_5 + 0x20) = fconvert.d(x87_r5_14)
                long double x87_r5_16 = x87_r5_14 * x87_r6_1 + fconvert.t(*(eax_5 + 0x18))
                *(eax_5 + 0x18) = fconvert.d(x87_r5_16)
                *(eax_5 + 0x10) = fconvert.d(x87_r5_16 * x87_r6_1 + fconvert.t(*(eax_5 + 0x10)))
            while (j != 1)
            ebx_2 = var_c_1
        
        if (j_1 s> 0)
            void* eax_6 = &edi[j_1 * 2 - 2]
            
            do
                j_1 -= 1
                long double x87_r5_20 = fconvert.t(*(eax_6 + 8)) * x87_r6_1
                eax_6 -= 8
                *(eax_6 + 8) = fconvert.d(x87_r5_20 + fconvert.t(*(eax_6 + 8)))
            while (j_1 s> 0)
        
        var_8_1 -= 4
        x87_r7_6 = x87_r6_1
        i_1 -= 1
        ebx_2 -= 8
        edi = &edi[2]
        i_2 = i_1
        var_c_1 = ebx_2
    while (i_1 s> 0)
}

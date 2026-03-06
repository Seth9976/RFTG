// 函数名称: sub_6083e0
// 虚拟地址: 0x6083e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6083e0(void* arg1, int32_t arg2, int32_t* arg3, float* arg4, double arg5, float* arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t eax = sub_607d00(arg1)
    int32_t eax = sub_607d00(arg1)
    int32_t ebx = *(arg2 + 0x44)
    
    if (eax != 0)
        int32_t eax_1 = *(arg1 + 0xd4)
        int32_t var_64_1
        int32_t eax_3
        float* edi_1
        
        if (eax_1 != 0 || *(arg1 + 0xd8) != eax_1)
            edi_1 = arg4
            var_64_1 = sub_685f40(float.t(eax_1) + fconvert.t(*edi_1))
            eax_3 = sub_685f40(float.t(*(arg1 + 0xd8)) + fconvert.t(edi_1[1]))
        else
            edi_1 = arg4
            var_64_1 = sub_685f40(fconvert.t(*edi_1))
            eax_3 = sub_685f40(fconvert.t(edi_1[1]))
        
        int32_t eax_5 = sub_685f40(fconvert.t(edi_1[2]))
        int32_t eax_6 = sub_685f40(fconvert.t(edi_1[3]))
        void* eax_7 = *(ebx + 4)
        int32_t var_8c_1 = *(eax_7 + 0x18)
        char* eax_8 = sub_5d6670(0, eax_5, eax_6, zx.d(*(eax_7 + 8)), *(eax_7 + 0xc), *(eax_7 + 0x10), 
            *(eax_7 + 0x14))
        
        if (eax_8 != 0)
            int32_t var_18
            sub_5d5e10(ebx, &var_18)
            sub_5d5cf0(eax_8, 1, var_18)
            int32_t var_7c = var_64_1
            int32_t var_78_1 = eax_3
            var_7c = 0
            int32_t var_78_2 = 0
            int32_t eax_11 = sub_5d69a0(ebx, arg3, eax_8, &var_7c)
            
            if (eax_11 != 0)
                return eax_11
            
            long double x87_r7_10 = fneg(fconvert.t(arg5))
            double var_2c = fconvert.d(x87_r7_10)
            int32_t* var_a0_2
            var_a0_2.q = fconvert.d(x87_r7_10)
            double var_3c
            double var_34
            int32_t var_c
            int32_t var_8
            sub_644240(eax_5, eax_6, var_a0_2, &var_8, &var_c, &var_3c, &var_34)
            int32_t edx_5 = var_c
            double* var_90_3
            var_90_3.q = fconvert.d(fconvert.t(var_34))
            int32_t eax_13 = var_8
            int32_t* var_98_2
            var_98_2.q = fconvert.d(fconvert.t(var_3c))
            uint32_t eax_16 = sub_607c60()
            int32_t eax_18
            int32_t edx_6
            edx_6:eax_18 = sx.q(var_c)
            int32_t eax_22
            int32_t edx_7
            edx_7:eax_22 = sx.q(var_8)
            char* eax_25 = sub_644e50(eax_8, fconvert.d(fconvert.t(var_2c)), (eax_22 - edx_7) s>> 1, 
                (eax_18 - edx_6) s>> 1, eax_16, arg7 & 1, arg7 & 2, eax_13, edx_5, var_98_2)
            var_2c:4.d = eax_25
            
            if (eax_25 == 0)
                return eax_11
            
            int32_t eax_27 = sub_685f40(fconvert.t(*arg6)) + var_64_1
            int32_t eax_29 = sub_685f40(fconvert.t(arg6[1]))
            long double x87_r7_17 = fneg(fconvert.t(var_34))
            var_34 = fconvert.d(x87_r7_17)
            long double x87_r6 = float.t(var_64_1 - eax_27)
            int32_t eax_30 = eax_29 + eax_3
            long double x87_r4 = float.t(eax_3 - eax_30)
            long double x87_r2 = float.t(eax_27)
            long double x87_r0 = fconvert.t(var_3c)
            long double x87_r1_4 = float.t(eax_30)
            long double x87_r1_6 = float.t(eax_5 - eax_27 + var_64_1)
            long double x87_r1_13 = float.t(eax_6 - eax_30 + eax_3)
            double var_14_3 =
                fconvert.d(fconvert.t(fconvert.d(x87_r1_13)) * x87_r0 + x87_r6 * x87_r7_17 + x87_r1_4)
            long double x87_r2_3 = fconvert.t(fconvert.d(x87_r1_13))
            long double x87_r6_4 = x87_r2 + x87_r1_6 * x87_r0 - x87_r2_3 * x87_r7_17
            long double x87_r7_20 = x87_r7_17 * x87_r1_6 + x87_r0 * x87_r2_3 + x87_r1_4
            long double x87_r5_5 =
                fconvert.t(fconvert.d(x87_r1_6 * x87_r0 - x87_r4 * x87_r7_17 + x87_r2))
            long double x87_r4_7 = fconvert.t(fconvert.d(x87_r6 * x87_r0 - x87_r4 * x87_r7_17 + x87_r2))
            x87_r4_7 - x87_r5_5
            eax_30.w = (x87_r4_7 < x87_r5_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_7, x87_r5_5) ? 1 : 0) << 0xa
                | (x87_r4_7 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
            bool p = unimplemented  {test ah, 0x5}
            long double x87_r3_4
            
            x87_r3_4 = p ? x87_r5_5 : x87_r4_7
            
            long double x87_r2_4 =
                fconvert.t(fconvert.d(x87_r6 * x87_r0 - x87_r1_13 * x87_r7_17 + x87_r2))
            x87_r2_4 - x87_r6_4
            eax_30.w = (x87_r2_4 < x87_r6_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_4, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r2_4 == x87_r6_4 ? 1 : 0) << 0xe | 0x1000
            bool p_1 = unimplemented  {test ah, 0x5}
            long double x87_r1_24
            
            x87_r1_24 = p_1 ? x87_r6_4 : x87_r2_4
            
            x87_r1_24 - x87_r3_4
            eax_30.w = (x87_r1_24 < x87_r3_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_24, x87_r3_4) ? 1 : 0) << 0xa
                | (x87_r1_24 == x87_r3_4 ? 1 : 0) << 0xe | 0x1000
            
            if ((eax_30:1.b & 0x41) != 0)
                x87_r6_4 = x87_r3_4
                x87_r2_4 - x87_r6_4
                eax_30.w = (x87_r2_4 < x87_r6_4 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_4, x87_r6_4) ? 1 : 0) << 0xa
                    | (x87_r2_4 == x87_r6_4 ? 1 : 0) << 0xe | 0x2800
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (p_2)
                    x87_r6_4 = x87_r2_4
                else
                    x87_r7_20 = x87_r2_4
            else
                x87_r7_20 = x87_r2_4
                x87_r5_5 - x87_r6_4
                eax_30.w = (x87_r5_5 < x87_r6_4 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_5, x87_r6_4) ? 1 : 0) << 0xa
                    | (x87_r5_5 == x87_r6_4 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax_30:1.b & 0x41) == 0)
                    x87_r6_4 = x87_r5_5
                else
                    x87_r7_20 = x87_r5_5
            
            long double x87_r6_5 = fconvert.t(fconvert.d(fconvert.t(fconvert.d(x87_r4)) * x87_r0
                + fconvert.t(fconvert.d(x87_r1_6)) * x87_r7_17 + x87_r1_4))
            long double x87_r5_6 = fconvert.t(fconvert.d(fconvert.t(fconvert.d(x87_r4)) * x87_r0
                + x87_r6 * x87_r7_17 + x87_r1_4))
            var_7c = sub_685f40(x87_r6_4)
            x87_r5_6 - x87_r6_5
            int32_t eax_31
            eax_31.w = (x87_r5_6 < x87_r6_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_6, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r5_6 == x87_r6_5 ? 1 : 0) << 0xe | 0x2800
            bool p_3 = unimplemented  {test ah, 0x5}
            long double x87_r4_9
            
            x87_r4_9 = p_3 ? x87_r6_5 : x87_r5_6
            
            long double x87_r3_5 = fconvert.t(var_14_3)
            x87_r3_5 - x87_r7_20
            eax_31.w = (x87_r3_5 < x87_r7_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_5, x87_r7_20) ? 1 : 0) << 0xa
                | (x87_r3_5 == x87_r7_20 ? 1 : 0) << 0xe | 0x1800
            bool p_4 = unimplemented  {test ah, 0x5}
            long double x87_r2_5
            
            x87_r2_5 = p_4 ? x87_r7_20 : x87_r3_5
            
            x87_r2_5 - x87_r4_9
            eax_31.w = (x87_r2_5 < x87_r4_9 ? 1 : 0) << 8
                | (is_unordered.t(x87_r2_5, x87_r4_9) ? 1 : 0) << 0xa
                | (x87_r2_5 == x87_r4_9 ? 1 : 0) << 0xe | 0x1800
            
            if ((eax_31:1.b & 0x41) != 0)
                x87_r7_20 = x87_r3_5
                x87_r4_9 - x87_r7_20
                eax_31.w = (x87_r4_9 < x87_r7_20 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_9, x87_r7_20) ? 1 : 0) << 0xa
                    | (x87_r4_9 == x87_r7_20 ? 1 : 0) << 0xe | 0x3000
                bool p_5 = unimplemented  {test ah, 0x5}
                
                if (p_5)
                    x87_r7_20 = x87_r4_9
            else
                x87_r6_5 - x87_r7_20
                eax_31.w = (x87_r6_5 < x87_r7_20 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, x87_r7_20) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_20 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_31:1.b & 0x41) == 0)
                    x87_r7_20 = x87_r6_5
            
            int32_t* edi_5 = var_2c:4.d
            int32_t var_78_3 = sub_685f40(x87_r7_20)
            int32_t var_74_2 = var_8
            int32_t var_70_2 = var_c
            int32_t eax_35 = sub_5d6060(edi_5, nullptr, eax, &var_7c)
            sub_5d65d0(eax_8)
            sub_5d65d0(edi_5)
            return eax_35
    
    return 0xffffffff
}

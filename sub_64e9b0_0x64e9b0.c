// 函数名称: sub_64e9b0
// 虚拟地址: 0x64e9b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_64e9b0(float arg1, int32_t arg2, void* arg3, int32_t arg4, void* arg5, void* arg6, void* arg7)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t ebx = *esi
    void* result = arg7
    float var_10 = fconvert.s(fconvert.t(*(esi[1] + (arg4 << 2) + 0xc)))
    int32_t edx = 0
    long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(esi[0xc])))
    long double x87_r6 = fconvert.t(-17.200000762939453)
    void* edi = arg5
    long double x87_r5 = fconvert.t(0.0050000000000000001)
    int32_t var_28 = ebx
    long double x87_r4 = float.t(1)
    int32_t var_18 = 0
    
    if (ebx s>= 4)
        float* ebx_8 = arg6 - arg3
        float* ebx_17 = arg6 - edi
        float* var_c_1 = arg6 + 0xc
        float* result_1 = result
        float* var_30_1 = arg2 - result
        int32_t i_1 = ((var_28 - 4) u>> 2) + 1
        void* var_8_1 = edi + 8
        int32_t ebx_18 = arg4
        void* edx_4 = arg3 + 4
        var_18 = i_1 << 2
        int32_t i
        
        do
            void* ebx_21 = esi[1]
            long double x87_r2_3 = fconvert.t(fconvert.s(
                fconvert.t(*(*(esi[3] + (ebx_18 << 2)) + 0xfffffffc - arg3 + edx_4))
                + fconvert.t(*(var_30_1 + result_1))))
            long double x87_r1_1 = fconvert.t(*(ebx_21 + 0x6c))
            x87_r1_1 - x87_r2_3
            float* eax_5
            eax_5.w = (x87_r1_1 < x87_r2_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_1, x87_r2_3) ? 1 : 0) << 0xa
                | (x87_r1_1 == x87_r2_3 ? 1 : 0) << 0xe | 0x1000
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                x87_r2_3 = fconvert.t(fconvert.s(fconvert.t(*(ebx_21 + 0x6c))))
            
            long double x87_r1_3 = fconvert.t(*(edx_4 - 4)) + fconvert.t(var_10)
            x87_r1_3 - x87_r2_3
            eax_5.w = (x87_r1_3 < x87_r2_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_3, x87_r2_3) ? 1 : 0) << 0xa
                | (x87_r1_3 == x87_r2_3 ? 1 : 0) << 0xe | 0x800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (not(p_2))
                x87_r2_3 = x87_r1_3
                x87_r1_3 = x87_r2_3
            
            *(var_8_1 - 8) = fconvert.s(x87_r1_3)
            
            if (arg4 == 1)
                long double x87_r2_6 = fconvert.t(-17.2000008f)
                long double x87_r1_4 = fconvert.t(fconvert.s(x87_r2_3 - fconvert.t(*result_1)))
                x87_r1_4 - x87_r2_6
                float* eax_7
                eax_7.w = (x87_r1_4 < x87_r2_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_4, x87_r2_6) ? 1 : 0) << 0xa
                    | (x87_r1_4 == x87_r2_6 ? 1 : 0) << 0xe | 0x800
                long double x87_r2_7 = x87_r2_6 - x87_r6
                
                if ((eax_7:1.b & 0x41) != 0)
                    var_c_1[-3] = fconvert.s(fconvert.t(var_c_1[-3]) * fconvert.t(fconvert.s(x87_r4
                        - x87_r2_7 * fconvert.t(0.00029999999999999997) * x87_r7_2)))
                else
                    arg1 = fconvert.s(x87_r4 - x87_r2_7 * x87_r5 * x87_r7_2)
                    long double temp0_1 = fconvert.t(arg1)
                    x87_r1_4 - temp0_1
                    eax_7.w = (x87_r1_4 < temp0_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_4, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r1_4 == temp0_1 ? 1 : 0) << 0xe | 0x1800
                    
                    if ((eax_7:1.b & 0x41) != 0)
                        var_c_1[-3] = fconvert.s(fconvert.t(var_c_1[-3]) * fconvert.t(arg1))
                    else
                        var_c_1[-3] = fconvert.s(fconvert.t(var_c_1[-3])
                            * fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f))))
            
            void* ebx_24 = esi[1]
            long double x87_r2_21 = fconvert.t(fconvert.s(
                fconvert.t(*(*(esi[3] + (arg4 << 2)) + 0xfffffffc - arg3 + edx_4 + 4))
                + fconvert.t(*(arg2 - arg3 + edx_4))))
            long double x87_r1_5 = fconvert.t(*(ebx_24 + 0x6c))
            x87_r1_5 - x87_r2_21
            float* eax_13
            eax_13.w = (x87_r1_5 < x87_r2_21 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_5, x87_r2_21) ? 1 : 0) << 0xa
                | (x87_r1_5 == x87_r2_21 ? 1 : 0) << 0xe | 0x1000
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                x87_r2_21 = fconvert.t(fconvert.s(fconvert.t(*(ebx_24 + 0x6c))))
            
            long double x87_r1_7 = fconvert.t(*edx_4) + fconvert.t(var_10)
            x87_r1_7 - x87_r2_21
            eax_13.w = (x87_r1_7 < x87_r2_21 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_7, x87_r2_21) ? 1 : 0) << 0xa
                | (x87_r1_7 == x87_r2_21 ? 1 : 0) << 0xe | 0x800
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (not(p_4))
                x87_r2_21 = x87_r1_7
                x87_r1_7 = x87_r2_21
            
            *(edi - arg3 + edx_4) = fconvert.s(x87_r1_7)
            
            if (arg4 == 1)
                long double x87_r2_24 = fconvert.t(-17.2000008f)
                long double x87_r1_8 =
                    fconvert.t(fconvert.s(x87_r2_21 - fconvert.t(*(result - arg3 + edx_4))))
                x87_r1_8 - x87_r2_24
                float* eax_15
                eax_15.w = (x87_r1_8 < x87_r2_24 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_8, x87_r2_24) ? 1 : 0) << 0xa
                    | (x87_r1_8 == x87_r2_24 ? 1 : 0) << 0xe | 0x800
                long double x87_r2_25 = x87_r2_24 - x87_r6
                
                if ((eax_15:1.b & 0x41) != 0)
                    *(ebx_8 + edx_4) = fconvert.s(fconvert.t(fconvert.s(x87_r4
                        - x87_r2_25 * fconvert.t(0.00029999999999999997) * x87_r7_2))
                        * fconvert.t(*(ebx_8 + edx_4)))
                else
                    arg1 = fconvert.s(x87_r4 - x87_r2_25 * x87_r5 * x87_r7_2)
                    long double temp2_1 = fconvert.t(arg1)
                    x87_r1_8 - temp2_1
                    eax_15.w = (x87_r1_8 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_8, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r1_8 == temp2_1 ? 1 : 0) << 0xe | 0x1800
                    
                    if ((eax_15:1.b & 0x41) != 0)
                        *(ebx_8 + edx_4) = fconvert.s(fconvert.t(arg1) * fconvert.t(*(ebx_8 + edx_4)))
                    else
                        *(ebx_8 + edx_4) = fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f)))
                            * fconvert.t(*(ebx_8 + edx_4)))
            
            void* ebx_27 = esi[1]
            long double x87_r2_39 = fconvert.t(fconvert.s(
                fconvert.t(*(*(esi[3] + (arg4 << 2)) + 4 - arg3 + edx_4))
                + fconvert.t(*(arg2 - edi + var_8_1))))
            long double x87_r1_9 = fconvert.t(*(ebx_27 + 0x6c))
            x87_r1_9 - x87_r2_39
            float* eax_21
            eax_21.w = (x87_r1_9 < x87_r2_39 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_9, x87_r2_39) ? 1 : 0) << 0xa
                | (x87_r1_9 == x87_r2_39 ? 1 : 0) << 0xe | 0x1000
            bool p_5 = unimplemented  {test ah, 0x5}
            
            if (not(p_5))
                x87_r2_39 = fconvert.t(fconvert.s(fconvert.t(*(ebx_27 + 0x6c))))
            
            long double x87_r1_11 = fconvert.t(*(edx_4 + 4)) + fconvert.t(var_10)
            x87_r1_11 - x87_r2_39
            eax_21.w = (x87_r1_11 < x87_r2_39 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_11, x87_r2_39) ? 1 : 0) << 0xa
                | (x87_r1_11 == x87_r2_39 ? 1 : 0) << 0xe | 0x800
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (not(p_6))
                x87_r2_39 = x87_r1_11
                x87_r1_11 = x87_r2_39
            
            float* ebx_28 = var_8_1
            *ebx_28 = fconvert.s(x87_r1_11)
            
            if (arg4 == 1)
                long double x87_r2_42 = fconvert.t(-17.2000008f)
                long double x87_r1_12 =
                    fconvert.t(fconvert.s(x87_r2_39 - fconvert.t(*(result - edi + ebx_28))))
                x87_r1_12 - x87_r2_42
                float* eax_22
                eax_22.w = (x87_r1_12 < x87_r2_42 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_12, x87_r2_42) ? 1 : 0) << 0xa
                    | (x87_r1_12 == x87_r2_42 ? 1 : 0) << 0xe | 0x800
                long double x87_r2_43 = x87_r2_42 - x87_r6
                
                if ((eax_22:1.b & 0x41) != 0)
                    *(ebx_17 + ebx_28) = fconvert.s(fconvert.t(fconvert.s(x87_r4
                        - x87_r2_43 * fconvert.t(0.00029999999999999997) * x87_r7_2))
                        * fconvert.t(*(ebx_17 + ebx_28)))
                else
                    arg1 = fconvert.s(x87_r4 - x87_r2_43 * x87_r5 * x87_r7_2)
                    long double temp3_1 = fconvert.t(arg1)
                    x87_r1_12 - temp3_1
                    eax_22.w = (x87_r1_12 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_12, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r1_12 == temp3_1 ? 1 : 0) << 0xe | 0x1800
                    
                    if ((eax_22:1.b & 0x41) != 0)
                        *(ebx_17 + ebx_28) =
                            fconvert.s(fconvert.t(arg1) * fconvert.t(*(ebx_17 + ebx_28)))
                    else
                        *(ebx_17 + ebx_28) = fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f)))
                            * fconvert.t(*(ebx_17 + ebx_28)))
            
            float* var_34_1 = result - arg6 + var_c_1
            void* ebx_31 = esi[1]
            long double x87_r2_57 = fconvert.t(fconvert.s(
                fconvert.t(*(*(esi[3] + (arg4 << 2)) + 8 - arg3 + edx_4))
                + fconvert.t(*(var_34_1 + var_30_1))))
            long double x87_r1_13 = fconvert.t(*(ebx_31 + 0x6c))
            x87_r1_13 - x87_r2_57
            float* eax_30
            eax_30.w = (x87_r1_13 < x87_r2_57 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_13, x87_r2_57) ? 1 : 0) << 0xa
                | (x87_r1_13 == x87_r2_57 ? 1 : 0) << 0xe | 0x1000
            bool p_7 = unimplemented  {test ah, 0x5}
            
            if (not(p_7))
                x87_r2_57 = fconvert.t(fconvert.s(fconvert.t(*(ebx_31 + 0x6c))))
            
            long double x87_r1_15 = fconvert.t(*(edx_4 + 8)) + fconvert.t(var_10)
            x87_r1_15 - x87_r2_57
            eax_30.w = (x87_r1_15 < x87_r2_57 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_15, x87_r2_57) ? 1 : 0) << 0xa
                | (x87_r1_15 == x87_r2_57 ? 1 : 0) << 0xe | 0x800
            bool p_8 = unimplemented  {test ah, 0x5}
            
            if (not(p_8))
                x87_r2_57 = x87_r1_15
                x87_r1_15 = x87_r2_57
            
            ebx_18 = arg4
            *(var_8_1 + 4) = fconvert.s(x87_r1_15)
            
            if (ebx_18 == 1)
                long double x87_r2_60 = fconvert.t(-17.2000008f)
                long double x87_r1_16 = fconvert.t(fconvert.s(x87_r2_57 - fconvert.t(*var_34_1)))
                x87_r1_16 - x87_r2_60
                float* eax_32
                eax_32.w = (x87_r1_16 < x87_r2_60 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_16, x87_r2_60) ? 1 : 0) << 0xa
                    | (x87_r1_16 == x87_r2_60 ? 1 : 0) << 0xe | 0x800
                long double x87_r2_61 = x87_r2_60 - x87_r6
                
                if ((eax_32:1.b & 0x41) != 0)
                    *var_c_1 = fconvert.s(fconvert.t(*var_c_1) * fconvert.t(fconvert.s(x87_r4
                        - x87_r2_61 * fconvert.t(0.00029999999999999997) * x87_r7_2)))
                else
                    arg1 = fconvert.s(x87_r4 - x87_r2_61 * x87_r5 * x87_r7_2)
                    long double temp5_1 = fconvert.t(arg1)
                    x87_r1_16 - temp5_1
                    eax_32.w = (x87_r1_16 < temp5_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_16, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r1_16 == temp5_1 ? 1 : 0) << 0xe | 0x1800
                    
                    if ((eax_32:1.b & 0x41) != 0)
                        *var_c_1 = fconvert.s(fconvert.t(*var_c_1) * fconvert.t(arg1))
                    else
                        *var_c_1 = fconvert.s(fconvert.t(*var_c_1)
                            * fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f))))
            
            result_1 = &result_1[4]
            var_8_1 += 0x10
            var_c_1 = &var_c_1[4]
            edx_4 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
        edx = var_18
        ebx = var_28
        result = arg7
        edi = arg5
    
    if (edx s< ebx)
        void* eax_35 = result - arg3
        void* result_2 = arg6 - arg3
        int32_t edi_9 = var_18
        float* edx_5 = arg3 + (edx << 2)
        
        do
            void* ecx_4 = esi[1]
            long double x87_r2_75 = fconvert.t(fconvert.s(
                fconvert.t(*(*(esi[3] + (arg4 << 2)) + (edi_9 << 2)))
                + fconvert.t(*(arg2 - arg3 + edx_5))))
            long double x87_r1_17 = fconvert.t(*(ecx_4 + 0x6c))
            x87_r1_17 - x87_r2_75
            int32_t eax_37
            eax_37.w = (x87_r1_17 < x87_r2_75 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_17, x87_r2_75) ? 1 : 0) << 0xa
                | (x87_r1_17 == x87_r2_75 ? 1 : 0) << 0xe | 0x1000
            bool p_9 = unimplemented  {test ah, 0x5}
            
            if (not(p_9))
                x87_r2_75 = fconvert.t(fconvert.s(fconvert.t(*(ecx_4 + 0x6c))))
            
            long double x87_r1_19 = fconvert.t(*edx_5) + fconvert.t(var_10)
            x87_r1_19 - x87_r2_75
            eax_37.w = (x87_r1_19 < x87_r2_75 ? 1 : 0) << 8
                | (is_unordered.t(x87_r1_19, x87_r2_75) ? 1 : 0) << 0xa
                | (x87_r1_19 == x87_r2_75 ? 1 : 0) << 0xe | 0x800
            bool p_10 = unimplemented  {test ah, 0x5}
            
            if (not(p_10))
                x87_r2_75 = x87_r1_19
                x87_r1_19 = x87_r2_75
            
            result = edi - arg3
            *(result + edx_5) = fconvert.s(x87_r1_19)
            
            if (arg4 == 1)
                long double x87_r2_78 = fconvert.t(-17.2000008f)
                long double x87_r1_20 =
                    fconvert.t(fconvert.s(x87_r2_75 - fconvert.t(*(eax_35 + edx_5))))
                x87_r1_20 - x87_r2_78
                result.w = (x87_r1_20 < x87_r2_78 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_20, x87_r2_78) ? 1 : 0) << 0xa
                    | (x87_r1_20 == x87_r2_78 ? 1 : 0) << 0xe | 0x800
                long double x87_r2_79 = x87_r2_78 - x87_r6
                
                if ((result:1.b & 0x41) != 0)
                    result = result_2
                    *(result + edx_5) = fconvert.s(fconvert.t(fconvert.s(x87_r4
                        - x87_r2_79 * fconvert.t(0.00029999999999999997) * x87_r7_2))
                        * fconvert.t(*(result + edx_5)))
                else
                    arg1 = fconvert.s(x87_r4 - x87_r2_79 * x87_r5 * x87_r7_2)
                    long double temp1_1 = fconvert.t(arg1)
                    x87_r1_20 - temp1_1
                    result.w = (x87_r1_20 < temp1_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r1_20, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r1_20 == temp1_1 ? 1 : 0) << 0xe | 0x1800
                    
                    if ((result:1.b & 0x41) != 0)
                        result = result_2
                        *(result + edx_5) = fconvert.s(fconvert.t(arg1) * fconvert.t(*(result + edx_5)))
                    else
                        result = result_2
                        *(result + edx_5) = fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t(9.99999975e-05f)))
                            * fconvert.t(*(result + edx_5)))
            
            edi_9 += 1
            edx_5 = &edx_5[1]
        while (edi_9 s< var_28)
    
    return result
}

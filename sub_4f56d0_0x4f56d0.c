// 函数名称: sub_4f56d0
// 虚拟地址: 0x4f56d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f56d0(int32_t arg1, void* arg2, void* arg3, float arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t* esi = *(arg2 + 0xa0)
    int32_t* esi = *(arg2 + 0xa0)
    
    if (esi == 0)
        __builtin_memcpy(arg1, arg4, 0x40)
        return 
    
    void* eax_1 = sub_4f4890(esi)
    float ecx = *(eax_1 + 8)
    float edx = *(eax_1 + 0xc)
    float ecx_1 = *(eax_1 + 0x10)
    float edx_1 = *(eax_1 + 0x14)
    float var_98
    int32_t* eax_3 = sub_4f4990(&var_98, edx_1, arg2 + 0x1c, &var_98, arg4)
    float edx_2 = eax_3[1]
    float var_10 = fconvert.s(float.t(*(arg2 + 0x8c)))
    long double x87_r7_1 = float.t(*(arg2 + 0x88))
    float var_5c = *eax_3
    float ecx_4 = eax_3[2]
    float edx_3 = eax_3[3]
    float edx_4 = fconvert.s(x87_r7_1)
    float ecx_7 = var_10
    float var_28 = ecx_7
    float var_24 = edx_4
    
    if (arg6 != 0)
        ecx_7 = fconvert.s(float.t(*arg6))
        var_28 = ecx_7
        edx_4 = fconvert.s(float.t(arg6[1]))
        var_24 = edx_4
    
    float var_38
    float ebx_5
    
    if (*(arg3 + 0x7c) == 0)
        var_38 = fconvert.s(fconvert.t(*(arg2 + 0x94)))
        ebx_5 = fconvert.s(fconvert.t(*(arg2 + 0x90)))
    else
        var_38 = *(arg3 + 0x80)
        ebx_5 = *(arg3 + 0x84)
    
    float var_20 = fconvert.s(fconvert.t(*(arg2 + 0x9c)))
    float var_1c = fconvert.s(fconvert.t(*(arg2 + 0x98)))
    float var_70 = fconvert.s(fconvert.t(ecx_1) - fconvert.t(ecx))
    float var_3c = fconvert.s(fconvert.t(edx_1) - fconvert.t(edx))
    float var_c_3 = fconvert.s(fconvert.t(var_3c))
    float var_118 = fconvert.s(fconvert.t(var_70))
    float eax_5
    float edx_11
    eax_5, edx_11 = sub_4f5460(*eax_3, eax_3[1], eax_3[2], eax_3[3], var_118, var_c_3, var_38, ebx_5, 
        var_20, var_1c, ecx_7, edx_4)
    long double x87_r7_14 = fconvert.t(var_28)
    float var_6c = eax_5
    long double x87_r5 = float.t(1)
    long double x87_r5_2 = fconvert.t(var_24)
    long double x87_r6_3 = x87_r5_2 - x87_r5
    float var_78
    var_78.q = fconvert.d(x87_r6_3)
    float var_c_4 = fconvert.s(x87_r6_3)
    float var_4c = fconvert.s(fconvert.t(var_6c) * fconvert.t(fconvert.s(x87_r7_14 - x87_r5)))
    float var_18 = fconvert.s(fconvert.t(ecx_4) - fconvert.t(var_5c))
    float var_14 = fconvert.s(fconvert.t(edx_3) - fconvert.t(edx_2))
    float var_28_1 = fconvert.s(fconvert.t(var_70))
    float var_24_1 = fconvert.s(fconvert.t(var_3c))
    long double x87_r5_14 = fconvert.t(var_28_1)
    long double x87_r5_16 = fconvert.t(var_24_1)
    long double x87_r4_3 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_14 * x87_r5_14)) + fconvert.t(var_4c)))
    float var_10_6 = fconvert.s(fconvert.t(var_18) / x87_r4_3)
    long double x87_r3_1 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5_2 * x87_r5_16))
        + fconvert.t(fconvert.s(fconvert.t(edx_11) * fconvert.t(var_c_4)))))
    float var_c_6 = fconvert.s(fconvert.t(var_14) / x87_r3_1)
    long double x87_r3_3 = fconvert.t(var_10_6)
    long double x87_r2_1 = fconvert.t(var_c_6)
    x87_r2_1 - x87_r3_3
    eax_5.w = (x87_r2_1 < x87_r3_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r2_1, x87_r3_3) ? 1 : 0) << 0xa
        | (x87_r2_1 == x87_r3_3 ? 1 : 0) << 0xe | 0x1000
    float var_60_1
    long double x87_r2_2
    long double x87_r3_4
    
    if ((eax_5:1.b & 0x41) != 0)
        var_60_1 = fconvert.s(x87_r2_1)
        x87_r2_2 = x87_r3_3
        x87_r3_4 = x87_r2_1
    else
        x87_r2_2 = x87_r3_3
        x87_r3_4 = x87_r2_1
        var_60_1 = fconvert.s(x87_r2_2)
    
    if (*(arg2 + 0xad) != 0)
        var_60_1 = fconvert.s(fconvert.t(*(arg4 i+ 0xc)))
    
    void* ebx_7 = arg2
    bool cond:0 = *(ebx_7 + 0xac) != 0
    float var_d8
    __builtin_memcpy(&var_d8, arg4, 0x40)
    float var_d4_1
    
    if (cond:0)
        var_98 = var_5c
        float var_8c_1 = edx_3
        float var_20_6 = fconvert.s(x87_r5_14 * x87_r3_4)
        float var_94_1 = edx_2
        float var_90_1 = ecx_4
        float var_1c_6 = fconvert.s(x87_r3_1 * x87_r2_2)
        float eax_23
        float edx_31
        eax_23, edx_31 = sub_40af40(&var_98)
        long double x87_r6_57 = fconvert.t(var_60_1)
        float eax_19 = fconvert.s(fconvert.t(eax_23) + fconvert.t(fconvert.s(float.t(*arg5) * fconvert
            .t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_6c) * x87_r6_57))
            + fconvert.t(var_20_6))))))
        float var_c0_1 = eax_19
        float ecx_25 = fconvert.s(fconvert.t(edx_31) + fconvert.t(fconvert.s(float.t(arg5[1]) * fconvert
            .t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(edx_11) * x87_r6_57))
            + fconvert.t(var_1c_6))))))
        float var_bc_1 = ecx_25
        float var_cc_2 = fconvert.s(x87_r6_57)
        long double x87_r5_57 = float.t(1)
        float var_c8_1 = fconvert.s(fconvert.t(var_10_6) / x87_r6_57 - x87_r5_57)
        long double x87_r5_59 = fconvert.t(var_c_6)
        float var_c4_1 = fconvert.s(x87_r5_59 / x87_r5_59 - x87_r5_57)
        var_d4_1 = ecx_25
        var_d8 = eax_19
    else
        int32_t eax_6 = *(ebx_7 + 0xa4)
        long double x87_r3_6 = fconvert.t(var_60_1)
        float var_10_7 = fconvert.s(x87_r5_14 * x87_r3_6)
        float var_c_7 = fconvert.s(x87_r5_16 * x87_r3_6)
        var_4c = fconvert.s(x87_r4_3 * x87_r3_6)
        float var_88 = var_4c
        float var_84_1 = fconvert.s(x87_r3_6 * x87_r2_2)
        float eax_7
        int32_t edx_13
        eax_7, edx_13 = sub_4cc680(eax_6)
        var_4c = eax_7
        int32_t var_48_2 = edx_13
        void var_e8
        float* eax_9 = sub_505540(&var_e8, &var_5c, &var_88, &var_4c, &var_4c, &var_e8)
        float edx_15 = eax_9[1]
        int32_t var_8c = eax_9[3]
        var_98 = *eax_9
        int32_t var_90 = eax_9[2]
        
        if (arg7 == 0)
        label_4f5bfb:
            float eax_20
            float edx_28
            eax_20, edx_28 = sub_40af40(&var_98)
            long double x87_r6_40 = fconvert.t(var_60_1)
            float var_c_9 = fconvert.s(float.t(arg5[1]) * fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(edx_11) * x87_r6_40)) + fconvert.t(var_c_7))))
            var_d8 = fconvert.s(fconvert.t(eax_20) + fconvert.t(fconvert.s(float.t(*arg5) * fconvert.t(
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_6c) * x87_r6_40))
                + fconvert.t(var_10_7))))))
            float var_d4 = fconvert.s(fconvert.t(edx_28) + fconvert.t(var_c_9))
            float var_cc_1 = fconvert.s(x87_r6_40)
        else
            long double x87_r7_21 = fconvert.t(fconvert.s(float.t(arg5[1])))
            long double x87_r5_26 = fconvert.t(var_78.q)
            x87_r5_26 - x87_r7_21
            eax_9.w = (x87_r5_26 < x87_r7_21 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_26, x87_r7_21) ? 1 : 0) << 0xa
                | (x87_r5_26 == x87_r7_21 ? 1 : 0) << 0xe | 0x2800
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (p_1)
                goto label_4f5bfb
            
            float var_30_1 = fconvert.s(float.t(*(arg2 + 0x8c)))
            float var_40_1 = fconvert.s(float.t(*(arg2 + 0x88)))
            x87_r7_21 - x87_r5_26
            float eax_11
            eax_11.w = (x87_r7_21 < x87_r5_26 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_21, x87_r5_26) ? 1 : 0) << 0xa
                | (x87_r7_21 == x87_r5_26 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                var_30_1 = fconvert.s(float.t(*arg7))
            
            float var_40_2 = fconvert.s(fconvert.t(var_3c))
            float edx_20 = var_5c
            var_118 = fconvert.s(fconvert.t(var_70))
            float eax_14
            float edx_22
            eax_14, edx_22 = sub_4f5460(edx_20, edx_2, ecx_4, edx_3, var_118, var_40_2, var_38, ebx_5, 
                var_20, var_1c, var_30_1, var_40_1)
            long double x87_r7_26 = fconvert.t(var_30_1)
            long double x87_r5_29 = float.t(1)
            long double x87_r5_31 = fconvert.t(var_40_1)
            float var_20_2 = fconvert.s(fconvert.t(fconvert.s(x87_r7_26 * fconvert.t(var_28_1))) +
                fconvert.t(fconvert.s(fconvert.t(eax_14)
                * fconvert.t(fconvert.s(x87_r7_26 - x87_r5_29)))))
            float var_1c_2 = fconvert.s(fconvert.t(fconvert.s(x87_r5_31 * fconvert.t(var_24_1))) +
                fconvert.t(fconvert.s(fconvert.t(edx_22)
                * fconvert.t(fconvert.s(x87_r5_31 - x87_r5_29)))))
            float var_3c_1 = fconvert.s(sub_466280(
                fconvert.s(fconvert.t(var_18) / fconvert.t(var_20_2)), 
                fconvert.s(fconvert.t(var_14) / fconvert.t(var_1c_2))))
            long double x87_r6_16 = fconvert.t(var_3c_1)
            float var_30_4 = fconvert.s(fconvert.t(var_28_1) * x87_r6_16)
            float var_2c_4 = fconvert.s(fconvert.t(var_24_1) * x87_r6_16)
            *(ebx_7 + 0xa4)
            var_88 = fconvert.s(fconvert.t(var_20_2) * x87_r6_16)
            float var_84_2 = fconvert.s(x87_r6_16 * fconvert.t(var_1c_2))
            float* eax_17 = sub_5054f0(&var_5c, &var_88)
            long double x87_r6_22 = fconvert.t(var_60_1)
            var_5c = *eax_17
            int32_t var_58_1 = eax_17[1]
            int32_t var_54_1 = eax_17[2]
            int32_t var_50_1 = eax_17[3]
            long double x87_r6_24 = float.t(0)
            float var_10_8 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(var_6c) * x87_r6_22)) + fconvert.t(var_10_7)))
                * x87_r6_24)) + fconvert.t(var_5c))
            float var_28_2 = var_10_8
            long double x87_r5_40 = fconvert.t(var_3c_1)
            ebx_7 = arg2
            long double x87_r6_39 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(float.t(arg5[1]))) * fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(x87_r6_22 * fconvert.t(edx_11))) + fconvert.t(var_c_7)))))
                + fconvert.t(edx_15))) + fconvert.t(fconvert.s(x87_r6_24 * fconvert.t(fconvert.s(
                fconvert.t(fconvert.s(fconvert.t(edx_22) * x87_r5_40)) + fconvert.t(var_2c_4)))))
            float var_cc = fconvert.s(x87_r5_40)
            var_d4_1 = fconvert.s(x87_r6_39)
            var_d8 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(*arg5))) * fconvert
                .t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_14) * x87_r5_40))
                + fconvert.t(var_30_4))))) + fconvert.t(var_10_8))
    void* eax_25 = sub_4f4890(*(ebx_7 + 0xa0))
    int32_t var_a8 = *(eax_25 + 8)
    int32_t var_a4 = *(eax_25 + 0xc)
    int32_t var_a0 = *(eax_25 + 0x10)
    int32_t var_9c = *(eax_25 + 0x14)
    int32_t var_b8 = *(eax_25 + 8)
    int32_t var_ac = *(eax_25 + 0x14)
    int32_t var_b4 = *(eax_25 + 0xc)
    int32_t var_b0 = *(eax_25 + 0x10)
    __builtin_memcpy(arg1, &var_d8, 0x40)
}

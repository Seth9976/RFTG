// 函数名称: sub_64db30
// 虚拟地址: 0x64db30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_64db30(void* arg1, int32_t* arg2, void* arg3, int32_t arg4, float arg5, int32_t arg6)
{
    // 第一条实际指令: void* ebx_2 = arg1 * 4
    void* ebx_2 = arg1 * 4
    float edi
    float var_88 = edi
    __alloca_probe_16(ebx_2)
    __alloca_probe_16(ebx_2)
    __alloca_probe_16(ebx_2)
    __alloca_probe_16(arg1 * 4)
    int32_t* var_58 = &var_88
    __alloca_probe_16(arg1 * 4)
    long double x87_r7 = float.t(0)
    float var_28 = fconvert.s(x87_r7)
    float var_24 = fconvert.s(x87_r7)
    long double x87_r6 = float.t(1)
    float var_2c = fconvert.s(x87_r6)
    float var_8 = fconvert.s(x87_r7)
    float var_c = fconvert.s(x87_r7)
    long double x87_r4 = fconvert.t(arg5)
    long double x87_r5_2 = x87_r4
    long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(*arg3) + x87_r4))
    x87_r4_2 - x87_r6
    float* eax_9
    eax_9.w = (x87_r4_2 < x87_r6 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_2, x87_r6) ? 1 : 0) << 0xa
        | (x87_r4_2 == x87_r6 ? 1 : 0) << 0xe | 0x2000
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        long double temp0_5 = x87_r4_2
        x87_r4_2 = fconvert.t(fconvert.s(x87_r6))
        x87_r5_2 = temp0_5
    
    void* var_1c = 1
    long double x87_r3_4 = fconvert.t(fconvert.s(x87_r4_2 * x87_r4_2 * fconvert.t(0.5)))
    long double x87_r1 = float.t(0)
    long double x87_r1_2 = fconvert.t(fconvert.s(x87_r3_4 + x87_r1))
    float var_18 = fconvert.s(x87_r1_2)
    float var_14 = fconvert.s(x87_r4_2 * x87_r3_4 + x87_r1)
    long double x87_r4_8 = fconvert.t(fconvert.s(x87_r1_2))
    var_88 = fconvert.s(x87_r4_8)
    long double x87_r3_6 = fconvert.t(var_18)
    var_88 = fconvert.s(x87_r3_6)
    long double x87_r6_2 = x87_r3_6
    var_88 = fconvert.s(x87_r7)
    long double x87_r2_4 = fconvert.t(var_14)
    *var_58 = fconvert.s(x87_r2_4)
    long double x87_r3_8 = x87_r2_4
    var_88 = fconvert.s(x87_r7)
    long double x87_r7_3 = x87_r7
    arg5 = fconvert.s(x87_r6)
    long double x87_r1_3 = float.t(1)
    void* var_7c
    long double x87_r5_8
    
    if (arg1 s<= 1)
        x87_r5_8 = x87_r6
        x87_r7_3 = x87_r1_3
    else
        long double x87_r1_49
        long double x87_r3_39
        
        if (arg1 - 1 s< 4)
            long double x87_r1_51 = x87_r7_3
            x87_r7_3 = x87_r6
            long double x87_r1_53 = x87_r6_2
            x87_r6_2 = x87_r1_3
            x87_r3_39 = x87_r1_53
            x87_r1_49 = x87_r1_51
        else
            x87_r4_8 = x87_r1_3
            void* var_3c_1 = &var_58[1]
            int32_t var_78
            int32_t* var_40_1 = &var_78
            int32_t* var_34_1 = &var_7c
            int32_t __saved_ebx
            void* var_30_1 = &__saved_ebx
            var_78 = var_58 - &var_88
            var_7c = 0
            int32_t var_58_1 = ((arg1 - 5) u>> 2) + 1
            var_1c = ((((arg1 - 5) u>> 2) + 1) << 2) + 1
            
            while (true)
                long double x87_r2_10 =
                    fconvert.t(fconvert.s(fconvert.t(*(arg3 - var_58 + var_3c_1)) + x87_r5_2))
                x87_r2_10 - x87_r7_3
                void* eax_37
                eax_37.w = (x87_r2_10 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_10, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r2_10 == x87_r7_3 ? 1 : 0) << 0xe | 0x1000
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (not(p_1))
                    long double temp0_15 = x87_r2_10
                    x87_r2_10 = fconvert.t(fconvert.s(x87_r7_3))
                    x87_r3_8 = temp0_15
                
                long double x87_r1_6 = fconvert.t(fconvert.s(x87_r2_10 * x87_r2_10))
                long double x87_r1_9 = fconvert.t(arg5) * x87_r1_6
                float var_18_1 = fconvert.s(x87_r6_2 + x87_r1_9)
                float var_c_1 = fconvert.s(fconvert.t(arg5) * x87_r1_9 + fconvert.t(var_c))
                float var_14_1 = fconvert.s(x87_r1_6 * x87_r2_10 + fconvert.t(var_14))
                x87_r6_2 = x87_r3_8
                float var_8_1 = fconvert.s(x87_r1_9 * x87_r2_10 + fconvert.t(var_8))
                long double x87_r4_16 = fconvert.t(fconvert.s(x87_r4_8 + x87_r1_6))
                *(var_30_1 - 4) = fconvert.s(x87_r4_16)
                long double x87_r3_15 = fconvert.t(var_18_1)
                var_34_1[-2] = fconvert.s(x87_r3_15)
                var_40_1[-3] = fconvert.s(fconvert.t(var_c_1))
                *var_3c_1 = fconvert.s(fconvert.t(var_14_1))
                *(&var_88 - var_58 + var_3c_1) = fconvert.s(fconvert.t(var_8_1))
                arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
                long double x87_r2_22 =
                    fconvert.t(fconvert.s(fconvert.t(*(arg3 - &var_88 + var_30_1)) + x87_r5_2))
                x87_r2_22 - x87_r7_3
                void* eax_42
                eax_42.w = (x87_r2_22 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_22, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r2_22 == x87_r7_3 ? 1 : 0) << 0xe | 0x1000
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (not(p_2))
                    long double temp0_24 = x87_r2_22
                    x87_r2_22 = fconvert.t(fconvert.s(x87_r7_3))
                    x87_r3_15 = temp0_24
                
                long double x87_r1_18 = fconvert.t(fconvert.s(x87_r2_22 * x87_r2_22))
                long double x87_r1_21 = fconvert.t(arg5) * x87_r1_18
                float var_18_2 = fconvert.s(x87_r3_15 + x87_r1_21)
                float var_c_2 = fconvert.s(fconvert.t(arg5) * x87_r1_21 + fconvert.t(var_c_1))
                float var_14_2 = fconvert.s(x87_r1_18 * x87_r2_22 + fconvert.t(var_14_1))
                float var_8_2 = fconvert.s(x87_r2_22 * x87_r1_21 + fconvert.t(var_8_1))
                long double x87_r4_24 = fconvert.t(fconvert.s(x87_r4_16 + x87_r1_18))
                *var_30_1 = fconvert.s(x87_r4_24)
                *var_30_1 = fconvert.s(fconvert.t(var_18_2))
                *var_30_1 = fconvert.s(fconvert.t(var_c_2))
                *(var_58 - &var_88 + var_30_1) = fconvert.s(fconvert.t(var_14_2))
                *var_30_1 = fconvert.s(fconvert.t(var_8_2))
                arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
                long double x87_r3_29 =
                    fconvert.t(fconvert.s(fconvert.t(*(arg3 - &var_88 + var_34_1)) + x87_r5_2))
                x87_r3_29 - x87_r7_3
                void* eax_47
                eax_47.w = (x87_r3_29 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_29, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r3_29 == x87_r7_3 ? 1 : 0) << 0xe | 0x1800
                bool p_3 = unimplemented  {test ah, 0x5}
                
                if (not(p_3))
                    long double temp0_31 = x87_r3_29
                    x87_r3_29 = fconvert.t(fconvert.s(x87_r7_3))
                    x87_r4_24 = temp0_31
                
                long double x87_r2_29 = fconvert.t(fconvert.s(x87_r3_29 * x87_r3_29))
                long double x87_r2_31 = fconvert.t(arg5)
                long double x87_r1_30 = x87_r2_31 * x87_r2_29
                float var_18_3 = fconvert.s(fconvert.t(var_18_2) + x87_r1_30)
                float var_c_3 = fconvert.s(x87_r2_31 * x87_r1_30 + fconvert.t(var_c_2))
                float var_14_3 = fconvert.s(x87_r2_29 * x87_r3_29 + fconvert.t(var_14_2))
                float var_8_3 = fconvert.s(x87_r1_30 * x87_r3_29 + fconvert.t(var_8_2))
                long double x87_r4_35 = fconvert.t(fconvert.s(x87_r4_24 + x87_r2_29))
                *(var_30_1 + 4) = fconvert.s(x87_r4_35)
                long double x87_r3_33 = fconvert.t(var_18_3)
                *var_34_1 = fconvert.s(x87_r3_33)
                *var_34_1 = fconvert.s(fconvert.t(var_c_3))
                *(var_58 - &var_88 + var_34_1) = fconvert.s(fconvert.t(var_14_3))
                *var_34_1 = fconvert.s(fconvert.t(var_8_3))
                arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
                long double x87_r2_43 =
                    fconvert.t(fconvert.s(fconvert.t(*(arg3 - &var_88 + var_40_1)) + x87_r5_2))
                x87_r2_43 - x87_r7_3
                float* eax_52
                eax_52.w = (x87_r2_43 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_43, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r2_43 == x87_r7_3 ? 1 : 0) << 0xe | 0x1000
                bool p_4 = unimplemented  {test ah, 0x5}
                
                if (not(p_4))
                    long double temp0_38 = x87_r2_43
                    x87_r2_43 = fconvert.t(fconvert.s(x87_r7_3))
                    x87_r3_33 = temp0_38
                
                void* eax_53 = var_30_1
                var_30_1 += 0x10
                var_3c_1 += 0x10
                void* edx_7 = &var_40_1[4]
                var_40_1 = edx_7
                long double x87_r1_36 = fconvert.t(fconvert.s(x87_r2_43 * x87_r2_43))
                long double x87_r1_39 = fconvert.t(arg5) * x87_r1_36
                float var_18_4 = fconvert.s(x87_r3_33 + x87_r1_39)
                var_c = fconvert.s(fconvert.t(arg5) * x87_r1_39 + fconvert.t(var_c_3))
                var_14 = fconvert.s(x87_r1_36 * x87_r2_43 + fconvert.t(var_14_3))
                var_8 = fconvert.s(x87_r2_43 * x87_r1_39 + fconvert.t(var_8_3))
                x87_r4_8 = fconvert.t(fconvert.s(x87_r4_35 + x87_r1_36))
                *(eax_53 + 8) = fconvert.s(x87_r4_8)
                int32_t* eax_54 = var_34_1
                x87_r3_39 = fconvert.t(var_18_4)
                var_34_1 = &var_34_1[4]
                int32_t temp7_1 = var_58_1
                var_58_1 -= 1
                eax_54[1] = fconvert.s(x87_r3_39)
                int32_t eax_55 = var_78
                *(edx_7 - 0x10) = fconvert.s(fconvert.t(var_c))
                long double x87_r2_7 = fconvert.t(var_14)
                *(eax_55 + edx_7 - 0x10) = fconvert.s(x87_r2_7)
                *(var_7c + edx_7 - 0x10) = fconvert.s(fconvert.t(var_8))
                arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
                
                if (temp7_1 == 1)
                    break
                
                x87_r3_8 = x87_r6_2
                x87_r6_2 = x87_r2_7
            
            x87_r1_49 = float.t(0)
        
        if (var_1c s>= arg1)
            x87_r5_8 = x87_r4_8
        else
            long double x87_r2_51 = x87_r1_49
            var_7c = &(&var_88)[var_1c]
            int32_t eax_59 = arg3 - &var_88
            void* edx_9 = var_7c
            arg3 = arg1 - var_1c
            void* i
            
            do
                float var_10_10 = fconvert.s(fconvert.t(*(edx_9 + eax_59)) + x87_r5_2)
                long double temp3_1 = fconvert.t(var_10_10)
                x87_r7_3 - temp3_1
                int32_t eax_67
                eax_67.w = (x87_r7_3 < temp3_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_3, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe | 0x1000
                
                if ((eax_67:1.b & 0x41) == 0)
                    var_10_10 = fconvert.s(x87_r7_3)
                
                long double x87_r1_57 = fconvert.t(var_10_10)
                edx_9 += 4
                i = arg3
                arg3 -= 1
                long double x87_r1_59 = fconvert.t(fconvert.s(x87_r1_57 * x87_r1_57))
                long double x87_r1_62 = fconvert.t(arg5) * x87_r1_59
                float var_18_5 = fconvert.s(x87_r3_39 + x87_r1_62)
                var_c = fconvert.s(fconvert.t(arg5) * x87_r1_62 + fconvert.t(var_c))
                long double x87_r1_67 = fconvert.t(var_10_10)
                float var_14_4 = fconvert.s(x87_r2_51 + x87_r1_59 * x87_r1_67)
                var_8 = fconvert.s(x87_r1_67 * x87_r1_62 + fconvert.t(var_8))
                x87_r4_8 = fconvert.t(fconvert.s(x87_r4_8 + x87_r1_59))
                *(edx_9 - 4) = fconvert.s(x87_r4_8)
                x87_r3_39 = fconvert.t(var_18_5)
                *(edx_9 - 4) = fconvert.s(x87_r3_39)
                *(edx_9 - 4) = fconvert.s(fconvert.t(var_c))
                x87_r2_51 = fconvert.t(var_14_4)
                *(edx_9 + var_58 - &var_88 - 4) = fconvert.s(x87_r2_51)
                *(edx_9 - 4) = fconvert.s(fconvert.t(var_8))
                arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
            while (i != 1)
            x87_r5_8 = x87_r7_3
            x87_r7_3 = float.t(0)
    
    long double x87_r5_9 = x87_r7_3
    int32_t edx_11 = *arg2
    arg5 = fconvert.s(x87_r5_9)
    int32_t eax_73 = edx_11 s>> 0x10
    void* var_1c_1 = nullptr
    long double x87_r2_55
    long double x87_r3_45
    long double x87_r4_71
    long double x87_r5_11
    
    if (eax_73 s>= 0)
        x87_r3_45 = fconvert.t(var_24)
        x87_r4_71 = fconvert.t(var_2c)
        x87_r2_55 = x87_r5_9
        x87_r5_11 = fconvert.t(var_28)
    else
        float* var_34_2 = nullptr
        
        while (true)
            int32_t edx_12 = edx_11 & 0xffff
            float var_c_4 =
                fconvert.s(fconvert.t((&var_88)[edx_12]) + fconvert.t((&var_88)[neg.d(eax_73)]))
            float var_8_4 =
                fconvert.s(fconvert.t((&var_88)[edx_12]) - fconvert.t(*(neg.d(eax_73) * 4 + &var_88)))
            long double x87_r4_61 =
                fconvert.t(fconvert.s(fconvert.t(var_58[edx_12]) + fconvert.t(var_58[neg.d(eax_73)])))
            long double x87_r1_72 = fconvert.t(fconvert.s(fconvert.t((&var_88)[edx_12])
                - fconvert.t((&var_88)[neg.d(eax_73)])))
            long double x87_r1_74 = fconvert.t(fconvert.s(fconvert.t((&var_88)[edx_12])
                + fconvert.t((&var_88)[neg.d(eax_73)])))
            x87_r3_45 = fconvert.t(fconvert.s(fconvert.t(var_8_4) * x87_r1_74 - x87_r4_61 * x87_r1_72))
            long double x87_r2_65 = fconvert.t(fconvert.s(x87_r4_61 * fconvert.t(var_c_4)
                - fconvert.t(var_8_4) * x87_r1_72))
            long double x87_r1_77 =
                fconvert.t(fconvert.s(x87_r1_74 * fconvert.t(var_c_4) - x87_r1_72 * x87_r1_72))
            x87_r4_71 = x87_r1_77
            arg3 = fconvert.s((fconvert.t(arg5) * x87_r3_45 + x87_r2_65) / x87_r1_77)
            x87_r2_55 = x87_r5_9
            x87_r5_11 = x87_r2_65
            long double temp1_1 = fconvert.t(arg3)
            x87_r2_55 - temp1_1
            
            if ((((x87_r2_55 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_55, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r2_55 == temp1_1 ? 1 : 0) << 0xe | 0x1000):1.b & 0x41) == 0)
                arg3 = fconvert.s(x87_r2_55)
            
            *(var_34_2 + arg4) = fconvert.s(fconvert.t(arg3) - x87_r5_8)
            void* eax_80 = var_1c_1 + 1
            var_1c_1 = eax_80
            float* eax_82 = eax_80 * 4
            arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
            edx_11 = *(eax_82 + arg2)
            var_34_2 = eax_82
            eax_73 = edx_11 s>> 0x10
            
            if (eax_73 s>= 0)
                break
            
            x87_r6_2 = x87_r3_45
            x87_r5_9 = x87_r2_55
    
    int32_t* eax_86 = var_1c_1 * 4
    int32_t* var_34_3 = eax_86
    int32_t eax_87 = *(eax_86 + arg2)
    int32_t eax_88 = eax_87 & 0xffff
    arg3 = eax_87 s>> 0x10
    
    while (eax_88 s< arg1)
        x87_r6_2 = x87_r3_45
        float var_c_5 = fconvert.s(fconvert.t((&var_88)[eax_88]) - fconvert.t((&var_88)[arg3]))
        float var_8_5 = fconvert.s(fconvert.t((&var_88)[eax_88]) - fconvert.t((&var_88)[arg3]))
        long double x87_r4_84 =
            fconvert.t(fconvert.s(fconvert.t(var_58[eax_88]) - fconvert.t(var_58[arg3])))
        long double x87_r1_83 =
            fconvert.t(fconvert.s(fconvert.t((&var_88)[eax_88]) - fconvert.t((&var_88)[arg3])))
        long double x87_r1_85 =
            fconvert.t(fconvert.s(fconvert.t((&var_88)[eax_88]) - fconvert.t((&var_88)[arg3])))
        x87_r3_45 = fconvert.t(fconvert.s(fconvert.t(var_8_5) * x87_r1_85 - x87_r4_84 * x87_r1_83))
        long double x87_r2_77 =
            fconvert.t(fconvert.s(x87_r4_84 * fconvert.t(var_c_5) - fconvert.t(var_8_5) * x87_r1_83))
        long double x87_r1_88 =
            fconvert.t(fconvert.s(x87_r1_85 * fconvert.t(var_c_5) - x87_r1_83 * x87_r1_83))
        x87_r4_71 = x87_r1_88
        arg3 = fconvert.s((fconvert.t(arg5) * x87_r3_45 + x87_r2_77) / x87_r1_88)
        x87_r5_11 = x87_r2_77
        long double temp2_1 = fconvert.t(arg3)
        x87_r2_55 - temp2_1
        void* eax_89
        eax_89.w = (x87_r2_55 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_55, temp2_1) ? 1 : 0) << 0xa
            | (x87_r2_55 == temp2_1 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_89:1.b & 0x41) == 0)
            arg3 = fconvert.s(x87_r2_55)
        
        *(var_34_3 + arg4) = fconvert.s(fconvert.t(arg3) - x87_r5_8)
        void* eax_92 = var_1c_1 + 1
        var_1c_1 = eax_92
        int32_t* eax_94 = eax_92 * 4
        arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
        var_34_3 = eax_94
        int32_t eax_95 = *(eax_94 + arg2)
        eax_88 = eax_95 & 0xffff
        arg3 = eax_95 s>> 0x10
    
    void* edx_24 = var_1c_1
    
    while (edx_24 s< arg1)
        arg3 = fconvert.s((fconvert.t(arg5) * x87_r3_45 + x87_r5_11) / x87_r4_71)
        long double temp4_1 = fconvert.t(arg3)
        x87_r2_55 - temp4_1
        eax_88.w = (x87_r2_55 < temp4_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_55, temp4_1) ? 1 : 0) << 0xa
            | (x87_r2_55 == temp4_1 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_88:1.b & 0x41) == 0)
            arg3 = fconvert.s(x87_r2_55)
        
        edx_24 += 1
        *(arg4 + (edx_24 << 2) - 4) = fconvert.s(fconvert.t(arg3) - x87_r5_8)
        arg5 = fconvert.s(fconvert.t(arg5) + x87_r6_2)
    
    if (arg6 s<= 0)
        return x87_r5_11
    
    int32_t eax_97
    int32_t edx_25
    edx_25:eax_97 = sx.q(arg6)
    arg5 = fconvert.s(x87_r2_55)
    int32_t eax_99 = (eax_97 - edx_25) s>> 1
    arg2 = eax_99
    void* var_1c_2 = nullptr
    
    if (eax_99 - arg6 s< 0)
        var_7c = arg2 * 4
        void* var_50_3 = arg2 - arg6
        void* var_54_3 = arg2 * 4
        int32_t eax_112 = neg.d(eax_99 - arg6) * 4
        float* var_58_2 = (arg6 - arg2) * 4
        arg3 = eax_112
        float* edx_30 = eax_112
        void* eax_113 = var_7c
        void* temp8_1
        
        do
            x87_r6_2 = x87_r5_11
            float var_8_6 = fconvert.s(fconvert.t(*(eax_113 + &var_88)) - fconvert.t(*(arg3 + &var_88)))
            long double x87_r5_23 =
                fconvert.t(fconvert.s(fconvert.t(*(edx_30 + var_58)) + fconvert.t(*(eax_113 + var_58))))
            long double x87_r3_54 = fconvert.t(fconvert.s(fconvert.t(*(edx_30 + &var_88))
                + fconvert.t(*(eax_113 + &var_88))))
            long double x87_r1_102 = fconvert.t(fconvert.s(fconvert.t(*(eax_113 + &var_88))
                - fconvert.t(*(edx_30 + &var_88))))
            long double x87_r1_104 = fconvert.t(fconvert.s(fconvert.t(*(edx_30 + &var_88))
                + fconvert.t(*(eax_113 + &var_88))))
            long double x87_r5_29 = fconvert.t(arg5)
            x87_r3_45 =
                fconvert.t(fconvert.s(fconvert.t(var_8_6) * x87_r1_104 - x87_r5_23 * x87_r1_102))
            long double x87_r2_87 =
                fconvert.t(fconvert.s(x87_r5_23 * x87_r3_54 - fconvert.t(var_8_6) * x87_r1_102))
            long double x87_r1_107 =
                fconvert.t(fconvert.s(x87_r1_104 * x87_r3_54 - x87_r1_102 * x87_r1_102))
            x87_r4_71 = x87_r1_107
            long double x87_r1_110 =
                fconvert.t(fconvert.s((x87_r5_29 * x87_r3_45 + x87_r2_87) / x87_r1_107)) - x87_r5_8
            long double x87_r0_25 = fconvert.t(*(arg4 + (var_1c_2 << 2)))
            x87_r0_25 - x87_r1_110
            int32_t eax_115
            eax_115.w = (x87_r0_25 < x87_r1_110 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_25, x87_r1_110) ? 1 : 0) << 0xa
                | (x87_r0_25 == x87_r1_110 ? 1 : 0) << 0xe | 0x800
            
            if ((eax_115:1.b & 0x41) != 0)
                x87_r2_87 = x87_r1_110
            else
                *(arg4 + (var_1c_2 << 2)) = fconvert.s(x87_r1_110)
            
            var_54_3 += 4
            x87_r5_11 = x87_r2_87
            eax_113 = var_54_3
            var_1c_2 += 1
            arg5 = fconvert.s(x87_r5_29 + x87_r6_2)
            edx_30 = var_58_2 - 4
            temp8_1 = var_50_3
            var_50_3 += 1
            var_58_2 = edx_30
            arg3 = edx_30
        while (temp8_1 + 1 s< 0)
    
    void* eax_118 = var_1c_2 + arg2
    void* edx_34 = arg1
    var_7c = eax_118
    int32_t* eax_120 = var_7c
    
    if (eax_120 s< edx_34)
        int32_t* var_54_4 = eax_120
        arg3 = (eax_118 - arg6) * 4
        int32_t var_58_3 = eax_120 * 4
        int32_t var_50_4 = eax_120 << 2
        arg2 = (arg2 - arg6 + var_1c_2) * 4
        void* edx_43
        
        do
            float* edx_39 = arg3
            x87_r6_2 = x87_r5_11
            float var_8_7 =
                fconvert.s(fconvert.t(*(var_50_4 + &var_88)) - fconvert.t(*(arg3 + &var_88)))
            long double x87_r5_40 = fconvert.t(fconvert.s(fconvert.t(*(var_50_4 + var_58))
                - fconvert.t(*(edx_39 + var_58))))
            long double x87_r3_55 = fconvert.t(fconvert.s(fconvert.t(*(var_50_4 + &var_88))
                - fconvert.t(*(edx_39 + &var_88))))
            long double x87_r1_111 = fconvert.t(fconvert.s(fconvert.t(*(var_50_4 + &var_88))
                - fconvert.t(*(edx_39 + &var_88))))
            long double x87_r1_113 = fconvert.t(fconvert.s(fconvert.t(*(var_50_4 + &var_88))
                - fconvert.t(*(edx_39 + &var_88))))
            long double x87_r5_46 = fconvert.t(arg5)
            x87_r3_45 =
                fconvert.t(fconvert.s(fconvert.t(var_8_7) * x87_r1_113 - x87_r5_40 * x87_r1_111))
            long double x87_r2_99 =
                fconvert.t(fconvert.s(x87_r5_40 * x87_r3_55 - fconvert.t(var_8_7) * x87_r1_111))
            long double x87_r1_116 =
                fconvert.t(fconvert.s(x87_r1_113 * x87_r3_55 - x87_r1_111 * x87_r1_111))
            x87_r4_71 = x87_r1_116
            long double x87_r1_119 =
                fconvert.t(fconvert.s((x87_r5_46 * x87_r3_45 + x87_r2_99) / x87_r1_116)) - x87_r5_8
            long double x87_r0_30 = fconvert.t(*(arg4 + (var_1c_2 << 2)))
            x87_r0_30 - x87_r1_119
            int32_t eax_130
            eax_130.w = (x87_r0_30 < x87_r1_119 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_30, x87_r1_119) ? 1 : 0) << 0xa
                | (x87_r0_30 == x87_r1_119 ? 1 : 0) << 0xe | 0x800
            
            if ((eax_130:1.b & 0x41) != 0)
                x87_r2_99 = x87_r1_119
            else
                *(arg4 + (var_1c_2 << 2)) = fconvert.s(x87_r1_119)
            
            x87_r5_11 = x87_r2_99
            arg2 = &arg2[1]
            int32_t eax_133 = var_58_3 + 4
            var_1c_2 += 1
            arg5 = fconvert.s(x87_r5_46 + x87_r6_2)
            edx_43 = var_54_4 + 1
            var_58_3 = eax_133
            var_50_4 = eax_133
            var_54_4 = edx_43
            arg3 = arg2
        while (edx_43 s< arg1)
        edx_34 = arg1
    
    void* esi = var_1c_2
    
    if (esi s< edx_34)
        if (edx_34 - esi s>= 4)
            int32_t i_2 = ((edx_34 - esi - 4) u>> 2) + 1
            float* edi_1 = arg4 + (esi << 2) + 8
            int32_t* var_1c_3 = esi + (i_2 << 2)
            int32_t i_1
            
            do
                long double x87_r2_102 = fconvert.t(arg5)
                long double x87_r1_125 =
                    fconvert.t(fconvert.s((x87_r2_102 * x87_r3_45 + x87_r5_11) / x87_r4_71)) - x87_r5_8
                long double x87_r0_31 = fconvert.t(edi_1[-2])
                x87_r0_31 - x87_r1_125
                eax_120.w = (x87_r0_31 < x87_r1_125 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_31, x87_r1_125) ? 1 : 0) << 0xa
                    | (x87_r0_31 == x87_r1_125 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_120:1.b & 0x41) != 0)
                    x87_r2_102 = x87_r1_125
                else
                    edi_1[-2] = fconvert.s(x87_r1_125)
                
                long double x87_r2_104 = fconvert.t(fconvert.s(x87_r2_102 + x87_r6_2))
                long double x87_r1_131 =
                    fconvert.t(fconvert.s((x87_r2_104 * x87_r3_45 + x87_r5_11) / x87_r4_71)) - x87_r5_8
                long double x87_r0_32 = fconvert.t(edi_1[-1])
                x87_r0_32 - x87_r1_131
                eax_120.w = (x87_r0_32 < x87_r1_131 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_32, x87_r1_131) ? 1 : 0) << 0xa
                    | (x87_r0_32 == x87_r1_131 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_120:1.b & 0x41) != 0)
                    x87_r2_104 = x87_r1_131
                else
                    edi_1[-1] = fconvert.s(x87_r1_131)
                
                long double x87_r2_106 = fconvert.t(fconvert.s(x87_r2_104 + x87_r6_2))
                long double x87_r1_137 =
                    fconvert.t(fconvert.s((x87_r2_106 * x87_r3_45 + x87_r5_11) / x87_r4_71)) - x87_r5_8
                long double x87_r0_33 = fconvert.t(*edi_1)
                x87_r0_33 - x87_r1_137
                eax_120.w = (x87_r0_33 < x87_r1_137 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_33, x87_r1_137) ? 1 : 0) << 0xa
                    | (x87_r0_33 == x87_r1_137 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_120:1.b & 0x41) != 0)
                    x87_r2_106 = x87_r1_137
                else
                    *edi_1 = fconvert.s(x87_r1_137)
                
                long double x87_r2_108 = fconvert.t(fconvert.s(x87_r2_106 + x87_r6_2))
                long double x87_r1_143 =
                    fconvert.t(fconvert.s((x87_r2_108 * x87_r3_45 + x87_r5_11) / x87_r4_71)) - x87_r5_8
                long double x87_r0_34 = fconvert.t(edi_1[1])
                x87_r0_34 - x87_r1_143
                eax_120.w = (x87_r0_34 < x87_r1_143 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r0_34, x87_r1_143) ? 1 : 0) << 0xa
                    | (x87_r0_34 == x87_r1_143 ? 1 : 0) << 0xe | 0x800
                
                if ((eax_120:1.b & 0x41) != 0)
                    x87_r2_108 = x87_r1_143
                else
                    edi_1[1] = fconvert.s(x87_r1_143)
                
                edi_1 = &edi_1[4]
                i_1 = i_2
                i_2 -= 1
                arg5 = fconvert.s(x87_r2_108 + x87_r6_2)
            while (i_1 != 1)
            esi = var_1c_3
        
        while (esi s< edx_34)
            long double x87_r2_110 = fconvert.t(arg5)
            long double x87_r1_149 =
                fconvert.t(fconvert.s((x87_r2_110 * x87_r3_45 + x87_r5_11) / x87_r4_71)) - x87_r5_8
            long double x87_r0_35 = fconvert.t(*(arg4 + (esi << 2)))
            x87_r0_35 - x87_r1_149
            eax_120.w = (x87_r0_35 < x87_r1_149 ? 1 : 0) << 8
                | (is_unordered.t(x87_r0_35, x87_r1_149) ? 1 : 0) << 0xa
                | (x87_r0_35 == x87_r1_149 ? 1 : 0) << 0xe | 0x800
            
            if ((eax_120:1.b & 0x41) != 0)
                x87_r2_110 = x87_r1_149
            else
                *(arg4 + (esi << 2)) = fconvert.s(x87_r1_149)
            
            esi += 1
            arg5 = fconvert.s(x87_r2_110 + x87_r6_2)
    
    return x87_r4_71
}

// 函数名称: sub_4dee00
// 虚拟地址: 0x4dee00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4dee00(float* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(1)
    long double temp1 = fconvert.t(arg2[3])
    x87_r7 - temp1
    int32_t* ecx = data_30d73a4
    int32_t* eax_2
    eax_2.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe
    
    if ((eax_2:1.b & 0x41) == 0)
        ecx = data_30d73ac
    
    float* entry_ebx
    int32_t eax_4 = sub_4dc630(ecx, 0x40, entry_ebx[1], entry_ebx[2], entry_ebx[3])
    int32_t var_6c = 0
    int32_t var_70 = 0
    
    while (true)
        long double x87_r7_1 = fconvert.t(data_be1acc)
        long double x87_r6_1 = fconvert.t(0.125)
        int32_t eax_6 = var_70 + 1
        float var_50_1 = fconvert.s(fconvert.t(fconvert.s(float.t(var_70) * x87_r6_1)) * x87_r7_1)
        float var_5c_1 = fconvert.s(x87_r7_1 * fconvert.t(fconvert.s(x87_r6_1 * float.t(eax_6))))
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_686860(mxcsr, x87control, fconvert.t(var_50_1))
        float var_1a4_1 = fconvert.s(fconvert.t(fconvert.s(st0_1)) * fconvert.t(*entry_ebx))
        int32_t ecx_1
        long double st0_2
        st0_2, ecx_1 = sub_686860(mxcsr, x87control_1, fconvert.t(var_5c_1))
        int32_t var_204_1 = ecx_1
        int32_t esi_1 = 0
        int32_t var_58_4 = 0
        float var_17c_1 = fconvert.s(fconvert.t(fconvert.s(st0_2)) * fconvert.t(*entry_ebx))
        float var_10c_1 = fconvert.s(sub_406680(fconvert.s(fconvert.t(var_50_1))))
        long double st0_4
        st0_4, x87control = sub_406680(fconvert.s(fconvert.t(var_5c_1)))
        void* var_64_1 = var_6c * 0xa0 + eax_4 + 0x18
        
        while (true)
            long double x87_r6_3 = fconvert.t(0.125)
            long double x87_r5_5 = fconvert.t(data_30d7344)
            float var_5c_2 = fconvert.s(float.t(var_58_4) * x87_r6_3 * x87_r5_5)
            float var_50_2 = fconvert.s(x87_r5_5 * x87_r6_3 * float.t(esi_1 + 1))
            int16_t x87control_2
            long double st0_5
            st0_5, x87control_2 = sub_686860(mxcsr, x87control, fconvert.t(var_5c_2))
            float var_94_1 = fconvert.s(fconvert.t(fconvert.s(st0_5)) * fconvert.t(*entry_ebx))
            int32_t ecx_4
            long double st0_6
            st0_6, ecx_4 = sub_686860(mxcsr, x87control_2, fconvert.t(var_50_2))
            int32_t var_204_4 = ecx_4
            float var_4c_1 = fconvert.s(fconvert.t(fconvert.s(st0_6)) * fconvert.t(*entry_ebx))
            float var_60_3 =
                fconvert.s(sub_406680(fconvert.s(fconvert.t(var_5c_2))) * fconvert.t(*entry_ebx))
            float var_5c_3 =
                fconvert.s(sub_406680(fconvert.s(fconvert.t(var_50_2))) * fconvert.t(*entry_ebx))
            long double x87_r7_34 = fconvert.t(var_10c_1)
            long double x87_r5_7 = fconvert.t(var_94_1)
            long double x87_r4_3 = fconvert.t(var_60_3)
            long double x87_r4_11 =
                fconvert.t(fconvert.s(fconvert.t(entry_ebx[3]) + fconvert.t(var_1a4_1)))
            long double x87_r2_1 = fconvert.t(var_4c_1)
            long double x87_r2_3 = fconvert.t(var_5c_3)
            float var_1a0_1 =
                fconvert.s(fconvert.t(fconvert.s(x87_r7_34 * x87_r2_1)) + fconvert.t(entry_ebx[1]))
            float var_19c_1 =
                fconvert.s(fconvert.t(fconvert.s(x87_r7_34 * x87_r2_3)) + fconvert.t(entry_ebx[2]))
            long double x87_r3_6 = fconvert.t(fconvert.s(st0_4))
            float var_150_1 =
                fconvert.s(fconvert.t(fconvert.s(x87_r5_7 * x87_r3_6)) + fconvert.t(entry_ebx[1]))
            float var_14c_1 =
                fconvert.s(fconvert.t(fconvert.s(x87_r4_3 * x87_r3_6)) + fconvert.t(entry_ebx[2]))
            long double x87_r4_20 =
                fconvert.t(fconvert.s(fconvert.t(entry_ebx[3]) + fconvert.t(var_17c_1)))
            float var_178_1 =
                fconvert.s(fconvert.t(fconvert.s(x87_r2_1 * x87_r3_6)) + fconvert.t(entry_ebx[1]))
            float var_174_1 =
                fconvert.s(fconvert.t(fconvert.s(x87_r2_3 * x87_r3_6)) + fconvert.t(entry_ebx[2]))
            long double x87_r7_39 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_34 * x87_r4_3))
                + fconvert.t(entry_ebx[2])))
            long double x87_r4_22 = fconvert.t(fconvert.s(fconvert.t(entry_ebx[1])
                + fconvert.t(fconvert.s(x87_r7_34 * x87_r5_7))))
            long double x87_r4_24 = fconvert.t(fconvert.s(x87_r4_11))
            float var_d8_1 = fconvert.s(fconvert.t(*arg1) * x87_r4_22 + x87_r7_39 * fconvert.t(arg1[1])
                + x87_r4_24 * fconvert.t(arg1[2]) + fconvert.t(arg1[3]))
            float var_3c = var_d8_1
            float var_d4_1 = fconvert.s(x87_r4_22 * fconvert.t(arg1[4])
                + fconvert.t(arg1[5]) * x87_r7_39 + x87_r4_24 * fconvert.t(arg1[6])
                + fconvert.t(arg1[7]))
            float var_38_1 = var_d4_1
            float var_d0_1 = fconvert.s(x87_r4_24 * fconvert.t(arg1[0xa])
                + x87_r4_22 * fconvert.t(arg1[8]) + x87_r7_39 * fconvert.t(arg1[9])
                + fconvert.t(arg1[0xb]))
            long double x87_r7_45 = fconvert.t(var_19c_1)
            float var_34_1 = var_d0_1
            long double x87_r4_33 = fconvert.t(var_1a0_1)
            long double x87_r4_35 = fconvert.t(fconvert.s(x87_r4_11))
            float var_90_1 = fconvert.s(fconvert.t(*arg1) * x87_r4_33 + x87_r7_45 * fconvert.t(arg1[1])
                + x87_r4_35 * fconvert.t(arg1[2]) + fconvert.t(arg1[3]))
            float var_30_1 = var_90_1
            float var_8c_1 = fconvert.s(x87_r4_33 * fconvert.t(arg1[4])
                + fconvert.t(arg1[5]) * x87_r7_45 + x87_r4_35 * fconvert.t(arg1[6])
                + fconvert.t(arg1[7]))
            float var_2c_1 = var_8c_1
            float var_88_1 = fconvert.s(x87_r4_35 * fconvert.t(arg1[0xa])
                + x87_r4_33 * fconvert.t(arg1[8]) + x87_r7_45 * fconvert.t(arg1[9])
                + fconvert.t(arg1[0xb]))
            long double x87_r7_51 = fconvert.t(var_14c_1)
            float var_28_1 = var_88_1
            long double x87_r4_44 = fconvert.t(var_150_1)
            long double x87_r4_46 = fconvert.t(fconvert.s(x87_r4_20))
            float var_80_1 = fconvert.s(fconvert.t(*arg1) * x87_r4_44 + x87_r7_51 * fconvert.t(arg1[1])
                + x87_r4_46 * fconvert.t(arg1[2]) + fconvert.t(arg1[3]))
            float var_24_1 = var_80_1
            float var_7c_1 = fconvert.s(x87_r4_44 * fconvert.t(arg1[4])
                + fconvert.t(arg1[5]) * x87_r7_51 + x87_r4_46 * fconvert.t(arg1[6])
                + fconvert.t(arg1[7]))
            float var_78_1 = fconvert.s(x87_r4_46 * fconvert.t(arg1[0xa])
                + x87_r4_44 * fconvert.t(arg1[8]) + x87_r7_51 * fconvert.t(arg1[9])
                + fconvert.t(arg1[0xb]))
            long double x87_r7_57 = fconvert.t(var_174_1)
            float var_20_1 = var_7c_1
            long double x87_r4_55 = fconvert.t(var_178_1)
            float var_1c_1 = var_78_1
            long double x87_r4_57 = fconvert.t(fconvert.s(x87_r4_20))
            float var_b8_1 = fconvert.s(fconvert.t(*arg1) * x87_r4_55 + x87_r7_57 * fconvert.t(arg1[1])
                + x87_r4_57 * fconvert.t(arg1[2]) + fconvert.t(arg1[3]))
            float var_18_1 = var_b8_1
            float var_b4_1 = fconvert.s(x87_r4_55 * fconvert.t(arg1[4])
                + fconvert.t(arg1[5]) * x87_r7_57 + x87_r4_57 * fconvert.t(arg1[6])
                + fconvert.t(arg1[7]))
            float var_14_1 = var_b4_1
            float var_b0_1 = fconvert.s(x87_r4_57 * fconvert.t(arg1[0xa])
                + x87_r4_55 * fconvert.t(arg1[8]) + x87_r7_57 * fconvert.t(arg1[9])
                + fconvert.t(arg1[0xb]))
            float var_10_1 = var_b0_1
            float eax_13
            float ecx_9
            float edx_8
            
            if (var_70 != 0)
                long double x87_r7_83 = fconvert.t(var_90_1)
                float var_204_9 = var_b8_1
                long double x87_r6_57 = fconvert.t(var_8c_1)
                long double x87_r5_64 = fconvert.t(var_88_1)
                long double x87_r7_87 = fconvert.t(fconvert.s(fconvert.t(var_7c_1) - x87_r6_57))
                long double x87_r5_66 = fconvert.t(fconvert.s(x87_r5_64 - fconvert.t(var_d0_1)))
                long double x87_r4_80 = fconvert.t(fconvert.s(fconvert.t(var_78_1) - x87_r5_64))
                long double x87_r2_15 = fconvert.t(fconvert.s(x87_r6_57 - fconvert.t(var_d4_1)))
                float var_c8_1 = fconvert.s(x87_r7_87 * x87_r5_66 - x87_r4_80 * x87_r2_15)
                long double x87_r3_51 = fconvert.t(fconvert.s(x87_r7_83 - fconvert.t(var_d8_1)))
                long double x87_r2_18 = fconvert.t(fconvert.s(fconvert.t(var_80_1) - x87_r7_83))
                float var_c4_1 = fconvert.s(x87_r4_80 * x87_r3_51 - x87_r5_66 * x87_r2_18)
                float var_c0_1 = fconvert.s(x87_r2_15 * x87_r2_18 - x87_r7_87 * x87_r3_51)
                long double x87_r7_90 = fconvert.t(var_c8_1)
                long double x87_r6_63 = fconvert.t(var_c4_1)
                long double x87_r5_70 = fconvert.t(var_c0_1)
                long double st0_10
                st0_10, x87control = sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_90 * x87_r7_90
                    + x87_r6_63 * x87_r6_63 + x87_r5_70 * x87_r5_70))))
                float var_4c_7 = fconvert.s(st0_10 + fconvert.t(9.9999997473787516e-06))
                long double x87_r6_67 = float.t(1)
                long double x87_r7_99 = fconvert.t(fconvert.s(x87_r6_67 / x87_r6_67))
                ecx_9 = fconvert.s(x87_r7_99 * fconvert.t(var_c8_1))
                edx_8 = fconvert.s(fconvert.t(var_c4_1) * x87_r7_99)
                eax_13 = fconvert.s(x87_r7_99 * fconvert.t(var_c0_1))
            else
                float var_204_7 = var_b8_1
                long double x87_r6_36 = fconvert.t(var_80_1)
                long double x87_r5_50 = fconvert.t(var_7c_1)
                long double x87_r4_67 = fconvert.t(var_78_1)
                long double x87_r7_69 = fconvert.t(fconvert.s(x87_r5_50 - fconvert.t(var_8c_1)))
                long double x87_r5_56 = fconvert.t(fconvert.s(fconvert.t(var_b0_1) - x87_r4_67))
                long double x87_r4_71 = fconvert.t(fconvert.s(x87_r4_67 - fconvert.t(var_88_1)))
                long double x87_r2_10 = fconvert.t(fconvert.s(fconvert.t(var_b4_1) - x87_r5_50))
                float var_a8_1 = fconvert.s(x87_r7_69 * x87_r5_56 - x87_r4_71 * x87_r2_10)
                long double x87_r3_46 = fconvert.t(fconvert.s(fconvert.t(var_b8_1) - x87_r6_36))
                long double x87_r2_13 = fconvert.t(fconvert.s(x87_r6_36 - fconvert.t(var_90_1)))
                float var_a4_1 = fconvert.s(x87_r4_71 * x87_r3_46 - x87_r5_56 * x87_r2_13)
                float var_a0_1 = fconvert.s(x87_r2_10 * x87_r2_13 - x87_r7_69 * x87_r3_46)
                long double x87_r7_72 = fconvert.t(var_a8_1)
                long double x87_r6_46 = fconvert.t(var_a4_1)
                long double x87_r5_60 = fconvert.t(var_a0_1)
                long double st0_9
                st0_9, x87control = sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_72 * x87_r7_72
                    + x87_r6_46 * x87_r6_46 + x87_r5_60 * x87_r5_60))))
                float var_4c_4 = fconvert.s(st0_9 + fconvert.t(9.9999997473787516e-06))
                long double x87_r6_50 = float.t(1)
                long double x87_r7_81 = fconvert.t(fconvert.s(x87_r6_50 / x87_r6_50))
                ecx_9 = fconvert.s(x87_r7_81 * fconvert.t(var_a8_1))
                edx_8 = fconvert.s(fconvert.t(var_a4_1) * x87_r7_81)
                eax_13 = fconvert.s(x87_r7_81 * fconvert.t(var_a0_1))
            
            long double x87_r6_72 = fconvert.t(ecx_9)
            long double x87_r5_73 = fconvert.t(edx_8)
            long double x87_r4_87 = fconvert.t(eax_13)
            float var_160_1 = fconvert.s(fconvert.t(*arg1) * x87_r6_72 + x87_r5_73 * fconvert.t(arg1[1])
                + x87_r4_87 * fconvert.t(arg1[2]))
            float var_15c_1 = fconvert.s(x87_r6_72 * fconvert.t(arg1[4])
                + fconvert.t(arg1[5]) * x87_r5_73 + x87_r4_87 * fconvert.t(arg1[6]))
            float var_158_1 = fconvert.s(x87_r4_87 * fconvert.t(arg1[0xa])
                + x87_r6_72 * fconvert.t(arg1[8]) + x87_r5_73 * fconvert.t(arg1[9]))
            
            if (var_6c s>= 0x40)
                sub_4c5870("quadIndex < totalQuads", &data_83f3d3, "Draw3d.cpp", 0x690, "Draw3DSphere")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            long double result = fconvert.t(0.5f)
            void* ecx_10 = var_64_1
            long double x87_r6_75 = fconvert.t(0.5)
            void* eax_14 = &var_3c
            long double x87_r5_76 = fconvert.t(255.0)
            float* var_5c_4 = &var_3c
            long double x87_r4_94 = fconvert.t(0.00100000005f)
            int32_t i_1 = 4
            long double x87_r3_59 = fconvert.t(0.99900001287460327)
            int32_t i
            
            do
                *(ecx_10 - 0x18) = *eax_14
                int32_t eax_15 = *(eax_14 + 8)
                *(ecx_10 - 0x14) = *(eax_14 + 4)
                *(ecx_10 - 0x10) = eax_15
                *(ecx_10 - 0xc) = var_160_1
                *(ecx_10 - 8) = var_15c_1
                *(ecx_10 - 4) = var_158_1
                long double x87_r2_20 = fconvert.t(*arg2)
                float edx_14 = arg2[1]
                x87_r2_20 - x87_r3_59
                float var_1ac_1 = arg2[3]
                float eax_18
                eax_18.w = (x87_r2_20 < x87_r3_59 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_20, x87_r3_59) ? 1 : 0) << 0xa
                    | (x87_r2_20 == x87_r3_59 ? 1 : 0) << 0xe | 0x1000
                float var_1b0_1 = arg2[2]
                float edx_15
                
                if ((eax_18:1.b & 0x41) != 0)
                    x87_r2_20 - x87_r4_94
                    eax_18.w = (x87_r2_20 < x87_r4_94 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_20, x87_r4_94) ? 1 : 0) << 0xa
                        | (x87_r2_20 == x87_r4_94 ? 1 : 0) << 0xe | 0x1000
                    bool p_1 = unimplemented  {test ah, 0x5}
                    
                    if (p_1)
                        int16_t x87status_1
                        int16_t temp0_39
                        temp0_39, x87status_1 = __fnstcw_memmem16(x87control)
                        var_50_2:2.w = temp0_39
                        int16_t x87control_3
                        int16_t x87status_2
                        x87control_3, x87status_2 = __fldcw_memmem16((zx.d(var_50_2:2.w) | 0xc00).w)
                        edx_15.b = (int.d(x87_r2_20 * x87_r5_76 + x87_r6_75)).b
                        int16_t x87status_3
                        x87control, x87status_3 = __fldcw_memmem16(var_50_2:2.w)
                    else
                        x87_r3_59 = x87_r2_20
                        edx_15.b = 0
                else
                    x87_r3_59 = x87_r2_20
                    edx_15.b = 0xff
                
                long double x87_r2_23 = fconvert.t(edx_14)
                x87_r2_23 - x87_r3_59
                eax_18.w = (x87_r2_23 < x87_r3_59 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_23, x87_r3_59) ? 1 : 0) << 0xa
                    | (x87_r2_23 == x87_r3_59 ? 1 : 0) << 0xe | 0x1000
                
                if ((eax_18:1.b & 0x41) != 0)
                    x87_r2_23 - x87_r4_94
                    eax_18.w = (x87_r2_23 < x87_r4_94 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_23, x87_r4_94) ? 1 : 0) << 0xa
                        | (x87_r2_23 == x87_r4_94 ? 1 : 0) << 0xe | 0x1000
                    bool p_2 = unimplemented  {test ah, 0x5}
                    
                    if (p_2)
                        int16_t x87status_4
                        int16_t temp0_40
                        temp0_40, x87status_4 = __fnstcw_memmem16(x87control)
                        var_50_2:2.w = temp0_40
                        int16_t x87control_4
                        int16_t x87status_5
                        x87control_4, x87status_5 = __fldcw_memmem16((zx.d(var_50_2:2.w) | 0xc00).w)
                        eax_18.b = (int.d(x87_r2_23 * x87_r5_76 + x87_r6_75)).b
                        char var_53_3 = eax_18.b
                        int16_t x87status_6
                        x87control, x87status_6 = __fldcw_memmem16(var_50_2:2.w)
                    else
                        x87_r3_59 = x87_r2_23
                        char var_53_2 = 0
                else
                    x87_r3_59 = x87_r2_23
                    char var_53_1 = 0xff
                
                long double x87_r2_26 = fconvert.t(var_1b0_1)
                x87_r2_26 - x87_r3_59
                eax_18.w = (x87_r2_26 < x87_r3_59 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_26, x87_r3_59) ? 1 : 0) << 0xa
                    | (x87_r2_26 == x87_r3_59 ? 1 : 0) << 0xe | 0x1000
                
                if ((eax_18:1.b & 0x41) != 0)
                    x87_r2_26 - x87_r4_94
                    eax_18.w = (x87_r2_26 < x87_r4_94 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_26, x87_r4_94) ? 1 : 0) << 0xa
                        | (x87_r2_26 == x87_r4_94 ? 1 : 0) << 0xe | 0x1000
                    bool p_3 = unimplemented  {test ah, 0x5}
                    
                    if (p_3)
                        int16_t x87status_7
                        int16_t temp0_41
                        temp0_41, x87status_7 = __fnstcw_memmem16(x87control)
                        var_50_2:2.w = temp0_41
                        int16_t x87control_5
                        int16_t x87status_8
                        x87control_5, x87status_8 = __fldcw_memmem16((zx.d(var_50_2:2.w) | 0xc00).w)
                        eax_18.b = (int.d(x87_r2_26 * x87_r5_76 + x87_r6_75)).b
                        char var_52_3 = eax_18.b
                        int16_t x87status_9
                        x87control, x87status_9 = __fldcw_memmem16(var_50_2:2.w)
                    else
                        x87_r3_59 = x87_r2_26
                        char var_52_2 = 0
                else
                    x87_r3_59 = x87_r2_26
                    char var_52_1 = 0xff
                
                long double x87_r2_29 = fconvert.t(var_1ac_1)
                x87_r2_29 - x87_r3_59
                eax_18.w = (x87_r2_29 < x87_r3_59 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_29, x87_r3_59) ? 1 : 0) << 0xa
                    | (x87_r2_29 == x87_r3_59 ? 1 : 0) << 0xe | 0x1000
                
                if ((eax_18:1.b & 0x41) != 0)
                    x87_r2_29 - x87_r4_94
                    eax_18.w = (x87_r2_29 < x87_r4_94 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r2_29, x87_r4_94) ? 1 : 0) << 0xa
                        | (x87_r2_29 == x87_r4_94 ? 1 : 0) << 0xe | 0x1000
                    bool p_4 = unimplemented  {test ah, 0x5}
                    
                    if (p_4)
                        int16_t x87status_10
                        int16_t temp0_42
                        temp0_42, x87status_10 = __fnstcw_memmem16(x87control)
                        var_50_2:2.w = temp0_42
                        int16_t x87control_6
                        int16_t x87status_11
                        x87control_6, x87status_11 = __fldcw_memmem16(var_50_2:2.w | 0xc00)
                        int16_t eax_23
                        eax_23.b = (int.d(x87_r2_29 * x87_r5_76 + x87_r6_75)).b
                        char var_51_3 = eax_23.b
                        int16_t x87status_12
                        x87control, x87status_12 = __fldcw_memmem16(var_50_2:2.w)
                    else
                        x87_r3_59 = x87_r2_29
                        char var_51_2 = 0
                else
                    x87_r3_59 = x87_r2_29
                    char var_51_1 = 0xff
                
                int32_t esi_3 = edx_15.b.d
                *(ecx_10 + 8) = fconvert.s(result)
                *(ecx_10 + 0xc) = fconvert.s(result)
                *ecx_10 = (((((esi_3 u>> 0x18 << 8) + zx.d(edx_15.b)) << 8) + zx.d((esi_3 u>> 8).b))
                    << 8) + zx.d((esi_3 u>> 0x10).b)
                *(ecx_10 + 4) = 0
                eax_14 = &var_5c_4[3]
                ecx_10 += 0x28
                i = i_1
                i_1 -= 1
                var_5c_4 = eax_14
            while (i != 1)
            esi_1 += 1
            var_6c += 1
            var_64_1 = ecx_10
            var_58_4 = esi_1
            
            if (esi_1 s>= 8)
                var_70 = eax_6
                
                if (eax_6 s< 8)
                    break
                
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return result
}

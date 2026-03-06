// 函数名称: sub_550ba0
// 虚拟地址: 0x550ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_550ba0(int16_t arg1 @ x87control, int32_t* arg2)
{
    // 第一条实际指令: int32_t esi = arg2[4]
    int32_t esi = arg2[4]
    
    if (esi != 1 && esi != 4)
        int32_t eax
        int32_t var_f4 = eax
        sub_4c5680("unsupported format for sanding %s")
        return 
    
    int32_t eax_1 = sub_5540b0(esi, arg2[1])
    
    if (arg2[3] != eax_1)
        sub_4c5870("sourceImage->pitch == TextureFormatPitch(sourceImage->width, sourceImage->format)", 
            &data_83f3d3, "TextureImport.cpp", 0x62, "SandImageBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_1 = arg2[2]
    int32_t ecx = *arg2
    int32_t ebx_1 = arg2[1]
    uint32_t esi_1 = 0
    int32_t var_20 = edx_1
    uint32_t var_30 = 0
    
    if (edx_1 s<= 0)
        return 
    
    long double x87_r7_1 = fconvert.t(0.00392156886f)
    long double x87_r6_1 = fconvert.t(255.0)
    long double x87_r5_1 = fconvert.t(0.99900001287460327)
    long double x87_r4_1 = fconvert.t(0.00100000005f)
    long double x87_r3_1 = fconvert.t(0.5)
    
    while (true)
        long double x87_r3_5
        long double x87_r7_5
        
        if (ebx_1 s<= 0)
            x87_r3_5 = x87_r7_1
            x87_r7_5 = x87_r3_1
        else
            int32_t edi_1 = 1
            int32_t var_24_1 = 1
            int32_t* var_2c_1 = ecx + ((esi_1 * ebx_1) << 2)
            
            while (true)
                int32_t eax_6 = *var_2c_1
                char var_4e_1 = eax_6.b
                uint8_t var_4d_1 = (eax_6 u>> 0x18).b
                uint8_t var_4f_1 = (eax_6 u>> 8).b
                long double x87_r2_3 =
                    fconvert.t(fconvert.s(float.t((eax_6 u>> 0x10).b.d u>> 0x18) / x87_r6_1))
                long double x87_r1_1 = float.t(0)
                x87_r1_1 - x87_r2_3
                uint32_t eax_9
                eax_9.w = (x87_r1_1 < x87_r2_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_1, x87_r2_3) ? 1 : 0) << 0xa
                    | (x87_r1_1 == x87_r2_3 ? 1 : 0) << 0xe | 0x1800
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    x87_r3_5 = x87_r7_1
                    x87_r7_5 = x87_r3_1
                else
                    float var_18_1 = 0f
                    float var_10_1 = 0f
                    float var_14_1 = 0f
                    int32_t var_c_1 = 0x3f800000
                    arg2 = nullptr
                    
                    if (edi_1 - 2 s>= 0)
                        if (edi_1 - 2 s< ebx_1 && esi_1 - 1 s>= 0 && esi_1 - 1 s< edx_1)
                            int32_t eax_11 = *(ecx + (((esi_1 - 1) * ebx_1 + edi_1 - 2) << 2))
                            uint8_t edx_6 = (eax_11 u>> 0x10).b
                            char var_36_1 = eax_11.b
                            uint8_t var_35_1 = (eax_11 u>> 0x18).b
                            uint8_t var_37_1 = (eax_11 u>> 8).b
                            int32_t eax_14 = edx_6.d
                            long double temp2_1 =
                                fconvert.t(fconvert.s(float.t(eax_14 u>> 0x18) / x87_r6_1))
                            x87_r7_1 - temp2_1
                            uint32_t eax_15
                            eax_15.w = (x87_r7_1 < temp2_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x1800
                            
                            if ((eax_15:1.b & 1) != 0)
                                arg2 = 1
                                var_18_1 = fconvert.s(
                                    fconvert.t(fconvert.s(float.t(zx.d(edx_6)) / x87_r6_1))
                                    + fconvert.t(0f))
                                var_14_1 = fconvert.s(
                                    fconvert.t(fconvert.s(float.t(zx.d((eax_14 u>> 8).b)) / x87_r6_1))
                                    + fconvert.t(0f))
                                var_10_1 = fconvert.s(fconvert.t(fconvert.s(
                                    float.t(zx.d((eax_14 u>> 0x10).b)) / x87_r6_1)) + fconvert.t(0f))
                        
                        if (edi_1 - 2 s>= 0 && edi_1 - 2 s< ebx_1 && var_30 s>= 0 && var_30 s< var_20)
                            int32_t eax_18 = var_2c_1[-1]
                            uint8_t edx_16 = (eax_18 u>> 0x10).b
                            char var_4a_1 = eax_18.b
                            uint8_t var_49_1 = (eax_18 u>> 0x18).b
                            uint8_t var_4b_1 = (eax_18 u>> 8).b
                            int32_t eax_21 = edx_16.d
                            long double temp5_1 =
                                fconvert.t(fconvert.s(float.t(eax_21 u>> 0x18) / x87_r6_1))
                            x87_r7_1 - temp5_1
                            uint32_t eax_22
                            eax_22.w = (x87_r7_1 < temp5_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x1800
                            
                            if ((eax_22:1.b & 1) != 0)
                                arg2 += 1
                                var_18_1 = fconvert.s(
                                    fconvert.t(fconvert.s(float.t(zx.d(edx_16)) / x87_r6_1))
                                    + fconvert.t(var_18_1))
                                var_14_1 = fconvert.s(
                                    fconvert.t(fconvert.s(float.t(zx.d((eax_21 u>> 8).b)) / x87_r6_1))
                                    + fconvert.t(var_14_1))
                                var_10_1 = fconvert.s(fconvert.t(fconvert.s(
                                    float.t(zx.d((eax_21 u>> 0x10).b)) / x87_r6_1)) + fconvert.t(var_10_1))
                    
                    if (edi_1 - 2 s>= 0 && edi_1 - 2 s< ebx_1 && var_30 + 1 s>= 0
                            && var_30 + 1 s< var_20)
                        int32_t eax_26 = *(ecx + (((var_30 + 1) * ebx_1 + edi_1 - 2) << 2))
                        uint8_t ecx_10 = (eax_26 u>> 0x10).b
                        char var_3e_1 = eax_26.b
                        uint8_t var_3d_1 = (eax_26 u>> 0x18).b
                        uint8_t var_3f_1 = (eax_26 u>> 8).b
                        int32_t eax_29 = ecx_10.d
                        long double temp3_1 =
                            fconvert.t(fconvert.s(float.t(eax_29 u>> 0x18) / x87_r6_1))
                        x87_r7_1 - temp3_1
                        uint32_t eax_30
                        eax_30.w = (x87_r7_1 < temp3_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x1800
                        
                        if ((eax_30:1.b & 1) != 0)
                            arg2 += 1
                            var_18_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d(ecx_10)) / x87_r6_1))
                                + fconvert.t(var_18_1))
                            var_14_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d((eax_29 u>> 8).b)) / x87_r6_1))
                                + fconvert.t(var_14_1))
                            var_10_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d((eax_29 u>> 0x10).b)) / x87_r6_1))
                                + fconvert.t(var_10_1))
                    
                    if (var_24_1 - 1 s< 0 || var_24_1 - 1 s>= ebx_1 || esi_1 - 1 s< 0
                            || esi_1 - 1 s>= var_20)
                        x87_r3_5 = x87_r7_1
                        x87_r7_5 = x87_r3_1
                    else
                        int32_t eax_34 = *(ecx + (((esi_1 - 1) * ebx_1 + var_24_1 - 1) << 2))
                        uint8_t ecx_20 = (eax_34 u>> 0x10).b
                        char var_3a_1 = eax_34.b
                        uint8_t var_39_1 = (eax_34 u>> 0x18).b
                        uint8_t var_3b_1 = (eax_34 u>> 8).b
                        int32_t eax_37 = ecx_20.d
                        x87_r3_5 = x87_r7_1
                        x87_r7_5 = x87_r3_1
                        long double temp4_1 =
                            fconvert.t(fconvert.s(float.t(eax_37 u>> 0x18) / x87_r6_1))
                        x87_r3_5 - temp4_1
                        uint32_t eax_38
                        eax_38.w = (x87_r3_5 < temp4_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_5, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r3_5 == temp4_1 ? 1 : 0) << 0xe | 0x1800
                        
                        if ((eax_38:1.b & 1) != 0)
                            arg2 += 1
                            var_18_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d(ecx_20)) / x87_r6_1))
                                + fconvert.t(var_18_1))
                            var_14_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d((eax_37 u>> 8).b)) / x87_r6_1))
                                + fconvert.t(var_14_1))
                            var_10_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d((eax_37 u>> 0x10).b)) / x87_r6_1))
                                + fconvert.t(var_10_1))
                    
                    if (var_24_1 - 1 s>= 0 && var_24_1 - 1 s< ebx_1 && var_30 + 1 s>= 0
                            && var_30 + 1 s< var_20)
                        int32_t eax_42 = *(ecx + (((var_30 + 1) * ebx_1 + var_24_1 - 1) << 2))
                        uint8_t ecx_30 = (eax_42 u>> 0x10).b
                        char var_42_1 = eax_42.b
                        uint8_t var_41_1 = (eax_42 u>> 0x18).b
                        uint8_t var_43_1 = (eax_42 u>> 8).b
                        int32_t eax_45 = ecx_30.d
                        long double temp6_1 =
                            fconvert.t(fconvert.s(float.t(eax_45 u>> 0x18) / x87_r6_1))
                        x87_r3_5 - temp6_1
                        uint32_t eax_46
                        eax_46.w = (x87_r3_5 < temp6_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r3_5, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r3_5 == temp6_1 ? 1 : 0) << 0xe | 0x1800
                        
                        if ((eax_46:1.b & 1) != 0)
                            arg2 += 1
                            var_18_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d(ecx_30)) / x87_r6_1))
                                + fconvert.t(var_18_1))
                            var_14_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d((eax_45 u>> 8).b)) / x87_r6_1))
                                + fconvert.t(var_14_1))
                            var_10_1 = fconvert.s(
                                fconvert.t(fconvert.s(float.t(zx.d((eax_45 u>> 0x10).b)) / x87_r6_1))
                                + fconvert.t(var_10_1))
                    
                    int32_t eax_53 = var_24_1
                    
                    if (eax_53 s>= 0)
                        if (eax_53 s< ebx_1)
                            if (esi_1 - 1 s>= 0 && esi_1 - 1 s< var_20)
                                int32_t eax_48 = *(ecx + (((esi_1 - 1) * ebx_1 + eax_53) << 2))
                                uint8_t ecx_39 = (eax_48 u>> 0x10).b
                                char var_46_1 = eax_48.b
                                uint8_t var_45_1 = (eax_48 u>> 0x18).b
                                uint8_t var_47_1 = (eax_48 u>> 8).b
                                int32_t eax_51 = ecx_39.d
                                long double temp7_1 =
                                    fconvert.t(fconvert.s(float.t(eax_51 u>> 0x18) / x87_r6_1))
                                x87_r3_5 - temp7_1
                                uint32_t eax_52
                                eax_52.w = (x87_r3_5 < temp7_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r3_5, temp7_1) ? 1 : 0) << 0xa
                                    | (x87_r3_5 == temp7_1 ? 1 : 0) << 0xe | 0x1800
                                eax_53 = var_24_1
                                
                                if ((eax_52:1.b & 1) != 0)
                                    arg2 += 1
                                    var_18_1 = fconvert.s(
                                        fconvert.t(fconvert.s(float.t(zx.d(ecx_39)) / x87_r6_1))
                                        + fconvert.t(var_18_1))
                                    var_14_1 = fconvert.s(fconvert.t(fconvert.s(
                                        float.t(zx.d((eax_51 u>> 8).b)) / x87_r6_1)) + fconvert.t(var_14_1))
                                    var_10_1 = fconvert.s(fconvert.t(fconvert.s(
                                        float.t(zx.d((eax_51 u>> 0x10).b)) / x87_r6_1))
                                        + fconvert.t(var_10_1))
                            
                            if (eax_53 s< ebx_1 && var_30 s>= 0 && var_30 s< var_20)
                                int32_t eax_55 = var_2c_1[1]
                                uint8_t ecx_48 = (eax_55 u>> 0x10).b
                                char var_32_1 = eax_55.b
                                uint8_t var_31_1 = (eax_55 u>> 0x18).b
                                uint8_t var_33_1 = (eax_55 u>> 8).b
                                int32_t eax_58 = ecx_48.d
                                long double temp9_1 =
                                    fconvert.t(fconvert.s(float.t(eax_58 u>> 0x18) / x87_r6_1))
                                x87_r3_5 - temp9_1
                                int32_t eax_59
                                eax_59.w = (x87_r3_5 < temp9_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r3_5, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r3_5 == temp9_1 ? 1 : 0) << 0xe | 0x1800
                                eax_53 = var_24_1
                                
                                if ((eax_59:1.b & 1) != 0)
                                    arg2 += 1
                                    var_18_1 = fconvert.s(
                                        fconvert.t(fconvert.s(float.t(zx.d(ecx_48)) / x87_r6_1))
                                        + fconvert.t(var_18_1))
                                    var_14_1 = fconvert.s(fconvert.t(fconvert.s(
                                        float.t(zx.d((eax_58 u>> 8).b)) / x87_r6_1)) + fconvert.t(var_14_1))
                                    var_10_1 = fconvert.s(fconvert.t(fconvert.s(
                                        float.t(zx.d((eax_58 u>> 0x10).b)) / x87_r6_1))
                                        + fconvert.t(var_10_1))
                        
                        if (eax_53 s>= 0 && eax_53 s< ebx_1 && var_30 + 1 s>= 0 && var_30 + 1 s< var_20)
                            int32_t eax_61 = *(ecx + (((var_30 + 1) * ebx_1 + eax_53) << 2))
                            uint8_t ecx_57 = (eax_61 u>> 0x10).b
                            char var_52_1 = eax_61.b
                            uint8_t var_51_1 = (eax_61 u>> 0x18).b
                            uint8_t var_53_1 = (eax_61 u>> 8).b
                            int32_t eax_64 = ecx_57.d
                            long double temp8_1 =
                                fconvert.t(fconvert.s(float.t(eax_64 u>> 0x18) / x87_r6_1))
                            x87_r3_5 - temp8_1
                            eax_53.w = (x87_r3_5 < temp8_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r3_5, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r3_5 == temp8_1 ? 1 : 0) << 0xe | 0x1800
                            
                            if ((eax_53:1.b & 1) != 0)
                                arg2 += 1
                                var_18_1 = fconvert.s(
                                    fconvert.t(fconvert.s(float.t(zx.d(ecx_57)) / x87_r6_1))
                                    + fconvert.t(var_18_1))
                                var_14_1 = fconvert.s(
                                    fconvert.t(fconvert.s(float.t(zx.d((eax_64 u>> 8).b)) / x87_r6_1))
                                    + fconvert.t(var_14_1))
                                var_10_1 = fconvert.s(fconvert.t(fconvert.s(
                                    float.t(zx.d((eax_64 u>> 0x10).b)) / x87_r6_1)) + fconvert.t(var_10_1))
                    
                    if (arg2 != 0)
                        long double x87_r1_2 = fconvert.t(fconvert.s(float.t(arg2)))
                        long double x87_r2_121 = fconvert.t(fconvert.s(fconvert.t(var_18_1) / x87_r1_2))
                        x87_r2_121 - x87_r5_1
                        eax_53.w = (x87_r2_121 < x87_r5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_121, x87_r5_1) ? 1 : 0) << 0xa
                            | (x87_r2_121 == x87_r5_1 ? 1 : 0) << 0xe | 0x1000
                        uint32_t ecx_7
                        
                        if ((eax_53:1.b & 0x41) != 0)
                            x87_r2_121 - x87_r4_1
                            eax_53.w = (x87_r2_121 < x87_r4_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_121, x87_r4_1) ? 1 : 0) << 0xa
                                | (x87_r2_121 == x87_r4_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_2 = unimplemented  {test ah, 0x5}
                            
                            if (p_2)
                                int16_t x87status_1
                                int16_t temp0_12
                                temp0_12, x87status_1 = __fnstcw_memmem16(arg1)
                                arg2:2.w = temp0_12
                                int16_t x87control
                                int16_t x87status_2
                                x87control, x87status_2 = __fldcw_memmem16((zx.d(arg2:2.w) | 0xc00).w)
                                ecx_7.b = (int.d(x87_r2_121 * x87_r6_1 + x87_r7_5)).b
                                int16_t x87status_3
                                arg1, x87status_3 = __fldcw_memmem16(arg2:2.w)
                            else
                                x87_r3_5 = x87_r2_121
                                ecx_7.b = 0
                        else
                            x87_r3_5 = x87_r2_121
                            ecx_7.b = 0xff
                        
                        long double x87_r2_124 = fconvert.t(fconvert.s(fconvert.t(var_14_1) / x87_r1_2))
                        x87_r2_124 - x87_r5_1
                        eax_53.w = (x87_r2_124 < x87_r5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_124, x87_r5_1) ? 1 : 0) << 0xa
                            | (x87_r2_124 == x87_r5_1 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_53:1.b & 0x41) != 0)
                            x87_r2_124 - x87_r4_1
                            eax_53.w = (x87_r2_124 < x87_r4_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_124, x87_r4_1) ? 1 : 0) << 0xa
                                | (x87_r2_124 == x87_r4_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_3 = unimplemented  {test ah, 0x5}
                            
                            if (p_3)
                                int16_t x87status_4
                                int16_t temp0_13
                                temp0_13, x87status_4 = __fnstcw_memmem16(arg1)
                                arg2:2.w = temp0_13
                                int16_t x87control_1
                                int16_t x87status_5
                                x87control_1, x87status_5 = __fldcw_memmem16((zx.d(arg2:2.w) | 0xc00).w)
                                eax_53.b = (int.d(x87_r2_124 * x87_r6_1 + x87_r7_5)).b
                                char var_1b_3 = eax_53.b
                                int16_t x87status_6
                                arg1, x87status_6 = __fldcw_memmem16(arg2:2.w)
                            else
                                x87_r3_5 = x87_r2_124
                                char var_1b_2 = 0
                        else
                            x87_r3_5 = x87_r2_124
                            char var_1b_1 = 0xff
                        
                        long double x87_r2_127 = fconvert.t(fconvert.s(fconvert.t(var_10_1) / x87_r1_2))
                        x87_r2_127 - x87_r5_1
                        eax_53.w = (x87_r2_127 < x87_r5_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r2_127, x87_r5_1) ? 1 : 0) << 0xa
                            | (x87_r2_127 == x87_r5_1 ? 1 : 0) << 0xe | 0x1000
                        
                        if ((eax_53:1.b & 0x41) != 0)
                            x87_r2_127 - x87_r4_1
                            eax_53.w = (x87_r2_127 < x87_r4_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r2_127, x87_r4_1) ? 1 : 0) << 0xa
                                | (x87_r2_127 == x87_r4_1 ? 1 : 0) << 0xe | 0x1000
                            bool p_4 = unimplemented  {test ah, 0x5}
                            
                            if (p_4)
                                int16_t x87status_7
                                int16_t temp0_14
                                temp0_14, x87status_7 = __fnstcw_memmem16(arg1)
                                arg2:2.w = temp0_14
                                int16_t x87control_2
                                int16_t x87status_8
                                x87control_2, x87status_8 = __fldcw_memmem16(arg2:2.w | 0xc00)
                                uint32_t edx_26
                                edx_26.b = (int.d(x87_r2_127 * x87_r6_1 + x87_r7_5)).b
                                char var_1a_3 = edx_26.b
                                int16_t x87status_9
                                arg1, x87status_9 = __fldcw_memmem16(arg2:2.w)
                            else
                                x87_r3_5 = x87_r2_127
                                char var_1a_2 = 0
                        else
                            x87_r3_5 = x87_r2_127
                            char var_1a_1 = 0xff
                        
                        char var_19_1 = 1
                        int32_t eax_71 = ecx_7.b.d
                        *var_2c_1 = (((((eax_71 u>> 0x18 << 8) + zx.d(ecx_7.b)) << 8)
                            + zx.d((eax_71 u>> 8).b)) << 8) + zx.d((eax_71 u>> 0x10).b)
                    else
                        void* eax_65 = data_27e7fd0
                        *var_2c_1 = ((((zx.d(*(eax_65 + 0x2b)) + 0x100) << 8) + zx.d(*(eax_65 + 0x2c)))
                            << 8) + zx.d(*(eax_65 + 0x2d))
                
                var_2c_1 = &var_2c_1[1]
                esi_1 = var_30
                edi_1 = var_24_1 + 1
                edx_1 = var_20
                var_24_1 = edi_1
                
                if (edi_1 - 1 s>= ebx_1)
                    break
                
                x87_r3_1 = x87_r7_5
                x87_r7_1 = x87_r3_5
        
        esi_1 += 1
        var_30 = esi_1
        
        if (esi_1 s>= edx_1)
            break
        
        x87_r3_1 = x87_r7_5
        x87_r7_1 = x87_r3_5
}

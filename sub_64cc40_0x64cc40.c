// 函数名称: sub_64cc40
// 虚拟地址: 0x64cc40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_64cc40(float arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t var_8 = 0xffffff9d
    int32_t var_c = 1
    sub_5abfc0(esi, 0, 0x34)
    int32_t* edi = arg3
    esi[9] = *edi
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686ac0(mxcsr, x87control, float.t(*edi) * fconvert.t(8.0))
    double var_38 = fconvert.d(st0)
    int16_t x87control_3
    long double st0_1
    st0_1, x87control_3 = sub_686950(mxcsr, sub_686ac0(mxcsr, x87control_1, fconvert.t(2.0)), 0f)
    int32_t eax_1 = sub_685f40(st0_1 - fconvert.t(1.0))
    esi[8] = eax_1
    arg1 = fconvert.s(float.t(arg5))
    double var_30 = fconvert.d(float.t(arg4))
    long double x87_r6_2 = fconvert.t(arg1) * fconvert.t(0.25) * fconvert.t(0.5)
    int16_t x87control_4
    long double st0_2
    st0_2, x87control_4 = sub_686ac0(mxcsr, x87control_3, x87_r6_2 / x87_r6_2)
    int32_t eax_2 = sub_685f40((st0_2 * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766))
        * float.t(1 << (eax_1.b + 1)) - float.t(*edi))
    esi[7] = eax_2
    int16_t x87control_5
    long double st0_3
    st0_3, x87control_5 = sub_686ac0(mxcsr, x87control_4, 
        (float.t(arg4) + fconvert.t(0.25)) * fconvert.t(arg1) * fconvert.t(0.5) / fconvert.t(var_30))
    int32_t ebx_1 = arg4
    int32_t edi_2 = ebx_1 << 2
    esi[0xa] = sub_685f40((st0_3 * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766))
        * float.t(1 << (eax_1.b + 1)) + fconvert.t(0.5)) - eax_2 + 1
    esi[4] = sub_5a881a(edi_2)
    esi[5] = sub_5a881a(edi_2)
    esi[6] = sub_5a881a(edi_2)
    esi[0xc] = fconvert.s(float.t(1))
    esi[1] = arg2
    *esi = ebx_1
    esi[0xb] = arg5
    
    if (arg5 s< 0x6590)
        esi[0xc] = fconvert.s(float.t(0))
    else if (arg5 s< 0x9470)
        esi[0xc] = fconvert.s(fconvert.t(0.939999998f))
    else if (arg5 s> 0xb3b0)
        esi[0xc] = fconvert.s(fconvert.t(1.27499998f))
    
    int32_t edi_3 = 0
    arg1 = 0f
    double var_38_1 = fconvert.d(float.t(arg5))
    int32_t ecx_3
    int32_t i
    
    do
        i = arg1 i+ 1
        long double x87_r7_31 = (float.t(i) * fconvert.t(0.125) - fconvert.t(2.0)
            + fconvert.t(5.9657840728759766)) * fconvert.t(0.69314700365066528)
        int32_t var_54
        var_54.q = fconvert.d((x87_r7_31 + x87_r7_31) * fconvert.t(var_30) / fconvert.t(var_38_1)
            + fconvert.t(0.5))
        long double st0_4
        st0_4, x87control_5 = sub_686950(mxcsr, sub_6870ac(mxcsr, x87control_5), var_54)
        int32_t eax_11
        eax_11, ecx_3 = sub_685f40(st0_4)
        
        if (edi_3 s< eax_11)
            long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(*((arg1 << 2) + &data_8202a8))))
            ecx_3 = eax_11 - edi_3
            long double x87_r7_41 = x87_r6_5
            long double x87_r6_7 = fconvert.t(fconvert.s((fconvert.t(*((arg1 << 2) + &data_8202ac))
                - x87_r6_5) / float.t(ecx_3)))
            long double x87_r5_3 = fconvert.t(100.0)
            long double x87_r5_11
            long double x87_r7_43
            
            if (ecx_3 s< 4)
                x87_r5_11 = x87_r7_41
                x87_r7_43 = x87_r5_3
            else
                ecx_3 = edi_3 + 2
                
                while (true)
                    if (edi_3 s>= ebx_1)
                        goto label_64cefe
                    
                    *(esi[4] + (edi_3 << 2)) = fconvert.s(fconvert.t(fconvert.s(x87_r7_41 + x87_r5_3)))
                    x87_r7_43 = x87_r5_3
                    
                    if (ecx_3 - 1 s>= ebx_1)
                        edi_3 += 1
                        goto label_64cefe
                    
                    long double x87_r5_5 = fconvert.t(fconvert.s(x87_r7_41 + x87_r6_7))
                    *(esi[4] + (edi_3 << 2) + 4) =
                        fconvert.s(fconvert.t(fconvert.s(x87_r5_5 + x87_r7_43)))
                    
                    if (ecx_3 s>= ebx_1)
                        edi_3 += 2
                        goto label_64cefe
                    
                    long double x87_r5_7 = fconvert.t(fconvert.s(x87_r5_5 + x87_r6_7))
                    *(esi[4] + (edi_3 << 2) + 8) =
                        fconvert.s(fconvert.t(fconvert.s(x87_r5_7 + x87_r7_43)))
                    
                    if (ecx_3 + 1 s>= ebx_1)
                        edi_3 += 3
                        goto label_64cefe
                    
                    long double x87_r5_9 = fconvert.t(fconvert.s(x87_r5_7 + x87_r6_7))
                    edi_3 += 4
                    ecx_3 += 4
                    *(esi[4] + (edi_3 << 2) - 4) =
                        fconvert.s(fconvert.t(fconvert.s(x87_r5_9 + x87_r7_43)))
                    x87_r5_11 = fconvert.t(fconvert.s(x87_r5_9 + x87_r6_7))
                    
                    if (edi_3 s>= eax_11 - 3)
                        break
                    
                    x87_r5_3 = x87_r7_43
                    x87_r7_41 = x87_r5_11
            
            if (edi_3 s< eax_11)
                while (edi_3 s< ebx_1)
                    ecx_3 = esi[4]
                    edi_3 += 1
                    *(ecx_3 + (edi_3 << 2) - 4) =
                        fconvert.s(fconvert.t(fconvert.s(x87_r5_11 + x87_r7_43)))
                    
                    if (edi_3 s>= eax_11)
                        break
                    
                    x87_r5_11 = fconvert.t(fconvert.s(x87_r5_11 + x87_r6_7))
        
    label_64cefe:
        arg1 = i
    while (i s< 0x57)
    
    if (edi_3 s< ebx_1)
        if (ebx_1 - edi_3 s>= 4)
            ecx_3 = ebx_1 - 3
            
            do
                int32_t eax_13 = esi[4]
                *(eax_13 + (edi_3 << 2)) = fconvert.s(fconvert.t(*(eax_13 + (edi_3 << 2) - 4)))
                int32_t edx_12 = esi[4]
                *(edx_12 + (edi_3 << 2) + 4) = fconvert.s(fconvert.t(*(edx_12 + (edi_3 << 2))))
                int32_t eax_16 = esi[4]
                long double x87_r7_47 = fconvert.t(*(eax_16 + (edi_3 << 2) + 4))
                edi_3 += 4
                *(eax_16 + (edi_3 << 2) - 8) = fconvert.s(x87_r7_47)
                int32_t eax_17 = esi[4]
                *(eax_17 + (edi_3 << 2) - 4) = fconvert.s(fconvert.t(*(eax_17 + (edi_3 << 2) - 8)))
            while (edi_3 s< ecx_3)
        
        while (edi_3 s< ebx_1)
            int32_t eax_18 = esi[4]
            long double x87_r7_49 = fconvert.t(*(eax_18 + (edi_3 << 2) - 4))
            float* eax_19 = eax_18 + (edi_3 << 2)
            edi_3 += 1
            *eax_19 = fconvert.s(x87_r7_49)
    
    arg1 = 0f
    
    if (ebx_1 s> 0)
        int32_t temp0_5 = divs.dp.d(sx.q(arg5), ebx_1 * 2)
        int32_t ebx_3 = temp0_5 * temp0_5
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        float eax_36
        
        do
            arg5 = fconvert.s(float.t(var_14_1))
            int16_t x87control_7
            long double st0_5
            st0_5, x87control_7 = sub_686720(mxcsr, x87control_5, 
                float.t(var_10_1 i* arg1) * fconvert.t(1.8499999754340024e-08))
            long double st0_6
            st0_6, x87control_5 =
                sub_686720(mxcsr, x87control_7, fconvert.t(arg5) * fconvert.t(0.00073999998858198524))
            void* ecx_6 = arg2
            int32_t eax_24 = *(ecx_6 + 0x78) + var_8
            float var_20_2 = fconvert.s(st0_6 * fconvert.t(13.100000381469727)
                + fconvert.t(fconvert.d(st0_5 * fconvert.t(2.2400000095367432)))
                + fconvert.t(arg5) * fconvert.t(9.9999997473787516e-05))
            double var_28_1
            
            if (eax_24 s< arg1)
                int32_t var_1c_1 = eax_24
                int32_t ecx_7 = var_8
                double var_40_1 = fconvert.d(fconvert.t(var_20_2) - fconvert.t(*(ecx_6 + 0x70)))
                arg3 = temp0_5 * ecx_7
                int32_t eax_28 = ebx_3 * ecx_7
                arg5 = eax_28
                
                while (true)
                    float var_18_1 = fconvert.s(float.t(arg3))
                    var_28_1:4.d = eax_28 * ecx_7
                    int16_t x87control_8
                    long double st0_7
                    st0_7, x87control_8 = sub_686720(mxcsr, x87control_5, 
                        float.t(var_28_1:4.d) * fconvert.t(1.8499999754340024e-08))
                    int32_t eax_30
                    long double st0_8
                    st0_8, eax_30, x87control_5 = sub_686720(mxcsr, x87control_8, 
                        fconvert.t(var_18_1) * fconvert.t(0.00073999998858198524))
                    long double x87_r7_74 = st0_8 * fconvert.t(13.100000381469727)
                        + fconvert.t(fconvert.d(st0_7 * fconvert.t(2.2400000095367432)))
                        + fconvert.t(var_18_1) * fconvert.t(9.9999997473787516e-05)
                    long double temp2_1 = fconvert.t(var_40_1)
                    x87_r7_74 - temp2_1
                    eax_30.w = (x87_r7_74 < temp2_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_74, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_74 == temp2_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x5}
                    
                    if (p_1)
                        break
                    
                    var_8 += 1
                    arg5 += ebx_3
                    arg3 += temp0_5
                    int32_t eax_32 = var_1c_1 + 1
                    var_1c_1 = eax_32
                    
                    if (eax_32 s>= arg1)
                        break
                    
                    eax_28 = arg5
                    ecx_7 = var_8
                
                ecx_6 = arg2
            
            int32_t eax_33 = var_c
            
            if (eax_33 s<= arg4)
                var_28_1:4.d = *(ecx_6 + 0x7c) i+ arg1
                arg5 = temp0_5 * eax_33
                int32_t ecx_13 = ebx_3 * eax_33
                int32_t var_1c_2 = ecx_13
                
                do
                    if (eax_33 s>= var_28_1:4.d)
                        arg3 = fconvert.s(float.t(arg5))
                        int16_t x87control_9
                        long double st0_9
                        st0_9, x87control_9 = sub_686720(mxcsr, x87control_5, 
                            float.t(ecx_13 * eax_33) * fconvert.t(1.8499999754340024e-08))
                        long double st0_10
                        st0_10, x87control_5 = sub_686720(mxcsr, x87control_9, 
                            fconvert.t(arg3) * fconvert.t(0.00073999998858198524))
                        long double x87_r7_85 = st0_10 * fconvert.t(13.100000381469727)
                            + fconvert.t(fconvert.d(st0_9 * fconvert.t(2.2400000095367432)))
                            + fconvert.t(arg3) * fconvert.t(9.9999997473787516e-05)
                        long double x87_r6_15 = fconvert.t(*(arg2 + 0x74)) + fconvert.t(var_20_2)
                        x87_r6_15 - x87_r7_85
                        void* eax_34
                        eax_34.w = (x87_r6_15 < x87_r7_85 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_15, x87_r7_85) ? 1 : 0) << 0xa
                            | (x87_r6_15 == x87_r7_85 ? 1 : 0) << 0xe
                        eax_33 = var_c
                        
                        if ((eax_34:1.b & 0x41) != 0)
                            break
                        
                        ecx_13 = var_1c_2
                    
                    arg5 += temp0_5
                    eax_33 += 1
                    ecx_13 += ebx_3
                    var_c = eax_33
                    var_1c_2 = ecx_13
                while (eax_33 s<= arg4)
            
            var_10_1 += ebx_3
            var_14_1 += temp0_5
            ecx_3 = esi[6]
            *(ecx_3 + (arg1 << 2)) = (var_8 << 0x10) + eax_33 - 0x10001
            eax_36 = arg1 i+ 1
            arg1 = eax_36
        while (eax_36 s< arg4)
        ebx_1 = arg4
    
    long double x87_r7_86 = fconvert.t(0.5)
    float edi_5 = 0f
    arg1 = 0f
    
    if (ebx_1 s> 0)
        do
            long double st0_11
            st0_11, x87control_5 = sub_686ac0(mxcsr, x87control_5, 
                x87_r7_86 * (float.t(arg1) + fconvert.t(0.25)) * fconvert.t(var_38_1)
                    / fconvert.t(var_30))
            long double x87_r6_19 = fconvert.t(0.5)
            x87_r7_86 = x87_r6_19
            int32_t eax_37 = sub_685f40((st0_11 * fconvert.t(1.4426950216293335)
                - fconvert.t(5.9657840728759766)) * float.t(1 << ((esi[8]).b + 1)) + x87_r6_19)
            ecx_3 = esi[5]
            *(ecx_3 + (edi_5 << 2)) = eax_37
            edi_5 += 1
            arg1 = edi_5
        while (edi_5 s< ebx_1)
    
    int32_t var_5c = ecx_3
    int32_t eax_39
    int16_t x87control_10
    long double result_1
    result_1, eax_39, x87control_10 = sub_64c010(
        fconvert.s(fconvert.t(fconvert.s(x87_r7_86 * fconvert.t(var_38_1) / fconvert.t(var_30)))), 
        ebx_1, fconvert.s(fconvert.t(*(arg2 + 0x18))), fconvert.s(fconvert.t(*(arg2 + 0x1c))))
    long double result = result_1
    esi[2] = eax_39
    esi[3] = sub_5a881a(0xc)
    
    for (int32_t* i_1 = nullptr; i_1 s< 0xc; i_1 = &i_1[1])
        *(i_1 + esi[3]) = sub_5a881a(ebx_1 << 2)
    
    float edi_6 = 0f
    arg1 = 0f
    
    if (ebx_1 s> 0)
        long double x87_r6_23 = fconvert.t(var_30)
        
        do
            int32_t eax_43
            long double st0_12
            st0_12, eax_43, x87control_10 = sub_686ac0(mxcsr, x87control_10, 
                (float.t(arg1) + fconvert.t(0.5)) * fconvert.t(var_38_1)
                    / fconvert.t(fconvert.d(x87_r6_23 + x87_r6_23)))
            long double x87_r6_31 =
                st0_12 * fconvert.t(1.4426950216293335) - fconvert.t(5.9657840728759766)
            long double x87_r6_33 = float.t(0)
            long double result_2 = fconvert.t(fconvert.s(x87_r6_31 + x87_r6_31))
            result_2 - x87_r6_33
            eax_43.w = (result_2 < x87_r6_33 ? 1 : 0) << 8
                | (is_unordered.t(result_2, x87_r6_33) ? 1 : 0) << 0xa
                | (result_2 == x87_r6_33 ? 1 : 0) << 0xe | 0x2800
            bool p_2 = unimplemented  {test ah, 0x5}
            long double result_4
            
            if (p_2)
                result = result_2
                long double result_3 = fconvert.t(16f)
                result_3 - x87_r6_33
                eax_43.w = (result_3 < x87_r6_33 ? 1 : 0) << 8
                    | (is_unordered.t(result_3, x87_r6_33) ? 1 : 0) << 0xa
                    | (result_3 == x87_r6_33 ? 1 : 0) << 0xe | 0x2800
                bool p_3 = unimplemented  {test ah, 0x41}
                
                if (p_3)
                    result_4 = result_3
                else
                    result = result_3
                    result_4 = fconvert.t(fconvert.s(x87_r6_33))
            else
                result_4 = fconvert.t(fconvert.s(result_2))
            
            int32_t eax_44 = sub_685f40(result_4)
            int32_t ecx_20 = esi[1]
            edi_6 += 1
            arg1 = edi_6
            long double x87_r6_36 = fconvert.t(fconvert.s(result_4 - float.t(eax_44)))
            long double x87_r5_15 = float.t(1) - x87_r6_36
            *(*esi[3] + (edi_6 << 2) - 4) = fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(*(ecx_20 + (eax_44 << 2) + 0x88)) * x87_r6_36
                + fconvert.t(*(ecx_20 + (eax_44 << 2) + 0x84)) * x87_r5_15)))
            int32_t ecx_22 = esi[1]
            *(*(esi[3] + 4) + (edi_6 << 2) - 4) = fconvert.s(fconvert.t(fconvert.s(
                fconvert.t(*(ecx_22 + (eax_44 << 2) + 0xcc)) * x87_r6_36
                + fconvert.t(*(ecx_22 + (eax_44 << 2) + 0xc8)) * x87_r5_15)))
            int32_t ecx_24 = esi[1]
            *(*(esi[3] + 8) + (edi_6 << 2) - 4) = fconvert.s(fconvert.t(fconvert.s(
                x87_r6_36 * fconvert.t(*(ecx_24 + (eax_44 << 2) + 0x110))
                + x87_r5_15 * fconvert.t(*(ecx_24 + (eax_44 << 2) + 0x10c)))))
        while (edi_6 s< ebx_1)
    
    return result
}

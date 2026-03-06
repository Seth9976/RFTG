// 函数名称: sub_64a4a0
// 虚拟地址: 0x64a4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64a4a0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t esi = arg1
    int32_t esi = arg1
    void* eax = *(esi + 4)
    void* ecx = *(esi + 0x68)
    int32_t* eax_1 = *(eax + 0x1c)
    int32_t edx = eax_1[0x392]
    
    if (arg2 == 0)
        return 0xffffff7d
    
    int32_t eax_3 = *(esi + 0x18)
    
    if (*(esi + 0x14) s> eax_3 && eax_3 != 0xffffffff)
        return 0xffffff7d
    
    *(esi + 0x24) = *(esi + 0x28)
    int32_t eax_6 = *(esi + 0x40)
    *(esi + 0x28) = arg2[7]
    int32_t ecx_2 = *(esi + 0x44)
    *(esi + 0x2c) = 0xffffffff
    
    if ((eax_6 & ecx_2) == 0xffffffff || eax_6 + 1 != arg2[0xe]
            || adc.d(ecx_2, 0, eax_6 u>= 0xffffffff) != arg2[0xf])
        *(esi + 0x38) = 0xffffffff
        *(esi + 0x3c) = 0xffffffff
        *(ecx + 0x80) = 0xffffffff
        *(ecx + 0x84) = 0xffffffff
    
    *(esi + 0x40) = arg2[0xe]
    *(esi + 0x44) = arg2[0xf]
    
    if (*arg2 != 0)
        int32_t eax_12 = eax_1[*(esi + 0x28)] s>> (edx.b + 1)
        int32_t ebx_3 = *eax_1 s>> (edx.b + 1)
        int32_t edi_2 = eax_1[1] s>> (edx.b + 1)
        int32_t eax_14
        int32_t edx_3
        edx_3:eax_14 = sx.q(arg2[0x16])
        int32_t temp1_1 = *(esi + 0x48)
        *(esi + 0x48) += eax_14
        int32_t var_2c_1 = ebx_3
        *(esi + 0x4c) = adc.d(*(esi + 0x4c), edx_3, temp1_1 + eax_14 u< temp1_1)
        int32_t eax_16
        int32_t edx_4
        edx_4:eax_16 = sx.q(arg2[0x17])
        int32_t temp2_1 = *(esi + 0x50)
        *(esi + 0x50) += eax_16
        *(esi + 0x54) = adc.d(*(esi + 0x54), edx_4, temp2_1 + eax_16 u< temp2_1)
        int32_t eax_18
        int32_t edx_5
        edx_5:eax_18 = sx.q(arg2[0x18])
        int32_t temp3_1 = *(esi + 0x58)
        *(esi + 0x58) += eax_18
        *(esi + 0x5c) = adc.d(*(esi + 0x5c), edx_5, temp3_1 + eax_18 u< temp3_1)
        int32_t eax_20
        int32_t edx_6
        edx_6:eax_20 = sx.q(arg2[0x19])
        int32_t temp4_1 = *(esi + 0x60)
        *(esi + 0x60) += eax_20
        *(esi + 0x64) = adc.d(*(esi + 0x64), edx_6, temp4_1 + eax_20 u< temp4_1)
        int32_t var_40_1
        int32_t var_20_1
        
        if (*(esi + 0x30) == 0)
            var_40_1 = 0
            var_20_1 = edi_2
        else
            var_40_1 = edi_2
            var_20_1 = 0
        
        int32_t i = 0
        int32_t i_1 = 0
        
        if (*(eax + 4) s> 0)
            do
                if (*(esi + 0x24) == 0)
                    int32_t eax_54 = *(ecx + 4) - edx
                    
                    if (*(esi + 0x28) == 0)
                        void* eax_85 = std::_Get_future_error_what(eax_54)
                        void* ecx_43 = *(*(esi + 8) + (i << 2)) + (var_20_1 << 2)
                        int32_t edx_32 = *(*arg2 + (i << 2))
                        int32_t edx_33 = 0
                        void* var_3c_8 = ecx_43
                        
                        if (ebx_3 s>= 4)
                            void* esi_2 = eax_85 + 8
                            void* edi_42 = eax_85 + (ebx_3 << 2) - 8
                            void* ecx_44 = ecx_43 + 4
                            void* eax_88 = edx_32 - eax_85
                            void* var_34_5 = eax_88
                            
                            while (true)
                                long double x87_r7_52 =
                                    fconvert.t(*(edx_32 + (edx_33 << 2))) * fconvert.t(*(esi_2 - 8))
                                float* ebx_16 = eax_85 - var_3c_8 + ecx_44
                                edx_33 += 4
                                long double x87_r6_32 =
                                    fconvert.t(*(edi_42 + 4)) * fconvert.t(*(ecx_44 - 4))
                                ecx_44 += 0x10
                                esi_2 += 0x10
                                edi_42 -= 0x10
                                *(ecx_44 - 0x14) = fconvert.s(x87_r7_52 + x87_r6_32)
                                ebx_3 = var_2c_1
                                *(ecx_44 - 0x10) = fconvert.s(
                                    fconvert.t(*(ebx_16 + eax_88)) * fconvert.t(*ebx_16)
                                    + fconvert.t(*(edi_42 + 0x10)) * fconvert.t(*(ecx_44 - 0x10)))
                                *(ecx_44 - 0xc) = fconvert.s(
                                    fconvert.t(*(esi_2 + eax_88 - 0x10)) * fconvert.t(*(esi_2 - 0x10))
                                    + fconvert.t(*(edi_42 + 0xc)) * fconvert.t(*(ecx_44 - 0xc)))
                                *(ecx_44 - 8) = fconvert.s(fconvert.t(*(edx_32 + (edx_33 << 2) - 4))
                                    * fconvert.t(*(esi_2 - 0xc))
                                    + fconvert.t(*(edi_42 + 8)) * fconvert.t(*(ecx_44 - 8)))
                                
                                if (edx_33 s>= ebx_3 - 3)
                                    break
                                
                                eax_88 = var_34_5
                            
                            i = i_1
                            esi = arg1
                            ecx_43 = var_3c_8
                        
                        if (edx_33 s< ebx_3)
                            void* var_44_4 = eax_85 + ((ebx_3 - edx_33) << 2) - 4
                            void* eax_91 = eax_85 - var_3c_8
                            float* ecx_45 = ecx_43 + (edx_33 << 2)
                            void* var_38_8 = eax_91
                            int32_t edi_49 = ebx_3 - edx_33
                            
                            while (true)
                                void* edx_34 = ecx_45 + eax_91
                                long double x87_r6_39 = fconvert.t(*ecx_45)
                                ecx_45 = &ecx_45[1]
                                int32_t temp13_1 = edi_49
                                edi_49 -= 1
                                long double x87_r6_40 = x87_r6_39 * fconvert.t(*var_44_4)
                                var_44_4 -= 4
                                ecx_45[-1] = fconvert.s(
                                    fconvert.t(*(edx_34 + edx_32 - eax_85)) * fconvert.t(*edx_34)
                                    + x87_r6_40)
                                
                                if (temp13_1 == 1)
                                    break
                                
                                eax_91 = var_38_8
                            
                            i = i_1
                    else
                        void* eax_55 = std::_Get_future_error_what(eax_54)
                        void* ecx_24 = *(*(esi + 8) + (i << 2)) + (var_20_1 << 2)
                        int32_t eax_58
                        int32_t edx_23
                        edx_23:eax_58 = sx.q(edi_2)
                        int32_t eax_61
                        int32_t edx_24
                        edx_24:eax_61 = sx.q(ebx_3)
                        int32_t eax_63 = (eax_61 - edx_24) s>> 1
                        int32_t ecx_26 = (eax_58 - edx_23) s>> 1
                        int32_t edx_27 = *(*arg2 + (i << 2)) + ((ecx_26 - eax_63) << 2)
                        void* eax_67 = eax_55
                        int32_t edx_28 = 0
                        int32_t var_44_1 = ecx_26
                        
                        if (ebx_3 s>= 4)
                            void* esi_1 = eax_67 + 8
                            void* edi_30 = eax_67 + (ebx_3 << 2) - 8
                            void* ecx_28 = ecx_24 + 4
                            void* eax_70 = edx_27 - eax_55
                            void* var_3c_5 = eax_70
                            
                            while (true)
                                long double x87_r7_32 =
                                    fconvert.t(*(edx_27 + (edx_28 << 2))) * fconvert.t(*(esi_1 - 8))
                                float* ebx_13 = eax_67 - ecx_24 + ecx_28
                                edx_28 += 4
                                long double x87_r6_22 =
                                    fconvert.t(*(edi_30 + 4)) * fconvert.t(*(ecx_28 - 4))
                                ecx_28 += 0x10
                                esi_1 += 0x10
                                edi_30 -= 0x10
                                *(ecx_28 - 0x14) = fconvert.s(x87_r7_32 + x87_r6_22)
                                ebx_3 = var_2c_1
                                *(ecx_28 - 0x10) = fconvert.s(
                                    fconvert.t(*(ebx_13 + eax_70)) * fconvert.t(*ebx_13)
                                    + fconvert.t(*(edi_30 + 0x10)) * fconvert.t(*(ecx_28 - 0x10)))
                                *(ecx_28 - 0xc) = fconvert.s(
                                    fconvert.t(*(esi_1 + eax_70 - 0x10)) * fconvert.t(*(esi_1 - 0x10))
                                    + fconvert.t(*(edi_30 + 0xc)) * fconvert.t(*(ecx_28 - 0xc)))
                                *(ecx_28 - 8) = fconvert.s(fconvert.t(*(edx_27 + (edx_28 << 2) - 4))
                                    * fconvert.t(*(esi_1 - 0xc))
                                    + fconvert.t(*(edi_30 + 8)) * fconvert.t(*(ecx_28 - 8)))
                                
                                if (edx_28 s>= ebx_3 - 3)
                                    break
                                
                                eax_70 = var_3c_5
                            
                            esi = arg1
                            ecx_26 = var_44_1
                            i = i_1
                            eax_67 = eax_55
                        
                        if (edx_28 s< ebx_3)
                            void* var_34_4 = eax_67 + ((ebx_3 - edx_28) << 2) - 4
                            void* eax_73 = eax_67 - ecx_24
                            int32_t edi_37 = ebx_3 - edx_28
                            void* ecx_30 = ecx_24 + (edx_28 << 2)
                            int32_t var_28_5 = edi_37
                            edx_28 += edi_37
                            void* var_38_6 = eax_73
                            
                            while (true)
                                void* eax_74 = eax_73 + ecx_30
                                ecx_30 += 4
                                int32_t temp14_1 = var_28_5
                                var_28_5 -= 1
                                long double x87_r6_30 =
                                    fconvert.t(*(ecx_30 - 4)) * fconvert.t(*var_34_4)
                                var_34_4 -= 4
                                *(ecx_30 - 4) = fconvert.s(
                                    fconvert.t(*(eax_74 + edx_27 - eax_67)) * fconvert.t(*eax_74)
                                    + x87_r6_30)
                                
                                if (temp14_1 == 1)
                                    break
                                
                                eax_73 = var_38_6
                            
                            i = i_1
                            ecx_26 = var_44_1
                        
                        int32_t ecx_37 = ecx_26 + eax_63
                        int32_t var_3c_7 = ecx_37
                        
                        if (edx_28 s< ecx_37)
                            if (ecx_37 - edx_28 s>= 4)
                                void* edi_39 = edx_27 + (edx_28 << 2) + 0xc
                                void* eax_80 = ecx_24 + (edx_28 << 2) + 4
                                int32_t j_7 = ((var_3c_7 - edx_28 - 4) u>> 2) + 1
                                void* var_44_2 = edi_39
                                edx_28 += j_7 << 2
                                int32_t j
                                
                                do
                                    *(eax_80 - 4) = fconvert.s(fconvert.t(*(edi_39 - 0xc)))
                                    eax_80 += 0x10
                                    *(eax_80 - 0x10) =
                                        fconvert.s(fconvert.t(*(edx_27 - ecx_24 + eax_80 - 0x10)))
                                    edi_39 = var_44_2 + 0x10
                                    j = j_7
                                    j_7 -= 1
                                    *(eax_80 - 0xc) = fconvert.s(fconvert.t(*(edi_39 - 0x14)))
                                    var_44_2 = edi_39
                                    *(eax_80 - 8) = fconvert.s(fconvert.t(*(edi_39 - 0x10)))
                                while (j != 1)
                                ecx_37 = var_3c_7
                                i = i_1
                            
                            if (edx_28 s< ecx_37)
                                int32_t j_8 = var_3c_7 - edx_28
                                float* eax_84 = ecx_24 + (edx_28 << 2)
                                int32_t j_1
                                
                                do
                                    long double x87_r7_50 = fconvert.t(*(eax_84 + edx_27 - ecx_24))
                                    eax_84 = &eax_84[1]
                                    j_1 = j_8
                                    j_8 -= 1
                                    eax_84[-1] = fconvert.s(x87_r7_50)
                                while (j_1 != 1)
                else if (*(esi + 0x28) == 0)
                    void* eax_37 = std::_Get_future_error_what(*(ecx + 4) - edx)
                    int32_t eax_39
                    int32_t edx_15
                    edx_15:eax_39 = sx.q(edi_2)
                    int32_t eax_42
                    int32_t edx_16
                    edx_16:eax_42 = sx.q(ebx_3)
                    void* eax_46 = *(*(esi + 8) + (i << 2))
                        + ((((eax_39 - edx_15) s>> 1) - ((eax_42 - edx_16) s>> 1) + var_20_1) << 2)
                    int32_t ecx_20 = *(*arg2 + (i << 2))
                    int32_t ecx_21 = 0
                    void* var_34_3 = eax_46
                    
                    if (ebx_3 s>= 4)
                        void* edx_19 = eax_37 + 8
                        float* var_38_3 = eax_37 + (ebx_3 << 2) - 8
                        void* eax_47 = eax_46 + 4
                        void* ebx_9 = ecx_20 - eax_37
                        void* var_28_2 = ebx_9
                        
                        while (true)
                            long double x87_r7_17 =
                                fconvert.t(*(ecx_20 + (ecx_21 << 2))) * fconvert.t(*(edx_19 - 8))
                            ecx_21 += 4
                            long double x87_r6_12 = fconvert.t(var_38_3[1]) * fconvert.t(*(eax_47 - 4))
                            void* edi_19 = eax_37 - var_34_3 + eax_47
                            eax_47 += 0x10
                            edx_19 += 0x10
                            *(eax_47 - 0x14) = fconvert.s(x87_r7_17 + x87_r6_12)
                            void* edi_21 = var_38_3 - 0x10
                            long double x87_r6_14 = fconvert.t(*var_38_3) * fconvert.t(*(eax_47 - 0x10))
                            var_38_3 = edi_21
                            *(eax_47 - 0x10) = fconvert.s(
                                fconvert.t(*(edi_19 + ebx_9)) * fconvert.t(*edi_19) + x87_r6_14)
                            *(eax_47 - 0xc) = fconvert.s(
                                fconvert.t(*(edx_19 + ebx_9 - 0x10)) * fconvert.t(*(edx_19 - 0x10))
                                + fconvert.t(*(edi_21 + 0xc)) * fconvert.t(*(eax_47 - 0xc)))
                            ebx_3 = var_2c_1
                            *(eax_47 - 8) = fconvert.s(
                                fconvert.t(*(ecx_20 + (ecx_21 << 2) - 4)) * fconvert.t(*(edx_19 - 0xc))
                                + fconvert.t(*(edi_21 + 8)) * fconvert.t(*(eax_47 - 8)))
                            
                            if (ecx_21 s>= ebx_3 - 3)
                                break
                            
                            ebx_9 = var_28_2
                        
                        i = i_1
                        eax_46 = var_34_3
                    
                    if (ecx_21 s< ebx_3)
                        void* edx_20 = eax_46 + (ecx_21 << 2)
                        void* var_38_4 = eax_37 + ((ebx_3 - ecx_21) << 2) - 4
                        void* eax_49 = eax_37 - var_34_3
                        int32_t edi_29 = ebx_3 - ecx_21
                        void* var_3c_4 = eax_49
                        
                        while (true)
                            void* eax_50 = eax_49 + edx_20
                            edx_20 += 4
                            int32_t temp15_1 = edi_29
                            edi_29 -= 1
                            long double x87_r6_20 = fconvert.t(*(edx_20 - 4)) * fconvert.t(*var_38_4)
                            var_38_4 -= 4
                            *(edx_20 - 4) = fconvert.s(
                                fconvert.t(*(eax_50 + ecx_20 - eax_37)) * fconvert.t(*eax_50)
                                + x87_r6_20)
                            
                            if (temp15_1 == 1)
                                break
                            
                            eax_49 = var_3c_4
                        
                        i = i_1
                else
                    void* eax_23 = std::_Get_future_error_what(*(ecx + 8) - edx)
                    void* ecx_11 = *(*(esi + 8) + (i << 2)) + (var_20_1 << 2)
                    int32_t edx_11 = *(*arg2 + (i << 2))
                    int32_t j_2 = 0
                    void* var_18_1 = ecx_11
                    
                    if (edi_2 s>= 4)
                        void* ebx_5 = eax_23 + (edi_2 << 2) - 8
                        void* ecx_12 = ecx_11 + 4
                        void* eax_26 = edx_11 - eax_23
                        void* var_28_1 = ebx_5
                        void* edi_4 = eax_23 + 8
                        
                        do
                            long double x87_r7_2 =
                                fconvert.t(*(edx_11 + (j_2 << 2))) * fconvert.t(*(edi_4 - 8))
                            j_2 += 4
                            float* ebx_6 = ecx_12 + eax_23 - var_18_1
                            long double x87_r6_2 = fconvert.t(*(ebx_5 + 4)) * fconvert.t(*(ecx_12 - 4))
                            ecx_12 += 0x10
                            edi_4 += 0x10
                            *(ecx_12 - 0x14) = fconvert.s(x87_r7_2 + x87_r6_2)
                            float* ebx_7 = var_28_1
                            ebx_5 = ebx_7 - 0x10
                            var_28_1 = ebx_5
                            *(ecx_12 - 0x10) = fconvert.s(
                                fconvert.t(*(ebx_6 + eax_26)) * fconvert.t(*ebx_6)
                                + fconvert.t(*ebx_7) * fconvert.t(*(ecx_12 - 0x10)))
                            *(ecx_12 - 0xc) = fconvert.s(
                                fconvert.t(*(edi_4 + eax_26 - 0x10)) * fconvert.t(*(edi_4 - 0x10))
                                + fconvert.t(*(ebx_5 + 0xc)) * fconvert.t(*(ecx_12 - 0xc)))
                            *(ecx_12 - 8) = fconvert.s(
                                fconvert.t(*(edx_11 + (j_2 << 2) - 4)) * fconvert.t(*(edi_4 - 0xc))
                                + fconvert.t(*(ebx_5 + 8)) * fconvert.t(*(ecx_12 - 8)))
                        while (j_2 s< edi_2 - 3)
                        
                        i = i_1
                        ebx_3 = var_2c_1
                        ecx_11 = var_18_1
                    
                    if (j_2 s< edi_2)
                        void* var_3c_2 = eax_23 + ((edi_2 - j_2) << 2) - 4
                        void* eax_33 = eax_23 - var_18_1
                        float* ecx_13 = ecx_11 + (j_2 << 2)
                        void* var_34_2 = eax_33
                        int32_t edi_11 = edi_2 - j_2
                        
                        while (true)
                            void* edx_12 = ecx_13 + eax_33
                            long double x87_r6_9 = fconvert.t(*ecx_13)
                            ecx_13 = &ecx_13[1]
                            int32_t temp16_1 = edi_11
                            edi_11 -= 1
                            long double x87_r6_10 = x87_r6_9 * fconvert.t(*var_3c_2)
                            var_3c_2 -= 4
                            ecx_13[-1] = fconvert.s(
                                fconvert.t(*(edx_12 + edx_11 - eax_23)) * fconvert.t(*edx_12)
                                + x87_r6_10)
                            
                            if (temp16_1 == 1)
                                break
                            
                            eax_33 = var_34_2
                        
                        i = i_1
                
                void* ecx_48 = *(*(esi + 8) + (i << 2)) + var_40_1 * 4
                void* edx_37 = *(*arg2 + (i << 2)) + eax_12 * 4
                int32_t eax_102 = 0
                int32_t var_38_9 = 0
                
                if (eax_12 s>= 4)
                    int32_t j_5 = ((eax_12 - 4) u>> 2) + 1
                    void* var_3c_9 = edx_37 + 0xc
                    void* eax_104 = ecx_48 + 4
                    var_38_9 = (((eax_12 - 4) u>> 2) + 1) * 4
                    int32_t j_3
                    
                    do
                        *(eax_104 - 4) = fconvert.s(fconvert.t(*(var_3c_9 - 0xc)))
                        eax_104 += 0x10
                        *(eax_104 - 0x10) = fconvert.s(fconvert.t(*(edx_37 - ecx_48 + eax_104 - 0x10)))
                        void* edx_48 = var_3c_9 + 0x10
                        j_3 = j_5
                        j_5 -= 1
                        *(eax_104 - 0xc) = fconvert.s(fconvert.t(*(edx_48 - 0x14)))
                        var_3c_9 = edx_48
                        *(eax_104 - 8) = fconvert.s(fconvert.t(*(edx_48 - 0x10)))
                    while (j_3 != 1)
                    eax_102 = var_38_9
                
                if (eax_102 s< eax_12)
                    float* edx_49 = ecx_48 + (eax_102 << 2)
                    int32_t j_6 = eax_12 - var_38_9
                    int32_t j_4
                    
                    do
                        long double x87_r7_70 = fconvert.t(*(edx_49 + edx_37 - ecx_48))
                        edx_49 = &edx_49[1]
                        j_4 = j_6
                        j_6 -= 1
                        edx_49[-1] = fconvert.s(x87_r7_70)
                    while (j_4 != 1)
                
                i += 1
                i_1 = i
            while (i s< *(eax + 4))
        
        int32_t ecx_50 = *(esi + 0x30)
        int32_t ecx_51 = neg.d(ecx_50)
        bool cond:0_1 = *(esi + 0x18) != 0xffffffff
        *(esi + 0x30) = not.d(sbb.d(ecx_51, ecx_51, ecx_50 != 0)) & edi_2
        
        if (cond:0_1)
            int32_t edx_50 = *(esi + 0x28)
            *(esi + 0x18) = var_20_1
            int32_t eax_111
            int32_t edx_51
            edx_51:eax_111 = sx.q(eax_1[edx_50])
            int32_t eax_114
            int32_t edx_53
            edx_53:eax_114 = sx.q(eax_1[*(esi + 0x24)])
            *(esi + 0x14) = (((((edx_51 & 3) + eax_111) s>> 2) + ((eax_114 + (edx_53 & 3)) s>> 2))
                s>> edx.b) + var_20_1
        else
            *(esi + 0x18) = var_40_1
            *(esi + 0x14) = var_40_1
    
    int32_t ecx_57 = *(ecx + 0x80)
    int32_t edi_51 = *(ecx + 0x84)
    
    if ((ecx_57 & edi_51) != 0xffffffff)
        int32_t eax_120
        int32_t edx_57
        edx_57:eax_120 = sx.q(eax_1[*(esi + 0x28)])
        int32_t eax_124
        int32_t edx_60
        edx_60:eax_124 = sx.q(eax_1[*(esi + 0x24)])
        int32_t eax_128
        int32_t edx_62
        edx_62:eax_128 = sx.q(((eax_124 + (edx_60 & 3)) s>> 2) + ((eax_120 + (edx_57 & 3)) s>> 2))
        *(ecx + 0x80) = eax_128 + ecx_57
        *(ecx + 0x84) = adc.d(edx_62, edi_51, eax_128 + ecx_57 u< eax_128)
    else
        *(ecx + 0x80) = 0
        *(ecx + 0x84) = 0
    
    int32_t ecx_58 = *(esi + 0x38)
    int32_t edi_52 = *(esi + 0x3c)
    
    if ((ecx_58 & edi_52) != 0xffffffff)
        int32_t eax_141
        int32_t edx_71
        edx_71:eax_141 = sx.q(eax_1[*(esi + 0x28)])
        int32_t eax_145
        int32_t edx_74
        edx_74:eax_145 = sx.q(eax_1[*(esi + 0x24)])
        int32_t eax_149
        int32_t edx_76
        edx_76:eax_149 = sx.q(((eax_145 + (edx_74 & 3)) s>> 2) + ((eax_141 + (edx_71 & 3)) s>> 2))
        *(esi + 0x3c) = adc.d(edx_76, edi_52, eax_149 + ecx_58 u< eax_149)
        *(esi + 0x38) = eax_149 + ecx_58
        int32_t eax_151 = arg2[0xc]
        int32_t ecx_65 = arg2[0xd]
        
        if ((eax_151 & ecx_65) != 0xffffffff)
            int32_t edx_80 = *(esi + 0x38)
            int32_t edi_55 = *(esi + 0x3c)
            
            if (edx_80 != eax_151 || edi_55 != ecx_65)
                if (edi_55 s>= ecx_65 && (edi_55 s> ecx_65 || edx_80 u> eax_151))
                    int32_t eax_153 = edx_80 - arg2[0xc]
                    
                    if (edx_80 != arg2[0xc] && arg2[0xb] != 0)
                        int32_t edi_56 = *(esi + 0x14)
                        char ecx_66 = edx.b
                        int32_t edx_83 = (edi_56 - *(esi + 0x18)) << ecx_66
                        
                        if (eax_153 s> edx_83)
                            eax_153 = edx_83
                        
                        if (eax_153 s< 0)
                            eax_153 = 0
                        
                        *(esi + 0x14) = edi_56 - (eax_153 s>> ecx_66)
                
                *(esi + 0x38) = arg2[0xc]
                *(esi + 0x3c) = arg2[0xd]
    else
        int32_t eax_132 = arg2[0xc]
        int32_t ecx_60 = arg2[0xd]
        
        if ((eax_132 & ecx_60) != 0xffffffff)
            *(esi + 0x38) = eax_132
            *(esi + 0x3c) = ecx_60
            int32_t ecx_61 = *(ecx + 0x84)
            int32_t temp8_1 = *(esi + 0x3c)
            
            if (ecx_61 s>= temp8_1 && (ecx_61 s> temp8_1 || *(ecx + 0x80) u> *(esi + 0x38)))
                int32_t eax_135 = *(ecx + 0x80)
                int32_t eax_136 = eax_135 - arg2[0xc]
                
                if (eax_135 - arg2[0xc] s< 0)
                    eax_136 = 0
                
                char ecx_64 = edx.b
                
                if (arg2[0xb] == 0)
                    *(esi + 0x18) += eax_136 s>> ecx_64
                    int32_t eax_139 = *(esi + 0x14)
                    
                    if (*(esi + 0x18) s> eax_139)
                        *(esi + 0x18) = eax_139
                else
                    int32_t edi_53 = *(esi + 0x14)
                    int32_t edx_69 = (edi_53 - *(esi + 0x18)) << ecx_64
                    
                    if (eax_136 s> edx_69)
                        eax_136 = edx_69
                    
                    *(esi + 0x14) = edi_53 - (eax_136 s>> ecx_64)
    
    if (arg2[0xb] != 0)
        *(esi + 0x20) = 1
    
    return 0
}

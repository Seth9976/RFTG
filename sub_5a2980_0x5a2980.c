// 函数名称: sub_5a2980
// 虚拟地址: 0x5a2980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5a2980(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x40)
    int32_t edx = *(arg3 + 0x40)
    int32_t esi_2 = *(arg3 + 0x78) + ((*(arg3 + 0x90) * edx) << 2)
    int32_t ebx_1 = *(arg3 + 0x64)
    void* esi_3 = *(arg3 + 0x68)
    int32_t edi = *(arg3 + 0x14)
    int32_t ecx = *(arg3 + 0x80)
    int32_t ecx_1 = 0
    int32_t esi_4 = 0
    int32_t var_14 = edx
    int32_t var_30 = ebx_1
    int32_t var_28 = 0
    
    if (edi s<= 0)
        return 
    
    int32_t var_1c_1 = 0
    void* var_18_1 = esi_3
    
    while (true)
        int32_t edi_2 = *(ebx_1 + (esi_4 << 3))
        int32_t esi_5 = *(ebx_1 + (esi_4 << 3) + 4)
        int32_t ebx_2 = 0
        
        if (edx - 1 u<= 3)
            switch (edx)
                case 1
                    int32_t var_8_1 = edi_2
                    
                    if (edi_2 s<= esi_5)
                        if (esi_5 - edi_2 + 1 s>= 4)
                            float* var_10_1 = esi_2 + (edi_2 << 2) + 8
                            void* var_20_1 = var_18_1
                            int32_t i_6 = ((esi_5 - edi_2 - 3) u>> 2) + 1
                            ebx_2 = i_6 << 2
                            var_8_1 = edi_2 + ebx_2
                            int32_t i
                            
                            do
                                float* edi_5 = var_20_1
                                long double x87_r7_4 = fconvert.t(fconvert.s(
                                    fconvert.t(var_10_1[-2]) * fconvert.t(*edi_5)
                                    + fconvert.t(*(arg1 + (ecx_1 << 2)))))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(x87_r7_4)
                                long double x87_r7_6 = fconvert.t(fconvert.s(x87_r7_4
                                    + fconvert.t(edi_5[1]) * fconvert.t(var_10_1[-1])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(x87_r7_6)
                                long double x87_r6_4 =
                                    fconvert.t(*(var_20_1 + 8)) * fconvert.t(*var_10_1)
                                void* edi_9 = var_20_1
                                var_20_1 += 0x10
                                long double x87_r7_8 = fconvert.t(fconvert.s(x87_r7_6 + x87_r6_4))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(x87_r7_8)
                                long double x87_r6_6 =
                                    fconvert.t(*(edi_9 + 0xc)) * fconvert.t(var_10_1[1])
                                var_10_1 = &var_10_1[4]
                                i = i_6
                                i_6 -= 1
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(x87_r7_8 + x87_r6_6)
                            while (i != 1)
                        
                        int32_t edi_11 = var_8_1
                        
                        if (edi_11 s<= esi_5)
                            float* edx_14 = esi_3 + ((var_1c_1 + ebx_2) << 2)
                            
                            do
                                long double x87_r7_10 = fconvert.t(*(esi_2 + (edi_11 << 2)))
                                edi_11 += 1
                                long double x87_r7_11 = x87_r7_10 * fconvert.t(*edx_14)
                                edx_14 = &edx_14[1]
                                *(arg1 + (ecx_1 << 2)) =
                                    fconvert.s(x87_r7_11 + fconvert.t(*(arg1 + (ecx_1 << 2))))
                            while (edi_11 s<= esi_5)
                case 2
                    int32_t var_8_2 = edi_2
                    
                    if (edi_2 s<= esi_5)
                        if (esi_5 - edi_2 + 1 s>= 4)
                            int32_t var_2c_4 = ((esi_5 - edi_2 - 3) u>> 2) + 1
                            void* edx_19 = esi_2 + (edi_2 << 3) + 0x14
                            ebx_2 = (((esi_5 - edi_2 - 3) u>> 2) + 1) * 4
                            var_8_2 = edi_2 + ebx_2
                            float* edi_13 = var_18_1
                            
                            while (true)
                                edx_19 += 0x20
                                int32_t temp4_1 = var_2c_4
                                var_2c_4 -= 1
                                long double x87_r6_7 = fconvert.t(fconvert.s(fconvert.t(*edi_13)))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_19 - 0x34)) * x87_r6_7
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    x87_r6_7 * fconvert.t(*(edx_19 - 0x30))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                long double x87_r6_9 = fconvert.t(fconvert.s(fconvert.t(edi_13[1])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_19 - 0x2c)) * x87_r6_9
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    x87_r6_9 * fconvert.t(*(edx_19 - 0x28))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                long double x87_r6_11 = fconvert.t(fconvert.s(fconvert.t(edi_13[2])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_19 - 0x24)) * x87_r6_11
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    x87_r6_11 * fconvert.t(*(edx_19 - 0x20))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                long double x87_r6_13 = fconvert.t(fconvert.s(fconvert.t(edi_13[3])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_19 - 0x1c)) * x87_r6_13
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    x87_r6_13 * fconvert.t(*(edx_19 - 0x18))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                
                                if (temp4_1 == 1)
                                    break
                                
                                edi_13 = &edi_13[4]
                        
                        if (var_8_2 s<= esi_5)
                            void* edx_21 = esi_2 + (var_8_2 << 3)
                            float* edi_18 = esi_3 + ((var_1c_1 + ebx_2) << 2)
                            int32_t i_7 = esi_5 - var_8_2 + 1
                            int32_t i_1
                            
                            do
                                long double x87_r7_41 = fconvert.t(*edi_18)
                                edi_18 = &edi_18[1]
                                edx_21 += 8
                                i_1 = i_7
                                i_7 -= 1
                                long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_41))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_21 - 8)) * x87_r6_15
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    x87_r6_15 * fconvert.t(*(edx_21 - 4))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                            while (i_1 != 1)
                case 3
                    int32_t var_8_3 = edi_2
                    
                    if (edi_2 s<= esi_5)
                        if (esi_5 - edi_2 + 1 s>= 4)
                            void* edx_26 = esi_2 + edi_2 * 0xc + 0x14
                            int32_t var_2c_5 = ((esi_5 - edi_2 - 3) u>> 2) + 1
                            ebx_2 = (((esi_5 - edi_2 - 3) u>> 2) + 1) * 4
                            var_8_3 = edi_2 + ebx_2
                            float* edi_20 = var_18_1
                            
                            while (true)
                                edx_26 += 0x30
                                int32_t temp5_1 = var_2c_5
                                var_2c_5 -= 1
                                long double x87_r6_17 = fconvert.t(fconvert.s(fconvert.t(*edi_20)))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x44)) * x87_r6_17
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x40)) * x87_r6_17
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    x87_r6_17 * fconvert.t(*(edx_26 - 0x3c))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                long double x87_r6_22 = fconvert.t(fconvert.s(fconvert.t(edi_20[1])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x38)) * x87_r6_22
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x34)) * x87_r6_22
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    x87_r6_22 * fconvert.t(*(edx_26 - 0x30))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                long double x87_r6_27 = fconvert.t(fconvert.s(fconvert.t(edi_20[2])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x2c)) * x87_r6_27
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x28)) * x87_r6_27
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    x87_r6_27 * fconvert.t(*(edx_26 - 0x24))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                long double x87_r6_32 = fconvert.t(fconvert.s(fconvert.t(edi_20[3])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x20)) * x87_r6_32
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_26 - 0x1c)) * x87_r6_32
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    x87_r6_32 * fconvert.t(*(edx_26 - 0x18))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                
                                if (temp5_1 == 1)
                                    break
                                
                                edi_20 = &edi_20[4]
                        
                        if (var_8_3 s<= esi_5)
                            float* ebx_20 = esi_3 + ((var_1c_1 + ebx_2) << 2)
                            void* edi_25 = esi_2 + var_8_3 * 0xc + 8
                            int32_t i_8 = esi_5 - var_8_3 + 1
                            int32_t i_2
                            
                            do
                                long double x87_r7_76 = fconvert.t(*ebx_20)
                                ebx_20 = &ebx_20[1]
                                edi_25 += 0xc
                                i_2 = i_8
                                i_8 -= 1
                                long double x87_r6_37 = fconvert.t(fconvert.s(x87_r7_76))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edi_25 - 0x14)) * x87_r6_37
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edi_25 - 0x10)) * x87_r6_37
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    x87_r6_37 * fconvert.t(*(edi_25 - 0xc))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                            while (i_2 != 1)
                case 4
                    int32_t var_8_4 = edi_2
                    
                    if (edi_2 s<= esi_5)
                        if (esi_5 - edi_2 + 1 s>= 4)
                            void* edx_34 = esi_2 + edi_2 * 0x10 + 0x18
                            int32_t var_2c_6 = ((esi_5 - edi_2 - 3) u>> 2) + 1
                            ebx_2 = (((esi_5 - edi_2 - 3) u>> 2) + 1) * 4
                            var_8_4 = edi_2 + ebx_2
                            float* edi_27 = var_18_1
                            
                            while (true)
                                long double x87_r6_42 = fconvert.t(fconvert.s(fconvert.t(*edi_27)))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_34 - 0x18)) * x87_r6_42
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_34 - 0x14)) * x87_r6_42
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    fconvert.t(*(edx_34 - 0x10)) * x87_r6_42
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                *(arg1 + (ecx_1 << 2) + 0xc) = fconvert.s(
                                    x87_r6_42 * fconvert.t(*(edx_34 - 0xc))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 0xc)))
                                long double x87_r6_50 = fconvert.t(fconvert.s(fconvert.t(edi_27[1])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_34 - 8)) * x87_r6_50
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_34 - 4)) * x87_r6_50
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(fconvert.t(*edx_34) * x87_r6_50
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                *(arg1 + (ecx_1 << 2) + 0xc) = fconvert.s(
                                    x87_r6_50 * fconvert.t(*(edx_34 + 4))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 0xc)))
                                long double x87_r6_58 = fconvert.t(fconvert.s(fconvert.t(edi_27[2])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_34 + 8)) * x87_r6_58
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_34 + 0xc)) * x87_r6_58
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    fconvert.t(*(edx_34 + 0x10)) * x87_r6_58
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                *(arg1 + (ecx_1 << 2) + 0xc) = fconvert.s(
                                    x87_r6_58 * fconvert.t(*(edx_34 + 0x14))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 0xc)))
                                long double x87_r6_66 = fconvert.t(fconvert.s(fconvert.t(edi_27[3])))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(edx_34 + 0x18)) * x87_r6_66
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(edx_34 + 0x1c)) * x87_r6_66
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    fconvert.t(*(edx_34 + 0x20)) * x87_r6_66
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                long double x87_r7_109 = x87_r6_66 * fconvert.t(*(edx_34 + 0x24))
                                edx_34 += 0x40
                                int32_t temp6_1 = var_2c_6
                                var_2c_6 -= 1
                                *(arg1 + (ecx_1 << 2) + 0xc) =
                                    fconvert.s(x87_r7_109 + fconvert.t(*(arg1 + (ecx_1 << 2) + 0xc)))
                                
                                if (temp6_1 == 1)
                                    break
                                
                                edi_27 = &edi_27[4]
                        
                        if (var_8_4 s<= esi_5)
                            float* edx_37 = esi_3 + ((var_1c_1 + ebx_2) << 2)
                            void* ebx_30 = esi_2 + var_8_4 * 0x10 + 8
                            int32_t i_9 = esi_5 - var_8_4 + 1
                            int32_t i_3
                            
                            do
                                long double x87_r7_111 = fconvert.t(*edx_37)
                                edx_37 = &edx_37[1]
                                ebx_30 += 0x10
                                i_3 = i_9
                                i_9 -= 1
                                long double x87_r6_74 = fconvert.t(fconvert.s(x87_r7_111))
                                *(arg1 + (ecx_1 << 2)) = fconvert.s(
                                    fconvert.t(*(ebx_30 - 0x18)) * x87_r6_74
                                    + fconvert.t(*(arg1 + (ecx_1 << 2))))
                                *(arg1 + (ecx_1 << 2) + 4) = fconvert.s(
                                    fconvert.t(*(ebx_30 - 0x14)) * x87_r6_74
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 4)))
                                *(arg1 + (ecx_1 << 2) + 8) = fconvert.s(
                                    x87_r6_74 * fconvert.t(*(ebx_30 - 0x10))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 8)))
                                *(arg1 + (ecx_1 << 2) + 0xc) = fconvert.s(
                                    x87_r6_74 * fconvert.t(*(ebx_30 - 0xc))
                                    + fconvert.t(*(arg1 + (ecx_1 << 2) + 0xc)))
                            while (i_3 != 1)
        else if (edi_2 s<= esi_5)
            int32_t edx_39 = edi_2 * var_14
            void* ebx_32 = esi_2 + (edx_39 << 2)
            int32_t var_20_5 = edx_39
            void* edx_40 = var_18_1
            void* var_2c_7 = ebx_32
            int32_t var_10_17 = esi_5 - edi_2 + 1
            
            while (true)
                int32_t esi_11 = var_14
                long double x87_r7_119 = fconvert.t(fconvert.s(fconvert.t(*edx_40)))
                int32_t edx_42 = 0
                
                if (esi_11 s>= 4)
                    int32_t i_10 = ((esi_11 - 4) u>> 2) + 1
                    void* edi_31 = arg1 + (ecx_1 << 2)
                    edx_42 = i_10 << 2
                    int32_t i_4
                    
                    do
                        ebx_32 += 0x10
                        edi_31 += 0x10
                        i_4 = i_10
                        i_10 -= 1
                        *(edi_31 - 0x10) = fconvert.s(x87_r7_119 * fconvert.t(*(ebx_32 - 0x10))
                            + fconvert.t(*(edi_31 - 0x10)))
                        *(edi_31 - 0xc) = fconvert.s(fconvert.t(*(ebx_32 - 0xc)) * x87_r7_119
                            + fconvert.t(*(edi_31 - 0xc)))
                        *(edi_31 - 8) = fconvert.s(fconvert.t(*(ebx_32 - 8)) * x87_r7_119
                            + fconvert.t(*(edi_31 - 8)))
                        *(edi_31 - 4) = fconvert.s(fconvert.t(*(ebx_32 - 4)) * x87_r7_119
                            + fconvert.t(*(edi_31 - 4)))
                    while (i_4 != 1)
                    esi_11 = var_14
                
                if (edx_42 s< esi_11)
                    void* ebx_34 = esi_2 + ((var_20_5 + edx_42) << 2)
                    void* esi_15 = arg1 + ((ecx_1 + edx_42) << 2)
                    int32_t i_11 = var_14 - edx_42
                    int32_t i_5
                    
                    do
                        ebx_34 += 4
                        esi_15 += 4
                        i_5 = i_11
                        i_11 -= 1
                        *(esi_15 - 4) = fconvert.s(x87_r7_119 * fconvert.t(*(ebx_34 - 4))
                            + fconvert.t(*(esi_15 - 4)))
                    while (i_5 != 1)
                    esi_11 = var_14
                
                var_20_5 += esi_11
                ebx_32 = var_2c_7 + (esi_11 << 2)
                int32_t temp1_1 = var_10_17
                var_10_17 -= 1
                var_2c_7 = ebx_32
                
                if (temp1_1 == 1)
                    break
                
                edx_40 += 4
        
        var_1c_1 += ecx
        ecx_1 += var_14
        var_18_1 += ecx * 4
        int32_t esi_17 = var_28 + 1
        var_28 = esi_17
        
        if (esi_17 s>= edi)
            break
        
        edx = var_14
        ebx_1 = var_30
        esi_4 = var_28
}

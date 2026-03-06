// 函数名称: sub_649580
// 虚拟地址: 0x649580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_649580(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    void* esi = arg1[7]
    
    if ((arg2.b & 0xf) != 0 && *(esi + 0xd40) != 0)
        return 
    
    if (arg2 - 0x10 u> 0x31)
        return 
    
    uint32_t eax_3
    
    switch (arg2 + &jump_table_6499c0[9])
        case &lookup_table_6499f4
            int32_t* eax_4 = arg3
            *eax_4 = *(esi + 0xd5c)
            long double x87_r7_2 = float.t(*(esi + 0xd74)) / float.t(arg1[2])
            *(eax_4 + 0x20) = fconvert.d(x87_r7_2)
            *(eax_4 + 0x10) = fconvert.d(x87_r7_2)
            *(eax_4 + 0x28) = fconvert.d(float.t(1))
            eax_4[1] = *(esi + 0xd60)
            eax_4[2] = *(esi + 0xd70)
            eax_4[6] = *(esi + 0xd64)
            eax_4[7] = *(esi + 0xd64)
        case &lookup_table_6499f4[1]
            if (arg3 == 0)
                *(esi + 0xd5c) = 0
                return 
            
            *(esi + 0xd5c) = *arg3
            sub_649580(arg1, 0x12, arg3)
            sub_649580(arg1, 0x13, arg3)
        case &lookup_table_6499f4[2]
            if (arg3 != 0)
                *(esi + 0xd64) = sub_685f40(float.t(arg3[7] + arg3[6]) * fconvert.t(0.5))
                return 
            
            *(esi + 0xd64) = 0
        case &lookup_table_6499f4[3]
            int32_t eax_12 = arg3
            
            if (eax_12 != 0)
                void* edx_4 = *(eax_12 + 4)
                *(esi + 0xd60) = edx_4
                int32_t ecx_6 = *(eax_12 + 8)
                *(esi + 0xd70) = ecx_6
                *(esi + 0xd74) =
                    sub_685f40(float.t(edx_4 + ecx_6) * fconvert.t(*(eax_12 + 0x10)) * fconvert.t(0.5))
            else
                *(esi + 0xd60) = 0
                *(esi + 0xd70) = 0
            
            long double x87_r7_9 = float.t(*(esi + 0xd74))
            long double temp0_1 = fconvert.t(128.0)
            x87_r7_9 - temp0_1
            eax_12.w = (x87_r7_9 < temp0_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_9, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp0_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                return 
            
            *(esi + 0xd74) = 0x80
        case &lookup_table_6499f4[4]
            if (arg3 == 0)
                return 
            
            *arg3 = *(esi + 0xd5c)
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = muls.dp.d(0x10624dd3, *(esi + 0xd60))
            int32_t edx_7 = edx_6 s>> 6
            arg3[1] = (edx_7 u>> 0x1f) + edx_7
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = muls.dp.d(0x10624dd3, *(esi + 0xd70))
            int32_t edx_9 = edx_8 s>> 6
            arg3[2] = (edx_9 u>> 0x1f) + edx_9
            int32_t eax_23
            int32_t edx_10
            edx_10:eax_23 = muls.dp.d(0x10624dd3, *(esi + 0xd64))
            int32_t edx_11 = edx_10 s>> 6
            arg3[6] = (edx_11 u>> 0x1f) + edx_11
            *(arg3 + 0x20) = fconvert.d(fconvert.t(*(esi + 0xd68)))
            arg3[3] = *(esi + 0xd74)
            *(arg3 + 0x10) = fconvert.d(fconvert.t(*(esi + 0xd78)))
        case &lookup_table_6499f4[5]
            if (arg3 == 0)
                *(esi + 0xd5c) = 0
                return 
            
            int32_t ebx_2 = arg3[1]
            int32_t eax_28
            
            if (ebx_2 s> 0)
                eax_28 = arg3[6]
            
            if (ebx_2 s<= 0 || eax_28 s<= 0 || ebx_2 s<= eax_28)
                int32_t eax_29 = arg3[2]
                int32_t edi_1
                
                if (eax_29 s> 0)
                    edi_1 = arg3[6]
                
                if ((eax_29 s<= 0 || edi_1 s<= 0 || eax_29 s>= edi_1)
                        && (ebx_2 s<= 0 || eax_29 s<= 0 || ebx_2 s<= eax_29))
                    long double x87_r7_12 = float.t(0)
                    long double temp3_1 = fconvert.t(*(arg3 + 0x20))
                    x87_r7_12 - temp3_1
                    eax_29.w = (x87_r7_12 < temp3_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_12, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_12 == temp3_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_29:1.b & 1) != 0 && arg3[3] s>= 0)
                        long double temp4_1 = fconvert.t(*(arg3 + 0x10))
                        x87_r7_12 - temp4_1
                        eax_29.w = (x87_r7_12 < temp4_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_12, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe
                        
                        if ((eax_29:1.b & 0x41) != 0)
                            long double x87_r7_13 = float.t(1)
                            long double temp5_1 = fconvert.t(*(arg3 + 0x10))
                            x87_r7_13 - temp5_1
                            eax_29.w = (x87_r7_13 < temp5_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_13, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == temp5_1 ? 1 : 0) << 0xe
                            bool p_2 = unimplemented  {test ah, 0x5}
                            
                            if (p_2)
                                *(esi + 0xd5c) = *arg3
                                *(esi + 0xd60) = arg3[1] * 0x3e8
                                *(esi + 0xd70) = arg3[2] * 0x3e8
                                *(esi + 0xd64) = arg3[6] * 0x3e8
                                *(esi + 0xd68) = fconvert.d(fconvert.t(*(arg3 + 0x20)))
                                *(esi + 0xd74) = arg3[3]
                                *(esi + 0xd78) = fconvert.d(fconvert.t(*(arg3 + 0x10)))
        case &lookup_table_6499f4[0x10]
            *arg3 = fconvert.d(fconvert.t(*(esi + 0xd98)))
        case &lookup_table_6499f4[0x11]
            long double x87_r7_17 = fconvert.t(*arg3)
            *(esi + 0xd98) = fconvert.d(x87_r7_17)
            long double x87_r6 = fconvert.t(2.0)
            x87_r6 - x87_r7_17
            eax_3.w = (x87_r6 < x87_r7_17 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6, x87_r7_17) ? 1 : 0) << 0xa
                | (x87_r6 == x87_r7_17 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_3:1.b & 0x41) == 0)
                *(esi + 0xd98) = fconvert.d(x87_r7_17)
            
            long double x87_r7_18 = fconvert.t(99.0)
            long double temp1 = fconvert.t(*(esi + 0xd98))
            x87_r7_18 - temp1
            eax_3.w = (x87_r7_18 < temp1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_18, temp1) ? 1 : 0) << 0xa
                | (x87_r7_18 == temp1 ? 1 : 0) << 0xe | 0x3800
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (p_3)
                *(esi + 0xda0) = 1
                return 
            
            *(esi + 0xd98) = fconvert.d(x87_r7_18)
            *(esi + 0xda0) = 1
        case &lookup_table_6499f4[0x20]
            *arg3 = fconvert.d(fconvert.t(*(esi + 0xd50)))
        case &lookup_table_6499f4[0x21]
            long double x87_r7_20 = fconvert.t(*arg3)
            *(esi + 0xd50) = fconvert.d(x87_r7_20)
            long double x87_r6_1 = float.t(0)
            x87_r6_1 - x87_r7_20
            eax_3.w = (x87_r6_1 < x87_r7_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_20) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_20 ? 1 : 0) << 0xe | 0x3000
            bool p_4 = unimplemented  {test ah, 0x5}
            
            if (not(p_4))
                *(esi + 0xd50) = fconvert.d(x87_r7_20)
            
            long double x87_r7_21 = fconvert.t(-15.0)
            long double temp2 = fconvert.t(*(esi + 0xd50))
            x87_r7_21 - temp2
            eax_3.w = (x87_r7_21 < temp2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_21, temp2) ? 1 : 0) << 0xa
                | (x87_r7_21 == temp2 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_3:1.b & 0x41) != 0)
                return 
            
            *(esi + 0xd50) = fconvert.d(x87_r7_21)
        case &lookup_table_6499f4[0x30]
            *arg3 = *(esi + 0xd88)
        case &lookup_table_6499f4[0x31]
            double var_c = fconvert.d(float.t(0))
            int32_t eax_45
            eax_45.b = *arg3 != 0
            *(esi + 0xd88) = eax_45
            int32_t eax_46
            
            if (eax_45 == 0)
                eax_46 = 0xffffffff
            else
                eax_46 = arg1[1]
            
            int32_t ecx_12 = arg1[2]
            double* var_1c_2 = &var_c
            int32_t var_24
            var_24.q = fconvert.d(fconvert.t(*(esi + 0xd58)))
            double* var_20
            int32_t eax_47 = sub_6489f0(eax_46, *(esi + 0xd5c), ecx_12, eax_46, ecx_12, var_20)
            
            if (*(esi + 0xd44) != 0)
                long double x87_r7_24 = fconvert.t(var_c)
                *(esi + 0xd44) = eax_47
                *(esi + 0xd48) = fconvert.d(x87_r7_24)
                sub_649170(arg1, arg1[2], arg1[1])
}

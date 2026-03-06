// 函数名称: sub_63eb60
// 虚拟地址: 0x63eb60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63eb60(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t ebx = arg5
    int32_t ebx = arg5
    int32_t esi = arg3
    int32_t eax_5
    
    if (esi == ebx)
        int32_t eax_4 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * esi
        int32_t esi_1 = *(arg1 + 0x14)
        int32_t ecx_2
        int32_t edi_1
        
        if (arg2 s> arg4)
            eax_5 = eax_4 + arg4
            edi_1 = esi_1 + (eax_5 << 1)
            
            if (arg7 != 0)
                ecx_2 = arg2 - arg4 + 1
            else
                edi_1 += 2
                ecx_2 = arg2 - arg4
        else
            eax_5 = eax_4 + arg2
            int32_t edx_2 = arg4 - arg2
            edi_1 = esi_1 + (eax_5 << 1)
            
            if (arg7 == 0)
                ecx_2 = edx_2
            else
                ecx_2 = edx_2 + 1
        
        if (ecx_2 != 0)
            uint32_t edx_3 = zx.d(arg6.w)
            uint32_t eax_8 = edx_3 | edx_3 << 0x10
            int32_t ecx_4
            int32_t edi_2
            edi_2, ecx_4 = __memfill_u32(edi_1, eax_8, ecx_2 u>> 1)
            int32_t ecx_6
            int32_t edi_3
            edi_3, ecx_6 = __memfill_u16(edi_2, eax_8.w, adc.d(ecx_4, ecx_4, (ecx_2 & 1) != 0))
            return eax_8
    else if (arg2 != arg4)
        int32_t eax_15
        int32_t edx_13
        edx_13:eax_15 = sx.q(arg2 - arg4)
        arg3 = (eax_15 ^ edx_13) - edx_13
        int32_t ecx_14 = esi - ebx
        int32_t eax_19
        int32_t edx_14
        edx_14:eax_19 = sx.q(ecx_14)
        arg5 = ecx_14
        
        if (arg3 != (eax_19 ^ edx_14) - edx_14)
            void* eax_27 = *(arg1 + 4)
            void var_6
            void var_5
            sub_5d7f70(arg6, eax_27, &var_6, &var_5, &arg5:3, &arg3:3)
            int32_t eax_29 = *(eax_27 + 0xc)
            
            if (eax_29 == 0x7c00)
                int32_t eax_32
                int32_t edx_24
                edx_24:eax_32 = sx.q(arg4 - arg2)
                int32_t ecx_25 = (eax_32 ^ edx_24) - edx_24
                int32_t eax_35
                int32_t edx_25
                edx_25:eax_35 = sx.q(ebx - esi)
                int32_t eax_37 = (eax_35 ^ edx_25) - edx_25
                int32_t var_18_1
                int32_t var_10_1
                int32_t var_c_1
                int32_t ecx_26
                int32_t edx_28
                int32_t edi_5
                
                if (ecx_25 s< eax_37)
                    edi_5 = ecx_25 * 2
                    arg3 = eax_37 + 1
                    var_18_1 = (ecx_25 - eax_37) * 2
                    ecx_26 = 1
                    edx_28 = edi_5 - eax_37
                    eax_5 = 0
                    var_c_1 = 1
                    var_10_1 = 1
                else
                    edi_5 = eax_37 * 2
                    arg3 = ecx_25 + 1
                    edx_28 = edi_5 - ecx_25
                    var_18_1 = (eax_37 - ecx_25) * 2
                    eax_5 = 1
                    ecx_26 = 1
                    var_c_1 = 0
                    var_10_1 = 1
                
                if (arg2 s> arg4)
                    eax_5 = neg.d(eax_5)
                    ecx_26 = 0xffffffff
                
                if (esi s> ebx)
                    var_c_1 = neg.d(var_c_1)
                    var_10_1 = 0xffffffff
                
                int32_t i_11 = arg3
                
                if (arg7 == 0)
                    i_11 -= 1
                
                if (i_11 s> 0)
                    int32_t edi_7 = arg2 * 2
                    int32_t i_5 = i_11
                    int32_t eax_42
                    int32_t i
                    
                    do
                        eax_42 = *(arg1 + 0x14)
                        *(*(arg1 + 0x10) * esi + edi_7 + eax_42) = arg6.w
                        
                        if (edx_28 s>= 0)
                            edx_28 += var_18_1
                            edi_7 += ecx_26 * 2
                            esi += var_10_1
                        else
                            edx_28 += edi_5
                            edi_7 += eax_5 * 2
                            esi += var_c_1
                        
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                    return eax_42
            else if (eax_29 != 0xf800)
                int32_t eax_57
                int32_t edx_38
                edx_38:eax_57 = sx.q(arg4 - arg2)
                int32_t ecx_41 = (eax_57 ^ edx_38) - edx_38
                int32_t eax_60
                int32_t edx_39
                edx_39:eax_60 = sx.q(ebx - esi)
                int32_t eax_62 = (eax_60 ^ edx_39) - edx_39
                int32_t var_18_3
                int32_t var_10_3
                int32_t var_c_3
                int32_t ecx_42
                int32_t edx_42
                int32_t edi_12
                
                if (ecx_41 s< eax_62)
                    edi_12 = ecx_41 * 2
                    arg3 = eax_62 + 1
                    var_18_3 = (ecx_41 - eax_62) * 2
                    ecx_42 = 1
                    edx_42 = edi_12 - eax_62
                    eax_5 = 0
                    var_c_3 = 1
                    var_10_3 = 1
                else
                    edi_12 = eax_62 * 2
                    arg3 = ecx_41 + 1
                    edx_42 = edi_12 - ecx_41
                    var_18_3 = (eax_62 - ecx_41) * 2
                    eax_5 = 1
                    ecx_42 = 1
                    var_c_3 = 0
                    var_10_3 = 1
                
                if (arg2 s> arg4)
                    eax_5 = neg.d(eax_5)
                    ecx_42 = 0xffffffff
                
                if (esi s> ebx)
                    var_c_3 = neg.d(var_c_3)
                    var_10_3 = 0xffffffff
                
                int32_t i_13 = arg3
                
                if (arg7 == 0)
                    i_13 -= 1
                
                if (i_13 s> 0)
                    int32_t edi_14 = arg2 * 2
                    int32_t eax_65 = eax_5 * 2
                    int32_t i_7 = i_13
                    int32_t i_1
                    
                    do
                        eax_5 = *(arg1 + 0x14)
                        *(*(arg1 + 0x10) * esi + edi_14 + eax_5) = arg6.w
                        
                        if (edx_42 s>= 0)
                            edx_42 += var_18_3
                            edi_14 += ecx_42 * 2
                            esi += var_10_3
                        else
                            edx_42 += edi_12
                            edi_14 += eax_65
                            esi += var_c_3
                        
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
            else
                int32_t eax_45
                int32_t edx_31
                edx_31:eax_45 = sx.q(arg4 - arg2)
                int32_t ecx_33 = (eax_45 ^ edx_31) - edx_31
                int32_t eax_48
                int32_t edx_32
                edx_32:eax_48 = sx.q(ebx - esi)
                int32_t eax_50 = (eax_48 ^ edx_32) - edx_32
                int32_t var_18_2
                int32_t var_10_2
                int32_t var_c_2
                int32_t ecx_34
                int32_t edx_35
                int32_t edi_8
                
                if (ecx_33 s< eax_50)
                    edi_8 = ecx_33 * 2
                    arg3 = eax_50 + 1
                    var_18_2 = (ecx_33 - eax_50) * 2
                    ecx_34 = 1
                    edx_35 = edi_8 - eax_50
                    eax_5 = 0
                    var_c_2 = 1
                    var_10_2 = 1
                else
                    edi_8 = eax_50 * 2
                    arg3 = ecx_33 + 1
                    edx_35 = edi_8 - ecx_33
                    var_18_2 = (eax_50 - ecx_33) * 2
                    eax_5 = 1
                    ecx_34 = 1
                    var_c_2 = 0
                    var_10_2 = 1
                
                if (arg2 s> arg4)
                    eax_5 = neg.d(eax_5)
                    ecx_34 = 0xffffffff
                
                if (esi s> ebx)
                    var_c_2 = neg.d(var_c_2)
                    var_10_2 = 0xffffffff
                
                int32_t i_12 = arg3
                
                if (arg7 == 0)
                    i_12 -= 1
                
                if (i_12 s> 0)
                    int32_t i_6 = i_12
                    int32_t edi_11 = arg2 * 2
                    int32_t eax_55
                    int32_t i_2
                    
                    do
                        eax_55 = *(arg1 + 0x14)
                        *(*(arg1 + 0x10) * esi + edi_11 + eax_55) = arg6.w
                        
                        if (edx_35 s>= 0)
                            edx_35 += var_18_2
                            edi_11 += ecx_34 * 2
                            esi += var_10_2
                        else
                            edx_35 += edi_8
                            edi_11 += eax_5 * 2
                            esi += var_c_2
                        
                        i_2 = i_6
                        i_6 -= 1
                    while (i_2 != 1)
                    return eax_55
        else
            int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int16_t* ecx_18
            int32_t i_8
            
            if (esi s> ebx)
                ecx_18 = *(arg1 + 0x14) + ((temp0_3 * ebx + arg4) << 1)
                
                if (arg4 s> arg2)
                    eax_5 = temp0_3 - 1
                else
                    eax_5 = temp0_3 + 1
                
                if (arg7 == 0)
                    ecx_18 = &ecx_18[eax_5]
                
                i_8 = arg5
            else
                ecx_18 = *(arg1 + 0x14) + ((temp0_3 * esi + arg2) << 1)
                
                if (arg2 s> arg4)
                    eax_5 = temp0_3 - 1
                    i_8 = ebx - esi
                else
                    eax_5 = temp0_3 + 1
                    i_8 = ebx - esi
            
            if (arg7 != 0)
                i_8 += 1
            
            if (i_8 != 0)
                int32_t i_3
                
                do
                    *ecx_18 = arg6.w
                    ecx_18 = &ecx_18[eax_5]
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
                return eax_5 * 2
    else
        eax_5 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
        int32_t ecx_11 = *(arg1 + 0x14)
        int16_t* ecx_12
        int32_t i_9
        
        if (esi s> ebx)
            ecx_12 = ecx_11 + ((eax_5 * ebx + arg2) << 1)
            
            if (arg7 != 0)
                i_9 = esi - ebx + 1
            else
                ecx_12 = &ecx_12[eax_5]
                i_9 = esi - ebx
        else
            int32_t i_10 = ebx - esi
            ecx_12 = ecx_11 + ((eax_5 * esi + arg2) << 1)
            
            if (arg7 == 0)
                i_9 = i_10
            else
                i_9 = i_10 + 1
        
        if (i_9 != 0)
            int32_t i_4
            
            do
                *ecx_12 = arg6.w
                ecx_12 = &ecx_12[eax_5]
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
            return eax_5 * 2
    
    return eax_5
}

// 函数名称: sub_63efd0
// 虚拟地址: 0x63efd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63efd0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
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
            edi_1 = esi_1 + (eax_5 << 2)
            
            if (arg7 != 0)
                ecx_2 = arg2 - arg4 + 1
            else
                edi_1 += 4
                ecx_2 = arg2 - arg4
        else
            eax_5 = eax_4 + arg2
            int32_t edx_2 = arg4 - arg2
            edi_1 = esi_1 + (eax_5 << 2)
            
            if (arg7 == 0)
                ecx_2 = edx_2
            else
                ecx_2 = edx_2 + 1
        
        if (ecx_2 != 0)
            int32_t ecx_3
            int32_t edi_2
            edi_2, ecx_3 = __memfill_u32(edi_1, arg6, ecx_2)
            return arg6
    else if (arg2 != arg4)
        int32_t eax_14
        int32_t edx_12
        edx_12:eax_14 = sx.q(arg2 - arg4)
        arg3 = (eax_14 ^ edx_12) - edx_12
        int32_t ecx_10 = esi - ebx
        int32_t eax_18
        int32_t edx_13
        edx_13:eax_18 = sx.q(ecx_10)
        arg5 = ecx_10
        
        if (arg3 != (eax_18 ^ edx_13) - edx_13)
            void* eax_27 = *(arg1 + 4)
            void var_6
            void var_5
            sub_5d7f70(arg6, eax_27, &var_6, &var_5, &arg5:3, &arg3:3)
            
            if (*(eax_27 + 0xc) != 0xff0000)
                int32_t eax_59
                int32_t edx_37
                edx_37:eax_59 = sx.q(arg4 - arg2)
                int32_t ecx_38 = (eax_59 ^ edx_37) - edx_37
                int32_t eax_62
                int32_t edx_38
                edx_38:eax_62 = sx.q(ebx - esi)
                int32_t eax_64 = (eax_62 ^ edx_38) - edx_38
                int32_t var_18_3
                int32_t var_10_3
                int32_t var_c_3
                int32_t ecx_39
                int32_t edx_41
                int32_t edi_12
                
                if (ecx_38 s< eax_64)
                    edi_12 = ecx_38 * 2
                    arg3 = eax_64 + 1
                    var_18_3 = (ecx_38 - eax_64) * 2
                    ecx_39 = 1
                    edx_41 = edi_12 - eax_64
                    eax_5 = 0
                    var_c_3 = 1
                    var_10_3 = 1
                else
                    edi_12 = eax_64 * 2
                    arg3 = ecx_38 + 1
                    edx_41 = edi_12 - ecx_38
                    var_18_3 = (eax_64 - ecx_38) * 2
                    eax_5 = 1
                    ecx_39 = 1
                    var_c_3 = 0
                    var_10_3 = 1
                
                if (arg2 s> arg4)
                    eax_5 = neg.d(eax_5)
                    ecx_39 = 0xffffffff
                
                if (esi s> ebx)
                    var_c_3 = neg.d(var_c_3)
                    var_10_3 = 0xffffffff
                
                int32_t i_13 = arg3
                
                if (arg7 == 0)
                    i_13 -= 1
                
                if (i_13 s> 0)
                    int32_t eax_67 = eax_5 * 2
                    int32_t edi_15 = arg2 * 4
                    int32_t i_7 = i_13
                    int32_t i
                    
                    do
                        eax_5 = *(arg1 + 0x14)
                        *(*(arg1 + 0x10) * esi + edi_15 + eax_5) = arg6
                        
                        if (edx_41 s>= 0)
                            edx_41 += var_18_3
                            edi_15 += ecx_39 * 4
                            esi += var_10_3
                        else
                            edx_41 += edi_12
                            edi_15 += eax_67 * 2
                            esi += var_c_3
                        
                        i = i_7
                        i_7 -= 1
                    while (i != 1)
            else if (*(eax_27 + 0x18) != 0)
                int32_t eax_45
                int32_t edx_30
                edx_30:eax_45 = sx.q(arg4 - arg2)
                int32_t ecx_29 = (eax_45 ^ edx_30) - edx_30
                int32_t eax_48
                int32_t edx_31
                edx_31:eax_48 = sx.q(ebx - esi)
                int32_t eax_50 = (eax_48 ^ edx_31) - edx_31
                int32_t var_18_2
                int32_t var_10_2
                int32_t var_c_2
                int32_t ecx_30
                int32_t edx_34
                int32_t edi_8
                
                if (ecx_29 s< eax_50)
                    edi_8 = ecx_29 * 2
                    arg3 = eax_50 + 1
                    var_18_2 = (ecx_29 - eax_50) * 2
                    ecx_30 = 1
                    edx_34 = edi_8 - eax_50
                    eax_5 = 0
                    var_c_2 = 1
                    var_10_2 = 1
                else
                    edi_8 = eax_50 * 2
                    arg3 = ecx_29 + 1
                    edx_34 = edi_8 - ecx_29
                    var_18_2 = (eax_50 - ecx_29) * 2
                    eax_5 = 1
                    ecx_30 = 1
                    var_c_2 = 0
                    var_10_2 = 1
                
                if (arg2 s> arg4)
                    eax_5 = neg.d(eax_5)
                    ecx_30 = 0xffffffff
                
                if (esi s> ebx)
                    var_c_2 = neg.d(var_c_2)
                    var_10_2 = 0xffffffff
                
                int32_t i_12 = arg3
                
                if (arg7 == 0)
                    i_12 -= 1
                
                if (i_12 s> 0)
                    int32_t edi_11 = arg2 * 4
                    int32_t i_6 = i_12
                    int32_t eax_56
                    int32_t i_1
                    
                    do
                        eax_56 = *(arg1 + 0x14)
                        *(*(arg1 + 0x10) * esi + edi_11 + eax_56) = arg6
                        
                        if (edx_34 s>= 0)
                            edx_34 += var_18_2
                            edi_11 += ecx_30 * 4
                            esi += var_10_2
                        else
                            edx_34 += edi_8
                            edi_11 += eax_5 * 4
                            esi += var_c_2
                        
                        i_1 = i_6
                        i_6 -= 1
                    while (i_1 != 1)
                    return eax_56
            else
                int32_t eax_32
                int32_t edx_23
                edx_23:eax_32 = sx.q(arg4 - arg2)
                int32_t ecx_20 = (eax_32 ^ edx_23) - edx_23
                int32_t eax_35
                int32_t edx_24
                edx_24:eax_35 = sx.q(ebx - esi)
                int32_t eax_37 = (eax_35 ^ edx_24) - edx_24
                int32_t var_18_1
                int32_t var_10_1
                int32_t var_c_1
                int32_t ecx_21
                int32_t edx_27
                int32_t edi_4
                
                if (ecx_20 s< eax_37)
                    edi_4 = ecx_20 * 2
                    arg3 = eax_37 + 1
                    var_18_1 = (ecx_20 - eax_37) * 2
                    ecx_21 = 1
                    edx_27 = edi_4 - eax_37
                    eax_5 = 0
                    var_c_1 = 1
                    var_10_1 = 1
                else
                    edi_4 = eax_37 * 2
                    arg3 = ecx_20 + 1
                    edx_27 = edi_4 - ecx_20
                    var_18_1 = (eax_37 - ecx_20) * 2
                    eax_5 = 1
                    ecx_21 = 1
                    var_c_1 = 0
                    var_10_1 = 1
                
                if (arg2 s> arg4)
                    eax_5 = neg.d(eax_5)
                    ecx_21 = 0xffffffff
                
                if (esi s> ebx)
                    var_c_1 = neg.d(var_c_1)
                    var_10_1 = 0xffffffff
                
                int32_t i_11 = arg3
                
                if (arg7 == 0)
                    i_11 -= 1
                
                if (i_11 s> 0)
                    int32_t edi_7 = arg2 * 4
                    int32_t i_5 = i_11
                    int32_t eax_43
                    int32_t i_2
                    
                    do
                        eax_43 = *(arg1 + 0x14)
                        *(*(arg1 + 0x10) * esi + edi_7 + eax_43) = arg6
                        
                        if (edx_27 s>= 0)
                            edx_27 += var_18_1
                            edi_7 += ecx_21 * 4
                            esi += var_10_1
                        else
                            edx_27 += edi_4
                            edi_7 += eax_5 * 4
                            esi += var_c_1
                        
                        i_2 = i_5
                        i_5 -= 1
                    while (i_2 != 1)
                    return eax_43
        else
            int32_t temp0_3 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t* ecx_14
            int32_t i_8
            
            if (esi s> ebx)
                ecx_14 = *(arg1 + 0x14) + ((temp0_3 * ebx + arg4) << 2)
                
                if (arg4 s> arg2)
                    eax_5 = temp0_3 - 1
                else
                    eax_5 = temp0_3 + 1
                
                if (arg7 == 0)
                    ecx_14 = &ecx_14[eax_5]
                
                i_8 = arg5
            else
                ecx_14 = *(arg1 + 0x14) + ((temp0_3 * esi + arg2) << 2)
                
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
                    *ecx_14 = arg6
                    ecx_14 = &ecx_14[eax_5]
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
                return eax_5 * 4
    else
        eax_5 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
        int32_t ecx_7 = *(arg1 + 0x14)
        int32_t* ecx_8
        int32_t i_9
        
        if (esi s> ebx)
            ecx_8 = ecx_7 + ((eax_5 * ebx + arg2) << 2)
            
            if (arg7 != 0)
                i_9 = esi - ebx + 1
            else
                ecx_8 = &ecx_8[eax_5]
                i_9 = esi - ebx
        else
            int32_t i_10 = ebx - esi
            ecx_8 = ecx_7 + ((eax_5 * esi + arg2) << 2)
            
            if (arg7 == 0)
                i_9 = i_10
            else
                i_9 = i_10 + 1
        
        if (i_9 != 0)
            int32_t i_4
            
            do
                *ecx_8 = arg6
                ecx_8 = &ecx_8[eax_5]
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
            return eax_5 * 4
    
    return eax_5
}

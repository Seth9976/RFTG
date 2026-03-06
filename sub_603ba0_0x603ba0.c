// 函数名称: sub_603ba0
// 虚拟地址: 0x603ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_603ba0(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int16_t* arg5, void* arg6, uint32_t arg7, uint32_t arg8)
{
    // 第一条实际指令: uint32_t i_15 = *(arg6 + 4)
    uint32_t i_15 = *(arg6 + 4)
    int16_t* ebx = arg5
    
    if (arg8 != 0xff)
        uint32_t edx_33 = zx.d(*(i_15 + 9))
        
        if (edx_33 == 2)
            int32_t edi_18 = *(i_15 + 0x14)
            int32_t edx_96 = *(i_15 + 0xc) | *(i_15 + 0x10) | edi_18
            
            if (edx_96 != 0x7fff)
                if (edx_96 != 0xffff
                        || (*(i_15 + 0x10) != 0x7e0 && *(i_15 + 0xc) != 0x7e0 && edi_18 != 0x7e0))
                    goto label_6047aa
                
                int32_t eax_37 = *arg3
                int32_t ecx_134 = arg3[2] + eax_37
                int32_t var_20_5 = arg3[3]
                int32_t edx_98 = 0
                int32_t var_24_6 = ecx_134
                arg7 += neg.d(eax_37) << 1
                
                if (arg8 != 0x80)
                    while (true)
                        i_15 = zx.d(*ebx)
                        uint32_t i_38 = zx.d(*(ebx + 1))
                        edx_98 += i_15
                        ebx = &ebx[1]
                        
                        if (i_38 != 0)
                            if (edx_98 s< ecx_134)
                                int32_t edi_22 = eax_37 - edx_98
                                int32_t ecx_146 = 0
                                uint32_t i_17 = i_38
                                
                                if (edi_22 s> 0)
                                    ecx_146 = edi_22
                                    i_17 -= ecx_146
                                
                                if (edi_22 s<= 0 || i_17 s> 0)
                                    int32_t esi_54 = ecx_146 + edx_98
                                    uint32_t i_33 = var_24_6 - esi_54
                                    
                                    if (i_17 s> i_33)
                                        i_17 = i_33
                                    
                                    void* edx_119 = arg7 + (esi_54 << 1)
                                    
                                    if (i_17 s> 0)
                                        void* ecx_149 = ecx_146 * 2 - edx_119 + ebx
                                        uint32_t i_9 = i_17
                                        uint32_t i
                                        
                                        do
                                            uint32_t esi_55 = zx.d(*(edx_119 + ecx_149))
                                            uint32_t eax_47 = zx.d(*edx_119)
                                            int32_t ecx_153 = (eax_47 << 0x10 | eax_47) & 0x7e0f81f
                                            int32_t eax_56 = ((((((esi_55 << 0x10 | esi_55) & 0x7e0f81f)
                                                - ecx_153) * (arg8 u>> 3)) u>> 5) + ecx_153) & 0x7e0f81f
                                            *edx_119 = (eax_56 u>> 0x10).w | eax_56.w
                                            edx_119 += 2
                                            i = i_9
                                            i_9 -= 1
                                        while (i != 1)
                            
                            ecx_134 = var_24_6
                            ebx = &ebx[i_38]
                            edx_98 += i_38
                        else if (edx_98 == 0)
                            break
                        
                        if (edx_98 == arg4)
                            int32_t eax_58 = *(arg6 + 0x10)
                            arg7 += eax_58
                            edx_98 = 0
                            int32_t temp11_1 = var_20_5
                            var_20_5 -= 1
                            
                            if (temp11_1 == 1)
                                return eax_58
                else
                    while (true)
                        edx_98 += zx.d(*ebx)
                        i_15 = zx.d(*(ebx + 1))
                        ebx = &ebx[1]
                        
                        if (i_15 != 0)
                            uint32_t i_23
                            
                            if (edx_98 s>= ecx_134)
                                i_23 = i_15
                            else
                                i_23 = i_15
                                int32_t esi_42 = eax_37 - edx_98
                                int32_t eax_41 = 0
                                uint32_t i_43 = i_23
                                
                                if (esi_42 s> 0)
                                    eax_41 = esi_42
                                    i_43 -= eax_41
                                
                                if (esi_42 s<= 0 || i_43 s> 0)
                                    int32_t edx_99 = edx_98 + eax_41
                                    uint32_t i_45 = var_24_6 - edx_99
                                    
                                    if (i_43 s> i_45)
                                        i_43 = i_45
                                    
                                    void* ecx_136 = &ebx[eax_41]
                                    void* eax_43 = arg7 + (edx_99 << 1)
                                    
                                    if (((eax_43.b ^ ecx_136.b) & 3) == 0)
                                        if ((ecx_136.b & 3) != 0)
                                            uint32_t ebx_58 = zx.d(*ecx_136)
                                            uint32_t edx_105 = zx.d(*eax_43)
                                            *eax_43 = (((edx_105 & 0xf7de) + (ebx_58 & 0xf7de)) u>> 1).w
                                                + (ebx_58 & edx_105 & 0x821).w
                                            ecx_136 += 2
                                            eax_43 += 2
                                            i_43 -= 1
                                        
                                        if (i_43 u> 1)
                                            arg8 = ((i_43 - 2) u>> 1) + 1
                                            uint32_t i_1
                                            
                                            do
                                                int32_t esi_46 = *eax_43
                                                int32_t edx_113 = *ecx_136
                                                *eax_43 = (esi_46 & edx_113 & 0x8210821)
                                                    + (esi_46 u>> 1 & 0x7bef7bef)
                                                    + (edx_113 u>> 1 & 0x7bef7bef)
                                                ecx_136 += 4
                                                eax_43 += 4
                                                i_43 -= 2
                                                i_1 = arg8
                                                arg8 -= 1
                                            while (i_1 != 1)
                                        
                                        if (i_43 != 0)
                                            uint32_t ecx_143 = zx.d(*ecx_136)
                                            uint32_t edx_116 = zx.d(*eax_43)
                                            *eax_43 =
                                                (((edx_116 & 0xf7de) + (ecx_143 & 0xf7de)) u>> 1).w
                                                + (ecx_143.w & edx_116.w & 0x821)
                                    else if (i_43 != 0)
                                        void* ecx_137 = ecx_136 - eax_43
                                        arg8 = ecx_137
                                        
                                        while (true)
                                            uint32_t edx_102 = zx.d(*(eax_43 + ecx_137))
                                            uint32_t esi_43 = zx.d(*eax_43)
                                            *eax_43 = (((esi_43 & 0xf7de) + (edx_102 & 0xf7de)) u>> 1).w
                                                + (edx_102.w & esi_43.w & 0x821)
                                            eax_43 += 2
                                            uint32_t i_48 = i_43
                                            i_43 -= 1
                                            
                                            if (i_48 == 1)
                                                break
                                            
                                            ecx_137 = arg8
                                    
                                    ebx = ebx
                                    i_23 = i_15
                            
                            ebx = &ebx[i_23]
                            edx_98 += i_23
                            ecx_134 = var_24_6
                        else if (edx_98 == 0)
                            break
                        
                        if (edx_98 == arg4)
                            int32_t eax_45 = *(arg6 + 0x10)
                            arg7 += eax_45
                            edx_98 = 0
                            int32_t temp12_1 = var_20_5
                            var_20_5 -= 1
                            
                            if (temp12_1 == 1)
                                return eax_45
            else if (*(i_15 + 0x10) == 0x3e0 || *(i_15 + 0xc) == 0x3e0 || edi_18 == 0x3e0)
                int32_t eax_59 = *arg3
                int32_t edx_148 = arg3[3]
                int32_t ecx_192 = arg3[2] + eax_59
                
                if (arg8 != 0x80)
                    int32_t edi_42 = 0
                    i_15 = arg7 + (neg.d(eax_59) << 1)
                    int32_t var_24_9 = edx_148
                    arg7 = i_15
                    
                    while (true)
                        edi_42 += zx.d(*ebx)
                        uint32_t i_27 = zx.d(*(ebx + 1))
                        ebx = &ebx[1]
                        
                        if (i_27 != 0)
                            if (edi_42 s< ecx_192)
                                int32_t edx_169 = eax_59 - edi_42
                                int32_t esi_83 = 0
                                i_15 = i_27
                                
                                if (edx_169 s> 0)
                                    esi_83 = edx_169
                                    i_15 -= esi_83
                                
                                if (edx_169 s<= 0 || i_15 s> 0)
                                    int32_t edx_170 = esi_83 + edi_42
                                    uint32_t i_28 = ecx_192 - edx_170
                                    
                                    if (i_15 s> i_28)
                                        i_15 = i_28
                                    
                                    int32_t edx_171 = arg7 + (edx_170 << 1)
                                    
                                    if (i_15 s> 0)
                                        void* ecx_209 = esi_83 * 2 - edx_171 + ebx
                                        uint32_t i_14 = i_15
                                        uint32_t i_2
                                        
                                        do
                                            uint32_t esi_84 = zx.d(*(edx_171 + ecx_209))
                                            uint32_t eax_70 = zx.d(*edx_171)
                                            int32_t ecx_213 = (eax_70 << 0x10 | eax_70) & 0x3e07c1f
                                            i_15 = ((((((esi_84 << 0x10 | esi_84) & 0x3e07c1f)
                                                - ecx_213) * (arg8 u>> 3)) u>> 5) + ecx_213) & 0x3e07c1f
                                            *edx_171 = (i_15 u>> 0x10).w | i_15.w
                                            edx_171 += 2
                                            i_2 = i_14
                                            i_14 -= 1
                                        while (i_2 != 1)
                            
                            ebx = &ebx[i_27]
                            edi_42 += i_27
                        else if (edi_42 == 0)
                            break
                        
                        if (edi_42 == arg4)
                            i_15 = *(arg6 + 0x10)
                            arg7 += i_15
                            edi_42 = 0
                            int32_t temp9_1 = var_24_9
                            var_24_9 -= 1
                            
                            if (temp9_1 == 1)
                                break
                else
                    int32_t var_20_7 = edx_148
                    int32_t edx_149 = 0
                    int32_t var_24_8 = ecx_192
                    arg7 += neg.d(eax_59) << 1
                    int16_t* ebx_71 = ebx
                    
                    while (true)
                        edx_149 += zx.d(*ebx_71)
                        i_15 = zx.d(*(ebx_71 + 1))
                        ebx_71 = &ebx_71[1]
                        
                        if (i_15 != 0)
                            uint32_t i_26
                            
                            if (edx_149 s>= ecx_192)
                                i_26 = i_15
                            else
                                i_26 = i_15
                                int32_t esi_71 = eax_59 - edx_149
                                int32_t eax_63 = 0
                                uint32_t i_44 = i_26
                                
                                if (esi_71 s> 0)
                                    eax_63 = esi_71
                                    i_44 -= eax_63
                                
                                if (esi_71 s<= 0 || i_44 s> 0)
                                    int32_t edx_150 = edx_149 + eax_63
                                    uint32_t i_46 = var_24_8 - edx_150
                                    
                                    if (i_44 s> i_46)
                                        i_44 = i_46
                                    
                                    void* ecx_194 = &ebx_71[eax_63]
                                    int32_t eax_65 = arg7 + (edx_150 << 1)
                                    
                                    if (((eax_65.b ^ ecx_194.b) & 3) == 0)
                                        if ((ecx_194.b & 3) != 0)
                                            uint32_t ebx_74 = zx.d(*ecx_194)
                                            uint32_t edx_156 = zx.d(*eax_65)
                                            *eax_65 = (((edx_156 & 0xfbde) + (ebx_74 & 0xfbde)) u>> 1).w
                                                + (ebx_74.w & edx_156.w & 0x421)
                                            ecx_194 += 2
                                            eax_65 += 2
                                            i_44 -= 1
                                        
                                        if (i_44 u> 1)
                                            arg8 = ((i_44 - 2) u>> 1) + 1
                                            uint32_t i_3
                                            
                                            do
                                                int32_t esi_75 = *eax_65
                                                int32_t edx_164 = *ecx_194
                                                *eax_65 = (esi_75 & edx_164 & 0x4210421)
                                                    + (esi_75 u>> 1 & 0x7def7def)
                                                    + (edx_164 u>> 1 & 0x7def7def)
                                                ecx_194 += 4
                                                eax_65 += 4
                                                i_44 -= 2
                                                i_3 = arg8
                                                arg8 -= 1
                                            while (i_3 != 1)
                                        
                                        if (i_44 != 0)
                                            uint32_t ecx_201 = zx.d(*ecx_194)
                                            uint32_t edx_167 = zx.d(*eax_65)
                                            *eax_65 =
                                                (((edx_167 & 0xfbde) + (ecx_201 & 0xfbde)) u>> 1).w
                                                + (ecx_201.w & edx_167.w & 0x421)
                                    else if (i_44 != 0)
                                        void* ecx_195 = ecx_194 - eax_65
                                        arg8 = ecx_195
                                        
                                        while (true)
                                            uint32_t edx_153 = zx.d(*(eax_65 + ecx_195))
                                            uint32_t esi_72 = zx.d(*eax_65)
                                            *eax_65 = (((esi_72 & 0xfbde) + (edx_153 & 0xfbde)) u>> 1).w
                                                + (edx_153.w & esi_72.w & 0x421)
                                            eax_65 += 2
                                            uint32_t i_47 = i_44
                                            i_44 -= 1
                                            
                                            if (i_47 == 1)
                                                break
                                            
                                            ecx_195 = arg8
                                    
                                    i_26 = i_15
                            
                            ebx_71 = &ebx_71[i_26]
                            edx_149 += i_26
                            ecx_192 = var_24_8
                        else if (edx_149 == 0)
                            break
                        
                        if (edx_149 == arg4)
                            int32_t eax_67 = *(arg6 + 0x10)
                            arg7 += eax_67
                            edx_149 = 0
                            int32_t temp10_1 = var_20_7
                            var_20_7 -= 1
                            
                            if (temp10_1 == 1)
                                return eax_67
            else
            label_6047aa:
                int32_t var_c_8 = arg3[3]
                int32_t edx_121 = *arg3
                int32_t ecx_158 = arg3[2] + edx_121
                int32_t edi_25 = 0
                arg7 += neg.d(edx_121) << 1
                
                while (true)
                    uint32_t i_24 = zx.d(*(ebx + 1))
                    edi_25 += zx.d(*ebx)
                    ebx = &ebx[1]
                    
                    if (i_24 != 0)
                        if (edi_25 s< ecx_158)
                            uint32_t i_20 = i_24
                            int32_t ecx_161 = edx_121 - edi_25
                            int32_t esi_56 = 0
                            
                            if (ecx_161 s> 0)
                                esi_56 = ecx_161
                                i_20 -= esi_56
                            
                            if (ecx_161 s<= 0 || i_20 s> 0)
                                int32_t ebx_66 = esi_56 + edi_25
                                uint32_t i_25 = ecx_158 - ebx_66
                                
                                if (i_20 s> i_25)
                                    i_20 = i_25
                                
                                int32_t ecx_164 = arg7 + (ebx_66 << 1)
                                int32_t var_14_3 = ecx_164
                                
                                if (i_20 s> 0)
                                    void* esi_59 = esi_56 * 2 - ecx_164 + ebx
                                    uint32_t i_12 = i_20
                                    uint32_t i_4
                                    
                                    do
                                        uint32_t ebx_67 = zx.d(*ecx_164)
                                        uint32_t edx_125 = zx.d(*(ecx_164 + esi_59))
                                        int32_t esi_60 = *(i_15 + 0xc)
                                        int32_t edx_127 = (&data_8bac68)[zx.d(*(i_15 + 0x1c))]
                                        uint32_t ecx_166 =
                                            zx.d(*(((esi_60 & ebx_67) u>> *(i_15 + 0x20)) + edx_127))
                                        int32_t edx_129 = (&data_8bac68)[zx.d(*(i_15 + 0x1d))]
                                        int32_t edi_29 = *(i_15 + 0x10)
                                        uint32_t edx_133 =
                                            zx.d(*(((edi_29 & ebx_67) u>> *(i_15 + 0x21)) + edx_129))
                                        int32_t ecx_170 = (&data_8bac68)[zx.d(*(i_15 + 0x1e))]
                                        int32_t edx_134 = *(i_15 + 0x14)
                                        uint32_t ecx_175 =
                                            zx.d(*(((edx_134 & ebx_67) u>> *(i_15 + 0x22)) + ecx_170))
                                        uint16_t edx_144 = (((((
                                            zx.d(*(((edx_134 & edx_125) u>> *(i_15 + 0x22)) + ecx_170))
                                            - ecx_175) * arg8) u>> 8) + ecx_175) u>> *(i_15 + 0x1e)
                                            << *(i_15 + 0x22)).w | (((((
                                            zx.d(*(((edi_29 & edx_125) u>> *(i_15 + 0x21)) + edx_129))
                                            - edx_133) * arg8) u>> 8) + edx_133) u>> *(i_15 + 0x1d)
                                            << *(i_15 + 0x21)).w
                                        char edi_39 = *(i_15 + 0x20)
                                        int16_t edx_146 = edx_144 | (((((
                                            zx.d(*(((esi_60 & edx_125) u>> edi_39) + edx_127))
                                            - ecx_166) * arg8) u>> 8) + ecx_166) u>> *(i_15 + 0x1c)
                                            << edi_39).w | (*(i_15 + 0x18)).w
                                        ecx_164 = var_14_3 + 2
                                        i_4 = i_12
                                        i_12 -= 1
                                        *(ecx_164 - 2) = edx_146
                                        var_14_3 = ecx_164
                                    while (i_4 != 1)
                        
                        ebx = &ebx[i_24]
                        edi_25 += i_24
                    else if (edi_25 == 0)
                        break
                    
                    if (edi_25 == arg4)
                        arg7 += *(arg6 + 0x10)
                        edi_25 = 0
                        int32_t temp8_1 = var_c_8
                        var_c_8 -= 1
                        
                        if (temp8_1 == 1)
                            return i_15
        else if (edx_33 == 3)
            int32_t var_28_7 = arg3[3]
            int32_t edx_67 = *arg3
            int32_t ecx_85 = arg3[2] + edx_67
            int32_t edi_14 = 0
            uint32_t esi_33 = arg7 + neg.d(edx_67 * 3)
            arg7 = esi_33
            
            while (true)
                uint32_t i_34 = zx.d(*(arg5 + 1))
                edi_14 += zx.d(*arg5)
                uint32_t i_42 = i_34
                arg5 = &arg5[1]
                
                if (i_34 != 0)
                    if (edi_14 s< ecx_85)
                        uint32_t i_19 = i_34
                        int32_t ebx_25 = edx_67 - edi_14
                        int32_t ecx_92 = 0
                        
                        if (ebx_25 s> 0)
                            ecx_92 = ebx_25
                            i_34 = i_19
                            i_19 -= ecx_92
                        
                        if (ebx_25 s<= 0 || i_19 s> 0)
                            int32_t ebx_26 = ecx_92 + edi_14
                            uint32_t i_41 = ecx_85 - ebx_26
                            
                            if (i_19 s> i_41)
                                i_19 = i_41
                            
                            char* edi_17 = ebx_26 * 3 + esi_33
                            
                            if (i_19 s> 0)
                                uint32_t i_13 = i_19
                                void* ecx_97 = (ecx_92 - ebx_26) * 3 - esi_33 + edi_17 + arg5 + 1
                                void* var_10_5 = ecx_97
                                uint32_t i_5
                                
                                do
                                    uint32_t esi_39 = (zx.d(*(ecx_97 + 1)) << 8 | zx.d(*ecx_97)) << 8
                                        | zx.d(*(ecx_97 - 1))
                                    uint32_t edx_74 =
                                        (zx.d(edi_17[2]) << 8 | zx.d(edi_17[1])) << 8 | zx.d(*edi_17)
                                    int32_t ecx_102 = (&data_8bac68)[zx.d(*(i_15 + 0x1c))]
                                    uint32_t ecx_105 =
                                        zx.d(*(((*(i_15 + 0xc) & edx_74) u>> *(i_15 + 0x20)) + ecx_102))
                                    int32_t ecx_107 = (&data_8bac68)[zx.d(*(i_15 + 0x1d))]
                                    uint32_t ecx_110 = zx.d(
                                        *(((*(i_15 + 0x10) & edx_74) u>> *(i_15 + 0x21)) + ecx_107))
                                    int32_t ebx_34 = (&data_8bac68)[zx.d(*(i_15 + 0x1e))]
                                    uint32_t edx_77 =
                                        zx.d(*(((*(i_15 + 0x14) & edx_74) u>> *(i_15 + 0x22)) + ebx_34))
                                    char ebx_35 = *(i_15 + 0x21)
                                    uint32_t ebx_45 = ((((
                                        zx.d(*(((*(i_15 + 0xc) & esi_39) u>> *(i_15 + 0x20)) + ecx_102))
                                        - ecx_105) * arg8) u>> 8) + ecx_105) u>> *(i_15 + 0x1c)
                                        << *(i_15 + 0x20)
                                    char esi_40 = *(i_15 + 0x22)
                                    edi_17 = &edi_17[3]
                                    uint32_t edx_89 = ((((
                                        zx.d(*(((*(i_15 + 0x10) & esi_39) u>> ebx_35) + ecx_107))
                                        - ecx_110) * arg8) u>> 8) + ecx_110) u>> *(i_15 + 0x1d) << ebx_35
                                        | ebx_45 | ((((
                                        zx.d(*(((*(i_15 + 0x14) & esi_39) u>> esi_40) + ebx_34))
                                        - edx_77) * arg8) u>> 8) + edx_77) u>> *(i_15 + 0x1e) << esi_40
                                    int32_t edx_90 = edx_89 | *(i_15 + 0x18)
                                    edi_17[0xfffffffd] = edx_90.b
                                    edi_17[0xfffffffe] = (edx_90 u>> 8).b
                                    edi_17[0xffffffff] = (edx_90 u>> 0x10).b
                                    ecx_97 = var_10_5 + 3
                                    i_5 = i_13
                                    i_13 -= 1
                                    var_10_5 = ecx_97
                                while (i_5 != 1)
                                esi_33 = arg7
                            
                            i_34 = i_42
                    
                    arg5 += i_34 * 3
                    edi_14 += i_34
                else if (edi_14 == 0)
                    break
                
                if (edi_14 == arg4)
                    esi_33 += *(arg6 + 0x10)
                    edi_14 = 0
                    int32_t temp3_1 = var_28_7
                    var_28_7 -= 1
                    arg7 = esi_33
                    
                    if (temp3_1 == 1)
                        return i_15
        else if (edx_33 == 4)
            int32_t edx_37 = *(i_15 + 0x14)
            
            if ((*(i_15 + 0xc) | *(i_15 + 0x10) | edx_37) != 0xffffff
                    || (*(i_15 + 0x10) != 0xff00 && *(i_15 + 0xc) != 0xff00 && edx_37 != 0xff00))
                int32_t var_20_3 = arg3[3]
                int32_t edx_50 = *arg3
                int32_t ecx_47 = arg3[2] + edx_50
                int32_t ebx_1 = 0
                arg7 += neg.d(edx_50) << 2
                int16_t* ecx_49 = arg5
                
                while (true)
                    uint32_t i_40 = zx.d(ecx_49[1])
                    ebx_1 += zx.d(*ecx_49)
                    ecx_49 = &ecx_49[2]
                    
                    if (i_40 != 0)
                        if (ebx_1 s< ecx_47)
                            int32_t esi_15 = edx_50 - ebx_1
                            int32_t ecx_50 = 0
                            uint32_t i_18 = i_40
                            
                            if (esi_15 s> 0)
                                ecx_50 = esi_15
                                i_18 -= ecx_50
                            
                            if (esi_15 s<= 0 || i_18 s> 0)
                                int32_t edi_12 = ecx_50 + ebx_1
                                uint32_t i_37 = ecx_47 - edi_12
                                
                                if (i_18 s> i_37)
                                    i_18 = i_37
                                
                                int32_t edi_13 = arg7 + (edi_12 << 2)
                                
                                if (i_18 s> 0)
                                    int32_t* ecx_54 = ecx_50 * 4 - edi_13 + ecx_49
                                    uint32_t i_10 = i_18
                                    uint32_t i_6
                                    
                                    do
                                        int32_t ebx_4 = (&data_8bac68)[zx.d(*(i_15 + 0x1c))]
                                        int32_t esi_18 = *edi_13
                                        int32_t edx_54 = *(ecx_54 + edi_13)
                                        uint32_t ecx_57 = zx.d(
                                            *(((esi_18 & *(i_15 + 0xc)) u>> *(i_15 + 0x20)) + ebx_4))
                                        int32_t ebx_9 = (&data_8bac68)[zx.d(*(i_15 + 0x1d))]
                                        uint32_t ecx_60 = zx.d(
                                            *(((esi_18 & *(i_15 + 0x10)) u>> *(i_15 + 0x21)) + ebx_9))
                                        char ebx_13 = *(i_15 + 0x22)
                                        int32_t ecx_62 = (&data_8bac68)[zx.d(*(i_15 + 0x1e))]
                                        uint32_t ecx_65 =
                                            zx.d(*(((esi_18 & *(i_15 + 0x14)) u>> ebx_13) + ecx_62))
                                        uint32_t ebx_23 = ((((zx.d(
                                            *(((edx_54 & *(i_15 + 0x10)) u>> *(i_15 + 0x21)) + ebx_9))
                                            - ecx_60) * arg8) u>> 8) + ecx_60) u>> *(i_15 + 0x1d)
                                            << *(i_15 + 0x21)
                                        char esi_32 = *(i_15 + 0x20)
                                        uint32_t ecx_82 = ((((
                                            zx.d(*(((edx_54 & *(i_15 + 0x14)) u>> ebx_13) + ecx_62))
                                            - ecx_65) * arg8) u>> 8) + ecx_65) u>> *(i_15 + 0x1e) << ebx_13
                                            | ebx_23 | ((((
                                            zx.d(*(((edx_54 & *(i_15 + 0xc)) u>> esi_32) + ebx_4))
                                            - ecx_57) * arg8) u>> 8) + ecx_57) u>> *(i_15 + 0x1c)
                                            << esi_32
                                        edi_13 += 4
                                        i_6 = i_10
                                        i_10 -= 1
                                        *(edi_13 - 4) = ecx_82 | *(i_15 + 0x18)
                                    while (i_6 != 1)
                        
                        ecx_49 = &ecx_49[i_40 * 2]
                        ebx_1 += i_40
                    else if (ebx_1 == 0)
                        break
                    
                    if (ebx_1 == arg4)
                        arg7 += *(arg6 + 0x10)
                        ebx_1 = 0
                        int32_t temp13_1 = var_20_3
                        var_20_3 -= 1
                        
                        if (temp13_1 == 1)
                            return i_15
            else
                int32_t eax_21 = *arg3
                int32_t edx_38 = arg3[3]
                int32_t ecx_22 = arg3[2] + eax_21
                
                if (arg8 != 0x80)
                    int32_t var_8_4 = edx_38
                    int32_t edx_44 = 0
                    int32_t var_c_6 = ecx_22
                    arg7 += neg.d(eax_21) << 2
                    
                    while (true)
                        i_15 = zx.d(*ebx)
                        uint32_t i_39 = zx.d(ebx[1])
                        edx_44 += i_15
                        ebx = &ebx[2]
                        
                        if (i_39 != 0)
                            if (edx_44 s< ecx_22)
                                int32_t esi_9 = eax_21 - edx_44
                                int32_t ecx_33 = 0
                                uint32_t i_16 = i_39
                                
                                if (esi_9 s> 0)
                                    ecx_33 = esi_9
                                    i_16 -= ecx_33
                                
                                if (esi_9 s<= 0 || i_16 s> 0)
                                    int32_t edx_45 = edx_44 + ecx_33
                                    uint32_t i_36 = var_c_6 - edx_45
                                    
                                    if (i_16 s> i_36)
                                        i_16 = i_36
                                    
                                    int32_t edi_11 = arg7 + (edx_45 << 2)
                                    
                                    if (i_16 s> 0)
                                        void* ecx_37 = ecx_33 * 4 - edi_11 + ebx
                                        uint32_t i_11 = i_16
                                        uint32_t i_7
                                        
                                        do
                                            int32_t eax_28 = *(ecx_37 + edi_11)
                                            int32_t edx_47 = *edi_11
                                            int32_t esi_13 = edx_47 & 0xff00ff
                                            int32_t edx_48 = edx_47 & 0xff00
                                            *edi_11 = ((((((eax_28 & 0xff00ff) - esi_13) * arg8) u>> 8)
                                                + esi_13) & 0xff00ff) | ((((((eax_28 & 0xff00) - edx_48)
                                                * arg8) u>> 8) + edx_48) & 0xff00)
                                            edi_11 += 4
                                            i_7 = i_11
                                            i_11 -= 1
                                        while (i_7 != 1)
                            
                            ecx_22 = var_c_6
                            ebx = &ebx[i_39 * 2]
                            edx_44 += i_39
                        else if (edx_44 == 0)
                            break
                        
                        if (edx_44 == arg4)
                            int32_t eax_36 = *(arg6 + 0x10)
                            arg7 += eax_36
                            edx_44 = 0
                            int32_t temp16_1 = var_8_4
                            var_8_4 -= 1
                            
                            if (temp16_1 == 1)
                                return eax_36
                else
                    int32_t edi_8 = 0
                    i_15 = arg7 + (neg.d(eax_21) << 2)
                    int32_t var_c_5 = edx_38
                    int32_t var_10_3 = ecx_22
                    arg7 = i_15
                    
                    while (true)
                        edi_8 += zx.d(*ebx)
                        uint32_t i_31 = zx.d(ebx[1])
                        ebx = &ebx[2]
                        
                        if (i_31 != 0)
                            if (edi_8 s< ecx_22)
                                int32_t esi_5 = eax_21 - edi_8
                                int32_t ecx_23 = 0
                                i_15 = i_31
                                
                                if (esi_5 s> 0)
                                    ecx_23 = esi_5
                                    i_15 -= ecx_23
                                
                                if (esi_5 s<= 0 || i_15 s> 0)
                                    int32_t esi_6 = ecx_23 + edi_8
                                    uint32_t i_32 = var_10_3 - esi_6
                                    
                                    if (i_15 s> i_32)
                                        i_15 = i_32
                                    
                                    int32_t edx_42 = arg7 + (esi_6 << 2)
                                    
                                    if (i_15 s> 0)
                                        void* ecx_27 = ecx_23 * 4 - edx_42 + ebx
                                        arg8 = i_15
                                        uint32_t i_8
                                        
                                        do
                                            int32_t esi_7 = *(ecx_27 + edx_42)
                                            int32_t eax_24 = *edx_42
                                            i_15 = eax_24 & esi_7 & 0x10101
                                            *edx_42 = (((eax_24 & 0xfefefe) + (esi_7 & 0xfefefe)) u>> 1)
                                                + i_15
                                            edx_42 += 4
                                            i_8 = arg8
                                            arg8 -= 1
                                        while (i_8 != 1)
                            
                            ecx_22 = var_10_3
                            ebx = &ebx[i_31 * 2]
                            edi_8 += i_31
                        else if (edi_8 == 0)
                            break
                        
                        if (edi_8 == arg4)
                            i_15 = *(arg6 + 0x10)
                            arg7 += i_15
                            edi_8 = 0
                            int32_t temp17_1 = var_c_5
                            var_c_5 -= 1
                            
                            if (temp17_1 == 1)
                                return i_15
    else
        i_15 = zx.d(*(i_15 + 9)) - 1
        
        switch (i_15)
            case 0
                int32_t eax_2 = *arg3
                int32_t ecx_1 = arg3[2] + eax_2
                int32_t var_c_1 = arg3[3]
                int32_t esi_1 = arg7 - eax_2
                int32_t edi_1 = 0
                
                while (true)
                    i_15 = zx.d(*ebx)
                    uint32_t i_29 = zx.d(*(ebx + 1))
                    edi_1 += i_15
                    ebx = &ebx[1]
                    
                    if (i_29 != 0)
                        if (edi_1 s< ecx_1)
                            uint32_t ecx_3 = eax_2 - edi_1
                            arg8 = 0
                            i_15 = i_29
                            
                            if (ecx_3 s> 0)
                                i_15 -= ecx_3
                                arg8 = ecx_3
                            
                            if (ecx_3 s<= 0 || i_15 s> 0)
                                int32_t edx_2 = arg8 + edi_1
                                uint32_t i_22 = ecx_1 - edx_2
                                
                                if (i_15 s> i_22)
                                    i_15 = i_22
                                
                                uint32_t i_21 = i_15
                                void* var_58_1 = arg8 + ebx
                                int32_t var_5c_1 = edx_2 + esi_1
                                i_15 = sub_5cd110()
                        
                        ebx += i_29
                        edi_1 += i_29
                    else if (edi_1 == 0)
                        break
                    
                    if (edi_1 == arg4)
                        esi_1 += *(arg6 + 0x10)
                        edi_1 = 0
                        int32_t temp4_1 = var_c_1
                        var_c_1 -= 1
                        
                        if (temp4_1 == 1)
                            return i_15
            case 1
                int32_t eax_5 = *arg3
                int32_t ecx_7 = arg3[2] + eax_5
                int32_t edi_2 = 0
                i_15 = arg7 + (neg.d(eax_5) << 1)
                int32_t var_8_2 = arg3[3]
                int32_t var_c_2 = ecx_7
                arg7 = i_15
                
                while (true)
                    uint32_t i_35 = zx.d(*(ebx + 1))
                    edi_2 += zx.d(*ebx)
                    ebx = &ebx[1]
                    
                    if (i_35 != 0)
                        if (edi_2 s< ecx_7)
                            int32_t edx_7 = eax_5 - edi_2
                            int32_t ecx_8 = 0
                            i_15 = i_35
                            
                            if (edx_7 s> 0)
                                ecx_8 = edx_7
                                i_15 -= ecx_8
                            
                            if (edx_7 s<= 0 || i_15 s> 0)
                                uint32_t edx_8 = ecx_8 + edi_2
                                uint32_t i_30 = var_c_2 - edx_8
                                
                                if (i_15 s> i_30)
                                    i_15 = i_30
                                
                                uint32_t var_54_1 = i_15 * 2
                                void* var_58_2 = &ebx[ecx_8]
                                uint32_t var_5c_2 = arg7 + (edx_8 << 1)
                                i_15 = sub_5cd110()
                        
                        ecx_7 = var_c_2
                        ebx = &ebx[i_35]
                        edi_2 += i_35
                    else if (edi_2 == 0)
                        break
                    
                    if (edi_2 == arg4)
                        i_15 = *(arg6 + 0x10)
                        arg7 += i_15
                        edi_2 = 0
                        int32_t temp5_1 = var_8_2
                        var_8_2 -= 1
                        
                        if (temp5_1 == 1)
                            return i_15
            case 2
                int32_t eax_9 = *arg3
                int32_t var_10_1 = arg3[3]
                int32_t ecx_12 = arg3[2] + eax_9
                int32_t edi_3 = 0
                int32_t var_8_3 = ecx_12
                int32_t esi_2 = arg7 + neg.d(eax_9 * 3)
                
                while (true)
                    i_15 = zx.d(*ebx)
                    uint32_t edx_16 = zx.d(*(ebx + 1))
                    edi_3 += i_15
                    ebx = &ebx[1]
                    uint32_t var_c_3 = edx_16
                    
                    if (edx_16 != 0)
                        if (edi_3 s< ecx_12)
                            uint32_t eax_10 = edx_16
                            int32_t edx_18 = eax_9 - edi_3
                            int32_t ecx_13 = 0
                            
                            if (edx_18 s> 0)
                                ecx_13 = edx_18
                                edx_16 = eax_10
                                eax_10 -= ecx_13
                            
                            if (edx_18 s<= 0 || eax_10 s> 0)
                                uint32_t edx_19 = ecx_13 + edi_3
                                uint32_t edx_21 = var_8_3 - edx_19
                                
                                if (eax_10 s> edx_21)
                                    eax_10 = edx_21
                                
                                uint32_t var_54_2 = eax_10 * 3
                                void* var_58_3 = ecx_13 * 3 + ebx
                                int32_t var_5c_3 = edx_19 * 3 + esi_2
                                sub_5cd110()
                                edx_16 = var_c_3
                        
                        ecx_12 = var_8_3
                        i_15 = edx_16 + ebx
                        ebx = i_15 + (edx_16 << 1)
                        edi_3 += edx_16
                    else if (edi_3 == 0)
                        break
                    
                    if (edi_3 == arg4)
                        esi_2 += *(arg6 + 0x10)
                        edi_3 = 0
                        int32_t temp6_1 = var_10_1
                        var_10_1 -= 1
                        
                        if (temp6_1 == 1)
                            return i_15
            case 3
                int32_t var_c_4 = arg3[3]
                int32_t eax_14 = *arg3
                int32_t ecx_17 = arg3[2] + eax_14
                int32_t edi_4 = 0
                int32_t var_10_2 = ecx_17
                arg7 += neg.d(eax_14) << 2
                
                while (true)
                    i_15 = zx.d(*ebx)
                    uint32_t esi_3 = zx.d(ebx[1])
                    edi_4 += i_15
                    ebx = &ebx[2]
                    
                    if (esi_3 != 0)
                        if (edi_4 s< ecx_17)
                            int32_t edx_27 = eax_14 - edi_4
                            int32_t ecx_18 = 0
                            uint32_t eax_16 = esi_3
                            
                            if (edx_27 s> 0)
                                ecx_18 = edx_27
                                eax_16 -= ecx_18
                            
                            if (edx_27 s<= 0 || eax_16 s> 0)
                                uint32_t edx_28 = ecx_18 + edi_4
                                uint32_t edx_30 = var_10_2 - edx_28
                                
                                if (eax_16 s> edx_30)
                                    eax_16 = edx_30
                                
                                uint32_t var_54_3 = eax_16 * 4
                                void* var_58_4 = &ebx[ecx_18 * 2]
                                int32_t var_5c_4 = arg7 + (edx_28 << 2)
                                sub_5cd110()
                        
                        ecx_17 = var_10_2
                        ebx = &ebx[esi_3 * 2]
                        edi_4 += esi_3
                    else if (edi_4 == 0)
                        break
                    
                    if (edi_4 == arg4)
                        int32_t eax_20 = *(arg6 + 0x10)
                        arg7 += eax_20
                        edi_4 = 0
                        int32_t temp7_1 = var_c_4
                        var_c_4 -= 1
                        
                        if (temp7_1 == 1)
                            return eax_20
    
    return i_15
}

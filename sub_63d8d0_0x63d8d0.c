// 函数名称: sub_63d8d0
// 虚拟地址: 0x63d8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63d8d0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
{
    // 第一条实际指令: uint32_t var_14
    uint32_t var_14
    uint32_t var_c
    uint32_t var_8
    uint32_t ebx
    
    if (arg6 == 1 || arg6 == 2)
        uint32_t ecx_1 = zx.d(arg10)
        var_8 = zx.d(arg8) * ecx_1 u/ 0xff
        ebx = zx.d(arg7) * ecx_1 u/ 0xff
        var_c = zx.d(arg9) * ecx_1 u/ 0xff
        var_14 = ecx_1
    else
        ebx = zx.d(arg7)
        var_8 = zx.d(arg8)
        var_c = zx.d(arg9)
        var_14 = zx.d(arg10)
    
    int32_t ecx_2 = arg3
    int32_t edi = arg5
    int32_t esi_1 = var_14 ^ 0xff
    int32_t i_13
    
    if (ecx_2 != edi)
        if (arg2 != arg4)
            int32_t i_18 = ecx_2 - edi
            int32_t eax_89
            int32_t edx_123
            edx_123:eax_89 = sx.q(arg2 - arg4)
            int32_t eax_91
            int32_t edx_124
            edx_124:eax_91 = sx.q(i_18)
            
            if ((eax_89 ^ edx_123) - edx_123 != (eax_91 ^ edx_124) - edx_124)
                if (arg6 == 1)
                    int32_t eax_181
                    int32_t edx_229
                    edx_229:eax_181 = sx.q(arg4 - arg2)
                    int32_t ebx_62 = (eax_181 ^ edx_229) - edx_229
                    int32_t eax_184
                    int32_t edx_230
                    edx_230:eax_184 = sx.q(edi - ecx_2)
                    int32_t eax_186 = (eax_184 ^ edx_230) - edx_230
                    int32_t var_28_4
                    int32_t var_20_4
                    int32_t var_1c_4
                    int32_t edx_234
                    int32_t ebx_63
                    
                    if (ebx_62 s< eax_186)
                        arg6 = eax_186 + 1
                        arg5 = ebx_62 * 2 - eax_186
                        edx_234 = ebx_62 * 2
                        var_28_4 = (ebx_62 - eax_186) * 2
                        ebx_63 = 0
                        var_1c_4 = 1
                        arg3 = 1
                        var_20_4 = 1
                    else
                        arg6 = ebx_62 + 1
                        arg5 = eax_186 * 2 - ebx_62
                        edx_234 = eax_186 * 2
                        ebx_63 = 1
                        var_28_4 = (eax_186 - ebx_62) * 2
                        var_1c_4 = 1
                        arg3 = 0
                        var_20_4 = 1
                    
                    i_13 = arg2
                    
                    if (i_13 s> arg4)
                        ebx_63 = neg.d(ebx_63)
                        var_1c_4 = 0xffffffff
                    
                    if (ecx_2 s> edi)
                        arg3 = neg.d(arg3)
                        var_20_4 = 0xffffffff
                    
                    int32_t edx_238 = ecx_2
                    int32_t var_18_2 = edx_238
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        i_13 *= 4
                        int32_t i_17 = i_13
                        int32_t i
                        
                        do
                            int32_t* ecx_63 = *(arg1 + 0x10) * edx_238 + i_13 + *(arg1 + 0x14)
                            int32_t eax_190
                            int32_t edx_241
                            edx_241:eax_190 = mulu.dp.d(0x80808081, zx.d(*(ecx_63 + 1)) * esi_1)
                            int32_t ebx_66 = *ecx_63
                            int32_t eax_191
                            int32_t edx_247
                            edx_247:eax_191 = mulu.dp.d(0x80808081, zx.d(*(ecx_63 + 2)) * esi_1)
                            *ecx_63 = ((edx_241 u>> 7) + var_8) << 8 | ((edx_247 u>> 7) + ebx) << 0x10
                                | (zx.d(ebx_66.b) * esi_1 u/ 0xff + var_c) | (ebx_66 & 0xff000000)
                            
                            if (arg5 s>= 0)
                                arg5 += var_28_4
                                i_13 = i_17 + var_1c_4 * 4
                                edx_238 = var_18_2 + var_20_4
                            else
                                arg5 += edx_234
                                i_13 = i_17 + (ebx_63 << 2)
                                edx_238 = var_18_2 + arg3
                            
                            i = arg6
                            arg6 -= 1
                            var_18_2 = edx_238
                            i_17 = i_13
                        while (i != 1)
                else if (arg6 == 2)
                    int32_t eax_164
                    int32_t edx_212
                    edx_212:eax_164 = sx.q(arg4 - arg2)
                    int32_t esi_58 = (eax_164 ^ edx_212) - edx_212
                    int32_t eax_167
                    int32_t edx_213
                    edx_213:eax_167 = sx.q(edi - ecx_2)
                    int32_t eax_169 = (eax_167 ^ edx_213) - edx_213
                    int32_t var_24_3
                    int32_t var_1c_3
                    int32_t var_18_1
                    int32_t edx_215
                    int32_t ebx_58
                    int32_t esi_59
                    
                    if (esi_58 s< eax_169)
                        arg6 = eax_169 + 1
                        edx_215 = esi_58 * 2
                        var_24_3 = (esi_58 - eax_169) * 2
                        esi_59 = 1
                        ebx_58 = edx_215 - eax_169
                        i_13 = 0
                        var_18_1 = 1
                        var_1c_3 = 1
                    else
                        arg6 = esi_58 + 1
                        edx_215 = eax_169 * 2
                        var_24_3 = (eax_169 - esi_58) * 2
                        i_13 = 1
                        ebx_58 = edx_215 - esi_58
                        var_18_1 = 1
                        esi_59 = 0
                        var_1c_3 = 1
                    
                    int32_t var_14_2 = esi_59
                    
                    if (arg2 s> arg4)
                        i_13 = neg.d(i_13)
                        var_18_1 = 0xffffffff
                    
                    if (ecx_2 s> edi)
                        var_14_2 = neg.d(esi_59)
                        var_1c_3 = 0xffffffff
                    
                    arg5 = ecx_2
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int32_t edx_219 = arg2 * 4
                        arg3 = edx_219
                        int32_t i_16 = arg6
                        int32_t* eax_178
                        int32_t i_1
                        
                        do
                            eax_178 = *(arg1 + 0x10) * ecx_2 + edx_219 + *(arg1 + 0x14)
                            int32_t edx_220 = *eax_178
                            uint32_t edi_43 = zx.d(*(eax_178 + 2)) + ebx
                            
                            if (edi_43 u> 0xff)
                                edi_43 = 0xff
                            
                            int32_t ecx_51 = zx.d(*(eax_178 + 1)) + var_8
                            arg6 = ecx_51
                            
                            if (ecx_51 u> 0xff)
                                arg6 = 0xff
                            
                            uint32_t ecx_53 = zx.d(edx_220.b) + var_c
                            
                            if (ecx_53 u> 0xff)
                                ecx_53 = 0xff
                            
                            *eax_178 = ((edx_220 u>> 0x18 << 8 | edi_43) << 8 | arg6) << 8 | ecx_53
                            
                            if (ebx_58 s>= 0)
                                ebx_58 += var_24_3
                                edx_219 = arg3 + var_18_1 * 4
                                ecx_2 = arg5 + var_1c_3
                            else
                                ebx_58 += edx_215
                                edx_219 = arg3 + i_13 * 4
                                ecx_2 = arg5 + var_14_2
                            
                            i_1 = i_16
                            i_16 -= 1
                            arg5 = ecx_2
                            arg3 = edx_219
                        while (i_1 != 1)
                        return eax_178
                else if (arg6 == 4)
                    int32_t eax_148
                    int32_t edx_192
                    edx_192:eax_148 = sx.q(arg4 - arg2)
                    int32_t esi_44 = (eax_148 ^ edx_192) - edx_192
                    int32_t eax_151
                    int32_t edx_193
                    edx_193:eax_151 = sx.q(edi - ecx_2)
                    int32_t eax_153 = (eax_151 ^ edx_193) - edx_193
                    int32_t var_1c_2
                    int32_t var_14_1
                    int32_t edx_195
                    int32_t ebx_50
                    int32_t esi_45
                    
                    if (esi_44 s< eax_153)
                        arg5 = eax_153 + 1
                        edx_195 = esi_44 * 2
                        i_13 = 1
                        arg6 = edx_195 - eax_153
                        var_1c_2 = (esi_44 - eax_153) * 2
                        esi_45 = 0
                        ebx_50 = 1
                        var_14_1 = 1
                    else
                        arg5 = esi_44 + 1
                        edx_195 = eax_153 * 2
                        arg6 = edx_195 - esi_44
                        ebx_50 = 1
                        var_1c_2 = (eax_153 - esi_44) * 2
                        esi_45 = 1
                        i_13 = 0
                        var_14_1 = 1
                    
                    int32_t i_15 = i_13
                    
                    if (arg2 s> arg4)
                        esi_45 = neg.d(esi_45)
                        ebx_50 = 0xffffffff
                    
                    if (ecx_2 s> edi)
                        i_13 = neg.d(i_13)
                        i_15 = i_13
                        var_14_1 = 0xffffffff
                    
                    int32_t edx_198 = ecx_2
                    int32_t ecx_44 = arg5
                    arg3 = edx_198
                    
                    if (arg11 == 0)
                        ecx_44 -= 1
                    
                    if (ecx_44 s> 0)
                        int32_t edi_38 = arg2 * 4
                        arg5 = ecx_44
                        int32_t eax_161
                        int32_t i_2
                        
                        do
                            int32_t* ecx_49 = *(arg1 + 0x10) * edx_198 + edi_38 + *(arg1 + 0x14)
                            int32_t eax_157
                            int32_t edx_201
                            edx_201:eax_157 = mulu.dp.d(0x80808081, zx.d(*(ecx_49 + 2)) * ebx)
                            int32_t ebx_55 = *ecx_49
                            int32_t eax_158
                            int32_t edx_205
                            edx_205:eax_158 = mulu.dp.d(0x80808081, zx.d(*(ecx_49 + 1)) * var_8)
                            *ecx_49 = (edx_201 u>> 7 << 8 | edx_205 u>> 7) << 8
                                | (zx.d(ebx_55.b) * var_c u/ 0xff) | (ebx_55 & 0xff000000)
                            
                            if (arg6 s>= 0)
                                eax_161 = arg6 + var_1c_2
                                edi_38 += ebx_50 * 4
                                edx_198 = arg3 + var_14_1
                            else
                                eax_161 = arg6 + edx_195
                                edi_38 += esi_45 * 4
                                edx_198 = arg3 + i_15
                            
                            i_2 = arg5
                            arg5 -= 1
                            arg3 = edx_198
                            arg6 = eax_161
                        while (i_2 != 1)
                        return eax_161
                else
                    int32_t eax_134
                    int32_t edx_177
                    edx_177:eax_134 = sx.q(arg4 - arg2)
                    int32_t esi_33 = (eax_134 ^ edx_177) - edx_177
                    int32_t eax_137
                    int32_t edx_178
                    edx_178:eax_137 = sx.q(edi - ecx_2)
                    int32_t eax_139 = (eax_137 ^ edx_178) - edx_178
                    int32_t var_1c_1
                    int32_t edx_180
                    int32_t ebx_46
                    int32_t esi_34
                    
                    if (esi_33 s< eax_139)
                        arg6 = eax_139 + 1
                        edx_180 = esi_33 * 2
                        var_1c_1 = (esi_33 - eax_139) * 2
                        esi_34 = 1
                        ebx_46 = edx_180 - eax_139
                        i_13 = 0
                        arg3 = 1
                        arg5 = 1
                    else
                        arg6 = esi_33 + 1
                        edx_180 = eax_139 * 2
                        ebx_46 = edx_180 - esi_33
                        var_1c_1 = (eax_139 - esi_33) * 2
                        i_13 = 1
                        esi_34 = 1
                        arg3 = 0
                        arg5 = 1
                    
                    if (arg2 s> arg4)
                        i_13 = neg.d(i_13)
                        esi_34 = 0xffffffff
                    
                    if (ecx_2 s> edi)
                        arg3 = neg.d(arg3)
                        arg5 = 0xffffffff
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int32_t edi_35 = arg2 * 4
                        int32_t eax_146
                        int32_t i_3
                        
                        do
                            eax_146 = *(arg1 + 0x14)
                            *(*(arg1 + 0x10) * ecx_2 + edi_35 + eax_146) =
                                ((var_14 << 8 | ebx) << 8 | var_8) << 8 | var_c
                            
                            if (ebx_46 s>= 0)
                                ebx_46 += var_1c_1
                                edi_35 += esi_34 * 4
                                ecx_2 += arg5
                            else
                                ebx_46 += edx_180
                                edi_35 += i_13 * 4
                                ecx_2 += arg3
                            
                            i_3 = arg6
                            arg6 -= 1
                        while (i_3 != 1)
                        return eax_146
            else if (arg6 == 1)
                int32_t temp0_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                void* ebx_44
                int32_t i_4
                
                if (ecx_2 s> edi)
                    ebx_44 = *(arg1 + 0x14) + ((temp0_12 * edi + arg4) << 2)
                    
                    if (arg4 s> arg2)
                        i_13 = temp0_12 - 1
                    else
                        i_13 = temp0_12 + 1
                    
                    if (arg11 == 0)
                        ebx_44 += i_13 << 2
                    
                    i_4 = i_18
                else
                    ebx_44 = *(arg1 + 0x14) + ((temp0_12 * ecx_2 + arg2) << 2)
                    
                    if (arg2 s> arg4)
                        i_13 = temp0_12 - 1
                        i_4 = edi - ecx_2
                    else
                        i_13 = temp0_12 + 1
                        i_4 = edi - ecx_2
                
                if (arg11 != 0)
                    i_4 += 1
                
                if (i_4 != 0)
                    int32_t eax_129
                    
                    do
                        int32_t eax_127
                        int32_t edx_162
                        edx_162:eax_127 = mulu.dp.d(0x80808081, zx.d(*(ebx_44 + 1)) * esi_1)
                        int32_t ecx_42 = *ebx_44
                        int32_t eax_128
                        int32_t edx_168
                        edx_168:eax_128 = mulu.dp.d(0x80808081, zx.d(*(ebx_44 + 2)) * esi_1)
                        int32_t edx_174
                        edx_174:eax_129 = mulu.dp.d(0x80808081, zx.d(ecx_42.b) * esi_1)
                        *ebx_44 = ((edx_162 u>> 7) + var_8) << 8 | ((edx_168 u>> 7) + ebx) << 0x10
                            | (zx.d(ecx_42.b) * esi_1 u/ 0xff + var_c) | (ecx_42 & 0xff000000)
                        i_4 -= 1
                        ebx_44 += i_13 * 4
                    while (i_4 != 0)
                    
                    return eax_129
            else if (arg6 == 2)
                int32_t temp0_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int32_t esi_27 = *(arg1 + 0x14)
                void* edx_149
                int32_t i_5
                
                if (ecx_2 s> edi)
                    edx_149 = esi_27 + ((temp0_11 * edi + arg4) << 2)
                    
                    if (arg4 s> arg2)
                        i_13 = temp0_11 - 1
                    else
                        i_13 = temp0_11 + 1
                    
                    if (arg11 == 0)
                        edx_149 += i_13 << 2
                    
                    i_5 = i_18
                else
                    edx_149 = esi_27 + ((temp0_11 * ecx_2 + arg2) << 2)
                    
                    if (arg2 s> arg4)
                        i_13 = temp0_11 - 1
                        i_5 = edi - ecx_2
                    else
                        i_13 = temp0_11 + 1
                        i_5 = edi - ecx_2
                
                if (arg11 != 0)
                    i_5 += 1
                
                if (i_5 != 0)
                    uint32_t eax_120
                    
                    do
                        int32_t eax_113 = *edx_149
                        uint32_t ecx_40 = zx.d(*(edx_149 + 2)) + ebx
                        
                        if (ecx_40 u> 0xff)
                            ecx_40 = 0xff
                        
                        uint32_t ebx_40 = zx.d(*(edx_149 + 1)) + var_8
                        
                        if (ebx_40 u> 0xff)
                            ebx_40 = 0xff
                        
                        uint32_t esi_30 = zx.d(eax_113.b) + var_c
                        
                        if (esi_30 u> 0xff)
                            esi_30 = 0xff
                        
                        i_5 -= 1
                        eax_120 = ((eax_113 u>> 0x18 << 8 | ecx_40) << 8 | ebx_40) << 8 | esi_30
                        *edx_149 = eax_120
                        edx_149 += i_13 * 4
                    while (i_5 != 0)
                    
                    return eax_120
            else
                uint32_t ebx_23 = zx.d(*(*(arg1 + 4) + 9))
                int32_t esi_25 = *(arg1 + 0x14)
                int32_t eax_99
                int32_t edx_125
                edx_125:eax_99 = sx.q(*(arg1 + 0x10))
                
                if (arg6 == 4)
                    int32_t temp0_10 = divs.dp.d(edx_125:eax_99, ebx_23)
                    void* esi_26
                    int32_t i_27
                    
                    if (ecx_2 s> edi)
                        esi_26 = esi_25 + ((temp0_10 * edi + arg4) << 2)
                        
                        if (arg4 s> arg2)
                            i_13 = temp0_10 - 1
                        else
                            i_13 = temp0_10 + 1
                        
                        if (arg11 == 0)
                            esi_26 += i_13 << 2
                        
                        i_27 = i_18
                    else
                        esi_26 = esi_25 + ((temp0_10 * ecx_2 + arg2) << 2)
                        
                        if (arg2 s> arg4)
                            i_13 = temp0_10 - 1
                            i_27 = edi - ecx_2
                        else
                            i_13 = temp0_10 + 1
                            i_27 = edi - ecx_2
                    
                    if (arg11 != 0)
                        i_27 += 1
                    
                    if (i_27 != 0)
                        int32_t eax_106
                        int32_t i_6
                        
                        do
                            int32_t eax_104
                            int32_t edx_135
                            edx_135:eax_104 = mulu.dp.d(0x80808081, zx.d(*(esi_26 + 2)) * ebx)
                            int32_t ecx_36 = *esi_26
                            int32_t eax_105
                            int32_t edx_139
                            edx_139:eax_105 = mulu.dp.d(0x80808081, zx.d(*(esi_26 + 1)) * var_8)
                            int32_t edx_143
                            edx_143:eax_106 = mulu.dp.d(0x80808081, zx.d(ecx_36.b) * var_c)
                            *esi_26 = (edx_135 u>> 7 << 8 | edx_139 u>> 7) << 8
                                | (zx.d(ecx_36.b) * var_c u/ 0xff) | (ecx_36 & 0xff000000)
                            esi_26 += i_13 << 2
                            i_6 = i_27
                            i_27 -= 1
                        while (i_6 != 1)
                        return eax_106
                else
                    int32_t temp0_9 = divs.dp.d(edx_125:eax_99, ebx_23)
                    uint32_t* edx_129
                    int32_t i_26
                    
                    if (ecx_2 s> edi)
                        edx_129 = esi_25 + ((temp0_9 * edi + arg4) << 2)
                        
                        if (arg4 s> arg2)
                            i_13 = temp0_9 - 1
                        else
                            i_13 = temp0_9 + 1
                        
                        if (arg11 == 0)
                            edx_129 = &edx_129[i_13]
                        
                        i_26 = i_18
                    else
                        edx_129 = esi_25 + ((temp0_9 * ecx_2 + arg2) << 2)
                        
                        if (arg2 s> arg4)
                            i_13 = temp0_9 - 1
                            i_26 = edi - ecx_2
                        else
                            i_13 = temp0_9 + 1
                            i_26 = edi - ecx_2
                    
                    if (arg11 != 0)
                        i_26 += 1
                    
                    if (i_26 != 0)
                        int32_t i_7
                        
                        do
                            *edx_129 = ((var_14 << 8 | ebx) << 8 | var_8) << 8 | var_c
                            edx_129 = &edx_129[i_13]
                            i_7 = i_26
                            i_26 -= 1
                        while (i_7 != 1)
                        return i_13 * 4
        else if (arg6 == 1)
            i_13 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t ebx_18 = *(arg1 + 0x14)
            int32_t i_8
            void* ebx_19
            
            if (ecx_2 s> edi)
                ebx_19 = ebx_18 + ((i_13 * edi + arg2) << 2)
                
                if (arg11 != 0)
                    i_8 = ecx_2 - edi + 1
                else
                    ebx_19 += i_13 << 2
                    i_8 = ecx_2 - edi
            else
                int32_t i_25 = edi - ecx_2
                ebx_19 = ebx_18 + ((i_13 * ecx_2 + arg2) << 2)
                
                if (arg11 == 0)
                    i_8 = i_25
                else
                    i_8 = i_25 + 1
            
            if (i_8 != 0)
                int32_t eax_85
                
                do
                    int32_t eax_83
                    int32_t edx_108
                    edx_108:eax_83 = mulu.dp.d(0x80808081, zx.d(*(ebx_19 + 1)) * esi_1)
                    int32_t eax_84
                    int32_t edx_114
                    edx_114:eax_84 = mulu.dp.d(0x80808081, zx.d(*(ebx_19 + 2)) * esi_1)
                    int32_t ecx_23 = *ebx_19
                    int32_t edx_120
                    edx_120:eax_85 = mulu.dp.d(0x80808081, zx.d(ecx_23.b) * esi_1)
                    i_8 -= 1
                    *ebx_19 = ((edx_108 u>> 7) + var_8) << 8 | ((edx_114 u>> 7) + ebx) << 0x10
                        | (zx.d(ecx_23.b) * esi_1 u/ 0xff + var_c) | (ecx_23 & 0xff000000)
                    ebx_19 += i_13 * 4
                while (i_8 != 0)
                
                return eax_85
        else if (arg6 == 2)
            i_13 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t esi_22 = *(arg1 + 0x14)
            int32_t i_9
            void* esi_23
            
            if (ecx_2 s> edi)
                esi_23 = esi_22 + ((i_13 * edi + arg2) << 2)
                
                if (arg11 != 0)
                    i_9 = ecx_2 - edi + 1
                else
                    esi_23 += i_13 << 2
                    i_9 = ecx_2 - edi
            else
                int32_t i_24 = edi - ecx_2
                esi_23 = esi_22 + ((i_13 * ecx_2 + arg2) << 2)
                
                if (arg11 == 0)
                    i_9 = i_24
                else
                    i_9 = i_24 + 1
            
            if (i_9 != 0)
                uint32_t eax_77
                
                do
                    int32_t eax_70 = *esi_23
                    uint32_t edx_98 = zx.d(*(esi_23 + 2)) + ebx
                    
                    if (edx_98 u> 0xff)
                        edx_98 = 0xff
                    
                    uint32_t edi_20 = zx.d(*(esi_23 + 1)) + var_8
                    
                    if (edi_20 u> 0xff)
                        edi_20 = 0xff
                    
                    uint32_t ecx_20 = zx.d(eax_70.b) + var_c
                    
                    if (ecx_20 u> 0xff)
                        ecx_20 = 0xff
                    
                    eax_77 = ((eax_70 u>> 0x18 << 8 | edx_98) << 8 | edi_20) << 8 | ecx_20
                    i_9 -= 1
                    *esi_23 = eax_77
                    esi_23 += i_13 * 4
                while (i_9 != 0)
                
                return eax_77
        else
            uint32_t esi_13 = zx.d(*(*(arg1 + 4) + 9))
            int32_t eax_57
            int32_t edx_60
            edx_60:eax_57 = sx.q(*(arg1 + 0x10))
            
            if (arg6 == 4)
                i_13 = divs.dp.d(edx_60:eax_57, esi_13)
                int32_t esi_18 = *(arg1 + 0x14)
                void* esi_19
                int32_t i_23
                
                if (ecx_2 s> edi)
                    esi_19 = esi_18 + ((i_13 * edi + arg2) << 2)
                    
                    if (arg11 != 0)
                        i_23 = ecx_2 - edi + 1
                    else
                        esi_19 += i_13 << 2
                        i_23 = ecx_2 - edi
                else
                    i_23 = edi - ecx_2
                    esi_19 = esi_18 + ((i_13 * ecx_2 + arg2) << 2)
                    
                    if (arg11 != 0)
                        i_23 += 1
                
                if (i_23 != 0)
                    int32_t eax_64
                    int32_t i_10
                    
                    do
                        int32_t eax_62
                        int32_t edx_80
                        edx_80:eax_62 = mulu.dp.d(0x80808081, zx.d(*(esi_19 + 2)) * ebx)
                        int32_t ecx_15 = *esi_19
                        int32_t eax_63
                        int32_t edx_84
                        edx_84:eax_63 = mulu.dp.d(0x80808081, zx.d(*(esi_19 + 1)) * var_8)
                        int32_t edx_88
                        edx_88:eax_64 = mulu.dp.d(0x80808081, zx.d(ecx_15.b) * var_c)
                        *esi_19 = (edx_80 u>> 7 << 8 | edx_84 u>> 7) << 8
                            | (zx.d(ecx_15.b) * var_c u/ 0xff) | (ecx_15 & 0xff000000)
                        esi_19 += i_13 * 4
                        i_10 = i_23
                        i_23 -= 1
                    while (i_10 != 1)
                    return eax_64
            else
                i_13 = divs.dp.d(edx_60:eax_57, esi_13)
                int32_t esi_15 = *(arg1 + 0x14)
                int32_t i_19
                uint32_t* esi_16
                
                if (ecx_2 s> edi)
                    esi_16 = esi_15 + ((i_13 * edi + arg2) << 2)
                    
                    if (arg11 != 0)
                        i_19 = ecx_2 - edi + 1
                    else
                        esi_16 = &esi_16[i_13]
                        i_19 = ecx_2 - edi
                else
                    int32_t i_28 = edi - ecx_2
                    esi_16 = esi_15 + ((i_13 * ecx_2 + arg2) << 2)
                    
                    if (arg11 == 0)
                        i_19 = i_28
                    else
                        i_19 = i_28 + 1
                
                if (i_19 != 0)
                    int32_t i_11
                    
                    do
                        *esi_16 = ((var_14 << 8 | ebx) << 8 | var_8) << 8 | var_c
                        esi_16 = &esi_16[i_13]
                        i_11 = i_19
                        i_19 -= 1
                    while (i_11 != 1)
                    return i_13 * 4
    else if (arg6 == 1)
        int32_t eax_48 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_2
        int32_t ecx_11 = *(arg1 + 0x14)
        void* ecx_12
        int32_t i_12
        
        if (arg2 s> arg4)
            i_13 = eax_48 + arg4
            ecx_12 = ecx_11 + (i_13 << 2)
            
            if (arg11 != 0)
                i_12 = arg2 - arg4 + 1
            else
                ecx_12 += 4
                i_12 = arg2 - arg4
        else
            i_13 = eax_48 + arg2
            int32_t i_22 = arg4 - arg2
            ecx_12 = ecx_11 + (i_13 << 2)
            
            if (arg11 == 0)
                i_12 = i_22
            else
                i_12 = i_22 + 1
        
        if (i_12 != 0)
            int32_t eax_51
            
            do
                int32_t eax_49
                int32_t edx_42
                edx_42:eax_49 = mulu.dp.d(0x80808081, zx.d(*(ecx_12 + 1)) * esi_1)
                int32_t ebx_6 = *ecx_12
                int32_t eax_50
                int32_t edx_48
                edx_48:eax_50 = mulu.dp.d(0x80808081, zx.d(*(ecx_12 + 2)) * esi_1)
                int32_t edx_54
                edx_54:eax_51 = mulu.dp.d(0x80808081, zx.d(ebx_6.b) * esi_1)
                i_12 -= 1
                *ecx_12 = ((edx_42 u>> 7) + var_8) << 8 | ((edx_48 u>> 7) + ebx) << 0x10
                    | (zx.d(ebx_6.b) * esi_1 u/ 0xff + var_c) | (ebx_6 & 0xff000000)
                ecx_12 += 4
            while (i_12 != 0)
            
            return eax_51
    else if (arg6 == 2)
        int32_t eax_32 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_2
        void* edx_35
        
        if (arg2 s> arg4)
            edx_35 = *(arg1 + 0x14) + ((eax_32 + arg4) << 2)
            
            if (arg11 != 0)
                i_13 = arg2 - arg4 + 1
            else
                edx_35 += 4
                i_13 = arg2 - arg4
        else
            int32_t i_21 = arg4 - arg2
            edx_35 = *(arg1 + 0x14) + ((eax_32 + arg2) << 2)
            
            if (arg11 == 0)
                i_13 = i_21
            else
                i_13 = i_21 + 1
        
        if (i_13 != 0)
            do
                uint32_t ecx_10 = zx.d(*(edx_35 + 2)) + ebx
                int32_t eax_36 = *edx_35
                
                if (ecx_10 u> 0xff)
                    ecx_10 = 0xff
                
                uint32_t edi_12 = zx.d(*(edx_35 + 1)) + var_8
                
                if (edi_12 u> 0xff)
                    edi_12 = 0xff
                
                uint32_t esi_11 = zx.d(eax_36.b) + var_c
                
                if (esi_11 u> 0xff)
                    esi_11 = 0xff
                
                *edx_35 = ((eax_36 u>> 0x18 << 8 | ecx_10) << 8 | edi_12) << 8 | esi_11
                i_13 -= 1
                edx_35 += 4
            while (i_13 != 0)
    else if (arg6 == 4)
        int32_t eax_24 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_2
        int32_t ecx_6 = *(arg1 + 0x14)
        void* ecx_7
        int32_t i_20
        
        if (arg2 s> arg4)
            i_13 = eax_24 + arg4
            ecx_7 = ecx_6 + (i_13 << 2)
            
            if (arg11 != 0)
                i_20 = arg2 - arg4 + 1
            else
                ecx_7 += 4
                i_20 = arg2 - arg4
        else
            i_13 = eax_24 + arg2
            i_20 = arg4 - arg2
            ecx_7 = ecx_6 + (i_13 << 2)
            
            if (arg11 != 0)
                i_20 += 1
        
        if (i_20 != 0)
            int32_t eax_27
            int32_t i_14
            
            do
                int32_t eax_25
                int32_t edx_22
                edx_22:eax_25 = mulu.dp.d(0x80808081, zx.d(*(ecx_7 + 2)) * ebx)
                int32_t ebx_2 = *ecx_7
                int32_t eax_26
                int32_t edx_26
                edx_26:eax_26 = mulu.dp.d(0x80808081, zx.d(*(ecx_7 + 1)) * var_8)
                int32_t edx_30
                edx_30:eax_27 = mulu.dp.d(0x80808081, zx.d(ebx_2.b) * var_c)
                *ecx_7 = (edx_22 u>> 7 << 8 | edx_26 u>> 7) << 8 | (zx.d(ebx_2.b) * var_c u/ 0xff)
                    | (ebx_2 & 0xff000000)
                ecx_7 += 4
                i_14 = i_20
                i_20 -= 1
            while (i_14 != 1)
            return eax_27
    else
        int32_t eax_13 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_2
        int32_t ecx_3 = *(arg1 + 0x14)
        int32_t edx_14
        int32_t edi_2
        
        if (arg2 s> arg4)
            i_13 = eax_13 + arg4
            edi_2 = ecx_3 + (i_13 << 2)
            
            if (arg11 != 0)
                edx_14 = arg2 - arg4 + 1
            else
                edi_2 += 4
                edx_14 = arg2 - arg4
        else
            i_13 = eax_13 + arg2
            int32_t esi_4 = arg4 - arg2
            edi_2 = ecx_3 + (i_13 << 2)
            
            if (arg11 == 0)
                edx_14 = esi_4
            else
                edx_14 = esi_4 + 1
        
        if (edx_14 != 0)
            uint32_t eax_20 = ((var_14 << 8 | ebx) << 8 | var_8) << 8 | var_c
            int32_t ecx_5
            int32_t edi_3
            edi_3, ecx_5 = __memfill_u32(edi_2, eax_20, edx_14)
            return eax_20
    
    return i_13
}

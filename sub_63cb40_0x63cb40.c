// 函数名称: sub_63cb40
// 虚拟地址: 0x63cb40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_63cb40(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
{
    // 第一条实际指令: uint32_t var_c
    uint32_t var_c
    uint32_t var_8
    uint32_t ecx_1
    uint32_t ebx
    
    if (arg6 == 1 || arg6 == 2)
        ecx_1 = zx.d(arg10)
        var_8 = zx.d(arg8) * ecx_1 u/ 0xff
        ebx = zx.d(arg7) * ecx_1 u/ 0xff
        var_c = zx.d(arg9) * ecx_1 u/ 0xff
    else
        ebx = zx.d(arg7)
        var_c = zx.d(arg9)
        ecx_1 = zx.d(arg10)
        var_8 = zx.d(arg8)
    
    int32_t esi = arg5
    int32_t ecx_2 = ecx_1 ^ 0xff
    int32_t ecx_3 = arg3
    int32_t eax_14
    
    if (ecx_3 != esi)
        if (arg2 != arg4)
            int32_t i_15 = ecx_3 - esi
            int32_t eax_78
            int32_t edx_119
            edx_119:eax_78 = sx.q(arg2 - arg4)
            int32_t eax_80
            int32_t edx_120
            edx_120:eax_80 = sx.q(i_15)
            
            if ((eax_78 ^ edx_119) - edx_119 != (eax_80 ^ edx_120) - edx_120)
                if (arg6 == 1)
                    int32_t eax_168
                    int32_t edx_215
                    edx_215:eax_168 = sx.q(arg4 - arg2)
                    int32_t ebx_53 = (eax_168 ^ edx_215) - edx_215
                    int32_t eax_171
                    int32_t edx_216
                    edx_216:eax_171 = sx.q(esi - ecx_3)
                    int32_t eax_173 = (eax_171 ^ edx_216) - edx_216
                    int32_t var_24_4
                    int32_t var_20_4
                    int32_t var_1c_4
                    int32_t var_18_4
                    int32_t edx_221
                    
                    if (ebx_53 s< eax_173)
                        arg6 = eax_173 + 1
                        arg3 = ebx_53 * 2 - eax_173
                        var_20_4 = ebx_53 * 2
                        edx_221 = 1
                        var_24_4 = (ebx_53 - eax_173) * 2
                        eax_14 = 0
                        var_18_4 = 1
                        var_1c_4 = 1
                    else
                        arg6 = ebx_53 + 1
                        arg3 = eax_173 * 2 - ebx_53
                        var_24_4 = (eax_173 - ebx_53) * 2
                        eax_14 = 1
                        var_20_4 = eax_173 * 2
                        var_18_4 = 1
                        edx_221 = 0
                        var_1c_4 = 1
                    
                    int32_t var_14_3 = edx_221
                    
                    if (arg2 s> arg4)
                        eax_14 = neg.d(eax_14)
                        var_18_4 = 0xffffffff
                    
                    if (ecx_3 s> esi)
                        var_14_3 = neg.d(edx_221)
                        var_1c_4 = 0xffffffff
                    
                    int32_t edx_227 = ecx_3
                    arg5 = edx_227
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int32_t eax_176 = eax_14 * 2
                        int32_t esi_45 = arg2 * 4
                        int32_t i
                        
                        do
                            int32_t* ecx_50 = *(arg1 + 0x10) * edx_227 + esi_45 + *(arg1 + 0x14)
                            int32_t eax_178
                            int32_t edx_230
                            edx_230:eax_178 = mulu.dp.d(0x80808081, zx.d(*(ecx_50 + 1)) * ecx_2)
                            int32_t eax_179
                            int32_t edx_236
                            edx_236:eax_179 = mulu.dp.d(0x80808081, zx.d(*(ecx_50 + 2)) * ecx_2)
                            int32_t eax_180
                            int32_t edx_242
                            edx_242:eax_180 = mulu.dp.d(0x80808081, zx.d(*ecx_50) * ecx_2)
                            *ecx_50 = ((edx_230 u>> 7) + var_8) << 8 | ((edx_236 u>> 7) + ebx) << 0x10
                                | ((edx_242 u>> 7) + var_c)
                            
                            if (arg3 s>= 0)
                                eax_14 = arg3 + var_24_4
                                esi_45 += var_18_4 * 4
                                edx_227 = arg5 + var_1c_4
                            else
                                eax_14 = arg3 + var_20_4
                                esi_45 += eax_176 * 2
                                edx_227 = arg5 + var_14_3
                            
                            i = arg6
                            arg6 -= 1
                            arg5 = edx_227
                            arg3 = eax_14
                        while (i != 1)
                else if (arg6 == 2)
                    int32_t eax_151
                    int32_t edx_200
                    edx_200:eax_151 = sx.q(arg4 - arg2)
                    int32_t edi_53 = (eax_151 ^ edx_200) - edx_200
                    int32_t eax_154
                    int32_t edx_201
                    edx_201:eax_154 = sx.q(esi - ecx_3)
                    int32_t eax_156 = (eax_154 ^ edx_201) - edx_201
                    int32_t var_1c_3
                    int32_t var_18_3
                    int32_t edx_203
                    int32_t ebx_49
                    int32_t edi_54
                    
                    if (edi_53 s< eax_156)
                        arg6 = eax_156 + 1
                        edx_203 = edi_53 * 2
                        var_1c_3 = (edi_53 - eax_156) * 2
                        edi_54 = 1
                        ebx_49 = edx_203 - eax_156
                        eax_14 = 0
                        arg3 = 1
                        var_18_3 = 1
                    else
                        arg6 = edi_53 + 1
                        edx_203 = eax_156 * 2
                        ebx_49 = edx_203 - edi_53
                        var_1c_3 = (eax_156 - edi_53) * 2
                        eax_14 = 1
                        edi_54 = 1
                        arg3 = 0
                        var_18_3 = 1
                    
                    if (arg2 s> arg4)
                        eax_14 = neg.d(eax_14)
                        edi_54 = 0xffffffff
                    
                    if (ecx_3 s> esi)
                        arg3 = neg.d(arg3)
                        var_18_3 = 0xffffffff
                    
                    int32_t var_14_2 = ecx_3
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int32_t edx_207 = arg2 * 4
                        arg5 = edx_207
                        char* eax_165
                        int32_t i_1
                        
                        do
                            eax_165 = *(arg1 + 0x10) * ecx_3 + edx_207 + *(arg1 + 0x14)
                            uint32_t edx_209 = zx.d(eax_165[2]) + ebx
                            
                            if (edx_209 u> 0xff)
                                edx_209 = 0xff
                            
                            uint32_t ecx_41 = zx.d(eax_165[1]) + var_8
                            
                            if (ecx_41 u> 0xff)
                                ecx_41 = 0xff
                            
                            uint32_t esi_42 = zx.d(*eax_165) + var_c
                            
                            if (esi_42 u> 0xff)
                                esi_42 = 0xff
                            
                            *eax_165 = (edx_209 << 8 | ecx_41) << 8 | esi_42
                            
                            if (ebx_49 s>= 0)
                                ebx_49 += var_1c_3
                                edx_207 = arg5 + edi_54 * 4
                                ecx_3 = var_14_2 + var_18_3
                            else
                                ebx_49 += edx_203
                                edx_207 = arg5 + eax_14 * 4
                                ecx_3 = var_14_2 + arg3
                            
                            i_1 = arg6
                            arg6 -= 1
                            var_14_2 = ecx_3
                            arg5 = edx_207
                        while (i_1 != 1)
                        return eax_165
                else if (arg6 == 4)
                    int32_t eax_135
                    int32_t edx_178
                    edx_178:eax_135 = sx.q(arg4 - arg2)
                    int32_t edi_41 = (eax_135 ^ edx_178) - edx_178
                    int32_t eax_138
                    int32_t edx_179
                    edx_179:eax_138 = sx.q(esi - ecx_3)
                    int32_t eax_140 = (eax_138 ^ edx_179) - edx_179
                    int32_t var_20_2
                    int32_t var_1c_2
                    int32_t var_18_2
                    int32_t edx_182
                    int32_t ebx_46
                    
                    if (edi_41 s< eax_140)
                        arg6 = eax_140 + 1
                        int32_t edx_184 = edi_41 * 2
                        var_1c_2 = edx_184
                        edx_182 = 1
                        ebx_46 = edx_184 - eax_140
                        var_20_2 = (edi_41 - eax_140) * 2
                        eax_14 = 0
                        arg5 = 1
                        var_18_2 = 1
                    else
                        arg6 = edi_41 + 1
                        int32_t edx_181 = eax_140 * 2
                        var_20_2 = (eax_140 - edi_41) * 2
                        eax_14 = 1
                        ebx_46 = edx_181 - edi_41
                        var_1c_2 = edx_181
                        arg5 = 1
                        edx_182 = 0
                        var_18_2 = 1
                    
                    int32_t var_14_1 = edx_182
                    
                    if (arg2 s> arg4)
                        eax_14 = neg.d(eax_14)
                        arg5 = 0xffffffff
                    
                    if (ecx_3 s> esi)
                        var_14_1 = neg.d(edx_182)
                        var_18_2 = 0xffffffff
                    
                    int32_t edx_186 = ecx_3
                    arg3 = edx_186
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int32_t ecx_39 = arg2 * 4
                        int32_t eax_148
                        int32_t i_2
                        
                        do
                            int32_t* esi_37 = *(arg1 + 0x10) * edx_186 + ecx_39 + *(arg1 + 0x14)
                            int32_t eax_146
                            int32_t edx_189
                            edx_189:eax_146 = mulu.dp.d(0x80808081, zx.d(*(esi_37 + 2)) * ebx)
                            int32_t eax_147
                            int32_t edx_193
                            edx_193:eax_147 = mulu.dp.d(0x80808081, zx.d(*(esi_37 + 1)) * var_8)
                            int32_t edx_197
                            edx_197:eax_148 = mulu.dp.d(0x80808081, zx.d(*esi_37) * var_c)
                            *esi_37 = (edx_189 u>> 7 << 8 | edx_193 u>> 7) << 8 | edx_197 u>> 7
                            
                            if (ebx_46 s>= 0)
                                ebx_46 += var_20_2
                                ecx_39 += arg5 * 4
                                edx_186 = arg3 + var_18_2
                            else
                                ebx_46 += var_1c_2
                                ecx_39 += eax_14 * 4
                                edx_186 = arg3 + var_14_1
                            
                            i_2 = arg6
                            arg6 -= 1
                            arg3 = edx_186
                        while (i_2 != 1)
                        return eax_148
                else
                    int32_t eax_121
                    int32_t edx_171
                    edx_171:eax_121 = sx.q(arg4 - arg2)
                    int32_t edi_30 = (eax_121 ^ edx_171) - edx_171
                    int32_t eax_124
                    int32_t edx_172
                    edx_172:eax_124 = sx.q(esi - ecx_3)
                    int32_t eax_126 = (eax_124 ^ edx_172) - edx_172
                    int32_t var_18_1
                    int32_t edx_175
                    int32_t ebx_38
                    int32_t edi_31
                    
                    if (edi_30 s< eax_126)
                        ebx_38 = edi_30 * 2
                        arg6 = eax_126 + 1
                        var_18_1 = (edi_30 - eax_126) * 2
                        edi_31 = 1
                        edx_175 = ebx_38 - eax_126
                        eax_14 = 0
                        arg3 = 1
                        arg5 = 1
                    else
                        ebx_38 = eax_126 * 2
                        arg6 = edi_30 + 1
                        edx_175 = ebx_38 - edi_30
                        var_18_1 = (eax_126 - edi_30) * 2
                        eax_14 = 1
                        edi_31 = 1
                        arg3 = 0
                        arg5 = 1
                    
                    if (arg2 s> arg4)
                        eax_14 = neg.d(eax_14)
                        edi_31 = 0xffffffff
                    
                    if (ecx_3 s> esi)
                        arg3 = neg.d(arg3)
                        arg5 = 0xffffffff
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int32_t esi_30 = arg2 * 4
                        int32_t eax_133
                        int32_t i_3
                        
                        do
                            eax_133 = *(arg1 + 0x14)
                            *(*(arg1 + 0x10) * ecx_3 + esi_30 + eax_133) =
                                (ebx << 8 | var_8) << 8 | var_c
                            
                            if (edx_175 s>= 0)
                                edx_175 += var_18_1
                                esi_30 += edi_31 * 4
                                ecx_3 += arg5
                            else
                                edx_175 += ebx_38
                                esi_30 += eax_14 * 4
                                ecx_3 += arg3
                            
                            i_3 = arg6
                            arg6 -= 1
                        while (i_3 != 1)
                        return eax_133
            else if (arg6 == 1)
                int32_t temp0_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                void* ebx_37
                int32_t i_24
                
                if (ecx_3 s> esi)
                    ebx_37 = *(arg1 + 0x14) + ((temp0_12 * esi + arg4) << 2)
                    
                    if (arg4 s> arg2)
                        eax_14 = temp0_12 - 1
                    else
                        eax_14 = temp0_12 + 1
                    
                    if (arg11 == 0)
                        ebx_37 += eax_14 << 2
                    
                    i_24 = i_15
                else
                    ebx_37 = *(arg1 + 0x14) + ((temp0_12 * ecx_3 + arg2) << 2)
                    
                    if (arg2 s> arg4)
                        eax_14 = temp0_12 - 1
                        i_24 = esi - ecx_3
                    else
                        eax_14 = temp0_12 + 1
                        i_24 = esi - ecx_3
                
                if (arg11 != 0)
                    i_24 += 1
                
                if (i_24 != 0)
                    int32_t eax_116
                    int32_t i_4
                    
                    do
                        int32_t eax_114
                        int32_t edx_156
                        edx_156:eax_114 = mulu.dp.d(0x80808081, zx.d(*(ebx_37 + 1)) * ecx_2)
                        int32_t eax_115
                        int32_t edx_162
                        edx_162:eax_115 = mulu.dp.d(0x80808081, zx.d(*(ebx_37 + 2)) * ecx_2)
                        int32_t edx_168
                        edx_168:eax_116 = mulu.dp.d(0x80808081, zx.d(*ebx_37) * ecx_2)
                        *ebx_37 = ((edx_156 u>> 7) + var_8) << 8 | ((edx_162 u>> 7) + ebx) << 0x10
                            | ((edx_168 u>> 7) + var_c)
                        ebx_37 += eax_14 * 4
                        i_4 = i_24
                        i_24 -= 1
                    while (i_4 != 1)
                    return eax_116
            else if (arg6 == 2)
                int32_t temp0_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                void* edx_145
                int32_t i_5
                
                if (ecx_3 s> esi)
                    edx_145 = *(arg1 + 0x14) + ((temp0_11 * esi + arg4) << 2)
                    
                    if (arg4 s> arg2)
                        eax_14 = temp0_11 - 1
                    else
                        eax_14 = temp0_11 + 1
                    
                    if (arg11 == 0)
                        edx_145 += eax_14 << 2
                    
                    i_5 = i_15
                else
                    edx_145 = *(arg1 + 0x14) + ((temp0_11 * ecx_3 + arg2) << 2)
                    
                    if (arg2 s> arg4)
                        eax_14 = temp0_11 - 1
                        i_5 = esi - ecx_3
                    else
                        eax_14 = temp0_11 + 1
                        i_5 = esi - ecx_3
                
                if (arg11 != 0)
                    i_5 += 1
                
                if (i_5 != 0)
                    uint32_t eax_107
                    
                    do
                        uint32_t eax_103 = zx.d(*(edx_145 + 2)) + ebx
                        i_5 -= 1
                        
                        if (eax_103 u> 0xff)
                            eax_103 = 0xff
                        
                        uint32_t edi_27 = zx.d(*(edx_145 + 1)) + var_8
                        
                        if (edi_27 u> 0xff)
                            edi_27 = 0xff
                        
                        uint32_t ecx_30 = zx.d(*edx_145) + var_c
                        
                        if (ecx_30 u> 0xff)
                            ecx_30 = 0xff
                        
                        eax_107 = (eax_103 << 8 | edi_27) << 8 | ecx_30
                        *edx_145 = eax_107
                        edx_145 += eax_14 * 4
                    while (i_5 != 0)
                    
                    return eax_107
            else
                uint32_t ebx_19 = zx.d(*(*(arg1 + 4) + 9))
                int32_t eax_88
                int32_t edx_121
                edx_121:eax_88 = sx.q(*(arg1 + 0x10))
                
                if (arg6 == 4)
                    int32_t temp0_10 = divs.dp.d(edx_121:eax_88, ebx_19)
                    int32_t i_23
                    void* edi_23
                    
                    if (ecx_3 s> esi)
                        edi_23 = *(arg1 + 0x14) + ((temp0_10 * esi + arg4) << 2)
                        
                        if (arg4 s> arg2)
                            eax_14 = temp0_10 - 1
                        else
                            eax_14 = temp0_10 + 1
                        
                        if (arg11 == 0)
                            edi_23 += eax_14 << 2
                        
                        i_23 = i_15
                    else
                        edi_23 = *(arg1 + 0x14) + ((temp0_10 * ecx_3 + arg2) << 2)
                        
                        if (arg2 s> arg4)
                            eax_14 = temp0_10 - 1
                            i_23 = esi - ecx_3
                        else
                            eax_14 = temp0_10 + 1
                            i_23 = esi - ecx_3
                    
                    if (arg11 != 0)
                        i_23 += 1
                    
                    if (i_23 != 0)
                        int32_t eax_95
                        int32_t i_6
                        
                        do
                            int32_t eax_93
                            int32_t edx_131
                            edx_131:eax_93 = mulu.dp.d(0x80808081, zx.d(*(edi_23 + 2)) * ebx)
                            int32_t eax_94
                            int32_t edx_135
                            edx_135:eax_94 = mulu.dp.d(0x80808081, zx.d(*(edi_23 + 1)) * var_8)
                            int32_t edx_139
                            edx_139:eax_95 = mulu.dp.d(0x80808081, zx.d(*edi_23) * var_c)
                            *edi_23 = (edx_131 u>> 7 << 8 | edx_135 u>> 7) << 8 | edx_139 u>> 7
                            edi_23 += eax_14 << 2
                            i_6 = i_23
                            i_23 -= 1
                        while (i_6 != 1)
                        return eax_95
                else
                    int32_t temp0_9 = divs.dp.d(edx_121:eax_88, ebx_19)
                    uint32_t* edx_125
                    int32_t i_22
                    
                    if (ecx_3 s> esi)
                        edx_125 = *(arg1 + 0x14) + ((temp0_9 * esi + arg4) << 2)
                        
                        if (arg4 s> arg2)
                            eax_14 = temp0_9 - 1
                        else
                            eax_14 = temp0_9 + 1
                        
                        if (arg11 == 0)
                            edx_125 = &edx_125[eax_14]
                        
                        i_22 = i_15
                    else
                        edx_125 = *(arg1 + 0x14) + ((temp0_9 * ecx_3 + arg2) << 2)
                        
                        if (arg2 s> arg4)
                            eax_14 = temp0_9 - 1
                            i_22 = esi - ecx_3
                        else
                            eax_14 = temp0_9 + 1
                            i_22 = esi - ecx_3
                    
                    if (arg11 != 0)
                        i_22 += 1
                    
                    if (i_22 != 0)
                        int32_t i_7
                        
                        do
                            *edx_125 = (ebx << 8 | var_8) << 8 | var_c
                            edx_125 = &edx_125[eax_14]
                            i_7 = i_22
                            i_22 -= 1
                        while (i_7 != 1)
                        return eax_14 * 4
        else if (arg6 == 1)
            eax_14 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t ebx_14 = *(arg1 + 0x14)
            int32_t i_18
            void* ebx_15
            
            if (ecx_3 s> esi)
                ebx_15 = ebx_14 + ((eax_14 * esi + arg2) << 2)
                
                if (arg11 != 0)
                    i_18 = ecx_3 - esi + 1
                else
                    ebx_15 += eax_14 << 2
                    i_18 = ecx_3 - esi
            else
                int32_t i_27 = esi - ecx_3
                ebx_15 = ebx_14 + ((eax_14 * ecx_3 + arg2) << 2)
                
                if (arg11 == 0)
                    i_18 = i_27
                else
                    i_18 = i_27 + 1
            
            if (i_18 != 0)
                int32_t eax_74
                int32_t i_8
                
                do
                    int32_t eax_72
                    int32_t edx_104
                    edx_104:eax_72 = mulu.dp.d(0x80808081, zx.d(*(ebx_15 + 1)) * ecx_2)
                    int32_t eax_73
                    int32_t edx_110
                    edx_110:eax_73 = mulu.dp.d(0x80808081, zx.d(*(ebx_15 + 2)) * ecx_2)
                    int32_t edx_116
                    edx_116:eax_74 = mulu.dp.d(0x80808081, zx.d(*ebx_15) * ecx_2)
                    *ebx_15 = ((edx_104 u>> 7) + var_8) << 8 | ((edx_110 u>> 7) + ebx) << 0x10
                        | ((edx_116 u>> 7) + var_c)
                    ebx_15 += eax_14 * 4
                    i_8 = i_18
                    i_18 -= 1
                while (i_8 != 1)
                return eax_74
        else if (arg6 == 2)
            eax_14 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t edi_17 = *(arg1 + 0x14)
            void* edx_92
            int32_t i_9
            
            if (ecx_3 s> esi)
                edx_92 = edi_17 + ((eax_14 * esi + arg2) << 2)
                
                if (arg11 != 0)
                    i_9 = ecx_3 - esi + 1
                else
                    edx_92 += eax_14 << 2
                    i_9 = ecx_3 - esi
            else
                i_9 = esi - ecx_3
                edx_92 = edi_17 + ((eax_14 * ecx_3 + arg2) << 2)
                
                if (arg11 != 0)
                    i_9 += 1
            
            if (i_9 != 0)
                uint32_t eax_66
                
                do
                    uint32_t eax_62 = zx.d(*(edx_92 + 2)) + ebx
                    i_9 -= 1
                    
                    if (eax_62 u> 0xff)
                        eax_62 = 0xff
                    
                    uint32_t ecx_17 = zx.d(*(edx_92 + 1)) + var_8
                    
                    if (ecx_17 u> 0xff)
                        ecx_17 = 0xff
                    
                    uint32_t edi_19 = zx.d(*edx_92) + var_c
                    
                    if (edi_19 u> 0xff)
                        edi_19 = 0xff
                    
                    eax_66 = (eax_62 << 8 | ecx_17) << 8 | edi_19
                    *edx_92 = eax_66
                    edx_92 += eax_14 * 4
                while (i_9 != 0)
                
                return eax_66
        else
            uint32_t edi_9 = zx.d(*(*(arg1 + 4) + 9))
            int32_t eax_50
            int32_t edx_63
            edx_63:eax_50 = sx.q(*(arg1 + 0x10))
            
            if (arg6 == 4)
                eax_14 = divs.dp.d(edx_63:eax_50, edi_9)
                int32_t edi_13 = *(arg1 + 0x14)
                int32_t i_17
                void* edi_14
                
                if (ecx_3 s> esi)
                    edi_14 = edi_13 + ((eax_14 * esi + arg2) << 2)
                    
                    if (arg11 != 0)
                        i_17 = ecx_3 - esi + 1
                    else
                        edi_14 += eax_14 << 2
                        i_17 = ecx_3 - esi
                else
                    int32_t i_26 = esi - ecx_3
                    edi_14 = edi_13 + ((eax_14 * ecx_3 + arg2) << 2)
                    
                    if (arg11 == 0)
                        i_17 = i_26
                    else
                        i_17 = i_26 + 1
                
                if (i_17 != 0)
                    int32_t eax_55
                    int32_t i_10
                    
                    do
                        int32_t eax_53
                        int32_t edx_77
                        edx_77:eax_53 = mulu.dp.d(0x80808081, zx.d(*(edi_14 + 2)) * ebx)
                        int32_t eax_54
                        int32_t edx_81
                        edx_81:eax_54 = mulu.dp.d(0x80808081, zx.d(*(edi_14 + 1)) * var_8)
                        int32_t edx_85
                        edx_85:eax_55 = mulu.dp.d(0x80808081, zx.d(*edi_14) * var_c)
                        *edi_14 = (edx_77 u>> 7 << 8 | edx_81 u>> 7) << 8 | edx_85 u>> 7
                        edi_14 += eax_14 << 2
                        i_10 = i_17
                        i_17 -= 1
                    while (i_10 != 1)
                    return eax_55
            else
                eax_14 = divs.dp.d(edx_63:eax_50, edi_9)
                int32_t edi_11 = *(arg1 + 0x14)
                int32_t i_16
                uint32_t* edx_67
                
                if (ecx_3 s> esi)
                    edx_67 = edi_11 + ((eax_14 * esi + arg2) << 2)
                    
                    if (arg11 != 0)
                        i_16 = ecx_3 - esi + 1
                    else
                        edx_67 = &edx_67[eax_14]
                        i_16 = ecx_3 - esi
                else
                    int32_t i_25 = esi - ecx_3
                    edx_67 = edi_11 + ((eax_14 * ecx_3 + arg2) << 2)
                    
                    if (arg11 == 0)
                        i_16 = i_25
                    else
                        i_16 = i_25 + 1
                
                if (i_16 != 0)
                    int32_t i_11
                    
                    do
                        *edx_67 = (ebx << 8 | var_8) << 8 | var_c
                        edx_67 = &edx_67[eax_14]
                        i_11 = i_16
                        i_16 -= 1
                    while (i_11 != 1)
                    return eax_14 * 4
    else if (arg6 == 1)
        int32_t eax_41 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_11 = *(arg1 + 0x14)
        void* ecx_12
        int32_t i_21
        
        if (arg2 s> arg4)
            eax_14 = eax_41 + arg4
            ecx_12 = ecx_11 + (eax_14 << 2)
            
            if (arg11 != 0)
                i_21 = arg2 - arg4 + 1
            else
                ecx_12 += 4
                i_21 = arg2 - arg4
        else
            eax_14 = eax_41 + arg2
            i_21 = arg4 - arg2
            ecx_12 = ecx_11 + (eax_14 << 2)
            
            if (arg11 != 0)
                i_21 += 1
        
        if (i_21 != 0)
            int32_t eax_44
            int32_t i_12
            
            do
                int32_t eax_42
                int32_t edx_45
                edx_45:eax_42 = mulu.dp.d(0x80808081, zx.d(*(ecx_12 + 1)) * ecx_2)
                int32_t eax_43
                int32_t edx_51
                edx_51:eax_43 = mulu.dp.d(0x80808081, zx.d(*(ecx_12 + 2)) * ecx_2)
                int32_t edx_57
                edx_57:eax_44 = mulu.dp.d(0x80808081, zx.d(*ecx_12) * ecx_2)
                ecx_12 += 4
                i_12 = i_21
                i_21 -= 1
                *(ecx_12 - 4) = ((edx_45 u>> 7) + var_8) << 8 | ((edx_51 u>> 7) + ebx) << 0x10
                    | ((edx_57 u>> 7) + var_c)
            while (i_12 != 1)
            return eax_44
    else if (arg6 == 2)
        int32_t eax_31 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_9 = *(arg1 + 0x14)
        void* ecx_10
        int32_t i_13
        
        if (arg2 s> arg4)
            eax_14 = eax_31 + arg4
            ecx_10 = ecx_9 + (eax_14 << 2)
            
            if (arg11 != 0)
                i_13 = arg2 - arg4 + 1
            else
                ecx_10 += 4
                i_13 = arg2 - arg4
        else
            eax_14 = eax_31 + arg2
            int32_t i_20 = arg4 - arg2
            ecx_10 = ecx_9 + (eax_14 << 2)
            
            if (arg11 == 0)
                i_13 = i_20
            else
                i_13 = i_20 + 1
        
        if (i_13 != 0)
            uint32_t eax_37
            
            do
                uint32_t eax_33 = zx.d(*(ecx_10 + 2)) + ebx
                i_13 -= 1
                
                if (eax_33 u> 0xff)
                    eax_33 = 0xff
                
                uint32_t esi_9 = zx.d(*(ecx_10 + 1)) + var_8
                
                if (esi_9 u> 0xff)
                    esi_9 = 0xff
                
                uint32_t edx_37 = zx.d(*ecx_10) + var_c
                
                if (edx_37 u> 0xff)
                    edx_37 = 0xff
                
                eax_37 = (eax_33 << 8 | esi_9) << 8 | edx_37
                *ecx_10 = eax_37
                ecx_10 += 4
            while (i_13 != 0)
            
            return eax_37
    else if (arg6 == 4)
        int32_t eax_23 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_7 = *(arg1 + 0x14)
        void* ecx_8
        int32_t i_19
        
        if (arg2 s> arg4)
            eax_14 = eax_23 + arg4
            ecx_8 = ecx_7 + (eax_14 << 2)
            
            if (arg11 != 0)
                i_19 = arg2 - arg4 + 1
            else
                ecx_8 += 4
                i_19 = arg2 - arg4
        else
            eax_14 = eax_23 + arg2
            i_19 = arg4 - arg2
            ecx_8 = ecx_7 + (eax_14 << 2)
            
            if (arg11 != 0)
                i_19 += 1
        
        if (i_19 != 0)
            int32_t eax_26
            int32_t i_14
            
            do
                int32_t eax_24
                int32_t edx_22
                edx_22:eax_24 = mulu.dp.d(0x80808081, zx.d(*(ecx_8 + 2)) * ebx)
                int32_t eax_25
                int32_t edx_26
                edx_26:eax_25 = mulu.dp.d(0x80808081, zx.d(*(ecx_8 + 1)) * var_8)
                int32_t edx_30
                edx_30:eax_26 = mulu.dp.d(0x80808081, zx.d(*ecx_8) * var_c)
                *ecx_8 = (edx_22 u>> 7 << 8 | edx_26 u>> 7) << 8 | edx_30 u>> 7
                ecx_8 += 4
                i_14 = i_19
                i_19 -= 1
            while (i_14 != 1)
            return eax_26
    else
        int32_t eax_13 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_4 = *(arg1 + 0x14)
        int32_t edx_14
        int32_t edi_2
        
        if (arg2 s> arg4)
            eax_14 = eax_13 + arg4
            edi_2 = ecx_4 + (eax_14 << 2)
            
            if (arg11 != 0)
                edx_14 = arg2 - arg4 + 1
            else
                edi_2 += 4
                edx_14 = arg2 - arg4
        else
            eax_14 = eax_13 + arg2
            int32_t esi_3 = arg4 - arg2
            edi_2 = ecx_4 + (eax_14 << 2)
            
            if (arg11 == 0)
                edx_14 = esi_3
            else
                edx_14 = esi_3 + 1
        
        if (edx_14 != 0)
            uint32_t eax_19 = (ebx << 8 | var_8) << 8 | var_c
            int32_t ecx_6
            int32_t edi_3
            edi_3, ecx_6 = __memfill_u32(edi_2, eax_19, edx_14)
            return eax_19
    
    return eax_14
}

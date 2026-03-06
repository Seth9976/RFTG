// 函数名称: sub_638ef0
// 虚拟地址: 0x638ef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t*sub_638ef0(void* arg1, int16_t* arg2, int32_t arg3, int32_t arg4, int16_t* arg5, void* arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
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
    
    void* esi = arg3
    int16_t* edi = arg5
    int32_t ecx_2 = ecx_1 ^ 0xff
    int16_t* i_11
    
    if (esi != edi)
        if (arg2 != arg4)
            arg3 = esi - edi
            int32_t eax_110
            int32_t edx_132
            edx_132:eax_110 = sx.q(arg2 - arg4)
            int32_t eax_112
            int32_t edx_133
            edx_133:eax_112 = sx.q(arg3)
            
            if ((eax_110 ^ edx_132) - edx_132 != (eax_112 ^ edx_133) - edx_133)
                if (arg6 == 1)
                    int32_t eax_215
                    int32_t edx_241
                    edx_241:eax_215 = sx.q(arg4 - arg2)
                    void* ebx_74 = (eax_215 ^ edx_241) - edx_241
                    int32_t eax_218
                    int32_t edx_242
                    edx_242:eax_218 = sx.q(edi - esi)
                    void* eax_220 = (eax_218 ^ edx_242) - edx_242
                    int32_t var_28_4
                    int32_t var_24_4
                    int32_t var_20_4
                    int32_t var_1c_5
                    int32_t edx_247
                    int32_t ebx_75
                    
                    if (ebx_74 s< eax_220)
                        arg6 = eax_220 + 1
                        arg3 = ebx_74 * 2 - eax_220
                        var_24_4 = ebx_74 * 2
                        edx_247 = 1
                        var_28_4 = (ebx_74 - eax_220) * 2
                        ebx_75 = 0
                        var_1c_5 = 1
                        var_20_4 = 1
                    else
                        arg6 = ebx_74 + 1
                        arg3 = eax_220 * 2 - ebx_74
                        ebx_75 = 1
                        var_24_4 = eax_220 * 2
                        var_28_4 = (eax_220 - ebx_74) * 2
                        var_1c_5 = 1
                        edx_247 = 0
                        var_20_4 = 1
                    
                    i_11 = arg2
                    int32_t var_18_5 = edx_247
                    
                    if (i_11 s> arg4)
                        ebx_75 = neg.d(ebx_75)
                        var_1c_5 = 0xffffffff
                    
                    if (esi s> edi)
                        var_18_5 = neg.d(edx_247)
                        var_20_4 = 0xffffffff
                    
                    void* edi_61 = esi
                    void* var_14_4 = edi_61
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        i_11 *= 2
                        arg5 = i_11
                        void* i
                        
                        do
                            void* esi_70 = *(arg1 + 0x10) * edi_61 + i_11 + *(arg1 + 0x14)
                            uint32_t edi_62 = zx.d(*esi_70)
                            int32_t eax_225
                            int32_t edx_257
                            edx_257:eax_225 =
                                mulu.dp.d(0x80808081, zx.d(*((edi_62 u>> 0xb) + data_8bac74)) * ecx_2)
                            int32_t eax_229
                            int32_t edx_264
                            edx_264:eax_229 = mulu.dp.d(0x80808081, 
                                zx.d(*((edi_62 u>> 5 & 0x3f) + data_8bac70)) * ecx_2)
                            int32_t eax_231
                            int32_t edx_272
                            edx_272:eax_231 =
                                mulu.dp.d(0x80808081, zx.d(*((edi_62 & 0x1f) + data_8bac74)) * ecx_2)
                            *esi_70 = ((((((edx_257 u>> 7) + ebx) << 8).w & 0xf81f)
                                | (((edx_264 u>> 7).w + var_8.w) * 8)) & 0xffe0)
                                | (((edx_272 u>> 7) + var_c) u>> 3).w
                            
                            if (arg3 s>= 0)
                                arg3 += var_28_4
                                i_11 = &arg5[var_1c_5]
                                edi_61 = var_14_4 + var_20_4
                            else
                                arg3 += var_24_4
                                i_11 = &arg5[ebx_75]
                                edi_61 = var_14_4 + var_18_5
                            
                            i = arg6
                            arg6 -= 1
                            var_14_4 = edi_61
                            arg5 = i_11
                        while (i != 1)
                else if (arg6 == 2)
                    int32_t eax_199
                    int32_t edx_226
                    edx_226:eax_199 = sx.q(arg4 - arg2)
                    void* ecx_92 = (eax_199 ^ edx_226) - edx_226
                    int32_t eax_202
                    int32_t edx_227
                    edx_227:eax_202 = sx.q(edi - esi)
                    void* eax_204 = (eax_202 ^ edx_227) - edx_227
                    int32_t var_24_3
                    int32_t var_20_3
                    int32_t var_1c_3
                    int32_t var_18_4
                    void* ebx_70
                    
                    if (ecx_92 s< eax_204)
                        arg6 = eax_204 + 1
                        int32_t edx_231 = ecx_92 * 2
                        var_20_3 = (ecx_92 - eax_204) * 2
                        ebx_70 = edx_231 - eax_204
                        var_24_3 = edx_231
                        i_11 = nullptr
                        var_1c_3 = 1
                        arg3 = 1
                        var_18_4 = 1
                    else
                        arg6 = ecx_92 + 1
                        int32_t edx_229 = eax_204 * 2
                        ebx_70 = edx_229 - ecx_92
                        var_24_3 = edx_229
                        var_20_3 = (eax_204 - ecx_92) * 2
                        i_11 = 1
                        var_1c_3 = 1
                        arg3 = 0
                        var_18_4 = 1
                    
                    if (arg2 s> arg4)
                        i_11 = neg.d(i_11)
                        var_1c_3 = 0xffffffff
                    
                    if (esi s> edi)
                        arg3 = neg.d(arg3)
                        var_18_4 = 0xffffffff
                    
                    void* var_14_3 = esi
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        void* ecx_96 = arg2 * 2
                        arg5 = ecx_96
                        void* eax_212
                        void* i_1
                        
                        do
                            eax_212 = *(arg1 + 0x10) * esi + ecx_96 + *(arg1 + 0x14)
                            uint32_t ecx_97 = zx.d(*eax_212)
                            void* esi_61 = data_8bac74
                            uint32_t ecx_100 = zx.d(*((ecx_97 u>> 0xb) + esi_61)) + ebx
                            
                            if (ecx_100 u> 0xff)
                                ecx_100 = 0xff
                            
                            uint32_t edi_60 = zx.d(*((ecx_97 u>> 5 & 0x3f) + data_8bac70)) + var_8
                            
                            if (edi_60 u> 0xff)
                                edi_60 = 0xff
                            
                            uint32_t edx_239 = zx.d(*((ecx_97 & 0x1f) + esi_61)) + var_c
                            
                            if (edx_239 u> 0xff)
                                edx_239 = 0xff
                            
                            *eax_212 = (((((ecx_100 & 0xfff8) << 5).w | edi_60.w) & 0xfffc) * 8)
                                | (edx_239 u>> 3).w
                            
                            if (ebx_70 s>= 0)
                                ebx_70 += var_20_3
                                ecx_96 = &arg5[var_1c_3]
                                esi = var_14_3 + var_18_4
                            else
                                ebx_70 += var_24_3
                                ecx_96 = &arg5[i_11]
                                esi = var_14_3 + arg3
                            
                            i_1 = arg6
                            arg6 -= 1
                            var_14_3 = esi
                            arg5 = ecx_96
                        while (i_1 != 1)
                        return eax_212
                else if (arg6 == 4)
                    int32_t eax_179
                    int32_t edx_203
                    edx_203:eax_179 = sx.q(arg4 - arg2)
                    void* ecx_80 = (eax_179 ^ edx_203) - edx_203
                    int32_t eax_182
                    int32_t edx_204
                    edx_204:eax_182 = sx.q(edi - esi)
                    void* eax_184 = (eax_182 ^ edx_204) - edx_204
                    int32_t var_24_2
                    int32_t var_20_2
                    int32_t var_1c_2
                    int32_t var_18_2
                    int32_t ecx_81
                    void* ebx_67
                    
                    if (ecx_80 s< eax_184)
                        arg6 = eax_184 + 1
                        int32_t edx_208 = ecx_80 * 2
                        ebx_67 = edx_208 - eax_184
                        var_20_2 = edx_208
                        var_24_2 = (ecx_80 - eax_184) * 2
                        ecx_81 = 0
                        var_18_2 = 1
                        arg3 = 1
                        var_1c_2 = 1
                    else
                        arg6 = ecx_80 + 1
                        int32_t edx_206 = eax_184 * 2
                        ebx_67 = edx_206 - ecx_80
                        var_20_2 = edx_206
                        var_24_2 = (eax_184 - ecx_80) * 2
                        ecx_81 = 1
                        var_18_2 = 1
                        arg3 = 0
                        var_1c_2 = 1
                    
                    i_11 = arg2
                    
                    if (i_11 s> arg4)
                        ecx_81 = neg.d(ecx_81)
                        var_18_2 = 0xffffffff
                    
                    if (esi s> edi)
                        arg3 = neg.d(arg3)
                        var_1c_2 = 0xffffffff
                    
                    void* var_14_2 = esi
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int16_t* eax_187 = i_11 * 2
                        arg5 = eax_187
                        void* i_2
                        
                        do
                            void* ecx_89 = *(arg1 + 0x10) * esi + eax_187 + *(arg1 + 0x14)
                            uint32_t edi_53 = zx.d(*ecx_89)
                            int32_t eax_189
                            int32_t edx_214
                            edx_214:eax_189 =
                                mulu.dp.d(0x80808081, zx.d(*((edi_53 u>> 0xb) + data_8bac74)) * ebx)
                            int32_t eax_193
                            int32_t edx_219
                            edx_219:eax_193 = mulu.dp.d(0x80808081, 
                                zx.d(*((edi_53 u>> 5 & 0x3f) + data_8bac70)) * var_8)
                            int32_t eax_195
                            int32_t edx_223
                            edx_223:eax_195 =
                                mulu.dp.d(0x80808081, zx.d(*((edi_53 & 0x1f) + data_8bac74)) * var_c)
                            *ecx_89 = (((((edx_214 u>> 7 & 0xfff8) << 5).w | (edx_219 u>> 7).w)
                                & 0xfffc) * 8) | (edx_223 u>> 0xa).w
                            
                            if (ebx_67 s>= 0)
                                ebx_67 += var_24_2
                                eax_187 = &arg5[var_18_2]
                                esi = var_14_2 + var_1c_2
                            else
                                ebx_67 += var_20_2
                                eax_187 = &arg5[ecx_81]
                                esi = var_14_2 + arg3
                            
                            i_2 = arg6
                            arg6 -= 1
                            var_14_2 = esi
                            arg5 = eax_187
                        while (i_2 != 1)
                        return eax_187
                else
                    int32_t eax_167
                    int32_t edx_196
                    edx_196:eax_167 = sx.q(arg4 - arg2)
                    void* ecx_70 = (eax_167 ^ edx_196) - edx_196
                    int32_t eax_170
                    int32_t edx_197
                    edx_197:eax_170 = sx.q(edi - esi)
                    void* eax_172 = (eax_170 ^ edx_197) - edx_197
                    int32_t var_1c_1
                    int32_t ecx_71
                    void* edx_200
                    int32_t ebx_59
                    
                    if (ecx_70 s< eax_172)
                        ebx_59 = ecx_70 * 2
                        arg6 = eax_172 + 1
                        var_1c_1 = (ecx_70 - eax_172) * 2
                        ecx_71 = 1
                        edx_200 = ebx_59 - eax_172
                        i_11 = nullptr
                        arg3 = 1
                        arg5 = 1
                    else
                        ebx_59 = eax_172 * 2
                        arg6 = ecx_70 + 1
                        edx_200 = ebx_59 - ecx_70
                        var_1c_1 = (eax_172 - ecx_70) * 2
                        i_11 = 1
                        ecx_71 = 1
                        arg3 = 0
                        arg5 = 1
                    
                    if (arg2 s> arg4)
                        i_11 = neg.d(i_11)
                        ecx_71 = 0xffffffff
                    
                    if (esi s> edi)
                        arg3 = neg.d(arg3)
                        arg5 = 0xffffffff
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        uint32_t ebx_62 = var_c u>> 3
                        int32_t edi_48 = arg2 * 2
                        uint32_t var_28_1 = ebx_62
                        int32_t eax_177
                        
                        while (true)
                            eax_177 = *(arg1 + 0x14)
                            *(*(arg1 + 0x10) * esi + edi_48 + eax_177) =
                                (((((ebx & 0xfff8) << 5).w | var_8.w) & 0xfffc) * 8) | ebx_62.w
                            
                            if (edx_200 s>= 0)
                                edx_200 += var_1c_1
                                edi_48 += ecx_71 * 2
                                esi += arg5
                            else
                                edx_200 += ebx_59
                                edi_48 += i_11 * 2
                                esi += arg3
                            
                            void* temp22_1 = arg6
                            arg6 -= 1
                            
                            if (temp22_1 == 1)
                                break
                            
                            ebx_62 = var_28_1
                        
                        return eax_177
            else if (arg6 == 1)
                int32_t temp0_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                void* ebx_57
                void* i_3
                
                if (esi s> edi)
                    ebx_57 = *(arg1 + 0x14) + ((temp0_12 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_11 = temp0_12 - 1
                    else
                        i_11 = temp0_12 + 1
                    
                    if (arg11 == 0)
                        ebx_57 += i_11 << 1
                    
                    i_3 = arg3
                else
                    ebx_57 = *(arg1 + 0x14) + ((temp0_12 * esi + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_11 = temp0_12 - 1
                        i_3 = edi - esi
                    else
                        i_11 = temp0_12 + 1
                        i_3 = edi - esi
                
                if (arg11 != 0)
                    i_3 += 1
                
                if (i_3 != 0)
                    void* ebx_58 = ebx_57
                    int32_t eax_162
                    
                    do
                        uint32_t esi_48 = zx.d(*ebx_58)
                        int32_t eax_157
                        int32_t edx_177
                        edx_177:eax_157 =
                            mulu.dp.d(0x80808081, zx.d(*((esi_48 u>> 5 & 0x3f) + data_8bac70)) * ecx_2)
                        int32_t eax_160
                        int32_t edx_185
                        edx_185:eax_160 =
                            mulu.dp.d(0x80808081, zx.d(*((esi_48 u>> 0xb) + data_8bac74)) * ecx_2)
                        int32_t edx_192
                        edx_192:eax_162 =
                            mulu.dp.d(0x80808081, zx.d(*((esi_48 & 0x1f) + data_8bac74)) * ecx_2)
                        *ebx_58 = (((((edx_177 u>> 7).w + var_8.w) * 8)
                            | ((((edx_185 u>> 7) + ebx) << 8).w & 0xf81f)) & 0xffe0)
                            | (((edx_192 u>> 7) + var_c) u>> 3).w
                        i_3 -= 1
                        ebx_58 += i_11 * 2
                    while (i_3 != 0)
                    
                    return eax_162
            else if (arg6 == 2)
                int32_t temp0_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int32_t ecx_58 = *(arg1 + 0x14)
                void* ebx_51
                void* i_4
                
                if (esi s> edi)
                    ebx_51 = ecx_58 + ((temp0_11 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_11 = temp0_11 - 1
                    else
                        i_11 = temp0_11 + 1
                    
                    if (arg11 == 0)
                        ebx_51 += i_11 << 1
                    
                    i_4 = arg3
                else
                    ebx_51 = ecx_58 + ((temp0_11 * esi + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_11 = temp0_11 - 1
                        i_4 = edi - esi
                    else
                        i_11 = temp0_11 + 1
                        i_4 = edi - esi
                
                if (arg11 != 0)
                    i_4 += 1
                
                if (i_4 != 0)
                    int16_t eax_150
                    
                    do
                        uint32_t eax_139 = zx.d(*ebx_51)
                        void* esi_44 = data_8bac74
                        uint32_t eax_142 = zx.d(*((eax_139 u>> 0xb) + esi_44)) + ebx
                        i_4 -= 1
                        
                        if (eax_142 u> 0xff)
                            eax_142 = 0xff
                        
                        uint32_t edx_163 = zx.d(*((eax_139 u>> 5 & 0x3f) + data_8bac70)) + var_8
                        
                        if (edx_163 u> 0xff)
                            edx_163 = 0xff
                        
                        uint32_t ecx_66 = zx.d(*((eax_139 & 0x1f) + esi_44)) + var_c
                        
                        if (ecx_66 u> 0xff)
                            ecx_66 = 0xff
                        
                        eax_150 = (((((eax_142 & 0xfff8) << 5).w | edx_163.w) & 0xfffc) * 8)
                            | (ecx_66 u>> 3).w
                        *ebx_51 = eax_150
                        ebx_51 += i_11 * 2
                    while (i_4 != 0)
                    
                    return eax_150
            else if (arg6 == 4)
                int32_t temp0_10 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int32_t ecx_52 = *(arg1 + 0x14)
                void* ebx_44
                int32_t i_23
                
                if (esi s> edi)
                    ebx_44 = ecx_52 + ((temp0_10 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_11 = temp0_10 - 1
                    else
                        i_11 = temp0_10 + 1
                    
                    if (arg11 == 0)
                        ebx_44 += i_11 << 1
                    
                    i_23 = arg3
                else
                    ebx_44 = ecx_52 + ((temp0_10 * esi + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_11 = temp0_10 - 1
                        i_23 = edi - esi
                    else
                        i_11 = temp0_10 + 1
                        i_23 = edi - esi
                
                if (arg11 != 0)
                    i_23 += 1
                
                if (i_23 != 0)
                    int32_t eax_135
                    int32_t i_5
                    
                    do
                        uint32_t ecx_54 = zx.d(*ebx_44)
                        int32_t eax_129
                        int32_t edx_147
                        edx_147:eax_129 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_54 u>> 0xb) + data_8bac74)) * ebx)
                        int32_t eax_133
                        int32_t edx_152
                        edx_152:eax_133 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_54 u>> 5 & 0x3f) + data_8bac70)) * var_8)
                        int32_t edx_154
                        edx_154:eax_135 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_54 & 0x1f) + data_8bac74)) * var_c)
                        *ebx_44 = (((((edx_147 u>> 7 & 0xfff8) << 5).w | (edx_152 u>> 7).w) & 0xfffc)
                            * 8) | (edx_154 u>> 0xa).w
                        ebx_44 += i_11 * 2
                        i_5 = i_23
                        i_23 -= 1
                    while (i_5 != 1)
                    return eax_135
            else
                int32_t ecx_50 = *(arg1 + 0x14)
                int32_t temp0_9 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int16_t* ecx_51
                int32_t i_22
                
                if (esi s> edi)
                    ecx_51 = ecx_50 + ((temp0_9 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_11 = temp0_9 - 1
                    else
                        i_11 = temp0_9 + 1
                    
                    if (arg11 == 0)
                        ecx_51 = &ecx_51[i_11]
                    
                    i_22 = arg3
                else
                    ecx_51 = ecx_50 + ((temp0_9 * esi + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_11 = temp0_9 - 1
                        i_22 = edi - esi
                    else
                        i_11 = temp0_9 + 1
                        i_22 = edi - esi
                
                if (arg11 != 0)
                    i_22 += 1
                
                if (i_22 != 0)
                    int32_t i_6
                    
                    do
                        *ecx_51 = (((((ebx & 0xfff8) << 5).w | var_8.w) & 0xfffc) * 8) | (var_c u>> 3).w
                        ecx_51 = &ecx_51[i_11]
                        i_6 = i_22
                        i_22 -= 1
                    while (i_6 != 1)
                    return i_11 * 2
        else if (arg6 == 1)
            i_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t ebx_29 = *(arg1 + 0x14)
            int16_t* ebx_30
            void* i_7
            
            if (esi s> edi)
                ebx_30 = ebx_29 + ((i_11 * edi + arg2) << 1)
                
                if (arg11 != 0)
                    i_7 = esi - edi + 1
                else
                    ebx_30 = &ebx_30[i_11]
                    i_7 = esi - edi
            else
                void* i_21 = edi - esi
                ebx_30 = ebx_29 + ((i_11 * esi + arg2) << 1)
                
                if (arg11 == 0)
                    i_7 = i_21
                else
                    i_7 = i_21 + 1
            
            if (i_7 != 0)
                int32_t eax_105
                
                do
                    uint32_t edi_28 = zx.d(*ebx_30)
                    int32_t eax_100
                    int32_t edx_113
                    edx_113:eax_100 =
                        mulu.dp.d(0x80808081, zx.d(*((edi_28 u>> 5 & 0x3f) + data_8bac70)) * ecx_2)
                    int32_t eax_103
                    int32_t edx_121
                    edx_121:eax_103 =
                        mulu.dp.d(0x80808081, zx.d(*((edi_28 u>> 0xb) + data_8bac74)) * ecx_2)
                    int32_t edx_128
                    edx_128:eax_105 =
                        mulu.dp.d(0x80808081, zx.d(*((edi_28 & 0x1f) + data_8bac74)) * ecx_2)
                    *ebx_30 = (((((edx_113 u>> 7).w + var_8.w) * 8)
                        | ((((edx_121 u>> 7) + ebx) << 8).w & 0xf81f)) & 0xffe0)
                        | (((edx_128 u>> 7) + var_c) u>> 3).w
                    i_7 -= 1
                    ebx_30 += i_11 * 2
                while (i_7 != 0)
                
                return eax_105
        else if (arg6 == 2)
            i_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t ecx_40 = *(arg1 + 0x14)
            int16_t* edx_98
            void* i_8
            
            if (esi s> edi)
                edx_98 = ecx_40 + ((i_11 * edi + arg2) << 1)
                
                if (arg11 != 0)
                    i_8 = esi - edi + 1
                else
                    edx_98 = &edx_98[i_11]
                    i_8 = esi - edi
            else
                void* i_20 = edi - esi
                edx_98 = ecx_40 + ((i_11 * esi + arg2) << 1)
                
                if (arg11 == 0)
                    i_8 = i_20
                else
                    i_8 = i_20 + 1
            
            if (i_8 != 0)
                int16_t eax_94
                
                do
                    uint32_t eax_83 = zx.d(*edx_98)
                    void* esi_14 = data_8bac74
                    uint32_t eax_86 = zx.d(*((eax_83 u>> 0xb) + esi_14)) + ebx
                    i_8 -= 1
                    
                    if (eax_86 u> 0xff)
                        eax_86 = 0xff
                    
                    uint32_t edi_27 = zx.d(*((eax_83 u>> 5 & 0x3f) + data_8bac70)) + var_8
                    
                    if (edi_27 u> 0xff)
                        edi_27 = 0xff
                    
                    uint32_t ecx_47 = zx.d(*((eax_83 & 0x1f) + esi_14)) + var_c
                    
                    if (ecx_47 u> 0xff)
                        ecx_47 = 0xff
                    
                    eax_94 = (((((eax_86 & 0xfff8) << 5).w | edi_27.w) & 0xfffc) * 8) | (ecx_47 u>> 3).w
                    *edx_98 = eax_94
                    edx_98 += i_11 * 2
                while (i_8 != 0)
                
                return eax_94
        else if (arg6 == 4)
            i_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t ecx_33 = *(arg1 + 0x14)
            int16_t* ebx_26
            void* i_18
            
            if (esi s> edi)
                ebx_26 = ecx_33 + ((i_11 * edi + arg2) << 1)
                
                if (arg11 != 0)
                    i_18 = esi - edi + 1
                else
                    ebx_26 = &ebx_26[i_11]
                    i_18 = esi - edi
            else
                void* i_26 = edi - esi
                ebx_26 = ecx_33 + ((i_11 * esi + arg2) << 1)
                
                if (arg11 == 0)
                    i_18 = i_26
                else
                    i_18 = i_26 + 1
            
            if (i_18 != 0)
                int32_t eax_78
                void* i_9
                
                do
                    uint32_t ecx_34 = zx.d(*ebx_26)
                    int32_t eax_72
                    int32_t edx_83
                    edx_83:eax_72 = mulu.dp.d(0x80808081, zx.d(*((ecx_34 u>> 0xb) + data_8bac74)) * ebx)
                    int32_t eax_76
                    int32_t edx_88
                    edx_88:eax_76 =
                        mulu.dp.d(0x80808081, zx.d(*((ecx_34 u>> 5 & 0x3f) + data_8bac70)) * var_8)
                    int32_t edx_90
                    edx_90:eax_78 =
                        mulu.dp.d(0x80808081, zx.d(*((ecx_34 & 0x1f) + data_8bac74)) * var_c)
                    *ebx_26 = (((((edx_83 u>> 7 & 0xfff8) << 5).w | (edx_88 u>> 7).w) & 0xfffc) * 8)
                        | (edx_90 u>> 0xa).w
                    ebx_26 += i_11 * 2
                    i_9 = i_18
                    i_18 -= 1
                while (i_9 != 1)
                return eax_78
        else
            i_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t ecx_29 = *(arg1 + 0x14)
            int16_t* ecx_30
            void* i_17
            
            if (esi s> edi)
                ecx_30 = ecx_29 + ((i_11 * edi + arg2) << 1)
                
                if (arg11 != 0)
                    i_17 = esi - edi + 1
                else
                    ecx_30 = &ecx_30[i_11]
                    i_17 = esi - edi
            else
                void* i_25 = edi - esi
                ecx_30 = ecx_29 + ((i_11 * esi + arg2) << 1)
                
                if (arg11 == 0)
                    i_17 = i_25
                else
                    i_17 = i_25 + 1
            
            if (i_17 != 0)
                void* i_10
                
                do
                    *ecx_30 = (((((ebx & 0xfff8) << 5).w | var_8.w) & 0xfffc) * 8) | (var_c u>> 3).w
                    ecx_30 = &ecx_30[i_11]
                    i_10 = i_17
                    i_17 -= 1
                while (i_10 != 1)
                return i_11 * 2
    else if (arg6 == 1)
        void* eax_48 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * esi
        int32_t esi_7 = *(arg1 + 0x14)
        int16_t* edi_8
        
        if (arg2 s> arg4)
            edi_8 = esi_7 + ((eax_48 + arg4) << 1)
            
            if (arg11 != 0)
                i_11 = arg2 - arg4 + 1
            else
                edi_8 = &edi_8[1]
                i_11 = arg2 - arg4
        else
            void* i_16 = arg4 - arg2
            edi_8 = esi_7 + ((eax_48 + arg2) << 1)
            
            if (arg11 == 0)
                i_11 = i_16
            else
                i_11 = i_16 + 1
        
        if (i_11 != 0)
            do
                uint32_t esi_8 = zx.d(*edi_8)
                int32_t eax_55
                int32_t edx_43
                edx_43:eax_55 =
                    mulu.dp.d(0x80808081, zx.d(*((esi_8 u>> 5 & 0x3f) + data_8bac70)) * ecx_2)
                int32_t eax_58
                int32_t edx_51
                edx_51:eax_58 = mulu.dp.d(0x80808081, zx.d(*((esi_8 u>> 0xb) + data_8bac74)) * ecx_2)
                int32_t eax_60
                int32_t edx_58
                edx_58:eax_60 = mulu.dp.d(0x80808081, zx.d(*((esi_8 & 0x1f) + data_8bac74)) * ecx_2)
                i_11 -= 1
                *edi_8 = (((((edx_43 u>> 7).w + var_8.w) * 8)
                    | ((((edx_51 u>> 7) + ebx) << 8).w & 0xf81f)) & 0xffe0)
                    | (((edx_58 u>> 7) + var_c) u>> 3).w
                edi_8 = &edi_8[1]
            while (i_11 != 0)
    else if (arg6 == 2)
        int32_t edx_34 = *(arg1 + 0x14)
        void* eax_32 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * esi
        int16_t* edx_35
        void* i_12
        
        if (arg2 s> arg4)
            i_11 = eax_32 + arg4
            edx_35 = edx_34 + (i_11 << 1)
            
            if (arg11 != 0)
                i_12 = arg2 - arg4 + 1
            else
                edx_35 = &edx_35[1]
                i_12 = arg2 - arg4
        else
            i_11 = eax_32 + arg2
            i_12 = arg4 - arg2
            edx_35 = edx_34 + (i_11 << 1)
            
            if (arg11 != 0)
                i_12 += 1
        
        if (i_12 != 0)
            int16_t eax_44
            
            do
                uint32_t eax_33 = zx.d(*edx_35)
                void* edi_6 = data_8bac74
                uint32_t eax_36 = zx.d(*((eax_33 u>> 0xb) + edi_6)) + ebx
                i_12 -= 1
                
                if (eax_36 u> 0xff)
                    eax_36 = 0xff
                
                uint32_t esi_6 = zx.d(*((eax_33 u>> 5 & 0x3f) + data_8bac70)) + var_8
                
                if (esi_6 u> 0xff)
                    esi_6 = 0xff
                
                uint32_t ecx_23 = zx.d(*((eax_33 & 0x1f) + edi_6)) + var_c
                
                if (ecx_23 u> 0xff)
                    ecx_23 = 0xff
                
                eax_44 = (((((eax_36 & 0xfff8) << 5).w | esi_6.w) & 0xfffc) * 8) | (ecx_23 u>> 3).w
                *edx_35 = eax_44
                edx_35 = &edx_35[1]
            while (i_12 != 0)
            
            return eax_44
    else if (arg6 == 4)
        int32_t edx_18 = *(arg1 + 0x14)
        void* eax_19 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * esi
        int16_t* esi_3
        void* i_19
        
        if (arg2 s> arg4)
            i_11 = eax_19 + arg4
            esi_3 = edx_18 + (i_11 << 1)
            
            if (arg11 != 0)
                i_19 = arg2 - arg4 + 1
            else
                esi_3 = &esi_3[1]
                i_19 = arg2 - arg4
        else
            i_11 = eax_19 + arg2
            i_19 = arg4 - arg2
            esi_3 = edx_18 + (i_11 << 1)
            
            if (arg11 != 0)
                i_19 += 1
        
        if (i_19 != 0)
            int32_t eax_28
            void* i_13
            
            do
                uint32_t ecx_9 = zx.d(*esi_3)
                int32_t eax_22
                int32_t edx_22
                edx_22:eax_22 = mulu.dp.d(0x80808081, zx.d(*((ecx_9 u>> 0xb) + data_8bac74)) * ebx)
                int32_t eax_26
                int32_t edx_27
                edx_27:eax_26 =
                    mulu.dp.d(0x80808081, zx.d(*((ecx_9 u>> 5 & 0x3f) + data_8bac70)) * var_8)
                int32_t edx_29
                edx_29:eax_28 = mulu.dp.d(0x80808081, zx.d(*((ecx_9 & 0x1f) + data_8bac74)) * var_c)
                *esi_3 = (((((edx_22 u>> 7 & 0xfff8) << 5).w | (edx_27 u>> 7).w) & 0xfffc) * 8)
                    | (edx_29 u>> 0xa).w
                esi_3 = &esi_3[1]
                i_13 = i_19
                i_19 -= 1
            while (i_13 != 1)
            return eax_28
    else
        void* eax_13 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * esi
        int32_t esi_1 = *(arg1 + 0x14)
        void* i_15
        
        if (arg2 s> arg4)
            i_11 = esi_1 + ((eax_13 + arg4) << 1)
            
            if (arg11 != 0)
                i_15 = arg2 - arg4 + 1
            else
                i_11 = &i_11[1]
                i_15 = arg2 - arg4
        else
            void* i_24 = arg4 - arg2
            i_11 = esi_1 + ((eax_13 + arg2) << 1)
            
            if (arg11 == 0)
                i_15 = i_24
            else
                i_15 = i_24 + 1
        
        if (i_15 != 0)
            void* i_14
            
            do
                *i_11 = ((((ebx & 0xfff8) << 5 | var_8) & 0xfffc) << 3).w | (var_c u>> 3).w
                i_11 = &i_11[1]
                i_14 = i_15
                i_15 -= 1
            while (i_14 != 1)
    
    return i_11
}

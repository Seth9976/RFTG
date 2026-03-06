// 函数名称: sub_637e10
// 虚拟地址: 0x637e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t*sub_637e10(void* arg1, int16_t* arg2, void* arg3, int32_t arg4, int16_t* arg5, void* arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
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
    
    int16_t* edi = arg5
    int32_t ecx_2 = ecx_1 ^ 0xff
    void* ecx_3 = arg3
    int16_t* i_12
    
    if (ecx_3 != edi)
        if (arg2 != arg4)
            void* i_16 = ecx_3 - edi
            int32_t eax_106
            int32_t edx_146
            edx_146:eax_106 = sx.q(arg2 - arg4)
            int32_t eax_108
            int32_t edx_147
            edx_147:eax_108 = sx.q(i_16)
            
            if ((eax_106 ^ edx_146) - edx_146 != (eax_108 ^ edx_147) - edx_147)
                if (arg6 == 1)
                    int32_t eax_217
                    int32_t edx_263
                    edx_263:eax_217 = sx.q(arg4 - arg2)
                    void* ebx_69 = (eax_217 ^ edx_263) - edx_263
                    int32_t eax_220
                    int32_t edx_264
                    edx_264:eax_220 = sx.q(edi - ecx_3)
                    void* eax_222 = (eax_220 ^ edx_264) - edx_264
                    int32_t var_28_5
                    int32_t var_24_4
                    int32_t var_20_4
                    int32_t var_1c_4
                    int32_t edx_269
                    int32_t ebx_70
                    
                    if (ebx_69 s< eax_222)
                        arg6 = eax_222 + 1
                        arg3 = ebx_69 * 2 - eax_222
                        var_24_4 = ebx_69 * 2
                        edx_269 = 1
                        var_28_5 = (ebx_69 - eax_222) * 2
                        ebx_70 = 0
                        var_1c_4 = 1
                        var_20_4 = 1
                    else
                        arg6 = ebx_69 + 1
                        arg3 = eax_222 * 2 - ebx_69
                        ebx_70 = 1
                        var_24_4 = eax_222 * 2
                        var_28_5 = (eax_222 - ebx_69) * 2
                        var_1c_4 = 1
                        edx_269 = 0
                        var_20_4 = 1
                    
                    i_12 = arg2
                    int32_t var_18_4 = edx_269
                    
                    if (i_12 s> arg4)
                        ebx_70 = neg.d(ebx_70)
                        var_1c_4 = 0xffffffff
                    
                    if (ecx_3 s> edi)
                        var_18_4 = neg.d(edx_269)
                        var_20_4 = 0xffffffff
                    
                    void* var_14_3 = ecx_3
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        i_12 *= 2
                        arg5 = i_12
                        void* edi_55 = ecx_3
                        void* i
                        
                        do
                            void* ebx_73 = data_8bac74
                            void* ecx_97 = *(arg1 + 0x10) * edi_55 + i_12 + *(arg1 + 0x14)
                            uint32_t edi_56 = zx.d(*ecx_97)
                            int32_t eax_225
                            int32_t edx_281
                            edx_281:eax_225 =
                                mulu.dp.d(0x80808081, zx.d(*((edi_56 u>> 0xa & 0x1f) + ebx_73)) * ecx_2)
                            int32_t eax_228
                            int32_t edx_290
                            edx_290:eax_228 =
                                mulu.dp.d(0x80808081, zx.d(*((edi_56 u>> 5 & 0x1f) + ebx_73)) * ecx_2)
                            int32_t eax_232
                            int32_t edx_298
                            edx_298:eax_232 =
                                mulu.dp.d(0x80808081, zx.d(*((edi_56 & 0x1f) + ebx_73)) * ecx_2)
                            *ecx_97 = ((((((edx_281 u>> 7) + ebx) << 7).w & 0xfc1f)
                                | (((edx_290 u>> 7).w + var_8.w) * 4)) & 0xffe0)
                                | (((edx_298 u>> 7) + var_c) u>> 3).w
                            
                            if (arg3 s>= 0)
                                arg3 += var_28_5
                                i_12 = &arg5[var_1c_4]
                                edi_55 = var_14_3 + var_20_4
                            else
                                arg3 += var_24_4
                                i_12 = &arg5[ebx_70]
                                edi_55 = var_14_3 + var_18_4
                            
                            i = arg6
                            arg6 -= 1
                            var_14_3 = edi_55
                            arg5 = i_12
                        while (i != 1)
                else if (arg6 == 2)
                    int32_t eax_202
                    int32_t edx_242
                    edx_242:eax_202 = sx.q(arg4 - arg2)
                    void* esi_57 = (eax_202 ^ edx_242) - edx_242
                    int32_t eax_205
                    int32_t edx_243
                    edx_243:eax_205 = sx.q(edi - ecx_3)
                    void* eax_207 = (eax_205 ^ edx_243) - edx_243
                    int32_t var_24_3
                    int32_t var_20_3
                    int32_t var_1c_3
                    void* const edx_246
                    void* ebx_65
                    
                    if (esi_57 s< eax_207)
                        arg6 = eax_207 + 1
                        int32_t edx_248 = esi_57 * 2
                        var_24_3 = edx_248
                        edx_246 = 1
                        ebx_65 = edx_248 - eax_207
                        var_20_3 = (esi_57 - eax_207) * 2
                        i_12 = nullptr
                        arg5 = 1
                        var_1c_3 = 1
                    else
                        arg6 = esi_57 + 1
                        int32_t edx_245 = eax_207 * 2
                        ebx_65 = edx_245 - esi_57
                        var_20_3 = (eax_207 - esi_57) * 2
                        i_12 = 1
                        var_24_3 = edx_245
                        edx_246 = 1
                        arg5 = nullptr
                        var_1c_3 = 1
                    
                    if (arg2 s> arg4)
                        i_12 = neg.d(i_12)
                        edx_246 = 0xffffffff
                    
                    if (ecx_3 s> edi)
                        arg5 = neg.d(arg5)
                        var_1c_3 = 0xffffffff
                    
                    arg3 = ecx_3
                    void* i_25 = arg6
                    
                    if (arg11 == 0)
                        i_25 -= 1
                    
                    if (i_25 s> 0)
                        arg6 = arg2 * 2
                        void* i_15 = i_25
                        void* eax_214
                        void* i_1
                        
                        do
                            eax_214 = *(arg1 + 0x10) * arg3 + arg6 + *(arg1 + 0x14)
                            void* ecx_87 = data_8bac74
                            uint32_t edx_250 = zx.d(*eax_214)
                            uint32_t edx_254 = zx.d(*((edx_250 u>> 0xa & 0x1f) + ecx_87)) + ebx
                            
                            if (edx_254 u> 0xff)
                                edx_254 = 0xff
                            
                            uint32_t esi_66 = zx.d(*((edx_250 u>> 5 & 0x1f) + ecx_87)) + var_8
                            
                            if (esi_66 u> 0xff)
                                esi_66 = 0xff
                            
                            uint32_t edi_52 = zx.d(*((edx_250 & 0x1f) + ecx_87)) + var_c
                            
                            if (edi_52 u> 0xff)
                                edi_52 = 0xff
                            
                            *eax_214 = (((((edx_254 & 0xfff8) << 5).w | esi_66.w) & 0xfff8) * 4)
                                | (edi_52 u>> 3).w
                            
                            if (ebx_65 s>= 0)
                                eax_214 = edx_246 * 2
                                ebx_65 += var_20_3
                                arg6 += eax_214
                                arg3 += var_1c_3
                            else
                                ebx_65 += var_24_3
                                arg6 += i_12 * 2
                                arg3 += arg5
                            
                            i_1 = i_15
                            i_15 -= 1
                        while (i_1 != 1)
                        return eax_214
                else if (arg6 == 4)
                    int32_t eax_177
                    int32_t edx_215
                    edx_215:eax_177 = sx.q(arg4 - arg2)
                    void* esi_49 = (eax_177 ^ edx_215) - edx_215
                    int32_t eax_180
                    int32_t edx_216
                    edx_216:eax_180 = sx.q(edi - ecx_3)
                    void* eax_182 = (eax_180 ^ edx_216) - edx_216
                    int32_t var_24_2
                    int32_t var_20_2
                    int32_t var_1c_2
                    int32_t var_18_2
                    void* ebx_62
                    int32_t esi_50
                    
                    if (esi_49 s< eax_182)
                        arg6 = eax_182 + 1
                        int32_t edx_220 = esi_49 * 2
                        ebx_62 = edx_220 - eax_182
                        var_20_2 = edx_220
                        var_24_2 = (esi_49 - eax_182) * 2
                        esi_50 = 0
                        var_18_2 = 1
                        arg3 = 1
                        var_1c_2 = 1
                    else
                        arg6 = esi_49 + 1
                        int32_t edx_218 = eax_182 * 2
                        ebx_62 = edx_218 - esi_49
                        var_20_2 = edx_218
                        var_24_2 = (eax_182 - esi_49) * 2
                        esi_50 = 1
                        var_18_2 = 1
                        arg3 = nullptr
                        var_1c_2 = 1
                    
                    i_12 = arg2
                    
                    if (i_12 s> arg4)
                        esi_50 = neg.d(esi_50)
                        var_18_2 = 0xffffffff
                    
                    if (ecx_3 s> edi)
                        arg3 = neg.d(arg3)
                        var_1c_2 = 0xffffffff
                    
                    void* edi_44 = ecx_3
                    void* var_14_2 = edi_44
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int16_t* eax_185 = i_12 * 2
                        arg5 = eax_185
                        void* i_2
                        
                        do
                            void* edi_45 = data_8bac74
                            void* ecx_85 = *(arg1 + 0x10) * edi_44 + eax_185 + *(arg1 + 0x14)
                            uint32_t esi_53 = zx.d(*ecx_85)
                            int32_t eax_186
                            int32_t edx_227
                            edx_227:eax_186 =
                                mulu.dp.d(0x80808081, zx.d(*((esi_53 u>> 0xa & 0x1f) + edi_45)) * ebx)
                            int32_t eax_190
                            int32_t edx_234
                            edx_234:eax_190 =
                                mulu.dp.d(0x80808081, zx.d(*((esi_53 u>> 5 & 0x1f) + edi_45)) * var_8)
                            int32_t eax_196
                            int32_t edx_239
                            edx_239:eax_196 =
                                mulu.dp.d(0x80808081, zx.d(*((esi_53 & 0x1f) + edi_45)) * var_c)
                            *ecx_85 = (((((edx_227 u>> 7 & 0xfff8) << 5).w | (edx_234 u>> 7).w)
                                & 0xfff8) * 4) | (edx_239 u>> 0xa).w
                            
                            if (ebx_62 s>= 0)
                                ebx_62 += var_24_2
                                eax_185 = &arg5[var_18_2]
                                edi_44 = var_14_2 + var_1c_2
                            else
                                ebx_62 += var_20_2
                                eax_185 = &arg5[esi_50]
                                edi_44 = var_14_2 + arg3
                            
                            i_2 = arg6
                            arg6 -= 1
                            var_14_2 = edi_44
                            arg5 = eax_185
                        while (i_2 != 1)
                        return eax_185
                else
                    int32_t eax_164
                    int32_t edx_208
                    edx_208:eax_164 = sx.q(arg4 - arg2)
                    void* esi_38 = (eax_164 ^ edx_208) - edx_208
                    int32_t eax_167
                    int32_t edx_209
                    edx_209:eax_167 = sx.q(edi - ecx_3)
                    void* eax_169 = (eax_167 ^ edx_209) - edx_209
                    int32_t var_1c_1
                    int32_t var_14_1
                    void* edx_212
                    int32_t ebx_55
                    int32_t esi_39
                    
                    if (esi_38 s< eax_169)
                        ebx_55 = esi_38 * 2
                        arg6 = eax_169 + 1
                        var_1c_1 = (esi_38 - eax_169) * 2
                        esi_39 = 1
                        edx_212 = ebx_55 - eax_169
                        i_12 = nullptr
                        arg3 = 1
                        var_14_1 = 1
                    else
                        ebx_55 = eax_169 * 2
                        arg6 = esi_38 + 1
                        edx_212 = ebx_55 - esi_38
                        var_1c_1 = (eax_169 - esi_38) * 2
                        i_12 = 1
                        esi_39 = 1
                        arg3 = nullptr
                        var_14_1 = 1
                    
                    if (arg2 s> arg4)
                        i_12 = neg.d(i_12)
                        esi_39 = 0xffffffff
                    
                    if (ecx_3 s> edi)
                        arg3 = neg.d(arg3)
                        var_14_1 = 0xffffffff
                    
                    void* ebx_57 = ecx_3
                    arg5 = ebx_57
                    
                    if (arg11 == 0)
                        arg6 -= 1
                    
                    if (arg6 s> 0)
                        int32_t edi_41 = arg2 * 2
                        int16_t eax_175
                        void* i_3
                        
                        do
                            eax_175 =
                                (var_c u>> 3).w | (((((ebx & 0xfff8) << 5).w | var_8.w) & 0xfff8) * 4)
                            *(*(arg1 + 0x10) * ebx_57 + edi_41 + *(arg1 + 0x14)) = eax_175
                            
                            if (edx_212 s>= 0)
                                edx_212 += var_1c_1
                                edi_41 += esi_39 * 2
                                ebx_57 = arg5 + var_14_1
                            else
                                edx_212 += ebx_55
                                edi_41 += i_12 * 2
                                ebx_57 = arg5 + arg3
                            
                            i_3 = arg6
                            arg6 -= 1
                            arg5 = ebx_57
                        while (i_3 != 1)
                        return eax_175
            else if (arg6 == 1)
                int32_t temp0_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int16_t* ebx_54
                void* i_4
                
                if (ecx_3 s> edi)
                    ebx_54 = *(arg1 + 0x14) + ((temp0_12 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_12 = temp0_12 - 1
                    else
                        i_12 = temp0_12 + 1
                    
                    if (arg11 == 0)
                        ebx_54 = &ebx_54[i_12]
                    
                    i_4 = i_16
                else
                    ebx_54 = *(arg1 + 0x14) + ((temp0_12 * ecx_3 + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_12 = temp0_12 - 1
                        i_4 = edi - ecx_3
                    else
                        i_12 = temp0_12 + 1
                        i_4 = edi - ecx_3
                
                if (arg11 != 0)
                    i_4 += 1
                
                if (i_4 != 0)
                    int16_t eax_159
                    
                    do
                        uint32_t ecx_65 = zx.d(*ebx_54)
                        void* edi_37 = data_8bac74
                        int32_t eax_150
                        int32_t edx_189
                        edx_189:eax_150 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_65 u>> 0xa & 0x1f) + edi_37)) * ecx_2)
                        int32_t eax_153
                        int32_t edx_198
                        edx_198:eax_153 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_65 u>> 5 & 0x1f) + edi_37)) * ecx_2)
                        i_4 -= 1
                        int32_t eax_157
                        int32_t edx_204
                        edx_204:eax_157 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_65 & 0x1f) + edi_37)) * ecx_2)
                        eax_159 = (((((edx_189 u>> 7) + ebx) << 7 & 0xfc1f)
                            | (((edx_198 u>> 7) + var_8) * 4)) & 0xffe0).w
                            | (((edx_204 u>> 7) + var_c) u>> 3).w
                        *ebx_54 = eax_159
                        ebx_54 += i_12 * 2
                    while (i_4 != 0)
                    
                    return eax_159
            else if (arg6 == 2)
                int32_t temp0_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int32_t esi_32 = *(arg1 + 0x14)
                void* ebx_47
                void* i_5
                
                if (ecx_3 s> edi)
                    ebx_47 = esi_32 + ((temp0_11 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_12 = temp0_11 - 1
                    else
                        i_12 = temp0_11 + 1
                    
                    if (arg11 == 0)
                        ebx_47 += i_12 << 1
                    
                    i_5 = i_16
                else
                    ebx_47 = esi_32 + ((temp0_11 * ecx_3 + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_12 = temp0_11 - 1
                        i_5 = edi - ecx_3
                    else
                        i_12 = temp0_11 + 1
                        i_5 = edi - ecx_3
                
                if (arg11 != 0)
                    i_5 += 1
                
                if (i_5 != 0)
                    void* ebx_50 = ebx_47
                    int16_t eax_144
                    
                    do
                        uint32_t eax_133 = zx.d(*ebx_50)
                        void* edx_175 = data_8bac74
                        uint32_t eax_137 = zx.d(*((eax_133 u>> 0xa & 0x1f) + edx_175)) + ebx
                        i_5 -= 1
                        
                        if (eax_137 u> 0xff)
                            eax_137 = 0xff
                        
                        uint32_t esi_35 = zx.d(*((eax_133 u>> 5 & 0x1f) + edx_175)) + var_8
                        
                        if (esi_35 u> 0xff)
                            esi_35 = 0xff
                        
                        uint32_t ecx_62 = zx.d(*((eax_133 & 0x1f) + edx_175)) + var_c
                        
                        if (ecx_62 u> 0xff)
                            ecx_62 = 0xff
                        
                        eax_144 =
                            (((((eax_137 & 0xfff8) << 5).w | esi_35.w) & 0xfff8) * 4) | (ecx_62 u>> 3).w
                        *ebx_50 = eax_144
                        ebx_50 += i_12 * 2
                    while (i_5 != 0)
                    
                    return eax_144
            else if (arg6 == 4)
                int32_t temp0_10 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int32_t esi_30 = *(arg1 + 0x14)
                int16_t* esi_31
                void* i_6
                
                if (ecx_3 s> edi)
                    esi_31 = esi_30 + ((temp0_10 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_12 = temp0_10 - 1
                    else
                        i_12 = temp0_10 + 1
                    
                    if (arg11 == 0)
                        esi_31 = &esi_31[i_12]
                    
                    i_6 = i_16
                else
                    esi_31 = esi_30 + ((temp0_10 * ecx_3 + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_12 = temp0_10 - 1
                        i_6 = edi - ecx_3
                    else
                        i_12 = temp0_10 + 1
                        i_6 = edi - ecx_3
                
                if (arg11 != 0)
                    i_6 += 1
                
                if (i_6 != 0)
                    int32_t eax_128
                    
                    do
                        uint32_t ecx_51 = zx.d(*esi_31)
                        void* ebx_42 = data_8bac74
                        int32_t eax_123
                        int32_t edx_163
                        edx_163:eax_123 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_51 u>> 0xa & 0x1f) + ebx_42)) * ebx)
                        int32_t eax_127
                        int32_t edx_167
                        edx_167:eax_127 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_51 u>> 5 & 0x1f) + ebx_42)) * var_8)
                        int32_t edx_169
                        edx_169:eax_128 =
                            mulu.dp.d(0x80808081, zx.d(*((ecx_51 & 0x1f) + ebx_42)) * var_c)
                        *esi_31 = (((((edx_163 u>> 7 & 0xfff8) << 5).w | (edx_167 u>> 7).w) & 0xfff8)
                            * 4) | (edx_169 u>> 0xa).w
                        i_6 -= 1
                        esi_31 += i_12 * 2
                    while (i_6 != 0)
                    
                    return eax_128
            else
                int32_t temp0_9 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
                int32_t esi_22 = *(arg1 + 0x14)
                int16_t* edx_153
                void* i_24
                
                if (ecx_3 s> edi)
                    edx_153 = esi_22 + ((temp0_9 * edi + arg4) << 1)
                    
                    if (arg4 s> arg2)
                        i_12 = temp0_9 - 1
                    else
                        i_12 = temp0_9 + 1
                    
                    if (arg11 == 0)
                        edx_153 = &edx_153[i_12]
                    
                    i_24 = i_16
                else
                    edx_153 = esi_22 + ((temp0_9 * ecx_3 + arg2) << 1)
                    
                    if (arg2 s> arg4)
                        i_12 = temp0_9 - 1
                        i_24 = edi - ecx_3
                    else
                        i_12 = temp0_9 + 1
                        i_24 = edi - ecx_3
                
                if (arg11 != 0)
                    i_24 += 1
                
                if (i_24 != 0)
                    void* i_7
                    
                    do
                        *edx_153 =
                            (var_c u>> 3).w | (((((ebx & 0xfff8) << 5).w | var_8.w) & 0xfff8) * 4)
                        edx_153 = &edx_153[i_12]
                        i_7 = i_24
                        i_24 -= 1
                    while (i_7 != 1)
                    return i_12 * 2
        else if (arg6 == 1)
            i_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t ebx_26 = *(arg1 + 0x14)
            void* i_8
            int16_t* ebx_27
            
            if (ecx_3 s> edi)
                ebx_27 = ebx_26 + ((i_12 * edi + arg2) << 1)
                
                if (arg11 != 0)
                    i_8 = ecx_3 - edi + 1
                else
                    ebx_27 = &ebx_27[i_12]
                    i_8 = ecx_3 - edi
            else
                void* i_23 = edi - ecx_3
                ebx_27 = ebx_26 + ((i_12 * ecx_3 + arg2) << 1)
                
                if (arg11 == 0)
                    i_8 = i_23
                else
                    i_8 = i_23 + 1
            
            if (i_8 != 0)
                int16_t eax_102
                
                do
                    uint32_t edi_23 = zx.d(*ebx_27)
                    void* ecx_40 = data_8bac74
                    int32_t eax_93
                    int32_t edx_129
                    edx_129:eax_93 =
                        mulu.dp.d(0x80808081, zx.d(*((edi_23 u>> 0xa & 0x1f) + ecx_40)) * ecx_2)
                    int32_t eax_96
                    int32_t edx_136
                    edx_136:eax_96 =
                        mulu.dp.d(0x80808081, zx.d(*((edi_23 u>> 5 & 0x1f) + ecx_40)) * ecx_2)
                    int32_t eax_100
                    int32_t edx_142
                    edx_142:eax_100 =
                        mulu.dp.d(0x80808081, zx.d(*((edi_23 & 0x1f) + data_8bac74)) * ecx_2)
                    i_8 -= 1
                    eax_102 = (((((edx_129 u>> 7) + ebx) << 7 & 0xfc1f)
                        | (((edx_136 u>> 7) + var_8) * 4)) & 0xffe0).w
                        | (((edx_142 u>> 7) + var_c) u>> 3).w
                    *ebx_27 = eax_102
                    ebx_27 += i_12 * 2
                while (i_8 != 0)
                
                return eax_102
        else if (arg6 == 2)
            i_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9)))
            int32_t esi_19 = *(arg1 + 0x14)
            void* i_9
            int16_t* ebx_22
            
            if (ecx_3 s> edi)
                ebx_22 = esi_19 + ((i_12 * edi + arg2) << 1)
                
                if (arg11 != 0)
                    i_9 = ecx_3 - edi + 1
                else
                    ebx_22 = &ebx_22[i_12]
                    i_9 = ecx_3 - edi
            else
                void* i_22 = edi - ecx_3
                ebx_22 = esi_19 + ((i_12 * ecx_3 + arg2) << 1)
                
                if (arg11 == 0)
                    i_9 = i_22
                else
                    i_9 = i_22 + 1
            
            if (i_9 != 0)
                int16_t* ebx_23 = ebx_22
                int16_t eax_88
                
                do
                    uint32_t eax_77 = zx.d(*ebx_23)
                    void* esi_20 = data_8bac74
                    uint32_t eax_81 = zx.d(*((eax_77 u>> 0xa & 0x1f) + esi_20)) + ebx
                    i_9 -= 1
                    
                    if (eax_81 u> 0xff)
                        eax_81 = 0xff
                    
                    uint32_t edi_22 = zx.d(*((eax_77 u>> 5 & 0x1f) + esi_20)) + var_8
                    
                    if (edi_22 u> 0xff)
                        edi_22 = 0xff
                    
                    uint32_t edx_115 = zx.d(*((eax_77 & 0x1f) + esi_20)) + var_c
                    
                    if (edx_115 u> 0xff)
                        edx_115 = 0xff
                    
                    eax_88 =
                        (((((eax_81 & 0xfff8) << 5).w | edi_22.w) & 0xfff8) * 4) | (edx_115 u>> 3).w
                    *ebx_23 = eax_88
                    ebx_23 += i_12 * 2
                while (i_9 != 0)
                
                return eax_88
        else
            uint32_t esi_8 = zx.d(*(*(arg1 + 4) + 9))
            int32_t eax_67
            int32_t edx_74
            edx_74:eax_67 = sx.q(*(arg1 + 0x10))
            
            if (arg6 == 4)
                i_12 = divs.dp.d(edx_74:eax_67, esi_8)
                int32_t esi_14 = *(arg1 + 0x14)
                void* i_10
                int16_t* ebx_21
                
                if (ecx_3 s> edi)
                    ebx_21 = esi_14 + ((i_12 * edi + arg2) << 1)
                    
                    if (arg11 != 0)
                        i_10 = ecx_3 - edi + 1
                    else
                        ebx_21 = &ebx_21[i_12]
                        i_10 = ecx_3 - edi
                else
                    void* i_21 = edi - ecx_3
                    ebx_21 = esi_14 + ((i_12 * ecx_3 + arg2) << 1)
                    
                    if (arg11 == 0)
                        i_10 = i_21
                    else
                        i_10 = i_21 + 1
                
                if (i_10 != 0)
                    int32_t eax_72
                    
                    do
                        uint32_t esi_15 = zx.d(*ebx_21)
                        void* edi_20 = data_8bac74
                        int32_t eax_70
                        int32_t edx_88
                        edx_88:eax_70 =
                            mulu.dp.d(0x80808081, zx.d(*((esi_15 u>> 0xa & 0x1f) + edi_20)) * ebx)
                        int32_t eax_71
                        int32_t edx_95
                        edx_95:eax_71 =
                            mulu.dp.d(0x80808081, zx.d(*((esi_15 u>> 5 & 0x1f) + edi_20)) * var_8)
                        int32_t edx_99
                        edx_99:eax_72 = mulu.dp.d(0x80808081, zx.d(*((esi_15 & 0x1f) + edi_20)) * var_c)
                        *ebx_21 = (((((edx_88 u>> 7 & 0xfff8) << 5).w | (edx_95 u>> 7).w) & 0xfff8) * 4)
                            | (edx_99 u>> 0xa).w
                        i_10 -= 1
                        ebx_21 += i_12 * 2
                    while (i_10 != 0)
                    
                    return eax_72
            else
                i_12 = divs.dp.d(edx_74:eax_67, esi_8)
                int32_t esi_10 = *(arg1 + 0x14)
                void* i_18
                int16_t* edx_78
                
                if (ecx_3 s> edi)
                    edx_78 = esi_10 + ((i_12 * edi + arg2) << 1)
                    
                    if (arg11 != 0)
                        i_18 = ecx_3 - edi + 1
                    else
                        edx_78 = &edx_78[i_12]
                        i_18 = ecx_3 - edi
                else
                    void* i_27 = edi - ecx_3
                    edx_78 = esi_10 + ((i_12 * ecx_3 + arg2) << 1)
                    
                    if (arg11 == 0)
                        i_18 = i_27
                    else
                        i_18 = i_27 + 1
                
                if (i_18 != 0)
                    void* i_11
                    
                    do
                        *edx_78 = (var_c u>> 3).w | (((((ebx & 0xfff8) << 5).w | var_8.w) & 0xfff8) * 4)
                        edx_78 = &edx_78[i_12]
                        i_11 = i_18
                        i_18 -= 1
                    while (i_11 != 1)
                    return i_12 * 2
    else if (arg6 == 1)
        void* eax_48 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_19 = *(arg1 + 0x14)
        int16_t* edi_12
        
        if (arg2 s> arg4)
            edi_12 = ecx_19 + ((eax_48 + arg4) << 1)
            
            if (arg11 != 0)
                i_12 = arg2 - arg4 + 1
            else
                edi_12 = &edi_12[1]
                i_12 = arg2 - arg4
        else
            int16_t* i_19 = arg4 - arg2
            edi_12 = ecx_19 + ((eax_48 + arg2) << 1)
            
            if (arg11 == 0)
                i_12 = i_19
            else
                i_12 = i_19 + 1
        
        if (i_12 != 0)
            do
                uint32_t ecx_20 = zx.d(*edi_12)
                void* ebx_17 = data_8bac74
                int32_t eax_52
                int32_t edx_52
                edx_52:eax_52 = mulu.dp.d(0x80808081, zx.d(*((ecx_20 u>> 0xa & 0x1f) + ebx_17)) * ecx_2)
                edi_12 = &edi_12[1]
                int32_t eax_55
                int32_t edx_61
                edx_61:eax_55 = mulu.dp.d(0x80808081, zx.d(*((ecx_20 u>> 5 & 0x1f) + ebx_17)) * ecx_2)
                int32_t eax_59
                int32_t edx_67
                edx_67:eax_59 = mulu.dp.d(0x80808081, zx.d(*((ecx_20 & 0x1f) + ebx_17)) * ecx_2)
                edi_12[-1] = (((((edx_52 u>> 7) + ebx) << 7 & 0xfc1f) | (((edx_61 u>> 7) + var_8) * 4))
                    & 0xffe0).w | (((edx_67 u>> 7) + var_c) u>> 3).w
                i_12 -= 1
            while (i_12 != 0)
    else if (arg6 == 2)
        void* eax_32 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_10 = *(arg1 + 0x14)
        void* i_13
        int16_t* esi_7
        
        if (arg2 s> arg4)
            i_12 = eax_32 + arg4
            esi_7 = ecx_10 + (i_12 << 1)
            
            if (arg11 != 0)
                i_13 = arg2 - arg4 + 1
            else
                esi_7 = &esi_7[1]
                i_13 = arg2 - arg4
        else
            i_12 = eax_32 + arg2
            i_13 = arg4 - arg2
            esi_7 = ecx_10 + (i_12 << 1)
            
            if (arg11 != 0)
                i_13 += 1
        
        if (i_13 != 0)
            int16_t eax_44
            
            do
                uint32_t eax_33 = zx.d(*esi_7)
                void* edx_41 = data_8bac74
                uint32_t eax_37 = zx.d(*((eax_33 u>> 0xa & 0x1f) + edx_41)) + ebx
                i_13 -= 1
                
                if (eax_37 u> 0xff)
                    eax_37 = 0xff
                
                uint32_t edi_10 = zx.d(*((eax_33 u>> 5 & 0x1f) + edx_41)) + var_8
                
                if (edi_10 u> 0xff)
                    edi_10 = 0xff
                
                uint32_t ecx_17 = zx.d(*((eax_33 & 0x1f) + edx_41)) + var_c
                
                if (ecx_17 u> 0xff)
                    ecx_17 = 0xff
                
                eax_44 = (((((eax_37 & 0xfff8) << 5).w | edi_10.w) & 0xfff8) * 4) | (ecx_17 u>> 3).w
                *esi_7 = eax_44
                esi_7 = &esi_7[1]
            while (i_13 != 0)
            
            return eax_44
    else if (arg6 == 4)
        void* eax_19 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_5 = *(arg1 + 0x14)
        int16_t* esi_5
        
        if (arg2 s> arg4)
            esi_5 = ecx_5 + ((eax_19 + arg4) << 1)
            
            if (arg11 != 0)
                i_12 = arg2 - arg4 + 1
            else
                esi_5 = &esi_5[1]
                i_12 = arg2 - arg4
        else
            int16_t* i_20 = arg4 - arg2
            esi_5 = ecx_5 + ((eax_19 + arg2) << 1)
            
            if (arg11 == 0)
                i_12 = i_20
            else
                i_12 = i_20 + 1
        
        if (i_12 != 0)
            do
                uint32_t ecx_6 = zx.d(*esi_5)
                void* edi_6 = data_8bac74
                int32_t eax_23
                int32_t edx_27
                edx_27:eax_23 = mulu.dp.d(0x80808081, zx.d(*((ecx_6 u>> 0xa & 0x1f) + edi_6)) * ebx)
                int32_t eax_27
                int32_t edx_31
                edx_31:eax_27 = mulu.dp.d(0x80808081, zx.d(*((ecx_6 u>> 5 & 0x1f) + edi_6)) * var_8)
                int32_t eax_28
                int32_t edx_33
                edx_33:eax_28 = mulu.dp.d(0x80808081, zx.d(*((ecx_6 & 0x1f) + edi_6)) * var_c)
                i_12 -= 1
                *esi_5 = (((((edx_27 u>> 7 & 0xfff8) << 5).w | (edx_31 u>> 7).w) & 0xfff8) * 4)
                    | (edx_33 u>> 0xa).w
                esi_5 = &esi_5[1]
            while (i_12 != 0)
    else
        void* eax_13 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(*(arg1 + 4) + 9))) * ecx_3
        int32_t ecx_4 = *(arg1 + 0x14)
        void* i_17
        
        if (arg2 s> arg4)
            i_12 = ecx_4 + ((eax_13 + arg4) << 1)
            
            if (arg11 != 0)
                i_17 = arg2 - arg4 + 1
            else
                i_12 = &i_12[1]
                i_17 = arg2 - arg4
        else
            void* i_26 = arg4 - arg2
            i_12 = ecx_4 + ((eax_13 + arg2) << 1)
            
            if (arg11 == 0)
                i_17 = i_26
            else
                i_17 = i_26 + 1
        
        if (i_17 != 0)
            void* i_14
            
            do
                *i_12 = (var_c u>> 3).w | ((((ebx & 0xfff8) << 5 | var_8) & 0xfff8) << 2).w
                i_12 = &i_12[1]
                i_14 = i_17
                i_17 -= 1
            while (i_14 != 1)
    
    return i_12
}

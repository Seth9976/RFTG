// 函数名称: sub_6368f0
// 虚拟地址: 0x6368f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6368f0(void* arg1, void* arg2, void* arg3, void* arg4, uint32_t arg5, void* arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
{
    // 第一条实际指令: void* esi = *(arg1 + 4)
    void* esi = *(arg1 + 4)
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    uint32_t ecx_1
    
    if (arg6 == 1 || arg6 == 2)
        ecx_1 = zx.d(arg10)
        var_c = zx.d(arg7) * ecx_1 u/ 0xff
        var_10 = zx.d(arg8) * ecx_1 u/ 0xff
        var_8 = zx.d(arg9) * ecx_1 u/ 0xff
    else
        var_c = zx.d(arg7)
        ecx_1 = zx.d(arg10)
        var_10 = zx.d(arg8)
        var_8 = zx.d(arg9)
    
    uint32_t ebx = arg5
    int32_t ecx_2 = ecx_1 ^ 0xff
    uint32_t ecx_3 = arg3
    void* i_10
    
    if (ecx_3 != ebx)
        if (arg2 != arg4)
            void* i_13 = ecx_3 - ebx
            int32_t eax_131
            int32_t edx_146
            edx_146:eax_131 = sx.q(arg2 - arg4)
            int32_t eax_133
            int32_t edx_147
            edx_147:eax_133 = sx.q(i_13)
            
            if ((eax_131 ^ edx_146) - edx_146 == (eax_133 ^ edx_147) - edx_147)
                uint32_t ebx_30 = zx.d(*(esi + 9))
                
                if (arg6 == 1)
                    int32_t temp0_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), ebx_30)
                    uint32_t i_20
                    
                    if (ecx_3 s> arg5)
                        void* edx_201 = *(arg1 + 0x14) + ((temp0_12 * arg5 + arg4) << 1)
                        arg6 = edx_201
                        
                        if (arg4 s> arg2)
                            i_10 = temp0_12 - 1
                        else
                            i_10 = temp0_12 + 1
                        
                        if (arg11 == 0)
                            arg6 = edx_201 + (i_10 << 1)
                        
                        i_20 = i_13
                    else
                        arg6 = *(arg1 + 0x14) + ((temp0_12 * ecx_3 + arg2) << 1)
                        
                        if (arg2 s> arg4)
                            i_10 = temp0_12 - 1
                            i_20 = arg5 - ecx_3
                        else
                            i_10 = temp0_12 + 1
                            i_20 = arg5 - ecx_3
                    
                    arg5 = i_20
                    
                    if (arg11 != 0)
                        i_20 += 1
                        arg5 = i_20
                    
                    if (i_20 != 0)
                        void* eax_184
                        
                        do
                            uint32_t ebx_57 = zx.d(*arg6)
                            arg5 -= 1
                            int32_t eax_172
                            int32_t edx_206
                            edx_206:eax_172 = mulu.dp.d(0x80808081, 
                                zx.d(*(((ebx_57 & *(esi + 0xc)) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                            arg1:2.w = (((edx_206 u>> 7) + var_c) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            int32_t eax_179
                            int32_t edx_210
                            edx_210:eax_179 = mulu.dp.d(0x80808081, 
                                zx.d(*(((ebx_57 & *(esi + 0x10)) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ecx_2)
                            uint32_t ecx_170 = zx.d(*(esi + 0x1e))
                            arg1:2.w |=
                                (((edx_210 u>> 7) + var_10) u>> *(esi + 0x1d)).w << *(esi + 0x21)
                            int32_t eax_181
                            int32_t edx_217
                            edx_217:eax_181 = mulu.dp.d(0x80808081, 
                                zx.d(*(((ebx_57 & *(esi + 0x14)) u>> *(esi + 0x22))
                                    + (&data_8bac68)[ecx_170])) * ecx_2)
                            *arg6 = arg1:2.w
                                | (((edx_217 u>> 7) + var_8) u>> ecx_170.b).w << *(esi + 0x22)
                                | *(esi + 0x18)
                            eax_184 = arg6 + i_10 * 2
                            arg6 = eax_184
                        while (arg5 != 0)
                        
                        return eax_184
                else if (arg6 == 2)
                    int32_t temp0_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), ebx_30)
                    int16_t* ebx_49
                    
                    if (ecx_3 s> arg5)
                        ebx_49 = *(arg1 + 0x14) + ((temp0_11 * arg5 + arg4) << 1)
                        
                        if (arg4 s> arg2)
                            i_10 = temp0_11 - 1
                        else
                            i_10 = temp0_11 + 1
                        
                        if (arg11 == 0)
                            ebx_49 = &ebx_49[i_10]
                        
                        arg1 = i_13
                    else
                        ebx_49 = *(arg1 + 0x14) + ((temp0_11 * ecx_3 + arg2) << 1)
                        
                        if (arg2 s> arg4)
                            i_10 = temp0_11 - 1
                            arg1 = arg5 - ecx_3
                        else
                            i_10 = temp0_11 + 1
                            arg1 = arg5 - ecx_3
                    
                    if (arg11 != 0)
                        arg1 += 1
                    
                    if (arg1 != 0)
                        uint16_t eax_165
                        
                        do
                            uint32_t eax_160 = zx.d(*ebx_49)
                            arg1 -= 1
                            uint32_t eax_164 = zx.d(*(((eax_160 & *(esi + 0xc)) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                            
                            if (eax_164 u> 0xff)
                                eax_164 = 0xff
                            
                            uint32_t edi_52 = zx.d(*(((eax_160 & *(esi + 0x10)) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                            
                            if (edi_52 u> 0xff)
                                edi_52 = 0xff
                            
                            uint32_t edx_187 = zx.d(*(((eax_160 & *(esi + 0x14)) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                            
                            if (edx_187 u> 0xff)
                                edx_187 = 0xff
                            
                            eax_165 = (eax_164 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                | (edi_52 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (edx_187 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                            eax_165 |= *(esi + 0x18)
                            *ebx_49 = eax_165
                            ebx_49 = &ebx_49[i_10]
                        while (arg1 != 0)
                        
                        return eax_165
                else
                    int32_t eax_140
                    int32_t edx_148
                    edx_148:eax_140 = sx.q(*(arg1 + 0x10))
                    
                    if (arg6 == 4)
                        int32_t temp0_10 = divs.dp.d(edx_148:eax_140, ebx_30)
                        void* ebx_43
                        
                        if (ecx_3 s> arg5)
                            ebx_43 = *(arg1 + 0x14) + ((temp0_10 * arg5 + arg4) << 1)
                            
                            if (arg4 s> arg2)
                                i_10 = temp0_10 - 1
                            else
                                i_10 = temp0_10 + 1
                            
                            if (arg11 == 0)
                                ebx_43 += i_10 << 1
                            
                            arg5 = i_13
                        else
                            ebx_43 = *(arg1 + 0x14) + ((temp0_10 * ecx_3 + arg2) << 1)
                            
                            if (arg2 s> arg4)
                                i_10 = temp0_10 - 1
                                arg5 -= ecx_3
                            else
                                i_10 = temp0_10 + 1
                                arg5 -= ecx_3
                        
                        if (arg11 != 0)
                            arg5 += 1
                        
                        if (arg5 != 0)
                            int16_t eax_156
                            
                            do
                                uint32_t edi_43 = zx.d(*ebx_43)
                                arg5 -= 1
                                int32_t eax_148
                                int32_t edx_162
                                edx_162:eax_148 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & edi_43) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_c)
                                arg1:2.w = (edx_162 u>> 7 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                int32_t eax_153
                                int32_t edx_167
                                edx_167:eax_153 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & edi_43) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_10)
                                uint32_t ecx_139 = zx.d(*(esi + 0x1e))
                                arg1:2.w |= (edx_167 u>> 7 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                int32_t eax_155
                                int32_t edx_173
                                edx_173:eax_155 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((edi_43 & *(esi + 0x14)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[ecx_139])) * var_8)
                                eax_156 = arg1:2.w | (edx_173 u>> 7 u>> ecx_139.b).w << *(esi + 0x22)
                                    | *(esi + 0x18)
                                *ebx_43 = eax_156
                                ebx_43 += i_10 * 2
                            while (arg5 != 0)
                            
                            return eax_156
                    else
                        int32_t temp0_9 = divs.dp.d(edx_148:eax_140, ebx_30)
                        void* i_11
                        uint16_t* edi_40
                        
                        if (ecx_3 s> arg5)
                            edi_40 = *(arg1 + 0x14) + ((temp0_9 * arg5 + arg4) << 1)
                            
                            if (arg4 s> arg2)
                                i_10 = temp0_9 - 1
                            else
                                i_10 = temp0_9 + 1
                            
                            if (arg11 == 0)
                                edi_40 = &edi_40[i_10]
                            
                            i_11 = i_13
                        else
                            edi_40 = *(arg1 + 0x14) + ((temp0_9 * ecx_3 + arg2) << 1)
                            
                            if (arg2 s> arg4)
                                i_10 = temp0_9 - 1
                                i_11 = arg5 - ecx_3
                            else
                                i_10 = temp0_9 + 1
                                i_11 = arg5 - ecx_3
                        
                        if (arg11 != 0)
                            i_11 += 1
                        
                        if (i_11 != 0)
                            uint16_t eax_144
                            void* i
                            
                            do
                                eax_144 = (var_8 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (var_10 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                    | (var_c u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                eax_144 |= *(esi + 0x18)
                                *edi_40 = eax_144
                                edi_40 += i_10 * 2
                                i = i_11
                                i_11 -= 1
                            while (i != 1)
                            return eax_144
            else if (arg6 == 1)
                int32_t eax_249
                int32_t edx_266
                edx_266:eax_249 = sx.q(arg4 - arg2)
                void* ebx_88 = (eax_249 ^ edx_266) - edx_266
                int32_t eax_252
                int32_t edx_267
                edx_267:eax_252 = sx.q(arg5 - ecx_3)
                void* eax_254 = (eax_252 ^ edx_267) - edx_267
                int32_t var_24_3
                int32_t var_20_2
                int32_t var_1c_4
                int32_t var_18_4
                void* const edx_272
                
                if (ebx_88 s< eax_254)
                    arg3 = eax_254 + 1
                    arg6 = ebx_88 * 2 - eax_254
                    var_24_3 = ebx_88 * 2
                    edx_272 = 1
                    var_20_2 = (ebx_88 - eax_254) * 2
                    i_10 = nullptr
                    var_18_4 = 1
                    var_1c_4 = 1
                else
                    arg3 = ebx_88 + 1
                    arg6 = eax_254 * 2 - ebx_88
                    var_20_2 = (eax_254 - ebx_88) * 2
                    i_10 = 1
                    var_24_3 = eax_254 * 2
                    edx_272 = 1
                    var_18_4 = 0
                    var_1c_4 = 1
                
                if (arg2 s> arg4)
                    i_10 = neg.d(i_10)
                    edx_272 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    var_18_4 = neg.d(var_18_4)
                    var_1c_4 = 0xffffffff
                
                uint32_t var_14_4 = ecx_3
                void* i_16 = arg3
                
                if (arg11 == 0)
                    i_16 -= 1
                
                if (i_16 s> 0)
                    void* i_14 = i_10 * 2
                    arg3 = arg2 * 2
                    void* i_7 = i_16
                    void* i_1
                    
                    do
                        void* ebx_99 = *(arg1 + 0x10) * var_14_4 + arg3 + *(arg1 + 0x14)
                        uint32_t eax_258 = zx.d(*ebx_99)
                        int32_t eax_261
                        int32_t edx_281
                        edx_281:eax_261 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & eax_258) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ecx_2)
                        arg5:2.w = (((edx_281 u>> 7) + var_8) u>> *(esi + 0x1e)).w << *(esi + 0x22)
                        int32_t eax_268
                        int32_t edx_285
                        edx_285:eax_268 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & eax_258) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                        arg5:2.w |= (((edx_285 u>> 7) + var_c) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                        int32_t eax_272
                        int32_t edx_292
                        edx_292:eax_272 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & eax_258) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ecx_2)
                        *ebx_99 = arg5:2.w
                            | (((edx_292 u>> 7) + var_10) u>> *(esi + 0x1d)).w << *(esi + 0x21)
                            | *(esi + 0x18)
                        int32_t ecx_231
                        int32_t edx_296
                        
                        if (arg6 s>= 0)
                            edx_296 = var_20_2
                            i_10 = edx_272 * 2
                            ecx_231 = var_1c_4
                        else
                            edx_296 = var_24_3
                            i_10 = i_14
                            ecx_231 = var_18_4
                        
                        arg6 += edx_296
                        arg3 += i_10
                        var_14_4 += ecx_231
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
            else if (arg6 == 2)
                int32_t eax_227
                int32_t edx_254
                edx_254:eax_227 = sx.q(arg4 - arg2)
                int32_t edi_77 = (eax_227 ^ edx_254) - edx_254
                int32_t eax_230
                int32_t edx_255
                edx_255:eax_230 = sx.q(arg5 - ecx_3)
                int32_t eax_232 = (eax_230 ^ edx_255) - edx_255
                int32_t var_28_2
                int32_t var_24_2
                int32_t i_19
                int32_t var_14_3
                int32_t edx_258
                void* ebx_77
                int32_t edi_78
                
                if (edi_77 s< eax_232)
                    i_19 = eax_232 + 1
                    int32_t edx_260 = edi_77 * 2
                    var_24_2 = (edi_77 - eax_232) * 2
                    edi_78 = 1
                    ebx_77 = edx_260 - eax_232
                    var_28_2 = edx_260
                    i_10 = nullptr
                    edx_258 = 1
                    var_14_3 = 1
                else
                    i_19 = edi_77 + 1
                    int32_t edx_257 = eax_232 * 2
                    var_28_2 = edx_257
                    edx_258 = 1
                    ebx_77 = edx_257 - edi_77
                    var_24_2 = (eax_232 - edi_77) * 2
                    i_10 = 1
                    edi_78 = 0
                    var_14_3 = 1
                
                arg6 = ebx_77
                int32_t var_18_3 = edi_78
                
                if (arg2 s> arg4)
                    i_10 = neg.d(i_10)
                    edx_258 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    var_18_3 = neg.d(edi_78)
                    var_14_3 = 0xffffffff
                
                int32_t i_18 = i_19
                arg3 = ecx_3
                
                if (arg11 == 0)
                    i_18 -= 1
                
                if (i_18 s> 0)
                    uint32_t edi_83 = arg2 * 2
                    arg5 = edi_83
                    int32_t i_9 = i_18
                    void* eax_246
                    int32_t i_2
                    
                    do
                        int16_t* edx_265 = *(arg1 + 0x10) * ecx_3 + edi_83 + *(arg1 + 0x14)
                        uint32_t eax_237 = zx.d(*edx_265)
                        uint32_t eax_243 = zx.d(*(((*(esi + 0xc) & eax_237) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                        
                        if (eax_243 u> 0xff)
                            eax_243 = 0xff
                        
                        uint32_t ebx_84 = zx.d(*(((*(esi + 0x10) & eax_237) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                        
                        if (ebx_84 u> 0xff)
                            ebx_84 = 0xff
                        
                        uint32_t edi_89 = zx.d(*(((*(esi + 0x14) & eax_237) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                        
                        if (edi_89 u> 0xff)
                            edi_89 = 0xff
                        
                        uint16_t eax_244 = (eax_243 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            | (ebx_84 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                            | (edi_89 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                        *edx_265 = eax_244 | *(esi + 0x18)
                        
                        if (arg6 s>= 0)
                            eax_246 = arg6 + var_24_2
                            edi_83 = arg5 + edx_258 * 2
                            ecx_3 = arg3 + var_14_3
                        else
                            eax_246 = arg6 + var_28_2
                            edi_83 = arg5 + i_10 * 2
                            ecx_3 = arg3 + var_18_3
                        
                        i_2 = i_9
                        i_9 -= 1
                        arg3 = ecx_3
                        arg5 = edi_83
                        arg6 = eax_246
                    while (i_2 != 1)
                    return eax_246
            else if (arg6 == 4)
                int32_t eax_201
                int32_t edx_228
                edx_228:eax_201 = sx.q(arg4 - arg2)
                void* edi_65 = (eax_201 ^ edx_228) - edx_228
                int32_t eax_204
                int32_t edx_229
                edx_229:eax_204 = sx.q(arg5 - ecx_3)
                void* eax_206 = (eax_204 ^ edx_229) - edx_229
                int32_t var_24_1
                int32_t var_20_1
                int32_t var_1c_2
                int32_t edx_232
                void* ebx_71
                int32_t edi_66
                
                if (edi_65 s< eax_206)
                    arg3 = eax_206 + 1
                    int32_t edx_234 = edi_65 * 2
                    var_24_1 = (edi_65 - eax_206) * 2
                    edi_66 = 1
                    ebx_71 = edx_234 - eax_206
                    var_20_1 = edx_234
                    i_10 = nullptr
                    edx_232 = 1
                    var_1c_2 = 1
                else
                    arg3 = edi_65 + 1
                    int32_t edx_231 = eax_206 * 2
                    var_20_1 = edx_231
                    edx_232 = 1
                    ebx_71 = edx_231 - edi_65
                    var_24_1 = (eax_206 - edi_65) * 2
                    i_10 = 1
                    edi_66 = 0
                    var_1c_2 = 1
                
                arg6 = ebx_71
                int32_t var_18_2 = edi_66
                
                if (arg2 s> arg4)
                    i_10 = neg.d(i_10)
                    edx_232 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    var_18_2 = neg.d(edi_66)
                    var_1c_2 = 0xffffffff
                
                uint32_t var_14_2 = ecx_3
                void* i_15 = arg3
                
                if (arg11 == 0)
                    i_15 -= 1
                
                if (i_15 s> 0)
                    arg3 = arg2 * 2
                    void* i_8 = i_15
                    int32_t eax_224
                    void* i_3
                    
                    do
                        void* edi_74 = *(arg1 + 0x10) * var_14_2 + arg3 + *(arg1 + 0x14)
                        uint32_t ebx_74 = zx.d(*edi_74)
                        int32_t eax_213
                        int32_t edx_239
                        edx_239:eax_213 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & ebx_74) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_8)
                        arg5:2.w = (edx_239 u>> 7 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                        int32_t eax_218
                        int32_t edx_244
                        edx_244:eax_218 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & ebx_74) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_c)
                        char ebx_75 = *(esi + 0x21)
                        arg5:2.w |= (edx_244 u>> 7 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                        int32_t eax_222
                        int32_t edx_250
                        edx_250:eax_222 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & ebx_74) u>> ebx_75)
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_10)
                        *edi_74 =
                            arg5:2.w | (edx_250 u>> 7 u>> *(esi + 0x1d)).w << ebx_75 | *(esi + 0x18)
                        int32_t ecx_199
                        int32_t edx_253
                        
                        if (arg6 s>= 0)
                            edx_253 = var_24_1
                            eax_224 = edx_232 * 2
                            ecx_199 = var_1c_2
                        else
                            edx_253 = var_20_1
                            eax_224 = i_10 * 2
                            ecx_199 = var_18_2
                        
                        arg6 += edx_253
                        arg3 += eax_224
                        var_14_2 += ecx_199
                        i_3 = i_8
                        i_8 -= 1
                    while (i_3 != 1)
                    return eax_224
            else
                int32_t eax_189
                int32_t edx_221
                edx_221:eax_189 = sx.q(arg4 - arg2)
                void* edi_56 = (eax_189 ^ edx_221) - edx_221
                int32_t eax_192
                int32_t edx_222
                edx_222:eax_192 = sx.q(arg5 - ecx_3)
                void* eax_194 = (eax_192 ^ edx_222) - edx_222
                int32_t var_1c_1
                int32_t var_14_1
                void* edx_225
                int32_t ebx_61
                int32_t edi_57
                
                if (edi_56 s< eax_194)
                    int32_t ebx_62 = edi_56 * 2
                    arg3 = eax_194 + 1
                    var_1c_1 = ebx_62
                    ebx_61 = 1
                    edx_225 = ebx_62 - eax_194
                    var_14_1 = (edi_56 - eax_194) * 2
                    edi_57 = 0
                    arg6 = 1
                else
                    int32_t ebx_60 = eax_194 * 2
                    arg3 = edi_56 + 1
                    edx_225 = ebx_60 - edi_56
                    edi_57 = 1
                    var_1c_1 = ebx_60
                    var_14_1 = (eax_194 - edi_56) * 2
                    ebx_61 = 1
                    arg6 = nullptr
                
                i_10 = arg2
                void* var_18_1 = 1
                
                if (i_10 s> arg4)
                    edi_57 = neg.d(edi_57)
                    ebx_61 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    i_10 = neg.d(arg6)
                    arg6 = i_10
                    var_18_1 = 0xffffffff
                
                arg5 = ecx_3
                void* ecx_172 = arg3
                
                if (arg11 == 0)
                    ecx_172 -= 1
                
                if (ecx_172 s> 0)
                    int32_t eax_199 = arg2 * 2
                    arg3 = ecx_172
                    void* i_4
                    
                    do
                        uint16_t edi_62 = (var_8 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                            | (var_10 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                            | (var_c u>> *(esi + 0x1c)).w << *(esi + 0x20)
                        *(*(arg1 + 0x10) * arg5 + eax_199 + *(arg1 + 0x14)) = edi_62 | *(esi + 0x18)
                        void* ecx_183
                        
                        if (edx_225 s>= 0)
                            edx_225 += var_14_1
                            eax_199 += ebx_61 * 2
                            ecx_183 = var_18_1
                        else
                            edx_225 += var_1c_1
                            eax_199 += edi_57 * 2
                            ecx_183 = arg6
                        
                        arg5 += ecx_183
                        i_4 = arg3
                        arg3 -= 1
                    while (i_4 != 1)
                    return eax_199
        else if (arg6 == 1)
            int32_t temp0_8 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(esi + 9)))
            int32_t ebx_22 = *(arg1 + 0x14)
            arg3 = temp0_8
            uint32_t ecx_103
            
            if (ecx_3 s> arg5)
                i_10 = ebx_22 + ((temp0_8 * arg5 + arg2) << 1)
                arg6 = i_10
                
                if (arg11 != 0)
                    ecx_103 = ecx_3 - arg5 + 1
                else
                    i_10 += arg3 << 1
                    arg6 = i_10
                    ecx_103 = ecx_3 - arg5
                
                arg5 = ecx_103
            else
                uint32_t edx_126 = arg5 - ecx_3
                i_10 = ebx_22 + ((temp0_8 * ecx_3 + arg2) << 1)
                arg6 = i_10
                
                if (arg11 == 0)
                    ecx_103 = edx_126
                    arg5 = edx_126
                else
                    ecx_103 = edx_126 + 1
                    arg5 = ecx_103
            
            if (ecx_103 != 0)
                void* eax_127
                
                do
                    uint32_t ebx_24 = zx.d(*arg6)
                    arg5 -= 1
                    int32_t eax_115
                    int32_t edx_131
                    edx_131:eax_115 = mulu.dp.d(0x80808081, 
                        zx.d(*(((*(esi + 0xc) & ebx_24) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                    arg1:2.w = (((edx_131 u>> 7) + var_c) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                    int32_t eax_122
                    int32_t edx_135
                    edx_135:eax_122 = mulu.dp.d(0x80808081, 
                        zx.d(*(((*(esi + 0x10) & ebx_24) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ecx_2)
                    uint32_t ecx_116 = zx.d(*(esi + 0x1e))
                    arg1:2.w |= (((edx_135 u>> 7) + var_10) u>> *(esi + 0x1d)).w << *(esi + 0x21)
                    int32_t eax_124
                    int32_t edx_142
                    edx_142:eax_124 = mulu.dp.d(0x80808081, 
                        zx.d(*(((ebx_24 & *(esi + 0x14)) u>> *(esi + 0x22)) + (&data_8bac68)[ecx_116]))
                            * ecx_2)
                    uint16_t* eax_126 = arg6
                    *eax_126 = arg1:2.w | (((edx_142 u>> 7) + var_8) u>> ecx_116.b).w << *(esi + 0x22)
                        | *(esi + 0x18)
                    eax_127 = eax_126 + arg3 * 2
                    arg6 = eax_127
                while (arg5 != 0)
                
                return eax_127
        else
            uint32_t edi_19 = zx.d(*(esi + 9))
            
            if (arg6 == 2)
                i_10 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_19)
                int32_t edi_31 = *(arg1 + 0x14)
                
                if (ecx_3 s> ebx)
                    uint32_t edx_113 = edi_31 + ((i_10 * ebx + arg2) << 1)
                    arg5 = edx_113
                    void* ecx_84
                    
                    if (arg11 != 0)
                        ecx_84 = ecx_3 - ebx + 1
                    else
                        arg5 = edx_113 + (i_10 << 1)
                        ecx_84 = ecx_3 - ebx
                    
                    arg1 = ecx_84
                else
                    void* ebx_18 = ebx - ecx_3
                    arg5 = edi_31 + ((i_10 * ecx_3 + arg2) << 1)
                    
                    if (arg11 != 0)
                        ebx_18 += 1
                    
                    arg1 = ebx_18
                
                if (arg1 != 0)
                    uint16_t eax_104
                    
                    do
                        uint32_t eax_97 = zx.d(*arg5)
                        char ebx_19 = *(esi + 0x21)
                        arg1 -= 1
                        uint32_t eax_103 = zx.d(*(((*(esi + 0xc) & eax_97) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                        
                        if (eax_103 u> 0xff)
                            eax_103 = 0xff
                        
                        uint32_t edi_36 = zx.d(*(((*(esi + 0x10) & eax_97) u>> ebx_19)
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                        
                        if (edi_36 u> 0xff)
                            edi_36 = 0xff
                        
                        uint32_t edx_121 = zx.d(*(((eax_97 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                        
                        if (edx_121 u> 0xff)
                            edx_121 = 0xff
                        
                        eax_104 = (eax_103 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            | (edi_36 u>> *(esi + 0x1d)).w << ebx_19
                            | (edx_121 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                        eax_104 |= *(esi + 0x18)
                        *arg5 = eax_104
                        arg5 += i_10 * 2
                    while (arg1 != 0)
                    
                    return eax_104
            else
                int32_t eax_75
                int32_t edx_72
                edx_72:eax_75 = sx.q(*(arg1 + 0x10))
                
                if (arg6 == 4)
                    i_10 = divs.dp.d(edx_72:eax_75, edi_19)
                    int32_t edi_27 = *(arg1 + 0x14)
                    
                    if (ecx_3 s> ebx)
                        void* edx_85 = edi_27 + ((i_10 * ebx + arg2) << 1)
                        arg6 = edx_85
                        uint32_t ecx_68
                        
                        if (arg11 != 0)
                            ecx_68 = ecx_3 - ebx + 1
                        else
                            arg6 = edx_85 + (i_10 << 1)
                            ecx_68 = ecx_3 - ebx
                        
                        arg5 = ecx_68
                    else
                        uint32_t ebx_15 = ebx - ecx_3
                        arg6 = edi_27 + ((i_10 * ecx_3 + arg2) << 1)
                        
                        if (arg11 != 0)
                            ebx_15 += 1
                        
                        arg5 = ebx_15
                    
                    if (arg5 != 0)
                        void* eax_92
                        
                        do
                            uint32_t edi_28 = zx.d(*arg6)
                            char ebx_16 = *(esi + 0x22)
                            int32_t eax_82
                            int32_t edx_90
                            edx_90:eax_82 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & edi_28) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_c)
                            arg1:2.w = (edx_90 u>> 7 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            int32_t eax_87
                            int32_t edx_95
                            edx_95:eax_87 = mulu.dp.d(0x80808081, 
                                zx.d(*(((edi_28 & *(esi + 0x14)) u>> ebx_16)
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_8)
                            arg5 -= 1
                            uint16_t edi_29 = zx.w(*(esi + 0x21))
                            uint32_t ecx_81 = zx.d(*(esi + 0x1d))
                            arg1:2.w |= (edx_95 u>> 7 u>> *(esi + 0x1e)).w << ebx_16
                            int32_t eax_89
                            int32_t edx_103
                            edx_103:eax_89 = mulu.dp.d(0x80808081, 
                                zx.d(
                                    *(((*(esi + 0x10) & edi_28) u>> edi_29.b) + (&data_8bac68)[ecx_81]))
                                    * var_10)
                            uint16_t* eax_91 = arg6
                            *eax_91 =
                                arg1:2.w | (edx_103 u>> 7 u>> ecx_81.b).w << edi_29.b | *(esi + 0x18)
                            eax_92 = eax_91 + i_10 * 2
                            arg6 = eax_92
                        while (arg5 != 0)
                        
                        return eax_92
                else
                    i_10 = divs.dp.d(edx_72:eax_75, edi_19)
                    int32_t edi_21 = *(arg1 + 0x14)
                    uint16_t* edx_76
                    uint32_t i_12
                    
                    if (ecx_3 s> ebx)
                        edx_76 = edi_21 + ((i_10 * ebx + arg2) << 1)
                        
                        if (arg11 != 0)
                            i_12 = ecx_3 - ebx + 1
                        else
                            edx_76 = &edx_76[i_10]
                            i_12 = ecx_3 - ebx
                    else
                        i_12 = ebx - ecx_3
                        edx_76 = edi_21 + ((i_10 * ecx_3 + arg2) << 1)
                        
                        if (arg11 != 0)
                            i_12 += 1
                    
                    if (i_12 != 0)
                        uint16_t eax_78
                        uint32_t i_5
                        
                        do
                            eax_78 = (var_8 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (var_10 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (var_c u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            eax_78 |= *(esi + 0x18)
                            *edx_76 = eax_78
                            edx_76 += i_10 * 2
                            i_5 = i_12
                            i_12 -= 1
                        while (i_5 != 1)
                        return eax_78
    else if (arg6 == 1)
        void* eax_51 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(esi + 9))) * ecx_3
        int32_t ecx_43 = *(arg1 + 0x14)
        
        if (arg2 s> arg4)
            i_10 = ecx_43 + ((eax_51 + arg4) << 1)
            arg6 = i_10
            uint32_t edx_50
            
            if (arg11 != 0)
                edx_50 = arg2 - arg4 + 1
            else
                arg6 += 2
                edx_50 = arg2 - arg4
            
            arg5 = edx_50
        else
            i_10 = ecx_43 + ((eax_51 + arg2) << 1)
            uint32_t ebx_12 = arg4 - arg2
            arg6 = i_10
            
            if (arg11 != 0)
                ebx_12 += 1
            
            arg5 = ebx_12
        
        if (arg5 != 0)
            uint16_t* eax_69
            
            do
                uint32_t ebx_13 = zx.d(*arg6)
                arg5 -= 1
                int32_t eax_56
                int32_t edx_54
                edx_54:eax_56 = mulu.dp.d(0x80808081, 
                    zx.d(*(((*(esi + 0xc) & ebx_13) u>> *(esi + 0x20))
                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                arg1:2.w = (((edx_54 u>> 7) + var_c) u>> *(esi + 0x1c)).w << *(esi + 0x20)
                int32_t eax_63
                int32_t edx_58
                edx_58:eax_63 = mulu.dp.d(0x80808081, 
                    zx.d(*(((ebx_13 & *(esi + 0x14)) u>> *(esi + 0x22))
                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ecx_2)
                uint16_t ebx_14 = zx.w(*(esi + 0x21))
                arg1:2.w |= (((edx_58 u>> 7) + var_8) u>> *(esi + 0x1e)).w << *(esi + 0x22)
                int32_t eax_67
                int32_t edx_65
                edx_65:eax_67 = mulu.dp.d(0x80808081, 
                    zx.d(*
                        (((*(esi + 0x10) & ebx_13) u>> ebx_14.b) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                        * ecx_2)
                eax_69 = arg6
                *eax_69 = arg1:2.w | (((edx_65 u>> 7) + var_10) u>> *(esi + 0x1d)).w << ebx_14.b
                    | *(esi + 0x18)
                arg6 = &eax_69[1]
            while (arg5 != 0)
            
            return &eax_69[1]
    else
        uint32_t edi_1 = zx.d(*(esi + 9))
        
        if (arg6 == 2)
            void* eax_37 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_1) * ecx_3
            int32_t ecx_27 = *(arg1 + 0x14)
            int16_t* ebx_9
            
            if (arg2 s> arg4)
                i_10 = eax_37 + arg4
                ebx_9 = ecx_27 + (i_10 << 1)
                void* edx_39
                
                if (arg11 != 0)
                    edx_39 = arg2 - arg4 + 1
                else
                    ebx_9 = &ebx_9[1]
                    edx_39 = arg2 - arg4
                
                arg1 = edx_39
            else
                i_10 = eax_37 + arg2
                void* edi_11 = arg4 - arg2
                ebx_9 = ecx_27 + (i_10 << 1)
                
                if (arg11 != 0)
                    edi_11 += 1
                
                arg1 = edi_11
            
            if (arg1 != 0)
                uint16_t eax_47
                
                do
                    uint32_t edx_40 = zx.d(*ebx_9)
                    arg1 -= 1
                    uint32_t edx_44 = zx.d(*(((*(esi + 0xc) & edx_40) u>> *(esi + 0x20))
                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                    
                    if (edx_44 u> 0xff)
                        edx_44 = 0xff
                    
                    uint32_t edi_17 = zx.d(*(((*(esi + 0x10) & edx_40) u>> *(esi + 0x21))
                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                    
                    if (edi_17 u> 0xff)
                        edi_17 = 0xff
                    
                    uint32_t eax_46 = zx.d(*(((edx_40 & *(esi + 0x14)) u>> *(esi + 0x22))
                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                    
                    if (eax_46 u> 0xff)
                        eax_46 = 0xff
                    
                    ebx_9 = &ebx_9[1]
                    eax_47 = (eax_46 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                        | (edx_44 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                        | (edi_17 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                    eax_47 |= *(esi + 0x18)
                    ebx_9[-1] = eax_47
                while (arg1 != 0)
                
                return eax_47
        else if (arg6 == 4)
            void* eax_20 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_1) * ecx_3
            int32_t ecx_11 = *(arg1 + 0x14)
            int16_t* ebx_7
            
            if (arg2 s> arg4)
                i_10 = eax_20 + arg4
                ebx_7 = ecx_11 + (i_10 << 1)
                void* edx_18
                
                if (arg11 != 0)
                    edx_18 = arg2 - arg4 + 1
                else
                    ebx_7 = &ebx_7[1]
                    edx_18 = arg2 - arg4
                
                arg5 = edx_18
            else
                i_10 = eax_20 + arg2
                void* edi_8 = arg4 - arg2
                ebx_7 = ecx_11 + (i_10 << 1)
                
                if (arg11 != 0)
                    edi_8 += 1
                
                arg5 = edi_8
            
            if (arg5 != 0)
                int16_t eax_33
                
                do
                    uint32_t edi_9 = zx.d(*ebx_7)
                    arg5 -= 1
                    ebx_7 = &ebx_7[1]
                    int32_t eax_23
                    int32_t edx_22
                    edx_22:eax_23 = mulu.dp.d(0x80808081, 
                        zx.d(*(((*(esi + 0x10) & edi_9) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_10)
                    arg1:2.w = (edx_22 u>> 7 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                    int32_t eax_28
                    int32_t edx_27
                    edx_27:eax_28 = mulu.dp.d(0x80808081, 
                        zx.d(*(((edi_9 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_8)
                    char edi_10 = *(esi + 0x20)
                    arg1:2.w |= (edx_27 u>> 7 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                    int32_t eax_32
                    int32_t edx_33
                    edx_33:eax_32 = mulu.dp.d(0x80808081, 
                        zx.d(*
                            (((*(esi + 0xc) & edi_9) u>> edi_10) + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                            * var_c)
                    eax_33 = arg1:2.w | (edx_33 u>> 7 u>> *(esi + 0x1c)).w << edi_10 | *(esi + 0x18)
                    ebx_7[-1] = eax_33
                while (arg5 != 0)
                
                return eax_33
        else
            void* eax_14 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_1) * ecx_3
            int32_t edx_14 = *(arg1 + 0x14)
            void* edx_15
            
            if (arg2 s> arg4)
                edx_15 = edx_14 + ((eax_14 + arg4) << 1)
                
                if (arg11 != 0)
                    i_10 = arg2 - arg4 + 1
                else
                    edx_15 += 2
                    i_10 = arg2 - arg4
            else
                void* i_17 = arg4 - arg2
                edx_15 = edx_14 + ((eax_14 + arg2) << 1)
                
                if (arg11 == 0)
                    i_10 = i_17
                else
                    i_10 = i_17 + 1
            
            if (i_10 != 0)
                void* i_6
                
                do
                    edx_15 += 2
                    uint16_t edi_5 = (var_8 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                        | (var_10 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                        | (var_c u>> *(esi + 0x1c)).w << *(esi + 0x20)
                    i_6 = i_10
                    i_10 -= 1
                    *(edx_15 - 2) = edi_5 | *(esi + 0x18)
                while (i_6 != 1)
    
    return i_10
}

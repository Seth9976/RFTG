// 函数名称: sub_639ff0
// 虚拟地址: 0x639ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_639ff0(void* arg1, void* arg2, void* arg3, int32_t arg4, uint32_t arg5, uint32_t arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
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
    void* ecx_3 = arg3
    void* i_10
    
    if (ecx_3 != ebx)
        if (arg2 != arg4)
            void* i_13 = ecx_3 - ebx
            int32_t eax_158
            int32_t edx_158
            edx_158:eax_158 = sx.q(arg2 - arg4)
            int32_t eax_160
            int32_t edx_159
            edx_159:eax_160 = sx.q(i_13)
            
            if ((eax_158 ^ edx_158) - edx_158 == (eax_160 ^ edx_159) - edx_159)
                uint32_t ebx_32 = zx.d(*(esi + 9))
                
                if (arg6 == 1)
                    int32_t temp0_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), ebx_32)
                    void* i_21
                    
                    if (ecx_3 s> arg5)
                        void* edx_216 = *(arg1 + 0x14) + ((temp0_12 * arg5 + arg4) << 2)
                        arg1 = edx_216
                        
                        if (arg4 s> arg2)
                            i_10 = temp0_12 - 1
                        else
                            i_10 = temp0_12 + 1
                        
                        if (arg11 == 0)
                            arg1 = edx_216 + (i_10 << 2)
                        
                        i_21 = i_13
                    else
                        arg1 = *(arg1 + 0x14) + ((temp0_12 * ecx_3 + arg2) << 2)
                        
                        if (arg2 s> arg4)
                            i_10 = temp0_12 - 1
                            i_21 = arg5 - ecx_3
                        else
                            i_10 = temp0_12 + 1
                            i_21 = arg5 - ecx_3
                    
                    arg5 = i_21
                    
                    if (arg11 != 0)
                        i_21 += 1
                        arg5 = i_21
                    
                    if (i_21 != 0)
                        void* eax_232
                        
                        do
                            int32_t ebx_61 = *arg1
                            arg5 -= 1
                            int32_t eax_216
                            int32_t edx_221
                            edx_221:eax_216 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & ebx_61) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                            int32_t eax_224
                            int32_t edx_225
                            edx_225:eax_224 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & ebx_61) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ecx_2)
                            uint32_t ecx_174 = zx.d(*(esi + 0x1e))
                            int32_t eax_227
                            int32_t edx_233
                            edx_233:eax_227 = mulu.dp.d(0x80808081, 
                                zx.d(*(((ebx_61 & *(esi + 0x14)) u>> *(esi + 0x22))
                                    + (&data_8bac68)[ecx_174])) * ecx_2)
                            uint32_t eax_229 =
                                ((edx_221 u>> 7) + var_c) u>> *(esi + 0x1c) << *(esi + 0x20)
                                | ((edx_225 u>> 7) + var_10) u>> *(esi + 0x1d) << *(esi + 0x21)
                                | ((edx_233 u>> 7) + var_8) u>> ecx_174.b << *(esi + 0x22)
                            int32_t* eax_231 = arg1
                            *eax_231 = eax_229 | *(esi + 0x18)
                            eax_232 = eax_231 + (i_10 << 2)
                            arg1 = eax_232
                        while (arg5 != 0)
                        
                        return eax_232
                else if (arg6 == 2)
                    int32_t temp0_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), ebx_32)
                    int32_t* ebx_53
                    
                    if (ecx_3 s> arg5)
                        ebx_53 = *(arg1 + 0x14) + ((temp0_11 * arg5 + arg4) << 2)
                        
                        if (arg4 s> arg2)
                            i_10 = temp0_11 - 1
                        else
                            i_10 = temp0_11 + 1
                        
                        if (arg11 == 0)
                            ebx_53 = &ebx_53[i_10]
                        
                        arg1 = i_13
                    else
                        ebx_53 = *(arg1 + 0x14) + ((temp0_11 * ecx_3 + arg2) << 2)
                        
                        if (arg2 s> arg4)
                            i_10 = temp0_11 - 1
                            arg1 = arg5 - ecx_3
                        else
                            i_10 = temp0_11 + 1
                            arg1 = arg5 - ecx_3
                    
                    if (arg11 != 0)
                        arg1 += 1
                    
                    if (arg1 != 0)
                        int32_t eax_209
                        
                        do
                            int32_t eax_198 = *ebx_53
                            arg1 -= 1
                            uint32_t eax_204 = zx.d(*(((*(esi + 0xc) & eax_198) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                            
                            if (eax_204 u> 0xff)
                                eax_204 = 0xff
                            
                            uint32_t edi_60 = zx.d(*(((*(esi + 0x10) & eax_198) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                            
                            if (edi_60 u> 0xff)
                                edi_60 = 0xff
                            
                            uint32_t edx_201 = zx.d(*(((eax_198 & *(esi + 0x14)) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                            
                            if (edx_201 u> 0xff)
                                edx_201 = 0xff
                            
                            uint32_t eax_208 = eax_204 u>> *(esi + 0x1c) << *(esi + 0x20)
                                | edi_60 u>> *(esi + 0x1d) << *(esi + 0x21)
                                | edx_201 u>> *(esi + 0x1e) << *(esi + 0x22)
                            eax_209 = eax_208 | *(esi + 0x18)
                            *ebx_53 = eax_209
                            ebx_53 = &ebx_53[i_10]
                        while (arg1 != 0)
                        
                        return eax_209
                else
                    int32_t eax_167
                    int32_t edx_160
                    edx_160:eax_167 = sx.q(*(arg1 + 0x10))
                    
                    if (arg6 == 4)
                        int32_t temp0_10 = divs.dp.d(edx_160:eax_167, ebx_32)
                        int32_t* ebx_47
                        
                        if (ecx_3 s> arg5)
                            ebx_47 = *(arg1 + 0x14) + ((temp0_10 * arg5 + arg4) << 2)
                            
                            if (arg4 s> arg2)
                                i_10 = temp0_10 - 1
                            else
                                i_10 = temp0_10 + 1
                            
                            if (arg11 == 0)
                                ebx_47 = &ebx_47[i_10]
                            
                            arg1 = i_13
                        else
                            ebx_47 = *(arg1 + 0x14) + ((temp0_10 * ecx_3 + arg2) << 2)
                            
                            if (arg2 s> arg4)
                                i_10 = temp0_10 - 1
                                arg1 = arg5 - ecx_3
                            else
                                i_10 = temp0_10 + 1
                                arg1 = arg5 - ecx_3
                        
                        if (arg11 != 0)
                            arg1 += 1
                        
                        if (arg1 != 0)
                            int32_t eax_194
                            
                            do
                                int32_t edi_52 = *ebx_47
                                arg1 -= 1
                                int32_t eax_180
                                int32_t edx_174
                                edx_174:eax_180 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((edi_52 & *(esi + 0x14)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_8)
                                int32_t eax_186
                                int32_t edx_179
                                edx_179:eax_186 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0xc) & edi_52) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_c)
                                char edi_53 = *(esi + 0x21)
                                int32_t eax_191
                                int32_t edx_186
                                edx_186:eax_191 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((*(esi + 0x10) & edi_52) u>> edi_53)
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_10)
                                uint32_t eax_193 = edx_174 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | edx_179 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | edx_186 u>> 7 u>> *(esi + 0x1d) << edi_53
                                eax_194 = eax_193 | *(esi + 0x18)
                                *ebx_47 = eax_194
                                ebx_47 = &ebx_47[i_10]
                            while (arg1 != 0)
                            
                            return eax_194
                    else
                        int32_t temp0_9 = divs.dp.d(edx_160:eax_167, ebx_32)
                        void* i_11
                        int32_t* edi_49
                        
                        if (ecx_3 s> arg5)
                            edi_49 = *(arg1 + 0x14) + ((temp0_9 * arg5 + arg4) << 2)
                            
                            if (arg4 s> arg2)
                                i_10 = temp0_9 - 1
                            else
                                i_10 = temp0_9 + 1
                            
                            if (arg11 == 0)
                                edi_49 = &edi_49[i_10]
                            
                            i_11 = i_13
                        else
                            edi_49 = *(arg1 + 0x14) + ((temp0_9 * ecx_3 + arg2) << 2)
                            
                            if (arg2 s> arg4)
                                i_10 = temp0_9 - 1
                                i_11 = arg5 - ecx_3
                            else
                                i_10 = temp0_9 + 1
                                i_11 = arg5 - ecx_3
                        
                        if (arg11 != 0)
                            i_11 += 1
                        
                        if (i_11 != 0)
                            int32_t eax_176
                            void* i
                            
                            do
                                uint32_t eax_175 = var_8 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_10 u>> *(esi + 0x1d) << *(esi + 0x21)
                                    | var_c u>> *(esi + 0x1c) << *(esi + 0x20)
                                eax_176 = eax_175 | *(esi + 0x18)
                                *edi_49 = eax_176
                                edi_49 += i_10 * 4
                                i = i_11
                                i_11 -= 1
                            while (i != 1)
                            return eax_176
            else if (arg6 == 1)
                int32_t eax_304
                int32_t edx_287
                edx_287:eax_304 = sx.q(arg4 - arg2)
                int32_t ebx_96 = (eax_304 ^ edx_287) - edx_287
                int32_t eax_307
                int32_t edx_288
                edx_288:eax_307 = sx.q(arg5 - ecx_3)
                int32_t eax_309 = (eax_307 ^ edx_288) - edx_288
                int32_t var_28_4
                int32_t var_20_3
                int32_t i_19
                int32_t var_18_4
                int32_t var_14_3
                void* const edx_293
                
                if (ebx_96 s< eax_309)
                    i_19 = eax_309 + 1
                    arg6 = ebx_96 * 2 - eax_309
                    var_20_3 = ebx_96 * 2
                    edx_293 = 1
                    var_28_4 = (ebx_96 - eax_309) * 2
                    i_10 = nullptr
                    var_14_3 = 1
                    var_18_4 = 1
                else
                    i_19 = ebx_96 + 1
                    arg6 = eax_309 * 2 - ebx_96
                    var_28_4 = (eax_309 - ebx_96) * 2
                    i_10 = 1
                    var_20_3 = eax_309 * 2
                    edx_293 = 1
                    var_14_3 = 0
                    var_18_4 = 1
                
                if (arg2 s> arg4)
                    i_10 = neg.d(i_10)
                    edx_293 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    var_14_3 = neg.d(var_14_3)
                    var_18_4 = 0xffffffff
                
                arg3 = ecx_3
                int32_t i_15 = i_19
                
                if (arg11 == 0)
                    i_15 -= 1
                
                if (i_15 s> 0)
                    void* eax_312 = i_10 * 2
                    arg5 = arg2 * 4
                    int32_t i_8 = i_15
                    int32_t i_1
                    
                    do
                        int32_t* ebx_108 = *(arg1 + 0x10) * arg3 + arg5 + *(arg1 + 0x14)
                        int32_t eax_318
                        int32_t edx_303
                        edx_303:eax_318 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*ebx_108 & *(esi + 0x14)) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ecx_2)
                        int32_t eax_326
                        int32_t edx_307
                        edx_307:eax_326 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*ebx_108 & *(esi + 0xc)) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                        int32_t eax_332
                        int32_t edx_313
                        edx_313:eax_332 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*ebx_108 & *(esi + 0x10)) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ecx_2)
                        uint32_t eax_334 = ((edx_303 u>> 7) + var_8) u>> *(esi + 0x1e) << *(esi + 0x22)
                            | ((edx_307 u>> 7) + var_c) u>> *(esi + 0x1c) << *(esi + 0x20)
                            | ((edx_313 u>> 7) + var_10) u>> *(esi + 0x1d) << *(esi + 0x21)
                        *ebx_108 = eax_334 | *(esi + 0x18)
                        int32_t ecx_233
                        int32_t edx_318
                        
                        if (arg6 s>= 0)
                            edx_318 = var_28_4
                            i_10 = edx_293 * 4
                            ecx_233 = var_18_4
                        else
                            edx_318 = var_20_3
                            i_10 = eax_312 * 2
                            ecx_233 = var_14_3
                        
                        arg6 += edx_318
                        arg5 += i_10
                        arg3 += ecx_233
                        i_1 = i_8
                        i_8 -= 1
                    while (i_1 != 1)
            else if (arg6 == 2)
                int32_t eax_279
                int32_t edx_274
                edx_274:eax_279 = sx.q(arg4 - arg2)
                int32_t edi_91 = (eax_279 ^ edx_274) - edx_274
                int32_t eax_282
                int32_t edx_275
                edx_275:eax_282 = sx.q(arg5 - ecx_3)
                int32_t eax_284 = (eax_282 ^ edx_275) - edx_275
                int32_t var_24_3
                int32_t var_20_2
                int32_t i_18
                int32_t var_14_2
                int32_t edx_278
                uint32_t ebx_84
                int32_t edi_92
                
                if (edi_91 s< eax_284)
                    i_18 = eax_284 + 1
                    int32_t edx_280 = edi_91 * 2
                    var_20_2 = (edi_91 - eax_284) * 2
                    edi_92 = 1
                    ebx_84 = edx_280 - eax_284
                    var_24_3 = edx_280
                    i_10 = nullptr
                    edx_278 = 1
                    var_14_2 = 1
                else
                    i_18 = edi_91 + 1
                    int32_t edx_277 = eax_284 * 2
                    var_24_3 = edx_277
                    edx_278 = 1
                    ebx_84 = edx_277 - edi_91
                    var_20_2 = (eax_284 - edi_91) * 2
                    i_10 = 1
                    edi_92 = 0
                    var_14_2 = 1
                
                arg6 = ebx_84
                int32_t var_18_3 = edi_92
                
                if (arg2 s> arg4)
                    i_10 = neg.d(i_10)
                    edx_278 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    var_18_3 = neg.d(edi_92)
                    var_14_2 = 0xffffffff
                
                int32_t i_17 = i_18
                arg3 = ecx_3
                
                if (arg11 == 0)
                    i_17 -= 1
                
                if (i_17 s> 0)
                    uint32_t edi_98 = arg2 * 4
                    arg5 = edi_98
                    int32_t i_7 = i_17
                    uint32_t eax_301
                    int32_t i_2
                    
                    do
                        int32_t* edx_286 = *(arg1 + 0x10) * ecx_3 + edi_98 + *(arg1 + 0x14)
                        int32_t eax_290 = *edx_286
                        uint32_t eax_294 = zx.d(*(((eax_290 & *(esi + 0xc)) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                        
                        if (eax_294 u> 0xff)
                            eax_294 = 0xff
                        
                        uint32_t ebx_91 = zx.d(*(((eax_290 & *(esi + 0x10)) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                        
                        if (ebx_91 u> 0xff)
                            ebx_91 = 0xff
                        
                        uint32_t edi_104 = zx.d(*(((eax_290 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                        
                        if (edi_104 u> 0xff)
                            edi_104 = 0xff
                        
                        uint32_t eax_298 = eax_294 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | ebx_91 u>> *(esi + 0x1d) << *(esi + 0x21)
                            | edi_104 u>> *(esi + 0x1e) << *(esi + 0x22)
                        *edx_286 = eax_298 | *(esi + 0x18)
                        
                        if (arg6 s>= 0)
                            eax_301 = arg6 + var_20_2
                            edi_98 = arg5 + edx_278 * 4
                            ecx_3 = arg3 + var_14_2
                        else
                            eax_301 = arg6 + var_24_3
                            edi_98 = arg5 + i_10 * 4
                            ecx_3 = arg3 + var_18_3
                        
                        i_2 = i_7
                        i_7 -= 1
                        arg3 = ecx_3
                        arg5 = edi_98
                        arg6 = eax_301
                    while (i_2 != 1)
                    return eax_301
            else if (arg6 == 4)
                int32_t eax_250
                int32_t edx_245
                edx_245:eax_250 = sx.q(arg4 - arg2)
                int32_t edi_79 = (eax_250 ^ edx_245) - edx_245
                int32_t eax_253
                int32_t edx_246
                edx_246:eax_253 = sx.q(arg5 - ecx_3)
                int32_t eax_255 = (eax_253 ^ edx_246) - edx_246
                int32_t var_24_2
                int32_t var_20_1
                int32_t var_1c_2
                int32_t i_20
                int32_t edx_249
                uint32_t ebx_77
                int32_t edi_80
                
                if (edi_79 s< eax_255)
                    i_20 = eax_255 + 1
                    int32_t edx_251 = edi_79 * 2
                    var_24_2 = (edi_79 - eax_255) * 2
                    edi_80 = 1
                    ebx_77 = edx_251 - eax_255
                    var_20_1 = edx_251
                    i_10 = nullptr
                    edx_249 = 1
                    var_1c_2 = 1
                else
                    i_20 = edi_79 + 1
                    int32_t edx_248 = eax_255 * 2
                    var_20_1 = edx_248
                    edx_249 = 1
                    ebx_77 = edx_248 - edi_79
                    var_24_2 = (eax_255 - edi_79) * 2
                    i_10 = 1
                    edi_80 = 0
                    var_1c_2 = 1
                
                arg6 = ebx_77
                int32_t var_18_2 = edi_80
                
                if (arg2 s> arg4)
                    i_10 = neg.d(i_10)
                    edx_249 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    var_18_2 = neg.d(edi_80)
                    var_1c_2 = 0xffffffff
                
                arg3 = ecx_3
                int32_t i_14 = i_20
                
                if (arg11 == 0)
                    i_14 -= 1
                
                if (i_14 s> 0)
                    arg5 = arg2 << 2
                    int32_t i_9 = i_14
                    int32_t eax_276
                    int32_t i_3
                    
                    do
                        int32_t* edi_88 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + arg5
                        int32_t ebx_80 = *edi_88
                        int32_t eax_263
                        int32_t edx_257
                        edx_257:eax_263 = mulu.dp.d(0x80808081, 
                            zx.d(*(((ebx_80 & *(esi + 0xc)) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_c)
                        int32_t eax_269
                        int32_t edx_262
                        edx_262:eax_269 = mulu.dp.d(0x80808081, 
                            zx.d(*(((ebx_80 & *(esi + 0x10)) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_10)
                        uint32_t ecx_200 = zx.d(*(esi + 0x1e))
                        int32_t eax_272
                        int32_t edx_269
                        edx_269:eax_272 = mulu.dp.d(0x80808081, 
                            zx.d(*(((ebx_80 & *(esi + 0x14)) u>> *(esi + 0x22))
                                + (&data_8bac68)[ecx_200])) * var_8)
                        uint32_t eax_274 = edx_257 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edx_262 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                            | edx_269 u>> 7 u>> ecx_200.b << *(esi + 0x22)
                        *edi_88 = eax_274 | *(esi + 0x18)
                        int32_t ecx_202
                        int32_t edx_273
                        
                        if (arg6 s>= 0)
                            eax_276 = var_24_2
                            ecx_202 = edx_249 * 4
                            edx_273 = var_1c_2
                        else
                            eax_276 = var_20_1
                            ecx_202 = i_10 * 4
                            edx_273 = var_18_2
                        
                        arg6 += eax_276
                        arg5 += ecx_202
                        arg3 += edx_273
                        i_3 = i_9
                        i_9 -= 1
                    while (i_3 != 1)
                    return eax_276
            else
                int32_t eax_237
                int32_t edx_238
                edx_238:eax_237 = sx.q(arg4 - arg2)
                void* edi_65 = (eax_237 ^ edx_238) - edx_238
                int32_t eax_240
                int32_t edx_239
                edx_239:eax_240 = sx.q(arg5 - ecx_3)
                void* eax_242 = (eax_240 ^ edx_239) - edx_239
                int32_t var_1c_1
                int32_t var_18_1
                void* edx_242
                int32_t ebx_65
                int32_t edi_66
                
                if (edi_65 s< eax_242)
                    int32_t ebx_66 = edi_65 * 2
                    arg3 = eax_242 + 1
                    var_1c_1 = ebx_66
                    ebx_65 = 1
                    edx_242 = ebx_66 - eax_242
                    var_18_1 = (edi_65 - eax_242) * 2
                    edi_66 = 0
                    arg6 = 1
                else
                    int32_t ebx_64 = eax_242 * 2
                    arg3 = edi_65 + 1
                    edx_242 = ebx_64 - edi_65
                    edi_66 = 1
                    var_1c_1 = ebx_64
                    var_18_1 = (eax_242 - edi_65) * 2
                    ebx_65 = 1
                    arg6 = 0
                
                i_10 = arg2
                uint32_t var_14_1 = 1
                
                if (i_10 s> arg4)
                    edi_66 = neg.d(edi_66)
                    ebx_65 = 0xffffffff
                
                if (ecx_3 s> arg5)
                    i_10 = neg.d(arg6)
                    arg6 = i_10
                    var_14_1 = 0xffffffff
                
                arg5 = ecx_3
                void* ecx_177 = arg3
                
                if (arg11 == 0)
                    ecx_177 -= 1
                
                if (ecx_177 s> 0)
                    int32_t eax_248 = arg2 * 4
                    arg3 = ecx_177
                    void* i_4
                    
                    do
                        uint32_t edi_75 = var_8 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | var_10 u>> *(esi + 0x1d) << *(esi + 0x21)
                            | var_c u>> *(esi + 0x1c) << *(esi + 0x20)
                        *(*(arg1 + 0x10) * arg5 + *(arg1 + 0x14) + eax_248) = edi_75 | *(esi + 0x18)
                        uint32_t ecx_188
                        
                        if (edx_242 s>= 0)
                            edx_242 += var_18_1
                            eax_248 += ebx_65 * 4
                            ecx_188 = var_14_1
                        else
                            edx_242 += var_1c_1
                            eax_248 += edi_66 * 4
                            ecx_188 = arg6
                        
                        arg5 += ecx_188
                        i_4 = arg3
                        arg3 -= 1
                    while (i_4 != 1)
                    return eax_248
        else if (arg6 == 1)
            int32_t temp0_8 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(esi + 9)))
            uint32_t edx_135 = arg5
            uint32_t ebx_25 = *(arg1 + 0x14)
            
            if (ecx_3 s> edx_135)
                i_10 = ebx_25 + ((temp0_8 * edx_135 + arg2) << 2)
                arg5 = i_10
                void* ecx_101
                
                if (arg11 != 0)
                    ecx_101 = ecx_3 - edx_135 + 1
                else
                    i_10 += temp0_8 << 2
                    arg5 = i_10
                    ecx_101 = ecx_3 - edx_135
                
                arg1 = ecx_101
            else
                void* edx_136 = edx_135 - ecx_3
                i_10 = ebx_25 + ((temp0_8 * ecx_3 + arg2) << 2)
                arg5 = i_10
                
                if (arg11 != 0)
                    edx_136 += 1
                
                arg1 = edx_136
            
            if (arg1 != 0)
                void* eax_154
                
                do
                    int32_t ebx_27 = *arg5
                    arg1 -= 1
                    int32_t eax_136
                    int32_t edx_141
                    edx_141:eax_136 = mulu.dp.d(0x80808081, 
                        zx.d(*(((ebx_27 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ecx_2)
                    int32_t eax_144
                    int32_t edx_145
                    edx_145:eax_144 = mulu.dp.d(0x80808081, 
                        zx.d(*(((*(esi + 0xc) & ebx_27) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                    char ebx_28 = *(esi + 0x21)
                    int32_t eax_149
                    int32_t edx_153
                    edx_153:eax_149 = mulu.dp.d(0x80808081, 
                        zx.d(*(((*(esi + 0x10) & ebx_27) u>> ebx_28)
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ecx_2)
                    uint32_t eax_151 = ((edx_141 u>> 7) + var_8) u>> *(esi + 0x1e) << *(esi + 0x22)
                        | ((edx_145 u>> 7) + var_c) u>> *(esi + 0x1c) << *(esi + 0x20)
                        | ((edx_153 u>> 7) + var_10) u>> *(esi + 0x1d) << ebx_28
                    *arg5 = eax_151 | *(esi + 0x18)
                    eax_154 = arg5 + (temp0_8 << 2)
                    arg5 = eax_154
                while (arg1 != 0)
                
                return eax_154
        else
            uint32_t edi_25 = zx.d(*(esi + 9))
            
            if (arg6 == 2)
                i_10 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_25)
                int32_t edi_39 = *(arg1 + 0x14)
                
                if (ecx_3 s> ebx)
                    uint32_t edx_122 = edi_39 + ((i_10 * ebx + arg2) << 2)
                    arg5 = edx_122
                    void* ecx_82
                    
                    if (arg11 != 0)
                        ecx_82 = ecx_3 - ebx + 1
                    else
                        arg5 = edx_122 + (i_10 << 2)
                        ecx_82 = ecx_3 - ebx
                    
                    arg1 = ecx_82
                else
                    void* ebx_21 = ebx - ecx_3
                    arg5 = edi_39 + ((i_10 * ecx_3 + arg2) << 2)
                    
                    if (arg11 != 0)
                        ebx_21 += 1
                    
                    arg1 = ebx_21
                
                if (arg1 != 0)
                    int32_t eax_125
                    
                    do
                        int32_t eax_114 = *arg5
                        char ebx_22 = *(esi + 0x21)
                        arg1 -= 1
                        uint32_t eax_120 = zx.d(*(((*(esi + 0xc) & eax_114) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                        
                        if (eax_120 u> 0xff)
                            eax_120 = 0xff
                        
                        uint32_t edi_44 = zx.d(*(((*(esi + 0x10) & eax_114) u>> ebx_22)
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                        
                        if (edi_44 u> 0xff)
                            edi_44 = 0xff
                        
                        uint32_t edx_130 = zx.d(*(((*(esi + 0x14) & eax_114) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                        
                        if (edx_130 u> 0xff)
                            edx_130 = 0xff
                        
                        eax_125 = eax_120 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edi_44 u>> *(esi + 0x1d) << ebx_22
                            | edx_130 u>> *(esi + 0x1e) << *(esi + 0x22) | *(esi + 0x18)
                        *arg5 = eax_125
                        arg5 += i_10 * 4
                    while (arg1 != 0)
                    
                    return eax_125
            else
                int32_t eax_81
                int32_t edx_79
                edx_79:eax_81 = sx.q(*(arg1 + 0x10))
                
                if (arg6 == 4)
                    i_10 = divs.dp.d(edx_79:eax_81, edi_25)
                    int32_t edi_35 = *(arg1 + 0x14)
                    
                    if (ecx_3 s> ebx)
                        uint32_t edx_92 = edi_35 + ((i_10 * ebx + arg2) << 2)
                        arg5 = edx_92
                        void* ecx_65
                        
                        if (arg11 != 0)
                            ecx_65 = ecx_3 - ebx + 1
                        else
                            arg5 = edx_92 + (i_10 << 2)
                            ecx_65 = ecx_3 - ebx
                        
                        arg1 = ecx_65
                    else
                        void* ebx_17 = ebx - ecx_3
                        arg5 = edi_35 + ((i_10 * ecx_3 + arg2) << 2)
                        
                        if (arg11 != 0)
                            ebx_17 += 1
                        
                        arg1 = ebx_17
                    
                    if (arg1 != 0)
                        uint32_t eax_108
                        
                        do
                            char ebx_18 = *(esi + 0x22)
                            int32_t edi_36 = *arg5
                            arg1 -= 1
                            int32_t eax_94
                            int32_t edx_97
                            edx_97:eax_94 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x14) & edi_36) u>> ebx_18)
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_8)
                            char ebx_19 = *(esi + 0x20)
                            int32_t eax_100
                            int32_t edx_102
                            edx_102:eax_100 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & edi_36) u>> ebx_19)
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_c)
                            char edi_37 = *(esi + 0x21)
                            uint32_t ecx_78 = zx.d(*(esi + 0x1d))
                            int32_t eax_103
                            int32_t edx_111
                            edx_111:eax_103 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & edi_36) u>> edi_37) + (&data_8bac68)[ecx_78]))
                                    * var_10)
                            int32_t eax_106 = edx_97 u>> 7 u>> *(esi + 0x1e) << ebx_18
                                | edx_102 u>> 7 u>> *(esi + 0x1c) << ebx_19
                                | edx_111 u>> 7 u>> ecx_78.b << edi_37 | *(esi + 0x18)
                            *arg5 = eax_106
                            eax_108 = arg5 + i_10 * 4
                            arg5 = eax_108
                        while (arg1 != 0)
                        
                        return eax_108
                else
                    i_10 = divs.dp.d(edx_79:eax_81, edi_25)
                    int32_t edi_27 = *(arg1 + 0x14)
                    int32_t* edx_83
                    void* i_12
                    
                    if (ecx_3 s> ebx)
                        edx_83 = edi_27 + ((i_10 * ebx + arg2) << 2)
                        
                        if (arg11 != 0)
                            i_12 = ecx_3 - ebx + 1
                        else
                            edx_83 = &edx_83[i_10]
                            i_12 = ecx_3 - ebx
                    else
                        i_12 = ebx - ecx_3
                        edx_83 = edi_27 + ((i_10 * ecx_3 + arg2) << 2)
                        
                        if (arg11 != 0)
                            i_12 += 1
                    
                    if (i_12 != 0)
                        int32_t eax_89
                        void* i_5
                        
                        do
                            uint32_t eax_88 = var_8 u>> *(esi + 0x1e) << *(esi + 0x22)
                                | var_10 u>> *(esi + 0x1d) << *(esi + 0x21)
                                | var_c u>> *(esi + 0x1c) << *(esi + 0x20)
                            eax_89 = eax_88 | *(esi + 0x18)
                            *edx_83 = eax_89
                            edx_83 += i_10 * 4
                            i_5 = i_12
                            i_12 -= 1
                        while (i_5 != 1)
                        return eax_89
    else if (arg6 == 1)
        void* eax_53 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(esi + 9))) * ecx_3
        int32_t ecx_40 = *(arg1 + 0x14)
        uint32_t edx_55
        
        if (arg2 s> arg4)
            i_10 = ecx_40 + ((eax_53 + arg4) << 2)
            arg1 = i_10
            
            if (arg11 != 0)
                edx_55 = arg2 - arg4 + 1
            else
                arg1 += 4
                edx_55 = arg2 - arg4
            
            arg5 = edx_55
        else
            i_10 = ecx_40 + ((eax_53 + arg2) << 2)
            uint32_t ebx_14 = arg4 - arg2
            arg1 = i_10
            
            if (arg11 == 0)
                edx_55 = ebx_14
                arg5 = ebx_14
            else
                edx_55 = ebx_14 + 1
                arg5 = edx_55
        
        if (edx_55 != 0)
            void* eax_76
            
            do
                int32_t ebx_15 = *arg1
                arg5 -= 1
                int32_t eax_58
                int32_t edx_59
                edx_59:eax_58 = mulu.dp.d(0x80808081, 
                    zx.d(*(((*(esi + 0x14) & ebx_15) u>> *(esi + 0x22))
                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ecx_2)
                int32_t eax_66
                int32_t edx_63
                edx_63:eax_66 = mulu.dp.d(0x80808081, 
                    zx.d(*(((*(esi + 0xc) & ebx_15) u>> *(esi + 0x20))
                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ecx_2)
                char ebx_16 = *(esi + 0x21)
                int32_t eax_71
                int32_t edx_71
                edx_71:eax_71 = mulu.dp.d(0x80808081, 
                    zx.d(*(((*(esi + 0x10) & ebx_15) u>> ebx_16) + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                        * ecx_2)
                uint32_t eax_73 = ((edx_59 u>> 7) + var_8) u>> *(esi + 0x1e) << *(esi + 0x22)
                    | ((edx_63 u>> 7) + var_c) u>> *(esi + 0x1c) << *(esi + 0x20)
                    | ((edx_71 u>> 7) + var_10) u>> *(esi + 0x1d) << ebx_16
                *arg1 = eax_73 | *(esi + 0x18)
                eax_76 = arg1 + 4
                arg1 = eax_76
            while (arg5 != 0)
            
            return eax_76
    else
        uint32_t edi_1 = zx.d(*(esi + 9))
        
        if (arg6 == 2)
            void* eax_39 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_1) * ecx_3
            int32_t ecx_25 = *(arg1 + 0x14)
            void* edx_41
            int32_t* ebx_11
            
            if (arg2 s> arg4)
                i_10 = eax_39 + arg4
                ebx_11 = ecx_25 + (i_10 << 2)
                
                if (arg11 != 0)
                    edx_41 = arg2 - arg4 + 1
                else
                    ebx_11 = &ebx_11[1]
                    edx_41 = arg2 - arg4
                
                arg1 = edx_41
            else
                i_10 = eax_39 + arg2
                void* edi_17 = arg4 - arg2
                ebx_11 = ecx_25 + (i_10 << 2)
                
                if (arg11 == 0)
                    edx_41 = edi_17
                    arg1 = edi_17
                else
                    edx_41 = edi_17 + 1
                    arg1 = edx_41
            
            if (edx_41 != 0)
                int32_t eax_49
                
                do
                    int32_t eax_40 = *ebx_11
                    arg1 -= 1
                    uint32_t eax_44 = zx.d(*(((eax_40 & *(esi + 0xc)) u>> *(esi + 0x20))
                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_c
                    
                    if (eax_44 u> 0xff)
                        eax_44 = 0xff
                    
                    uint32_t edi_22 = zx.d(*(((eax_40 & *(esi + 0x10)) u>> *(esi + 0x21))
                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_10
                    
                    if (edi_22 u> 0xff)
                        edi_22 = 0xff
                    
                    uint32_t edx_48 = zx.d(*(((eax_40 & *(esi + 0x14)) u>> *(esi + 0x22))
                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_8
                    
                    if (edx_48 u> 0xff)
                        edx_48 = 0xff
                    
                    ebx_11 = &ebx_11[1]
                    uint32_t eax_48 = eax_44 u>> *(esi + 0x1c) << *(esi + 0x20)
                        | edi_22 u>> *(esi + 0x1d) << *(esi + 0x21)
                        | edx_48 u>> *(esi + 0x1e) << *(esi + 0x22)
                    eax_49 = eax_48 | *(esi + 0x18)
                    ebx_11[-1] = eax_49
                while (arg1 != 0)
                
                return eax_49
        else if (arg6 == 4)
            void* eax_20 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_1) * ecx_3
            int32_t ecx_11 = *(arg1 + 0x14)
            void* edx_18
            int32_t* ebx_9
            
            if (arg2 s> arg4)
                i_10 = eax_20 + arg4
                ebx_9 = ecx_11 + (i_10 << 2)
                
                if (arg11 != 0)
                    edx_18 = arg2 - arg4 + 1
                else
                    ebx_9 = &ebx_9[1]
                    edx_18 = arg2 - arg4
                
                arg1 = edx_18
            else
                i_10 = eax_20 + arg2
                void* edi_12 = arg4 - arg2
                ebx_9 = ecx_11 + (i_10 << 2)
                
                if (arg11 == 0)
                    edx_18 = edi_12
                    arg1 = edi_12
                else
                    edx_18 = edi_12 + 1
                    arg1 = edx_18
            
            if (edx_18 != 0)
                int32_t eax_35
                
                do
                    int32_t edi_13 = *ebx_9
                    arg1 -= 1
                    ebx_9 = &ebx_9[1]
                    int32_t eax_23
                    int32_t edx_22
                    edx_22:eax_23 = mulu.dp.d(0x80808081, 
                        zx.d(*(((edi_13 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_8)
                    int32_t eax_29
                    int32_t edx_27
                    edx_27:eax_29 = mulu.dp.d(0x80808081, 
                        zx.d(*(((edi_13 & *(esi + 0xc)) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_c)
                    uint32_t ecx_23 = zx.d(*(esi + 0x1d))
                    int32_t eax_32
                    int32_t edx_34
                    edx_34:eax_32 = mulu.dp.d(0x80808081, 
                        zx.d(*(((edi_13 & *(esi + 0x10)) u>> *(esi + 0x21)) + (&data_8bac68)[ecx_23]))
                            * var_10)
                    uint32_t eax_34 = edx_22 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                        | edx_27 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                        | edx_34 u>> 7 u>> ecx_23.b << *(esi + 0x21)
                    eax_35 = eax_34 | *(esi + 0x18)
                    ebx_9[-1] = eax_35
                while (arg1 != 0)
                
                return eax_35
        else
            void* eax_14 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_1) * ecx_3
            int32_t edx_14 = *(arg1 + 0x14)
            void* edx_15
            
            if (arg2 s> arg4)
                edx_15 = edx_14 + ((eax_14 + arg4) << 2)
                
                if (arg11 != 0)
                    i_10 = arg2 - arg4 + 1
                else
                    edx_15 += 4
                    i_10 = arg2 - arg4
            else
                void* i_16 = arg4 - arg2
                edx_15 = edx_14 + ((eax_14 + arg2) << 2)
                
                if (arg11 == 0)
                    i_10 = i_16
                else
                    i_10 = i_16 + 1
            
            if (i_10 != 0)
                void* i_6
                
                do
                    edx_15 += 4
                    uint32_t edi_8 = var_8 u>> *(esi + 0x1e) << *(esi + 0x22)
                        | var_10 u>> *(esi + 0x1d) << *(esi + 0x21)
                        | var_c u>> *(esi + 0x1c) << *(esi + 0x20)
                    i_6 = i_10
                    i_10 -= 1
                    *(edx_15 - 4) = edi_8 | *(esi + 0x18)
                while (i_6 != 1)
    
    return i_10
}

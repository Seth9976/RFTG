// 函数名称: sub_63b470
// 虚拟地址: 0x63b470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_63b470(void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, char arg7, char arg8, char arg9, char arg10, int32_t arg11)
{
    // 第一条实际指令: void* esi = *(arg1 + 4)
    void* esi = *(arg1 + 4)
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    uint32_t ecx_1
    
    if (arg6 == 1 || arg6 == 2)
        ecx_1 = zx.d(arg10)
        var_8 = zx.d(arg7) * ecx_1 u/ 0xff
        var_c = zx.d(arg8) * ecx_1 u/ 0xff
        var_10 = zx.d(arg9) * ecx_1 u/ 0xff
    else
        var_8 = zx.d(arg7)
        ecx_1 = zx.d(arg10)
        var_c = zx.d(arg8)
        var_10 = zx.d(arg9)
    
    uint32_t ebx = arg5
    uint32_t ecx_2 = arg3
    int32_t edi_1 = ecx_1 ^ 0xff
    uint32_t i_8
    
    if (ecx_2 != ebx)
        if (arg2 != arg4)
            uint32_t i_15 = ecx_2 - ebx
            int32_t eax_175
            int32_t edx_168
            edx_168:eax_175 = sx.q(arg2 - arg4)
            int32_t eax_177
            int32_t edx_169
            edx_169:eax_177 = sx.q(i_15)
            
            if ((eax_175 ^ edx_168) - edx_168 == (eax_177 ^ edx_169) - edx_169)
                uint32_t ebx_53 = zx.d(*(esi + 9))
                
                if (arg6 == 1)
                    int32_t temp0_12 = divs.dp.d(sx.q(*(arg1 + 0x10)), ebx_53)
                    uint32_t i_23
                    
                    if (ecx_2 s> arg5)
                        void* edx_231 = *(arg1 + 0x14) + ((temp0_12 * arg5 + arg4) << 2)
                        arg1 = edx_231
                        
                        if (arg4 s> arg2)
                            i_8 = temp0_12 - 1
                        else
                            i_8 = temp0_12 + 1
                        
                        if (arg11 == 0)
                            arg1 = edx_231 + (i_8 << 2)
                        
                        i_23 = i_15
                    else
                        arg1 = *(arg1 + 0x14) + ((temp0_12 * ecx_2 + arg2) << 2)
                        
                        if (arg2 s> arg4)
                            i_8 = temp0_12 - 1
                            i_23 = arg5 - ecx_2
                        else
                            i_8 = temp0_12 + 1
                            i_23 = arg5 - ecx_2
                    
                    arg5 = i_23
                    
                    if (arg11 != 0)
                        i_23 += 1
                        arg5 = i_23
                    
                    if (i_23 != 0)
                        void* eax_257
                        
                        do
                            int32_t ebx_92 = *arg1
                            arg5 -= 1
                            int32_t eax_237
                            int32_t edx_236
                            edx_236:eax_237 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0xc) & ebx_92) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi_1)
                            int32_t eax_245
                            int32_t edx_240
                            edx_240:eax_245 = mulu.dp.d(0x80808081, 
                                zx.d(*(((*(esi + 0x10) & ebx_92) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi_1)
                            int32_t eax_250
                            int32_t edx_248
                            edx_248:eax_250 = mulu.dp.d(0x80808081, 
                                zx.d(*(((ebx_92 & *(esi + 0x14)) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi_1)
                            uint32_t eax_252 =
                                ((edx_236 u>> 7) + var_8) u>> *(esi + 0x1c) << *(esi + 0x20)
                                | ((edx_240 u>> 7) + var_c) u>> *(esi + 0x1d) << *(esi + 0x21)
                                | ((edx_248 u>> 7) + var_10) u>> *(esi + 0x1e) << *(esi + 0x22)
                            char eax_253 = *(esi + 0x23)
                            uint32_t* eax_256 = arg1
                            *eax_256 = eax_252 | zx.d(*(((*(esi + 0x18) & ebx_92) u>> eax_253)
                                + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << eax_253
                            eax_257 = &eax_256[i_8]
                            arg1 = eax_257
                        while (arg5 != 0)
                        
                        return eax_257
                else if (arg6 == 2)
                    int32_t temp0_11 = divs.dp.d(sx.q(*(arg1 + 0x10)), ebx_53)
                    uint32_t i
                    void* edx_209
                    
                    if (ecx_2 s> arg5)
                        edx_209 = *(arg1 + 0x14) + ((temp0_11 * arg5 + arg4) << 2)
                        arg1 = edx_209
                        
                        if (arg4 s> arg2)
                            i_8 = temp0_11 - 1
                        else
                            i_8 = temp0_11 + 1
                        
                        if (arg11 == 0)
                            edx_209 += i_8 << 2
                            arg1 = edx_209
                        
                        i = i_15
                    else
                        edx_209 = *(arg1 + 0x14) + ((temp0_11 * ecx_2 + arg2) << 2)
                        arg1 = edx_209
                        
                        if (arg2 s> arg4)
                            i_8 = temp0_11 - 1
                            i = arg5 - ecx_2
                        else
                            i_8 = temp0_11 + 1
                            i = arg5 - ecx_2
                    
                    if (arg11 != 0)
                        i += 1
                    
                    if (i != 0)
                        uint32_t eax_230
                        
                        do
                            int32_t eax_219 = *edx_209
                            uint32_t eax_225 = zx.d(*(((*(esi + 0xc) & eax_219) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_8
                            
                            if (eax_225 u> 0xff)
                                eax_225 = 0xff
                            
                            uint32_t edi_68 = zx.d(*(((*(esi + 0x10) & eax_219) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_c
                            
                            if (edi_68 u> 0xff)
                                edi_68 = 0xff
                            
                            uint32_t edx_215 = zx.d(*(((eax_219 & *(esi + 0x14)) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_10
                            
                            if (edx_215 u> 0xff)
                                edx_215 = 0xff
                            
                            i -= 1
                            uint32_t eax_229 = eax_225 u>> *(esi + 0x1c) << *(esi + 0x20)
                                | edi_68 u>> *(esi + 0x1d) << *(esi + 0x21)
                                | edx_215 u>> *(esi + 0x1e) << *(esi + 0x22)
                            uint32_t* edx_218 = arg1
                            eax_230 = eax_229 | zx.d(*(((*(esi + 0x18) & eax_219) u>> *(esi + 0x23))
                                + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                            *edx_218 = eax_230
                            edx_209 = &edx_218[i_8]
                            arg1 = edx_209
                        while (i != 0)
                        
                        return eax_230
                else
                    int32_t eax_184
                    int32_t edx_170
                    edx_170:eax_184 = sx.q(*(arg1 + 0x10))
                    
                    if (arg6 == 4)
                        int32_t temp0_10 = divs.dp.d(edx_170:eax_184, ebx_53)
                        int32_t* ebx_71
                        
                        if (ecx_2 s> arg5)
                            ebx_71 = *(arg1 + 0x14) + ((temp0_10 * arg5 + arg4) << 2)
                            
                            if (arg4 s> arg2)
                                i_8 = temp0_10 - 1
                            else
                                i_8 = temp0_10 + 1
                            
                            if (arg11 == 0)
                                ebx_71 = &ebx_71[i_8]
                            
                            arg1 = i_15
                        else
                            ebx_71 = *(arg1 + 0x14) + ((temp0_10 * ecx_2 + arg2) << 2)
                            
                            if (arg2 s> arg4)
                                i_8 = temp0_10 - 1
                                arg1 = arg5 - ecx_2
                            else
                                i_8 = temp0_10 + 1
                                arg1 = arg5 - ecx_2
                        
                        if (arg11 != 0)
                            arg1 += 1
                        
                        if (arg1 != 0)
                            uint32_t eax_213
                            
                            do
                                int32_t edi_56 = *ebx_71
                                arg1 -= 1
                                int32_t eax_197
                                int32_t edx_184
                                edx_184:eax_197 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((edi_56 & *(esi + 0x14)) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_10)
                                int32_t eax_203
                                int32_t edx_189
                                edx_189:eax_203 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((edi_56 & *(esi + 0xc)) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_8)
                                int32_t eax_208
                                int32_t edx_196
                                edx_196:eax_208 = mulu.dp.d(0x80808081, 
                                    zx.d(*(((edi_56 & *(esi + 0x10)) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_c)
                                uint32_t eax_210 = edx_184 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | edx_189 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    | edx_196 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                                char eax_211 = *(esi + 0x23)
                                eax_213 = eax_210 | zx.d(*(((edi_56 & *(esi + 0x18)) u>> eax_211)
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << eax_211
                                *ebx_71 = eax_213
                                ebx_71 = &ebx_71[i_8]
                            while (arg1 != 0)
                            
                            return eax_213
                    else
                        int32_t temp0_9 = divs.dp.d(edx_170:eax_184, ebx_53)
                        uint32_t i_16
                        uint32_t* edi_53
                        
                        if (ecx_2 s> arg5)
                            edi_53 = *(arg1 + 0x14) + ((temp0_9 * arg5 + arg4) << 2)
                            
                            if (arg4 s> arg2)
                                i_8 = temp0_9 - 1
                            else
                                i_8 = temp0_9 + 1
                            
                            if (arg11 == 0)
                                edi_53 = &edi_53[i_8]
                            
                            i_16 = i_15
                        else
                            edi_53 = *(arg1 + 0x14) + ((temp0_9 * ecx_2 + arg2) << 2)
                            
                            if (arg2 s> arg4)
                                i_8 = temp0_9 - 1
                                i_16 = arg5 - ecx_2
                            else
                                i_8 = temp0_9 + 1
                                i_16 = arg5 - ecx_2
                        
                        if (arg11 != 0)
                            i_16 += 1
                        
                        if (i_16 != 0)
                            uint32_t eax_193
                            uint32_t i_1
                            
                            do
                                uint32_t eax_192 = ecx_1 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | var_10 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_c u>> *(esi + 0x1d) << *(esi + 0x21)
                                eax_193 = eax_192 | var_8 u>> *(esi + 0x1c) << *(esi + 0x20)
                                *edi_53 = eax_193
                                edi_53 += i_8 * 4
                                i_1 = i_16
                                i_16 -= 1
                            while (i_1 != 1)
                            return eax_193
            else if (arg6 == 1)
                int32_t eax_333
                int32_t edx_312
                edx_312:eax_333 = sx.q(arg4 - arg2)
                int32_t ebx_136 = (eax_333 ^ edx_312) - edx_312
                int32_t eax_336
                int32_t edx_313
                edx_313:eax_336 = sx.q(arg5 - ecx_2)
                int32_t eax_338 = (eax_336 ^ edx_313) - edx_313
                int32_t var_24_4
                int32_t var_20_4
                int32_t i_26
                uint32_t i_13
                int32_t i_14
                int32_t edx_318
                
                if (ebx_136 s< eax_338)
                    i_26 = eax_338 + 1
                    arg6 = ebx_136 * 2 - eax_338
                    var_24_4 = ebx_136 * 2
                    edx_318 = 1
                    var_20_4 = (ebx_136 - eax_338) * 2
                    i_8 = 0
                    i_14 = 1
                    i_13 = 1
                else
                    i_26 = ebx_136 + 1
                    arg6 = eax_338 * 2 - ebx_136
                    var_20_4 = (eax_338 - ebx_136) * 2
                    i_8 = 1
                    var_24_4 = eax_338 * 2
                    edx_318 = 1
                    i_14 = 0
                    i_13 = 1
                
                if (arg2 s> arg4)
                    i_8 = neg.d(i_8)
                    edx_318 = 0xffffffff
                
                if (ecx_2 s> arg5)
                    i_14 = neg.d(i_14)
                    i_13 = 0xffffffff
                
                arg3 = ecx_2
                int32_t i_22 = i_26
                
                if (arg11 == 0)
                    i_22 -= 1
                
                if (i_22 s> 0)
                    uint32_t eax_341 = i_8 * 2
                    arg5 = arg2 * 4
                    int32_t i_10 = i_22
                    int32_t i_2
                    
                    do
                        int32_t* ebx_148 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + arg5
                        int32_t eax_347
                        int32_t edx_328
                        edx_328:eax_347 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*ebx_148 & *(esi + 0xc)) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi_1)
                        int32_t eax_355
                        int32_t edx_332
                        edx_332:eax_355 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*ebx_148 & *(esi + 0x10)) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi_1)
                        int32_t eax_360
                        int32_t edx_340
                        edx_340:eax_360 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*ebx_148 & *(esi + 0x14)) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi_1)
                        uint32_t eax_362 = ((edx_328 u>> 7) + var_8) u>> *(esi + 0x1c) << *(esi + 0x20)
                            | ((edx_332 u>> 7) + var_c) u>> *(esi + 0x1d) << *(esi + 0x21)
                            | ((edx_340 u>> 7) + var_10) u>> *(esi + 0x1e) << *(esi + 0x22)
                        *ebx_148 = eax_362 | zx.d(*(((*ebx_148 & *(esi + 0x18)) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                        int32_t ecx_297
                        uint32_t edx_346
                        
                        if (arg6 s>= 0)
                            ecx_297 = var_20_4
                            edx_346 = edx_318 * 4
                            i_8 = i_13
                        else
                            ecx_297 = var_24_4
                            edx_346 = eax_341 * 2
                            i_8 = i_14
                        
                        arg6 += ecx_297
                        arg5 += edx_346
                        arg3 += i_8
                        i_2 = i_10
                        i_10 -= 1
                    while (i_2 != 1)
            else if (arg6 == 2)
                int32_t eax_308
                int32_t edx_299
                edx_299:eax_308 = sx.q(arg4 - arg2)
                int32_t edi_99 = (eax_308 ^ edx_299) - edx_299
                int32_t eax_311
                int32_t edx_300
                edx_300:eax_311 = sx.q(arg5 - ecx_2)
                int32_t eax_313 = (eax_311 ^ edx_300) - edx_300
                int32_t var_24_3
                int32_t var_20_3
                int32_t i_25
                int32_t var_14_2
                int32_t edx_303
                uint32_t ebx_117
                int32_t edi_100
                
                if (edi_99 s< eax_313)
                    i_25 = eax_313 + 1
                    int32_t edx_305 = edi_99 * 2
                    var_20_3 = (edi_99 - eax_313) * 2
                    edi_100 = 1
                    ebx_117 = edx_305 - eax_313
                    var_24_3 = edx_305
                    i_8 = 0
                    edx_303 = 1
                    var_14_2 = 1
                else
                    i_25 = edi_99 + 1
                    int32_t edx_302 = eax_313 * 2
                    var_24_3 = edx_302
                    edx_303 = 1
                    ebx_117 = edx_302 - edi_99
                    var_20_3 = (eax_313 - edi_99) * 2
                    i_8 = 1
                    edi_100 = 0
                    var_14_2 = 1
                
                arg6 = ebx_117
                int32_t var_18_2 = edi_100
                
                if (arg2 s> arg4)
                    i_8 = neg.d(i_8)
                    edx_303 = 0xffffffff
                
                if (ecx_2 s> arg5)
                    var_18_2 = neg.d(edi_100)
                    var_14_2 = 0xffffffff
                
                int32_t i_24 = i_25
                arg3 = ecx_2
                
                if (arg11 == 0)
                    i_24 -= 1
                
                if (i_24 s> 0)
                    uint32_t edi_106 = arg2 * 4
                    arg5 = edi_106
                    int32_t i_11 = i_24
                    uint32_t ecx_256 = ecx_2
                    uint32_t eax_330
                    int32_t i_3
                    
                    do
                        int32_t edx_310 = *(arg1 + 0x10) * ecx_256 + *(arg1 + 0x14)
                        int32_t eax_319 = *(edx_310 + edi_106)
                        uint32_t eax_323 = zx.d(*(((eax_319 & *(esi + 0xc)) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_8
                        
                        if (eax_323 u> 0xff)
                            eax_323 = 0xff
                        
                        uint32_t ebx_131 = zx.d(*(((eax_319 & *(esi + 0x10)) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_c
                        
                        if (ebx_131 u> 0xff)
                            ebx_131 = 0xff
                        
                        uint32_t edi_110 = zx.d(*(((eax_319 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_10
                        
                        if (edi_110 u> 0xff)
                            edi_110 = 0xff
                        
                        uint32_t eax_327 = eax_323 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | ebx_131 u>> *(esi + 0x1d) << *(esi + 0x21)
                            | edi_110 u>> *(esi + 0x1e) << *(esi + 0x22)
                        *(edx_310 + edi_106) = eax_327 | zx.d(*(((eax_319 & *(esi + 0x18))
                            u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f)
                            << *(esi + 0x23)
                        
                        if (arg6 s>= 0)
                            eax_330 = arg6 + var_20_3
                            edi_106 = arg5 + edx_303 * 4
                            ecx_256 = arg3 + var_14_2
                        else
                            eax_330 = arg6 + var_24_3
                            edi_106 = arg5 + i_8 * 4
                            ecx_256 = arg3 + var_18_2
                        
                        i_3 = i_11
                        i_11 -= 1
                        arg3 = ecx_256
                        arg5 = edi_106
                        arg6 = eax_330
                    while (i_3 != 1)
                    return eax_330
            else if (arg6 == 4)
                int32_t eax_275
                int32_t edx_266
                edx_266:eax_275 = sx.q(arg4 - arg2)
                int32_t edi_87 = (eax_275 ^ edx_266) - edx_266
                int32_t eax_278
                int32_t edx_267
                edx_267:eax_278 = sx.q(arg5 - ecx_2)
                int32_t eax_280 = (eax_278 ^ edx_267) - edx_267
                int32_t var_24_2
                int32_t var_20_2
                int32_t var_1c_2
                int32_t i_27
                int32_t edx_270
                uint32_t ebx_110
                int32_t edi_88
                
                if (edi_87 s< eax_280)
                    i_27 = eax_280 + 1
                    int32_t edx_272 = edi_87 * 2
                    var_24_2 = (edi_87 - eax_280) * 2
                    edi_88 = 1
                    ebx_110 = edx_272 - eax_280
                    var_20_2 = edx_272
                    i_8 = 0
                    edx_270 = 1
                    var_1c_2 = 1
                else
                    i_27 = edi_87 + 1
                    int32_t edx_269 = eax_280 * 2
                    var_20_2 = edx_269
                    edx_270 = 1
                    ebx_110 = edx_269 - edi_87
                    var_24_2 = (eax_280 - edi_87) * 2
                    i_8 = 1
                    edi_88 = 0
                    var_1c_2 = 1
                
                arg6 = ebx_110
                int32_t var_14_1 = edi_88
                
                if (arg2 s> arg4)
                    i_8 = neg.d(i_8)
                    edx_270 = 0xffffffff
                
                if (ecx_2 s> arg5)
                    var_14_1 = neg.d(edi_88)
                    var_1c_2 = 0xffffffff
                
                arg3 = ecx_2
                int32_t i_21 = i_27
                
                if (arg11 == 0)
                    i_21 -= 1
                
                if (i_21 s> 0)
                    arg5 = arg2 << 2
                    int32_t i_12 = i_21
                    int32_t eax_305
                    int32_t i_4
                    
                    do
                        int32_t* edi_96 = *(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + arg5
                        int32_t ebx_113 = *edi_96
                        int32_t eax_288
                        int32_t edx_278
                        edx_278:eax_288 = mulu.dp.d(0x80808081, 
                            zx.d(*(((ebx_113 & *(esi + 0x14)) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_10)
                        int32_t eax_294
                        int32_t edx_283
                        edx_283:eax_294 = mulu.dp.d(0x80808081, 
                            zx.d(*(((ebx_113 & *(esi + 0xc)) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_8)
                        int32_t eax_299
                        int32_t edx_290
                        edx_290:eax_299 = mulu.dp.d(0x80808081, 
                            zx.d(*(((ebx_113 & *(esi + 0x10)) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_c)
                        uint32_t eax_301 = edx_278 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | edx_283 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edx_290 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                        char eax_302 = *(esi + 0x23)
                        *edi_96 = eax_301 | zx.d(*(((ebx_113 & *(esi + 0x18)) u>> eax_302)
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << eax_302
                        uint32_t ecx_255
                        int32_t edx_298
                        
                        if (arg6 s>= 0)
                            eax_305 = var_24_2
                            ecx_255 = edx_270 * 4
                            edx_298 = var_1c_2
                        else
                            eax_305 = var_20_2
                            ecx_255 = i_8 * 4
                            edx_298 = var_14_1
                        
                        arg6 += eax_305
                        arg5 += ecx_255
                        arg3 += edx_298
                        i_4 = i_12
                        i_12 -= 1
                    while (i_4 != 1)
                    return eax_305
            else
                int32_t eax_262
                int32_t edx_259
                edx_259:eax_262 = sx.q(arg4 - arg2)
                int32_t edi_73 = (eax_262 ^ edx_259) - edx_259
                int32_t eax_265
                int32_t edx_260
                edx_260:eax_265 = sx.q(arg5 - ecx_2)
                int32_t eax_267 = (eax_265 ^ edx_260) - edx_260
                int32_t var_20_1
                int32_t var_1c_1
                int32_t edx_263
                int32_t ebx_94
                int32_t edi_74
                
                if (edi_73 s< eax_267)
                    int32_t ebx_95 = edi_73 * 2
                    arg3 = eax_267 + 1
                    var_1c_1 = ebx_95
                    ebx_94 = 1
                    edx_263 = ebx_95 - eax_267
                    var_20_1 = (edi_73 - eax_267) * 2
                    edi_74 = 0
                    arg6 = 1
                else
                    int32_t ebx_93 = eax_267 * 2
                    arg3 = edi_73 + 1
                    edx_263 = ebx_93 - edi_73
                    edi_74 = 1
                    var_1c_1 = ebx_93
                    var_20_1 = (eax_267 - edi_73) * 2
                    ebx_94 = 1
                    arg6 = 0
                
                i_8 = arg2
                uint32_t var_18_1 = 1
                
                if (i_8 s> arg4)
                    edi_74 = neg.d(edi_74)
                    ebx_94 = 0xffffffff
                
                if (ecx_2 s> arg5)
                    i_8 = neg.d(arg6)
                    arg6 = i_8
                    var_18_1 = 0xffffffff
                
                arg5 = ecx_2
                uint32_t ecx_222 = arg3
                
                if (arg11 == 0)
                    ecx_222 -= 1
                
                if (ecx_222 s> 0)
                    uint32_t eax_273 = arg2 * 4
                    arg3 = ecx_222
                    uint32_t i_5
                    
                    do
                        uint32_t edi_83 = ecx_1 u>> *(esi + 0x1f) << *(esi + 0x23)
                            | var_10 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | var_c u>> *(esi + 0x1d) << *(esi + 0x21)
                        *(*(arg1 + 0x10) * arg5 + eax_273 + *(arg1 + 0x14)) =
                            edi_83 | var_8 u>> *(esi + 0x1c) << *(esi + 0x20)
                        uint32_t ecx_235
                        
                        if (edx_263 s>= 0)
                            edx_263 += var_20_1
                            eax_273 += ebx_94 * 4
                            ecx_235 = var_18_1
                        else
                            edx_263 += var_1c_1
                            eax_273 += edi_74 * 4
                            ecx_235 = arg6
                        
                        arg5 += ecx_235
                        i_5 = arg3
                        arg3 -= 1
                    while (i_5 != 1)
                    return eax_273
        else if (arg6 == 1)
            int32_t temp0_8 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(esi + 9)))
            uint32_t edx_141 = arg5
            int32_t ebx_45 = *(arg1 + 0x14)
            void* ecx_126
            
            if (ecx_2 s> edx_141)
                i_8 = ebx_45 + ((temp0_8 * edx_141 + arg2) << 2)
                arg5 = i_8
                
                if (arg11 != 0)
                    ecx_126 = ecx_2 - edx_141 + 1
                else
                    i_8 += temp0_8 << 2
                    arg5 = i_8
                    ecx_126 = ecx_2 - edx_141
                
                arg1 = ecx_126
            else
                void* edx_142 = edx_141 - ecx_2
                i_8 = ebx_45 + ((temp0_8 * ecx_2 + arg2) << 2)
                arg5 = i_8
                
                if (arg11 == 0)
                    ecx_126 = edx_142
                    arg1 = edx_142
                else
                    ecx_126 = edx_142 + 1
                    arg1 = ecx_126
            
            if (ecx_126 != 0)
                void* eax_171
                
                do
                    int32_t ebx_47 = *arg5
                    arg1 -= 1
                    int32_t eax_151
                    int32_t edx_147
                    edx_147:eax_151 = mulu.dp.d(0x80808081, 
                        zx.d(*(((ebx_47 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi_1)
                    int32_t eax_159
                    int32_t edx_151
                    edx_151:eax_159 = mulu.dp.d(0x80808081, 
                        zx.d(*(((ebx_47 & *(esi + 0xc)) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi_1)
                    int32_t eax_164
                    int32_t edx_159
                    edx_159:eax_164 = mulu.dp.d(0x80808081, 
                        zx.d(*(((ebx_47 & *(esi + 0x10)) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi_1)
                    uint32_t eax_166 = ((edx_147 u>> 7) + var_10) u>> *(esi + 0x1e) << *(esi + 0x22)
                        | ((edx_151 u>> 7) + var_8) u>> *(esi + 0x1c) << *(esi + 0x20)
                        | ((edx_159 u>> 7) + var_c) u>> *(esi + 0x1d) << *(esi + 0x21)
                    char eax_167 = *(esi + 0x23)
                    uint32_t* eax_170 = arg5
                    *eax_170 = eax_166 | zx.d(
                        *(((ebx_47 & *(esi + 0x18)) u>> eax_167) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        u>> *(esi + 0x1f) << eax_167
                    eax_171 = &eax_170[temp0_8]
                    arg5 = eax_171
                while (arg1 != 0)
                
                return eax_171
        else
            uint32_t edi_25 = zx.d(*(esi + 9))
            
            if (arg6 == 2)
                i_8 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_25)
                int32_t edi_43 = *(arg1 + 0x14)
                uint32_t i_6
                void* edx_128
                
                if (ecx_2 s> ebx)
                    edx_128 = edi_43 + ((i_8 * ebx + arg2) << 2)
                    arg1 = edx_128
                    
                    if (arg11 != 0)
                        i_6 = ecx_2 - ebx + 1
                    else
                        edx_128 += i_8 << 2
                        arg1 = edx_128
                        i_6 = ecx_2 - ebx
                else
                    uint32_t i_19 = ebx - ecx_2
                    edx_128 = edi_43 + ((i_8 * ecx_2 + arg2) << 2)
                    arg1 = edx_128
                    
                    if (arg11 == 0)
                        i_6 = i_19
                    else
                        i_6 = i_19 + 1
                
                if (i_6 != 0)
                    uint32_t eax_140
                    
                    do
                        int32_t eax_131 = *edx_128
                        uint32_t eax_135 = zx.d(*(((eax_131 & *(esi + 0xc)) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_8
                        
                        if (eax_135 u> 0xff)
                            eax_135 = 0xff
                        
                        uint32_t edi_48 = zx.d(*(((eax_131 & *(esi + 0x10)) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_c
                        
                        if (edi_48 u> 0xff)
                            edi_48 = 0xff
                        
                        uint32_t edx_135 = zx.d(*(((eax_131 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_10
                        
                        if (edx_135 u> 0xff)
                            edx_135 = 0xff
                        
                        i_6 -= 1
                        uint32_t eax_139 = eax_135 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edi_48 u>> *(esi + 0x1d) << *(esi + 0x21)
                            | edx_135 u>> *(esi + 0x1e) << *(esi + 0x22)
                        uint32_t* edx_138 = arg1
                        eax_140 = eax_139 | zx.d(*(((eax_131 & *(esi + 0x18)) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                        *edx_138 = eax_140
                        edx_128 = &edx_138[i_8]
                        arg1 = edx_128
                    while (i_6 != 0)
                    
                    return eax_140
            else if (arg6 == 4)
                i_8 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_25)
                int32_t edi_38 = *(arg1 + 0x14)
                
                if (ecx_2 s> ebx)
                    uint32_t edx_99 = edi_38 + ((i_8 * ebx + arg2) << 2)
                    arg5 = edx_99
                    void* ecx_85
                    
                    if (arg11 != 0)
                        ecx_85 = ecx_2 - ebx + 1
                    else
                        arg5 = edx_99 + (i_8 << 2)
                        ecx_85 = ecx_2 - ebx
                    
                    arg1 = ecx_85
                else
                    void* ebx_30 = ebx - ecx_2
                    arg5 = edi_38 + ((i_8 * ecx_2 + arg2) << 2)
                    
                    if (arg11 != 0)
                        ebx_30 += 1
                    
                    arg1 = ebx_30
                
                if (arg1 != 0)
                    void* eax_125
                    
                    do
                        int32_t edi_39 = *arg5
                        char ebx_31 = *(esi + 0x22)
                        arg1 -= 1
                        int32_t eax_107
                        int32_t edx_104
                        edx_104:eax_107 = mulu.dp.d(0x80808081, 
                            zx.d(*(((edi_39 & *(esi + 0x14)) u>> ebx_31)
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_10)
                        char ebx_32 = *(esi + 0x20)
                        int32_t eax_113
                        int32_t edx_109
                        edx_109:eax_113 = mulu.dp.d(0x80808081, 
                            zx.d(*(((edi_39 & *(esi + 0xc)) u>> ebx_32)
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_8)
                        char ebx_33 = *(esi + 0x21)
                        int32_t eax_118
                        int32_t edx_116
                        edx_116:eax_118 = mulu.dp.d(0x80808081, 
                            zx.d(*(((edi_39 & *(esi + 0x10)) u>> ebx_33)
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_c)
                        char eax_121 = *(esi + 0x23)
                        uint32_t ecx_103 = zx.d(*(esi + 0x1f))
                        uint32_t eax_123 = edx_104 u>> 7 u>> *(esi + 0x1e) << ebx_31
                            | edx_109 u>> 7 u>> *(esi + 0x1c) << ebx_32
                            | edx_116 u>> 7 u>> *(esi + 0x1d) << ebx_33
                            | zx.d(*(((edi_39 & *(esi + 0x18)) u>> eax_121) + (&data_8bac68)[ecx_103]))
                            u>> ecx_103.b << eax_121
                        uint32_t* eax_124 = arg5
                        *eax_124 = eax_123
                        eax_125 = &eax_124[i_8]
                        arg5 = eax_125
                    while (arg1 != 0)
                    
                    return eax_125
            else
                i_8 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_25)
                int32_t edi_27 = *(arg1 + 0x14)
                uint32_t* edx_88
                uint32_t i_18
                
                if (ecx_2 s> ebx)
                    edx_88 = edi_27 + ((i_8 * ebx + arg2) << 2)
                    
                    if (arg11 != 0)
                        i_18 = ecx_2 - ebx + 1
                    else
                        edx_88 = &edx_88[i_8]
                        i_18 = ecx_2 - ebx
                else
                    i_18 = ebx - ecx_2
                    edx_88 = edi_27 + ((i_8 * ecx_2 + arg2) << 2)
                    
                    if (arg11 != 0)
                        i_18 += 1
                
                if (i_18 != 0)
                    uint32_t eax_100
                    uint32_t i_7
                    
                    do
                        uint32_t eax_99 = ecx_1 u>> *(esi + 0x1f) << *(esi + 0x23)
                            | var_10 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | var_c u>> *(esi + 0x1d) << *(esi + 0x21)
                        eax_100 = eax_99 | var_8 u>> *(esi + 0x1c) << *(esi + 0x20)
                        *edx_88 = eax_100
                        edx_88 += i_8 * 4
                        i_7 = i_18
                        i_18 -= 1
                    while (i_7 != 1)
                    return eax_100
    else if (arg6 == 1)
        int32_t eax_60 = divs.dp.d(sx.q(*(arg1 + 0x10)), zx.d(*(esi + 9))) * ecx_2
        int32_t ecx_53 = *(arg1 + 0x14)
        uint32_t edx_57
        
        if (arg2 s> arg4)
            i_8 = ecx_53 + ((eax_60 + arg4) << 2)
            arg1 = i_8
            
            if (arg11 != 0)
                edx_57 = arg2 - arg4 + 1
            else
                arg1 += 4
                edx_57 = arg2 - arg4
            
            arg5 = edx_57
        else
            i_8 = ecx_53 + ((eax_60 + arg2) << 2)
            uint32_t ebx_26 = arg4 - arg2
            arg1 = i_8
            
            if (arg11 == 0)
                edx_57 = ebx_26
                arg5 = ebx_26
            else
                edx_57 = ebx_26 + 1
                arg5 = edx_57
        
        if (edx_57 != 0)
            uint32_t* eax_84
            
            do
                int32_t ebx_27 = *arg1
                arg5 -= 1
                int32_t eax_65
                int32_t edx_61
                edx_61:eax_65 = mulu.dp.d(0x80808081, 
                    zx.d(*(((ebx_27 & *(esi + 0x14)) u>> *(esi + 0x22))
                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * edi_1)
                int32_t eax_73
                int32_t edx_65
                edx_65:eax_73 = mulu.dp.d(0x80808081, 
                    zx.d(*(((ebx_27 & *(esi + 0xc)) u>> *(esi + 0x20))
                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * edi_1)
                int32_t eax_78
                int32_t edx_73
                edx_73:eax_78 = mulu.dp.d(0x80808081, 
                    zx.d(*(((ebx_27 & *(esi + 0x10)) u>> *(esi + 0x21))
                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * edi_1)
                uint32_t eax_80 = ((edx_61 u>> 7) + var_10) u>> *(esi + 0x1e) << *(esi + 0x22)
                    | ((edx_65 u>> 7) + var_8) u>> *(esi + 0x1c) << *(esi + 0x20)
                    | ((edx_73 u>> 7) + var_c) u>> *(esi + 0x1d) << *(esi + 0x21)
                char eax_81 = *(esi + 0x23)
                eax_84 = arg1
                *eax_84 = eax_80 |
                    zx.d(*(((ebx_27 & *(esi + 0x18)) u>> eax_81) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    u>> *(esi + 0x1f) << eax_81
                arg1 = &eax_84[1]
            while (arg5 != 0)
            
            return &eax_84[1]
    else
        uint32_t edi_2 = zx.d(*(esi + 9))
        
        if (arg6 == 2)
            int32_t eax_43 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_2) * ecx_2
            int32_t ecx_32 = *(arg1 + 0x14)
            void* ecx_33
            
            if (arg2 s> arg4)
                ecx_33 = ecx_32 + ((eax_43 + arg4) << 2)
                arg1 = ecx_33
                
                if (arg11 != 0)
                    i_8 = arg2 - arg4 + 1
                else
                    ecx_33 += 4
                    arg1 = ecx_33
                    i_8 = arg2 - arg4
            else
                ecx_33 = ecx_32 + ((eax_43 + arg2) << 2)
                uint32_t i_20 = arg4 - arg2
                arg1 = ecx_33
                
                if (arg11 == 0)
                    i_8 = i_20
                else
                    i_8 = i_20 + 1
            
            if (i_8 != 0)
                do
                    int32_t eax_47 = *ecx_33
                    uint32_t eax_51 = zx.d(*(((eax_47 & *(esi + 0xc)) u>> *(esi + 0x20))
                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + var_8
                    
                    if (eax_51 u> 0xff)
                        eax_51 = 0xff
                    
                    uint32_t edi_22 = zx.d(*(((eax_47 & *(esi + 0x10)) u>> *(esi + 0x21))
                        + (&data_8bac68)[zx.d(*(esi + 0x1d))])) + var_c
                    
                    if (edi_22 u> 0xff)
                        edi_22 = 0xff
                    
                    uint32_t edx_50 = zx.d(*(((eax_47 & *(esi + 0x14)) u>> *(esi + 0x22))
                        + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + var_10
                    
                    if (edx_50 u> 0xff)
                        edx_50 = 0xff
                    
                    int32_t* ecx_51 = arg1
                    uint32_t eax_55 = eax_51 u>> *(esi + 0x1c) << *(esi + 0x20)
                        | edi_22 u>> *(esi + 0x1d) << *(esi + 0x21)
                        | edx_50 u>> *(esi + 0x1e) << *(esi + 0x22)
                    *ecx_51 = eax_55 | zx.d(*(((eax_47 & *(esi + 0x18)) u>> *(esi + 0x23))
                        + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                    i_8 -= 1
                    ecx_33 = &ecx_51[1]
                    arg1 = ecx_33
                while (i_8 != 0)
        else if (arg6 == 4)
            int32_t eax_20 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_2) * ecx_2
            int32_t ecx_12 = *(arg1 + 0x14)
            void* edx_18
            int32_t* ebx_12
            
            if (arg2 s> arg4)
                i_8 = eax_20 + arg4
                ebx_12 = ecx_12 + (i_8 << 2)
                
                if (arg11 != 0)
                    edx_18 = arg2 - arg4 + 1
                else
                    ebx_12 = &ebx_12[1]
                    edx_18 = arg2 - arg4
                
                arg1 = edx_18
            else
                i_8 = eax_20 + arg2
                void* edi_13 = arg4 - arg2
                ebx_12 = ecx_12 + (i_8 << 2)
                
                if (arg11 == 0)
                    edx_18 = edi_13
                    arg1 = edi_13
                else
                    edx_18 = edi_13 + 1
                    arg1 = edx_18
            
            if (edx_18 != 0)
                int32_t* ebx_13 = ebx_12
                uint32_t eax_39
                
                do
                    int32_t edi_14 = *ebx_13
                    arg1 -= 1
                    ebx_13 = &ebx_13[1]
                    int32_t eax_23
                    int32_t edx_22
                    edx_22:eax_23 = mulu.dp.d(0x80808081, 
                        zx.d(*(((edi_14 & *(esi + 0x14)) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * var_10)
                    int32_t eax_29
                    int32_t edx_27
                    edx_27:eax_29 = mulu.dp.d(0x80808081, 
                        zx.d(*(((edi_14 & *(esi + 0xc)) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * var_8)
                    int32_t eax_34
                    int32_t edx_34
                    edx_34:eax_34 = mulu.dp.d(0x80808081, 
                        zx.d(*(((edi_14 & *(esi + 0x10)) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * var_c)
                    uint32_t eax_36 = edx_22 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                        | edx_27 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                        | edx_34 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                    char eax_37 = *(esi + 0x23)
                    eax_39 = eax_36 | zx.d(
                        *(((edi_14 & *(esi + 0x18)) u>> eax_37) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        u>> *(esi + 0x1f) << eax_37
                    ebx_13[-1] = eax_39
                while (arg1 != 0)
                
                return eax_39
        else
            int32_t eax_14 = divs.dp.d(sx.q(*(arg1 + 0x10)), edi_2) * ecx_2
            int32_t edx_14 = *(arg1 + 0x14)
            void* edx_15
            
            if (arg2 s> arg4)
                edx_15 = edx_14 + ((eax_14 + arg4) << 2)
                
                if (arg11 != 0)
                    i_8 = arg2 - arg4 + 1
                else
                    edx_15 += 4
                    i_8 = arg2 - arg4
            else
                uint32_t i_17 = arg4 - arg2
                edx_15 = edx_14 + ((eax_14 + arg2) << 2)
                
                if (arg11 == 0)
                    i_8 = i_17
                else
                    i_8 = i_17 + 1
            
            if (i_8 != 0)
                uint32_t i_9
                
                do
                    uint32_t edi_9 = ecx_1 u>> *(esi + 0x1f) << *(esi + 0x23)
                        | var_10 u>> *(esi + 0x1e) << *(esi + 0x22)
                        | var_c u>> *(esi + 0x1d) << *(esi + 0x21)
                    edx_15 += 4
                    i_9 = i_8
                    i_8 -= 1
                    *(edx_15 - 4) = edi_9 | var_8 u>> *(esi + 0x1c) << *(esi + 0x20)
                while (i_9 != 1)
    
    return i_8
}

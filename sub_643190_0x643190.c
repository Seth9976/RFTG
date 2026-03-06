// 函数名称: sub_643190
// 虚拟地址: 0x643190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_643190(int32_t arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6, char arg7)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    void* esi = *(edi + 4)
    int32_t ebx = 0xff - zx.d(arg7)
    
    if (*(esi + 9) != 4)
        sub_5cd050(4)
        return 0xffffffff
    
    if (arg3 == 1)
        arg7.d = *(arg2 + 8)
        arg1 = *(arg2 + 0xc)
        int32_t temp0_3 = divs.dp.d(sx.q(*(edi + 0x10)), zx.d(*(esi + 9)))
        uint32_t* edi_4 = *(edi + 0x14) + ((*(arg2 + 4) * temp0_3 + *arg2) << 2)
        int32_t ecx_202 = arg7.d
        
        while (true)
            int32_t edx_217 = arg1
            arg1 -= 1
            
            if (edx_217 == 0)
                break
            
            int32_t eax_192
            int32_t edx_218
            edx_218:eax_192 = sx.q(ecx_202 + 3)
            int32_t var_c_4 = (eax_192 + (edx_218 & 3)) s>> 2
            
            switch (ecx_202 & 3)
                case 0
                    goto label_643dac
                case 1
                    goto label_643c9b
                case 2
                    while (true)
                        int32_t eax_273
                        int32_t edx_304
                        edx_304:eax_273 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & *edi_4) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ebx)
                        int32_t eax_281
                        int32_t edx_309
                        edx_309:eax_281 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & *edi_4) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ebx)
                        uint32_t eax_284 =
                            ((edx_304 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                            | ((edx_309 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                        int32_t eax_287
                        int32_t edx_317
                        edx_317:eax_287 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & *edi_4) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ebx)
                        *edi_4 = eax_284
                            | ((edx_317 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20) | zx.d(
                            *(((*(esi + 0x18) & *edi_4) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                        edi_4 = &edi_4[1]
                    label_643c9b:
                        uint32_t edx_222 = (*(esi + 0x14) & *edi_4) u>> *(esi + 0x22)
                        edi_4 = &edi_4[1]
                        int32_t eax_199
                        int32_t edx_223
                        edx_223:eax_199 = mulu.dp.d(0x80808081, 
                            zx.d(*(edx_222 + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ebx)
                        int32_t eax_207
                        int32_t edx_228
                        edx_228:eax_207 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & edi_4[-1]) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ebx)
                        uint32_t eax_210 =
                            ((edx_223 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                            | ((edx_228 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                        int32_t eax_213
                        int32_t edx_236
                        edx_236:eax_213 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & edi_4[-1]) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ebx)
                        uint32_t edx_246 = zx.d(*(((*(esi + 0x18) & edi_4[-1]) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                        edi_4[-1] = eax_210
                            | ((edx_236 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edx_246
                        int32_t eax_222 = var_c_4 - 1
                        var_c_4 = eax_222
                        
                        if (eax_222 s<= 0)
                            break
                        
                    label_643dac:
                        int32_t eax_225
                        int32_t edx_250
                        edx_250:eax_225 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & *edi_4) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ebx)
                        int32_t eax_233
                        int32_t edx_255
                        edx_255:eax_233 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & *edi_4) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ebx)
                        uint32_t eax_236 =
                            ((edx_250 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                            | ((edx_255 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                        int32_t eax_239
                        int32_t edx_263
                        edx_263:eax_239 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & *edi_4) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ebx)
                        *edi_4 = eax_236
                            | ((edx_263 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20) | zx.d(
                            *(((*(esi + 0x18) & *edi_4) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                        edi_4 = &edi_4[1]
                    label_643e9c:
                        int32_t eax_249
                        int32_t edx_277
                        edx_277:eax_249 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & *edi_4) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * ebx)
                        int32_t eax_257
                        int32_t edx_282
                        edx_282:eax_257 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & *edi_4) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * ebx)
                        uint32_t eax_260 =
                            ((edx_277 u>> 7) + zx.d(arg6)) u>> *(esi + 0x1e) << *(esi + 0x22)
                            | ((edx_282 u>> 7) + zx.d(arg5)) u>> *(esi + 0x1d) << *(esi + 0x21)
                        int32_t eax_263
                        int32_t edx_290
                        edx_290:eax_263 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & *edi_4) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * ebx)
                        *edi_4 = eax_260
                            | ((edx_290 u>> 7) + zx.d(arg4)) u>> *(esi + 0x1c) << *(esi + 0x20) | zx.d(
                            *(((*(esi + 0x18) & *edi_4) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                        edi_4 = &edi_4[1]
                    
                    ecx_202 = arg7.d
                case 3
                    goto label_643e9c
            
            edi_4 = &edi_4[temp0_3 - arg7.d]
    else if (arg3 == 2)
        int32_t edx_165 = *(arg2 + 8)
        arg1 = *(arg2 + 0xc)
        int32_t temp0_2 = divs.dp.d(sx.q(*(edi + 0x10)), zx.d(*(esi + 9)))
        int32_t ebx_10 = temp0_2 - edx_165
        int32_t var_14_1 = ebx_10
        int32_t* edi_3 = *(edi + 0x14) + ((*(arg2 + 4) * temp0_2 + *arg2) << 2)
        
        while (true)
            int32_t ecx_120 = arg1
            arg1 -= 1
            
            if (ecx_120 == 0)
                break
            
            int32_t eax_144
            int32_t edx_170
            edx_170:eax_144 = sx.q(edx_165 + 3)
            int32_t var_8_3 = (eax_144 + (edx_170 & 3)) s>> 2
            
            switch (edx_165 & 3)
                case 0
                    goto label_64393a
                case 1
                    goto label_643838
                case 2
                    while (true)
                        int32_t eax_177 = *edi_3
                        arg7.d = zx.d(*(((*(esi + 0x10) & eax_177) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                        uint32_t eax_181 = zx.d(*(((*(esi + 0xc) & eax_177) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                        
                        if (eax_181 u> 0xff)
                            eax_181 = 0xff
                        
                        int32_t ecx_186 = arg7.d + zx.d(arg5)
                        arg7.d = ecx_186
                        
                        if (ecx_186 u> 0xff)
                            arg7.d = 0xff
                        
                        uint32_t ebx_85 = zx.d(*(((*(esi + 0x14) & eax_177) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                        
                        if (ebx_85 u> 0xff)
                            ebx_85 = 0xff
                        
                        uint32_t edx_212 = zx.d(*(((*(esi + 0x18) & eax_177) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                            | ebx_85 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | arg7.d u>> *(esi + 0x1d) << *(esi + 0x21)
                            | eax_181 u>> *(esi + 0x1c) << *(esi + 0x20)
                        *edi_3 = edx_212
                        edi_3 = &edi_3[1]
                    label_643838:
                        int32_t edx_172 = *edi_3
                        arg7.d = zx.d(*(((*(esi + 0x10) & edx_172) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                        uint32_t edx_174 = zx.d(*(((*(esi + 0xc) & edx_172) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                        
                        if (edx_174 u> 0xff)
                            edx_174 = 0xff
                        
                        int32_t ecx_132 = arg7.d + zx.d(arg5)
                        arg7.d = ecx_132
                        
                        if (ecx_132 u> 0xff)
                            arg7.d = 0xff
                        
                        uint32_t ebx_25 = zx.d(*(((*(esi + 0x14) & edx_172) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                        
                        if (ebx_25 u> 0xff)
                            ebx_25 = 0xff
                        
                        edi_3 = &edi_3[1]
                        uint32_t eax_160 = zx.d(*(((*(esi + 0x18) & edx_172) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                            | ebx_25 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | arg7.d u>> *(esi + 0x1d) << *(esi + 0x21)
                            | edx_174 u>> *(esi + 0x1c) << *(esi + 0x20)
                        edi_3[-1] = eax_160
                        int32_t eax_162 = var_8_3 - 1
                        var_8_3 = eax_162
                        
                        if (eax_162 s<= 0)
                            break
                        
                    label_64393a:
                        int32_t eax_163 = *edi_3
                        arg7.d = zx.d(*(((*(esi + 0x10) & eax_163) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                        uint32_t eax_167 = zx.d(*(((*(esi + 0xc) & eax_163) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                        
                        if (eax_167 u> 0xff)
                            eax_167 = 0xff
                        
                        int32_t ecx_150 = arg7.d + zx.d(arg5)
                        arg7.d = ecx_150
                        
                        if (ecx_150 u> 0xff)
                            arg7.d = 0xff
                        
                        uint32_t ebx_45 = zx.d(*(((*(esi + 0x14) & eax_163) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                        
                        if (ebx_45 u> 0xff)
                            ebx_45 = 0xff
                        
                        uint32_t edx_188 = zx.d(*(((*(esi + 0x18) & eax_163) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                            | ebx_45 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | arg7.d u>> *(esi + 0x1d) << *(esi + 0x21)
                            | eax_167 u>> *(esi + 0x1c) << *(esi + 0x20)
                        *edi_3 = edx_188
                        edi_3 = &edi_3[1]
                    label_643a2b:
                        int32_t eax_170 = *edi_3
                        arg7.d = zx.d(*(((*(esi + 0x10) & eax_170) u>> *(esi + 0x21))
                            + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                        uint32_t eax_174 = zx.d(*(((*(esi + 0xc) & eax_170) u>> *(esi + 0x20))
                            + (&data_8bac68)[zx.d(*(esi + 0x1c))])) + zx.d(arg4)
                        
                        if (eax_174 u> 0xff)
                            eax_174 = 0xff
                        
                        int32_t ecx_168 = arg7.d + zx.d(arg5)
                        arg7.d = ecx_168
                        
                        if (ecx_168 u> 0xff)
                            arg7.d = 0xff
                        
                        uint32_t ebx_65 = zx.d(*(((*(esi + 0x14) & eax_170) u>> *(esi + 0x22))
                            + (&data_8bac68)[zx.d(*(esi + 0x1e))])) + zx.d(arg6)
                        
                        if (ebx_65 u> 0xff)
                            ebx_65 = 0xff
                        
                        uint32_t edx_200 = zx.d(*(((*(esi + 0x18) & eax_170) u>> *(esi + 0x23))
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << *(esi + 0x23)
                            | ebx_65 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | arg7.d u>> *(esi + 0x1d) << *(esi + 0x21)
                            | eax_174 u>> *(esi + 0x1c) << *(esi + 0x20)
                        *edi_3 = edx_200
                        edi_3 = &edi_3[1]
                    
                    ebx_10 = var_14_1
                case 3
                    goto label_643a2b
            
            edi_3 = &edi_3[ebx_10]
    else if (arg3 == 4)
        int32_t eax_44 = *(arg2 + 8)
        arg7.d = *(arg2 + 0xc)
        int32_t temp0_1 = divs.dp.d(sx.q(*(edi + 0x10)), zx.d(*(esi + 9)))
        int32_t ebx_3 = eax_44
        int32_t edx_47 = temp0_1 - ebx_3
        int32_t* edi_2 = *(edi + 0x14) + ((*(arg2 + 4) * temp0_1 + *arg2) << 2)
        
        while (true)
            int32_t eax_49 = arg7.d
            arg7.d = eax_49 - 1
            
            if (eax_49 == 0)
                break
            
            int32_t eax_52
            int32_t edx_51
            edx_51:eax_52 = sx.q(ebx_3 + 3)
            arg1 = (eax_52 + (edx_51 & 3)) s>> 2
            
            switch (ebx_3 & 3)
                case 0
                    goto label_6434f3
                case 1
                    goto label_6433f7
                case 2
                    while (true)
                        int32_t ebx_7 = *edi_2
                        int32_t eax_118
                        int32_t edx_141
                        edx_141:eax_118 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & ebx_7) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                        int32_t eax_124
                        int32_t edx_147
                        edx_147:eax_124 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & ebx_7) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                        int32_t eax_129
                        int32_t edx_155
                        edx_155:eax_129 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & ebx_7) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                        uint32_t eax_131 = edx_141 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | edx_147 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                            | edx_155 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                        char eax_132 = *(esi + 0x23)
                        *edi_2 = eax_131 | zx.d(*(((*(esi + 0x18) & ebx_7) u>> eax_132)
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << eax_132
                        edi_2 = &edi_2[1]
                    label_6433f7:
                        int32_t ebx_4 = *edi_2
                        edi_2 = &edi_2[1]
                        int32_t eax_59
                        int32_t edx_57
                        edx_57:eax_59 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & ebx_4) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                        int32_t eax_65
                        int32_t edx_63
                        edx_63:eax_65 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & ebx_4) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                        int32_t eax_70
                        int32_t edx_71
                        edx_71:eax_70 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & ebx_4) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                        uint32_t eax_72 = edx_57 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edx_63 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | edx_71 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                        char eax_73 = *(esi + 0x23)
                        edi_2[-1] = eax_72 | zx.d(*(((*(esi + 0x18) & ebx_4) u>> eax_73)
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << eax_73
                        int32_t eax_77 = arg1 - 1
                        arg1 = eax_77
                        
                        if (eax_77 s<= 0)
                            break
                        
                    label_6434f3:
                        int32_t ebx_5 = *edi_2
                        int32_t eax_80
                        int32_t edx_85
                        edx_85:eax_80 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & ebx_5) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                        int32_t eax_86
                        int32_t edx_91
                        edx_91:eax_86 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & ebx_5) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                        int32_t eax_91
                        int32_t edx_99
                        edx_99:eax_91 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & ebx_5) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                        uint32_t eax_93 = edx_85 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edx_91 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                            | edx_99 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                        char eax_94 = *(esi + 0x23)
                        *edi_2 = eax_93 | zx.d(*(((*(esi + 0x18) & ebx_5) u>> eax_94)
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << eax_94
                        edi_2 = &edi_2[1]
                    label_6435df:
                        int32_t ebx_6 = *edi_2
                        int32_t eax_99
                        int32_t edx_113
                        edx_113:eax_99 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x10) & ebx_6) u>> *(esi + 0x21))
                                + (&data_8bac68)[zx.d(*(esi + 0x1d))])) * zx.d(arg5))
                        int32_t eax_105
                        int32_t edx_119
                        edx_119:eax_105 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0xc) & ebx_6) u>> *(esi + 0x20))
                                + (&data_8bac68)[zx.d(*(esi + 0x1c))])) * zx.d(arg4))
                        int32_t eax_110
                        int32_t edx_127
                        edx_127:eax_110 = mulu.dp.d(0x80808081, 
                            zx.d(*(((*(esi + 0x14) & ebx_6) u>> *(esi + 0x22))
                                + (&data_8bac68)[zx.d(*(esi + 0x1e))])) * zx.d(arg6))
                        uint32_t eax_112 = edx_113 u>> 7 u>> *(esi + 0x1d) << *(esi + 0x21)
                            | edx_119 u>> 7 u>> *(esi + 0x1c) << *(esi + 0x20)
                            | edx_127 u>> 7 u>> *(esi + 0x1e) << *(esi + 0x22)
                        char eax_113 = *(esi + 0x23)
                        *edi_2 = eax_112 | zx.d(*(((*(esi + 0x18) & ebx_6) u>> eax_113)
                            + (&data_8bac68)[zx.d(*(esi + 0x1f))])) u>> *(esi + 0x1f) << eax_113
                        edi_2 = &edi_2[1]
                    
                    ebx_3 = eax_44
                case 3
                    goto label_6435df
            
            edi_2 = &edi_2[edx_47]
    else
        int32_t ecx = *(arg2 + 8)
        int32_t var_8_1 = *(arg2 + 0xc)
        int32_t temp0 = divs.dp.d(sx.q(*(edi + 0x10)), zx.d(*(esi + 9)))
        int32_t ecx_3 = temp0 - ecx
        void* ebx_1
        ebx_1.b = arg6
        uint32_t* edi_1 = *(edi + 0x14) + ((*(arg2 + 4) * temp0 + *arg2) << 2)
        int32_t ecx_4 = ecx_3
        
        while (true)
            int32_t edx_5 = var_8_1
            var_8_1 -= 1
            
            if (edx_5 == 0)
                break
            
            int32_t eax_13
            int32_t edx_6
            edx_6:eax_13 = sx.q(ecx + 3)
            int32_t var_c_1 = (eax_13 + (edx_6 & 3)) s>> 2
            
            switch (ecx & 3)
                case 0
                    goto label_6432d8
                case 1
                    goto label_64327e
                case 2
                    while (true)
                        uint32_t eax_42 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                            | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                            | zx.d(ebx_1.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                        *edi_1 = eax_42 | zx.d(arg7) u>> *(esi + 0x1f) << *(esi + 0x23)
                        edi_1 = &edi_1[1]
                    label_64327e:
                        uint32_t eax_22 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                            | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                            | zx.d(ebx_1.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                        edi_1 = &edi_1[1]
                        edi_1[-1] = eax_22 | zx.d(arg7) u>> *(esi + 0x1f) << *(esi + 0x23)
                        int32_t eax_25 = var_c_1 - 1
                        var_c_1 = eax_25
                        
                        if (eax_25 s<= 0)
                            break
                        
                    label_6432d8:
                        uint32_t eax_30 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                            | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                            | zx.d(ebx_1.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                        *edi_1 = eax_30 | zx.d(arg7) u>> *(esi + 0x1f) << *(esi + 0x23)
                        edi_1 = &edi_1[1]
                    label_643322:
                        uint32_t eax_36 = zx.d(arg4) u>> *(esi + 0x1c) << *(esi + 0x20)
                            | zx.d(arg5) u>> *(esi + 0x1d) << *(esi + 0x21)
                            | zx.d(ebx_1.b) u>> *(esi + 0x1e) << *(esi + 0x22)
                        *edi_1 = eax_36 | zx.d(arg7) u>> *(esi + 0x1f) << *(esi + 0x23)
                        edi_1 = &edi_1[1]
                    
                    ecx_4 = ecx_3
                case 3
                    goto label_643322
            
            edi_1 = &edi_1[ecx_4]
    
    return 0
}

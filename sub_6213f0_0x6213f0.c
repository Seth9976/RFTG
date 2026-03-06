// 函数名称: sub_6213f0
// 虚拟地址: 0x6213f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6213f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t result_1 = arg1[7]
    int32_t edx_1 = arg1[4]
    char* ebx = arg1[5]
    int32_t edx_2 = arg1[9]
    void* esi = arg1[0xa]
    int32_t* edi = *arg1
    int32_t edx_3 = arg1[0xc]
    uint32_t eax_1 = zx.d(*(esi + 9))
    int32_t var_18 = ecx
    int32_t result
    
    if (edx_3 != 0)
        while (true)
            int32_t result_3 = result_1
            result = result_1 - 1
            result_1 = result
            
            if (result_3 == 0)
                break
            
            int32_t eax_122
            int32_t edx_158
            edx_158:eax_122 = sx.q(ecx + 7)
            int32_t var_14_3 = (eax_122 + (edx_158 & 7)) s>> 3
            
            switch (ecx & 7)
                case 0
                    goto label_622027
                case 1
                    goto label_621ea9
                case 2
                    while (true)
                        uint32_t eax_260
                        uint32_t ecx_529
                        uint32_t edx_363
                        
                        if (eax_1 - 1 u> 3)
                            eax_260 = 0
                            edx_363 = 0
                            ecx_529 = 0
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_257 = zx.d(*edi)
                                    edx_363 = zx.d(*(((*(esi + 0x10) & eax_257) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_260 = zx.d(*(((*(esi + 0x14) & eax_257) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_529 = zx.d(*(((*(esi + 0xc) & eax_257) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_261 = zx.d(*edi)
                                    edx_363 = zx.d(*(((*(esi + 0x10) & eax_261) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_260 = zx.d(*(((*(esi + 0x14) & eax_261) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_529 = zx.d(*(((*(esi + 0xc) & eax_261) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_529 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_363 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_260 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_268 = *edi
                                    edx_363 = zx.d(*(((*(esi + 0x10) & eax_268) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_260 = zx.d(*(((*(esi + 0x14) & eax_268) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_529 = zx.d(*(((*(esi + 0xc) & eax_268) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        int32_t ecx_552
                        ecx_552.b = (((edx_363 & 0xffffffe7) | eax_260 s>> 3) s>> 3
                            | (ecx_529 & 0xffffffe0))[edx_3]
                        *ebx = ecx_552.b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_621ea9:
                        uint32_t eax_132
                        int32_t* ecx_284
                        uint32_t edx_167
                        
                        if (eax_1 - 1 u> 3)
                            eax_132 = 0
                            edx_167 = 0
                            ecx_284 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_129 = zx.d(*edi)
                                    edx_167 = zx.d(*(((*(esi + 0x10) & eax_129) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_132 = zx.d(*(((*(esi + 0x14) & eax_129) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_284 = zx.d(*(((*(esi + 0xc) & eax_129) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_133 = zx.d(*edi)
                                    edx_167 = zx.d(*(((*(esi + 0x10) & eax_133) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_132 = zx.d(*(((*(esi + 0x14) & eax_133) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_284 = zx.d(*(((*(esi + 0xc) & eax_133) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_284 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_167 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_132 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_140 = *edi
                                    edx_167 = zx.d(*(((*(esi + 0x10) & eax_140) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_132 = zx.d(*(((*(esi + 0x14) & eax_140) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_284 = zx.d(*(((*(esi + 0xc) & eax_140) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        edi += eax_1
                        void* ecx_307
                        ecx_307.b = (((edx_167 & 0xffffffe7) | eax_132 s>> 3) s>> 3
                            | (ecx_284 & 0xffffffe0))[edx_3]
                        int32_t eax_146 = var_14_3 - 1
                        *ebx = ecx_307.b
                        ebx = &ebx[1]
                        var_14_3 = eax_146
                        
                        if (eax_146 s<= 0)
                            break
                        
                    label_622027:
                        uint32_t eax_152
                        int32_t* ecx_319
                        uint32_t edx_195
                        
                        if (eax_1 - 1 u> 3)
                            eax_152 = 0
                            edx_195 = 0
                            ecx_319 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_149 = zx.d(*edi)
                                    edx_195 = zx.d(*(((*(esi + 0x10) & eax_149) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_152 = zx.d(*(((*(esi + 0x14) & eax_149) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_319 = zx.d(*(((*(esi + 0xc) & eax_149) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_153 = zx.d(*edi)
                                    edx_195 = zx.d(*(((*(esi + 0x10) & eax_153) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_152 = zx.d(*(((*(esi + 0x14) & eax_153) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_319 = zx.d(*(((*(esi + 0xc) & eax_153) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_319 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_195 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_152 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_160 = *edi
                                    edx_195 = zx.d(*(((*(esi + 0x10) & eax_160) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_152 = zx.d(*(((*(esi + 0x14) & eax_160) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_319 = zx.d(*(((*(esi + 0xc) & eax_160) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        void* ecx_342
                        ecx_342.b = (((edx_195 & 0xffffffe7) | eax_152 s>> 3) s>> 3
                            | (ecx_319 & 0xffffffe0))[edx_3]
                        *ebx = ecx_342.b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_622196:
                        uint32_t eax_170
                        int32_t* ecx_354
                        uint32_t edx_223
                        
                        if (eax_1 - 1 u> 3)
                            eax_170 = 0
                            edx_223 = 0
                            ecx_354 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_167 = zx.d(*edi)
                                    edx_223 = zx.d(*(((*(esi + 0x10) & eax_167) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_170 = zx.d(*(((*(esi + 0x14) & eax_167) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_354 = zx.d(*(((*(esi + 0xc) & eax_167) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_171 = zx.d(*edi)
                                    edx_223 = zx.d(*(((*(esi + 0x10) & eax_171) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_170 = zx.d(*(((*(esi + 0x14) & eax_171) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_354 = zx.d(*(((*(esi + 0xc) & eax_171) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_354 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_223 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_170 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_178 = *edi
                                    edx_223 = zx.d(*(((*(esi + 0x10) & eax_178) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_170 = zx.d(*(((*(esi + 0x14) & eax_178) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_354 = zx.d(*(((*(esi + 0xc) & eax_178) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        void* ecx_377
                        ecx_377.b = (((edx_223 & 0xffffffe7) | eax_170 s>> 3) s>> 3
                            | (ecx_354 & 0xffffffe0))[edx_3]
                        *ebx = ecx_377.b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_622305:
                        uint32_t eax_188
                        int32_t* ecx_389
                        uint32_t edx_251
                        
                        if (eax_1 - 1 u> 3)
                            eax_188 = 0
                            edx_251 = 0
                            ecx_389 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_185 = zx.d(*edi)
                                    edx_251 = zx.d(*(((*(esi + 0x10) & eax_185) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_188 = zx.d(*(((*(esi + 0x14) & eax_185) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_389 = zx.d(*(((*(esi + 0xc) & eax_185) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_189 = zx.d(*edi)
                                    edx_251 = zx.d(*(((*(esi + 0x10) & eax_189) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_188 = zx.d(*(((*(esi + 0x14) & eax_189) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_389 = zx.d(*(((*(esi + 0xc) & eax_189) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_389 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_251 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_188 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_196 = *edi
                                    edx_251 = zx.d(*(((*(esi + 0x10) & eax_196) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_188 = zx.d(*(((*(esi + 0x14) & eax_196) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_389 = zx.d(*(((*(esi + 0xc) & eax_196) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        void* ecx_412
                        ecx_412.b = (((edx_251 & 0xffffffe7) | eax_188 s>> 3) s>> 3
                            | (ecx_389 & 0xffffffe0))[edx_3]
                        *ebx = ecx_412.b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_622474:
                        uint32_t eax_206
                        int32_t* ecx_424
                        uint32_t edx_279
                        
                        if (eax_1 - 1 u> 3)
                            eax_206 = 0
                            edx_279 = 0
                            ecx_424 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_203 = zx.d(*edi)
                                    edx_279 = zx.d(*(((*(esi + 0x10) & eax_203) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_206 = zx.d(*(((*(esi + 0x14) & eax_203) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_424 = zx.d(*(((*(esi + 0xc) & eax_203) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_207 = zx.d(*edi)
                                    edx_279 = zx.d(*(((*(esi + 0x10) & eax_207) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_206 = zx.d(*(((*(esi + 0x14) & eax_207) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_424 = zx.d(*(((*(esi + 0xc) & eax_207) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_424 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_279 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_206 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_214 = *edi
                                    edx_279 = zx.d(*(((*(esi + 0x10) & eax_214) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_206 = zx.d(*(((*(esi + 0x14) & eax_214) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_424 = zx.d(*(((*(esi + 0xc) & eax_214) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        void* ecx_447
                        ecx_447.b = (((edx_279 & 0xffffffe7) | eax_206 s>> 3) s>> 3
                            | (ecx_424 & 0xffffffe0))[edx_3]
                        *ebx = ecx_447.b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_6225e3:
                        uint32_t eax_224
                        int32_t* ecx_459
                        uint32_t edx_307
                        
                        if (eax_1 - 1 u> 3)
                            eax_224 = 0
                            edx_307 = 0
                            ecx_459 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_221 = zx.d(*edi)
                                    edx_307 = zx.d(*(((*(esi + 0x10) & eax_221) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_224 = zx.d(*(((*(esi + 0x14) & eax_221) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_459 = zx.d(*(((*(esi + 0xc) & eax_221) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_225 = zx.d(*edi)
                                    edx_307 = zx.d(*(((*(esi + 0x10) & eax_225) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_224 = zx.d(*(((*(esi + 0x14) & eax_225) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_459 = zx.d(*(((*(esi + 0xc) & eax_225) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_459 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_307 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_224 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_232 = *edi
                                    edx_307 = zx.d(*(((*(esi + 0x10) & eax_232) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_224 = zx.d(*(((*(esi + 0x14) & eax_232) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_459 = zx.d(*(((*(esi + 0xc) & eax_232) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        void* ecx_482
                        ecx_482.b = (((edx_307 & 0xffffffe7) | eax_224 s>> 3) s>> 3
                            | (ecx_459 & 0xffffffe0))[edx_3]
                        *ebx = ecx_482.b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_622752:
                        uint32_t eax_242
                        uint32_t ecx_494
                        uint32_t edx_335
                        
                        if (eax_1 - 1 u> 3)
                            eax_242 = 0
                            edx_335 = 0
                            ecx_494 = 0
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_239 = zx.d(*edi)
                                    edx_335 = zx.d(*(((*(esi + 0x10) & eax_239) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_242 = zx.d(*(((*(esi + 0x14) & eax_239) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_494 = zx.d(*(((*(esi + 0xc) & eax_239) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    uint32_t eax_243 = zx.d(*edi)
                                    edx_335 = zx.d(*(((*(esi + 0x10) & eax_243) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_242 = zx.d(*(((*(esi + 0x14) & eax_243) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_494 = zx.d(*(((*(esi + 0xc) & eax_243) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 3
                                    ecx_494 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    edx_335 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_242 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    int32_t eax_250 = *edi
                                    edx_335 = zx.d(*(((*(esi + 0x10) & eax_250) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_242 = zx.d(*(((*(esi + 0x14) & eax_250) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ecx_494 = zx.d(*(((*(esi + 0xc) & eax_250) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                        
                        int32_t ecx_517
                        ecx_517.b = (((edx_335 & 0xffffffe7) | eax_242 s>> 3) s>> 3
                            | (ecx_494 & 0xffffffe0))[edx_3]
                        *ebx = ecx_517.b
                        ebx = &ebx[1]
                        edi += eax_1
                    
                    ecx = var_18
                case 3
                    goto label_622752
                case 4
                    goto label_6225e3
                case 5
                    goto label_622474
                case 6
                    goto label_622305
                case 7
                    goto label_622196
            
            edi += edx_1
            ebx = &ebx[edx_2]
    else
        while (true)
            int32_t result_2 = result_1
            result = result_1 - 1
            result_1 = result
            
            if (result_2 == 0)
                break
            
            int32_t eax_4
            int32_t edx_4
            edx_4:eax_4 = sx.q(ecx + 7)
            int32_t var_c_1 = (eax_4 + (edx_4 & 7)) s>> 3
            
            switch (ecx & 7)
                case 0
                    goto label_6215c6
                case 1
                    goto label_62146a
                case 2
                    while (true)
                        char eax_113
                        uint32_t ecx_251
                        uint32_t ecx_247
                        uint32_t edx_141
                        
                        if (eax_1 - 1 u> 3)
                            eax_113 = 0
                            ecx_251 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t edx_138 = zx.d(*edi)
                                    eax_113 = *(((*(esi + 0xc) & edx_138) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_141 = zx.d(*(((*(esi + 0x10) & edx_138) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_247 = zx.d(*edi)
                                label_621d6e:
                                    arg1 = edx_141
                                    ecx_251 = zx.d(*(((*(esi + 0x14) & ecx_247) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t edx_145 = zx.d(*edi)
                                    eax_113 = *(((*(esi + 0xc) & edx_145) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_141 = zx.d(*(((*(esi + 0x10) & edx_145) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_247 = zx.d(*edi)
                                    goto label_621d6e
                                case 3
                                    eax_113 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    ecx_251 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t edx_151 = *edi
                                    eax_113 = *(((*(esi + 0xc) & edx_151) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & edx_151) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_251 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        *ebx = (((arg1 s>> 3).b | (eax_113 & 0xe3)) & 0xfc) | (ecx_251 s>> 6).b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_62146a:
                        uint32_t eax_18
                        char edx_9
                        
                        if (eax_1 - 1 u> 3)
                            edx_9 = 0
                            eax_18 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t eax_11 = zx.d(*edi)
                                    edx_9 = *(((*(esi + 0xc) & eax_11) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & eax_11) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    int32_t ecx_10 = *(esi + 0x14) & zx.d(*edi)
                                    int32_t var_14_1 = ecx_10
                                    eax_18 = zx.d(*((ecx_10 u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t eax_19 = zx.d(*edi)
                                    edx_9 = *(((*(esi + 0xc) & eax_19) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & eax_19) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    int32_t ecx_23 = *(esi + 0x14) & zx.d(*edi)
                                    int32_t var_14_2 = ecx_23
                                    eax_18 = zx.d(*((ecx_23 u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 3
                                    edx_9 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    eax_18 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t eax_28 = *edi
                                    edx_9 = *(((*(esi + 0xc) & eax_28) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & eax_28) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    eax_18 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        
                        edi += eax_1
                        int32_t eax_35 = var_c_1 - 1
                        *ebx = (((arg1 s>> 3).b | (edx_9 & 0xe3)) & 0xfc) | (eax_18 s>> 6).b
                        ebx = &ebx[1]
                        var_c_1 = eax_35
                        
                        if (eax_35 s<= 0)
                            break
                        
                    label_6215c6:
                        char eax_41
                        uint32_t ecx_47
                        uint32_t ecx_43
                        uint32_t edx_21
                        
                        if (eax_1 - 1 u> 3)
                            eax_41 = 0
                            ecx_47 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t edx_18 = zx.d(*edi)
                                    eax_41 = *(((*(esi + 0xc) & edx_18) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_21 = zx.d(*(((*(esi + 0x10) & edx_18) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_43 = zx.d(*edi)
                                label_621612:
                                    arg1 = edx_21
                                    ecx_47 = zx.d(*(((*(esi + 0x14) & ecx_43) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t edx_25 = zx.d(*edi)
                                    eax_41 = *(((*(esi + 0xc) & edx_25) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_21 = zx.d(*(((*(esi + 0x10) & edx_25) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_43 = zx.d(*edi)
                                    goto label_621612
                                case 3
                                    eax_41 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    ecx_47 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t edx_31 = *edi
                                    eax_41 = *(((*(esi + 0xc) & edx_31) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & edx_31) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_47 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        *ebx = (((arg1 s>> 3).b | (eax_41 & 0xe3)) & 0xfc) | (ecx_47 s>> 6).b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_621700:
                        char eax_53
                        uint32_t ecx_81
                        uint32_t ecx_77
                        uint32_t edx_41
                        
                        if (eax_1 - 1 u> 3)
                            eax_53 = 0
                            ecx_81 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t edx_38 = zx.d(*edi)
                                    eax_53 = *(((*(esi + 0xc) & edx_38) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_41 = zx.d(*(((*(esi + 0x10) & edx_38) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_77 = zx.d(*edi)
                                label_62174c:
                                    arg1 = edx_41
                                    ecx_81 = zx.d(*(((*(esi + 0x14) & ecx_77) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t edx_45 = zx.d(*edi)
                                    eax_53 = *(((*(esi + 0xc) & edx_45) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_41 = zx.d(*(((*(esi + 0x10) & edx_45) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_77 = zx.d(*edi)
                                    goto label_62174c
                                case 3
                                    eax_53 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    ecx_81 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t edx_51 = *edi
                                    eax_53 = *(((*(esi + 0xc) & edx_51) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & edx_51) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_81 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        *ebx = (((arg1 s>> 3).b | (eax_53 & 0xe3)) & 0xfc) | (ecx_81 s>> 6).b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_62183a:
                        char eax_65
                        uint32_t ecx_115
                        uint32_t ecx_111
                        uint32_t edx_61
                        
                        if (eax_1 - 1 u> 3)
                            eax_65 = 0
                            ecx_115 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t edx_58 = zx.d(*edi)
                                    eax_65 = *(((*(esi + 0xc) & edx_58) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_61 = zx.d(*(((*(esi + 0x10) & edx_58) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_111 = zx.d(*edi)
                                label_621886:
                                    arg1 = edx_61
                                    ecx_115 = zx.d(*(((*(esi + 0x14) & ecx_111) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t edx_65 = zx.d(*edi)
                                    eax_65 = *(((*(esi + 0xc) & edx_65) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_61 = zx.d(*(((*(esi + 0x10) & edx_65) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_111 = zx.d(*edi)
                                    goto label_621886
                                case 3
                                    eax_65 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    ecx_115 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t edx_71 = *edi
                                    eax_65 = *(((*(esi + 0xc) & edx_71) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & edx_71) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_115 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        *ebx = (((arg1 s>> 3).b | (eax_65 & 0xe3)) & 0xfc) | (ecx_115 s>> 6).b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_621974:
                        char eax_77
                        uint32_t ecx_149
                        uint32_t ecx_145
                        uint32_t edx_81
                        
                        if (eax_1 - 1 u> 3)
                            eax_77 = 0
                            ecx_149 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t edx_78 = zx.d(*edi)
                                    eax_77 = *(((*(esi + 0xc) & edx_78) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_81 = zx.d(*(((*(esi + 0x10) & edx_78) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_145 = zx.d(*edi)
                                label_6219c0:
                                    arg1 = edx_81
                                    ecx_149 = zx.d(*(((*(esi + 0x14) & ecx_145) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t edx_85 = zx.d(*edi)
                                    eax_77 = *(((*(esi + 0xc) & edx_85) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_81 = zx.d(*(((*(esi + 0x10) & edx_85) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_145 = zx.d(*edi)
                                    goto label_6219c0
                                case 3
                                    eax_77 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    ecx_149 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t edx_91 = *edi
                                    eax_77 = *(((*(esi + 0xc) & edx_91) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & edx_91) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_149 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        *ebx = (((arg1 s>> 3).b | (eax_77 & 0xe3)) & 0xfc) | (ecx_149 s>> 6).b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_621aae:
                        char eax_89
                        uint32_t ecx_183
                        uint32_t ecx_179
                        uint32_t edx_101
                        
                        if (eax_1 - 1 u> 3)
                            eax_89 = 0
                            ecx_183 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t edx_98 = zx.d(*edi)
                                    eax_89 = *(((*(esi + 0xc) & edx_98) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_101 = zx.d(*(((*(esi + 0x10) & edx_98) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_179 = zx.d(*edi)
                                label_621afa:
                                    arg1 = edx_101
                                    ecx_183 = zx.d(*(((*(esi + 0x14) & ecx_179) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t edx_105 = zx.d(*edi)
                                    eax_89 = *(((*(esi + 0xc) & edx_105) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_101 = zx.d(*(((*(esi + 0x10) & edx_105) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_179 = zx.d(*edi)
                                    goto label_621afa
                                case 3
                                    eax_89 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    ecx_183 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t edx_111 = *edi
                                    eax_89 = *(((*(esi + 0xc) & edx_111) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & edx_111) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_183 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        *ebx = (((arg1 s>> 3).b | (eax_89 & 0xe3)) & 0xfc) | (ecx_183 s>> 6).b
                        ebx = &ebx[1]
                        edi += eax_1
                    label_621be8:
                        char eax_101
                        uint32_t ecx_217
                        uint32_t ecx_213
                        uint32_t edx_121
                        
                        if (eax_1 - 1 u> 3)
                            eax_101 = 0
                            ecx_217 = 0
                            arg1 = nullptr
                        else
                            switch (eax_1)
                                case 1
                                    uint32_t edx_118 = zx.d(*edi)
                                    eax_101 = *(((*(esi + 0xc) & edx_118) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_121 = zx.d(*(((*(esi + 0x10) & edx_118) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_213 = zx.d(*edi)
                                label_621c34:
                                    arg1 = edx_121
                                    ecx_217 = zx.d(*(((*(esi + 0x14) & ecx_213) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    uint32_t edx_125 = zx.d(*edi)
                                    eax_101 = *(((*(esi + 0xc) & edx_125) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    edx_121 = zx.d(*(((*(esi + 0x10) & edx_125) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_213 = zx.d(*edi)
                                    goto label_621c34
                                case 3
                                    eax_101 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    ecx_217 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                case 4
                                    int32_t edx_131 = *edi
                                    eax_101 = *(((*(esi + 0xc) & edx_131) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    arg1 = zx.d(*(((*(esi + 0x10) & edx_131) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_217 = zx.d(*(((*(esi + 0x14) & *edi) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                        *ebx = (((arg1 s>> 3).b | (eax_101 & 0xe3)) & 0xfc) | (ecx_217 s>> 6).b
                        ebx = &ebx[1]
                        edi += eax_1
                    
                    ecx = var_18
                case 3
                    goto label_621be8
                case 4
                    goto label_621aae
                case 5
                    goto label_621974
                case 6
                    goto label_62183a
                case 7
                    goto label_621700
            
            edi += edx_1
            ebx = &ebx[edx_2]
    
    return result
}

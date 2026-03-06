// 函数名称: sub_62fed0
// 虚拟地址: 0x62fed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62fed0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t result = arg1[7]
    uint32_t* ebx = arg1[5]
    int32_t esi = arg1[4]
    int32_t esi_1 = arg1[9]
    void* edi = arg1[0xa]
    int32_t* ecx_1 = *arg1
    void* esi_2 = arg1[0xb]
    uint32_t eax_1 = zx.d(*(edi + 9))
    uint32_t eax_2 = zx.d(*(esi_2 + 9))
    
    while (true)
        int32_t* var_24_1 = ecx_1
        
        if (result == 0)
            break
        
        int32_t eax_6
        int32_t edx_1
        edx_1:eax_6 = sx.q(ecx + 3)
        int32_t var_30_1 = (eax_6 + (edx_1 & 3)) s>> 2
        
        switch (ecx & 3)
            case 0
                goto label_630439
            case 1
                goto label_62ff47
            case 2
                while (true)
                    if (eax_1 - 1 u> 3)
                        goto label_6312ff
                    
                    uint32_t var_1c_14
                    uint32_t var_18_4
                    uint32_t var_14_4
                    void* eax_354
                    uint32_t ecx_367
                    uint32_t edx_153
                    
                    switch (eax_1)
                        case 1
                            uint32_t eax_342 = zx.d(*ecx_1)
                            edx_153 = zx.d(*(((*(edi + 0xc) & eax_342) u>> *(edi + 0x20))
                                + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                            arg1 = eax_342
                            var_18_4 = zx.d(*(((*(edi + 0x10) & eax_342) u>> *(edi + 0x21))
                                + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                            var_1c_14 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                            ecx_367 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                            var_14_4 = ecx_367
                        label_630f74:
                            
                            if (ecx_367 == 0)
                                goto label_6312ff
                        case 2
                            uint32_t eax_353 = zx.d(*ecx_1)
                            edx_153 = zx.d(*(((*(edi + 0xc) & eax_353) u>> *(edi + 0x20))
                                + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                            void* ecx_372 = *(edi + 0x10) & eax_353
                            arg1 = eax_353
                            void* var_1c_15 = ecx_372
                            eax_354 = ecx_372
                        label_630f37:
                            var_18_4 = zx.d(
                                *((eax_354 u>> *(edi + 0x21)) + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                            var_1c_14 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                            uint32_t eax_370 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                            var_14_4 = eax_370
                            ecx_367 = eax_370
                            goto label_630f74
                        case 3
                            var_18_4 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                            edx_153 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                            var_14_4 = 0xff
                            var_1c_14 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                            ecx_367 = 0xff
                        case 4
                            int32_t* eax_360 = *ecx_1
                            edx_153 = zx.d(*(((*(edi + 0xc) & eax_360) u>> *(edi + 0x20))
                                + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                            void* ecx_378 = *(edi + 0x10) & eax_360
                            arg1 = eax_360
                            void* var_1c_16 = ecx_378
                            eax_354 = ecx_378
                            goto label_630f37
                    
                    uint32_t var_10_7
                    uint32_t var_c_7
                    uint32_t var_8_7
                    
                    if (eax_2 - 1 u> 3)
                        arg1 = nullptr
                        var_8_7 = 0
                        var_c_7 = 0
                        var_10_7 = 0
                    else
                        switch (eax_2)
                            case 1
                                var_c_7 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx)) u>> *(esi_2 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                var_8_7 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx)) u>> *(esi_2 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx)) u>> *(esi_2 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                ecx_367 = var_14_4
                                var_10_7 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx)) u>> *(esi_2 + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                            case 2
                                var_c_7 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx)) u>> *(esi_2 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                var_8_7 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx)) u>> *(esi_2 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx)) u>> *(esi_2 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                ecx_367 = var_14_4
                                var_10_7 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx)) u>> *(esi_2 + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                            case 3
                                var_c_7 = zx.d(*((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx))
                                var_8_7 = zx.d(*((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx))
                                arg1 = zx.d(*((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx))
                                var_10_7 = 0xff
                            case 4
                                var_c_7 = zx.d(*(((*(esi_2 + 0xc) & *ebx) u>> *(esi_2 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                var_8_7 = zx.d(*(((*(esi_2 + 0x10) & *ebx) u>> *(esi_2 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                arg1 = zx.d(*(((*(esi_2 + 0x14) & *ebx) u>> *(esi_2 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                ecx_367 = var_14_4
                                var_10_7 = zx.d(*(((*(esi_2 + 0x18) & *ebx) u>> *(esi_2 + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                    
                    uint32_t var_c_8 = var_c_7 + (edx_153 - var_c_7) * ecx_367 u/ 0xff
                    uint32_t var_8_8 = var_8_7 + (var_18_4 - var_8_7) * ecx_367 u/ 0xff
                    arg1 += (var_1c_14 - arg1) * ecx_367 u/ 0xff
                    uint32_t var_10_8 = var_10_7 + ecx_367 - var_10_7 * ecx_367 u/ 0xff
                    
                    if (eax_2 - 1 u> 3)
                        goto label_6312ff
                    
                    switch (eax_2)
                        case 1
                            uint8_t edx_181 = (var_10_8 u>> *(esi_2 + 0x1f)).b << *(esi_2 + 0x23)
                                | (arg1 u>> *(esi_2 + 0x1e)).b << *(esi_2 + 0x22)
                                | (var_8_8 u>> *(esi_2 + 0x1d)).b << *(esi_2 + 0x21)
                            ecx_1 = var_24_1 + eax_1
                            *ebx = edx_181 | (var_c_8 u>> *(esi_2 + 0x1c)).b << *(esi_2 + 0x20)
                            ebx += eax_2
                            var_24_1 = ecx_1
                        case 2
                            uint16_t eax_440 = (var_10_8 u>> *(esi_2 + 0x1f)).w << *(esi_2 + 0x23)
                                | (arg1 u>> *(esi_2 + 0x1e)).w << *(esi_2 + 0x22)
                                | (var_8_8 u>> *(esi_2 + 0x1d)).w << *(esi_2 + 0x21)
                            ecx_1 = var_24_1 + eax_1
                            *ebx = eax_440 | (var_c_8 u>> *(esi_2 + 0x1c)).w << *(esi_2 + 0x20)
                            ebx += eax_2
                            var_24_1 = ecx_1
                        case 3
                            uint32_t ecx_442
                            ecx_442.b = var_c_8.b
                            *((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx) = ecx_442.b
                            char* eax_442
                            eax_442.b = var_8_8.b
                            *((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx) = eax_442.b
                            char* edx_189
                            edx_189.b = arg1.b
                            *((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx) = edx_189.b
                            ecx_1 = var_24_1 + eax_1
                            ebx += eax_2
                            var_24_1 = ecx_1
                        case 4
                            uint32_t eax_447 = var_10_8 u>> *(esi_2 + 0x1f) << *(esi_2 + 0x23)
                                | arg1 u>> *(esi_2 + 0x1e) << *(esi_2 + 0x22)
                                | var_8_8 u>> *(esi_2 + 0x1d) << *(esi_2 + 0x21)
                            *ebx = eax_447 | var_c_8 u>> *(esi_2 + 0x1c) << *(esi_2 + 0x20)
                        label_6312ff:
                            ecx_1 = var_24_1 + eax_1
                            ebx += eax_2
                            var_24_1 = ecx_1
                    
                label_62ff47:
                    uint32_t var_1c_2
                    uint32_t var_18_1
                    uint32_t var_14_1
                    void* eax_25
                    uint32_t ecx_16
                    uint32_t edx_6
                    
                    if (eax_1 - 1 u<= 3)
                        switch (eax_1)
                            case 1
                                uint32_t eax_13 = zx.d(*ecx_1)
                                edx_6 = zx.d(*(((*(edi + 0xc) & eax_13) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                arg1 = eax_13
                                var_18_1 = zx.d(*(((*(edi + 0x10) & eax_13) u>> *(edi + 0x21))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                var_1c_2 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                ecx_16 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                                var_14_1 = ecx_16
                            label_6300bc:
                                
                                if (ecx_16 != 0)
                                    goto label_6300cb
                            case 2
                                uint32_t eax_24 = zx.d(*ecx_1)
                                edx_6 = zx.d(*(((*(edi + 0xc) & eax_24) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                void* ecx_21 = *(edi + 0x10) & eax_24
                                arg1 = eax_24
                                void* var_1c_3 = ecx_21
                                eax_25 = ecx_21
                            label_63007f:
                                var_18_1 = zx.d(
                                    *((eax_25 u>> *(edi + 0x21)) + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                var_1c_2 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                uint32_t eax_41 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                                var_14_1 = eax_41
                                ecx_16 = eax_41
                                goto label_6300bc
                            case 3
                                var_18_1 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                                edx_6 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                                var_14_1 = 0xff
                                var_1c_2 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                                ecx_16 = 0xff
                            label_6300cb:
                                uint32_t var_10_1
                                uint32_t var_c_1
                                uint32_t var_8_1
                                
                                if (eax_2 - 1 u> 3)
                                    arg1 = nullptr
                                    var_8_1 = 0
                                    var_c_1 = 0
                                    var_10_1 = 0
                                else
                                    switch (eax_2)
                                        case 1
                                            var_c_1 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_1 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_16 = var_14_1
                                            var_10_1 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                        case 2
                                            var_c_1 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_1 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_16 = var_14_1
                                            var_10_1 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                        case 3
                                            var_c_1 = zx.d(*((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx))
                                            var_8_1 = zx.d(*((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx))
                                            arg1 = zx.d(*((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx))
                                            var_10_1 = 0xff
                                        case 4
                                            var_c_1 = zx.d(*(((*(esi_2 + 0xc) & *ebx)
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_1 = zx.d(*(((*(esi_2 + 0x10) & *ebx)
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & *ebx) u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_16 = var_14_1
                                            var_10_1 = zx.d(*(((*(esi_2 + 0x18) & *ebx)
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                
                                uint32_t var_c_2 = var_c_1 + (edx_6 - var_c_1) * ecx_16 u/ 0xff
                                uint32_t var_8_2 = var_8_1 + (var_18_1 - var_8_1) * ecx_16 u/ 0xff
                                arg1 += (var_1c_2 - arg1) * ecx_16 u/ 0xff
                                uint32_t var_10_2 = var_10_1 + ecx_16 - var_10_1 * ecx_16 u/ 0xff
                                
                                if (eax_2 - 1 u<= 3)
                                    switch (eax_2)
                                        case 1
                                            uint8_t edx_34 =
                                                (var_10_2 u>> *(esi_2 + 0x1f)).b << *(esi_2 + 0x23)
                                                | (arg1 u>> *(esi_2 + 0x1e)).b << *(esi_2 + 0x22)
                                                | (var_8_2 u>> *(esi_2 + 0x1d)).b << *(esi_2 + 0x21)
                                            *ebx = edx_34
                                                | (var_c_2 u>> *(esi_2 + 0x1c)).b << *(esi_2 + 0x20)
                                        case 2
                                            uint16_t eax_111 =
                                                (var_10_2 u>> *(esi_2 + 0x1f)).w << *(esi_2 + 0x23)
                                                | (arg1 u>> *(esi_2 + 0x1e)).w << *(esi_2 + 0x22)
                                                | (var_8_2 u>> *(esi_2 + 0x1d)).w << *(esi_2 + 0x21)
                                            *ebx = eax_111
                                                | (var_c_2 u>> *(esi_2 + 0x1c)).w << *(esi_2 + 0x20)
                                        case 3
                                            uint32_t ecx_91
                                            ecx_91.b = var_c_2.b
                                            *((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx) = ecx_91.b
                                            char* eax_113
                                            eax_113.b = var_8_2.b
                                            *((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx) = eax_113.b
                                            char* edx_42
                                            edx_42.b = arg1.b
                                            *((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx) = edx_42.b
                                        case 4
                                            uint32_t eax_118 =
                                                var_10_2 u>> *(esi_2 + 0x1f) << *(esi_2 + 0x23)
                                                | arg1 u>> *(esi_2 + 0x1e) << *(esi_2 + 0x22)
                                                | var_8_2 u>> *(esi_2 + 0x1d) << *(esi_2 + 0x21)
                                            *ebx =
                                                eax_118 | var_c_2 u>> *(esi_2 + 0x1c) << *(esi_2 + 0x20)
                            case 4
                                int32_t* eax_31 = *ecx_1
                                edx_6 = zx.d(*(((*(edi + 0xc) & eax_31) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                void* ecx_27 = *(edi + 0x10) & eax_31
                                arg1 = eax_31
                                void* var_1c_4 = ecx_27
                                eax_25 = ecx_27
                                goto label_63007f
                    ecx_1 = var_24_1 + eax_1
                    ebx += eax_2
                    int32_t eax_121 = var_30_1 - 1
                    var_24_1 = ecx_1
                    var_30_1 = eax_121
                    
                    if (eax_121 s<= 0)
                        break
                    
                label_630439:
                    uint32_t var_1c_6
                    uint32_t var_18_2
                    uint32_t var_14_2
                    void* eax_136
                    uint32_t ecx_133
                    uint32_t edx_55
                    
                    if (eax_1 - 1 u<= 3)
                        switch (eax_1)
                            case 1
                                uint32_t eax_124 = zx.d(*ecx_1)
                                edx_55 = zx.d(*(((*(edi + 0xc) & eax_124) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                arg1 = eax_124
                                var_18_2 = zx.d(*(((*(edi + 0x10) & eax_124) u>> *(edi + 0x21))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                var_1c_6 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                ecx_133 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                                var_14_2 = ecx_133
                            label_6305ae:
                                
                                if (ecx_133 != 0)
                                    goto label_6305bd
                            case 2
                                uint32_t eax_135 = zx.d(*ecx_1)
                                edx_55 = zx.d(*(((*(edi + 0xc) & eax_135) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                void* ecx_138 = *(edi + 0x10) & eax_135
                                arg1 = eax_135
                                void* var_1c_7 = ecx_138
                                eax_136 = ecx_138
                            label_630571:
                                var_18_2 = zx.d(*
                                    ((eax_136 u>> *(edi + 0x21)) + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                var_1c_6 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                uint32_t eax_152 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                                var_14_2 = eax_152
                                ecx_133 = eax_152
                                goto label_6305ae
                            case 3
                                var_18_2 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                                edx_55 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                                var_14_2 = 0xff
                                var_1c_6 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                                ecx_133 = 0xff
                            label_6305bd:
                                uint32_t var_10_3
                                uint32_t var_c_3
                                uint32_t var_8_3
                                
                                if (eax_2 - 1 u> 3)
                                    arg1 = nullptr
                                    var_8_3 = 0
                                    var_c_3 = 0
                                    var_10_3 = 0
                                else
                                    switch (eax_2)
                                        case 1
                                            var_c_3 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_3 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_133 = var_14_2
                                            var_10_3 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                        case 2
                                            var_c_3 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_3 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_133 = var_14_2
                                            var_10_3 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                        case 3
                                            var_c_3 = zx.d(*((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx))
                                            var_8_3 = zx.d(*((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx))
                                            arg1 = zx.d(*((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx))
                                            var_10_3 = 0xff
                                        case 4
                                            var_c_3 = zx.d(*(((*(esi_2 + 0xc) & *ebx)
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_3 = zx.d(*(((*(esi_2 + 0x10) & *ebx)
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & *ebx) u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_133 = var_14_2
                                            var_10_3 = zx.d(*(((*(esi_2 + 0x18) & *ebx)
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                
                                uint32_t var_c_4 = var_c_3 + (edx_55 - var_c_3) * ecx_133 u/ 0xff
                                uint32_t var_8_4 = var_8_3 + (var_18_2 - var_8_3) * ecx_133 u/ 0xff
                                arg1 += (var_1c_6 - arg1) * ecx_133 u/ 0xff
                                uint32_t var_10_4 = var_10_3 + ecx_133 - var_10_3 * ecx_133 u/ 0xff
                                
                                if (eax_2 - 1 u<= 3)
                                    switch (eax_2)
                                        case 1
                                            uint8_t edx_83 =
                                                (var_10_4 u>> *(esi_2 + 0x1f)).b << *(esi_2 + 0x23)
                                                | (arg1 u>> *(esi_2 + 0x1e)).b << *(esi_2 + 0x22)
                                                | (var_8_4 u>> *(esi_2 + 0x1d)).b << *(esi_2 + 0x21)
                                            *ebx = edx_83
                                                | (var_c_4 u>> *(esi_2 + 0x1c)).b << *(esi_2 + 0x20)
                                        case 2
                                            uint16_t eax_222 =
                                                (var_10_4 u>> *(esi_2 + 0x1f)).w << *(esi_2 + 0x23)
                                                | (arg1 u>> *(esi_2 + 0x1e)).w << *(esi_2 + 0x22)
                                                | (var_8_4 u>> *(esi_2 + 0x1d)).w << *(esi_2 + 0x21)
                                            *ebx = eax_222
                                                | (var_c_4 u>> *(esi_2 + 0x1c)).w << *(esi_2 + 0x20)
                                        case 3
                                            uint32_t ecx_208
                                            ecx_208.b = var_c_4.b
                                            *((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx) = ecx_208.b
                                            char* eax_224
                                            eax_224.b = var_8_4.b
                                            *((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx) = eax_224.b
                                            char* edx_91
                                            edx_91.b = arg1.b
                                            *((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx) = edx_91.b
                                        case 4
                                            uint32_t eax_229 =
                                                var_10_4 u>> *(esi_2 + 0x1f) << *(esi_2 + 0x23)
                                                | arg1 u>> *(esi_2 + 0x1e) << *(esi_2 + 0x22)
                                                | var_8_4 u>> *(esi_2 + 0x1d) << *(esi_2 + 0x21)
                                            *ebx =
                                                eax_229 | var_c_4 u>> *(esi_2 + 0x1c) << *(esi_2 + 0x20)
                            case 4
                                int32_t* eax_142 = *ecx_1
                                edx_55 = zx.d(*(((*(edi + 0xc) & eax_142) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                void* ecx_144 = *(edi + 0x10) & eax_142
                                arg1 = eax_142
                                void* var_1c_8 = ecx_144
                                eax_136 = ecx_144
                                goto label_630571
                    ecx_1 = var_24_1 + eax_1
                    ebx += eax_2
                    var_24_1 = ecx_1
                label_63091c:
                    uint32_t var_1c_10
                    uint32_t var_18_3
                    uint32_t var_14_3
                    void* eax_245
                    uint32_t ecx_250
                    uint32_t edx_104
                    
                    if (eax_1 - 1 u<= 3)
                        switch (eax_1)
                            case 1
                                uint32_t eax_233 = zx.d(*ecx_1)
                                edx_104 = zx.d(*(((*(edi + 0xc) & eax_233) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                arg1 = eax_233
                                var_18_3 = zx.d(*(((*(edi + 0x10) & eax_233) u>> *(edi + 0x21))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                var_1c_10 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                ecx_250 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                                var_14_3 = ecx_250
                            label_630a91:
                                
                                if (ecx_250 != 0)
                                    goto label_630aa0
                            case 2
                                uint32_t eax_244 = zx.d(*ecx_1)
                                edx_104 = zx.d(*(((*(edi + 0xc) & eax_244) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                void* ecx_255 = *(edi + 0x10) & eax_244
                                arg1 = eax_244
                                void* var_1c_11 = ecx_255
                                eax_245 = ecx_255
                            label_630a54:
                                var_18_3 = zx.d(*
                                    ((eax_245 u>> *(edi + 0x21)) + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                var_1c_10 = zx.d(*(((*(edi + 0x14) & arg1) u>> *(edi + 0x22))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                uint32_t eax_261 = zx.d(*(((*(edi + 0x18) & arg1) u>> *(edi + 0x23))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                                var_14_3 = eax_261
                                ecx_250 = eax_261
                                goto label_630a91
                            case 3
                                var_18_3 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_1))
                                edx_104 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_1))
                                var_14_3 = 0xff
                                var_1c_10 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_1))
                                ecx_250 = 0xff
                            label_630aa0:
                                uint32_t var_10_5
                                uint32_t var_c_5
                                uint32_t var_8_5
                                
                                if (eax_2 - 1 u> 3)
                                    arg1 = nullptr
                                    var_8_5 = 0
                                    var_c_5 = 0
                                    var_10_5 = 0
                                else
                                    switch (eax_2)
                                        case 1
                                            var_c_5 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_5 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_250 = var_14_3
                                            var_10_5 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                        case 2
                                            var_c_5 = zx.d(*(((*(esi_2 + 0xc) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_5 = zx.d(*(((*(esi_2 + 0x10) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_250 = var_14_3
                                            var_10_5 = zx.d(*(((*(esi_2 + 0x18) & zx.d(*ebx))
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                        case 3
                                            var_c_5 = zx.d(*((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx))
                                            var_8_5 = zx.d(*((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx))
                                            arg1 = zx.d(*((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx))
                                            var_10_5 = 0xff
                                        case 4
                                            var_c_5 = zx.d(*(((*(esi_2 + 0xc) & *ebx)
                                                u>> *(esi_2 + 0x20))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1c))]))
                                            var_8_5 = zx.d(*(((*(esi_2 + 0x10) & *ebx)
                                                u>> *(esi_2 + 0x21))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1d))]))
                                            arg1 = zx.d(*(((*(esi_2 + 0x14) & *ebx) u>> *(esi_2 + 0x22))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1e))]))
                                            ecx_250 = var_14_3
                                            var_10_5 = zx.d(*(((*(esi_2 + 0x18) & *ebx)
                                                u>> *(esi_2 + 0x23))
                                                + (&data_8bac68)[zx.d(*(esi_2 + 0x1f))]))
                                
                                uint32_t var_c_6 = var_c_5 + (edx_104 - var_c_5) * ecx_250 u/ 0xff
                                uint32_t var_8_6 = var_8_5 + (var_18_3 - var_8_5) * ecx_250 u/ 0xff
                                arg1 += (var_1c_10 - arg1) * ecx_250 u/ 0xff
                                uint32_t var_10_6 = var_10_5 + ecx_250 - var_10_5 * ecx_250 u/ 0xff
                                
                                if (eax_2 - 1 u<= 3)
                                    switch (eax_2)
                                        case 1
                                            uint8_t edx_132 =
                                                (var_10_6 u>> *(esi_2 + 0x1f)).b << *(esi_2 + 0x23)
                                                | (arg1 u>> *(esi_2 + 0x1e)).b << *(esi_2 + 0x22)
                                                | (var_8_6 u>> *(esi_2 + 0x1d)).b << *(esi_2 + 0x21)
                                            *ebx = edx_132
                                                | (var_c_6 u>> *(esi_2 + 0x1c)).b << *(esi_2 + 0x20)
                                        case 2
                                            uint16_t eax_331 =
                                                (var_10_6 u>> *(esi_2 + 0x1f)).w << *(esi_2 + 0x23)
                                                | (arg1 u>> *(esi_2 + 0x1e)).w << *(esi_2 + 0x22)
                                                | (var_8_6 u>> *(esi_2 + 0x1d)).w << *(esi_2 + 0x21)
                                            *ebx = eax_331
                                                | (var_c_6 u>> *(esi_2 + 0x1c)).w << *(esi_2 + 0x20)
                                        case 3
                                            uint32_t ecx_325
                                            ecx_325.b = var_c_6.b
                                            *((zx.d(*(esi_2 + 0x20)) u>> 3) + ebx) = ecx_325.b
                                            char* eax_333
                                            eax_333.b = var_8_6.b
                                            *((zx.d(*(esi_2 + 0x21)) u>> 3) + ebx) = eax_333.b
                                            char* edx_140
                                            edx_140.b = arg1.b
                                            *((zx.d(*(esi_2 + 0x22)) u>> 3) + ebx) = edx_140.b
                                        case 4
                                            uint32_t eax_338 =
                                                var_10_6 u>> *(esi_2 + 0x1f) << *(esi_2 + 0x23)
                                                | arg1 u>> *(esi_2 + 0x1e) << *(esi_2 + 0x22)
                                                | var_8_6 u>> *(esi_2 + 0x1d) << *(esi_2 + 0x21)
                                            *ebx =
                                                eax_338 | var_c_6 u>> *(esi_2 + 0x1c) << *(esi_2 + 0x20)
                            case 4
                                int32_t* eax_251 = *ecx_1
                                edx_104 = zx.d(*(((*(edi + 0xc) & eax_251) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                void* ecx_261 = *(edi + 0x10) & eax_251
                                arg1 = eax_251
                                void* var_1c_12 = ecx_261
                                eax_245 = ecx_261
                                goto label_630a54
                    ecx_1 = var_24_1 + eax_1
                    ebx += eax_2
                    var_24_1 = ecx_1
            case 3
                goto label_63091c
        
        ecx_1 += esi
        ebx += esi_1
        result -= 1
    
    return result
}

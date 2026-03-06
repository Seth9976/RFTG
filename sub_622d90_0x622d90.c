// 函数名称: sub_622d90
// 虚拟地址: 0x622d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_622d90(void* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t ecx = eax[6]
    int32_t result_1 = eax[7]
    int32_t edx_1 = eax[4]
    int32_t* ebx = *eax
    arg1 = eax[5]
    int32_t edx_3 = eax[9]
    void* esi = eax[0xa]
    uint32_t edx_4 = zx.d(*(esi + 9))
    void* edi = eax[0xb]
    uint32_t edx_5 = zx.d(*(edi + 9))
    int32_t var_28 = ecx
    uint32_t var_8
    
    if (*(edi + 0x18) == 0)
        var_8 = 0
    else
        var_8 = zx.d(*(eax + 0x3f))
    
    int32_t result
    
    while (true)
        int32_t result_2 = result_1
        result = result_1 - 1
        result_1 = result
        
        if (result_2 == 0)
            break
        
        int32_t eax_4
        int32_t edx_6
        edx_6:eax_4 = sx.q(ecx + 7)
        int32_t var_24_1 = (eax_4 + (edx_6 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_62308e
            case 1
                goto label_622e1f
            case 2
                while (true)
                    uint32_t var_14_8
                    uint32_t eax_184
                    uint32_t edx_323
                    
                    if (edx_4 - 1 u> 3)
                        eax_184 = 0
                        edx_323 = 0
                        var_14_8 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_181 = zx.d(*ebx)
                                var_14_8 = zx.d(*(((*(esi + 0xc) & eax_181) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_323 = zx.d(*(((*(esi + 0x10) & eax_181) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_407 = *(esi + 0x14) & eax_181
                                int32_t var_18_26 = ecx_407
                                eax_184 = zx.d(*
                                    ((ecx_407 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_185 = zx.d(*ebx)
                                var_14_8 = zx.d(*(((*(esi + 0xc) & eax_185) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_323 = zx.d(*(((*(esi + 0x10) & eax_185) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_418 = *(esi + 0x14) & eax_185
                                int32_t var_18_27 = ecx_418
                                eax_184 = zx.d(*
                                    ((ecx_418 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_8 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_323 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_184 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_189 = *ebx
                                var_14_8 = zx.d(*(((*(esi + 0xc) & eax_189) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_323 = zx.d(*(((*(esi + 0x10) & eax_189) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_428 = *(esi + 0x14) & eax_189
                                int32_t var_18_28 = ecx_428
                                eax_184 = zx.d(*
                                    ((ecx_428 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    if (edx_5 - 1 u> 3)
                        ebx += edx_4
                        arg1 += edx_5
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_190 = (eax_184 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_323 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_8 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                *arg1 = eax_190 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                ebx += edx_4
                                arg1 += edx_5
                            case 2
                                uint16_t eax_191 = (eax_184 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_323 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_8 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                *arg1 = eax_191 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                ebx += edx_4
                                arg1 += edx_5
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + arg1) = var_14_8.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + arg1) = edx_323.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + arg1) = eax_184.b
                                ebx += edx_4
                                arg1 += edx_5
                            case 4
                                uint32_t eax_201 = eax_184 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_323 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_8 u>> *(edi + 0x1c) << *(edi + 0x20)
                                uint32_t* ecx_461 = arg1
                                *ecx_461 = eax_201 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                                ebx += edx_4
                                arg1 = ecx_461 + edx_5
                    
                label_622e1f:
                    uint32_t var_14_1
                    uint32_t eax_14
                    uint32_t edx_15
                    
                    if (edx_4 - 1 u> 3)
                        eax_14 = 0
                        edx_15 = 0
                        var_14_1 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_11 = zx.d(*ebx)
                                var_14_1 = zx.d(*(((*(esi + 0xc) & eax_11) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_15 = zx.d(*(((*(esi + 0x10) & eax_11) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_8 = *(esi + 0x14) & eax_11
                                int32_t var_1c_1 = ecx_8
                                eax_14 = zx.d(
                                    *((ecx_8 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_15 = zx.d(*ebx)
                                var_14_1 = zx.d(*(((*(esi + 0xc) & eax_15) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_15 = zx.d(*(((*(esi + 0x10) & eax_15) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_19 = *(esi + 0x14) & eax_15
                                int32_t var_1c_2 = ecx_19
                                eax_14 = zx.d(
                                    *((ecx_19 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_15 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_14 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_19 = *ebx
                                var_14_1 = zx.d(*(((*(esi + 0xc) & eax_19) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_15 = zx.d(*(((*(esi + 0x10) & eax_19) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_29 = *(esi + 0x14) & eax_19
                                int32_t var_1c_3 = ecx_29
                                eax_14 = zx.d(
                                    *((ecx_29 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    uint16_t* ecx_40
                    
                    if (edx_5 - 1 u> 3)
                        ecx_40 = arg1
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_20 = (eax_14 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_15 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_1 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                ecx_40 = arg1
                                *ecx_40 = eax_20 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                            case 2
                                uint16_t eax_21 = (eax_14 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_15 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_1 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                ecx_40 = arg1
                                *ecx_40 = eax_21 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                            case 3
                                ecx_40 = arg1
                                *((zx.d(*(edi + 0x20)) u>> 3) + ecx_40) = var_14_1.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + ecx_40) = edx_15.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + ecx_40) = eax_14.b
                            case 4
                                uint32_t eax_31 = eax_14 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_15 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_1 u>> *(edi + 0x1c) << *(edi + 0x20)
                                ecx_40 = arg1
                                *ecx_40 = eax_31 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                    
                    ebx += edx_4
                    int32_t eax_34 = var_24_1 - 1
                    arg1 = ecx_40 + edx_5
                    var_24_1 = eax_34
                    
                    if (eax_34 s<= 0)
                        break
                    
                label_62308e:
                    uint32_t var_14_2
                    uint32_t eax_40
                    uint32_t edx_59
                    
                    if (edx_4 - 1 u> 3)
                        eax_40 = 0
                        edx_59 = 0
                        var_14_2 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_37 = zx.d(*ebx)
                                var_14_2 = zx.d(*(((*(esi + 0xc) & eax_37) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_59 = zx.d(*(((*(esi + 0x10) & eax_37) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_65 = *(esi + 0x14) & eax_37
                                int32_t var_18_2 = ecx_65
                                eax_40 = zx.d(
                                    *((ecx_65 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_41 = zx.d(*ebx)
                                var_14_2 = zx.d(*(((*(esi + 0xc) & eax_41) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_59 = zx.d(*(((*(esi + 0x10) & eax_41) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_76 = *(esi + 0x14) & eax_41
                                int32_t var_18_3 = ecx_76
                                eax_40 = zx.d(
                                    *((ecx_76 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_2 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_59 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_40 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_45 = *ebx
                                var_14_2 = zx.d(*(((*(esi + 0xc) & eax_45) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_59 = zx.d(*(((*(esi + 0x10) & eax_45) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_86 = *(esi + 0x14) & eax_45
                                int32_t var_18_4 = ecx_86
                                eax_40 = zx.d(
                                    *((ecx_86 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    uint16_t* ecx_97
                    
                    if (edx_5 - 1 u> 3)
                        ecx_97 = arg1
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_46 = (eax_40 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_59 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_2 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                ecx_97 = arg1
                                *ecx_97 = eax_46 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                            case 2
                                uint16_t eax_47 = (eax_40 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_59 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_2 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                ecx_97 = arg1
                                *ecx_97 = eax_47 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                            case 3
                                ecx_97 = arg1
                                *((zx.d(*(edi + 0x20)) u>> 3) + ecx_97) = var_14_2.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + ecx_97) = edx_59.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + ecx_97) = eax_40.b
                            case 4
                                uint32_t eax_57 = eax_40 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_59 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_2 u>> *(edi + 0x1c) << *(edi + 0x20)
                                ecx_97 = arg1
                                *ecx_97 = eax_57 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                    
                    ebx += edx_4
                    arg1 = ecx_97 + edx_5
                label_6232ee:
                    uint32_t var_14_3
                    uint32_t eax_64
                    uint32_t edx_103
                    
                    if (edx_4 - 1 u> 3)
                        eax_64 = 0
                        edx_103 = 0
                        var_14_3 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_61 = zx.d(*ebx)
                                var_14_3 = zx.d(*(((*(esi + 0xc) & eax_61) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_103 = zx.d(*(((*(esi + 0x10) & eax_61) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_122 = *(esi + 0x14) & eax_61
                                int32_t var_18_6 = ecx_122
                                eax_64 = zx.d(*
                                    ((ecx_122 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_65 = zx.d(*ebx)
                                var_14_3 = zx.d(*(((*(esi + 0xc) & eax_65) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_103 = zx.d(*(((*(esi + 0x10) & eax_65) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_133 = *(esi + 0x14) & eax_65
                                int32_t var_18_7 = ecx_133
                                eax_64 = zx.d(*
                                    ((ecx_133 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_3 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_103 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_64 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_69 = *ebx
                                var_14_3 = zx.d(*(((*(esi + 0xc) & eax_69) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_103 = zx.d(*(((*(esi + 0x10) & eax_69) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_143 = *(esi + 0x14) & eax_69
                                int32_t var_18_8 = ecx_143
                                eax_64 = zx.d(*
                                    ((ecx_143 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    uint16_t* ecx_154
                    
                    if (edx_5 - 1 u> 3)
                        ecx_154 = arg1
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_70 = (eax_64 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_103 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_3 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                ecx_154 = arg1
                                *ecx_154 = eax_70 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                            case 2
                                uint16_t eax_71 = (eax_64 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_103 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_3 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                ecx_154 = arg1
                                *ecx_154 = eax_71 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                            case 3
                                ecx_154 = arg1
                                *((zx.d(*(edi + 0x20)) u>> 3) + ecx_154) = var_14_3.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + ecx_154) = edx_103.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + ecx_154) = eax_64.b
                            case 4
                                uint32_t eax_81 = eax_64 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_103 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_3 u>> *(edi + 0x1c) << *(edi + 0x20)
                                ecx_154 = arg1
                                *ecx_154 = eax_81 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                    
                    ebx += edx_4
                    arg1 = ecx_154 + edx_5
                label_62354e:
                    uint32_t var_14_4
                    uint32_t eax_88
                    uint32_t edx_147
                    
                    if (edx_4 - 1 u> 3)
                        eax_88 = 0
                        edx_147 = 0
                        var_14_4 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_85 = zx.d(*ebx)
                                var_14_4 = zx.d(*(((*(esi + 0xc) & eax_85) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_147 = zx.d(*(((*(esi + 0x10) & eax_85) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_179 = *(esi + 0x14) & eax_85
                                int32_t var_18_10 = ecx_179
                                eax_88 = zx.d(*
                                    ((ecx_179 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_89 = zx.d(*ebx)
                                var_14_4 = zx.d(*(((*(esi + 0xc) & eax_89) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_147 = zx.d(*(((*(esi + 0x10) & eax_89) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_190 = *(esi + 0x14) & eax_89
                                int32_t var_18_11 = ecx_190
                                eax_88 = zx.d(*
                                    ((ecx_190 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_4 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_147 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_88 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_93 = *ebx
                                var_14_4 = zx.d(*(((*(esi + 0xc) & eax_93) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_147 = zx.d(*(((*(esi + 0x10) & eax_93) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_200 = *(esi + 0x14) & eax_93
                                int32_t var_18_12 = ecx_200
                                eax_88 = zx.d(*
                                    ((ecx_200 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    uint16_t* ecx_211
                    
                    if (edx_5 - 1 u> 3)
                        ecx_211 = arg1
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_94 = (eax_88 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_147 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_4 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                ecx_211 = arg1
                                *ecx_211 = eax_94 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                            case 2
                                uint16_t eax_95 = (eax_88 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_147 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_4 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                ecx_211 = arg1
                                *ecx_211 = eax_95 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                            case 3
                                ecx_211 = arg1
                                *((zx.d(*(edi + 0x20)) u>> 3) + ecx_211) = var_14_4.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + ecx_211) = edx_147.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + ecx_211) = eax_88.b
                            case 4
                                uint32_t eax_105 = eax_88 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_147 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_4 u>> *(edi + 0x1c) << *(edi + 0x20)
                                ecx_211 = arg1
                                *ecx_211 = eax_105 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                    
                    ebx += edx_4
                    arg1 = ecx_211 + edx_5
                label_6237ae:
                    uint32_t var_14_5
                    uint32_t eax_112
                    uint32_t edx_191
                    
                    if (edx_4 - 1 u> 3)
                        eax_112 = 0
                        edx_191 = 0
                        var_14_5 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_109 = zx.d(*ebx)
                                var_14_5 = zx.d(*(((*(esi + 0xc) & eax_109) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_191 = zx.d(*(((*(esi + 0x10) & eax_109) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_236 = *(esi + 0x14) & eax_109
                                int32_t var_18_14 = ecx_236
                                eax_112 = zx.d(*
                                    ((ecx_236 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_113 = zx.d(*ebx)
                                var_14_5 = zx.d(*(((*(esi + 0xc) & eax_113) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_191 = zx.d(*(((*(esi + 0x10) & eax_113) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_247 = *(esi + 0x14) & eax_113
                                int32_t var_18_15 = ecx_247
                                eax_112 = zx.d(*
                                    ((ecx_247 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_5 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_191 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_112 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_117 = *ebx
                                var_14_5 = zx.d(*(((*(esi + 0xc) & eax_117) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_191 = zx.d(*(((*(esi + 0x10) & eax_117) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_257 = *(esi + 0x14) & eax_117
                                int32_t var_18_16 = ecx_257
                                eax_112 = zx.d(*
                                    ((ecx_257 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    uint16_t* ecx_268
                    
                    if (edx_5 - 1 u> 3)
                        ecx_268 = arg1
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_118 = (eax_112 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_191 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_5 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                ecx_268 = arg1
                                *ecx_268 = eax_118 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                            case 2
                                uint16_t eax_119 = (eax_112 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_191 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_5 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                ecx_268 = arg1
                                *ecx_268 = eax_119 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                            case 3
                                ecx_268 = arg1
                                *((zx.d(*(edi + 0x20)) u>> 3) + ecx_268) = var_14_5.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + ecx_268) = edx_191.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + ecx_268) = eax_112.b
                            case 4
                                uint32_t eax_129 = eax_112 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_191 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_5 u>> *(edi + 0x1c) << *(edi + 0x20)
                                ecx_268 = arg1
                                *ecx_268 = eax_129 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                    
                    ebx += edx_4
                    arg1 = ecx_268 + edx_5
                label_623a0e:
                    uint32_t var_14_6
                    uint32_t eax_136
                    uint32_t edx_235
                    
                    if (edx_4 - 1 u> 3)
                        eax_136 = 0
                        edx_235 = 0
                        var_14_6 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_133 = zx.d(*ebx)
                                var_14_6 = zx.d(*(((*(esi + 0xc) & eax_133) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_235 = zx.d(*(((*(esi + 0x10) & eax_133) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_293 = *(esi + 0x14) & eax_133
                                int32_t var_18_18 = ecx_293
                                eax_136 = zx.d(*
                                    ((ecx_293 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_137 = zx.d(*ebx)
                                var_14_6 = zx.d(*(((*(esi + 0xc) & eax_137) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_235 = zx.d(*(((*(esi + 0x10) & eax_137) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_304 = *(esi + 0x14) & eax_137
                                int32_t var_18_19 = ecx_304
                                eax_136 = zx.d(*
                                    ((ecx_304 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_6 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_235 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_136 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_141 = *ebx
                                var_14_6 = zx.d(*(((*(esi + 0xc) & eax_141) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_235 = zx.d(*(((*(esi + 0x10) & eax_141) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_314 = *(esi + 0x14) & eax_141
                                int32_t var_18_20 = ecx_314
                                eax_136 = zx.d(*
                                    ((ecx_314 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    uint16_t* ecx_325
                    
                    if (edx_5 - 1 u> 3)
                        ecx_325 = arg1
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_142 = (eax_136 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_235 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_6 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                ecx_325 = arg1
                                *ecx_325 = eax_142 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                            case 2
                                uint16_t eax_143 = (eax_136 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_235 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_6 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                ecx_325 = arg1
                                *ecx_325 = eax_143 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                            case 3
                                ecx_325 = arg1
                                *((zx.d(*(edi + 0x20)) u>> 3) + ecx_325) = var_14_6.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + ecx_325) = edx_235.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + ecx_325) = eax_136.b
                            case 4
                                uint32_t eax_153 = eax_136 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_235 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_6 u>> *(edi + 0x1c) << *(edi + 0x20)
                                ecx_325 = arg1
                                *ecx_325 = eax_153 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                    
                    ebx += edx_4
                    arg1 = ecx_325 + edx_5
                label_623c6e:
                    uint32_t var_14_7
                    uint32_t eax_160
                    uint32_t edx_279
                    
                    if (edx_4 - 1 u> 3)
                        eax_160 = 0
                        edx_279 = 0
                        var_14_7 = 0
                    else
                        switch (edx_4)
                            case 1
                                uint32_t eax_157 = zx.d(*ebx)
                                var_14_7 = zx.d(*(((*(esi + 0xc) & eax_157) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_279 = zx.d(*(((*(esi + 0x10) & eax_157) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_350 = *(esi + 0x14) & eax_157
                                int32_t var_18_22 = ecx_350
                                eax_160 = zx.d(*
                                    ((ecx_350 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                uint32_t eax_161 = zx.d(*ebx)
                                var_14_7 = zx.d(*(((*(esi + 0xc) & eax_161) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_279 = zx.d(*(((*(esi + 0x10) & eax_161) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_361 = *(esi + 0x14) & eax_161
                                int32_t var_18_23 = ecx_361
                                eax_160 = zx.d(*
                                    ((ecx_361 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 3
                                var_14_7 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                edx_279 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                eax_160 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t eax_165 = *ebx
                                var_14_7 = zx.d(*(((*(esi + 0xc) & eax_165) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_279 = zx.d(*(((*(esi + 0x10) & eax_165) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                int32_t ecx_371 = *(esi + 0x14) & eax_165
                                int32_t var_18_24 = ecx_371
                                eax_160 = zx.d(*
                                    ((ecx_371 u>> *(esi + 0x22)) + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                    
                    void* ecx_382
                    
                    if (edx_5 - 1 u> 3)
                        ecx_382 = arg1
                    else
                        switch (edx_5)
                            case 1
                                uint8_t eax_166 = (eax_160 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (edx_279 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                    | (var_14_7 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                                ecx_382 = arg1
                                *ecx_382 = eax_166 | (var_8 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                            case 2
                                uint16_t eax_167 = (eax_160 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (edx_279 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                    | (var_14_7 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                ecx_382 = arg1
                                *ecx_382 = eax_167 | (var_8 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                            case 3
                                ecx_382 = arg1
                                *((zx.d(*(edi + 0x20)) u>> 3) + ecx_382) = var_14_7.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + ecx_382) = edx_279.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + ecx_382) = eax_160.b
                            case 4
                                uint32_t eax_177 = eax_160 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | edx_279 u>> *(edi + 0x1d) << *(edi + 0x21)
                                    | var_14_7 u>> *(edi + 0x1c) << *(edi + 0x20)
                                ecx_382 = arg1
                                *ecx_382 = eax_177 | var_8 u>> *(edi + 0x1f) << *(edi + 0x23)
                    
                    ebx += edx_4
                    arg1 = ecx_382 + edx_5
                
                ecx = var_28
            case 3
                goto label_623c6e
            case 4
                goto label_623a0e
            case 5
                goto label_6237ae
            case 6
                goto label_62354e
            case 7
                goto label_6232ee
        
        ebx += edx_1
        arg1 += edx_3
    
    return result
}

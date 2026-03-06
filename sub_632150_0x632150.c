// 函数名称: sub_632150
// 虚拟地址: 0x632150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_632150(uint32_t arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t ecx = eax[6]
    char* var_14 = *eax
    int32_t edx_1 = eax[4]
    int32_t edx_2 = eax[9]
    int32_t edx_5 = *(*(eax[0xa] + 4) + 4)
    int32_t result_1 = eax[7]
    void* esi = eax[0xb]
    int32_t* edi = eax[5]
    uint32_t eax_1 = zx.d(*(eax + 0x3f))
    uint32_t edx_6 = zx.d(*(esi + 9))
    int32_t var_34 = ecx
    int32_t result
    
    while (true)
        result = result_1
        result_1 -= 1
        
        if (result == 0)
            break
        
        int32_t eax_3
        int32_t edx_7
        edx_7:eax_3 = sx.q(ecx + 3)
        int32_t var_2c_1 = (eax_3 + (edx_7 & 3)) s>> 2
        
        switch (ecx & 3)
            case 0
                goto label_63243e
            case 1
                goto label_6321cb
            case 2
                while (true)
                    char* eax_143 = edx_5 + (zx.d(*var_14) << 2)
                    uint32_t var_c_7
                    uint32_t var_8_7
                    uint32_t ebx_75
                    uint32_t eax_147
                    
                    if (edx_6 - 1 u> 3)
                        ebx_75 = 0
                        var_8_7 = 0
                        var_c_7 = 0
                        arg1 = 0
                    else
                        switch (edx_6)
                            case 1
                                eax_147 = zx.d(*edi)
                            label_63293e:
                                var_c_7 = zx.d(*(((*(esi + 0xc) & eax_147) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_7 = zx.d(*(((*(esi + 0x10) & eax_147) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                arg1 = zx.d(*(((*(esi + 0x14) & eax_147) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                ebx_75 = zx.d(*(((*(esi + 0x18) & eax_147) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_147 = zx.d(*edi)
                                goto label_63293e
                            case 3
                                var_c_7 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                var_8_7 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_75 = 0xff
                                arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                            case 4
                                eax_147 = *edi
                                goto label_63293e
                    int32_t eax_158
                    int32_t edx_70
                    edx_70:eax_158 = mulu.dp.d(0x80808081, (zx.d(*eax_143) - var_c_7) * eax_1)
                    uint32_t var_c_8 = var_c_7 + (edx_70 u>> 7)
                    int32_t eax_159
                    int32_t edx_72
                    edx_72:eax_159 = mulu.dp.d(0x80808081, (zx.d(eax_143[1]) - var_8_7) * eax_1)
                    uint32_t var_8_8 = var_8_7 + (edx_72 u>> 7)
                    int32_t eax_160
                    int32_t edx_77
                    edx_77:eax_160 = mulu.dp.d(0x80808081, (zx.d(eax_143[2]) - arg1) * eax_1)
                    arg1 += edx_77 u>> 7
                    uint32_t ebx_76 = ebx_75 + eax_1 - ebx_75 * eax_1 u/ 0xff
                    
                    if (edx_6 - 1 u> 3)
                        var_14 = &var_14[1]
                        edi += edx_6
                    else
                        switch (edx_6)
                            case 1
                                var_14 = &var_14[1]
                                uint8_t ebx_77 = (ebx_76 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (var_8_8 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_77 | (var_c_8 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                edi += edx_6
                            case 2
                                var_14 = &var_14[1]
                                uint16_t ebx_78 = (ebx_76 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (var_8_8 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_78 | (var_c_8 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                edi += edx_6
                            case 3
                                uint32_t ecx_158
                                ecx_158.b = var_c_8.b
                                var_14 = &var_14[1]
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = ecx_158.b
                                char* eax_177
                                eax_177.b = var_8_8.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = eax_177.b
                                char* edx_84
                                edx_84.b = arg1.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_84.b
                                edi += edx_6
                            case 4
                                uint32_t ebx_82 = ebx_76 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_8_8 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_82 | var_c_8 u>> *(esi + 0x1c) << *(esi + 0x20)
                                var_14 = &var_14[1]
                                edi += edx_6
                    
                label_6321cb:
                    uint32_t edx_9 = zx.d(*var_14)
                    char* eax_9 = edx_5 + (edx_9 << 2)
                    uint32_t var_c_1
                    uint32_t var_8_1
                    uint32_t ebx_12
                    uint32_t eax_13
                    
                    if (edx_6 - 1 u> 3)
                        ebx_12 = 0
                        arg1 = 0
                        var_8_1 = 0
                        var_c_1 = 0
                    else
                        switch (edx_6)
                            case 1
                                eax_13 = zx.d(*edi)
                            label_63221d:
                                var_c_1 = zx.d(*(((*(esi + 0xc) & eax_13) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_1 = zx.d(*(((*(esi + 0x10) & eax_13) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                arg1 = zx.d(*(((*(esi + 0x14) & eax_13) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                ebx_12 = zx.d(*(((*(esi + 0x18) & eax_13) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_13 = zx.d(*edi)
                                goto label_63221d
                            case 3
                                var_c_1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                var_8_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                ebx_12 = 0xff
                            case 4
                                eax_13 = *edi
                                goto label_63221d
                    int32_t eax_24
                    int32_t edx_13
                    edx_13:eax_24 = mulu.dp.d(0x80808081, (zx.d(*eax_9) - var_c_1) * eax_1)
                    uint32_t var_c_2 = var_c_1 + (edx_13 u>> 7)
                    int32_t eax_25
                    int32_t edx_15
                    edx_15:eax_25 =
                        mulu.dp.d(0x80808081, (zx.d(*(edx_5 + (edx_9 << 2) + 1)) - var_8_1) * eax_1)
                    uint32_t var_8_2 = var_8_1 + (edx_15 u>> 7)
                    int32_t eax_26
                    int32_t edx_20
                    edx_20:eax_26 = mulu.dp.d(0x80808081, (zx.d(eax_9[2]) - arg1) * eax_1)
                    arg1 += edx_20 u>> 7
                    uint32_t ebx_13 = ebx_12 + eax_1 - ebx_12 * eax_1 u/ 0xff
                    
                    if (edx_6 - 1 u<= 3)
                        switch (edx_6)
                            case 1
                                uint8_t ebx_14 = (ebx_13 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (var_8_2 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_14 | (var_c_2 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_15 = (ebx_13 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (var_8_2 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_15 | (var_c_2 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                uint32_t ecx_20
                                ecx_20.b = var_c_2.b
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = ecx_20.b
                                char* eax_42
                                eax_42.b = var_8_2.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = eax_42.b
                                char* edx_27
                                edx_27.b = arg1.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_27.b
                            case 4
                                uint32_t ebx_19 = ebx_13 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_8_2 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_19 | var_c_2 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    var_14 = &var_14[1]
                    edi += edx_6
                    int32_t eax_53 = var_2c_1 - 1
                    var_2c_1 = eax_53
                    
                    if (eax_53 s<= 0)
                        break
                    
                label_63243e:
                    char* eax_55 = edx_5 + (zx.d(*var_14) << 2)
                    uint32_t var_c_3
                    uint32_t var_8_3
                    uint32_t ebx_33
                    uint32_t eax_59
                    
                    if (edx_6 - 1 u> 3)
                        ebx_33 = 0
                        var_8_3 = 0
                        var_c_3 = 0
                        arg1 = 0
                    else
                        switch (edx_6)
                            case 1
                                eax_59 = zx.d(*edi)
                            label_632489:
                                var_c_3 = zx.d(*(((*(esi + 0xc) & eax_59) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_3 = zx.d(*(((*(esi + 0x10) & eax_59) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                arg1 = zx.d(*(((*(esi + 0x14) & eax_59) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                ebx_33 = zx.d(*(((*(esi + 0x18) & eax_59) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_59 = zx.d(*edi)
                                goto label_632489
                            case 3
                                var_c_3 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                var_8_3 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_33 = 0xff
                                arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                            case 4
                                eax_59 = *edi
                                goto label_632489
                    int32_t eax_70
                    int32_t edx_32
                    edx_32:eax_70 = mulu.dp.d(0x80808081, (zx.d(*eax_55) - var_c_3) * eax_1)
                    uint32_t var_c_4 = var_c_3 + (edx_32 u>> 7)
                    int32_t eax_71
                    int32_t edx_34
                    edx_34:eax_71 = mulu.dp.d(0x80808081, (zx.d(eax_55[1]) - var_8_3) * eax_1)
                    uint32_t var_8_4 = var_8_3 + (edx_34 u>> 7)
                    int32_t eax_72
                    int32_t edx_39
                    edx_39:eax_72 = mulu.dp.d(0x80808081, (zx.d(eax_55[2]) - arg1) * eax_1)
                    arg1 += edx_39 u>> 7
                    uint32_t ebx_34 = ebx_33 + eax_1 - ebx_33 * eax_1 u/ 0xff
                    
                    if (edx_6 - 1 u<= 3)
                        switch (edx_6)
                            case 1
                                uint8_t ebx_35 = (ebx_34 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (var_8_4 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_35 | (var_c_4 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_36 = (ebx_34 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (var_8_4 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_36 | (var_c_4 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                uint32_t ecx_66
                                ecx_66.b = var_c_4.b
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = ecx_66.b
                                char* eax_88
                                eax_88.b = var_8_4.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = eax_88.b
                                uint32_t edx_46
                                edx_46.b = arg1.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_46.b
                            case 4
                                uint32_t ebx_40 = ebx_34 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_8_4 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_40 | var_c_4 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    var_14 = &var_14[1]
                    edi += edx_6
                label_63269a:
                    char* eax_99 = edx_5 + (zx.d(*var_14) << 2)
                    uint32_t var_c_5
                    uint32_t var_8_5
                    uint32_t ebx_54
                    uint32_t eax_103
                    
                    if (edx_6 - 1 u> 3)
                        ebx_54 = 0
                        var_8_5 = 0
                        var_c_5 = 0
                        arg1 = 0
                    else
                        switch (edx_6)
                            case 1
                                eax_103 = zx.d(*edi)
                            label_6326e5:
                                var_c_5 = zx.d(*(((*(esi + 0xc) & eax_103) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_5 = zx.d(*(((*(esi + 0x10) & eax_103) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                arg1 = zx.d(*(((*(esi + 0x14) & eax_103) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                ebx_54 = zx.d(*(((*(esi + 0x18) & eax_103) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_103 = zx.d(*edi)
                                goto label_6326e5
                            case 3
                                var_c_5 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                var_8_5 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_54 = 0xff
                                arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                            case 4
                                eax_103 = *edi
                                goto label_6326e5
                    int32_t eax_114
                    int32_t edx_51
                    edx_51:eax_114 = mulu.dp.d(0x80808081, (zx.d(*eax_99) - var_c_5) * eax_1)
                    uint32_t var_c_6 = var_c_5 + (edx_51 u>> 7)
                    int32_t eax_115
                    int32_t edx_53
                    edx_53:eax_115 = mulu.dp.d(0x80808081, (zx.d(eax_99[1]) - var_8_5) * eax_1)
                    uint32_t var_8_6 = var_8_5 + (edx_53 u>> 7)
                    int32_t eax_116
                    int32_t edx_58
                    edx_58:eax_116 = mulu.dp.d(0x80808081, (zx.d(eax_99[2]) - arg1) * eax_1)
                    arg1 += edx_58 u>> 7
                    uint32_t ebx_55 = ebx_54 + eax_1 - ebx_54 * eax_1 u/ 0xff
                    
                    if (edx_6 - 1 u<= 3)
                        switch (edx_6)
                            case 1
                                uint8_t ebx_56 = (ebx_55 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (var_8_6 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_56 | (var_c_6 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_57 = (ebx_55 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (arg1 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (var_8_6 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_57 | (var_c_6 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                uint32_t ecx_112
                                ecx_112.b = var_c_6.b
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = ecx_112.b
                                char* eax_132
                                eax_132.b = var_8_6.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = eax_132.b
                                uint32_t edx_65
                                edx_65.b = arg1.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_65.b
                            case 4
                                uint32_t ebx_61 = ebx_55 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | arg1 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_8_6 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_61 | var_c_6 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    var_14 = &var_14[1]
                    edi += edx_6
                
                ecx = var_34
            case 3
                goto label_63269a
        
        var_14 = &var_14[edx_1]
        edi += edx_2
    
    return result
}

// 函数名称: sub_6256a0
// 虚拟地址: 0x6256a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6256a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t ecx = eax[6]
    int32_t result_1 = eax[7]
    int32_t edx_1 = eax[4]
    int32_t edx_2 = eax[9]
    uint32_t* ebx = eax[5]
    void* esi = eax[0xb]
    void* edi = eax[0xa]
    uint32_t edx_4 = zx.d(*(edi + 9))
    uint32_t edx_5 = zx.d(*(esi + 9))
    int32_t* ecx_1 = *eax
    arg1 = ecx_1
    uint32_t var_8
    
    if (*(esi + 0x18) == 0)
        var_8 = 0
    else
        var_8 = zx.d(*(eax + 0x3f))
    
    int32_t eax_3 = not.d(*(edi + 0x18))
    int32_t var_14_1 = eax[0xe] & eax_3
    int32_t result
    
    while (true)
        int32_t result_2 = result_1
        result = result_1 - 1
        result_1 = result
        
        if (result_2 == 0)
            break
        
        int32_t eax_7
        int32_t edx_6
        edx_6:eax_7 = sx.q(ecx + 7)
        int32_t var_28_1 = (eax_7 + (edx_6 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_625909
            case 1
                goto label_625744
            case 2
                while (true)
                    uint32_t edx_218
                    
                    if (edx_4 - 1 u> 3)
                        edx_218 = 0
                    else
                        switch (edx_4)
                            case 1
                                edx_218 = zx.d(*ecx_1)
                            case 2
                                edx_218 = zx.d(*ecx_1)
                            case 3
                                edx_218 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                edx_218 = *ecx_1
                    
                    if ((edx_218 & eax_3) == var_14_1)
                        goto label_626520
                    
                    uint32_t eax_148 = zx.d(*(((*(edi + 0xc) & edx_218) u>> *(edi + 0x20))
                        + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                    uint32_t eax_152 = zx.d(*(((*(edi + 0x10) & edx_218) u>> *(edi + 0x21))
                        + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                    uint32_t edx_225 = zx.d(*(((*(edi + 0x14) & edx_218) u>> *(edi + 0x22))
                        + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                    
                    if (edx_5 - 1 u> 3)
                        goto label_626520
                    
                    switch (edx_5)
                        case 1
                            uint8_t edx_226 = (edx_225 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                | (eax_152 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                | (eax_148 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            *ebx = edx_226 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                            ebx += edx_5
                            arg1 += edx_4
                            ecx_1 = arg1
                        case 2
                            uint16_t edx_227 = (edx_225 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                | (eax_152 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                | (eax_148 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            *ebx = edx_227 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                            ebx += edx_5
                            arg1 += edx_4
                            ecx_1 = arg1
                        case 3
                            *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = eax_148.b
                            *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = eax_152.b
                            *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = edx_225.b
                            ebx += edx_5
                            arg1 += edx_4
                            ecx_1 = arg1
                        case 4
                            uint32_t edx_231 = edx_225 u>> *(esi + 0x1e) << *(esi + 0x22)
                                | eax_152 u>> *(esi + 0x1d) << *(esi + 0x21)
                                | eax_148 u>> *(esi + 0x1c) << *(esi + 0x20)
                            *ebx = edx_231 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                        label_626520:
                            ebx += edx_5
                            arg1 += edx_4
                            ecx_1 = arg1
                    
                label_625744:
                    uint32_t eax_14
                    
                    if (edx_4 - 1 u> 3)
                        eax_14 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_14 = zx.d(*ecx_1)
                            case 2
                                eax_14 = zx.d(*ecx_1)
                            case 3
                                eax_14 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_14 = *ecx_1
                    
                    if ((eax_14 & eax_3) != var_14_1)
                        uint32_t edx_14 = zx.d(*(((*(edi + 0xc) & eax_14) u>> *(edi + 0x20))
                            + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                        uint32_t edx_18 = zx.d(*(((*(edi + 0x10) & eax_14) u>> *(edi + 0x21))
                            + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                        uint32_t eax_21 = zx.d(*(((*(edi + 0x14) & eax_14) u>> *(edi + 0x22))
                            + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        if (edx_5 - 1 u<= 3)
                            switch (edx_5)
                                case 1
                                    uint8_t eax_22 = (eax_21 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (edx_18 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (edx_14 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *ebx = eax_22 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                case 2
                                    uint16_t eax_23 = (eax_21 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (edx_18 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (edx_14 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *ebx = eax_23 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = edx_14.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = edx_18.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = eax_21.b
                                case 4
                                    uint32_t eax_27 = eax_21 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | edx_18 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | edx_14 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *ebx = eax_27 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                    
                    arg1 += edx_4
                    ebx += edx_5
                    ecx_1 = arg1
                    int32_t eax_31 = var_28_1 - 1
                    var_28_1 = eax_31
                    
                    if (eax_31 s<= 0)
                        break
                    
                label_625909:
                    uint32_t eax_34
                    
                    if (edx_4 - 1 u> 3)
                        eax_34 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_34 = zx.d(*ecx_1)
                            case 2
                                eax_34 = zx.d(*ecx_1)
                            case 3
                                eax_34 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_34 = *ecx_1
                    
                    if ((eax_34 & eax_3) != var_14_1)
                        uint32_t edx_44 = zx.d(*(((*(edi + 0xc) & eax_34) u>> *(edi + 0x20))
                            + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                        uint32_t edx_48 = zx.d(*(((*(edi + 0x10) & eax_34) u>> *(edi + 0x21))
                            + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                        uint32_t eax_41 = zx.d(*(((*(edi + 0x14) & eax_34) u>> *(edi + 0x22))
                            + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        if (edx_5 - 1 u<= 3)
                            switch (edx_5)
                                case 1
                                    uint8_t eax_42 = (eax_41 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (edx_48 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (edx_44 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *ebx = eax_42 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                case 2
                                    uint16_t eax_43 = (eax_41 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (edx_48 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (edx_44 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *ebx = eax_43 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = edx_44.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = edx_48.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = eax_41.b
                                case 4
                                    uint32_t eax_47 = eax_41 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | edx_48 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | edx_44 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *ebx = eax_47 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                    
                    ebx += edx_5
                    arg1 += edx_4
                    ecx_1 = arg1
                label_625abf:
                    uint32_t eax_52
                    
                    if (edx_4 - 1 u> 3)
                        eax_52 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_52 = zx.d(*ecx_1)
                            case 2
                                eax_52 = zx.d(*ecx_1)
                            case 3
                                eax_52 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_52 = *ecx_1
                    
                    if ((eax_52 & eax_3) != var_14_1)
                        uint32_t edx_74 = zx.d(*(((*(edi + 0xc) & eax_52) u>> *(edi + 0x20))
                            + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                        uint32_t edx_78 = zx.d(*(((*(edi + 0x10) & eax_52) u>> *(edi + 0x21))
                            + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                        uint32_t eax_59 = zx.d(*(((*(edi + 0x14) & eax_52) u>> *(edi + 0x22))
                            + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        if (edx_5 - 1 u<= 3)
                            switch (edx_5)
                                case 1
                                    uint8_t eax_60 = (eax_59 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (edx_78 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (edx_74 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *ebx = eax_60 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                case 2
                                    uint16_t eax_61 = (eax_59 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (edx_78 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (edx_74 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *ebx = eax_61 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = edx_74.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = edx_78.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = eax_59.b
                                case 4
                                    uint32_t eax_65 = eax_59 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | edx_78 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | edx_74 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *ebx = eax_65 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                    
                    ebx += edx_5
                    arg1 += edx_4
                    ecx_1 = arg1
                label_625c75:
                    uint32_t eax_70
                    
                    if (edx_4 - 1 u> 3)
                        eax_70 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_70 = zx.d(*ecx_1)
                            case 2
                                eax_70 = zx.d(*ecx_1)
                            case 3
                                eax_70 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_70 = *ecx_1
                    
                    if ((eax_70 & eax_3) != var_14_1)
                        uint32_t edx_104 = zx.d(*(((*(edi + 0xc) & eax_70) u>> *(edi + 0x20))
                            + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                        uint32_t edx_108 = zx.d(*(((*(edi + 0x10) & eax_70) u>> *(edi + 0x21))
                            + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                        uint32_t eax_77 = zx.d(*(((*(edi + 0x14) & eax_70) u>> *(edi + 0x22))
                            + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        if (edx_5 - 1 u<= 3)
                            switch (edx_5)
                                case 1
                                    uint8_t eax_78 = (eax_77 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (edx_108 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (edx_104 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *ebx = eax_78 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                case 2
                                    uint16_t eax_79 = (eax_77 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (edx_108 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (edx_104 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *ebx = eax_79 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = edx_104.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = edx_108.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = eax_77.b
                                case 4
                                    uint32_t eax_83 = eax_77 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | edx_108 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | edx_104 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *ebx = eax_83 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                    
                    ebx += edx_5
                    arg1 += edx_4
                    ecx_1 = arg1
                label_625e2b:
                    uint32_t eax_88
                    
                    if (edx_4 - 1 u> 3)
                        eax_88 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_88 = zx.d(*ecx_1)
                            case 2
                                eax_88 = zx.d(*ecx_1)
                            case 3
                                eax_88 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_88 = *ecx_1
                    
                    if ((eax_88 & eax_3) != var_14_1)
                        uint32_t edx_134 = zx.d(*(((*(edi + 0xc) & eax_88) u>> *(edi + 0x20))
                            + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                        uint32_t edx_138 = zx.d(*(((*(edi + 0x10) & eax_88) u>> *(edi + 0x21))
                            + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                        uint32_t eax_95 = zx.d(*(((*(edi + 0x14) & eax_88) u>> *(edi + 0x22))
                            + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        if (edx_5 - 1 u<= 3)
                            switch (edx_5)
                                case 1
                                    uint8_t eax_96 = (eax_95 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (edx_138 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (edx_134 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *ebx = eax_96 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                case 2
                                    uint16_t eax_97 = (eax_95 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (edx_138 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (edx_134 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *ebx = eax_97 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = edx_134.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = edx_138.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = eax_95.b
                                case 4
                                    uint32_t eax_101 = eax_95 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | edx_138 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | edx_134 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *ebx = eax_101 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                    
                    ebx += edx_5
                    arg1 += edx_4
                    ecx_1 = arg1
                label_625fe1:
                    uint32_t eax_106
                    
                    if (edx_4 - 1 u> 3)
                        eax_106 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_106 = zx.d(*ecx_1)
                            case 2
                                eax_106 = zx.d(*ecx_1)
                            case 3
                                eax_106 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_106 = *ecx_1
                    
                    if ((eax_106 & eax_3) != var_14_1)
                        uint32_t edx_164 = zx.d(*(((*(edi + 0xc) & eax_106) u>> *(edi + 0x20))
                            + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                        uint32_t edx_168 = zx.d(*(((*(edi + 0x10) & eax_106) u>> *(edi + 0x21))
                            + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                        uint32_t eax_113 = zx.d(*(((*(edi + 0x14) & eax_106) u>> *(edi + 0x22))
                            + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        if (edx_5 - 1 u<= 3)
                            switch (edx_5)
                                case 1
                                    uint8_t eax_114 = (eax_113 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (edx_168 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (edx_164 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *ebx = eax_114 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                case 2
                                    uint16_t eax_115 = (eax_113 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (edx_168 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (edx_164 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *ebx = eax_115 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = edx_164.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = edx_168.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = eax_113.b
                                case 4
                                    uint32_t eax_119 = eax_113 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | edx_168 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | edx_164 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *ebx = eax_119 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                    
                    ebx += edx_5
                    arg1 += edx_4
                    ecx_1 = arg1
                label_626197:
                    uint32_t eax_124
                    
                    if (edx_4 - 1 u> 3)
                        eax_124 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_124 = zx.d(*ecx_1)
                            case 2
                                eax_124 = zx.d(*ecx_1)
                            case 3
                                eax_124 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_124 = *ecx_1
                    
                    if ((eax_124 & eax_3) != var_14_1)
                        uint32_t edx_194 = zx.d(*(((*(edi + 0xc) & eax_124) u>> *(edi + 0x20))
                            + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                        uint32_t edx_198 = zx.d(*(((*(edi + 0x10) & eax_124) u>> *(edi + 0x21))
                            + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                        uint32_t eax_131 = zx.d(*(((*(edi + 0x14) & eax_124) u>> *(edi + 0x22))
                            + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                        
                        if (edx_5 - 1 u<= 3)
                            switch (edx_5)
                                case 1
                                    uint8_t eax_132 = (eax_131 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (edx_198 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (edx_194 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *ebx = eax_132 | (var_8 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                case 2
                                    uint16_t eax_133 = (eax_131 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (edx_198 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (edx_194 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *ebx = eax_133 | (var_8 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                case 3
                                    *((zx.d(*(esi + 0x20)) u>> 3) + ebx) = edx_194.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + ebx) = edx_198.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + ebx) = eax_131.b
                                case 4
                                    uint32_t eax_137 = eax_131 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | edx_198 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | edx_194 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *ebx = eax_137 | var_8 u>> *(esi + 0x1f) << *(esi + 0x23)
                    
                    ebx += edx_5
                    arg1 += edx_4
                    ecx_1 = arg1
            case 3
                goto label_626197
            case 4
                goto label_625fe1
            case 5
                goto label_625e2b
            case 6
                goto label_625c75
            case 7
                goto label_625abf
        
        ecx_1 += edx_1
        ebx += edx_2
        arg1 = ecx_1
    
    return result
}

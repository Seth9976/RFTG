// 函数名称: sub_6125b0
// 虚拟地址: 0x6125b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6125b0(void* arg1)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x34)
    uint32_t edx = zx.d(*(ebx + 0x3d))
    uint32_t ecx = zx.d(*(ebx + 0x3c))
    uint32_t eax_1 = zx.d(*(ebx + 0x3e))
    void* esi = *(ebx + 0x2c)
    uint32_t eax_2 = zx.d(*(esi + 9))
    int32_t var_44 = 0
    int32_t var_38 = 0
    void* edi = *(ebx + 0x28)
    uint32_t edx_1 = zx.d(*(edi + 9))
    uint32_t ecx_1 = zx.d(*(ebx + 0x3f))
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(*(ebx + 8) << 0x10)
    int32_t ecx_2 = *(ebx + 0x1c)
    *(ebx + 0x18)
    int32_t result = divs.dp.d(sx.q(*(ebx + 4) << 0x10), *(ebx + 0x18))
    int32_t result_1 = result
    
    if (ecx_2 != 0)
        do
            *(ebx + 0x1c) -= 1
            int32_t* edx_5 = *(ebx + 0x14)
            result = *(ebx + 0x18)
            int32_t* ecx_3 = nullptr
            int32_t* var_28_1 = nullptr
            int32_t* var_20_1 = edx_5
            int32_t i = result
            int32_t var_48_1 = 0xffffffff
            int32_t var_30_1 = 0x10000
            
            if (var_38 s>= 0x10000)
                ebx = arg1
                uint32_t eax_11 = var_38 u>> 0x10
                var_44 += eax_11
                result = eax_11 * 0xffff0000
                var_38 += result
            
            while (i != 0)
                i -= 1
                
                if (var_30_1 s>= 0x10000)
                    uint32_t eax_15 = var_30_1 u>> 0x10
                    var_48_1 += eax_15
                    var_30_1 += eax_15 * 0xffff0000
                    int32_t eax_18 = *(ebx + 0xc) * var_44
                    int32_t var_2c_1 = eax_18
                    int32_t* eax_20 = eax_18 + var_48_1 * edx_1 + *ebx
                    var_28_1 = eax_20
                    ecx_3 = eax_20
                
                uint32_t eax_21 = 0
                uint32_t var_24_1
                uint32_t var_1c_1
                uint32_t var_18_1
                uint32_t var_14_1
                
                if (*(edi + 0x18) == 0)
                    if (edx_1 - 1 u> 3)
                        var_1c_1 = 0
                        var_18_1 = 0
                        var_14_1 = 0
                        var_24_1 = 0xff
                    else
                        switch (edx_1)
                            case 1
                                eax_21 = zx.d(*ecx_3)
                            label_612798:
                                var_14_1 = zx.d(*(((*(edi + 0xc) & eax_21) u>> *(edi + 0x20))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                                var_18_1 = zx.d(*(((*(edi + 0x10) & eax_21) u>> *(edi + 0x21))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                                var_1c_1 = zx.d(*(((*(edi + 0x14) & eax_21) u>> *(edi + 0x22))
                                    + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                                ecx_3 = var_28_1
                                var_24_1 = 0xff
                            case 2
                                eax_21 = zx.d(*ecx_3)
                                goto label_612798
                            case 3
                            label_6127e7:
                                var_14_1 = zx.d(*((zx.d(*(edi + 0x20)) u>> 3) + ecx_3))
                                var_18_1 = zx.d(*((zx.d(*(edi + 0x21)) u>> 3) + ecx_3))
                                var_1c_1 = zx.d(*((zx.d(*(edi + 0x22)) u>> 3) + ecx_3))
                                var_24_1 = 0xff
                            case 4
                                eax_21 = *ecx_3
                                goto label_612798
                else if (edx_1 - 1 u> 3)
                    var_24_1 = 0
                    var_1c_1 = 0
                    var_18_1 = 0
                    var_14_1 = 0
                else
                    switch (edx_1)
                        case 1
                            eax_21 = zx.d(*ecx_3)
                        label_6126e9:
                            var_14_1 = zx.d(*(((*(edi + 0xc) & eax_21) u>> *(edi + 0x20))
                                + (&data_8bac68)[zx.d(*(edi + 0x1c))]))
                            var_18_1 = zx.d(*(((*(edi + 0x10) & eax_21) u>> *(edi + 0x21))
                                + (&data_8bac68)[zx.d(*(edi + 0x1d))]))
                            var_1c_1 = zx.d(*(((*(edi + 0x14) & eax_21) u>> *(edi + 0x22))
                                + (&data_8bac68)[zx.d(*(edi + 0x1e))]))
                            var_24_1 = zx.d(*(((*(edi + 0x18) & eax_21) u>> *(edi + 0x23))
                                + (&data_8bac68)[zx.d(*(edi + 0x1f))]))
                            ecx_3 = var_28_1
                        case 2
                            eax_21 = zx.d(*ecx_3)
                            goto label_6126e9
                        case 3
                            goto label_6127e7
                        case 4
                            eax_21 = *ecx_3
                            goto label_6126e9
                
                if ((eax & 0x100) != 0)
                    if (edx_1 == 3)
                        ecx_3 = var_28_1
                        eax_21 = var_1c_1 << *(edi + 0x22) | var_18_1 << *(edi + 0x21)
                            | var_14_1 << *(edi + 0x20)
                    
                    ebx = arg1
                
                if ((eax & 0x100) == 0 || eax_21 != *(ebx + 0x38))
                    uint32_t ebx_37 = 0
                    uint32_t var_2c_2
                    uint32_t var_10_1
                    uint32_t var_c_1
                    uint32_t eax_30
                    uint32_t eax_36
                    
                    if (*(esi + 0x18) == 0)
                        if (eax_2 - 1 u> 3)
                            eax_36 = 0
                            var_10_1 = 0
                        label_612ac7:
                            var_c_1 = eax_36
                            var_2c_2 = 0xff
                            eax_30 = var_10_1
                        else
                            uint32_t eax_41
                            
                            switch (eax_2)
                                case 1
                                    eax_41 = zx.d(*edx_5)
                                label_612a54:
                                    var_10_1 = zx.d(*(((*(esi + 0xc) & eax_41) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_c_1 = zx.d(*(((*(esi + 0x10) & eax_41) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ebx_37 = zx.d(*(((*(esi + 0x14) & eax_41) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    eax_41 = zx.d(*edx_5)
                                    goto label_612a54
                                case 3
                                    var_10_1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edx_5))
                                    ebx_37 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edx_5))
                                    var_c_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edx_5))
                                case 4
                                    eax_41 = *edx_5
                                    goto label_612a54
                            
                            var_2c_2 = 0xff
                            eax_30 = var_10_1
                    else if (eax_2 - 1 u> 3)
                        var_2c_2 = 0
                        var_c_1 = 0
                        var_10_1 = 0
                        eax_30 = var_10_1
                    else
                        switch (eax_2)
                            case 1
                                uint32_t edx_6 = zx.d(*edx_5)
                                eax_30 = zx.d(*(((*(esi + 0xc) & edx_6) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_1 = zx.d(*(((*(esi + 0x10) & edx_6) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_37 = zx.d(*(((*(esi + 0x14) & edx_6) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                var_2c_2 = zx.d(*(((*(esi + 0x18) & edx_6) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                edx_5 = var_20_1
                                var_10_1 = eax_30
                            case 2
                                uint32_t eax_31 = zx.d(*edx_5)
                                var_10_1 = zx.d(*(((*(esi + 0xc) & eax_31) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_1 = zx.d(*(((*(esi + 0x10) & eax_31) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_37 = zx.d(*(((*(esi + 0x14) & eax_31) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                var_2c_2 = zx.d(*(((*(esi + 0x18) & eax_31) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                eax_30 = var_10_1
                            case 3
                                var_10_1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edx_5))
                                eax_36 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edx_5))
                                ebx_37 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edx_5))
                                goto label_612ac7
                            case 4
                                int32_t eax_37 = *edx_5
                                var_10_1 = zx.d(*(((*(esi + 0xc) & eax_37) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_1 = zx.d(*(((*(esi + 0x10) & eax_37) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_37 = zx.d(*(((*(esi + 0x14) & eax_37) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                var_2c_2 = zx.d(*(((*(esi + 0x18) & eax_37) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                eax_30 = var_10_1
                    int32_t ecx_106 = eax
                    
                    if ((ecx_106.b & 1) != 0)
                        var_14_1 = var_14_1 * ecx u/ 0xff
                        var_18_1 = var_18_1 * edx u/ 0xff
                        eax_30 = var_10_1
                        var_1c_1 = var_1c_1 * eax_1 u/ 0xff
                        edx_5 = var_20_1
                    
                    if ((ecx_106.b & 2) != 0)
                        eax_30 = var_10_1
                        var_24_1 = var_24_1 * ecx_1 u/ 0xff
                        edx_5 = var_20_1
                    
                    if ((ecx_106.b & 0x30) != 0 && var_24_1 u< 0xff)
                        var_14_1 = var_24_1 * var_14_1 u/ 0xff
                        var_18_1 = var_24_1 * var_18_1 u/ 0xff
                        eax_30 = var_10_1
                        ecx_106 = eax
                        var_1c_1 = var_24_1 * var_1c_1 u/ 0xff
                        edx_5 = var_20_1
                    
                    uint32_t var_10_2
                    uint32_t edx_46
                    
                    switch (ecx_106 & 0x70)
                        case 0
                            ebx_37 = var_1c_1
                            var_c_1 = var_18_1
                            var_2c_2 = var_24_1
                            eax_30 = var_14_1
                        case 0x10
                            var_10_2 = (0xff - var_24_1) * eax_30 u/ 0xff + var_14_1
                            var_c_1 = (0xff - var_24_1) * var_c_1 u/ 0xff + var_18_1
                            edx_46 = (0xff - var_24_1) * ebx_37 u/ 0xff + var_1c_1
                        label_612c79:
                            ebx_37 = edx_46
                            edx_5 = var_20_1
                            eax_30 = var_10_2
                        case 0x20
                            eax_30 += var_14_1
                            
                            if (eax_30 u> 0xff)
                                eax_30 = 0xff
                            
                            var_c_1 += var_18_1
                            
                            if (var_c_1 u> 0xff)
                                var_c_1 = 0xff
                            
                            ebx_37 += var_1c_1
                            
                            if (ebx_37 u> 0xff)
                                ebx_37 = 0xff
                        case 0x40
                            var_10_2 = eax_30 * var_14_1 u/ 0xff
                            var_c_1 = var_c_1 * var_18_1 u/ 0xff
                            edx_46 = ebx_37 * var_1c_1 u/ 0xff
                            goto label_612c79
                    
                    if (*(esi + 0x18) == 0)
                        if (eax_2 - 1 u<= 3)
                            switch (eax_2)
                                case 1
                                    edx_5 = var_20_1
                                    uint8_t ebx_81 = (ebx_37 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                        | (var_c_1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                        | (eax_30 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                    *edx_5 = ebx_81 | *(esi + 0x18)
                                case 2
                                    edx_5 = var_20_1
                                    uint16_t ebx_82 = (ebx_37 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                        | (var_c_1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                        | (eax_30 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                    *edx_5 = ebx_82 | *(esi + 0x18)
                                case 3
                                label_612e26:
                                    *((zx.d(*(esi + 0x20)) u>> 3) + edx_5) = eax_30.b
                                    uint32_t ecx_158
                                    ecx_158.b = var_c_1.b
                                    *((zx.d(*(esi + 0x21)) u>> 3) + edx_5) = ecx_158.b
                                    *((zx.d(*(esi + 0x22)) u>> 3) + edx_5) = ebx_37.b
                                case 4
                                    edx_5 = var_20_1
                                    uint32_t ebx_86 = ebx_37 u>> *(esi + 0x1e) << *(esi + 0x22)
                                        | var_c_1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                        | eax_30 u>> *(esi + 0x1c) << *(esi + 0x20)
                                    *edx_5 = ebx_86
                    else if (eax_2 - 1 u<= 3)
                        switch (eax_2)
                            case 1
                                uint8_t ecx_124 = (var_2c_2 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (ebx_37 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (var_c_1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                edx_5 = var_20_1
                                *edx_5 = ecx_124 | (eax_30 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t edx_59 = (var_2c_2 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (ebx_37 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (var_c_1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                edx_5 = var_20_1
                                *edx_5 = edx_59 | (eax_30 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                goto label_612e26
                            case 4
                                uint32_t edx_64 = var_2c_2 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | ebx_37 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | var_c_1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                edx_5 = var_20_1
                                *edx_5 = edx_64 | eax_30 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    ebx = arg1
                    ecx_3 = var_28_1
                
                result = result_1
                edx_5 += eax_2
                var_30_1 += result
                var_20_1 = edx_5
            
            var_38 += divs.dp.d(edx_2:eax_5, ecx_2)
            *(ebx + 0x14) += *(ebx + 0x20)
        while (*(ebx + 0x1c) != 0)
    
    *(ebx + 0x1c) -= 1
    return result
}

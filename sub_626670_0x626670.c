// 函数名称: sub_626670
// 虚拟地址: 0x626670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_626670(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t ecx_1 = arg1[4]
    int32_t* ebx = *arg1
    int32_t ecx_2 = arg1[9]
    void* esi = arg1[0xa]
    char ecx_3 = *(esi + 9)
    int32_t result_1 = arg1[7]
    void* edi = arg1[0xb]
    uint32_t* var_14 = arg1[5]
    int32_t edx_3 = not.d(*(esi + 0x18))
    int32_t eax_2 = arg1[0xe] & edx_3
    arg1:3.b = *(edi + 9)
    int32_t result
    
    while (true)
        int32_t result_2 = result_1
        result = result_1 - 1
        result_1 = result
        
        if (result_2 == 0)
            break
        
        int32_t eax_6
        int32_t edx_4
        edx_4:eax_6 = sx.q(ecx + 7)
        int32_t var_34_1 = (eax_6 + (edx_4 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_6269e0
            case 1
                goto label_6266fb
            case 2
                while (true)
                    uint32_t eax_433 = zx.d(ecx_3)
                    uint32_t var_18_8
                    uint32_t var_10_8
                    uint32_t var_c_8
                    uint32_t eax_446
                    uint32_t edx_163
                    
                    if (eax_433 - 1 u> 3)
                        edx_163 = 0
                        eax_446 = 0
                        var_18_8 = 0
                        var_c_8 = 0
                        var_10_8 = 0
                    else
                        switch (eax_433)
                            case 1
                                uint32_t edx_160 = zx.d(*ebx)
                                var_10_8 = zx.d(*(((*(esi + 0xc) & edx_160) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_8 = zx.d(*(((*(esi + 0x10) & edx_160) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_446 = zx.d(*(((*(esi + 0x14) & edx_160) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_512 = *(esi + 0x18) & edx_160
                                var_18_8 = edx_160
                                int32_t var_38_22 = ecx_512
                                edx_163 = zx.d(*
                                    ((ecx_512 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_164 = zx.d(*ebx)
                                var_10_8 = zx.d(*(((*(esi + 0xc) & edx_164) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_8 = zx.d(*(((*(esi + 0x10) & edx_164) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_446 = zx.d(*(((*(esi + 0x14) & edx_164) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_526 = *(esi + 0x18) & edx_164
                                var_18_8 = edx_164
                                int32_t var_38_23 = ecx_526
                                edx_163 = zx.d(*
                                    ((ecx_526 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_8 = 0
                                var_10_8 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_446 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_8 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_163 = 0xff
                            case 4
                                uint32_t edx_168 = *ebx
                                var_10_8 = zx.d(*(((*(esi + 0xc) & edx_168) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_8 = zx.d(*(((*(esi + 0x10) & edx_168) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_446 = zx.d(*(((*(esi + 0x14) & edx_168) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_539 = *(esi + 0x18) & edx_168
                                var_18_8 = edx_168
                                int32_t var_38_24 = ecx_539
                                edx_163 = zx.d(*
                                    ((ecx_539 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_8 & edx_3) == eax_2 || zx.d(arg1:3.b) - 1 u> 3)
                        var_14 += zx.d(arg1:3.b)
                        ebx += eax_433
                    else
                        switch (arg1:3.b)
                            case 1
                                ebx += eax_433
                                uint8_t edx_169 = (edx_163 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_446 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_8 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                uint32_t* eax_477 = var_14
                                var_14 += zx.d(arg1:3.b)
                                *eax_477 = edx_169 | (var_10_8 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                ebx += eax_433
                                uint16_t edx_170 = (edx_163 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_446 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_8 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_170 | (var_10_8 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                                var_14 += zx.d(arg1:3.b)
                            case 3
                                ebx += eax_433
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_8.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_8.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_446.b
                                var_14 += zx.d(arg1:3.b)
                            case 4
                                uint32_t edx_180 = edx_163 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_446 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_8 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_180 | var_10_8 u>> *(edi + 0x1c) << *(edi + 0x20)
                                var_14 += zx.d(arg1:3.b)
                                ebx += eax_433
                    
                label_6266fb:
                    uint32_t eax_11 = zx.d(ecx_3)
                    uint32_t var_18_1
                    uint32_t var_10_1
                    uint32_t var_c_1
                    uint32_t eax_24
                    uint32_t edx_9
                    
                    if (eax_11 - 1 u> 3)
                        edx_9 = 0
                        eax_24 = 0
                        var_18_1 = 0
                        var_c_1 = 0
                        var_10_1 = 0
                    else
                        switch (eax_11)
                            case 1
                                uint32_t edx_6 = zx.d(*ebx)
                                var_10_1 = zx.d(*(((*(esi + 0xc) & edx_6) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_1 = zx.d(*(((*(esi + 0x10) & edx_6) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_24 = zx.d(*(((*(esi + 0x14) & edx_6) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_15 = *(esi + 0x18) & edx_6
                                var_18_1 = edx_6
                                int32_t var_38_1 = ecx_15
                                edx_9 = zx.d(
                                    *((ecx_15 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_10 = zx.d(*ebx)
                                var_10_1 = zx.d(*(((*(esi + 0xc) & edx_10) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_1 = zx.d(*(((*(esi + 0x10) & edx_10) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_24 = zx.d(*(((*(esi + 0x14) & edx_10) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_29 = *(esi + 0x18) & edx_10
                                var_18_1 = edx_10
                                int32_t var_38_2 = ecx_29
                                edx_9 = zx.d(
                                    *((ecx_29 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_1 = 0
                                var_10_1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_24 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_9 = 0xff
                            case 4
                                uint32_t edx_14 = *ebx
                                var_10_1 = zx.d(*(((*(esi + 0xc) & edx_14) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_1 = zx.d(*(((*(esi + 0x10) & edx_14) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_24 = zx.d(*(((*(esi + 0x14) & edx_14) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_42 = *(esi + 0x18) & edx_14
                                var_18_1 = edx_14
                                int32_t var_38_3 = ecx_42
                                edx_9 = zx.d(
                                    *((ecx_42 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_1 & edx_3) != eax_2 && zx.d(arg1:3.b) - 1 u<= 3)
                        switch (arg1:3.b)
                            case 1
                                uint8_t edx_15 = (edx_9 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_24 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_1 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                *var_14 = edx_15 | (var_10_1 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                uint16_t edx_16 = (edx_9 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_24 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_1 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_16 | (var_10_1 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_1.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_1.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_24.b
                            case 4
                                uint32_t edx_26 = edx_9 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_24 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_1 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_26 | var_10_1 u>> *(edi + 0x1c) << *(edi + 0x20)
                    
                    var_14 += zx.d(arg1:3.b)
                    ebx += eax_11
                    int32_t eax_72 = var_34_1 - 1
                    var_34_1 = eax_72
                    
                    if (eax_72 s<= 0)
                        break
                    
                label_6269e0:
                    uint32_t eax_73 = zx.d(ecx_3)
                    uint32_t var_18_2
                    uint32_t var_10_2
                    uint32_t var_c_2
                    uint32_t eax_86
                    uint32_t edx_31
                    
                    if (eax_73 - 1 u> 3)
                        edx_31 = 0
                        eax_86 = 0
                        var_18_2 = 0
                        var_c_2 = 0
                        var_10_2 = 0
                    else
                        switch (eax_73)
                            case 1
                                uint32_t edx_28 = zx.d(*ebx)
                                var_10_2 = zx.d(*(((*(esi + 0xc) & edx_28) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_2 = zx.d(*(((*(esi + 0x10) & edx_28) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_86 = zx.d(*(((*(esi + 0x14) & edx_28) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_86 = *(esi + 0x18) & edx_28
                                var_18_2 = edx_28
                                int32_t var_38_4 = ecx_86
                                edx_31 = zx.d(
                                    *((ecx_86 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_32 = zx.d(*ebx)
                                var_10_2 = zx.d(*(((*(esi + 0xc) & edx_32) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_2 = zx.d(*(((*(esi + 0x10) & edx_32) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_86 = zx.d(*(((*(esi + 0x14) & edx_32) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_100 = *(esi + 0x18) & edx_32
                                var_18_2 = edx_32
                                int32_t var_38_5 = ecx_100
                                edx_31 = zx.d(*
                                    ((ecx_100 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_2 = 0
                                var_10_2 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_86 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_2 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_31 = 0xff
                            case 4
                                uint32_t edx_36 = *ebx
                                var_10_2 = zx.d(*(((*(esi + 0xc) & edx_36) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_2 = zx.d(*(((*(esi + 0x10) & edx_36) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_86 = zx.d(*(((*(esi + 0x14) & edx_36) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_113 = *(esi + 0x18) & edx_36
                                var_18_2 = edx_36
                                int32_t var_38_6 = ecx_113
                                edx_31 = zx.d(*
                                    ((ecx_113 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_2 & edx_3) != eax_2 && zx.d(arg1:3.b) - 1 u<= 3)
                        switch (arg1:3.b)
                            case 1
                                uint8_t edx_37 = (edx_31 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_86 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_2 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                *var_14 = edx_37 | (var_10_2 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                uint16_t edx_38 = (edx_31 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_86 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_2 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_38 | (var_10_2 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_2.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_2.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_86.b
                            case 4
                                uint32_t edx_48 = edx_31 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_86 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_2 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_48 | var_10_2 u>> *(edi + 0x1c) << *(edi + 0x20)
                    
                    var_14 += zx.d(arg1:3.b)
                    ebx += eax_73
                label_626cb6:
                    uint32_t eax_133 = zx.d(ecx_3)
                    uint32_t var_18_3
                    uint32_t var_10_3
                    uint32_t var_c_3
                    uint32_t eax_146
                    uint32_t edx_53
                    
                    if (eax_133 - 1 u> 3)
                        edx_53 = 0
                        eax_146 = 0
                        var_18_3 = 0
                        var_c_3 = 0
                        var_10_3 = 0
                    else
                        switch (eax_133)
                            case 1
                                uint32_t edx_50 = zx.d(*ebx)
                                var_10_3 = zx.d(*(((*(esi + 0xc) & edx_50) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_3 = zx.d(*(((*(esi + 0x10) & edx_50) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_146 = zx.d(*(((*(esi + 0x14) & edx_50) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_157 = *(esi + 0x18) & edx_50
                                var_18_3 = edx_50
                                int32_t var_38_7 = ecx_157
                                edx_53 = zx.d(*
                                    ((ecx_157 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_54 = zx.d(*ebx)
                                var_10_3 = zx.d(*(((*(esi + 0xc) & edx_54) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_3 = zx.d(*(((*(esi + 0x10) & edx_54) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_146 = zx.d(*(((*(esi + 0x14) & edx_54) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_171 = *(esi + 0x18) & edx_54
                                var_18_3 = edx_54
                                int32_t var_38_8 = ecx_171
                                edx_53 = zx.d(*
                                    ((ecx_171 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_3 = 0
                                var_10_3 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_146 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_3 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_53 = 0xff
                            case 4
                                uint32_t edx_58 = *ebx
                                var_10_3 = zx.d(*(((*(esi + 0xc) & edx_58) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_3 = zx.d(*(((*(esi + 0x10) & edx_58) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_146 = zx.d(*(((*(esi + 0x14) & edx_58) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_184 = *(esi + 0x18) & edx_58
                                var_18_3 = edx_58
                                int32_t var_38_9 = ecx_184
                                edx_53 = zx.d(*
                                    ((ecx_184 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_3 & edx_3) != eax_2 && zx.d(arg1:3.b) - 1 u<= 3)
                        switch (arg1:3.b)
                            case 1
                                uint8_t edx_59 = (edx_53 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_146 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_3 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                *var_14 = edx_59 | (var_10_3 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                uint16_t edx_60 = (edx_53 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_146 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_3 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_60 | (var_10_3 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_3.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_3.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_146.b
                            case 4
                                uint32_t edx_70 = edx_53 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_146 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_3 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_70 | var_10_3 u>> *(edi + 0x1c) << *(edi + 0x20)
                    
                    var_14 += zx.d(arg1:3.b)
                    ebx += eax_133
                label_626f8c:
                    uint32_t eax_193 = zx.d(ecx_3)
                    uint32_t var_18_4
                    uint32_t var_10_4
                    uint32_t var_c_4
                    uint32_t eax_206
                    uint32_t edx_75
                    
                    if (eax_193 - 1 u> 3)
                        edx_75 = 0
                        eax_206 = 0
                        var_18_4 = 0
                        var_c_4 = 0
                        var_10_4 = 0
                    else
                        switch (eax_193)
                            case 1
                                uint32_t edx_72 = zx.d(*ebx)
                                var_10_4 = zx.d(*(((*(esi + 0xc) & edx_72) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_4 = zx.d(*(((*(esi + 0x10) & edx_72) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_206 = zx.d(*(((*(esi + 0x14) & edx_72) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_228 = *(esi + 0x18) & edx_72
                                var_18_4 = edx_72
                                int32_t var_38_10 = ecx_228
                                edx_75 = zx.d(*
                                    ((ecx_228 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_76 = zx.d(*ebx)
                                var_10_4 = zx.d(*(((*(esi + 0xc) & edx_76) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_4 = zx.d(*(((*(esi + 0x10) & edx_76) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_206 = zx.d(*(((*(esi + 0x14) & edx_76) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_242 = *(esi + 0x18) & edx_76
                                var_18_4 = edx_76
                                int32_t var_38_11 = ecx_242
                                edx_75 = zx.d(*
                                    ((ecx_242 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_4 = 0
                                var_10_4 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_206 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_4 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_75 = 0xff
                            case 4
                                uint32_t edx_80 = *ebx
                                var_10_4 = zx.d(*(((*(esi + 0xc) & edx_80) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_4 = zx.d(*(((*(esi + 0x10) & edx_80) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_206 = zx.d(*(((*(esi + 0x14) & edx_80) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_255 = *(esi + 0x18) & edx_80
                                var_18_4 = edx_80
                                int32_t var_38_12 = ecx_255
                                edx_75 = zx.d(*
                                    ((ecx_255 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_4 & edx_3) != eax_2 && zx.d(arg1:3.b) - 1 u<= 3)
                        switch (arg1:3.b)
                            case 1
                                uint8_t edx_81 = (edx_75 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_206 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_4 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                *var_14 = edx_81 | (var_10_4 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                uint16_t edx_82 = (edx_75 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_206 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_4 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_82 | (var_10_4 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_4.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_4.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_206.b
                            case 4
                                uint32_t edx_92 = edx_75 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_206 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_4 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_92 | var_10_4 u>> *(edi + 0x1c) << *(edi + 0x20)
                    
                    var_14 += zx.d(arg1:3.b)
                    ebx += eax_193
                label_627262:
                    uint32_t eax_253 = zx.d(ecx_3)
                    uint32_t var_18_5
                    uint32_t var_10_5
                    uint32_t var_c_5
                    uint32_t eax_266
                    uint32_t edx_97
                    
                    if (eax_253 - 1 u> 3)
                        edx_97 = 0
                        eax_266 = 0
                        var_18_5 = 0
                        var_c_5 = 0
                        var_10_5 = 0
                    else
                        switch (eax_253)
                            case 1
                                uint32_t edx_94 = zx.d(*ebx)
                                var_10_5 = zx.d(*(((*(esi + 0xc) & edx_94) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_5 = zx.d(*(((*(esi + 0x10) & edx_94) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_266 = zx.d(*(((*(esi + 0x14) & edx_94) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_299 = *(esi + 0x18) & edx_94
                                var_18_5 = edx_94
                                int32_t var_38_13 = ecx_299
                                edx_97 = zx.d(*
                                    ((ecx_299 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_98 = zx.d(*ebx)
                                var_10_5 = zx.d(*(((*(esi + 0xc) & edx_98) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_5 = zx.d(*(((*(esi + 0x10) & edx_98) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_266 = zx.d(*(((*(esi + 0x14) & edx_98) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_313 = *(esi + 0x18) & edx_98
                                var_18_5 = edx_98
                                int32_t var_38_14 = ecx_313
                                edx_97 = zx.d(*
                                    ((ecx_313 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_5 = 0
                                var_10_5 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_266 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_5 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_97 = 0xff
                            case 4
                                uint32_t edx_102 = *ebx
                                var_10_5 = zx.d(*(((*(esi + 0xc) & edx_102) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_5 = zx.d(*(((*(esi + 0x10) & edx_102) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_266 = zx.d(*(((*(esi + 0x14) & edx_102) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_326 = *(esi + 0x18) & edx_102
                                var_18_5 = edx_102
                                int32_t var_38_15 = ecx_326
                                edx_97 = zx.d(*
                                    ((ecx_326 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_5 & edx_3) != eax_2 && zx.d(arg1:3.b) - 1 u<= 3)
                        switch (arg1:3.b)
                            case 1
                                uint8_t edx_103 = (edx_97 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_266 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_5 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                *var_14 = edx_103 | (var_10_5 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                uint16_t edx_104 = (edx_97 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_266 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_5 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_104 | (var_10_5 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_5.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_5.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_266.b
                            case 4
                                uint32_t edx_114 = edx_97 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_266 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_5 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_114 | var_10_5 u>> *(edi + 0x1c) << *(edi + 0x20)
                    
                    var_14 += zx.d(arg1:3.b)
                    ebx += eax_253
                label_627538:
                    uint32_t eax_313 = zx.d(ecx_3)
                    uint32_t var_18_6
                    uint32_t var_10_6
                    uint32_t var_c_6
                    uint32_t eax_326
                    uint32_t edx_119
                    
                    if (eax_313 - 1 u> 3)
                        edx_119 = 0
                        eax_326 = 0
                        var_18_6 = 0
                        var_c_6 = 0
                        var_10_6 = 0
                    else
                        switch (eax_313)
                            case 1
                                uint32_t edx_116 = zx.d(*ebx)
                                var_10_6 = zx.d(*(((*(esi + 0xc) & edx_116) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_6 = zx.d(*(((*(esi + 0x10) & edx_116) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_326 = zx.d(*(((*(esi + 0x14) & edx_116) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_370 = *(esi + 0x18) & edx_116
                                var_18_6 = edx_116
                                int32_t var_38_16 = ecx_370
                                edx_119 = zx.d(*
                                    ((ecx_370 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_120 = zx.d(*ebx)
                                var_10_6 = zx.d(*(((*(esi + 0xc) & edx_120) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_6 = zx.d(*(((*(esi + 0x10) & edx_120) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_326 = zx.d(*(((*(esi + 0x14) & edx_120) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_384 = *(esi + 0x18) & edx_120
                                var_18_6 = edx_120
                                int32_t var_38_17 = ecx_384
                                edx_119 = zx.d(*
                                    ((ecx_384 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_6 = 0
                                var_10_6 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_326 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_6 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_119 = 0xff
                            case 4
                                uint32_t edx_124 = *ebx
                                var_10_6 = zx.d(*(((*(esi + 0xc) & edx_124) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_6 = zx.d(*(((*(esi + 0x10) & edx_124) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_326 = zx.d(*(((*(esi + 0x14) & edx_124) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_397 = *(esi + 0x18) & edx_124
                                var_18_6 = edx_124
                                int32_t var_38_18 = ecx_397
                                edx_119 = zx.d(*
                                    ((ecx_397 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_6 & edx_3) != eax_2 && zx.d(arg1:3.b) - 1 u<= 3)
                        switch (arg1:3.b)
                            case 1
                                uint8_t edx_125 = (edx_119 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_326 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_6 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                *var_14 = edx_125 | (var_10_6 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                uint16_t edx_126 = (edx_119 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_326 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_6 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_126 | (var_10_6 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_6.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_6.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_326.b
                            case 4
                                uint32_t edx_136 = edx_119 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_326 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_6 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_136 | var_10_6 u>> *(edi + 0x1c) << *(edi + 0x20)
                    
                    var_14 += zx.d(arg1:3.b)
                    ebx += eax_313
                label_62780e:
                    uint32_t eax_373 = zx.d(ecx_3)
                    uint32_t var_18_7
                    uint32_t var_10_7
                    uint32_t var_c_7
                    uint32_t eax_386
                    uint32_t edx_141
                    
                    if (eax_373 - 1 u> 3)
                        edx_141 = 0
                        eax_386 = 0
                        var_18_7 = 0
                        var_c_7 = 0
                        var_10_7 = 0
                    else
                        switch (eax_373)
                            case 1
                                uint32_t edx_138 = zx.d(*ebx)
                                var_10_7 = zx.d(*(((*(esi + 0xc) & edx_138) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_7 = zx.d(*(((*(esi + 0x10) & edx_138) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_386 = zx.d(*(((*(esi + 0x14) & edx_138) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_441 = *(esi + 0x18) & edx_138
                                var_18_7 = edx_138
                                int32_t var_38_19 = ecx_441
                                edx_141 = zx.d(*
                                    ((ecx_441 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t edx_142 = zx.d(*ebx)
                                var_10_7 = zx.d(*(((*(esi + 0xc) & edx_142) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_7 = zx.d(*(((*(esi + 0x10) & edx_142) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_386 = zx.d(*(((*(esi + 0x14) & edx_142) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_455 = *(esi + 0x18) & edx_142
                                var_18_7 = edx_142
                                int32_t var_38_20 = ecx_455
                                edx_141 = zx.d(*
                                    ((ecx_455 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                var_18_7 = 0
                                var_10_7 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ebx))
                                eax_386 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ebx))
                                var_c_7 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ebx))
                                edx_141 = 0xff
                            case 4
                                uint32_t edx_146 = *ebx
                                var_10_7 = zx.d(*(((*(esi + 0xc) & edx_146) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_c_7 = zx.d(*(((*(esi + 0x10) & edx_146) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                eax_386 = zx.d(*(((*(esi + 0x14) & edx_146) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_468 = *(esi + 0x18) & edx_146
                                var_18_7 = edx_146
                                int32_t var_38_21 = ecx_468
                                edx_141 = zx.d(*
                                    ((ecx_468 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                    
                    if ((var_18_7 & edx_3) != eax_2 && zx.d(arg1:3.b) - 1 u<= 3)
                        switch (arg1:3.b)
                            case 1
                                uint8_t edx_147 = (edx_141 u>> *(edi + 0x1f)).b << *(edi + 0x23)
                                    | (eax_386 u>> *(edi + 0x1e)).b << *(edi + 0x22)
                                    | (var_c_7 u>> *(edi + 0x1d)).b << *(edi + 0x21)
                                *var_14 = edx_147 | (var_10_7 u>> *(edi + 0x1c)).b << *(edi + 0x20)
                            case 2
                                uint16_t edx_148 = (edx_141 u>> *(edi + 0x1f)).w << *(edi + 0x23)
                                    | (eax_386 u>> *(edi + 0x1e)).w << *(edi + 0x22)
                                    | (var_c_7 u>> *(edi + 0x1d)).w << *(edi + 0x21)
                                *var_14 = edx_148 | (var_10_7 u>> *(edi + 0x1c)).w << *(edi + 0x20)
                            case 3
                                *((zx.d(*(edi + 0x20)) u>> 3) + var_14) = var_10_7.b
                                *((zx.d(*(edi + 0x21)) u>> 3) + var_14) = var_c_7.b
                                *((zx.d(*(edi + 0x22)) u>> 3) + var_14) = eax_386.b
                            case 4
                                uint32_t edx_158 = edx_141 u>> *(edi + 0x1f) << *(edi + 0x23)
                                    | eax_386 u>> *(edi + 0x1e) << *(edi + 0x22)
                                    | var_c_7 u>> *(edi + 0x1d) << *(edi + 0x21)
                                *var_14 = edx_158 | var_10_7 u>> *(edi + 0x1c) << *(edi + 0x20)
                    
                    var_14 += zx.d(arg1:3.b)
                    ebx += eax_373
            case 3
                goto label_62780e
            case 4
                goto label_627538
            case 5
                goto label_627262
            case 6
                goto label_626f8c
            case 7
                goto label_626cb6
        
        ebx += ecx_1
        var_14 += ecx_2
    
    return result
}

// 函数名称: sub_628a10
// 虚拟地址: 0x628a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_628a10(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[4]
    int32_t ecx = arg1[4]
    int32_t i = arg1[7]
    int32_t ebx = arg1[6]
    void* var_8 = arg1[5]
    int32_t ecx_2 = arg1[9]
    void* esi = arg1[0xa]
    uint32_t ecx_3 = zx.d(*(esi + 9))
    int32_t* edi = *arg1
    int32_t var_1c = ebx
    uint32_t var_10 = ecx_3
    
    for (; i != 0; i -= 1)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ebx + 7)
        int32_t var_18_1 = (eax_3 + (edx_1 & 7)) s>> 3
        
        switch (ebx & 7)
            case 0
                goto label_628bc6
            case 1
                goto label_628a78
            case 2
                while (true)
                    uint32_t eax_94
                    uint32_t edx_217
                    uint32_t ebx_92
                    
                    if (ecx_3 - 1 u> 3)
                        eax_94 = 0
                        ebx_92 = 0
                        edx_217 = 0
                        arg1 = nullptr
                    else
                        switch (ecx_3)
                            case 1
                                uint32_t eax_91 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_91) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_217 = zx.d(*(((*(esi + 0x10) & eax_91) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_92 = zx.d(*(((*(esi + 0x14) & eax_91) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_231 = *(esi + 0x18) & eax_91
                                int32_t var_14_16 = ecx_231
                                eax_94 = zx.d(*
                                    ((ecx_231 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t eax_95 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_95) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_217 = zx.d(*(((*(esi + 0x10) & eax_95) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_92 = zx.d(*(((*(esi + 0x14) & eax_95) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_249 = *(esi + 0x18) & eax_95
                                int32_t var_14_17 = ecx_249
                                eax_94 = zx.d(*
                                    ((ecx_249 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_217 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_92 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_94 = 0xff
                            case 4
                                int32_t eax_99 = *edi
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_99) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_217 = zx.d(*(((*(esi + 0x10) & eax_99) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_92 = zx.d(*(((*(esi + 0x14) & eax_99) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_262 = *(esi + 0x18) & eax_99
                                int32_t var_14_18 = ecx_262
                                eax_94 = zx.d(*
                                    ((ecx_262 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t ecx_264
                    
                    if (edx_217 == 0)
                        ecx_264 = 0
                    else
                        ecx_264 = edx_217 << 2 | 3
                    
                    int32_t ebx_101
                    
                    if (ebx_92 == 0)
                        ebx_101 = 0
                    else
                        ebx_101 = (ebx_92 * 4) | 3
                    
                    ecx_3 = var_10
                    *var_8 = (((eax_94 * 3 u/ 0xff) << 0xa | arg1) << 0xa | ecx_264) << 0xa | ebx_101
                    var_8 += 4
                    edi += ecx_3
                label_628a78:
                    uint32_t var_c_1
                    uint32_t eax_11
                    uint32_t edx_10
                    
                    if (ecx_3 - 1 u> 3)
                        edx_10 = 0
                        eax_11 = 0
                        var_c_1 = 0
                        arg1 = nullptr
                    else
                        uint32_t eax_9
                        
                        switch (ecx_3)
                            case 1
                                eax_9 = zx.d(*edi)
                            label_628aac:
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_9) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_10 = zx.d(*(((*(esi + 0x10) & eax_9) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                var_c_1 = zx.d(*(((*(esi + 0x14) & eax_9) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                eax_11 = zx.d(*(((*(esi + 0x18) & eax_9) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                ecx_3 = var_10
                            case 2
                                eax_9 = zx.d(*edi)
                                goto label_628aac
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_10 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                var_c_1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_11 = 0xff
                            case 4
                                eax_9 = *edi
                                goto label_628aac
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t var_14_1
                    
                    if (edx_10 == 0)
                        var_14_1 = 0
                    else
                        var_14_1 = (edx_10 * 4) | 3
                    
                    int32_t ebx_12
                    
                    if (var_c_1 == 0)
                        ebx_12 = 0
                    else
                        ebx_12 = var_c_1 << 2 | 3
                    
                    void* eax_18 = var_8 + 4
                    var_8 = eax_18
                    *(eax_18 - 4) =
                        (((eax_11 * 3 u/ 0xff) << 0xa | arg1) << 0xa | var_14_1) << 0xa | ebx_12
                    int32_t eax_20 = var_18_1 - 1
                    edi += ecx_3
                    var_18_1 = eax_20
                    
                    if (eax_20 s<= 0)
                        break
                    
                label_628bc6:
                    uint32_t var_c_2
                    uint32_t eax_24
                    uint32_t edx_35
                    
                    if (ecx_3 - 1 u> 3)
                        edx_35 = 0
                        eax_24 = 0
                        var_c_2 = 0
                        arg1 = nullptr
                    else
                        uint32_t eax_22
                        
                        switch (ecx_3)
                            case 1
                                eax_22 = zx.d(*edi)
                            label_628bfa:
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_22) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_35 = zx.d(*(((*(esi + 0x10) & eax_22) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                var_c_2 = zx.d(*(((*(esi + 0x14) & eax_22) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                eax_24 = zx.d(*(((*(esi + 0x18) & eax_22) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                ecx_3 = var_10
                            case 2
                                eax_22 = zx.d(*edi)
                                goto label_628bfa
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_35 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                var_c_2 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_24 = 0xff
                            case 4
                                eax_22 = *edi
                                goto label_628bfa
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t ebx_24 = 0
                    int32_t var_14_2
                    
                    if (edx_35 == 0)
                        var_14_2 = 0
                    else
                        var_14_2 = (edx_35 * 4) | 3
                    
                    if (var_c_2 != 0)
                        ebx_24 = var_c_2 << 2 | 3
                    
                    void* eax_31 = var_8 + 4
                    var_8 = eax_31
                    *(eax_31 - 4) =
                        (((eax_24 * 3 u/ 0xff) << 0xa | arg1) << 0xa | var_14_2) << 0xa | ebx_24
                    edi += ecx_3
                label_628cff:
                    uint32_t var_c_3
                    uint32_t eax_35
                    uint32_t edx_60
                    
                    if (ecx_3 - 1 u> 3)
                        edx_60 = 0
                        eax_35 = 0
                        var_c_3 = 0
                        arg1 = nullptr
                    else
                        uint32_t eax_33
                        
                        switch (ecx_3)
                            case 1
                                eax_33 = zx.d(*edi)
                            label_628d33:
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_33) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_60 = zx.d(*(((*(esi + 0x10) & eax_33) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                var_c_3 = zx.d(*(((*(esi + 0x14) & eax_33) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                eax_35 = zx.d(*(((*(esi + 0x18) & eax_33) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                                ecx_3 = var_10
                            case 2
                                eax_33 = zx.d(*edi)
                                goto label_628d33
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_60 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                var_c_3 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_35 = 0xff
                            case 4
                                eax_33 = *edi
                                goto label_628d33
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t ebx_36 = 0
                    int32_t var_14_3
                    
                    if (edx_60 == 0)
                        var_14_3 = 0
                    else
                        var_14_3 = (edx_60 * 4) | 3
                    
                    if (var_c_3 != 0)
                        ebx_36 = var_c_3 << 2 | 3
                    
                    void* eax_42 = var_8 + 4
                    var_8 = eax_42
                    *(eax_42 - 4) =
                        (((eax_35 * 3 u/ 0xff) << 0xa | arg1) << 0xa | var_14_3) << 0xa | ebx_36
                    edi += ecx_3
                label_628e36:
                    uint32_t eax_46
                    uint32_t edx_85
                    uint32_t ebx_40
                    
                    if (ecx_3 - 1 u> 3)
                        eax_46 = 0
                        ebx_40 = 0
                        edx_85 = 0
                        arg1 = nullptr
                    else
                        switch (ecx_3)
                            case 1
                                uint32_t eax_43 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_43) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_85 = zx.d(*(((*(esi + 0x10) & eax_43) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_40 = zx.d(*(((*(esi + 0x14) & eax_43) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_51 = *(esi + 0x18) & eax_43
                                int32_t var_14_4 = ecx_51
                                eax_46 = zx.d(
                                    *((ecx_51 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t eax_47 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_47) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_85 = zx.d(*(((*(esi + 0x10) & eax_47) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_40 = zx.d(*(((*(esi + 0x14) & eax_47) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_69 = *(esi + 0x18) & eax_47
                                int32_t var_14_5 = ecx_69
                                eax_46 = zx.d(
                                    *((ecx_69 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_85 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_40 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_46 = 0xff
                            case 4
                                int32_t eax_51 = *edi
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_51) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_85 = zx.d(*(((*(esi + 0x10) & eax_51) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_40 = zx.d(*(((*(esi + 0x14) & eax_51) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_82 = *(esi + 0x18) & eax_51
                                int32_t var_14_6 = ecx_82
                                eax_46 = zx.d(
                                    *((ecx_82 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t ecx_84
                    
                    if (edx_85 == 0)
                        ecx_84 = 0
                    else
                        ecx_84 = edx_85 << 2 | 3
                    
                    int32_t ebx_49
                    
                    if (ebx_40 == 0)
                        ebx_49 = 0
                    else
                        ebx_49 = (ebx_40 * 4) | 3
                    
                    ecx_3 = var_10
                    *var_8 = (((eax_46 * 3 u/ 0xff) << 0xa | arg1) << 0xa | ecx_84) << 0xa | ebx_49
                    var_8 += 4
                    edi += ecx_3
                label_629023:
                    uint32_t eax_58
                    uint32_t edx_118
                    uint32_t ebx_53
                    
                    if (ecx_3 - 1 u> 3)
                        eax_58 = 0
                        ebx_53 = 0
                        edx_118 = 0
                        arg1 = nullptr
                    else
                        switch (ecx_3)
                            case 1
                                uint32_t eax_55 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_55) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_118 = zx.d(*(((*(esi + 0x10) & eax_55) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_53 = zx.d(*(((*(esi + 0x14) & eax_55) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_96 = *(esi + 0x18) & eax_55
                                int32_t var_14_7 = ecx_96
                                eax_58 = zx.d(
                                    *((ecx_96 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t eax_59 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_59) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_118 = zx.d(*(((*(esi + 0x10) & eax_59) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_53 = zx.d(*(((*(esi + 0x14) & eax_59) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_114 = *(esi + 0x18) & eax_59
                                int32_t var_14_8 = ecx_114
                                eax_58 = zx.d(*
                                    ((ecx_114 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_118 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_53 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_58 = 0xff
                            case 4
                                int32_t eax_63 = *edi
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_63) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_118 = zx.d(*(((*(esi + 0x10) & eax_63) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_53 = zx.d(*(((*(esi + 0x14) & eax_63) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_127 = *(esi + 0x18) & eax_63
                                int32_t var_14_9 = ecx_127
                                eax_58 = zx.d(*
                                    ((ecx_127 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t ecx_129
                    
                    if (edx_118 == 0)
                        ecx_129 = 0
                    else
                        ecx_129 = edx_118 << 2 | 3
                    
                    int32_t ebx_62
                    
                    if (ebx_53 == 0)
                        ebx_62 = 0
                    else
                        ebx_62 = (ebx_53 * 4) | 3
                    
                    ecx_3 = var_10
                    *var_8 = (((eax_58 * 3 u/ 0xff) << 0xa | arg1) << 0xa | ecx_129) << 0xa | ebx_62
                    var_8 += 4
                    edi += ecx_3
                label_629210:
                    uint32_t eax_70
                    uint32_t edx_151
                    uint32_t ebx_66
                    
                    if (ecx_3 - 1 u> 3)
                        eax_70 = 0
                        ebx_66 = 0
                        edx_151 = 0
                        arg1 = nullptr
                    else
                        switch (ecx_3)
                            case 1
                                uint32_t eax_67 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_67) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_151 = zx.d(*(((*(esi + 0x10) & eax_67) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_66 = zx.d(*(((*(esi + 0x14) & eax_67) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_141 = *(esi + 0x18) & eax_67
                                int32_t var_14_10 = ecx_141
                                eax_70 = zx.d(*
                                    ((ecx_141 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t eax_71 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_71) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_151 = zx.d(*(((*(esi + 0x10) & eax_71) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_66 = zx.d(*(((*(esi + 0x14) & eax_71) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_159 = *(esi + 0x18) & eax_71
                                int32_t var_14_11 = ecx_159
                                eax_70 = zx.d(*
                                    ((ecx_159 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_151 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_66 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_70 = 0xff
                            case 4
                                int32_t eax_75 = *edi
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_75) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_151 = zx.d(*(((*(esi + 0x10) & eax_75) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_66 = zx.d(*(((*(esi + 0x14) & eax_75) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_172 = *(esi + 0x18) & eax_75
                                int32_t var_14_12 = ecx_172
                                eax_70 = zx.d(*
                                    ((ecx_172 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t ecx_174
                    
                    if (edx_151 == 0)
                        ecx_174 = 0
                    else
                        ecx_174 = edx_151 << 2 | 3
                    
                    int32_t ebx_75
                    
                    if (ebx_66 == 0)
                        ebx_75 = 0
                    else
                        ebx_75 = (ebx_66 * 4) | 3
                    
                    ecx_3 = var_10
                    *var_8 = (((eax_70 * 3 u/ 0xff) << 0xa | arg1) << 0xa | ecx_174) << 0xa | ebx_75
                    var_8 += 4
                    edi += ecx_3
                label_6293fd:
                    uint32_t eax_82
                    uint32_t edx_184
                    uint32_t ebx_79
                    
                    if (ecx_3 - 1 u> 3)
                        eax_82 = 0
                        ebx_79 = 0
                        edx_184 = 0
                        arg1 = nullptr
                    else
                        switch (ecx_3)
                            case 1
                                uint32_t eax_79 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_79) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_184 = zx.d(*(((*(esi + 0x10) & eax_79) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_79 = zx.d(*(((*(esi + 0x14) & eax_79) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_186 = *(esi + 0x18) & eax_79
                                int32_t var_14_13 = ecx_186
                                eax_82 = zx.d(*
                                    ((ecx_186 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                uint32_t eax_83 = zx.d(*edi)
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_83) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_184 = zx.d(*(((*(esi + 0x10) & eax_83) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_79 = zx.d(*(((*(esi + 0x14) & eax_83) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_204 = *(esi + 0x18) & eax_83
                                int32_t var_14_14 = ecx_204
                                eax_82 = zx.d(*
                                    ((ecx_204 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                edx_184 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                ebx_79 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                eax_82 = 0xff
                            case 4
                                int32_t eax_87 = *edi
                                arg1 = zx.d(*(((*(esi + 0xc) & eax_87) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                edx_184 = zx.d(*(((*(esi + 0x10) & eax_87) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                ebx_79 = zx.d(*(((*(esi + 0x14) & eax_87) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                int32_t ecx_217 = *(esi + 0x18) & eax_87
                                int32_t var_14_15 = ecx_217
                                eax_82 = zx.d(*
                                    ((ecx_217 u>> *(esi + 0x23)) + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                        
                        if (arg1 == 0)
                            arg1 = nullptr
                        else
                            arg1 = (arg1 * 4) | 3
                    
                    int32_t ecx_219
                    
                    if (edx_184 == 0)
                        ecx_219 = 0
                    else
                        ecx_219 = edx_184 << 2 | 3
                    
                    int32_t ebx_88
                    
                    if (ebx_79 == 0)
                        ebx_88 = 0
                    else
                        ebx_88 = (ebx_79 * 4) | 3
                    
                    ecx_3 = var_10
                    *var_8 = (((eax_82 * 3 u/ 0xff) << 0xa | arg1) << 0xa | ecx_219) << 0xa | ebx_88
                    var_8 += 4
                    edi += ecx_3
                
                ebx = var_1c
            case 3
                goto label_6293fd
            case 4
                goto label_629210
            case 5
                goto label_629023
            case 6
                goto label_628e36
            case 7
                goto label_628cff
        
        edi += ecx
        var_8 += ecx_2
    
    return i
}

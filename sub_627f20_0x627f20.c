// 函数名称: sub_627f20
// 虚拟地址: 0x627f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_627f20(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t ebx = arg1[7]
    int32_t* var_8 = *arg1
    uint32_t result_2 = arg1[4]
    void* esi = arg1[0xb]
    uint32_t* edi = arg1[5]
    int32_t edx_1 = arg1[9]
    uint32_t result = zx.d(*(esi + 9))
    int32_t var_18 = ecx
    uint32_t result_1 = result
    
    while (true)
        int32_t edx_2 = ebx
        ebx -= 1
        
        if (edx_2 == 0)
            break
        
        int32_t eax_2
        int32_t edx_3
        edx_3:eax_2 = sx.q(ecx + 7)
        int32_t var_10_1 = (eax_2 + (edx_3 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_6280ca
            case 1
                goto label_627f88
            case 2
                while (true)
                    int32_t ecx_218 = *var_8
                    arg1 = zx.d((ecx_218 u>> 0xc).b)
                    uint32_t ebx_65 = zx.d(*((ecx_218 u>> 0x1e) + data_8bac80))
                    uint32_t edx_126 = zx.d((ecx_218 u>> 0x16).b)
                    uint32_t eax_92 = zx.d((ecx_218 u>> 2).b)
                    
                    if (result_1 - 1 u> 3)
                        edi += result_1
                        var_8 = &var_8[1]
                    else
                        switch (result_1)
                            case 1
                                uint8_t ebx_66 = (ebx_65 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (eax_92 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_66 | (edx_126 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                                edi += result_1
                                var_8 = &var_8[1]
                            case 2
                                uint16_t ebx_67 = (ebx_65 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (eax_92 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_67 | (edx_126 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                                edi += result_1
                                var_8 = &var_8[1]
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = edx_126.b
                                char* ecx_239
                                ecx_239.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_239.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = eax_92.b
                                edi += result_1
                                var_8 = &var_8[1]
                            case 4
                                uint32_t ebx_71 = ebx_65 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | eax_92 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_71 | edx_126 u>> *(esi + 0x1c) << *(esi + 0x20)
                                edi += result_1
                                var_8 = &var_8[1]
                    
                label_627f88:
                    int32_t ecx_1 = *var_8
                    arg1 = zx.d((ecx_1 u>> 0xc).b)
                    uint32_t ebx_2 = zx.d(*((ecx_1 u>> 0x1e) + data_8bac80))
                    uint32_t eax_10 = zx.d((ecx_1 u>> 0x16).b)
                    uint32_t edx_10 = zx.d((ecx_1 u>> 2).b)
                    
                    if (result_1 - 1 u<= 3)
                        switch (result_1)
                            case 1
                                uint8_t ebx_3 = (ebx_2 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (edx_10 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_3 | (eax_10 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_4 = (ebx_2 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (edx_10 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_4 | (eax_10 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = eax_10.b
                                uint32_t ecx_22
                                ecx_22.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_22.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_10.b
                            case 4
                                uint32_t ebx_8 = ebx_2 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | edx_10 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_8 | eax_10 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    edi += result_1
                    var_8 = &var_8[1]
                    int32_t eax_20 = var_10_1 - 1
                    var_10_1 = eax_20
                    
                    if (eax_20 s<= 0)
                        break
                    
                label_6280ca:
                    int32_t ecx_32 = *var_8
                    arg1 = zx.d((ecx_32 u>> 0xc).b)
                    uint32_t ebx_11 = zx.d(*((ecx_32 u>> 0x1e) + data_8bac80))
                    uint32_t eax_23 = zx.d((ecx_32 u>> 0x16).b)
                    uint32_t edx_27 = zx.d((ecx_32 u>> 2).b)
                    
                    if (result_1 - 1 u<= 3)
                        switch (result_1)
                            case 1
                                uint8_t ebx_12 = (ebx_11 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (edx_27 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_12 | (eax_23 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_13 = (ebx_11 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (edx_27 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_13 | (eax_23 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = eax_23.b
                                uint32_t ecx_53
                                ecx_53.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_53.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_27.b
                            case 4
                                uint32_t ebx_17 = ebx_11 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | edx_27 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_17 | eax_23 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    edi += result_1
                    var_8 = &var_8[1]
                label_6281fd:
                    int32_t ecx_63 = *var_8
                    arg1 = zx.d((ecx_63 u>> 0xc).b)
                    uint32_t ebx_20 = zx.d(*((ecx_63 u>> 0x1e) + data_8bac80))
                    uint32_t eax_34 = zx.d((ecx_63 u>> 0x16).b)
                    uint32_t edx_44 = zx.d((ecx_63 u>> 2).b)
                    
                    if (result_1 - 1 u<= 3)
                        switch (result_1)
                            case 1
                                uint8_t ebx_21 = (ebx_20 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (edx_44 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_21 | (eax_34 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_22 = (ebx_20 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (edx_44 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_22 | (eax_34 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = eax_34.b
                                uint32_t ecx_84
                                ecx_84.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_84.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_44.b
                            case 4
                                uint32_t ebx_26 = ebx_20 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | edx_44 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_26 | eax_34 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    edi += result_1
                    var_8 = &var_8[1]
                label_628330:
                    int32_t ecx_94 = *var_8
                    arg1 = zx.d((ecx_94 u>> 0xc).b)
                    uint32_t ebx_29 = zx.d(*((ecx_94 u>> 0x1e) + data_8bac80))
                    uint32_t eax_45 = zx.d((ecx_94 u>> 0x16).b)
                    uint32_t edx_61 = zx.d((ecx_94 u>> 2).b)
                    
                    if (result_1 - 1 u<= 3)
                        switch (result_1)
                            case 1
                                uint8_t ebx_30 = (ebx_29 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (edx_61 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_30 | (eax_45 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_31 = (ebx_29 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (edx_61 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_31 | (eax_45 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = eax_45.b
                                uint32_t ecx_115
                                ecx_115.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_115.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_61.b
                            case 4
                                uint32_t ebx_35 = ebx_29 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | edx_61 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_35 | eax_45 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    edi += result_1
                    var_8 = &var_8[1]
                label_628463:
                    int32_t ecx_125 = *var_8
                    arg1 = zx.d((ecx_125 u>> 0xc).b)
                    uint32_t ebx_38 = zx.d(*((ecx_125 u>> 0x1e) + data_8bac80))
                    uint32_t eax_56 = zx.d((ecx_125 u>> 0x16).b)
                    uint32_t edx_78 = zx.d((ecx_125 u>> 2).b)
                    
                    if (result_1 - 1 u<= 3)
                        switch (result_1)
                            case 1
                                uint8_t ebx_39 = (ebx_38 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (edx_78 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_39 | (eax_56 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_40 = (ebx_38 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (edx_78 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_40 | (eax_56 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = eax_56.b
                                uint32_t ecx_146
                                ecx_146.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_146.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_78.b
                            case 4
                                uint32_t ebx_44 = ebx_38 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | edx_78 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_44 | eax_56 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    edi += result_1
                    var_8 = &var_8[1]
                label_628596:
                    int32_t ecx_156 = *var_8
                    arg1 = zx.d((ecx_156 u>> 0xc).b)
                    uint32_t ebx_47 = zx.d(*((ecx_156 u>> 0x1e) + data_8bac80))
                    uint32_t eax_67 = zx.d((ecx_156 u>> 0x16).b)
                    uint32_t edx_95 = zx.d((ecx_156 u>> 2).b)
                    
                    if (result_1 - 1 u<= 3)
                        switch (result_1)
                            case 1
                                uint8_t ebx_48 = (ebx_47 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (edx_95 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_48 | (eax_67 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_49 = (ebx_47 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (edx_95 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_49 | (eax_67 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = eax_67.b
                                uint32_t ecx_177
                                ecx_177.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_177.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_95.b
                            case 4
                                uint32_t ebx_53 = ebx_47 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | edx_95 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_53 | eax_67 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    edi += result_1
                    var_8 = &var_8[1]
                label_6286c9:
                    int32_t ecx_187 = *var_8
                    arg1 = zx.d((ecx_187 u>> 0xc).b)
                    uint32_t ebx_56 = zx.d(*((ecx_187 u>> 0x1e) + data_8bac80))
                    uint32_t eax_78 = zx.d((ecx_187 u>> 0x16).b)
                    uint32_t edx_112 = zx.d((ecx_187 u>> 2).b)
                    
                    if (result_1 - 1 u<= 3)
                        switch (result_1)
                            case 1
                                uint8_t ebx_57 = (ebx_56 u>> *(esi + 0x1f)).b << *(esi + 0x23)
                                    | (edx_112 u>> *(esi + 0x1e)).b << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).b << *(esi + 0x21)
                                *edi = ebx_57 | (eax_78 u>> *(esi + 0x1c)).b << *(esi + 0x20)
                            case 2
                                uint16_t ebx_58 = (ebx_56 u>> *(esi + 0x1f)).w << *(esi + 0x23)
                                    | (edx_112 u>> *(esi + 0x1e)).w << *(esi + 0x22)
                                    | (arg1 u>> *(esi + 0x1d)).w << *(esi + 0x21)
                                *edi = ebx_58 | (eax_78 u>> *(esi + 0x1c)).w << *(esi + 0x20)
                            case 3
                                *((zx.d(*(esi + 0x20)) u>> 3) + edi) = eax_78.b
                                uint32_t ecx_208
                                ecx_208.b = arg1.b
                                *((zx.d(*(esi + 0x21)) u>> 3) + edi) = ecx_208.b
                                *((zx.d(*(esi + 0x22)) u>> 3) + edi) = edx_112.b
                            case 4
                                uint32_t ebx_62 = ebx_56 u>> *(esi + 0x1f) << *(esi + 0x23)
                                    | edx_112 u>> *(esi + 0x1e) << *(esi + 0x22)
                                    | arg1 u>> *(esi + 0x1d) << *(esi + 0x21)
                                *edi = ebx_62 | eax_78 u>> *(esi + 0x1c) << *(esi + 0x20)
                    
                    edi += result_1
                    var_8 = &var_8[1]
                
                ecx = var_18
            case 3
                goto label_6286c9
            case 4
                goto label_628596
            case 5
                goto label_628463
            case 6
                goto label_628330
            case 7
                goto label_6281fd
        
        result = result_2
        var_8 += result
        edi += edx_1
    
    return result
}

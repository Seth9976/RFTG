// 函数名称: sub_62a150
// 虚拟地址: 0x62a150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62a150(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[4]
    int32_t edx = arg1[4]
    int32_t* ecx = *arg1
    char* var_c = arg1[5]
    int32_t edx_2 = arg1[9]
    int32_t result_1 = arg1[7]
    int32_t edx_3 = arg1[0xc]
    void* esi = arg1[0xa]
    uint32_t edx_4 = zx.d(*(esi + 9))
    int32_t edi = arg1[6]
    void* eax_1 = arg1[0xb]
    int32_t var_2c = edi
    int32_t result
    
    while (true)
        result = result_1
        result_1 -= 1
        int32_t* var_10_1 = ecx
        
        if (result == 0)
            break
        
        int32_t eax_3
        int32_t edx_5
        edx_5:eax_3 = sx.q(edi + 3)
        int32_t var_28_1 = (eax_3 + (edx_5 & 3)) s>> 2
        
        switch (edi & 3)
            case 0
                goto label_62a35a
            case 1
                goto label_62a1c8
            case 2
                while (true)
                    uint32_t var_8_4
                    uint32_t edx_73
                    uint32_t edi_34
                    uint32_t eax_63
                    
                    if (edx_4 - 1 u> 3)
                        edi_34 = 0
                        edx_73 = 0
                        arg1 = nullptr
                        var_8_4 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_63 = zx.d(*ecx)
                            label_62a68c:
                                edx_73 = zx.d(*(((*(esi + 0xc) & eax_63) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_4 = zx.d(*(((*(esi + 0x10) & eax_63) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_34 = zx.d(*(((*(esi + 0x14) & eax_63) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                arg1 = zx.d(*(((*(esi + 0x18) & eax_63) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_63 = zx.d(*ecx)
                                goto label_62a68c
                            case 3
                                var_8_4 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_73 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_34 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                                arg1 = 0xff
                            case 4
                                eax_63 = *ecx
                                goto label_62a68c
                    uint32_t eax_71 = zx.d(*var_c)
                    int32_t ecx_97 = *(*(eax_1 + 4) + 4)
                    uint32_t ebx_30 = zx.d(*(ecx_97 + (eax_71 << 2) + 1))
                    char* eax_72 = ecx_97 + (eax_71 << 2)
                    uint32_t ecx_98 = zx.d(*eax_72)
                    uint32_t eax_73 = zx.d(eax_72[2])
                    uint32_t ebx_34 = zx.d(((edx_73 - ecx_98) * arg1 u/ 0xff).b + ecx_98.b)
                    uint32_t ecx_102 = zx.d(((var_8_4 - ebx_30) * arg1 u/ 0xff).b + ebx_30.b)
                    uint32_t edx_86 = zx.d(((edi_34 - eax_73) * arg1 u/ 0xff).b + eax_73.b)
                    
                    if (edx_3 != 0)
                        int32_t eax_77
                        eax_77.b = (((ecx_102 & 0xffffffe7) | edx_86 u>> 3) u>> 3
                            | (ebx_34 & 0xffffffe0))[edx_3]
                        char* ecx_108 = var_c
                        var_c = &var_c[1]
                        var_10_1 += edx_4
                        *ecx_108 = eax_77.b
                        ecx = var_10_1
                    else
                        ebx_34.b &= 0xe3
                        uint8_t* edx_88 = var_c
                        var_c = &var_c[1]
                        *edx_88 = (((ecx_102 u>> 3).b | ebx_34.b) & 0xfc) | (edx_86 u>> 6).b
                        var_10_1 += edx_4
                        ecx = var_10_1
                    
                label_62a1c8:
                    uint32_t var_8_1
                    uint32_t edx_10
                    uint32_t edi_7
                    uint32_t eax_10
                    
                    if (edx_4 - 1 u> 3)
                        edx_10 = 0
                        arg1 = nullptr
                        edi_7 = 0
                        var_8_1 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_10 = zx.d(*ecx)
                            label_62a1f4:
                                edx_10 = zx.d(*(((*(esi + 0xc) & eax_10) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_1 = zx.d(*(((*(esi + 0x10) & eax_10) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_7 = zx.d(*(((*(esi + 0x14) & eax_10) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                arg1 = zx.d(*(((*(esi + 0x18) & eax_10) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_10 = zx.d(*ecx)
                                goto label_62a1f4
                            case 3
                                var_8_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_10 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_7 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                                arg1 = 0xff
                            case 4
                                eax_10 = *ecx
                                goto label_62a1f4
                    uint32_t eax_18 = zx.d(*var_c)
                    int32_t ecx_16 = *(*(eax_1 + 4) + 4)
                    uint32_t ebx_3 = zx.d(*(ecx_16 + (eax_18 << 2) + 1))
                    char* eax_19 = ecx_16 + (eax_18 << 2)
                    uint32_t ecx_17 = zx.d(*eax_19)
                    uint32_t eax_20 = zx.d(eax_19[2])
                    uint32_t ebx_7 = zx.d(((edx_10 - ecx_17) * arg1 u/ 0xff).b + ecx_17.b)
                    uint32_t ecx_21 = zx.d(((var_8_1 - ebx_3) * arg1 u/ 0xff).b + ebx_3.b)
                    uint32_t edx_23 = zx.d(((edi_7 - eax_20) * arg1 u/ 0xff).b + eax_20.b)
                    
                    if (edx_3 != 0)
                        int32_t eax_24
                        eax_24.b =
                            (((ecx_21 & 0xffffffe7) | edx_23 u>> 3) u>> 3 | (ebx_7 & 0xffffffe0))[edx_3]
                        *var_c = eax_24.b
                    else
                        ebx_7.b &= 0xe3
                        *var_c = (((ecx_21 u>> 3).b | ebx_7.b) & 0xfc) | (edx_23 u>> 6).b
                    
                    var_10_1 += edx_4
                    var_c = &var_c[1]
                    ecx = var_10_1
                    int32_t eax_26 = var_28_1 - 1
                    var_28_1 = eax_26
                    
                    if (eax_26 s<= 0)
                        break
                    
                label_62a35a:
                    uint32_t var_8_2
                    uint32_t edx_31
                    uint32_t edi_16
                    uint32_t eax_29
                    
                    if (edx_4 - 1 u> 3)
                        edi_16 = 0
                        edx_31 = 0
                        arg1 = nullptr
                        var_8_2 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_29 = zx.d(*ecx)
                            label_62a386:
                                edx_31 = zx.d(*(((*(esi + 0xc) & eax_29) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_2 = zx.d(*(((*(esi + 0x10) & eax_29) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_16 = zx.d(*(((*(esi + 0x14) & eax_29) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                arg1 = zx.d(*(((*(esi + 0x18) & eax_29) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_29 = zx.d(*ecx)
                                goto label_62a386
                            case 3
                                var_8_2 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_31 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_16 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                                arg1 = 0xff
                            case 4
                                eax_29 = *ecx
                                goto label_62a386
                    uint32_t eax_37 = zx.d(*var_c)
                    int32_t ecx_43 = *(*(eax_1 + 4) + 4)
                    uint32_t ebx_12 = zx.d(*(ecx_43 + (eax_37 << 2) + 1))
                    char* eax_38 = ecx_43 + (eax_37 << 2)
                    uint32_t ecx_44 = zx.d(*eax_38)
                    uint32_t eax_39 = zx.d(eax_38[2])
                    uint32_t ebx_16 = zx.d(((edx_31 - ecx_44) * arg1 u/ 0xff).b + ecx_44.b)
                    uint32_t ecx_48 = zx.d(((var_8_2 - ebx_12) * arg1 u/ 0xff).b + ebx_12.b)
                    uint32_t edx_44 = zx.d(((edi_16 - eax_39) * arg1 u/ 0xff).b + eax_39.b)
                    
                    if (edx_3 != 0)
                        int32_t eax_43
                        eax_43.b = (((ecx_48 & 0xffffffe7) | edx_44 u>> 3) u>> 3
                            | (ebx_16 & 0xffffffe0))[edx_3]
                        *var_c = eax_43.b
                    else
                        ebx_16.b &= 0xe3
                        *var_c = (((ecx_48 u>> 3).b | ebx_16.b) & 0xfc) | (edx_44 u>> 6).b
                    
                    var_c = &var_c[1]
                    var_10_1 += edx_4
                    ecx = var_10_1
                label_62a4dd:
                    uint32_t var_8_3
                    uint32_t edx_52
                    uint32_t edi_25
                    uint32_t eax_46
                    
                    if (edx_4 - 1 u> 3)
                        edi_25 = 0
                        edx_52 = 0
                        arg1 = nullptr
                        var_8_3 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_46 = zx.d(*ecx)
                            label_62a509:
                                edx_52 = zx.d(*(((*(esi + 0xc) & eax_46) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                var_8_3 = zx.d(*(((*(esi + 0x10) & eax_46) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_25 = zx.d(*(((*(esi + 0x14) & eax_46) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                arg1 = zx.d(*(((*(esi + 0x18) & eax_46) u>> *(esi + 0x23))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1f))]))
                            case 2
                                eax_46 = zx.d(*ecx)
                                goto label_62a509
                            case 3
                                var_8_3 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_52 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_25 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                                arg1 = 0xff
                            case 4
                                eax_46 = *ecx
                                goto label_62a509
                    uint32_t eax_54 = zx.d(*var_c)
                    int32_t ecx_70 = *(*(eax_1 + 4) + 4)
                    uint32_t ebx_21 = zx.d(*(ecx_70 + (eax_54 << 2) + 1))
                    char* eax_55 = ecx_70 + (eax_54 << 2)
                    uint32_t ecx_71 = zx.d(*eax_55)
                    uint32_t eax_56 = zx.d(eax_55[2])
                    uint32_t ebx_25 = zx.d(((edx_52 - ecx_71) * arg1 u/ 0xff).b + ecx_71.b)
                    uint32_t ecx_75 = zx.d(((var_8_3 - ebx_21) * arg1 u/ 0xff).b + ebx_21.b)
                    uint32_t edx_65 = zx.d(((edi_25 - eax_56) * arg1 u/ 0xff).b + eax_56.b)
                    
                    if (edx_3 != 0)
                        int32_t eax_60
                        eax_60.b = (((ecx_75 & 0xffffffe7) | edx_65 u>> 3) u>> 3
                            | (ebx_25 & 0xffffffe0))[edx_3]
                        *var_c = eax_60.b
                    else
                        ebx_25.b &= 0xe3
                        *var_c = (((ecx_75 u>> 3).b | ebx_25.b) & 0xfc) | (edx_65 u>> 6).b
                    
                    var_c = &var_c[1]
                    var_10_1 += edx_4
                    ecx = var_10_1
                
                edi = var_2c
            case 3
                goto label_62a4dd
        
        ecx += edx
        var_c = &var_c[edx_2]
    
    return result
}

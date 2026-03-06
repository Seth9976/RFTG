// 函数名称: sub_629ad0
// 虚拟地址: 0x629ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_629ad0(int32_t* arg1)
{
    // 第一条实际指令: int32_t edx = arg1[4]
    int32_t edx = arg1[4]
    int32_t* ecx = *arg1
    char* var_8 = arg1[5]
    uint32_t result_2 = arg1[9]
    int32_t edx_2 = arg1[0xc]
    int32_t ebx = arg1[7]
    void* esi = arg1[0xa]
    void* edx_3 = arg1[0xb]
    int32_t edi = arg1[6]
    uint32_t result = zx.d(*(arg1 + 0x3f))
    uint32_t edx_4 = zx.d(*(esi + 9))
    int32_t var_2c = edi
    uint32_t result_1 = result
    
    while (true)
        int32_t edx_5 = ebx
        ebx -= 1
        int32_t* var_c_1 = ecx
        
        if (edx_5 == 0)
            break
        
        int32_t eax_2
        int32_t edx_6
        edx_6:eax_2 = sx.q(edi + 3)
        int32_t var_28_1 = (eax_2 + (edx_6 & 3)) s>> 2
        
        switch (edi & 3)
            case 0
                goto label_629cba
            case 1
                goto label_629b4f
            case 2
                while (true)
                    uint32_t edx_74
                    uint32_t edi_34
                    uint32_t eax_68
                    
                    if (edx_4 - 1 u> 3)
                        edi_34 = 0
                        edx_74 = 0
                        arg1 = nullptr
                    else
                        switch (edx_4)
                            case 1
                                eax_68 = zx.d(*ecx)
                            label_629f9e:
                                edx_74 = zx.d(*(((*(esi + 0xc) & eax_68) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                arg1 = zx.d(*(((*(esi + 0x10) & eax_68) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_34 = zx.d(*(((*(esi + 0x14) & eax_68) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                eax_68 = zx.d(*ecx)
                                goto label_629f9e
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_74 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_34 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                            case 4
                                eax_68 = *ecx
                                goto label_629f9e
                    uint32_t ecx_73 = zx.d(*var_8)
                    int32_t eax_78 = *(*(edx_3 + 4) + 4)
                    uint32_t ebx_19 = zx.d(*(eax_78 + (ecx_73 << 2) + 1))
                    char* eax_79 = eax_78 + (ecx_73 << 2)
                    uint32_t ecx_74 = zx.d(*eax_79)
                    uint32_t eax_80 = zx.d(eax_79[2])
                    uint32_t ebx_23 = zx.d(((edx_74 - ecx_74) * result_1 u/ 0xff).b + ecx_74.b)
                    uint32_t ecx_78 = zx.d(((arg1 - ebx_19) * result_1 u/ 0xff).b + ebx_19.b)
                    uint32_t edx_87 = zx.d(((edi_34 - eax_80) * result_1 u/ 0xff).b + eax_80.b)
                    
                    if (edx_2 != 0)
                        int32_t eax_84
                        eax_84.b = (((ecx_78 & 0xffffffe7) | edx_87 u>> 3) u>> 3
                            | (ebx_23 & 0xffffffe0))[edx_2]
                        char* ecx_84 = var_8
                        var_8 = &var_8[1]
                        var_c_1 += edx_4
                        *ecx_84 = eax_84.b
                        ecx = var_c_1
                    else
                        ebx_23.b &= 0xe3
                        uint8_t* edx_89 = var_8
                        var_8 = &var_8[1]
                        *edx_89 = (((ecx_78 u>> 3).b | ebx_23.b) & 0xfc) | (edx_87 u>> 6).b
                        var_c_1 += edx_4
                        ecx = var_c_1
                    
                label_629b4f:
                    uint32_t edx_11
                    uint32_t edi_7
                    uint32_t eax_9
                    
                    if (edx_4 - 1 u> 3)
                        edx_11 = 0
                        edi_7 = 0
                        arg1 = nullptr
                    else
                        switch (edx_4)
                            case 1
                                eax_9 = zx.d(*ecx)
                            label_629b7b:
                                edx_11 = zx.d(*(((*(esi + 0xc) & eax_9) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                arg1 = zx.d(*(((*(esi + 0x10) & eax_9) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_7 = zx.d(*(((*(esi + 0x14) & eax_9) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                eax_9 = zx.d(*ecx)
                                goto label_629b7b
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_11 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_7 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                            case 4
                                eax_9 = *ecx
                                goto label_629b7b
                    uint32_t ecx_10 = zx.d(*var_8)
                    int32_t eax_19 = *(*(edx_3 + 4) + 4)
                    uint32_t ebx_1 = zx.d(*(eax_19 + (ecx_10 << 2) + 1))
                    char* eax_20 = eax_19 + (ecx_10 << 2)
                    uint32_t ecx_11 = zx.d(*eax_20)
                    uint32_t eax_21 = zx.d(eax_20[2])
                    uint32_t ebx_5 = zx.d(((edx_11 - ecx_11) * result_1 u/ 0xff).b + ecx_11.b)
                    uint32_t ecx_15 = zx.d(((arg1 - ebx_1) * result_1 u/ 0xff).b + ebx_1.b)
                    uint32_t edx_24 = zx.d(((edi_7 - eax_21) * result_1 u/ 0xff).b + eax_21.b)
                    
                    if (edx_2 != 0)
                        int32_t eax_25
                        eax_25.b =
                            (((ecx_15 & 0xffffffe7) | edx_24 u>> 3) u>> 3 | (ebx_5 & 0xffffffe0))[edx_2]
                        *var_8 = eax_25.b
                    else
                        ebx_5.b &= 0xe3
                        *var_8 = (((ecx_15 u>> 3).b | ebx_5.b) & 0xfc) | (edx_24 u>> 6).b
                    
                    var_c_1 += edx_4
                    var_8 = &var_8[1]
                    ecx = var_c_1
                    int32_t eax_27 = var_28_1 - 1
                    var_28_1 = eax_27
                    
                    if (eax_27 s<= 0)
                        break
                    
                label_629cba:
                    uint32_t edx_32
                    uint32_t edi_16
                    uint32_t eax_30
                    
                    if (edx_4 - 1 u> 3)
                        edi_16 = 0
                        edx_32 = 0
                        arg1 = nullptr
                    else
                        switch (edx_4)
                            case 1
                                eax_30 = zx.d(*ecx)
                            label_629ce6:
                                edx_32 = zx.d(*(((*(esi + 0xc) & eax_30) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                arg1 = zx.d(*(((*(esi + 0x10) & eax_30) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_16 = zx.d(*(((*(esi + 0x14) & eax_30) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                eax_30 = zx.d(*ecx)
                                goto label_629ce6
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_32 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_16 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                            case 4
                                eax_30 = *ecx
                                goto label_629ce6
                    uint32_t ecx_31 = zx.d(*var_8)
                    int32_t eax_40 = *(*(edx_3 + 4) + 4)
                    uint32_t ebx_7 = zx.d(*(eax_40 + (ecx_31 << 2) + 1))
                    char* eax_41 = eax_40 + (ecx_31 << 2)
                    uint32_t ecx_32 = zx.d(*eax_41)
                    uint32_t eax_42 = zx.d(eax_41[2])
                    uint32_t ebx_11 = zx.d(((edx_32 - ecx_32) * result_1 u/ 0xff).b + ecx_32.b)
                    uint32_t ecx_36 = zx.d(((arg1 - ebx_7) * result_1 u/ 0xff).b + ebx_7.b)
                    uint32_t edx_45 = zx.d(((edi_16 - eax_42) * result_1 u/ 0xff).b + eax_42.b)
                    
                    if (edx_2 != 0)
                        int32_t eax_46
                        eax_46.b = (((ecx_36 & 0xffffffe7) | edx_45 u>> 3) u>> 3
                            | (ebx_11 & 0xffffffe0))[edx_2]
                        *var_8 = eax_46.b
                    else
                        ebx_11.b &= 0xe3
                        *var_8 = (((ecx_36 u>> 3).b | ebx_11.b) & 0xfc) | (edx_45 u>> 6).b
                    
                    var_8 = &var_8[1]
                    var_c_1 += edx_4
                    ecx = var_c_1
                label_629e16:
                    uint32_t edx_53
                    uint32_t edi_25
                    uint32_t eax_49
                    
                    if (edx_4 - 1 u> 3)
                        edi_25 = 0
                        edx_53 = 0
                        arg1 = nullptr
                    else
                        switch (edx_4)
                            case 1
                                eax_49 = zx.d(*ecx)
                            label_629e42:
                                edx_53 = zx.d(*(((*(esi + 0xc) & eax_49) u>> *(esi + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                arg1 = zx.d(*(((*(esi + 0x10) & eax_49) u>> *(esi + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                edi_25 = zx.d(*(((*(esi + 0x14) & eax_49) u>> *(esi + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                            case 2
                                eax_49 = zx.d(*ecx)
                                goto label_629e42
                            case 3
                                arg1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + ecx))
                                edx_53 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + ecx))
                                edi_25 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + ecx))
                            case 4
                                eax_49 = *ecx
                                goto label_629e42
                    uint32_t ecx_52 = zx.d(*var_8)
                    int32_t eax_59 = *(*(edx_3 + 4) + 4)
                    uint32_t ebx_13 = zx.d(*(eax_59 + (ecx_52 << 2) + 1))
                    char* eax_60 = eax_59 + (ecx_52 << 2)
                    uint32_t ecx_53 = zx.d(*eax_60)
                    uint32_t eax_61 = zx.d(eax_60[2])
                    uint32_t ebx_17 = zx.d(((edx_53 - ecx_53) * result_1 u/ 0xff).b + ecx_53.b)
                    uint32_t ecx_57 = zx.d(((arg1 - ebx_13) * result_1 u/ 0xff).b + ebx_13.b)
                    uint32_t edx_66 = zx.d(((edi_25 - eax_61) * result_1 u/ 0xff).b + eax_61.b)
                    
                    if (edx_2 != 0)
                        int32_t eax_65
                        eax_65.b = (((ecx_57 & 0xffffffe7) | edx_66 u>> 3) u>> 3
                            | (ebx_17 & 0xffffffe0))[edx_2]
                        *var_8 = eax_65.b
                    else
                        ebx_17.b &= 0xe3
                        *var_8 = (((ecx_57 u>> 3).b | ebx_17.b) & 0xfc) | (edx_66 u>> 6).b
                    
                    var_8 = &var_8[1]
                    var_c_1 += edx_4
                    ecx = var_c_1
                
                edi = var_2c
            case 3
                goto label_629e16
        
        result = result_2
        ecx += edx
        var_8 = &var_8[result]
    
    return result
}

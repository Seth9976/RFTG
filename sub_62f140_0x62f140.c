// 函数名称: sub_62f140
// 虚拟地址: 0x62f140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62f140(uint32_t arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t ecx = eax[6]
    int32_t result_1 = eax[7]
    int32_t edx_3 = eax[0xe]
    void* ebx = eax[0xa]
    uint32_t edx_4 = zx.d(*(ebx + 9))
    void* esi = eax[0xb]
    int32_t* edi = eax[5]
    int32_t* ecx_1 = *eax
    uint32_t eax_1 = zx.d(*(eax + 0x3f))
    uint32_t edx_5 = zx.d(*(esi + 9))
    void* var_18 = ebx
    int32_t result
    
    while (true)
        int32_t result_2 = result_1
        result = result_1 - 1
        int32_t* var_14_1 = ecx_1
        result_1 = result
        
        if (result_2 == 0)
            break
        
        int32_t eax_5
        int32_t edx_6
        edx_6:eax_5 = sx.q(ecx + 3)
        int32_t var_38_1 = (eax_5 + (edx_6 & 3)) s>> 2
        
        switch (ecx & 3)
            case 0
                goto label_62f4d1
            case 1
                goto label_62f1cd
            case 2
                while (true)
                    uint32_t eax_101
                    
                    if (edx_4 - 1 u> 3)
                        eax_101 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_101 = zx.d(*ecx_1)
                            case 2
                                eax_101 = zx.d(*ecx_1)
                            case 3
                                eax_101 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_101 = *ecx_1
                    
                    if (eax_1 != 0 && eax_101 != edx_3)
                        uint32_t var_c_7
                        uint32_t var_8_7
                        uint32_t eax_111
                        
                        if (edx_5 - 1 u> 3)
                            arg1 = 0
                            var_8_7 = 0
                            var_c_7 = 0
                        else
                            switch (edx_5)
                                case 1
                                    eax_111 = zx.d(*edi)
                                label_62fb9a:
                                    var_c_7 = zx.d(*(((*(esi + 0xc) & eax_111) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_8_7 = zx.d(*(((*(esi + 0x10) & eax_111) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & eax_111) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    *(((*(esi + 0x18) & eax_111) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))])
                                case 2
                                    eax_111 = zx.d(*edi)
                                    goto label_62fb9a
                                case 3
                                    var_c_7 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    var_8_7 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    eax_111 = *edi
                                    goto label_62fb9a
                        int32_t eax_119
                        int32_t edx_84
                        edx_84:eax_119 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0xc) & eax_101) u>> *(var_18 + 0x20))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1c))])) - var_c_7) * eax_1)
                        uint32_t var_c_8 = var_c_7 + (edx_84 u>> 7)
                        int32_t eax_120
                        int32_t edx_89
                        edx_89:eax_120 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0x10) & eax_101) u>> *(var_18 + 0x21))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1d))])) - var_8_7) * eax_1)
                        uint32_t var_8_8 = var_8_7 + (edx_89 u>> 7)
                        int32_t eax_121
                        int32_t edx_94
                        edx_94:eax_121 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0x14) & eax_101) u>> *(var_18 + 0x22))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1e))])) - arg1) * eax_1)
                        arg1 += edx_94 u>> 7
                        
                        if (edx_5 - 1 u<= 3)
                            jump((&data_62feb0)[edx_5 - 1])
                    
                    var_14_1 += edx_4
                    edi += edx_5
                    ecx_1 = var_14_1
                label_62f1cd:
                    uint32_t eax_12
                    
                    if (edx_4 - 1 u> 3)
                        eax_12 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_12 = zx.d(*ecx_1)
                            case 2
                                eax_12 = zx.d(*ecx_1)
                            case 3
                                eax_12 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_12 = *ecx_1
                    
                    if (eax_1 != 0 && eax_12 != edx_3)
                        uint32_t var_c_1
                        uint32_t var_8_1
                        uint32_t eax_22
                        
                        if (edx_5 - 1 u> 3)
                            arg1 = 0
                            var_8_1 = 0
                            var_c_1 = 0
                        else
                            switch (edx_5)
                                case 1
                                    eax_22 = zx.d(*edi)
                                label_62f2ac:
                                    var_c_1 = zx.d(*(((*(esi + 0xc) & eax_22) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_8_1 = zx.d(*(((*(esi + 0x10) & eax_22) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & eax_22) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    *(((*(esi + 0x18) & eax_22) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))])
                                case 2
                                    eax_22 = zx.d(*edi)
                                    goto label_62f2ac
                                case 3
                                    var_c_1 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    var_8_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    eax_22 = *edi
                                    goto label_62f2ac
                        int32_t eax_30
                        int32_t edx_15
                        edx_15:eax_30 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0xc) & eax_12) u>> *(var_18 + 0x20))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1c))])) - var_c_1) * eax_1)
                        uint32_t var_c_2 = var_c_1 + (edx_15 u>> 7)
                        int32_t eax_31
                        int32_t edx_20
                        edx_20:eax_31 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0x10) & eax_12) u>> *(var_18 + 0x21))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1d))])) - var_8_1) * eax_1)
                        uint32_t var_8_2 = var_8_1 + (edx_20 u>> 7)
                        int32_t eax_32
                        int32_t edx_25
                        edx_25:eax_32 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0x14) & eax_12) u>> *(var_18 + 0x22))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1e))])) - arg1) * eax_1)
                        arg1 += edx_25 u>> 7
                        
                        if (edx_5 - 1 u<= 3)
                            jump(*(((edx_5 - 1) << 2) + sub_62fe20))
                    
                    var_14_1 += edx_4
                    edi += edx_5
                    ecx_1 = var_14_1
                    int32_t eax_40 = var_38_1 - 1
                    var_38_1 = eax_40
                    
                    if (eax_40 s<= 0)
                        break
                    
                label_62f4d1:
                    uint32_t eax_43
                    
                    if (edx_4 - 1 u> 3)
                        eax_43 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_43 = zx.d(*ecx_1)
                            case 2
                                eax_43 = zx.d(*ecx_1)
                            case 3
                                eax_43 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_43 = *ecx_1
                    
                    if (eax_1 != 0 && eax_43 != edx_3)
                        uint32_t var_c_3
                        uint32_t var_8_3
                        uint32_t eax_53
                        
                        if (edx_5 - 1 u> 3)
                            arg1 = 0
                            var_8_3 = 0
                            var_c_3 = 0
                        else
                            switch (edx_5)
                                case 1
                                    eax_53 = zx.d(*edi)
                                label_62f5b0:
                                    var_c_3 = zx.d(*(((*(esi + 0xc) & eax_53) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_8_3 = zx.d(*(((*(esi + 0x10) & eax_53) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & eax_53) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    *(((*(esi + 0x18) & eax_53) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))])
                                case 2
                                    eax_53 = zx.d(*edi)
                                    goto label_62f5b0
                                case 3
                                    var_c_3 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    var_8_3 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    eax_53 = *edi
                                    goto label_62f5b0
                        int32_t eax_61
                        int32_t edx_38
                        edx_38:eax_61 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0xc) & eax_43) u>> *(var_18 + 0x20))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1c))])) - var_c_3) * eax_1)
                        uint32_t var_c_4 = var_c_3 + (edx_38 u>> 7)
                        int32_t eax_62
                        int32_t edx_43
                        edx_43:eax_62 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0x10) & eax_43) u>> *(var_18 + 0x21))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1d))])) - var_8_3) * eax_1)
                        uint32_t var_8_4 = var_8_3 + (edx_43 u>> 7)
                        int32_t eax_63
                        int32_t edx_48
                        edx_48:eax_63 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0x14) & eax_43) u>> *(var_18 + 0x22))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1e))])) - arg1) * eax_1)
                        arg1 += edx_48 u>> 7
                        
                        if (edx_5 - 1 u<= 3)
                            jump(*(((edx_5 - 1) << 2) + sub_62fe50))
                    
                    var_14_1 += edx_4
                    edi += edx_5
                    ebx = var_18
                    ecx_1 = var_14_1
                label_62f7c9:
                    uint32_t eax_72
                    
                    if (edx_4 - 1 u> 3)
                        eax_72 = 0
                    else
                        switch (edx_4)
                            case 1
                                eax_72 = zx.d(*ecx_1)
                            case 2
                                eax_72 = zx.d(*ecx_1)
                            case 3
                                eax_72 = (((zx.d(*(ecx_1 + 2)) << 8) + zx.d(*(ecx_1 + 1))) << 8)
                                    + zx.d(*ecx_1)
                            case 4
                                eax_72 = *ecx_1
                    
                    if (eax_1 != 0 && eax_72 != edx_3)
                        uint32_t var_c_5
                        uint32_t var_8_5
                        uint32_t eax_82
                        
                        if (edx_5 - 1 u> 3)
                            arg1 = 0
                            var_8_5 = 0
                            var_c_5 = 0
                        else
                            switch (edx_5)
                                case 1
                                    eax_82 = zx.d(*edi)
                                label_62f8a5:
                                    var_c_5 = zx.d(*(((*(esi + 0xc) & eax_82) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    var_8_5 = zx.d(*(((*(esi + 0x10) & eax_82) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi + 0x14) & eax_82) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    *(((*(esi + 0x18) & eax_82) u>> *(esi + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1f))])
                                case 2
                                    eax_82 = zx.d(*edi)
                                    goto label_62f8a5
                                case 3
                                    var_c_5 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    var_8_5 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    eax_82 = *edi
                                    goto label_62f8a5
                        int32_t eax_90
                        int32_t edx_61
                        edx_61:eax_90 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(ebx + 0xc) & eax_72) u>> *(ebx + 0x20))
                                + (&data_8bac68)[zx.d(*(ebx + 0x1c))])) - var_c_5) * eax_1)
                        uint32_t var_c_6 = var_c_5 + (edx_61 u>> 7)
                        int32_t eax_91
                        int32_t edx_66
                        edx_66:eax_91 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(ebx + 0x10) & eax_72) u>> *(ebx + 0x21))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1d))])) - var_8_5) * eax_1)
                        uint32_t var_8_6 = var_8_5 + (edx_66 u>> 7)
                        int32_t eax_92
                        int32_t edx_71
                        edx_71:eax_92 = mulu.dp.d(0x80808081, 
                            (zx.d(*(((*(var_18 + 0x14) & eax_72) u>> *(var_18 + 0x22))
                                + (&data_8bac68)[zx.d(*(var_18 + 0x1e))])) - arg1) * eax_1)
                        arg1 += edx_71 u>> 7
                        
                        if (edx_5 - 1 u<= 3)
                            jump((&data_62fe80)[edx_5 - 1])
                    
                    var_14_1 += edx_4
                    edi += edx_5
                    ecx_1 = var_14_1
                
                ebx = var_18
            case 3
                goto label_62f7c9
        
        ecx_1 += eax[4]
        edi += eax[9]
    
    return result
}

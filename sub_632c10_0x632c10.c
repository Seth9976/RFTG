// 函数名称: sub_632c10
// 虚拟地址: 0x632c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_632c10(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t i = arg1[7]
    int32_t ebx_2 = *(*(arg1[0xa] + 4) + 4)
    char* var_1c = *arg1
    int32_t esi_1 = arg1[4]
    int32_t esi_2 = arg1[9]
    int32_t ebx_3 = arg1[0xe]
    void* esi_3 = arg1[0xb]
    int32_t* edi = arg1[5]
    uint32_t ebx_4 = zx.d(*(arg1 + 0x3f))
    uint32_t eax_1 = zx.d(*(esi_3 + 9))
    int32_t var_34 = ecx
    
    for (; i != 0; i -= 1)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(ecx + 7)
        int32_t var_30_1 = (eax_4 + (edx_1 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_632f26
            case 1
                goto label_632c95
            case 2
                while (true)
                    uint32_t eax_165 = zx.d(*var_1c)
                    
                    if (eax_165 != ebx_3)
                        uint32_t var_10_15
                        uint32_t var_c_15
                        uint32_t var_8_15
                        uint32_t eax_168
                        
                        if (eax_1 - 1 u> 3)
                            var_10_15 = 0
                            arg1 = nullptr
                            var_8_15 = 0
                            var_c_15 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_168 = zx.d(*edi)
                                label_633e8d:
                                    var_c_15 = zx.d(*(((*(esi_3 + 0xc) & eax_168) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_15 = zx.d(*(((*(esi_3 + 0x10) & eax_168) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_168) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_15 = zx.d(*(((*(esi_3 + 0x18) & eax_168) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_168 = zx.d(*edi)
                                    goto label_633e8d
                                case 3
                                    var_c_15 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_15 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_15 = 0xff
                                case 4
                                    eax_168 = *edi
                                    goto label_633e8d
                        int32_t eax_176
                        int32_t edx_265
                        edx_265:eax_176 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_165 << 2))) - var_c_15) * ebx_4)
                        uint32_t var_c_16 = var_c_15 + (edx_265 u>> 7)
                        int32_t eax_177
                        int32_t edx_267
                        edx_267:eax_177 = mulu.dp.d(0x80808081, 
                            (zx.d(*(ebx_2 + (eax_165 << 2) + 1)) - var_8_15) * ebx_4)
                        uint32_t var_8_16 = var_8_15 + (edx_267 u>> 7)
                        int32_t eax_178
                        int32_t edx_269
                        edx_269:eax_178 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_165 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_269 u>> 7
                        uint32_t var_10_16 = var_10_15 + ebx_4 - var_10_15 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump((&data_6341fc)[eax_1 - 1])
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                label_632c95:
                    uint32_t eax_9 = zx.d(*var_1c)
                    
                    if (eax_9 != ebx_3)
                        uint32_t var_10_1
                        uint32_t var_c_1
                        uint32_t var_8_1
                        uint32_t eax_12
                        
                        if (eax_1 - 1 u> 3)
                            var_10_1 = 0
                            arg1 = nullptr
                            var_8_1 = 0
                            var_c_1 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_12 = zx.d(*edi)
                                label_632cf0:
                                    var_c_1 = zx.d(*(((*(esi_3 + 0xc) & eax_12) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_1 = zx.d(*(((*(esi_3 + 0x10) & eax_12) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_12) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_1 = zx.d(*(((*(esi_3 + 0x18) & eax_12) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_12 = zx.d(*edi)
                                    goto label_632cf0
                                case 3
                                    var_c_1 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_1 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_1 = 0xff
                                case 4
                                    eax_12 = *edi
                                    goto label_632cf0
                        int32_t eax_20
                        int32_t edx_27
                        edx_27:eax_20 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_9 << 2))) - var_c_1) * ebx_4)
                        uint32_t var_c_2 = var_c_1 + (edx_27 u>> 7)
                        int32_t eax_21
                        int32_t edx_29
                        edx_29:eax_21 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_9 << 2) + 1)) - var_8_1) * ebx_4)
                        uint32_t var_8_2 = var_8_1 + (edx_29 u>> 7)
                        int32_t eax_22
                        int32_t edx_31
                        edx_31:eax_22 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_9 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_31 u>> 7
                        uint32_t var_10_2 = var_10_1 + ebx_4 - var_10_1 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump((&data_63411c)[eax_1 - 1])
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                    int32_t eax_31 = var_30_1 - 1
                    var_30_1 = eax_31
                    
                    if (eax_31 s<= 0)
                        break
                    
                label_632f26:
                    uint32_t eax_33 = zx.d(*var_1c)
                    
                    if (eax_33 != ebx_3)
                        uint32_t var_10_3
                        uint32_t var_c_3
                        uint32_t var_8_3
                        uint32_t eax_36
                        
                        if (eax_1 - 1 u> 3)
                            var_10_3 = 0
                            arg1 = nullptr
                            var_8_3 = 0
                            var_c_3 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_36 = zx.d(*edi)
                                label_632f81:
                                    var_c_3 = zx.d(*(((*(esi_3 + 0xc) & eax_36) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_3 = zx.d(*(((*(esi_3 + 0x10) & eax_36) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_36) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_3 = zx.d(*(((*(esi_3 + 0x18) & eax_36) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_36 = zx.d(*edi)
                                    goto label_632f81
                                case 3
                                    var_c_3 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_3 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_3 = 0xff
                                case 4
                                    eax_36 = *edi
                                    goto label_632f81
                        int32_t eax_44
                        int32_t edx_61
                        edx_61:eax_44 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_33 << 2))) - var_c_3) * ebx_4)
                        uint32_t var_c_4 = var_c_3 + (edx_61 u>> 7)
                        int32_t eax_45
                        int32_t edx_63
                        edx_63:eax_45 = mulu.dp.d(0x80808081, 
                            (zx.d(*(ebx_2 + (eax_33 << 2) + 1)) - var_8_3) * ebx_4)
                        uint32_t var_8_4 = var_8_3 + (edx_63 u>> 7)
                        int32_t eax_46
                        int32_t edx_65
                        edx_65:eax_46 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_33 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_65 u>> 7
                        uint32_t var_10_4 = var_10_3 + ebx_4 - var_10_3 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump((&data_63413c)[eax_1 - 1])
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                label_6331a8:
                    uint32_t eax_55 = zx.d(*var_1c)
                    
                    if (eax_55 != ebx_3)
                        uint32_t var_10_5
                        uint32_t var_c_5
                        uint32_t var_8_5
                        uint32_t eax_58
                        
                        if (eax_1 - 1 u> 3)
                            var_10_5 = 0
                            arg1 = nullptr
                            var_8_5 = 0
                            var_c_5 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_58 = zx.d(*edi)
                                label_633203:
                                    var_c_5 = zx.d(*(((*(esi_3 + 0xc) & eax_58) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_5 = zx.d(*(((*(esi_3 + 0x10) & eax_58) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_58) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_5 = zx.d(*(((*(esi_3 + 0x18) & eax_58) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_58 = zx.d(*edi)
                                    goto label_633203
                                case 3
                                    var_c_5 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_5 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_5 = 0xff
                                case 4
                                    eax_58 = *edi
                                    goto label_633203
                        int32_t eax_66
                        int32_t edx_95
                        edx_95:eax_66 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_55 << 2))) - var_c_5) * ebx_4)
                        uint32_t var_c_6 = var_c_5 + (edx_95 u>> 7)
                        int32_t eax_67
                        int32_t edx_97
                        edx_97:eax_67 = mulu.dp.d(0x80808081, 
                            (zx.d(*(ebx_2 + (eax_55 << 2) + 1)) - var_8_5) * ebx_4)
                        uint32_t var_8_6 = var_8_5 + (edx_97 u>> 7)
                        int32_t eax_68
                        int32_t edx_99
                        edx_99:eax_68 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_55 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_99 u>> 7
                        uint32_t var_10_6 = var_10_5 + ebx_4 - var_10_5 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump((&data_63415c)[eax_1 - 1])
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                label_63342a:
                    uint32_t eax_77 = zx.d(*var_1c)
                    
                    if (eax_77 != ebx_3)
                        uint32_t var_10_7
                        uint32_t var_c_7
                        uint32_t var_8_7
                        uint32_t eax_80
                        
                        if (eax_1 - 1 u> 3)
                            var_10_7 = 0
                            arg1 = nullptr
                            var_8_7 = 0
                            var_c_7 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_80 = zx.d(*edi)
                                label_633485:
                                    var_c_7 = zx.d(*(((*(esi_3 + 0xc) & eax_80) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_7 = zx.d(*(((*(esi_3 + 0x10) & eax_80) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_80) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_7 = zx.d(*(((*(esi_3 + 0x18) & eax_80) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_80 = zx.d(*edi)
                                    goto label_633485
                                case 3
                                    var_c_7 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_7 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_7 = 0xff
                                case 4
                                    eax_80 = *edi
                                    goto label_633485
                        int32_t eax_88
                        int32_t edx_129
                        edx_129:eax_88 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_77 << 2))) - var_c_7) * ebx_4)
                        uint32_t var_c_8 = var_c_7 + (edx_129 u>> 7)
                        int32_t eax_89
                        int32_t edx_131
                        edx_131:eax_89 = mulu.dp.d(0x80808081, 
                            (zx.d(*(ebx_2 + (eax_77 << 2) + 1)) - var_8_7) * ebx_4)
                        uint32_t var_8_8 = var_8_7 + (edx_131 u>> 7)
                        int32_t eax_90
                        int32_t edx_133
                        edx_133:eax_90 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_77 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_133 u>> 7
                        uint32_t var_10_8 = var_10_7 + ebx_4 - var_10_7 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump((&data_63417c)[eax_1 - 1])
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                label_6336ac:
                    uint32_t eax_99 = zx.d(*var_1c)
                    
                    if (eax_99 != ebx_3)
                        uint32_t var_10_9
                        uint32_t var_c_9
                        uint32_t var_8_9
                        uint32_t eax_102
                        
                        if (eax_1 - 1 u> 3)
                            var_10_9 = 0
                            arg1 = nullptr
                            var_8_9 = 0
                            var_c_9 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_102 = zx.d(*edi)
                                label_633707:
                                    var_c_9 = zx.d(*(((*(esi_3 + 0xc) & eax_102) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_9 = zx.d(*(((*(esi_3 + 0x10) & eax_102) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_102) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_9 = zx.d(*(((*(esi_3 + 0x18) & eax_102) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_102 = zx.d(*edi)
                                    goto label_633707
                                case 3
                                    var_c_9 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_9 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_9 = 0xff
                                case 4
                                    eax_102 = *edi
                                    goto label_633707
                        int32_t eax_110
                        int32_t edx_163
                        edx_163:eax_110 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_99 << 2))) - var_c_9) * ebx_4)
                        uint32_t var_c_10 = var_c_9 + (edx_163 u>> 7)
                        int32_t eax_111
                        int32_t edx_165
                        edx_165:eax_111 = mulu.dp.d(0x80808081, 
                            (zx.d(*(ebx_2 + (eax_99 << 2) + 1)) - var_8_9) * ebx_4)
                        uint32_t var_8_10 = var_8_9 + (edx_165 u>> 7)
                        int32_t eax_112
                        int32_t edx_167
                        edx_167:eax_112 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_99 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_167 u>> 7
                        uint32_t var_10_10 = var_10_9 + ebx_4 - var_10_9 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump((&data_63419c)[eax_1 - 1])
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                label_63392e:
                    uint32_t eax_121 = zx.d(*var_1c)
                    
                    if (eax_121 != ebx_3)
                        uint32_t var_10_11
                        uint32_t var_c_11
                        uint32_t var_8_11
                        uint32_t eax_124
                        
                        if (eax_1 - 1 u> 3)
                            var_10_11 = 0
                            arg1 = nullptr
                            var_8_11 = 0
                            var_c_11 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_124 = zx.d(*edi)
                                label_633989:
                                    var_c_11 = zx.d(*(((*(esi_3 + 0xc) & eax_124) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_11 = zx.d(*(((*(esi_3 + 0x10) & eax_124) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_124) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_11 = zx.d(*(((*(esi_3 + 0x18) & eax_124) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_124 = zx.d(*edi)
                                    goto label_633989
                                case 3
                                    var_c_11 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_11 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_11 = 0xff
                                case 4
                                    eax_124 = *edi
                                    goto label_633989
                        int32_t eax_132
                        int32_t edx_197
                        edx_197:eax_132 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_121 << 2))) - var_c_11) * ebx_4)
                        uint32_t var_c_12 = var_c_11 + (edx_197 u>> 7)
                        int32_t eax_133
                        int32_t edx_199
                        edx_199:eax_133 = mulu.dp.d(0x80808081, 
                            (zx.d(*(ebx_2 + (eax_121 << 2) + 1)) - var_8_11) * ebx_4)
                        uint32_t var_8_12 = var_8_11 + (edx_199 u>> 7)
                        int32_t eax_134
                        int32_t edx_201
                        edx_201:eax_134 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_121 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_201 u>> 7
                        uint32_t var_10_12 = var_10_11 + ebx_4 - var_10_11 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump(*(((eax_1 - 1) << 2) + sub_6341bc))
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                label_633bb0:
                    uint32_t eax_143 = zx.d(*var_1c)
                    
                    if (eax_143 != ebx_3)
                        uint32_t var_10_13
                        uint32_t var_c_13
                        uint32_t var_8_13
                        uint32_t eax_146
                        
                        if (eax_1 - 1 u> 3)
                            var_10_13 = 0
                            arg1 = nullptr
                            var_8_13 = 0
                            var_c_13 = 0
                        else
                            switch (eax_1)
                                case 1
                                    eax_146 = zx.d(*edi)
                                label_633c0b:
                                    var_c_13 = zx.d(*(((*(esi_3 + 0xc) & eax_146) u>> *(esi_3 + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1c))]))
                                    var_8_13 = zx.d(*(((*(esi_3 + 0x10) & eax_146) u>> *(esi_3 + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1d))]))
                                    arg1 = zx.d(*(((*(esi_3 + 0x14) & eax_146) u>> *(esi_3 + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1e))]))
                                    var_10_13 = zx.d(*(((*(esi_3 + 0x18) & eax_146) u>> *(esi_3 + 0x23))
                                        + (&data_8bac68)[zx.d(*(esi_3 + 0x1f))]))
                                case 2
                                    eax_146 = zx.d(*edi)
                                    goto label_633c0b
                                case 3
                                    var_c_13 = zx.d(*((zx.d(*(esi_3 + 0x20)) u>> 3) + edi))
                                    var_8_13 = zx.d(*((zx.d(*(esi_3 + 0x21)) u>> 3) + edi))
                                    arg1 = zx.d(*((zx.d(*(esi_3 + 0x22)) u>> 3) + edi))
                                    var_10_13 = 0xff
                                case 4
                                    eax_146 = *edi
                                    goto label_633c0b
                        int32_t eax_154
                        int32_t edx_231
                        edx_231:eax_154 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_143 << 2))) - var_c_13) * ebx_4)
                        uint32_t var_c_14 = var_c_13 + (edx_231 u>> 7)
                        int32_t eax_155
                        int32_t edx_233
                        edx_233:eax_155 = mulu.dp.d(0x80808081, 
                            (zx.d(*(ebx_2 + (eax_143 << 2) + 1)) - var_8_13) * ebx_4)
                        uint32_t var_8_14 = var_8_13 + (edx_233 u>> 7)
                        int32_t eax_156
                        int32_t edx_235
                        edx_235:eax_156 =
                            mulu.dp.d(0x80808081, (zx.d(*(ebx_2 + (eax_143 << 2) + 2)) - arg1) * ebx_4)
                        arg1 += edx_235 u>> 7
                        uint32_t var_10_14 = var_10_13 + ebx_4 - var_10_13 * ebx_4 u/ 0xff
                        
                        if (eax_1 - 1 u<= 3)
                            jump((&data_6341dc)[eax_1 - 1])
                    
                    var_1c = &var_1c[1]
                    edi += eax_1
                
                ecx = var_34
            case 3
                goto label_633bb0
            case 4
                goto label_63392e
            case 5
                goto label_6336ac
            case 6
                goto label_63342a
            case 7
                goto label_6331a8
        
        var_1c = &var_1c[esi_1]
        edi += esi_2
    
    return i
}

// 函数名称: sub_62a860
// 虚拟地址: 0x62a860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_62a860(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = arg1[6]
    int32_t ecx = arg1[6]
    int32_t i = arg1[7]
    int32_t* ebx = *arg1
    int32_t esi = arg1[4]
    char* var_10 = arg1[5]
    int32_t esi_2 = arg1[9]
    void* edi = arg1[0xb]
    int32_t esi_3 = arg1[0xc]
    void* esi_4 = arg1[0xa]
    uint32_t edi_1 = zx.d(*(esi_4 + 9))
    int32_t edi_2 = arg1[0xe]
    uint32_t edi_3 = zx.d(*(arg1 + 0x3f))
    int32_t var_30 = ecx
    
    for (; i != 0; i -= 1)
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(ecx + 7)
        int32_t var_2c_1 = (eax_3 + (edx_1 & 7)) s>> 3
        
        switch (ecx & 7)
            case 0
                goto label_62ab3a
            case 1
                goto label_62a8e6
            case 2
                while (true)
                    uint32_t var_c_8
                    uint32_t var_8_8
                    uint32_t edx_230
                    
                    if (edi_1 - 1 u> 3)
                        edx_230 = 0
                        arg1 = nullptr
                        var_c_8 = 0
                        var_8_8 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_292 = zx.d(*ebx)
                                edx_230 = zx.d(*(((*(esi_4 + 0xc) & eax_292) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_292
                                var_8_8 = zx.d(*(((*(esi_4 + 0x10) & eax_292) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_8 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_300 = zx.d(*ebx)
                                edx_230 = zx.d(*(((*(esi_4 + 0xc) & eax_300) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_300
                                var_8_8 = zx.d(*(((*(esi_4 + 0x10) & eax_300) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_8 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_230 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_8 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_8 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_312 = *ebx
                                edx_230 = zx.d(*(((*(esi_4 + 0xc) & eax_312) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_312
                                var_8_8 = zx.d(*(((*(esi_4 + 0x10) & eax_312) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_8 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 == edi_2)
                        var_10 = &var_10[1]
                        ebx += edi_1
                    else
                        char* eax_324 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_324)
                        uint32_t ecx_398 = zx.d(eax_324[1])
                        uint32_t eax_325 = zx.d(eax_324[2])
                        arg1 = zx.d(((edx_230 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_402 = zx.d(((var_8_8 - ecx_398) * edi_3 u/ 0xff).b + ecx_398.b)
                        uint32_t edx_253 = zx.d(((var_c_8 - eax_325) * edi_3 u/ 0xff).b + eax_325.b)
                        int32_t eax_329
                        
                        if (esi_3 != 0)
                            eax_329.b = (((ecx_402 & 0xffffffe7) | edx_253 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_329.b
                            var_10 = &var_10[1]
                            ebx += edi_1
                        else
                            eax_329.b = arg1.b
                            eax_329.b &= 0xe3
                            uint8_t* edx_255 = var_10
                            var_10 = &var_10[1]
                            ebx += edi_1
                            *edx_255 = (((ecx_402 u>> 3).b | eax_329.b) & 0xfc) | (edx_253 u>> 6).b
                    
                label_62a8e6:
                    uint32_t var_c_1
                    uint32_t var_8_1
                    uint32_t edx_6
                    
                    if (edi_1 - 1 u> 3)
                        edx_6 = 0
                        arg1 = nullptr
                        var_c_1 = 0
                        var_8_1 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_10 = zx.d(*ebx)
                                edx_6 = zx.d(*(((*(esi_4 + 0xc) & eax_10) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_10
                                var_8_1 = zx.d(*(((*(esi_4 + 0x10) & eax_10) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_1 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_18 = zx.d(*ebx)
                                edx_6 = zx.d(*(((*(esi_4 + 0xc) & eax_18) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_18
                                var_8_1 = zx.d(*(((*(esi_4 + 0x10) & eax_18) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_1 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_6 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_1 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_1 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_30 = *ebx
                                edx_6 = zx.d(*(((*(esi_4 + 0xc) & eax_30) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_30
                                var_8_1 = zx.d(*(((*(esi_4 + 0x10) & eax_30) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_1 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 != edi_2)
                        char* eax_42 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_42)
                        uint32_t ecx_41 = zx.d(eax_42[1])
                        uint32_t eax_43 = zx.d(eax_42[2])
                        arg1 = zx.d(((edx_6 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_45 = zx.d(((var_8_1 - ecx_41) * edi_3 u/ 0xff).b + ecx_41.b)
                        uint32_t edx_29 = zx.d(((var_c_1 - eax_43) * edi_3 u/ 0xff).b + eax_43.b)
                        int32_t eax_47
                        
                        if (esi_3 != 0)
                            eax_47.b = (((ecx_45 & 0xffffffe7) | edx_29 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_47.b
                        else
                            eax_47.b = arg1.b
                            eax_47.b &= 0xe3
                            *var_10 = (((ecx_45 u>> 3).b | eax_47.b) & 0xfc) | (edx_29 u>> 6).b
                    
                    var_10 = &var_10[1]
                    ebx += edi_1
                    int32_t eax_49 = var_2c_1 - 1
                    var_2c_1 = eax_49
                    
                    if (eax_49 s<= 0)
                        break
                    
                label_62ab3a:
                    uint32_t var_c_2
                    uint32_t var_8_2
                    uint32_t edx_38
                    
                    if (edi_1 - 1 u> 3)
                        edx_38 = 0
                        arg1 = nullptr
                        var_c_2 = 0
                        var_8_2 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_52 = zx.d(*ebx)
                                edx_38 = zx.d(*(((*(esi_4 + 0xc) & eax_52) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_52
                                var_8_2 = zx.d(*(((*(esi_4 + 0x10) & eax_52) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_2 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_60 = zx.d(*ebx)
                                edx_38 = zx.d(*(((*(esi_4 + 0xc) & eax_60) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_60
                                var_8_2 = zx.d(*(((*(esi_4 + 0x10) & eax_60) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_2 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_38 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_2 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_2 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_72 = *ebx
                                edx_38 = zx.d(*(((*(esi_4 + 0xc) & eax_72) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_72
                                var_8_2 = zx.d(*(((*(esi_4 + 0x10) & eax_72) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_2 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 != edi_2)
                        char* eax_84 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_84)
                        uint32_t ecx_92 = zx.d(eax_84[1])
                        uint32_t eax_85 = zx.d(eax_84[2])
                        arg1 = zx.d(((edx_38 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_96 = zx.d(((var_8_2 - ecx_92) * edi_3 u/ 0xff).b + ecx_92.b)
                        uint32_t edx_61 = zx.d(((var_c_2 - eax_85) * edi_3 u/ 0xff).b + eax_85.b)
                        int32_t eax_89
                        
                        if (esi_3 != 0)
                            eax_89.b = (((ecx_96 & 0xffffffe7) | edx_61 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_89.b
                        else
                            eax_89.b = arg1.b
                            eax_89.b &= 0xe3
                            *var_10 = (((ecx_96 u>> 3).b | eax_89.b) & 0xfc) | (edx_61 u>> 6).b
                    
                    var_10 = &var_10[1]
                    ebx += edi_1
                label_62ad7f:
                    uint32_t var_c_3
                    uint32_t var_8_3
                    uint32_t edx_70
                    
                    if (edi_1 - 1 u> 3)
                        edx_70 = 0
                        arg1 = nullptr
                        var_c_3 = 0
                        var_8_3 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_92 = zx.d(*ebx)
                                edx_70 = zx.d(*(((*(esi_4 + 0xc) & eax_92) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_92
                                var_8_3 = zx.d(*(((*(esi_4 + 0x10) & eax_92) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_3 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_100 = zx.d(*ebx)
                                edx_70 = zx.d(*(((*(esi_4 + 0xc) & eax_100) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_100
                                var_8_3 = zx.d(*(((*(esi_4 + 0x10) & eax_100) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_3 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_70 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_3 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_3 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_112 = *ebx
                                edx_70 = zx.d(*(((*(esi_4 + 0xc) & eax_112) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_112
                                var_8_3 = zx.d(*(((*(esi_4 + 0x10) & eax_112) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_3 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 != edi_2)
                        char* eax_124 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_124)
                        uint32_t ecx_143 = zx.d(eax_124[1])
                        uint32_t eax_125 = zx.d(eax_124[2])
                        arg1 = zx.d(((edx_70 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_147 = zx.d(((var_8_3 - ecx_143) * edi_3 u/ 0xff).b + ecx_143.b)
                        uint32_t edx_93 = zx.d(((var_c_3 - eax_125) * edi_3 u/ 0xff).b + eax_125.b)
                        int32_t eax_129
                        
                        if (esi_3 != 0)
                            eax_129.b = (((ecx_147 & 0xffffffe7) | edx_93 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_129.b
                        else
                            eax_129.b = arg1.b
                            eax_129.b &= 0xe3
                            *var_10 = (((ecx_147 u>> 3).b | eax_129.b) & 0xfc) | (edx_93 u>> 6).b
                    
                    var_10 = &var_10[1]
                    ebx += edi_1
                label_62afc4:
                    uint32_t var_c_4
                    uint32_t var_8_4
                    uint32_t edx_102
                    
                    if (edi_1 - 1 u> 3)
                        edx_102 = 0
                        arg1 = nullptr
                        var_c_4 = 0
                        var_8_4 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_132 = zx.d(*ebx)
                                edx_102 = zx.d(*(((*(esi_4 + 0xc) & eax_132) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_132
                                var_8_4 = zx.d(*(((*(esi_4 + 0x10) & eax_132) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_4 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_140 = zx.d(*ebx)
                                edx_102 = zx.d(*(((*(esi_4 + 0xc) & eax_140) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_140
                                var_8_4 = zx.d(*(((*(esi_4 + 0x10) & eax_140) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_4 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_102 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_4 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_4 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_152 = *ebx
                                edx_102 = zx.d(*(((*(esi_4 + 0xc) & eax_152) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_152
                                var_8_4 = zx.d(*(((*(esi_4 + 0x10) & eax_152) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_4 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 != edi_2)
                        char* eax_164 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_164)
                        uint32_t ecx_194 = zx.d(eax_164[1])
                        uint32_t eax_165 = zx.d(eax_164[2])
                        arg1 = zx.d(((edx_102 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_198 = zx.d(((var_8_4 - ecx_194) * edi_3 u/ 0xff).b + ecx_194.b)
                        uint32_t edx_125 = zx.d(((var_c_4 - eax_165) * edi_3 u/ 0xff).b + eax_165.b)
                        int32_t eax_169
                        
                        if (esi_3 != 0)
                            eax_169.b = (((ecx_198 & 0xffffffe7) | edx_125 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_169.b
                        else
                            eax_169.b = arg1.b
                            eax_169.b &= 0xe3
                            *var_10 = (((ecx_198 u>> 3).b | eax_169.b) & 0xfc) | (edx_125 u>> 6).b
                    
                    var_10 = &var_10[1]
                    ebx += edi_1
                label_62b209:
                    uint32_t var_c_5
                    uint32_t var_8_5
                    uint32_t edx_134
                    
                    if (edi_1 - 1 u> 3)
                        edx_134 = 0
                        arg1 = nullptr
                        var_c_5 = 0
                        var_8_5 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_172 = zx.d(*ebx)
                                edx_134 = zx.d(*(((*(esi_4 + 0xc) & eax_172) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_172
                                var_8_5 = zx.d(*(((*(esi_4 + 0x10) & eax_172) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_5 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_180 = zx.d(*ebx)
                                edx_134 = zx.d(*(((*(esi_4 + 0xc) & eax_180) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_180
                                var_8_5 = zx.d(*(((*(esi_4 + 0x10) & eax_180) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_5 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_134 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_5 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_5 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_192 = *ebx
                                edx_134 = zx.d(*(((*(esi_4 + 0xc) & eax_192) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_192
                                var_8_5 = zx.d(*(((*(esi_4 + 0x10) & eax_192) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_5 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 != edi_2)
                        char* eax_204 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_204)
                        uint32_t ecx_245 = zx.d(eax_204[1])
                        uint32_t eax_205 = zx.d(eax_204[2])
                        arg1 = zx.d(((edx_134 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_249 = zx.d(((var_8_5 - ecx_245) * edi_3 u/ 0xff).b + ecx_245.b)
                        uint32_t edx_157 = zx.d(((var_c_5 - eax_205) * edi_3 u/ 0xff).b + eax_205.b)
                        int32_t eax_209
                        
                        if (esi_3 != 0)
                            eax_209.b = (((ecx_249 & 0xffffffe7) | edx_157 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_209.b
                        else
                            eax_209.b = arg1.b
                            eax_209.b &= 0xe3
                            *var_10 = (((ecx_249 u>> 3).b | eax_209.b) & 0xfc) | (edx_157 u>> 6).b
                    
                    var_10 = &var_10[1]
                    ebx += edi_1
                label_62b44e:
                    uint32_t var_c_6
                    uint32_t var_8_6
                    uint32_t edx_166
                    
                    if (edi_1 - 1 u> 3)
                        edx_166 = 0
                        arg1 = nullptr
                        var_c_6 = 0
                        var_8_6 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_212 = zx.d(*ebx)
                                edx_166 = zx.d(*(((*(esi_4 + 0xc) & eax_212) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_212
                                var_8_6 = zx.d(*(((*(esi_4 + 0x10) & eax_212) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_6 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_220 = zx.d(*ebx)
                                edx_166 = zx.d(*(((*(esi_4 + 0xc) & eax_220) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_220
                                var_8_6 = zx.d(*(((*(esi_4 + 0x10) & eax_220) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_6 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_166 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_6 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_6 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_232 = *ebx
                                edx_166 = zx.d(*(((*(esi_4 + 0xc) & eax_232) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_232
                                var_8_6 = zx.d(*(((*(esi_4 + 0x10) & eax_232) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_6 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 != edi_2)
                        char* eax_244 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_244)
                        uint32_t ecx_296 = zx.d(eax_244[1])
                        uint32_t eax_245 = zx.d(eax_244[2])
                        arg1 = zx.d(((edx_166 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_300 = zx.d(((var_8_6 - ecx_296) * edi_3 u/ 0xff).b + ecx_296.b)
                        uint32_t edx_189 = zx.d(((var_c_6 - eax_245) * edi_3 u/ 0xff).b + eax_245.b)
                        int32_t eax_249
                        
                        if (esi_3 != 0)
                            eax_249.b = (((ecx_300 & 0xffffffe7) | edx_189 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_249.b
                        else
                            eax_249.b = arg1.b
                            eax_249.b &= 0xe3
                            *var_10 = (((ecx_300 u>> 3).b | eax_249.b) & 0xfc) | (edx_189 u>> 6).b
                    
                    var_10 = &var_10[1]
                    ebx += edi_1
                label_62b693:
                    uint32_t var_c_7
                    uint32_t var_8_7
                    uint32_t edx_198
                    
                    if (edi_1 - 1 u> 3)
                        edx_198 = 0
                        arg1 = nullptr
                        var_c_7 = 0
                        var_8_7 = 0
                    else
                        switch (edi_1)
                            case 1
                                uint32_t eax_252 = zx.d(*ebx)
                                edx_198 = zx.d(*(((*(esi_4 + 0xc) & eax_252) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_252
                                var_8_7 = zx.d(*(((*(esi_4 + 0x10) & eax_252) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_7 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 2
                                uint32_t eax_260 = zx.d(*ebx)
                                edx_198 = zx.d(*(((*(esi_4 + 0xc) & eax_260) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_260
                                var_8_7 = zx.d(*(((*(esi_4 + 0x10) & eax_260) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_7 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                            case 3
                                edx_198 = zx.d(*((zx.d(*(esi_4 + 0x20)) u>> 3) + ebx))
                                var_8_7 = zx.d(*((zx.d(*(esi_4 + 0x21)) u>> 3) + ebx))
                                arg1 = nullptr
                                var_c_7 = zx.d(*((zx.d(*(esi_4 + 0x22)) u>> 3) + ebx))
                            case 4
                                int32_t* eax_272 = *ebx
                                edx_198 = zx.d(*(((*(esi_4 + 0xc) & eax_272) u>> *(esi_4 + 0x20))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1c))]))
                                arg1 = eax_272
                                var_8_7 = zx.d(*(((*(esi_4 + 0x10) & eax_272) u>> *(esi_4 + 0x21))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1d))]))
                                var_c_7 = zx.d(*(((*(esi_4 + 0x14) & arg1) u>> *(esi_4 + 0x22))
                                    + (&data_8bac68)[zx.d(*(esi_4 + 0x1e))]))
                    
                    if (arg1 != edi_2)
                        char* eax_284 = *(*(edi + 4) + 4) + (zx.d(*var_10) << 2)
                        arg1 = zx.d(*eax_284)
                        uint32_t ecx_347 = zx.d(eax_284[1])
                        uint32_t eax_285 = zx.d(eax_284[2])
                        arg1 = zx.d(((edx_198 - arg1) * edi_3 u/ 0xff).b + arg1.b)
                        uint32_t ecx_351 = zx.d(((var_8_7 - ecx_347) * edi_3 u/ 0xff).b + ecx_347.b)
                        uint32_t edx_221 = zx.d(((var_c_7 - eax_285) * edi_3 u/ 0xff).b + eax_285.b)
                        int32_t eax_289
                        
                        if (esi_3 != 0)
                            eax_289.b = (((ecx_351 & 0xffffffe7) | edx_221 u>> 3) u>> 3
                                | (arg1 & 0xffffffe0))[esi_3]
                            *var_10 = eax_289.b
                        else
                            eax_289.b = arg1.b
                            eax_289.b &= 0xe3
                            *var_10 = (((ecx_351 u>> 3).b | eax_289.b) & 0xfc) | (edx_221 u>> 6).b
                    
                    var_10 = &var_10[1]
                    ebx += edi_1
                
                ecx = var_30
            case 3
                goto label_62b693
            case 4
                goto label_62b44e
            case 5
                goto label_62b209
            case 6
                goto label_62afc4
            case 7
                goto label_62ad7f
        
        ebx += esi
        var_10 = &var_10[esi_2]
    
    return i
}

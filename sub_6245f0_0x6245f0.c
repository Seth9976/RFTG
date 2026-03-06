// 函数名称: sub_6245f0
// 虚拟地址: 0x6245f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6245f0(uint8_t* arg1)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t edx = eax[4]
    int32_t ebx = eax[6]
    int32_t edx_1 = eax[9]
    void* esi = eax[0xa]
    int32_t result_1 = eax[7]
    int32_t edx_3 = not.d(*(esi + 0x18))
    int32_t* edi = *eax
    arg1 = eax[5]
    int32_t ecx_2 = eax[0xc]
    uint32_t edx_4 = zx.d(*(esi + 9))
    int32_t eax_2 = eax[0xe] & edx_3
    int32_t var_24 = ebx
    int32_t result
    
    if (ecx_2 != 0)
        while (true)
            int32_t result_3 = result_1
            result = result_1 - 1
            result_1 = result
            
            if (result_3 == 0)
                break
            
            int32_t eax_86
            int32_t edx_39
            edx_39:eax_86 = sx.q(ebx + 7)
            int32_t var_20_1 = (eax_86 + (edx_39 & 7)) s>> 3
            
            switch (ebx & 7)
                case 0
                    goto label_624e1b
                case 1
                    goto label_624d39
                case 2
                    while (true)
                        uint32_t eax_220
                        uint32_t ecx_264
                        uint32_t edx_62
                        uint32_t ebx_81
                        
                        if (edx_4 - 1 u> 3)
                            edx_62 = 0
                            ecx_264 = 0
                            eax_220 = 0
                            ebx_81 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_62 = zx.d(*edi)
                                label_625346:
                                    eax_220 = zx.d(*(((*(esi + 0x10) & edx_62) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_264 = zx.d(*(((*(esi + 0x14) & edx_62) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ebx_81 = zx.d(*(((*(esi + 0xc) & edx_62) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    edx_62 = zx.d(*edi)
                                    goto label_625346
                                case 3
                                    ebx_81 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_220 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_62 = 0
                                    ecx_264 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_62 = *edi
                                    goto label_625346
                        
                        if ((edx_62 & edx_3) != eax_2)
                            char* eax_226
                            eax_226.b = (((eax_220 & 0xffffffe7) | ecx_264 u>> 3) u>> 3
                                | (ebx_81 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_226.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_624d39:
                        uint32_t var_8_9
                        uint32_t eax_100
                        uint32_t ecx_149
                        uint32_t edx_41
                        
                        if (edx_4 - 1 u> 3)
                            edx_41 = 0
                            ecx_149 = 0
                            eax_100 = 0
                            var_8_9 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_41 = zx.d(*edi)
                                label_624d6d:
                                    var_8_9 = zx.d(*(((*(esi + 0xc) & edx_41) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    eax_100 = zx.d(*(((*(esi + 0x10) & edx_41) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_149 = zx.d(*(((*(esi + 0x14) & edx_41) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_41 = zx.d(*edi)
                                    goto label_624d6d
                                case 3
                                    var_8_9 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_100 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_41 = 0
                                    ecx_149 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_41 = *edi
                                    goto label_624d6d
                        
                        if ((edx_41 & edx_3) != eax_2)
                            char* eax_108
                            eax_108.b = (((eax_100 & 0xffffffe7) | ecx_149 u>> 3) u>> 3
                                | (var_8_9 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_108.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                        int32_t eax_110 = var_20_1 - 1
                        var_20_1 = eax_110
                        
                        if (eax_110 s<= 0)
                            break
                        
                    label_624e1b:
                        uint32_t var_8_10
                        uint32_t eax_120
                        uint32_t ecx_166
                        uint32_t edx_44
                        
                        if (edx_4 - 1 u> 3)
                            edx_44 = 0
                            ecx_166 = 0
                            eax_120 = 0
                            var_8_10 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_44 = zx.d(*edi)
                                label_624e4f:
                                    var_8_10 = zx.d(*(((*(esi + 0xc) & edx_44) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    eax_120 = zx.d(*(((*(esi + 0x10) & edx_44) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_166 = zx.d(*(((*(esi + 0x14) & edx_44) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_44 = zx.d(*edi)
                                    goto label_624e4f
                                case 3
                                    var_8_10 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_120 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_44 = 0
                                    ecx_166 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_44 = *edi
                                    goto label_624e4f
                        
                        if ((edx_44 & edx_3) != eax_2)
                            char* eax_128
                            eax_128.b = (((eax_120 & 0xffffffe7) | ecx_166 u>> 3) u>> 3
                                | (var_8_10 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_128.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_624eee:
                        uint32_t var_8_11
                        uint32_t eax_138
                        uint32_t ecx_183
                        uint32_t edx_47
                        
                        if (edx_4 - 1 u> 3)
                            edx_47 = 0
                            ecx_183 = 0
                            eax_138 = 0
                            var_8_11 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_47 = zx.d(*edi)
                                label_624f22:
                                    var_8_11 = zx.d(*(((*(esi + 0xc) & edx_47) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                    eax_138 = zx.d(*(((*(esi + 0x10) & edx_47) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_183 = zx.d(*(((*(esi + 0x14) & edx_47) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_47 = zx.d(*edi)
                                    goto label_624f22
                                case 3
                                    var_8_11 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_138 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_47 = 0
                                    ecx_183 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_47 = *edi
                                    goto label_624f22
                        
                        if ((edx_47 & edx_3) != eax_2)
                            char* eax_146
                            eax_146.b = (((eax_138 & 0xffffffe7) | ecx_183 u>> 3) u>> 3
                                | (var_8_11 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_146.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_624fc1:
                        uint32_t eax_156
                        uint32_t ecx_200
                        uint32_t edx_50
                        uint32_t ebx_61
                        
                        if (edx_4 - 1 u> 3)
                            edx_50 = 0
                            ecx_200 = 0
                            eax_156 = 0
                            ebx_61 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_50 = zx.d(*edi)
                                label_62500a:
                                    eax_156 = zx.d(*(((*(esi + 0x10) & edx_50) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_200 = zx.d(*(((*(esi + 0x14) & edx_50) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ebx_61 = zx.d(*(((*(esi + 0xc) & edx_50) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    edx_50 = zx.d(*edi)
                                    goto label_62500a
                                case 3
                                    ebx_61 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_156 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_50 = 0
                                    ecx_200 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_50 = *edi
                                    goto label_62500a
                        
                        if ((edx_50 & edx_3) != eax_2)
                            char* eax_162
                            eax_162.b = (((eax_156 & 0xffffffe7) | ecx_200 u>> 3) u>> 3
                                | (ebx_61 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_162.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_625090:
                        uint32_t eax_172
                        uint32_t ecx_216
                        uint32_t edx_53
                        uint32_t ebx_66
                        
                        if (edx_4 - 1 u> 3)
                            edx_53 = 0
                            ecx_216 = 0
                            eax_172 = 0
                            ebx_66 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_53 = zx.d(*edi)
                                label_6250d9:
                                    eax_172 = zx.d(*(((*(esi + 0x10) & edx_53) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_216 = zx.d(*(((*(esi + 0x14) & edx_53) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ebx_66 = zx.d(*(((*(esi + 0xc) & edx_53) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    edx_53 = zx.d(*edi)
                                    goto label_6250d9
                                case 3
                                    ebx_66 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_172 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_53 = 0
                                    ecx_216 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_53 = *edi
                                    goto label_6250d9
                        
                        if ((edx_53 & edx_3) != eax_2)
                            char* eax_178
                            eax_178.b = (((eax_172 & 0xffffffe7) | ecx_216 u>> 3) u>> 3
                                | (ebx_66 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_178.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_62515f:
                        uint32_t eax_188
                        uint32_t ecx_232
                        uint32_t edx_56
                        uint32_t ebx_71
                        
                        if (edx_4 - 1 u> 3)
                            edx_56 = 0
                            ecx_232 = 0
                            eax_188 = 0
                            ebx_71 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_56 = zx.d(*edi)
                                label_6251a8:
                                    eax_188 = zx.d(*(((*(esi + 0x10) & edx_56) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_232 = zx.d(*(((*(esi + 0x14) & edx_56) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ebx_71 = zx.d(*(((*(esi + 0xc) & edx_56) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    edx_56 = zx.d(*edi)
                                    goto label_6251a8
                                case 3
                                    ebx_71 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_188 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_56 = 0
                                    ecx_232 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_56 = *edi
                                    goto label_6251a8
                        
                        if ((edx_56 & edx_3) != eax_2)
                            char* eax_194
                            eax_194.b = (((eax_188 & 0xffffffe7) | ecx_232 u>> 3) u>> 3
                                | (ebx_71 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_194.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_62522e:
                        uint32_t eax_204
                        uint32_t ecx_248
                        uint32_t edx_59
                        uint32_t ebx_76
                        
                        if (edx_4 - 1 u> 3)
                            edx_59 = 0
                            ecx_248 = 0
                            eax_204 = 0
                            ebx_76 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_59 = zx.d(*edi)
                                label_625277:
                                    eax_204 = zx.d(*(((*(esi + 0x10) & edx_59) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_248 = zx.d(*(((*(esi + 0x14) & edx_59) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                    ebx_76 = zx.d(*(((*(esi + 0xc) & edx_59) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))]))
                                case 2
                                    edx_59 = zx.d(*edi)
                                    goto label_625277
                                case 3
                                    ebx_76 = zx.d(*((zx.d(*(esi + 0x20)) u>> 3) + edi))
                                    eax_204 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    edx_59 = 0
                                    ecx_248 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_59 = *edi
                                    goto label_625277
                        
                        if ((edx_59 & edx_3) != eax_2)
                            char* eax_210
                            eax_210.b = (((eax_204 & 0xffffffe7) | ecx_248 u>> 3) u>> 3
                                | (ebx_76 & 0xffffffe0))[ecx_2]
                            *arg1 = eax_210.b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    
                    ebx = var_24
                case 3
                    goto label_62522e
                case 4
                    goto label_62515f
                case 5
                    goto label_625090
                case 6
                    goto label_624fc1
                case 7
                    goto label_624eee
            
            edi += edx
            arg1 = &arg1[edx_1]
    else
        while (true)
            int32_t result_2 = result_1
            result = result_1 - 1
            result_1 = result
            
            if (result_2 == 0)
                break
            
            int32_t eax_5
            int32_t edx_5
            edx_5:eax_5 = sx.q(ebx + 7)
            int32_t var_18_1 = (eax_5 + (edx_5 & 7)) s>> 3
            
            switch (ebx & 7)
                case 0
                    goto label_624759
                case 1
                    goto label_62467e
                case 2
                    while (true)
                        uint32_t var_8_8
                        char eax_80
                        uint32_t ecx_132
                        uint32_t edx_35
                        
                        if (edx_4 - 1 u> 3)
                            eax_80 = 0
                            edx_35 = 0
                            ecx_132 = 0
                            var_8_8 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_35 = zx.d(*edi)
                                label_624c4d:
                                    eax_80 = *(((*(esi + 0xc) & edx_35) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_8 = zx.d(*(((*(esi + 0x10) & edx_35) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_132 = zx.d(*(((*(esi + 0x14) & edx_35) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_35 = zx.d(*edi)
                                    goto label_624c4d
                                case 3
                                    var_8_8 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_80 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_35 = 0
                                    ecx_132 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_35 = *edi
                                    goto label_624c4d
                        
                        if ((edx_35 & edx_3) != eax_2)
                            *arg1 = (((var_8_8 u>> 3).b | (eax_80 & 0xe3)) & 0xfc) | (ecx_132 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_62467e:
                        uint32_t var_8_1
                        char eax_15
                        uint32_t ecx_13
                        uint32_t edx_7
                        
                        if (edx_4 - 1 u> 3)
                            eax_15 = 0
                            edx_7 = 0
                            ecx_13 = 0
                            var_8_1 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_7 = zx.d(*edi)
                                label_6246aa:
                                    eax_15 = *(((*(esi + 0xc) & edx_7) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_1 = zx.d(*(((*(esi + 0x10) & edx_7) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_13 = zx.d(*(((*(esi + 0x14) & edx_7) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_7 = zx.d(*edi)
                                    goto label_6246aa
                                case 3
                                    var_8_1 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_15 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_7 = 0
                                    ecx_13 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_7 = *edi
                                    goto label_6246aa
                        
                        if ((edx_7 & edx_3) != eax_2)
                            *arg1 = (((var_8_1 u>> 3).b | (eax_15 & 0xe3)) & 0xfc) | (ecx_13 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                        int32_t eax_20 = var_18_1 - 1
                        var_18_1 = eax_20
                        
                        if (eax_20 s<= 0)
                            break
                        
                    label_624759:
                        uint32_t var_8_2
                        char eax_26
                        uint32_t ecx_30
                        uint32_t edx_11
                        
                        if (edx_4 - 1 u> 3)
                            eax_26 = 0
                            edx_11 = 0
                            ecx_30 = 0
                            var_8_2 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_11 = zx.d(*edi)
                                label_624785:
                                    eax_26 = *(((*(esi + 0xc) & edx_11) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_2 = zx.d(*(((*(esi + 0x10) & edx_11) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_30 = zx.d(*(((*(esi + 0x14) & edx_11) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_11 = zx.d(*edi)
                                    goto label_624785
                                case 3
                                    var_8_2 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_26 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_11 = 0
                                    ecx_30 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_11 = *edi
                                    goto label_624785
                        
                        if ((edx_11 & edx_3) != eax_2)
                            *arg1 = (((var_8_2 u>> 3).b | (eax_26 & 0xe3)) & 0xfc) | (ecx_30 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_624825:
                        uint32_t var_8_3
                        char eax_35
                        uint32_t ecx_47
                        uint32_t edx_15
                        
                        if (edx_4 - 1 u> 3)
                            eax_35 = 0
                            edx_15 = 0
                            ecx_47 = 0
                            var_8_3 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_15 = zx.d(*edi)
                                label_624851:
                                    eax_35 = *(((*(esi + 0xc) & edx_15) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_3 = zx.d(*(((*(esi + 0x10) & edx_15) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_47 = zx.d(*(((*(esi + 0x14) & edx_15) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_15 = zx.d(*edi)
                                    goto label_624851
                                case 3
                                    var_8_3 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_35 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_15 = 0
                                    ecx_47 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_15 = *edi
                                    goto label_624851
                        
                        if ((edx_15 & edx_3) != eax_2)
                            *arg1 = (((var_8_3 u>> 3).b | (eax_35 & 0xe3)) & 0xfc) | (ecx_47 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_6248f1:
                        uint32_t var_8_4
                        char eax_44
                        uint32_t ecx_64
                        uint32_t edx_19
                        
                        if (edx_4 - 1 u> 3)
                            eax_44 = 0
                            edx_19 = 0
                            ecx_64 = 0
                            var_8_4 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_19 = zx.d(*edi)
                                label_62491d:
                                    eax_44 = *(((*(esi + 0xc) & edx_19) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_4 = zx.d(*(((*(esi + 0x10) & edx_19) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_64 = zx.d(*(((*(esi + 0x14) & edx_19) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_19 = zx.d(*edi)
                                    goto label_62491d
                                case 3
                                    var_8_4 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_44 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_19 = 0
                                    ecx_64 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_19 = *edi
                                    goto label_62491d
                        
                        if ((edx_19 & edx_3) != eax_2)
                            *arg1 = (((var_8_4 u>> 3).b | (eax_44 & 0xe3)) & 0xfc) | (ecx_64 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_6249bd:
                        uint32_t var_8_5
                        char eax_53
                        uint32_t ecx_81
                        uint32_t edx_23
                        
                        if (edx_4 - 1 u> 3)
                            eax_53 = 0
                            edx_23 = 0
                            ecx_81 = 0
                            var_8_5 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_23 = zx.d(*edi)
                                label_6249e9:
                                    eax_53 = *(((*(esi + 0xc) & edx_23) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_5 = zx.d(*(((*(esi + 0x10) & edx_23) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_81 = zx.d(*(((*(esi + 0x14) & edx_23) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_23 = zx.d(*edi)
                                    goto label_6249e9
                                case 3
                                    var_8_5 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_53 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_23 = 0
                                    ecx_81 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_23 = *edi
                                    goto label_6249e9
                        
                        if ((edx_23 & edx_3) != eax_2)
                            *arg1 = (((var_8_5 u>> 3).b | (eax_53 & 0xe3)) & 0xfc) | (ecx_81 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_624a89:
                        uint32_t var_8_6
                        char eax_62
                        uint32_t ecx_98
                        uint32_t edx_27
                        
                        if (edx_4 - 1 u> 3)
                            eax_62 = 0
                            edx_27 = 0
                            ecx_98 = 0
                            var_8_6 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_27 = zx.d(*edi)
                                label_624ab5:
                                    eax_62 = *(((*(esi + 0xc) & edx_27) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_6 = zx.d(*(((*(esi + 0x10) & edx_27) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_98 = zx.d(*(((*(esi + 0x14) & edx_27) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_27 = zx.d(*edi)
                                    goto label_624ab5
                                case 3
                                    var_8_6 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_62 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_27 = 0
                                    ecx_98 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_27 = *edi
                                    goto label_624ab5
                        
                        if ((edx_27 & edx_3) != eax_2)
                            *arg1 = (((var_8_6 u>> 3).b | (eax_62 & 0xe3)) & 0xfc) | (ecx_98 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    label_624b55:
                        uint32_t var_8_7
                        char eax_71
                        uint32_t ecx_115
                        uint32_t edx_31
                        
                        if (edx_4 - 1 u> 3)
                            eax_71 = 0
                            edx_31 = 0
                            ecx_115 = 0
                            var_8_7 = 0
                        else
                            switch (edx_4)
                                case 1
                                    edx_31 = zx.d(*edi)
                                label_624b81:
                                    eax_71 = *(((*(esi + 0xc) & edx_31) u>> *(esi + 0x20))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1c))])
                                    var_8_7 = zx.d(*(((*(esi + 0x10) & edx_31) u>> *(esi + 0x21))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1d))]))
                                    ecx_115 = zx.d(*(((*(esi + 0x14) & edx_31) u>> *(esi + 0x22))
                                        + (&data_8bac68)[zx.d(*(esi + 0x1e))]))
                                case 2
                                    edx_31 = zx.d(*edi)
                                    goto label_624b81
                                case 3
                                    var_8_7 = zx.d(*((zx.d(*(esi + 0x21)) u>> 3) + edi))
                                    eax_71 = *((zx.d(*(esi + 0x20)) u>> 3) + edi)
                                    edx_31 = 0
                                    ecx_115 = zx.d(*((zx.d(*(esi + 0x22)) u>> 3) + edi))
                                case 4
                                    edx_31 = *edi
                                    goto label_624b81
                        
                        if ((edx_31 & edx_3) != eax_2)
                            *arg1 = (((var_8_7 u>> 3).b | (eax_71 & 0xe3)) & 0xfc) | (ecx_115 u>> 6).b
                        
                        arg1 = &arg1[1]
                        edi += edx_4
                    
                    ebx = var_24
                case 3
                    goto label_624b55
                case 4
                    goto label_624a89
                case 5
                    goto label_6249bd
                case 6
                    goto label_6248f1
                case 7
                    goto label_624825
            
            edi += edx
            arg1 = &arg1[edx_1]
    
    return result
}

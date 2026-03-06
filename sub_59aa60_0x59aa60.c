// 函数名称: sub_59aa60
// 虚拟地址: 0x59aa60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59aa60(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = *arg1
    char var_40d = 0
    char var_40e = 0
    int32_t var_41c = 0
    uint32_t var_42c = 0
    uint32_t var_424 = 0
    int32_t var_418 = 1
    uint32_t var_428 = 0
    int32_t var_430 = 0
    arg1[2] = 0
    arg1[1] = 0
    arg1[3] = 0
    
    if (sub_599c80(esi) != 0)
        while (true)
            uint32_t edi_3 = (sub_5959c0(esi) << 0x10) + sub_5959c0(esi)
            uint32_t eax_6 = sub_5959c0(esi)
            uint32_t eax_8 = sub_5959c0(esi) + (eax_6 << 0x10)
            char var_438[0x4]
            char var_40c[0x404]
            
            if (eax_8 u> 0x49484452)
                var_409
                
                if (eax_8 == 0x504c5445)
                    if (var_418 == 0)
                        uint32_t edx_17
                        
                        if (edi_3 u<= 0x300)
                            edx_17 = edi_3 u/ 3
                            var_424 = edx_17
                        
                        if (edi_3 u> 0x300 || edx_17 * 3 != edi_3)
                            data_273ac1c = "invalid PLTE"
                            break
                        
                        int32_t edi_20 = 0
                        
                        if (edx_17 != 0)
                            do
                                char* eax_86 = esi[0x2a]
                                char eax_88
                                char ecx_1
                                
                                if (eax_86 u< esi[0x2b])
                                    ecx_1 = *eax_86
                                    esi[0x2a] = &eax_86[1]
                                    eax_88 = ecx_1
                                else if (esi[8] == 0)
                                    eax_88 = 0
                                else
                                    int32_t eax_90 = esi[4](esi[7], &esi[0xa], esi[9])
                                    
                                    if (eax_90 != 0)
                                        esi[0x2a] = &esi[0xa]
                                        esi[0x2b] = &esi[0xa] + eax_90
                                    else
                                        esi[8] = eax_90
                                        char* eax_92 = esi[0x2b] - 1
                                        esi[0x2a] = eax_92
                                        *eax_92 = 0
                                    
                                    char* eax_93 = esi[0x2a]
                                    ecx_1 = *eax_93
                                    edx_17 = var_424
                                    esi[0x2a] = &eax_93[1]
                                    eax_88 = ecx_1
                                
                                var_40c[edi_20 << 2] = eax_88
                                char* eax_95 = esi[0x2a]
                                char eax_97
                                
                                if (eax_95 u< esi[0x2b])
                                    ecx_1 = *eax_95
                                    esi[0x2a] = &eax_95[1]
                                    eax_97 = ecx_1
                                else if (esi[8] == 0)
                                    eax_97 = 0
                                else
                                    int32_t eax_99 = esi[4](esi[7], &esi[0xa], esi[9])
                                    
                                    if (eax_99 != 0)
                                        esi[0x2a] = &esi[0xa]
                                        esi[0x2b] = &esi[0xa] + eax_99
                                    else
                                        esi[8] = eax_99
                                        char* eax_101 = esi[0x2b] - 1
                                        esi[0x2a] = eax_101
                                        *eax_101 = 0
                                    
                                    char* eax_102 = esi[0x2a]
                                    ecx_1 = *eax_102
                                    edx_17 = var_424
                                    esi[0x2a] = &eax_102[1]
                                    eax_97 = ecx_1
                                
                                var_40b
                                *(&var_40b + (edi_20 << 2)) = eax_97
                                char* eax_104 = esi[0x2a]
                                char eax_106
                                
                                if (eax_104 u< esi[0x2b])
                                    ecx_1 = *eax_104
                                    esi[0x2a] = &eax_104[1]
                                    eax_106 = ecx_1
                                else if (esi[8] == 0)
                                    eax_106 = 0
                                else
                                    int32_t eax_108 = esi[4](esi[7], &esi[0xa], esi[9])
                                    
                                    if (eax_108 != 0)
                                        esi[0x2a] = &esi[0xa]
                                        esi[0x2b] = &esi[0xa] + eax_108
                                    else
                                        esi[8] = eax_108
                                        char* eax_110 = esi[0x2b] - 1
                                        esi[0x2a] = eax_110
                                        *eax_110 = 0
                                    
                                    char* eax_111 = esi[0x2a]
                                    ecx_1 = *eax_111
                                    edx_17 = var_424
                                    esi[0x2a] = &eax_111[1]
                                    eax_106 = ecx_1
                                
                                var_40a
                                *(&var_40a + (edi_20 << 2)) = eax_106
                                *(&var_409 + (edi_20 << 2)) = 0xff
                                edi_20 += 1
                            while (edi_20 u< edx_17)
                        
                        goto label_59b30f
                else if (eax_8 != 0x74524e53)
                label_59afc7:
                    
                    if (var_418 == 0)
                        if ((eax_8 & 0x20000000) != 0)
                            sub_5958f0(esi, edi_3)
                            sub_5959c0(esi)
                            sub_5959c0(esi)
                            continue
                        
                        (*"XXXX chunk not known")[0] = (eax_8 u>> 0x18).b
                        (*"X chunk not known")[0] = eax_8.b
                        (*"XXX chunk not known")[0] = (eax_8 u>> 0x10).b
                        (*"XX chunk not known")[0] = (eax_8 u>> 8).b
                        data_273ac1c = "XXXX chunk not known"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                else if (var_418 == 0)
                    if (arg1[1] != 0)
                        data_273ac1c = "tRNS after IDAT"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    if (var_40d == 0)
                        int32_t eax_82 = esi[2]
                        
                        if ((eax_82.b & 1) == 0)
                            data_273ac1c = "tRNS with alpha"
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (edi_3 == eax_82 * 2)
                            int32_t i = 0
                            var_40e = 1
                            
                            if (eax_82 s<= 0)
                                goto label_59b30f
                            
                            do
                                var_438[i] = sub_5959c0(esi)
                                i += 1
                            while (i s< esi[2])
                            
                            sub_5959c0(esi)
                            sub_5959c0(esi)
                            continue
                    else
                        if (arg2 == 2)
                            esi[2] = 4
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 1
                        
                        if (var_424 == 0)
                            data_273ac1c = "tRNS before PLTE"
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        if (edi_3 u<= var_424)
                            int32_t ecx_23 = 0
                            var_40d = 4
                            int32_t var_414_3 = 0
                            
                            if (edi_3 == 0)
                                goto label_59b30f
                            
                            do
                                char* eax_73 = esi[0x2a]
                                char eax_75
                                
                                if (eax_73 u< esi[0x2b])
                                    char edx_1 = *eax_73
                                    esi[0x2a] = &eax_73[1]
                                    eax_75 = edx_1
                                else if (esi[8] == 0)
                                    eax_75 = 0
                                else
                                    int32_t eax_77 = esi[4](esi[7], &esi[0xa], esi[9])
                                    
                                    if (eax_77 != 0)
                                        esi[0x2a] = &esi[0xa]
                                        esi[0x2b] = &esi[0xa] + eax_77
                                    else
                                        esi[8] = eax_77
                                        char* eax_79 = esi[0x2b] - 1
                                        esi[0x2a] = eax_79
                                        *eax_79 = 0
                                    
                                    char* eax_80 = esi[0x2a]
                                    char ecx_25 = *eax_80
                                    esi[0x2a] = &eax_80[1]
                                    eax_75 = ecx_25
                                    ecx_23 = var_414_3
                                
                                *(&var_409 + (ecx_23 << 2)) = eax_75
                                ecx_23 += 1
                                var_414_3 = ecx_23
                            while (ecx_23 u< edi_3)
                            
                            sub_5959c0(esi)
                            sub_5959c0(esi)
                            continue
                    
                    data_273ac1c = "bad tRNS len"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
            else if (eax_8 == 0x49484452)
                if (var_418 == 0)
                    data_273ac1c = "multiple IHDR"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
                
                var_418 = 0
                
                if (edi_3 != 0xd)
                    data_273ac1c = "bad IHDR len"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
                
                uint32_t eax_19 = sub_5959c0(esi)
                uint32_t eax_21 = sub_5959c0(esi) + (eax_19 << 0x10)
                *esi = eax_21
                
                if (eax_21 u> 0x1000000)
                label_59af98:
                    data_273ac1c = "too large"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
                
                uint32_t eax_22 = sub_5959c0(esi)
                uint32_t eax_24 = sub_5959c0(esi) + (eax_22 << 0x10)
                esi[1] = eax_24
                
                if (eax_24 u> 0x1000000)
                    goto label_59af98
                
                char* eax_25 = esi[0x2a]
                
                if (eax_25 u>= esi[0x2b])
                    if (esi[8] == 0)
                    label_59b51f:
                        data_273ac1c = "8bit only"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    int32_t eax_27 = esi[4](esi[7], &esi[0xa], esi[9])
                    
                    if (eax_27 != 0)
                        esi[0x2a] = &esi[0xa]
                        esi[0x2b] = &esi[0xa] + eax_27
                    else
                        char* eax_29 = esi[0x2b] - 1
                        esi[8] = 0
                        esi[0x2a] = eax_29
                        *eax_29 = 0
                    
                    eax_25 = esi[0x2a]
                    goto label_59ad29
                
            label_59ad29:
                uint32_t ecx_11 = zx.d(*eax_25)
                esi[0x2a] = &eax_25[1]
                
                if (ecx_11 != 8)
                    goto label_59b51f
                
                uint32_t var_414_2
                uint32_t eax_32
                
                if (&eax_25[1] u>= esi[0x2b])
                    if (esi[8] != 0)
                        int32_t eax_34 = esi[4](esi[7], &esi[0xa], esi[9])
                        
                        if (eax_34 != 0)
                            esi[0x2a] = &esi[0xa]
                            esi[0x2b] = &esi[0xa] + eax_34
                        else
                            char* eax_36 = esi[0x2b] - 1
                            esi[8] = 0
                            esi[0x2a] = eax_36
                            *eax_36 = 0
                        
                        char* eax_37 = esi[0x2a]
                        ecx_11 = zx.d(*eax_37)
                        esi[0x2a] = &eax_37[1]
                        var_414_2 = ecx_11
                        eax_32 = ecx_11
                        goto label_59ad56
                    
                    var_414_2 = 0
                    eax_32 = 0
                label_59adcf:
                    
                    if ((eax_32.b & 1) != 0)
                        goto label_59b53c
                else
                    ecx_11.b = eax_25[1]
                    esi[0x2a] = &eax_25[2]
                    eax_32 = zx.d(ecx_11.b)
                    var_414_2 = eax_32
                label_59ad56:
                    
                    if (eax_32 s> 6)
                    label_59b53c:
                        data_273ac1c = "bad ctype"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    if (eax_32 != 3)
                        goto label_59adcf
                    
                    var_40d = eax_32.b
                char* eax_43 = esi[0x2a]
                
                if (eax_43 u< esi[0x2b])
                label_59ae2a:
                    ecx_11.b = *eax_43
                    esi[0x2a] = &eax_43[1]
                    
                    if (zx.d(ecx_11.b) != 0)
                        data_273ac1c = "bad comp method"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                else if (esi[8] != 0)
                    int32_t eax_40
                    eax_40, ecx_11 = esi[4](esi[7], &esi[0xa], esi[9])
                    
                    if (eax_40 != 0)
                        esi[0x2a] = &esi[0xa]
                        esi[0x2b] = &esi[0xa] + eax_40
                    else
                        char* eax_42 = esi[0x2b] - 1
                        esi[8] = 0
                        esi[0x2a] = eax_42
                        *eax_42 = 0
                    
                    eax_43 = esi[0x2a]
                    goto label_59ae2a
                
                char* eax_50 = esi[0x2a]
                
                if (eax_50 u< esi[0x2b])
                label_59ae91:
                    ecx_11.b = *eax_50
                    esi[0x2a] = &eax_50[1]
                    
                    if (zx.d(ecx_11.b) != 0)
                        data_273ac1c = "bad filter method"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                else if (esi[8] != 0)
                    int32_t eax_47
                    eax_47, ecx_11 = esi[4](esi[7], &esi[0xa], esi[9])
                    
                    if (eax_47 != 0)
                        esi[0x2a] = &esi[0xa]
                        esi[0x2b] = &esi[0xa] + eax_47
                    else
                        char* eax_49 = esi[0x2b] - 1
                        esi[8] = 0
                        esi[0x2a] = eax_49
                        *eax_49 = 0
                    
                    eax_50 = esi[0x2a]
                    goto label_59ae91
                
                char* eax_57 = esi[0x2a]
                
                if (eax_57 u< esi[0x2b])
                label_59aefc:
                    ecx_11.b = *eax_57
                    esi[0x2a] = &eax_57[1]
                    uint32_t eax_59 = zx.d(ecx_11.b)
                    var_428 = eax_59
                    
                    if (eax_59 s> 1)
                        data_273ac1c = "bad interlace method"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                else
                    if (esi[8] != 0)
                        int32_t eax_54
                        eax_54, ecx_11 = esi[4](esi[7], &esi[0xa], esi[9])
                        
                        if (eax_54 != 0)
                            esi[0x2a] = &esi[0xa]
                            esi[0x2b] = &esi[0xa] + eax_54
                        else
                            char* eax_56 = esi[0x2b] - 1
                            esi[8] = 0
                            esi[0x2a] = eax_56
                            *eax_56 = 0
                        
                        eax_57 = esi[0x2a]
                        goto label_59aefc
                    
                    var_428 = 0
                
                int32_t ebx_4 = *esi
                int32_t edi_19
                
                if (ebx_4 != 0)
                    edi_19 = esi[1]
                
                if (ebx_4 == 0 || edi_19 == 0)
                    data_273ac1c = "0-pixel image"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
                
                int32_t edx_10 = 0
                
                if (var_40d != 0)
                    esi[2] = 1
                    
                    if (divu.dp.d(edx_10:0x40000000, ebx_4) u>> 2 u< edi_19)
                        goto label_59af98
                    
                label_59b30f:
                    sub_5959c0(esi)
                    sub_5959c0(esi)
                    continue
                
                int32_t ecx_20 = (var_414_2 u>> 2 & 1) + ((var_414_2 & 2) | 1)
                esi[2] = ecx_20
                
                if (divu.dp.d(0:(divu.dp.d(edx_10:0x40000000, ebx_4)), ecx_20) u< edi_19)
                    goto label_59af98
                
                if (arg2 == 2)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 1
                
                sub_5959c0(esi)
                sub_5959c0(esi)
                continue
            else if (eax_8 == 0x43674249)
                var_430 = data_307b5c4
                
                if (esi[4] != 0)
                    int32_t ecx_8 = esi[0x2b]
                    int32_t eax_17 = ecx_8 - esi[0x2a]
                    
                    if (eax_17 s< edi_3)
                        int32_t edx_4 = esi[7]
                        int32_t eax_18 = esi[5]
                        esi[0x2a] = ecx_8
                        eax_18(edx_4, edi_3 - eax_17)
                        sub_5959c0(esi)
                        sub_5959c0(esi)
                        continue
                
                esi[0x2a] += edi_3
                sub_5959c0(esi)
                sub_5959c0(esi)
                continue
            else if (eax_8 != 0x49444154)
                if (eax_8 != 0x49454e44)
                    goto label_59afc7
                
                if (var_418 == 0)
                    if (arg2 != 0)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 1
                    
                    int32_t ecx_32 = arg1[1]
                    
                    if (ecx_32 == 0)
                        data_273ac1c = "no IDAT"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    int32_t edx_21
                    edx_21.b = var_430 == 0
                    int32_t eax_114 = sub_599bc0(eax_8, var_41c, ecx_32, edx_21)
                    arg1[2] = eax_114
                    
                    if (eax_114 != 0)
                        __free_base(arg1[1])
                        arg1[1] = 0
                        int32_t eax_116 = esi[2]
                        
                        if (eax_116 != 0xffffffff)
                            if (var_40e == 0)
                                esi[3] = eax_116
                            else
                                esi[3] = eax_116 + 1
                        else if (var_40d == (eax_116 + 1).b || var_40e != 0)
                            esi[3] = eax_116 + 1
                        else
                            esi[3] = eax_116
                        
                        int32_t eax_117
                        int32_t ecx_38
                        eax_117, ecx_38 =
                            sub_59a5b0(eax_116, var_41c, arg1[2], esi[3], arg1, var_41c, var_428)
                        
                        if (eax_117 != 0)
                            if (var_40e == 0)
                            label_59b415:
                                
                                if (var_430 != 0 && esi[3] s> 2)
                                    sub_59a9b0(arg1)
                                
                                eax_117.b = var_40d
                                void* eax_120
                                
                                if (eax_117.b != 0)
                                    uint32_t eax_119 = zx.d(eax_117.b)
                                    esi[2] = eax_119
                                    esi[3] = eax_119
                                    eax_120 = sub_59a8d0(&var_40c, arg1, eax_119)
                                
                                if (eax_117.b == 0 || eax_120 != 0)
                                    __free_base(arg1[2])
                                    arg1[2] = 0
                                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                                    return 1
                            else
                                int32_t eax_118 = esi[3]
                                int32_t var_448_16 = eax_118
                                
                                if (sub_59a860(eax_118, arg1, &var_438, ecx_38) != 0)
                                    goto label_59b415
                    
                    break
            else if (var_418 == 0)
                eax_8.b = var_40d
                
                if (eax_8.b != 0 && var_424 == 0)
                    data_273ac1c = "no PLTE"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
                
                if (arg2 == 2)
                    esi[2] = zx.d(eax_8.b)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 1
                
                int32_t ecx_4 = edi_3 + var_41c
                uint32_t eax_11 = var_42c
                int32_t* ebx_3
                
                if (ecx_4 u<= eax_11)
                    ebx_3 = arg1
                else
                    if (eax_11 == 0)
                        eax_11 = edi_3
                        
                        if (edi_3 u<= 0x1000)
                            eax_11 = 0x1000
                        
                        var_42c = eax_11
                    
                    if (ecx_4 u> eax_11)
                        do
                            eax_11 *= 2
                        while (ecx_4 u> eax_11)
                        
                        var_42c = eax_11
                    
                    ebx_3 = arg1
                    int32_t eax_12 = _realloc(ebx_3[1], eax_11)
                    
                    if (eax_12 == 0)
                        data_273ac1c = "outofmem"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    ebx_3[1] = eax_12
                
                int128_t* edx_3 = ebx_3[1] + var_41c
                int128_t* var_448_2 = edx_3
                
                if (sub_595930(edi_3, esi, edx_3) == 0)
                    data_273ac1c = "outofdata"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
                
                var_41c = ecx_4
                sub_5959c0(esi)
                sub_5959c0(esi)
                continue
            data_273ac1c = "first not IHDR"
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

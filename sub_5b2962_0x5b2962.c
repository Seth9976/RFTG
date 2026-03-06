// 函数名称: sub_5b2962
// 虚拟地址: 0x5b2962
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b2962(int32_t* arg1, int32_t* arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_8e8 = edi
    void* var_858 = arg4
    int32_t var_8bc = 0
    int32_t* var_854 = nullptr
    int32_t* var_8a4 = nullptr
    int32_t var_8b8 = 0
    int32_t var_8ac = 0
    void var_880
    sub_5a73dd(&var_880, arg3)
    int32_t var_864 = 0xffffffff
    char* var_89c = nullptr
    void* eax_3 = __errno()
    uint32_t result
    void* var_878
    char var_874
    
    if (arg1 != 0)
        if ((arg1[3].b & 0x40) == 0)
            int32_t eax_6 = __fileno(arg1)
            void* ecx_5
            
            if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe)
                ecx_5 = &data_8b8ea8
            else
                ecx_5 = ((eax_6 & 0x1f) << 6) + (&data_3166ee0)[eax_6 s>> 5]
            
            if ((*(ecx_5 + 0x24) & 0x7f) != 0)
                goto label_5b29de
            
            void* eax_9
            
            if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe)
                eax_9 = &data_8b8ea8
            else
                eax_9 = ((eax_6 & 0x1f) << 6) + (&data_3166ee0)[eax_6 s>> 5]
            
            if ((*(eax_9 + 0x24) & 0x80) != 0 || arg2 == 0)
                goto label_5b29de
        else if (arg2 == 0)
            goto label_5b29de
        
        uint32_t result_1 = 0
        char* var_8dc_1 = arg2
        int32_t var_868_1 = 0
        
        while (var_868_1 != 1 || var_864 != 0)
            int32_t var_898_1 = 0xffffffff
            int32_t var_870_1 = 0xffffffff
            var_864 = 0xffffffff
            uint32_t i_11 = 0
            int32_t* ebx
            ebx.b = *var_8dc_1
            uint32_t i_9 = 0
            char* var_8b4_1 = nullptr
            uint32_t i_10 = 0
            uint32_t i_5 = 0
            char var_860_1 = ebx.b
            
            if (ebx.b != 0)
                char* edi_1 = var_8dc_1
                
                while (true)
                    void* edi_2 = &edi_1[1]
                    void* var_888_1 = edi_2
                    void var_64c
                    
                    if (result_1 s>= 0)
                        int32_t eax_14
                        uint32_t edx_1
                        
                        if (ebx.b - 0x20 u> 0x58)
                            edx_1 = 0
                            eax_14 = 0
                        else
                            eax_14 = zx.d(*(sx.d(ebx.b) + &data_6b2728)) & 0xf
                            edx_1 = 0
                        
                        uint32_t i_7 = zx.d(*(eax_14 * 9 + i_9 + 0x6b2748)) u>> 4
                        i_9 = i_7
                        
                        if (i_7 == 1)
                            if (*edi_2 != 0x25)
                                if (var_864 != 0xffffffff)
                                    goto label_5b2ba4
                                
                                if (sub_5a82a5(edi_2, &var_89c, 0xa) s> 0 && *var_89c == 0x24)
                                    void var_650
                                    
                                    if (var_868_1 == 0)
                                        sub_5abfc0(&var_650, 0, 0x640)
                                    var_864 = 1
                                    goto label_5b2bb6
                                
                                var_864 = 0
                                edx_1 = 0
                            label_5b2ba4:
                                
                                if (var_864 == 1)
                                label_5b2bb6:
                                    int32_t eax_19 = sub_5a82a5(edi_2, &var_89c, 0xa)
                                    char* ecx_9 = var_89c
                                    var_870_1 = eax_19 - 1
                                    var_888_1 = &ecx_9[1]
                                    
                                    if (var_868_1 == 0)
                                        if (eax_19 - 1 s< 0)
                                            goto label_5b29de
                                        
                                        if (*ecx_9 != 0x24)
                                            goto label_5b29de
                                        
                                        if (eax_19 - 1 s>= 0x64)
                                            goto label_5b29de
                                        
                                        if (eax_19 - 1 s> var_898_1)
                                            var_898_1 = eax_19 - 1
                                    
                                    edi_2 = &ecx_9[1]
                                    edx_1 = 0
                            
                            goto label_5b2c09
                        
                        if (i_7 == 8)
                            goto label_5b29de
                        
                        if (i_7 u<= 7)
                        label_5b2c09:
                            int32_t var_8f4_5
                            char var_8f0_4
                            int32_t* var_8ec_2
                            int32_t var_8cc
                            void var_648
                            void var_644
                            int32_t eax_25
                            char* ecx_10
                            void* ecx_11
                            
                            switch (i_9)
                                case 0
                                    if ((var_868_1 != 0 || var_864 != 1)
                                            && (var_868_1 != 1 || var_864 != 0xffffffff))
                                        goto label_5b2f47
                                case 1
                                    i_5 = 0xffffffff
                                    var_8cc = 0
                                    var_8b8 = 0
                                    i_10 = 0
                                    var_8a4 = nullptr
                                    var_854 = nullptr
                                    var_8ac = 0
                                case 2
                                    int32_t eax_21 = sx.d(ebx.b)
                                    
                                    if (eax_21 == 0x20)
                                        var_854 |= 2
                                    else if (eax_21 == 0x23)
                                        var_854 |= 0x80
                                    else if (eax_21 == 0x2b)
                                        var_854 |= 1
                                    else if (eax_21 == 0x2d)
                                        var_854 |= 4
                                    else if (eax_21 == 0x30)
                                        var_854 |= 8
                                case 3
                                    if (ebx.b != 0x2a)
                                        i_10 = i_10 * 0xa + sx.d(ebx.b) - 0x30
                                    else if (var_864 != 0)
                                        int32_t eax_24 = sub_5a82a5(edi_2, &var_89c, 0xa)
                                        ecx_10 = var_89c
                                        eax_25 = eax_24 - 1
                                        var_888_1 = &ecx_10[1]
                                        
                                        if (var_868_1 != 0)
                                            i_7 = **(&var_64c + eax_25 * 0x10)
                                            goto label_5b2d93
                                        
                                    label_5b2d3a:
                                        
                                        if (eax_25 s< 0)
                                            goto label_5b29de
                                        
                                        if (*ecx_10 != 0x24)
                                            goto label_5b29de
                                        
                                        if (var_870_1 s>= 0x64)
                                            goto label_5b29de
                                        
                                        if (eax_25 s> var_898_1)
                                            var_898_1 = eax_25
                                        
                                        i_7 = eax_25 * 2
                                        ecx_11 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                        
                                        if (*ecx_11 == 0)
                                            *ecx_11 = 1
                                            *(&var_648 + (i_7 << 3)) = 0x2a
                                            *(&var_644 + (i_7 << 3)) = var_854
                                        else
                                            var_8ec_2 = var_854
                                            var_8f0_4 = 0x2a
                                            var_8f4_5 = 1
                                        label_5b33ba:
                                            
                                            if (sub_5b27d5(ecx_11, var_8f4_5, var_8f0_4, var_8ec_2)
                                                    == 0)
                                                goto label_5b29de
                                    else
                                        var_858 += 4
                                        i_7 = *(var_858 - 4)
                                    label_5b2d93:
                                        i_10 = i_7
                                        
                                        if (i_7 s< 0)
                                            var_854 |= 4
                                            i_10 = neg.d(i_10)
                                case 4
                                    i_5 = 0
                                case 5
                                    if (ebx.b != 0x2a)
                                        i_5 = i_5 * 0xa + sx.d(ebx.b) - 0x30
                                    else
                                        if (var_864 != 0)
                                            int32_t eax_31 = sub_5a82a5(edi_2, &var_89c, 0xa)
                                            ecx_10 = var_89c
                                            eax_25 = eax_31 - 1
                                            var_888_1 = &ecx_10[1]
                                            
                                            if (var_868_1 == 0)
                                                goto label_5b2d3a
                                            
                                            i_7 = **(&var_64c + eax_25 * 0x10)
                                        else
                                            var_858 += 4
                                            i_7 = *(var_858 - 4)
                                        
                                        i_5 = i_7
                                        
                                        if (i_7 s< 0)
                                            i_5 = 0xffffffff
                                case 6
                                    if (ebx.b == 0x49)
                                        i_7.b = *edi_2
                                        
                                        if (i_7.b == 0x36 && *(edi_2 + 1) == 0x34)
                                            var_854 |= 0x8000
                                            var_888_1 = edi_2 + 2
                                        else if (i_7.b == 0x33 && *(edi_2 + 1) == 0x32)
                                            var_854 &= 0xffff7fff
                                            var_888_1 = edi_2 + 2
                                        else if (i_7.b == 0x64 || i_7.b == 0x69 || i_7.b == 0x6f
                                                || i_7.b == 0x75 || i_7.b == 0x78 || i_7.b == 0x58)
                                            var_854 |= 0x10000
                                        else
                                            i_9 = 0
                                        label_5b2f47:
                                            var_8ac = 0
                                            uint32_t eax_37
                                            int32_t edx_5
                                            eax_37, edx_5 = sub_5aec60(ebx.b, &var_880)
                                            
                                            if (eax_37 != 0)
                                                eax_37.b = ebx.b
                                                eax_37, edx_5 =
                                                    sub_5ad514(eax_37, edx_5, arg1, &result_1)
                                                eax_37.b = *edi_2
                                                char var_860_2 = eax_37.b
                                                var_888_1 = edi_2 + 1
                                                
                                                if (eax_37.b == 0)
                                                    goto label_5b29de
                                                
                                                ebx.b = eax_37.b
                                            
                                            eax_37.b = ebx.b
                                            sub_5ad514(eax_37, edx_5, arg1, &result_1)
                                    else if (ebx.b == 0x68)
                                        var_854 |= 0x20
                                    else if (ebx.b == 0x6c)
                                        if (*edi_2 != 0x6c)
                                            var_854 |= 0x10
                                        else
                                            var_854 |= 0x1000
                                            var_888_1 = edi_2 + 1
                                    else if (ebx.b == 0x77)
                                        var_854 |= 0x800
                                case 7
                                    i_7 = sx.d(ebx.b)
                                    int32_t var_8f4_7
                                    char var_8f0_7
                                    int32_t* var_8ec_4
                                    char var_890
                                    char* var_86c
                                    int32_t* ecx_18
                                    
                                    if (i_7 s> 0x64)
                                        if (i_7 s> 0x70)
                                            if (i_7 != 0x73)
                                                if (i_7 == 0x75)
                                                    goto label_5b3352
                                                
                                                if (i_7 != 0x78)
                                                    goto label_5b39a3
                                                
                                                var_8bc = 0x27
                                                edx_1 = 0
                                                goto label_5b359c
                                            
                                        label_5b302b:
                                            uint32_t i = i_5
                                            
                                            if (i == 0xffffffff)
                                                i = 0x7fffffff
                                            
                                            char* eax_45
                                            
                                            if (var_864 != 0)
                                                if (var_870_1 u> 0x63)
                                                    goto label_5b29de
                                                
                                                i_7 = var_870_1 * 2
                                                
                                                if (var_868_1 == 0)
                                                    goto label_5b3900
                                                
                                                eax_45 = **(&var_64c + (i_7 << 3))
                                            else
                                                var_858 += 4
                                                eax_45 = *(var_858 - 4)
                                            
                                            var_86c = eax_45
                                            
                                            if ((var_854 & 0x810) == 0)
                                                if (var_86c == 0)
                                                    var_86c = data_8b8528
                                                
                                                char* eax_117 = var_86c
                                                
                                                while (i != 0)
                                                    i -= 1
                                                    
                                                    if (*eax_117 == 0)
                                                        break
                                                    
                                                    eax_117 = &eax_117[1]
                                                
                                                i_7 = eax_117 - var_86c
                                            else
                                                if (eax_45 == 0)
                                                    var_86c = data_8b852c
                                                
                                                char* eax_114 = var_86c
                                                var_8ac = 1
                                                
                                                while (i != 0)
                                                    i -= 1
                                                    
                                                    if (*eax_114 == 0)
                                                        break
                                                    
                                                    eax_114 = &eax_114[2]
                                                
                                                i_7 = (eax_114 - var_86c) s>> 1
                                            
                                            goto label_5b399d
                                        
                                        int32_t var_8a8_1
                                        
                                        if (i_7 == 0x70)
                                            i_5 = 8
                                        label_5b3560:
                                            var_8bc = 7
                                        label_5b359c:
                                            var_8a8_1 = 0x10
                                            
                                            if ((var_854.b & 0x80) != 0)
                                                i_7.b = var_8bc.b
                                                i_7.b += 0x51
                                                var_890 = 0x30
                                                char var_88f_1 = i_7.b
                                                var_8a4 = 2
                                            
                                            goto label_5b35c7
                                        
                                        if (i_7 s< 0x65)
                                            goto label_5b39a3
                                        
                                        if (i_7 s<= 0x67)
                                            goto label_5b3366
                                        
                                        if (i_7 != 0x69)
                                            if (i_7 == 0x6e)
                                                edx_1 = 0
                                                int16_t* esi_5
                                                
                                                if (var_864 != 0)
                                                    if (var_870_1 u> 0x63)
                                                        goto label_5b29de
                                                    
                                                    i_7 = var_870_1 * 2
                                                    
                                                    if (var_868_1 == 0)
                                                        goto label_5b3900
                                                    
                                                    esi_5 = **(&var_64c + (i_7 << 3))
                                                else
                                                    var_858 += 4
                                                    esi_5 = *(var_858 - 4)
                                                
                                                if (sub_5a7df2() == 0)
                                                    goto label_5b29de
                                                
                                                if ((var_854.b & 0x20) == 0)
                                                    *esi_5 = result_1
                                                else
                                                    i_7.w = result_1.w
                                                    *esi_5 = i_7.w
                                                
                                                var_8b8 = 1
                                                goto label_5b39a3
                                            
                                            if (i_7 != 0x6f)
                                                goto label_5b39a3
                                            
                                            ebx = var_854
                                            var_8a8_1 = 8
                                            
                                            if (ebx.b s< 0)
                                                ebx |= 0x200
                                                var_854 = ebx
                                            
                                            edx_1 = 0
                                            goto label_5b35cd
                                        
                                        edx_1 = 0
                                    label_5b334b:
                                        var_854 |= 0x40
                                    label_5b3352:
                                        var_8a8_1 = 0xa
                                    label_5b35c7:
                                        ebx = var_854
                                    label_5b35cd:
                                        uint32_t eax_84
                                        
                                        if ((ebx & 0x8000) != 0)
                                            if (var_864 != 0)
                                                if (var_870_1 u> 0x63)
                                                    goto label_5b29de
                                                
                                                if (var_868_1 != 0)
                                                label_5b369d:
                                                    uint32_t* ecx_29 = *(&var_64c + var_870_1 * 0x10)
                                                    eax_84 = *ecx_29
                                                    edx_1 = ecx_29[1]
                                                    goto label_5b37f5
                                                
                                                i_7 = var_870_1 * 2
                                                ecx_18 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                                
                                                if (*ecx_18 != 0)
                                                    var_8ec_4 = ebx
                                                    var_8f0_7 = var_860_1
                                                    var_8f4_7 = 4
                                                    goto label_5b30f7
                                                
                                                *ecx_18 = 4
                                            label_5b3624:
                                                ecx_18.b = var_860_1
                                                *(&var_648 + (i_7 << 3)) = ecx_18.b
                                                *(&var_644 + (i_7 << 3)) = ebx
                                                goto label_5b39a3
                                            
                                        label_5b35dd:
                                            uint32_t* ecx_27 = var_858
                                            eax_84 = *ecx_27
                                            edx_1 = ecx_27[1]
                                            var_858 = &ecx_27[2]
                                        label_5b37f5:
                                            
                                            if ((ebx.b & 0x40) != 0 && edx_1 s<= 0
                                                    && (edx_1 s< 0 || eax_84 u< 0))
                                                uint32_t temp25_1 = eax_84
                                                eax_84 = neg.d(eax_84)
                                                edx_1 = neg.d(adc.d(edx_1, 0, temp25_1 != 0))
                                                var_854 |= 0x100
                                            
                                            ebx = edx_1
                                            uint32_t edi_10 = eax_84
                                            
                                            if ((var_854 & 0x9000) == 0)
                                                ebx = nullptr
                                            
                                            if (i_5 s>= 0)
                                                var_854 &= 0xfffffff7
                                                
                                                if (i_5 s> 0x200)
                                                    i_5 = 0x200
                                            else
                                                i_5 = 1
                                            
                                            int32_t eax_105 = edi_10 | ebx
                                            
                                            if (eax_105 == 0)
                                                var_8a4 &= eax_105
                                            
                                            void var_651
                                            void* esi_8 = &var_651
                                            
                                            while (true)
                                                uint32_t i_8 = i_5
                                                i_5 -= 1
                                                
                                                if (i_8 s<= 0 && (edi_10 | ebx) == 0)
                                                    break
                                                
                                                int32_t eax_109
                                                uint32_t edx_7
                                                edx_7:eax_109 = sx.q(var_8a8_1)
                                                uint32_t eax_110
                                                int32_t ecx_30
                                                eax_110, ecx_30, edx_1 =
                                                    __aulldvrm(edi_10, ebx, eax_109, edx_7)
                                                int32_t ecx_31 = ecx_30 + 0x30
                                                int32_t* var_8c4_2 = ebx
                                                edi_10 = eax_110
                                                ebx = edx_1
                                                
                                                if (ecx_31 s> 0x39)
                                                    ecx_31 += var_8bc
                                                
                                                *esi_8 = ecx_31.b
                                                esi_8 -= 1
                                            
                                            i_7 = &var_651 - esi_8
                                            i_11 = i_7
                                            var_86c = esi_8 + 1
                                            
                                            if ((var_854 & 0x200) == 0
                                                    || (i_7 != 0 && *(esi_8 + 1) == 0x30))
                                                goto label_5b39a3
                                            
                                            var_86c -= 1
                                            *var_86c = 0x30
                                            i_7 += 1
                                            goto label_5b399d
                                        
                                        if ((ebx & 0x1000) != 0)
                                            if (var_864 == 0)
                                                goto label_5b35dd
                                            
                                            if (var_870_1 u> 0x63)
                                                goto label_5b29de
                                            
                                            if (var_868_1 != 0)
                                                goto label_5b369d
                                            
                                            i_7 = var_870_1 * 2
                                            ecx_18 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                            
                                            if (*ecx_18 != 0)
                                                var_8ec_4 = ebx
                                                var_8f0_7 = var_860_1
                                                var_8f4_7 = 5
                                                goto label_5b30f7
                                            
                                            *ecx_18 = 5
                                            goto label_5b3624
                                        
                                        int32_t eax_90
                                        int32_t eax_91
                                        
                                        if ((ebx.b & 0x20) != 0)
                                            if ((ebx.b & 0x40) == 0)
                                                if (var_864 == 0)
                                                    var_858 += 4
                                                    eax_90 = zx.d(*(var_858 - 4))
                                                    goto label_5b37a3
                                                
                                                eax_91 = var_870_1
                                                
                                                if (eax_91 u> 0x63)
                                                    goto label_5b29de
                                                
                                                if (var_868_1 == 0)
                                                    goto label_5b373b
                                                
                                                eax_90 = zx.d(**(&var_64c + var_870_1 * 0x10))
                                                goto label_5b37a3
                                            
                                            if (var_864 != 0)
                                                eax_91 = var_870_1
                                                
                                                if (eax_91 u> 0x63)
                                                    goto label_5b29de
                                                
                                                if (var_868_1 == 0)
                                                    goto label_5b373b
                                                
                                                eax_90 = sx.d(**(&var_64c + eax_91 * 0x10))
                                                goto label_5b37a3
                                            
                                            var_858 += 4
                                            eax_90 = sx.d(*(var_858 - 4))
                                            goto label_5b37a3
                                        
                                        if ((ebx.b & 0x40) != 0)
                                            if (var_864 != 0)
                                                eax_91 = var_870_1
                                                
                                                if (eax_91 u> 0x63)
                                                    goto label_5b29de
                                                
                                                if (var_868_1 == 0)
                                                    goto label_5b373b
                                                
                                                eax_90 = **(&var_64c + eax_91 * 0x10)
                                                goto label_5b37a3
                                            
                                            var_858 += 4
                                            eax_90 = *(var_858 - 4)
                                        label_5b37a3:
                                            edx_1:eax_84 = sx.q(eax_90)
                                            goto label_5b37f5
                                        
                                        if (var_864 == 0)
                                            var_858 += 4
                                            eax_84 = *(var_858 - 4)
                                        label_5b37e6:
                                            edx_1 = 0
                                            goto label_5b37f5
                                        
                                        eax_91 = var_870_1
                                        
                                        if (eax_91 u> 0x63)
                                            goto label_5b29de
                                        
                                        if (var_868_1 != 0)
                                            eax_84 = **(&var_64c + eax_91 * 0x10)
                                            goto label_5b37e6
                                        
                                    label_5b373b:
                                        i_7 = eax_91 * 2
                                        ecx_18 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                        
                                        if (*ecx_18 == 0)
                                            *ecx_18 = 1
                                            goto label_5b3624
                                        
                                        var_8ec_4 = ebx
                                        goto label_5b3185
                                    
                                    if (i_7 == 0x64)
                                        goto label_5b334b
                                    
                                    int32_t* var_8ec_6
                                    char var_850
                                    
                                    if (i_7 s> 0x53)
                                        if (i_7 == 0x58)
                                            goto label_5b3560
                                        
                                        int32_t eax_46 = i_7 - 0x59
                                        
                                        if (eax_46 != 1)
                                            if (eax_46 == 8)
                                                goto label_5b3366
                                            
                                            if (eax_46 != 0xa)
                                                goto label_5b39a3
                                            
                                            edx_1 = 0
                                        label_5b3089:
                                            
                                            if ((var_854 & 0x810) != 0)
                                                int32_t* eax_51
                                                
                                                if (var_864 != 0)
                                                    if (var_870_1 u> 0x63)
                                                        goto label_5b29de
                                                    
                                                    i_7 = var_870_1 * 2
                                                    
                                                    if (var_868_1 == 0)
                                                        ecx_18 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                                        
                                                        if (*ecx_18 == 0)
                                                            *ecx_18 = 2
                                                            goto label_5b30da
                                                        
                                                        var_8ec_4 = var_854
                                                        var_8f0_7 = var_860_1
                                                        var_8f4_7 = 2
                                                        goto label_5b30f7
                                                    
                                                    eax_51 = zx.d(**(&var_64c + (i_7 << 3)))
                                                else
                                                    var_858 += 4
                                                    eax_51 = zx.d(*(var_858 - 4))
                                                
                                                int32_t eax_54
                                                eax_54, edx_1 =
                                                    __mbsnbcpy_s(&i_11, &var_850, 0x200, eax_51)
                                                
                                                if (eax_54 != 0)
                                                    var_8b8 = 1
                                                
                                                goto label_5b31ad
                                            
                                            char eax_56
                                            
                                            if (var_864 == 0)
                                                var_858 += 4
                                                eax_56 = (*(var_858 - 4)).b
                                            label_5b319b:
                                                var_850 = eax_56
                                                i_11 = 1
                                            label_5b31ad:
                                                var_86c = &var_850
                                                goto label_5b39a3
                                            
                                            if (var_870_1 u> 0x63)
                                                goto label_5b29de
                                            
                                            i_7 = var_870_1 * 2
                                            
                                            if (var_868_1 != 0)
                                                eax_56 = (**(&var_64c + (i_7 << 3))).b
                                                goto label_5b319b
                                            
                                            ecx_18 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                            
                                            if (*ecx_18 != 0)
                                                var_8ec_4 = var_854
                                            label_5b3185:
                                                var_8f0_7 = var_860_1
                                                var_8f4_7 = 1
                                                goto label_5b30f7
                                            
                                            *ecx_18 = 1
                                        label_5b30da:
                                            *(&var_648 + (i_7 << 3)) = ebx.b
                                            *(&var_644 + (i_7 << 3)) = var_854
                                            goto label_5b39a3
                                        
                                        int16_t* eax_60
                                        
                                        if (var_864 == 0)
                                            var_858 += 4
                                            eax_60 = *(var_858 - 4)
                                        label_5b31fa:
                                            char* ecx_19
                                            
                                            if (eax_60 != 0)
                                                ecx_19 = *(eax_60 + 4)
                                            
                                            if (eax_60 == 0 || ecx_19 == 0)
                                                int32_t* eax_65 = data_8b8528
                                                var_86c = eax_65
                                                var_8ec_6 = eax_65
                                            label_5b325e:
                                                i_7, edx_1 = _strlen(var_8ec_6)
                                            label_5b399d:
                                                i_11 = i_7
                                                goto label_5b39a3
                                            
                                            i_7 = sx.d(*eax_60)
                                            var_86c = ecx_19
                                            
                                            if ((var_854 & 0x800) == 0)
                                                var_8ac = 0
                                            else
                                                int32_t eax_63
                                                edx_1:eax_63 = sx.q(i_7)
                                                i_7 = (eax_63 - edx_1) s>> 1
                                                var_8ac = 1
                                            
                                            goto label_5b399d
                                        
                                        if (var_870_1 u> 0x63)
                                            goto label_5b29de
                                        
                                        i_7 = var_870_1 * 2
                                        
                                        if (var_868_1 != 0)
                                            eax_60 = **(&var_64c + (i_7 << 3))
                                            goto label_5b31fa
                                        
                                    label_5b3900:
                                        ecx_18 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                        
                                        if (*ecx_18 != 0)
                                            var_8ec_4 = var_854
                                            var_8f0_7 = var_860_1
                                            var_8f4_7 = 3
                                        label_5b30f7:
                                            i_7, edx_1 =
                                                sub_5b27d5(ecx_18, var_8f4_7, var_8f0_7, var_8ec_4)
                                            
                                            if (i_7 == 0)
                                                goto label_5b29de
                                            
                                            goto label_5b39a3
                                        
                                        *ecx_18 = 3
                                        *(&var_648 + (i_7 << 3)) = ebx.b
                                        *(&var_644 + (i_7 << 3)) = var_854
                                    label_5b39a3:
                                        
                                        if (var_864 != 1 || var_868_1 != 0)
                                            if (var_8b8 == 0)
                                                int32_t* ecx_34 = var_854
                                                
                                                if ((ecx_34.b & 0x40) != 0)
                                                    if ((ecx_34 & 0x100) != 0)
                                                        var_890 = 0x2d
                                                        var_8a4 = 1
                                                    else if ((ecx_34.b & 1) != 0)
                                                        var_890 = 0x2b
                                                        var_8a4 = 1
                                                    else if ((ecx_34.b & 2) != 0)
                                                        var_890 = 0x20
                                                        var_8a4 = 1
                                                
                                                uint32_t i_6 = i_10 - i_11 - var_8a4
                                                uint32_t i_4 = i_6
                                                
                                                if ((ecx_34.b & 0xc) == 0)
                                                    uint32_t i_1 = i_6
                                                    
                                                    while (i_1 s> 0)
                                                        ecx_34 = arg1
                                                        i_6.b = 0x20
                                                        i_1 -= 1
                                                        i_6, edx_1 =
                                                            sub_5ad514(i_6, edx_1, ecx_34, &result_1)
                                                        
                                                        if (result_1 == 0xffffffff)
                                                            break
                                                
                                                char* var_8f0_12 = &var_890
                                                uint32_t eax_121
                                                uint32_t edx_8
                                                eax_121, edx_8 =
                                                    sub_5b2900(&result_1, eax_3, edx_1, ecx_34)
                                                int32_t* ecx_35 = var_8a4
                                                
                                                if ((var_854.b & 8) != 0 && (var_854.b & 4) == 0)
                                                    uint32_t i_2 = i_4
                                                    
                                                    while (i_2 s> 0)
                                                        ecx_35 = arg1
                                                        eax_121.b = 0x30
                                                        i_2 -= 1
                                                        eax_121, edx_8 = sub_5ad514(eax_121, edx_8, 
                                                            ecx_35, &result_1)
                                                        
                                                        if (result_1 == 0xffffffff)
                                                            break
                                                
                                                uint32_t i_12 = i_11
                                                uint32_t edx_9
                                                
                                                if (var_8ac == 0 || i_12 s<= 0)
                                                    uint32_t i_13 = i_12
                                                    char* var_8f0_14 = var_86c
                                                    i_7, edx_9 =
                                                        sub_5b2900(&result_1, eax_3, edx_8, ecx_35)
                                                else
                                                    char* esi_12 = var_86c
                                                    uint32_t i_14 = i_12
                                                    
                                                    while (true)
                                                        uint32_t eax_122 = zx.d(*esi_12)
                                                        i_14 -= 1
                                                        esi_12 = &esi_12[2]
                                                        int32_t var_8d0
                                                        void var_10
                                                        uint32_t ecx_36
                                                        i_7, ecx_36, edx_9 =
                                                            __mbsnbcpy_s(&var_8d0, &var_10, 6, eax_122)
                                                        
                                                        if (i_7 != 0 || var_8d0 == i_7)
                                                            result_1 = 0xffffffff
                                                            break
                                                        
                                                        int32_t var_8ec_14 = var_8d0
                                                        void* var_8f0_13 = &var_10
                                                        i_7, edx_9 =
                                                            sub_5b2900(&result_1, eax_3, edx_9, ecx_36)
                                                        
                                                        if (i_14 == 0)
                                                            break
                                                        
                                                        continue
                                                
                                                if (result_1 s>= 0 && (var_854.b & 4) != 0)
                                                    uint32_t i_3 = i_4
                                                    
                                                    while (i_3 s> 0)
                                                        i_7.b = 0x20
                                                        i_3 -= 1
                                                        i_7, edx_9 =
                                                            sub_5ad514(i_7, edx_9, arg1, &result_1)
                                                        
                                                        if (result_1 == 0xffffffff)
                                                            break
                                            
                                            if (var_8b4_1 != 0)
                                                __free_base(var_8b4_1)
                                                var_8b4_1 = nullptr
                                    else
                                        if (i_7 == 0x53)
                                            if ((var_854 & 0x830) == 0)
                                                var_854 |= 0x800
                                            
                                            goto label_5b302b
                                        
                                        if (i_7 != 0x41)
                                            if (i_7 == 0x43)
                                                if ((var_854 & 0x830) == 0)
                                                    var_854 |= 0x800
                                                
                                                goto label_5b3089
                                            
                                            if (i_7 == 0x45)
                                                goto label_5b2fe9
                                            
                                            if (i_7 != 0x47)
                                                goto label_5b39a3
                                            
                                            goto label_5b2fe9
                                        
                                    label_5b2fe9:
                                        ebx.b += 0x20
                                        var_8cc = 1
                                        var_860_1 = ebx.b
                                    label_5b3366:
                                        var_854 |= 0x40
                                        
                                        if (var_864 != 1 || var_868_1 != 0)
                                            ebx = &var_850
                                            var_86c = &var_850
                                            uint32_t var_8c4_1 = 0x200
                                            
                                            if (i_5 s< 0)
                                                i_5 = 6
                                            else if (i_5 != 0)
                                                if (i_5 s> 0x200)
                                                    i_5 = 0x200
                                                
                                                if (i_5 s> 0xa3)
                                                    char* eax_70 = sub_5abd7c(i_5 + 0x15d)
                                                    var_8b4_1 = eax_70
                                                    
                                                    if (eax_70 == 0)
                                                        i_5 = 0xa3
                                                    else
                                                        var_86c = eax_70
                                                        var_8c4_1 = i_5 + 0x15d
                                                        ebx = eax_70
                                            else if (var_860_1 == 0x67)
                                                i_5 = 1
                                            
                                            int32_t var_8d8
                                            int32_t eax_73
                                            
                                            if (var_864 != 0)
                                                if (var_870_1 u> 0x63)
                                                    goto label_5b29de
                                                
                                                int32_t* eax_76 = *(&var_64c + var_870_1 * 0x10)
                                                var_8d8 = *eax_76
                                                eax_73 = eax_76[1]
                                            else
                                                int32_t ecx_23 = *var_858
                                                void* eax_72 = var_858 + 8
                                                var_858 = eax_72
                                                eax_73 = *(eax_72 - 4)
                                                var_8d8 = ecx_23
                                            
                                            int32_t var_8d4_1 = eax_73
                                            DecodePointer(data_8b8de0)(&var_8d8, ebx, var_8c4_1, 
                                                sx.d(var_860_1), i_5, var_8cc, &var_880)
                                            void* edi_9 = var_854 & 0x80
                                            
                                            if (edi_9 != 0 && i_5 == 0)
                                                DecodePointer(data_8b8dec)(ebx, &var_880)
                                            
                                            if (var_860_1 == 0x67 && edi_9 == 0)
                                                DecodePointer(data_8b8de8)(ebx, &var_880)
                                            
                                            if (*ebx == 0x2d)
                                                var_854 |= 0x100
                                                ebx += 1
                                                var_86c = ebx
                                            
                                            var_8ec_6 = ebx
                                            goto label_5b325e
                                        
                                        if (var_870_1 u> 0x63)
                                            goto label_5b29de
                                        
                                        i_7 = var_870_1 * 2
                                        ecx_11 = &(&__saved_ebp)[i_7 * 2 - 0x193]
                                        
                                        if (*ecx_11 != 0)
                                            var_8ec_2 = var_854
                                            var_8f0_4 = var_860_1
                                            var_8f4_5 = 8
                                            goto label_5b33ba
                                        
                                        *ecx_11 = 8
                                        *(&var_648 + (i_7 << 3)) = ebx.b
                                        *(&var_644 + (i_7 << 3)) = var_854
                        
                        edi_1 = var_888_1
                        i_7.b = *edi_1
                        var_860_1 = i_7.b
                        
                        if (i_7.b != 0)
                            ebx.b = var_860_1
                            continue
                    
                    int32_t esi_14 = 0
                    
                    if (i_9 != 0 && i_9 != 7)
                        goto label_5b29de
                    
                    if (var_864 != 1)
                        break
                    
                    if (var_868_1 == 0 && var_898_1 s>= 0)
                        void* edx_10 = var_858
                        void* eax_125 = &var_64c
                        
                        do
                            int32_t ecx_41 = *(eax_125 - 4)
                            
                            if (ecx_41 == 1 || ecx_41 == 2 || ecx_41 == 3)
                                *eax_125 = edx_10
                                edx_10 += 4
                            else if (ecx_41 == 4 || ecx_41 == 5)
                                *eax_125 = edx_10
                                edx_10 += 8
                            else if (ecx_41 == 6)
                                *eax_125 = edx_10
                                edx_10 += 4
                            else
                                if (ecx_41 != 8)
                                    goto label_5b29de
                                
                                *eax_125 = edx_10
                                edx_10 += 8
                            
                            esi_14 += 1
                            eax_125 += 0x10
                            var_858 = edx_10
                        while (esi_14 s<= var_898_1)
                    
                    break
            
            var_868_1 += 1
            
            if (var_868_1 s>= 2)
                break
        
        if (var_874 != 0)
            *(var_878 + 0x70) &= 0xfffffffd
        
        result = result_1
    else
    label_5b29de:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        
        if (var_874 != 0)
            *(var_878 + 0x70) &= 0xfffffffd
        
        result = 0xffffffff
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

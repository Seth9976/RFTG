// 函数名称: sub_4a1d50
// 虚拟地址: 0x4a1d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4a1d50(int32_t arg1 @ esi, int32_t* arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x10e8)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t eax_5 = arg4 * 0x14
    int32_t var_108c = 0
    int32_t var_1080 = 0
    int32_t var_10b0 = 0
    int32_t var_10ac = 0
    int32_t var_10b4 = 0
    int32_t var_1084 = 0
    void* ebx_2 = arg3 * 0xb4 + arg2
    int32_t ecx_1
    ecx_1.b = sx.d(arg2[arg4 * 5 + 0x119].b) != arg3
    void* eax_7 = arg2[arg4 * 5 + 0x11b]
    int32_t edx_2 = sx.d(*(eax_7 + 7))
    int32_t ecx_2 = sx.d(*(eax_7 + 0xe))
    int32_t eax_9 = *(eax_7 + 0x10) & 1
    int32_t var_109c = eax_9
    int32_t eax_10
    int32_t ecx_4
    eax_10, ecx_4 = sub_4b1530(eax_9, edx_2, arg2, arg3)
    int32_t edx_4 = sx.d(*(ebx_2 + 0x62)) + arg7
    int32_t var_1078 = eax_10 + edx_4
    int32_t var_1074_1 = edx_2 - sx.d(*(ebx_2 + 0x63))
    void var_b48
    void* var_14_1 = &var_b48
    int32_t var_828
    __builtin_memset(&var_828, 0, 0x18)
    int32_t var_18 = 3
    int32_t eax_14 = sub_49dea0(arg3, edx_4, ecx_4, arg2)
    int32_t var_1090 = 0
    void var_810
    char var_410
    int32_t arg_10
    int32_t eax_23
    int32_t eax_69
    int32_t ecx_50
    int32_t edx_36
    int32_t esi_6
    
    if (arg5 s<= 0)
    label_4a24c2:
        eax_69 = var_10b0
        edx_36 = arg_10
        ecx_50 = var_109c
        esi_6 = var_108c
        
        if (arg6 != 0 && eax_69 == 0 && ecx_50 == 0)
        label_4a24b9:
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 0
    else
        int32_t* var_10a8_1 = edx
        int32_t eax_67
        
        do
            int32_t ecx_5 = *var_10a8_1 * 5
            
            if (*(arg2[ecx_5 + 0x11b] + 0x15) s> 0)
                int32_t var_1098_1 = 8
                int32_t var_10c8_1 = 0
                int32_t eax_49
                
                do
                    int32_t ecx_6 = arg2[ecx_5 + 0x11b]
                    
                    if (*(var_10c8_1 + ecx_6 + 0x18) == 3)
                        int32_t ecx_7 = *(var_10c8_1 + ecx_6 + 0x20)
                        int32_t var_10d4_1 = *(var_10c8_1 + ecx_6 + 0x24)
                        
                        if ((ecx_7 & 0x4000) != 0)
                            eax_23 = 0
                            
                            if (var_108c != 0)
                                goto label_4a30f4
                            
                            int32_t ecx_8 = ecx_7 & 0x10
                            
                            if (ecx_8 != 0 && ecx_2 != 5)
                                goto label_4a24b9
                            
                            if (ecx_8 == 0 && ecx_2 == 5)
                                goto label_4a24b9
                            
                            int32_t ecx_10 = sx.d(*(var_10c8_1 + ecx_6 + 0x28))
                            int32_t temp1_1 = var_1074_1
                            var_1074_1 -= ecx_10
                            var_108c = 1
                            
                            if (temp1_1 - ecx_10 s< 0)
                                var_1074_1 = 0
                            
                            if (arg2[6].b == 0)
                                *var_10a8_1
                                sub_49c1d0(arg3)
                                int32_t var_14_3 = *arg2[ecx_5 + 0x11b]
                                int32_t var_18_1 = *(ebx_2 + 0x20)
                                sub_5a733b(&var_410, "%s uses %s.\n")
                                sub_4c5680(&var_410)
                                char* var_14_4 = &var_410
                                sub_4591b0(arg3, &var_410, arg2, arg3)
                        
                        int32_t ecx_14 = *(var_10c8_1 + ecx_6 + 0x20)
                        int32_t var_10d4_2 = *(var_10c8_1 + ecx_6 + 0x24)
                        int32_t eax_29 = ecx_14 & 0x20
                        
                        if (eax_29 != 0)
                            int32_t var_14_18 = 1
                            sub_49cc30(arg2, *var_10a8_1, ecx_14, 0xffffffff)
                            
                            if (arg2[6].b == 0)
                                *var_10a8_1
                                sub_49be30(arg3)
                                int32_t var_14_20 = *arg2[ecx_5 + 0x11b]
                                int32_t var_18_12 = *(ebx_2 + 0x20)
                                sub_5a733b(&var_410, "%s discards %s.\n")
                                char* var_14_21 = &var_410
                                sub_4591b0(sub_4c5680(&var_410), arg3, arg2, arg3)
                            
                            int32_t ecx_41 = *(var_10c8_1 + ecx_6 + 0x20)
                            int32_t var_10d4_3 = *(var_10c8_1 + ecx_6 + 0x24)
                            
                            if ((ecx_41 & 0x40) != 0)
                                var_10ac = 1
                                
                                if (ecx_2 != 5)
                                    var_1074_1 = 0
                            
                            if ((ecx_41 & 0x100) != 0)
                                char eax_60 = *(var_10c8_1 + ecx_6 + 0x28)
                                var_1078 += sx.d(eax_60)
                                *(ebx_2 + 0x62) += eax_60
                            
                            int32_t eax_61 = *(var_10c8_1 + ecx_6 + 0x20)
                            int32_t var_10d4_4 = *(var_10c8_1 + ecx_6 + 0x24)
                            int32_t ecx_47 = eax_61 & 0x20000
                            
                            if (ecx_47 != 0)
                                var_1078 += sx.d(*(var_10c8_1 + ecx_6 + 0x28))
                                var_109c = 1
                                var_10b0 = 1
                                ecx_47 = 0
                                
                                if ((eax_61 & 0x200000) != 0 && ecx_1 == 0)
                                    int32_t esi_5 = *arg2[ecx_5 + 0x11b]
                                    *(ebx_2 + 0xa3) += 2
                                    
                                    if (arg2[6].b == 0)
                                        int32_t var_14_22 = 2
                                        sub_49b990(arg3, &arg2[ecx_5 + 0x119])
                                    
                                    if (arg2[6].b == 0 && esi_5 != 0)
                                        int32_t var_14_23 = esi_5
                                        int32_t var_18_14 = 2
                                        int32_t var_1c_7 = *(ebx_2 + 0x20)
                                        sub_5a733b(&var_810, "%s receives %d prestige from %s.\n")
                                        char const* const var_14_24 = "verbose"
                                        void* var_18_15 = &var_810
                                        ecx_47 = sub_4c5680("%s (%s)")
                                    
                                    *(ebx_2 + 0xa4) = 1
                            
                            sub_4ae7d0(ecx_47, arg3, 0xe, arg2)
                            break
                        
                        if (((ecx_14 & 0x80) | eax_29) != 0)
                            arg2[ecx_5 + 0x11a].w |= 1 << var_1098_1.b
                            var_1080 += sx.d(*(var_10c8_1 + ecx_6 + 0x28))
                        
                        void* ebx_6
                        
                        if ((*(var_10c8_1 + ecx_6 + 0x20) & 0x20000000) == 0)
                            ebx_6 = ebx_2
                        else
                            var_10b4 += 1
                            arg2[ecx_5 + 0x11a].w |= 1 << var_1098_1.b
                            int16_t eax_34
                            eax_34.b = *(var_10c8_1 + ecx_6 + 0x28)
                            int32_t ecx_20 = sx.d(eax_34.b)
                            int32_t temp0_1 = var_1074_1
                            var_1074_1 -= ecx_20
                            
                            if (temp0_1 - ecx_20 s< 0)
                                var_1074_1 = 0
                            
                            ebx_6 = ebx_2
                            int32_t var_818_1 = var_818_1 + 1
                            *(ebx_6 + 0x63) += eax_34.b
                            
                            if (arg2[6].b == 0)
                                int32_t var_14_5 = *(ebx_6 + 0x20)
                                sub_5a733b(&var_410, "%s discards a Genes good to reduce cost.\n")
                                sub_4c5680(&var_410)
                                char* var_14_7 = &var_410
                                sub_4591b0(arg3, &var_410, arg2, arg3)
                        
                        void* eax_39 = &arg2[ecx_5 + 0x119]
                        
                        if ((*(var_10c8_1 + ecx_6 + 0x20) & 0x10000000) != 0)
                            var_1084 += 1
                            *(eax_39 + 4) |= 1 << var_1098_1.b
                            var_1078 += sx.d(*(var_10c8_1 + ecx_6 + 0x28))
                            int32_t ecx_23
                            ecx_23.b = *(var_10c8_1 + ecx_6 + 0x28)
                            *(ebx_6 + 0x62) += ecx_23.b
                            
                            if (arg2[6].b == 0)
                                int32_t var_14_8 = *(ebx_6 + 0x20)
                                sub_5a733b(&var_410, "%s discards a Rare good for extra military.\n")
                                sub_4c5680(&var_410)
                                char* var_14_10 = &var_410
                                sub_4591b0(arg3, &var_410, arg2, arg3)
                                eax_39 = &arg2[ecx_5 + 0x119]
                            
                            int32_t var_81c_1 = var_81c_1 + 1
                        
                        if ((*(var_10c8_1 + ecx_6 + 0x20) & 0x40000000) != 0)
                            var_1084 += 1
                            *(eax_39 + 4) |= 1 << var_1098_1.b
                            eax_39.b = *(var_10c8_1 + ecx_6 + 0x28)
                            *(ebx_6 + 0x62) += eax_39.b
                            var_1078 += sx.d(eax_39.b)
                            
                            if (arg2[6].b == 0)
                                int32_t var_14_11 = *(ebx_6 + 0x20)
                                sub_5a733b(&var_410, "%s discards an Alien good for extra military.\n")
                                sub_4c5680(&var_410)
                                char* var_14_13 = &var_410
                                sub_4591b0(arg3, &var_410, arg2, arg3)
                            
                            int32_t var_814_1 = var_814_1 + 1
                        
                        if ((*(var_10c8_1 + ecx_6 + 0x20) & 0x80000000) != 0)
                            arg2[ecx_5 + 0x11a].w |= 1 << var_1098_1.b
                            *(ebx_2 + 0xa3) -= 1
                            int32_t edx_24 = sub_4ae7d0(var_1098_1, arg3, 0x12, arg2)
                            
                            if (arg2[6].b == 0)
                                int32_t var_14_14 = 1
                                sub_49ba20(arg3, edx_24)
                            
                            void* eax_45
                            eax_45.b = *(var_10c8_1 + ecx_6 + 0x28)
                            var_1078 += sx.d(eax_45.b)
                            *(ebx_2 + 0x62) += eax_45.b
                            
                            if (arg2[6].b == 0)
                                int32_t var_14_15 = *(ebx_2 + 0x20)
                                sub_5a733b(&var_410, "%s spends prestige for extra military.\n")
                                char* var_14_17 = &var_410
                                sub_4591b0(&var_410, sub_4c5680(&var_410), arg2, arg3)
                    
                    var_10c8_1 += 0x18
                    eax_49 = var_1098_1 + 1
                    var_1098_1 = eax_49
                while (eax_49 - 8 s< sx.d(*(arg2[ecx_5 + 0x11b] + 0x15)))
            
            var_10a8_1 = &var_10a8_1[1]
            eax_67 = var_1090 + 1
            var_1090 = eax_67
        while (eax_67 s< arg5)
        
        if (var_1080 s<= 0)
            goto label_4a24c2
        
        edx_36 = arg_10
        
        if (edx_36 s> var_1080)
            goto label_4a24b9
        
        esi_6 = var_108c
        *(ebx_2 + 0x62) += edx_36.b
        *(ebx_2 + 0x64) += edx_36.b
        var_1080 = edx_36
        
        if (esi_6 != 0)
            goto label_4a24b9
        
        ecx_50 = var_109c
        eax_69 = var_10b0
        
        if ((ecx_50 == 0 && eax_69 == 0) || (arg6 != 0 && eax_69 == 0 && ecx_50 == 0))
            goto label_4a24b9
    
    if (ecx_1 == 0)
        if ((eax_69 != 0 && esi_6 != 0) || (var_10ac != 0 && ecx_50 != 0 && esi_6 == 0))
            goto label_4a24b9
    else if (eax_69 == 0)
        if (ecx_50 == 0)
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return eax_69
        
        if (var_10ac != 0 && ecx_50 != 0 && esi_6 == 0)
            goto label_4a24b9
    else if (esi_6 != 0 || (var_10ac != 0 && ecx_50 != 0 && esi_6 == 0))
        goto label_4a24b9
    
    void var_1068
    
    for (int32_t i = 2; i s<= 5; i += 1)
        int32_t esi_9 = (&var_828)[i]
        
        if (esi_9 != 0)
            eax_69 = sub_49db70(eax_69, edx_36, arg3, arg2, &var_1068, i)
            
            if (eax_69 s< esi_9)
                goto label_4a24b9
            
            edx_36 = arg_10
    
    int32_t eax_72 = sx.d(arg2[0x7b0].b) | 0x80
    
    if (eax_72 s>= 0)
        bool cond:8_1
        
        if (eax_72.b s< 0)
            if (*(ebx_2 + 0x2c) != eax_72)
                cond:8_1 = *(ebx_2 + 0x30) != eax_72
                goto label_4a258c
            
            var_1074_1 -= 3
        else if ((*(ebx_2 + 0x2c) & 0x7f) == eax_72)
            var_1074_1 -= 3
        else
            cond:8_1 = (*(ebx_2 + 0x30) & 0x7f) != eax_72
        label_4a258c:
            
            if (not(cond:8_1))
                var_1074_1 -= 3
    
    int32_t esi_12 = 0
    void var_b44
    
    if (eax_14 s> 0)
        do
            void* ebx_9 = *(&var_b44 + (esi_12 << 3))
            int32_t ecx_59 = *arg2[sx.d(*(&var_b48 + (esi_12 << 3))) * 5 + 0x11b]
            int32_t eax_75 = *(ebx_9 + 8)
            void* edx_38 = *(ebx_9 + 0xc)
            void* var_10d4_5 = edx_38
            
            if ((eax_75 & 1) == 0)
                goto label_4a266c
            
            if (((eax_75 & 2) == 0 || ecx_2 == 2) && ((eax_75 & 4) == 0 || ecx_2 == 3)
                    && ((eax_75 & 8) == 0 || ecx_2 == 4) && ((eax_75 & 0x10) == 0 || ecx_2 == 5)
                    && (eax_75 & 0x20000000) == 0)
                var_1074_1 -= sx.d(*(ebx_9 + 0x10))
            label_4a266c:
                
                if ((eax_75 & 0x100) == 0)
                label_4a271c:
                    
                    if (var_108c != 0)
                        if ((eax_75 & 0x8000) != 0)
                            var_1074_1 -= sx.d(*(ebx_9 + 0x10))
                        
                        if ((eax_75 & 0x10000) != 0)
                            int32_t ebx_10 = sx.d(*(ebx_9 + 0x10))
                            *(ebx_2 + 0xa3) += ebx_10.b
                            
                            if (arg2[6].b == 0)
                                int32_t var_14_26 = ebx_10
                                sub_49b990(arg3, edx_38)
                            
                            if (arg2[6].b == 0 && ecx_59 != 0)
                                int32_t var_14_27 = ecx_59
                                int32_t var_18_17 = ebx_10
                                int32_t var_1c_10 = *(ebx_2 + 0x20)
                                sub_5a733b(&var_810, "%s receives %d prestige from %s.\n")
                                char const* const var_14_28 = "verbose"
                                void* var_18_18 = &var_810
                                sub_4c5680("%s (%s)")
                            
                            *(ebx_2 + 0xa4) = 1
                else if ((eax_75 & 0x10000000) == 0 && (eax_75 & 0x40000000) == 0)
                    if (((eax_75 & 2) == 0 || ecx_2 != 2) && ((eax_75 & 4) == 0 || ecx_2 != 3)
                            && ((eax_75 & 8) == 0 || ecx_2 != 4)
                            && ((eax_75 & 0x10) == 0 || ecx_2 != 5))
                        if ((eax_75 & 0x200) == 0)
                            goto label_4a271c
                        
                        edx_38 = arg2[arg4 * 5 + 0x11b]
                        
                        if ((*(edx_38 + 0x10) & 0x40) == 0)
                            goto label_4a271c
                        
                        var_1078 += sx.d(*(ebx_9 + 0x10))
                    else
                        var_1078 += sx.d(*(ebx_9 + 0x10))
            
            esi_12 += 1
        while (esi_12 s< eax_14)
        
        edx_36 = arg_10
    
    int32_t ecx_110 = var_108c
    
    if (var_1074_1 s< 0)
        var_1074_1 = 0
    
    int32_t eax_82 = var_109c
    
    if (ecx_1 != 0)
        goto label_4a2835
    
    if (eax_82 != 0)
        if (ecx_110 == 0)
            if (var_1078 + var_1080 s< sx.d(*(arg2[arg4 * 5 + 0x11b] + 7)))
                goto label_4a24b9
            
            ecx_110 = var_108c
        
    label_4a2835:
        
        if (((eax_82 == 0 || ecx_110 != 0) && var_1074_1 s> edx_36)
                || ((eax_82 == 0 || ecx_110 != 0) && var_1074_1 s< edx_36))
            goto label_4a24b9
    else if (var_1074_1 s> edx_36 || ((eax_82 == 0 || ecx_110 != 0) && var_1074_1 s< edx_36))
        goto label_4a24b9
    
    bool cond:10_1
    
    if (eax_82 == 0 || ecx_110 != 0)
        cond:10_1 = var_10b4 == 0
    else
        if (edx_36 s> 0 && var_1080 == ecx_110)
            goto label_4a24b9
        
        cond:10_1 = var_10b4 == 0
        
        if (var_10b4 s> 0)
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 0
    
    if (not(cond:10_1) && var_1084 != 0)
        goto label_4a24b9
    
    int32_t var_1090_1 = 0
    
    if (arg5 s> 0)
        int32_t* var_1084_1 = edx
        int32_t eax_102
        
        do
            int32_t eax_85 = *var_1084_1
            void* eax_87 = arg2[eax_85 * 5 + 0x11b]
            int32_t i_1 = 0
            
            if (*(eax_87 + 0x15) s> 0)
                int32_t esi_16 = 0
                
                do
                    if (*(eax_87 + esi_16 + 0x18) == 3)
                        int32_t ecx_117 = *(eax_87 + esi_16 + 0x20)
                        int32_t var_10d4_6 = *(eax_87 + esi_16 + 0x24)
                        void* edx_43 = nullptr
                        void* var_18_19
                        int32_t var_14_29
                        void* eax_91
                        
                        if ((ecx_117 & 0x20000000) == 0)
                            edx_43 = nullptr
                            eax_91 = ecx_117 & 0x10000000
                            
                            if (eax_91 != 0)
                                var_14_29 = 3
                                var_18_19 = &var_1068
                                goto label_4a2959
                            
                            eax_91 = nullptr
                            
                            if ((ecx_117 & 0x40000000) != 0)
                                var_14_29 = 5
                                edx_43 = &var_1068
                                var_18_19 = &var_1068
                                goto label_4a2959
                        else
                            var_14_29 = 4
                            eax_91 = &var_1068
                            var_18_19 = &var_1068
                        label_4a2959:
                            int32_t eax_94 =
                                sub_49db70(eax_91, edx_43, arg3, arg2, var_18_19, var_14_29)
                            int32_t edx_44 = *var_1084_1
                            int32_t var_10a4 = eax_94
                            int32_t var_10e8 = edx_44
                            int32_t i_3 = i_1
                            int32_t var_10cc = 2
                            
                            if (eax_94 s> 0)
                                sub_49d720(arg2, arg3)
                                
                                if (*(ebx_2 + 0xc8) s>= *(ebx_2 + 0xc4))
                                    (*(*(ebx_2 + 0x28) + 0xc))(arg2, arg3, 0xf, &var_1068, &var_10a4, 
                                        &var_10e8, &var_10cc, 1, 1, 0, 0)
                                    
                                    if (*(arg2 + 0x1ec3) != 0)
                                        goto label_4a24b9
                                    
                                    int32_t eax_97 = *(*(ebx_2 + 0x28) + 0x10)
                                    
                                    if (eax_97 != 0)
                                        eax_97(arg2, arg3, 0xf)
                                
                                sub_49d860(&var_10a4, &var_10e8, arg2, arg3, 0xf, &var_1068, &var_10a4, 
                                    &var_10cc)
                                
                                if (*(arg2 + 0x1ec3) != 0)
                                    goto label_4a24b9
                                
                                eax_94 = var_10a4
                            
                            sub_4a8ae0(&var_1068, arg3, i_1, arg2, *var_1084_1, &var_1068, eax_94)
                    
                    eax_87 = arg2[eax_85 * 5 + 0x11b]
                    i_1 += 1
                    esi_16 += 0x18
                while (i_1 s< sx.d(*(eax_87 + 0x15)))
            
            var_1084_1 = &var_1084_1[1]
            eax_102 = var_1090_1 + 1
            var_1090_1 = eax_102
        while (eax_102 s< arg5)
        edx_36 = arg_10
        eax_82 = var_109c
        ecx_110 = var_108c
    
    if (eax_82 != 0 && ecx_110 == 0)
        void* ecx_131
        ecx_131.b = *(arg2[arg4 * 5 + 0x11b] + 7)
        *(ebx_2 + 0x65) += ecx_131.b
    
    void* ebx_11 = ebx_2
    int32_t esi_17 = 0
    
    if (edx_36 s> 0)
        do
            if (ecx[esi_17] s>= 0)
                if (arg2[6].b == 0 && *(*(ebx_11 + 0x28) + 0x20) != 0)
                    sub_49bb40(arg3)
                    ebx_11 = ebx_2
                    int32_t var_14_35 = *arg2[ecx[esi_17] * 5 + 0x11b]
                    int32_t var_18_24 = *(ebx_11 + 0x20)
                    sub_5a733b(&var_410, "%s discards %s.\n")
                    (*(*(ebx_11 + 0x28) + 0x20))(arg2, arg3, &var_410, "discard")
                
                int32_t var_14_36 = 1
                sub_49cc30(arg2, ecx[esi_17], ecx, 0xffffffff)
                edx_36 = arg_10
            else
                *(ebx_11 + 0xb0) += 1
            
            esi_17 += 1
        while (esi_17 s< edx_36)
    
    char* esi_18 = arg3
    
    if (esi_18 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i_2 = sx.d(*(ebx_11 + 0x44))
    int32_t ecx_136 = 0
    
    if (i_2 s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i_2 != 0xffffffff)
        i_2 = sx.d(arg2[i_2 * 5 + 0x11d].w)
        ecx_136 += 1
    
    int32_t eax_115 = sx.d(*(ebx_11 + 0xae)) - sx.d(*(ebx_11 + 0xb0)) + ecx_136
    int32_t ecx_137 = sx.d(*(ebx_11 + 0xb5))
    
    if (eax_115 s< ecx_137)
        *(ebx_11 + 0xb5) = eax_115.b
    
    if (arg2[6].b == 0)
        if (ecx_1 == 0)
            void* eax_121
            int32_t edx_62
            
            if (var_109c == 0 || var_108c != 0)
                if (var_1080 != 0)
                    int32_t var_14_42 = var_1080
                    int32_t var_18_31 = *(ebx_11 + 0x20)
                    sub_5a733b(&var_410, "%s pays %d for extra military.\n")
                    char* var_14_43 = &var_410
                    sub_4591b0(&var_410, sub_4c5680(&var_410), arg2, esi_18)
                
                int32_t var_14_44 = *arg2[arg4 * 5 + 0x11b]
                int32_t var_18_33 = arg_10
                int32_t var_1c_24 = *(ebx_11 + 0x20)
                sub_5a733b(&var_410, "%s pays %d for %s.\n")
                void* edx_71 = data_27e7a40
                eax_121 = &esi_18[sx.d(*(arg2 + 0x1ec2)) << 2] * 0x1c0 + *(edx_71 + 0x548) + 0x2c0c0
                ecx_137 = *(eax_121 + 0x50)
                *(eax_121 + 0x2c) = 1
                *(eax_121 + 0x50) = ecx_137 + 1
                
                if (arg4 != 0xffffffff)
                    void* edx_72 = *(edx_71 + 0x548)
                    
                    if (edx_72 == 0)
                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                            0xcc, "GetGame")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    edx_62 = sx.d(*(*(*(edx_72 + 0x45844) + eax_5 + 0x46c) + 4))
                else
                    edx_62 = 0xffffffff
                
                *(eax_121 + (ecx_137 << 3) + 0x34) = 0
            else
                void* edx_63
                
                if (var_1080 s<= 0)
                    int32_t var_14_40 = *arg2[arg4 * 5 + 0x11b]
                    int32_t var_18_29 = *(ebx_11 + 0x20)
                    sub_5a733b(&var_410, "%s conquers %s.\n")
                    void* edx_67 = data_27e7a40
                    eax_121 = &esi_18[sx.d(*(arg2 + 0x1ec2)) << 2] * 0x1c0 + *(edx_67 + 0x548) + 0x2c0c0
                    ecx_137 = *(eax_121 + 0x50)
                    *(eax_121 + 0x2c) = 1
                    *(eax_121 + 0x50) = ecx_137 + 1
                    
                    if (arg4 != 0xffffffff)
                        edx_63 = *(edx_67 + 0x548)
                        
                        if (edx_63 == 0)
                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        edx_62 = sx.d(*(*(*(edx_63 + 0x45844) + eax_5 + 0x46c) + 4))
                        *(eax_121 + (ecx_137 << 3) + 0x34) = 1
                    else
                        edx_62 = 0xffffffff
                        *(eax_121 + (ecx_137 << 3) + 0x34) = 1
                else
                    int32_t var_14_38 = *arg2[arg4 * 5 + 0x11b]
                    int32_t var_18_27 = arg_10
                    int32_t var_1c_19 = *(ebx_11 + 0x20)
                    sub_5a733b(&var_410, "%s pays %d to conquer %s.\n")
                    void* edx_61 = data_27e7a40
                    eax_121 = &esi_18[sx.d(*(arg2 + 0x1ec2)) << 2] * 0x1c0 + *(edx_61 + 0x548) + 0x2c0c0
                    ecx_137 = *(eax_121 + 0x50)
                    *(eax_121 + 0x2c) = 1
                    *(eax_121 + 0x50) = ecx_137 + 1
                    
                    if (arg4 != 0xffffffff)
                        edx_63 = *(edx_61 + 0x548)
                        
                        if (edx_63 == 0)
                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        edx_62 = sx.d(*(*(*(edx_63 + 0x45844) + eax_5 + 0x46c) + 4))
                        *(eax_121 + (ecx_137 << 3) + 0x34) = 1
                    else
                        edx_62 = 0xffffffff
                        *(eax_121 + (ecx_137 << 3) + 0x34) = 1
            
            ebx_11 = ebx_2
            *(eax_121 + (ecx_137 << 3) + 0x30) = edx_62
        else if (var_1080 s<= 0)
            var_410 = 0
        else
            int32_t var_14_37 = arg_10
            int32_t var_18_26 = *(ebx_11 + 0x20)
            sub_5a733b(&var_410, "%s pays %d for extra military.\n")
        
        char* eax_135 = &var_410
        
        do
            ecx_137.b = *eax_135
            eax_135 = &eax_135[1]
        while (ecx_137.b != 0)
        
        void var_40f
        
        if (eax_135 != &var_40f)
            ecx_137 = sub_4c5680(&var_410)
    
    int32_t eax_156 = 0
    int32_t var_1090_2 = 0
    
    if (eax_14 s> 0)
        do
            if ((*(*(&var_b44 + (eax_156 << 3)) + 8) & &data_800000) != 0 && var_1080 s<= 0)
                int32_t eax_141 = arg_10
                
                if (eax_141 != 0)
                    if (eax_141 s> 1)
                        sub_49d720(arg2, esi_18)
                        int32_t* var_14_47 = nullptr
                        int32_t* var_1c_26
                        int32_t* var_18_35
                        int32_t* eax_142
                        
                        if (*(ebx_11 + 0xc8) s>= *(ebx_11 + 0xc4))
                            (*(*(ebx_11 + 0x28) + 0xc))(arg2, esi_18, 3, ecx, &arg_10, 0, 0, 
                                sx.d(*(&var_b48 + (var_1090_2 << 3))), 0, 0, var_14_47)
                            
                            if (*(arg2 + 0x1ec3) != 0)
                                goto label_4a24b9
                            
                            int32_t eax_145 = *(*(ebx_11 + 0x28) + 0x10)
                            
                            if (eax_145 != 0)
                                eax_145(arg2, esi_18, 3)
                            
                            var_14_47 = nullptr
                            eax_142 = &arg_10
                            var_18_35 = &arg_10
                            var_1c_26 = ecx
                        else
                            eax_142 = ecx
                            var_18_35 = &arg_10
                            var_1c_26 = eax_142
                        
                        ecx_137 =
                            sub_49d860(eax_142, 0, arg2, esi_18, 3, var_1c_26, var_18_35, var_14_47)
                        
                        if (*(arg2 + 0x1ec3) != 0)
                            goto label_4a24b9
                    
                    int32_t eax_146 = *ecx
                    
                    if (eax_146 != 0xffffffff)
                        if (arg2[6].b == 0)
                            *(&var_b48 + (var_1090_2 << 3))
                            esi_18 = arg3
                            int32_t var_14_49 = eax_146
                            sub_49bfe0(esi_18, ecx)
                            ebx_11 = ebx_2
                            
                            if (*(*(ebx_11 + 0x28) + 0x20) != 0)
                                int32_t var_14_50 = *arg2[*ecx * 5 + 0x11b]
                                int32_t var_18_38 = *(ebx_11 + 0x20)
                                sub_5a733b(&var_410, "%s saves %s.\n")
                                (*(*(ebx_11 + 0x28) + 0x20))(arg2, esi_18, &var_410, "discard")
                            
                            int32_t var_14_51 = *(ebx_11 + 0x20)
                            sub_5a733b(&var_410, "%s saves 1 card under Galactic Scavengers.\n")
                            char const* const var_14_52 = "verbose"
                            char* var_18_40 = &var_410
                            ecx_137 = sub_4c5680("%s (%s)")
                        
                        int32_t var_14_53 = 5
                        sub_49cc30(arg2, *ecx, ecx_137, esi_18)
            
            eax_156 = var_1090_2 + 1
            var_1090_2 = eax_156
        while (eax_156 s< eax_14)
    
    arg2[arg4 * 5 + 0x11a].w &= 0xffbf
    eax_23 = 1
    label_4a30f4:
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return eax_23
}

// 函数名称: sub_59b930
// 虚拟地址: 0x59b930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_59b930(int32_t arg1, int32_t* arg2, int32_t* arg3, uint32_t* arg4 @ edi, uint32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    char* eax_3 = arg4[0x2a]
    int32_t* var_46c = arg3
    uint32_t var_428 = 0
    uint32_t var_420 = 0
    uint32_t var_42c = 0
    uint32_t var_43c = 0
    int32_t var_414 = 0
    
    if (eax_3 u< arg4[0x2b])
    label_59b9d3:
        arg3.b = *eax_3
        void* eax_9 = &eax_3[1]
        arg4[0x2a] = eax_9
        
        if (zx.d(arg3.b) == 0x42)
            uint32_t ecx_1
            
            if (eax_9 u< arg4[0x2b])
            label_59ba3b:
                ecx_1.b = *eax_9
                arg4[0x2a] = eax_9 + 1
                
                if (zx.d(ecx_1.b) == 0x4d)
                    sub_595ac0(arg4)
                    sub_595ac0(arg4)
                    sub_595ac0(arg4)
                    sub_595ac0(arg4)
                    uint32_t eax_16 = sub_595ac0(arg4)
                    uint32_t eax_19 = (sub_595ac0(arg4) << 0x10) + eax_16
                    uint32_t eax_20 = sub_595ac0(arg4)
                    uint32_t ebx_3 = (sub_595ac0(arg4) << 0x10) + eax_20
                    uint32_t var_424 = ebx_3
                    uint32_t eax_24
                    
                    if (ebx_3 == 0xc)
                        *arg4 = sub_595ac0(arg4)
                        eax_24 = sub_595ac0(arg4)
                    else
                        if (ebx_3 != 0x28 && ebx_3 != 0x38 && ebx_3 != 0x6c)
                            data_273ac1c = "unknown BMP"
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        uint32_t eax_25 = sub_595ac0(arg4)
                        *arg4 = (sub_595ac0(arg4) << 0x10) + eax_25
                        uint32_t eax_29 = sub_595ac0(arg4)
                        eax_24 = (sub_595ac0(arg4) << 0x10) + eax_29
                    
                    arg4[1] = eax_24
                    
                    if (sub_595ac0(arg4) == 1)
                        uint32_t eax_33 = sub_595ac0(arg4)
                        
                        if (eax_33 == 1)
                            data_273ac1c = "monochrome"
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        int32_t eax_35 = arg4[1]
                        int32_t edx_2
                        edx_2.b = eax_35 s> 0
                        int32_t eax_36
                        int32_t edx_3
                        edx_3:eax_36 = sx.q(eax_35)
                        arg4[1] = (eax_36 ^ edx_3) - edx_3
                        int32_t eax_42
                        uint32_t esi_5
                        
                        if (ebx_3 == 0xc)
                            esi_5 = 0
                            
                            if (eax_33 s>= 0x18)
                                goto label_59bd51
                            
                            eax_42 = (eax_19 - 0x26) s/ 3
                        label_59bd41:
                            var_414 = eax_42
                        label_59bd51:
                            int32_t eax_74
                            eax_74.b = var_43c != 0
                            uint32_t ecx_13 = *arg4 * (eax_74 + 3) * arg4[1]
                            arg4[2] = eax_74 + 3
                            uint32_t result = sub_5a881a(ecx_13)
                            
                            if (result == 0)
                                data_273ac1c = "outofmem"
                                sub_5a6aba(eax_1 ^ &__saved_ebp)
                                return result
                            
                            if (eax_33 s>= 0x10)
                                int32_t var_430_3 = 0
                                uint32_t var_460_1
                                __builtin_memset(&var_460_1, 0, 0x1c)
                                int32_t var_41c_1 = 0
                                int32_t var_434_1 = 0
                                sub_5958f0(arg4, eax_19 - ebx_3 - 0xe)
                                uint32_t eax_151
                                
                                if (eax_33 == 0x18)
                                    eax_151 = *arg4 * 3
                                else if (eax_33 != 0x10)
                                    eax_151 = 0
                                else
                                    eax_151 = *arg4 * 2
                                
                                uint32_t var_45c_1
                                int32_t var_458_1
                                uint32_t var_454_1
                                uint32_t var_450_1
                                int32_t var_44c_1
                                int32_t var_448_1
                                uint32_t ecx_34
                                
                                if (eax_33 == 0x18)
                                    var_434_1 = 1
                                else if (eax_33 != 0x20 || var_42c != 0xff || var_420 != 0xff00
                                        || esi_5 != 0xff0000)
                                    if (esi_5 == 0 || var_420 == 0 || var_42c == 0)
                                        __free_base(result)
                                        data_273ac1c = "bad masks"
                                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                                        return 0
                                    
                                label_59c404:
                                    var_44c_1 = sub_59b860(esi_5) - 7
                                    uint32_t eax_160 = sub_59b8b0(esi_5)
                                    var_45c_1 = eax_160
                                    var_458_1 = sub_59b860(var_420) - 7
                                    var_454_1 = eax_160
                                    var_448_1 = sub_59b860(var_42c) - 7
                                    var_460_1 = eax_160
                                    int32_t eax_165
                                    eax_165, ecx_34 = sub_59b860(var_43c)
                                    var_430_3 = eax_165 - 7
                                    var_450_1 = eax_160
                                else
                                    if (var_43c != 0xff000000)
                                        goto label_59c404
                                    
                                    var_434_1 = 2
                                
                                int32_t i_6 = 0
                                
                                if (arg4[1] s> 0)
                                    int32_t i
                                    
                                    do
                                        int32_t j_5 = 0
                                        
                                        if (var_434_1 == 0)
                                            if (*arg4 s> 0)
                                                int32_t j
                                                
                                                do
                                                    uint32_t eax_206 = sub_595ac0(arg4)
                                                    uint32_t ebx_14
                                                    
                                                    if (eax_33 != 0x10)
                                                        ebx_14 = (sub_595ac0(arg4) << 0x10) + eax_206
                                                    else
                                                        ebx_14 = eax_206
                                                    
                                                    *(var_41c_1 + result) = sub_59b900(var_44c_1, 
                                                        ebx_14 & var_428, var_45c_1)
                                                    char eax_209 = sub_59b900(var_458_1, 
                                                        ebx_14 & var_420, var_454_1)
                                                    uint32_t esi_15 = var_460_1
                                                    *(var_41c_1 + 1 + result) = eax_209
                                                    *(var_41c_1 + 2 + result) =
                                                        sub_59b900(var_448_1, ebx_14 & var_42c, esi_15)
                                                    var_41c_1 += 3
                                                    char eax_211
                                                    
                                                    if (var_43c == 0)
                                                        eax_211 = -1
                                                    else
                                                        eax_211 = sub_59b900(var_430_3, 
                                                            ebx_14 & var_43c, var_450_1)
                                                    
                                                    if (eax_74 == 1)
                                                        *(var_41c_1 + result) = eax_211
                                                        var_41c_1 += 1
                                                    
                                                    j = j_5 + 1
                                                    j_5 = j
                                                while (j s< *arg4)
                                        else if (*arg4 s> 0)
                                            int32_t ebx_12 = var_41c_1
                                            int32_t j_1
                                            
                                            do
                                                char* eax_155 = arg4[0x2a]
                                                char eax_157
                                                
                                                if (eax_155 u< arg4[0x2b])
                                                    ecx_34.b = *eax_155
                                                    arg4[0x2a] = &eax_155[1]
                                                    eax_157 = ecx_34.b
                                                else if (arg4[8] == 0)
                                                    eax_157 = 0
                                                else
                                                    void* eax_169
                                                    eax_169, ecx_34 =
                                                        arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                                    
                                                    if (eax_169 != 0)
                                                        arg4[0x2a] = &arg4[0xa]
                                                        arg4[0x2b] = eax_169 + &arg4[0xa]
                                                    else
                                                        arg4[8] = eax_169
                                                        char* eax_171 = arg4[0x2b] - 1
                                                        arg4[0x2a] = eax_171
                                                        *eax_171 = 0
                                                    
                                                    char* eax_173 = arg4[0x2a]
                                                    ecx_34.b = *eax_173
                                                    arg4[0x2a] = &eax_173[1]
                                                    eax_157 = ecx_34.b
                                                
                                                *(result + ebx_12 + 2) = eax_157
                                                char* eax_175 = arg4[0x2a]
                                                char eax_177
                                                
                                                if (eax_175 u< arg4[0x2b])
                                                    ecx_34.b = *eax_175
                                                    arg4[0x2a] = &eax_175[1]
                                                    eax_177 = ecx_34.b
                                                else if (arg4[8] == 0)
                                                    eax_177 = 0
                                                else
                                                    void* eax_179 =
                                                        arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                                    
                                                    if (eax_179 != 0)
                                                        arg4[0x2a] = &arg4[0xa]
                                                        arg4[0x2b] = eax_179 + &arg4[0xa]
                                                    else
                                                        arg4[8] = eax_179
                                                        char* eax_181 = arg4[0x2b] - 1
                                                        arg4[0x2a] = eax_181
                                                        *eax_181 = 0
                                                    
                                                    char* eax_183 = arg4[0x2a]
                                                    char ecx_45 = *eax_183
                                                    arg4[0x2a] = &eax_183[1]
                                                    eax_177 = ecx_45
                                                
                                                *(result + ebx_12 + 1) = eax_177
                                                char* eax_185 = arg4[0x2a]
                                                char eax_187
                                                
                                                if (eax_185 u< arg4[0x2b])
                                                    ecx_34.b = *eax_185
                                                    arg4[0x2a] = &eax_185[1]
                                                    eax_187 = ecx_34.b
                                                else if (arg4[8] == 0)
                                                    eax_187 = 0
                                                else
                                                    void* eax_189
                                                    eax_189, ecx_34 =
                                                        arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                                    
                                                    if (eax_189 != 0)
                                                        arg4[0x2a] = &arg4[0xa]
                                                        arg4[0x2b] = eax_189 + &arg4[0xa]
                                                    else
                                                        arg4[8] = eax_189
                                                        char* eax_191 = arg4[0x2b] - 1
                                                        arg4[0x2a] = eax_191
                                                        *eax_191 = 0
                                                    
                                                    char* eax_193 = arg4[0x2a]
                                                    ecx_34.b = *eax_193
                                                    arg4[0x2a] = &eax_193[1]
                                                    eax_187 = ecx_34.b
                                                
                                                *(ebx_12 + result) = eax_187
                                                ebx_12 += 3
                                                char eax_197
                                                
                                                if (var_434_1 != 2)
                                                    eax_197 = -1
                                                else
                                                    char* eax_195 = arg4[0x2a]
                                                    
                                                    if (eax_195 u< arg4[0x2b])
                                                        ecx_34.b = *eax_195
                                                        arg4[0x2a] = &eax_195[1]
                                                        eax_197 = ecx_34.b
                                                    else if (arg4[8] == 0)
                                                        eax_197 = 0
                                                    else
                                                        void* eax_199
                                                        eax_199, ecx_34 =
                                                            arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                                        
                                                        if (eax_199 != 0)
                                                            arg4[0x2a] = &arg4[0xa]
                                                            arg4[0x2b] = eax_199 + &arg4[0xa]
                                                        else
                                                            arg4[8] = eax_199
                                                            char* eax_201 = arg4[0x2b] - 1
                                                            arg4[0x2a] = eax_201
                                                            *eax_201 = 0
                                                        
                                                        char* eax_203 = arg4[0x2a]
                                                        ecx_34.b = *eax_203
                                                        arg4[0x2a] = &eax_203[1]
                                                        eax_197 = ecx_34.b
                                                
                                                if (eax_74 == 1)
                                                    *(ebx_12 + result) = eax_197
                                                    ebx_12 += 1
                                                
                                                j_1 = j_5 + 1
                                                j_5 = j_1
                                            while (j_1 s< *arg4)
                                            var_41c_1 = ebx_12
                                        
                                        sub_5958f0(arg4, neg.d(eax_151) & 3)
                                        i = i_6 + 1
                                        i_6 = i
                                    while (i s< arg4[1])
                            else
                                int32_t esi_7 = 0
                                
                                if (var_414 == 0 || var_414 s> 0x100)
                                    __free_base(result)
                                    data_273ac1c = "invalid"
                                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                                    return 0
                                
                                int32_t edx_5 = 0
                                int32_t var_410_1 = 0
                                char var_408[0x400]
                                var_407
                                var_406
                                
                                if (var_414 s> 0)
                                    do
                                        char* eax_77 = arg4[0x2a]
                                        char eax_79
                                        char ecx_14
                                        
                                        if (eax_77 u< arg4[0x2b])
                                            ecx_14 = *eax_77
                                            arg4[0x2a] = &eax_77[1]
                                            eax_79 = ecx_14
                                        else if (arg4[8] == 0)
                                            eax_79 = 0
                                        else
                                            int32_t eax_81 = arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                            
                                            if (eax_81 != 0)
                                                arg4[0x2a] = &arg4[0xa]
                                                arg4[0x2b] = &arg4[0xa] + eax_81
                                            else
                                                char* eax_83 = arg4[0x2b] - 1
                                                arg4[8] = 0
                                                arg4[0x2a] = eax_83
                                                *eax_83 = 0
                                            
                                            char* eax_84 = arg4[0x2a]
                                            ecx_14 = *eax_84
                                            ebx_3 = var_424
                                            edx_5 = var_410_1
                                            arg4[0x2a] = &eax_84[1]
                                            eax_79 = ecx_14
                                        
                                        *(&var_406 + (edx_5 << 2)) = eax_79
                                        char* eax_86 = arg4[0x2a]
                                        char eax_88
                                        
                                        if (eax_86 u< arg4[0x2b])
                                            ecx_14 = *eax_86
                                            arg4[0x2a] = &eax_86[1]
                                            eax_88 = ecx_14
                                        else if (arg4[8] == 0)
                                            eax_88 = 0
                                        else
                                            int32_t eax_90 = arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                            
                                            if (eax_90 != 0)
                                                arg4[0x2a] = &arg4[0xa]
                                                arg4[0x2b] = &arg4[0xa] + eax_90
                                            else
                                                char* eax_92 = arg4[0x2b] - 1
                                                arg4[8] = 0
                                                arg4[0x2a] = eax_92
                                                *eax_92 = 0
                                            
                                            char* eax_93 = arg4[0x2a]
                                            ecx_14 = *eax_93
                                            ebx_3 = var_424
                                            edx_5 = var_410_1
                                            arg4[0x2a] = &eax_93[1]
                                            eax_88 = ecx_14
                                        
                                        *(&var_407 + (edx_5 << 2)) = eax_88
                                        char* eax_95 = arg4[0x2a]
                                        char eax_97
                                        
                                        if (eax_95 u< arg4[0x2b])
                                            ecx_14 = *eax_95
                                            arg4[0x2a] = &eax_95[1]
                                            eax_97 = ecx_14
                                        else if (arg4[8] == 0)
                                            eax_97 = 0
                                        else
                                            void* eax_99 = arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                            
                                            if (eax_99 != 0)
                                                arg4[0x2a] = &arg4[0xa]
                                                arg4[0x2b] = eax_99 + &arg4[0xa]
                                            else
                                                char* eax_101 = arg4[0x2b] - 1
                                                arg4[8] = 0
                                                arg4[0x2a] = eax_101
                                                *eax_101 = 0
                                            
                                            char* eax_103 = arg4[0x2a]
                                            ecx_14 = *eax_103
                                            ebx_3 = var_424
                                            edx_5 = var_410_1
                                            arg4[0x2a] = &eax_103[1]
                                            eax_97 = ecx_14
                                        
                                        var_408[edx_5 << 2] = eax_97
                                        
                                        if (ebx_3 != 0xc)
                                            int32_t eax_105 = arg4[0x2a]
                                            
                                            if (eax_105 u< arg4[0x2b])
                                                arg4[0x2a] = eax_105 + 1
                                            else if (arg4[8] != 0)
                                                void* eax_108 = arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                                
                                                if (eax_108 != 0)
                                                    arg4[0x2a] = &arg4[0xa]
                                                    arg4[0x2b] = eax_108 + &arg4[0xa]
                                                else
                                                    char* eax_110 = arg4[0x2b] - 1
                                                    arg4[8] = 0
                                                    arg4[0x2a] = eax_110
                                                    *eax_110 = 0
                                                
                                                arg4[0x2a] += 1
                                                ebx_3 = var_424
                                                edx_5 = var_410_1
                                        
                                        var_405
                                        *(&var_405 + (edx_5 << 2)) = 0xff
                                        edx_5 += 1
                                        var_410_1 = edx_5
                                    while (edx_5 s< var_414)
                                
                                int32_t eax_112
                                eax_112.b = ebx_3 != 0xc
                                sub_5958f0(arg4, eax_19 - (eax_112 + 3) * var_414 - ebx_3 - 0xe)
                                uint32_t eax_118
                                
                                if (eax_33 != 4)
                                    if (eax_33 != 8)
                                        __free_base(result)
                                        data_273ac1c = "bad bpp"
                                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                                        return 0
                                    
                                    eax_118 = *arg4
                                else
                                    eax_118 = (*arg4 + 1) u>> 1
                                
                                uint32_t eax_120 = neg.d(eax_118) & 3
                                int32_t i_5 = 0
                                
                                if (arg4[1] s> 0)
                                    uint32_t result_1 = result
                                    int32_t i_1
                                    
                                    do
                                        int32_t j_4 = 0
                                        
                                        if (*arg4 s> 0)
                                            int32_t j_2
                                            
                                            do
                                                char* eax_121 = arg4[0x2a]
                                                uint32_t eax_123
                                                uint32_t ecx_22
                                                
                                                if (eax_121 u< arg4[0x2b])
                                                    ecx_22.b = *eax_121
                                                    arg4[0x2a] = &eax_121[1]
                                                    eax_123 = zx.d(ecx_22.b)
                                                else if (arg4[8] == 0)
                                                    eax_123 = 0
                                                else
                                                    void* eax_125 =
                                                        arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                                    
                                                    if (eax_125 != 0)
                                                        arg4[0x2a] = &arg4[0xa]
                                                        arg4[0x2b] = eax_125 + &arg4[0xa]
                                                    else
                                                        arg4[8] = eax_125
                                                        char* eax_127 = arg4[0x2b] - 1
                                                        arg4[0x2a] = eax_127
                                                        *eax_127 = 0
                                                    
                                                    char* eax_129 = arg4[0x2a]
                                                    char ecx_24 = *eax_129
                                                    result_1 = result
                                                    arg4[0x2a] = &eax_129[1]
                                                    eax_123 = zx.d(ecx_24)
                                                
                                                ecx_22 = 0
                                                
                                                if (eax_33 == 4)
                                                    ecx_22 = eax_123 & 0xf
                                                    eax_123 s>>= 4
                                                
                                                *(esi_7 + result_1) = var_408[eax_123 << 2]
                                                char edx_16 = *(&var_407 + (eax_123 << 2))
                                                eax_123.b = *(&var_406 + (eax_123 << 2))
                                                *(esi_7 + result_1 + 1) = edx_16
                                                *(esi_7 + result_1 + 2) = eax_123.b
                                                esi_7 += 3
                                                
                                                if (eax_74 == 1)
                                                    *(esi_7 + result_1) = 0xff
                                                    esi_7 += 1
                                                
                                                if (j_4 + 1 == *arg4)
                                                    break
                                                
                                                uint32_t eax_133
                                                int32_t edx_18
                                                
                                                if (eax_33 != 8)
                                                    eax_133 = ecx_22
                                                else
                                                    char* eax_131 = arg4[0x2a]
                                                    
                                                    if (eax_131 u< arg4[0x2b])
                                                        ecx_22.b = *eax_131
                                                        arg4[0x2a] = &eax_131[1]
                                                        eax_133 = zx.d(ecx_22.b)
                                                    else if (arg4[8] == 0)
                                                        eax_133 = 0
                                                    else
                                                        void* eax_135
                                                        eax_135, edx_18, ecx_22 =
                                                            arg4[4](arg4[7], &arg4[0xa], arg4[9])
                                                        
                                                        if (eax_135 != 0)
                                                            arg4[0x2a] = &arg4[0xa]
                                                            arg4[0x2b] = eax_135 + &arg4[0xa]
                                                        else
                                                            arg4[8] = eax_135
                                                            char* eax_137 = arg4[0x2b] - 1
                                                            arg4[0x2a] = eax_137
                                                            *eax_137 = 0
                                                        
                                                        char* eax_139 = arg4[0x2a]
                                                        ecx_22.b = *eax_139
                                                        result_1 = result
                                                        arg4[0x2a] = &eax_139[1]
                                                        eax_133 = zx.d(ecx_22.b)
                                                
                                                ecx_22.b = var_408[eax_133 << 2]
                                                edx_18.b = *(&var_407 + (eax_133 << 2))
                                                eax_133.b = *(&var_406 + (eax_133 << 2))
                                                *(esi_7 + result_1) = ecx_22.b
                                                *(esi_7 + result_1 + 1) = edx_18.b
                                                *(esi_7 + result_1 + 2) = eax_133.b
                                                esi_7 += 3
                                                
                                                if (eax_74 == 1)
                                                    *(esi_7 + result_1) = 0xff
                                                    esi_7 += 1
                                                
                                                j_2 = j_4 + 2
                                                j_4 = j_2
                                            while (j_2 s< *arg4)
                                        
                                        int32_t eax_143
                                        int32_t ecx_27
                                        
                                        if (arg4[4] != 0)
                                            ecx_27 = arg4[0x2b]
                                            eax_143 = ecx_27 - arg4[0x2a]
                                        
                                        if (arg4[4] == 0 || eax_143 s>= eax_120)
                                            arg4[0x2a] += eax_120
                                        else
                                            int32_t edx_20 = arg4[7]
                                            arg4[0x2a] = ecx_27
                                            arg4[5](edx_20, eax_120 - eax_143)
                                        
                                        i_1 = i_5 + 1
                                        i_5 = i_1
                                    while (i_1 s< arg4[1])
                            
                            if (edx_2 != 0)
                                int32_t i_2 = 0
                                int32_t i_7 = 0
                                
                                if ((arg4[1] & 0xfffffffe) s> 0)
                                    do
                                        uint32_t esi_17 = *arg4
                                        char* ecx_65 =
                                            (arg4[1] - i_2 - 1) * esi_17 * (eax_74 + 3) + result
                                        int32_t j_3 = 0
                                        
                                        if (esi_17 * (eax_74 + 3) s> 0)
                                            char* esi_20 = esi_17 * i_2 * (eax_74 + 3) + result - ecx_65
                                            
                                            do
                                                char edx_49 = *(esi_20 + ecx_65)
                                                *(esi_20 + ecx_65) = *ecx_65
                                                *ecx_65 = edx_49
                                                j_3 += 1
                                                ecx_65 = &ecx_65[1]
                                            while (j_3 s< *arg4 * (eax_74 + 3))
                                        
                                        i_2 = i_7 + 1
                                        i_7 = i_2
                                    while (i_2 s< arg4[1] s>> 1)
                            
                            *arg5 = *arg4
                            *var_46c = arg4[1]
                            
                            if (arg2 != 0)
                                *arg2 = arg4[2]
                            
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return result
                        
                        uint32_t eax_44 = sub_595ba0(arg4)
                        
                        if (eax_44 == 1 || eax_44 == 2)
                            data_273ac1c = "BMP RLE"
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return 0
                        
                        sub_595ba0(arg4)
                        sub_595ba0(arg4)
                        sub_595ba0(arg4)
                        sub_595ba0(arg4)
                        sub_595ba0(arg4)
                        
                        if (ebx_3 == 0x28)
                            goto label_59bc64
                        
                        if (ebx_3 != 0x38)
                            esi_5 = sub_595ba0(arg4)
                            var_428 = esi_5
                            var_420 = sub_595ba0(arg4)
                            var_42c = sub_595ba0(arg4)
                            var_43c = sub_595ba0(arg4)
                            sub_595ba0(arg4)
                            int32_t i_4 = 0xc
                            int32_t i_3
                            
                            do
                                sub_595ba0(arg4)
                                i_3 = i_4
                                i_4 -= 1
                            while (i_3 != 1)
                            goto label_59bd2a
                        
                        sub_595ba0(arg4)
                        sub_595ba0(arg4)
                        sub_595ba0(arg4)
                        sub_595ba0(arg4)
                    label_59bc64:
                        
                        if (eax_33 != 0x10 && eax_33 != 0x20)
                            esi_5 = 0
                        label_59bd2a:
                            
                            if (eax_33 s>= 0x10)
                                goto label_59bd51
                            
                            eax_42 = (eax_19 - ebx_3 - 0xe) s>> 2
                            goto label_59bd41
                        
                        if (eax_44 == 0)
                            if (eax_33 != 0x20)
                                esi_5 = 0x7c00
                                var_428 = 0x7c00
                                var_420 = 0x3e0
                                var_42c = 0x1f
                                goto label_59bd2a
                            
                            esi_5 = 0xff0000
                            var_428 = 0xff0000
                            var_420 = 0xff00
                            var_42c = 0xff
                            var_43c = 0xff000000
                            goto label_59bd51
                        
                        if (eax_44 == 3)
                            esi_5 = sub_595ba0(arg4)
                            var_428 = esi_5
                            var_420 = sub_595ba0(arg4)
                            uint32_t eax_69 = sub_595ba0(arg4)
                            var_42c = eax_69
                            
                            if (esi_5 != var_420 || var_420 != eax_69)
                                goto label_59bd2a
                    
                    data_273ac1c = "bad BMP"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
            else if (arg4[8] != 0)
                int32_t eax_11
                eax_11, ecx_1 = arg4[4](arg4[7], &arg4[0xa], arg4[9])
                
                if (eax_11 != 0)
                    arg4[0x2a] = &arg4[0xa]
                    arg4[0x2b] = arg4 + eax_11 + 0x28
                else
                    char* eax_13 = arg4[0x2b] - 1
                    arg4[8] = 0
                    arg4[0x2a] = eax_13
                    *eax_13 = 0
                
                eax_9 = arg4[0x2a]
                goto label_59ba3b
    else if (arg4[8] != 0)
        int32_t eax_5
        eax_5, arg3 = arg4[4](arg4[7], &arg4[0xa], arg4[9])
        
        if (eax_5 != 0)
            arg4[0x2a] = &arg4[0xa]
            arg4[0x2b] = arg4 + eax_5 + 0x28
        else
            char* eax_7 = arg4[0x2b] - 1
            arg4[8] = 0
            arg4[0x2a] = eax_7
            *eax_7 = 0
        
        eax_3 = arg4[0x2a]
        goto label_59b9d3
    
    data_273ac1c = "not BMP"
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

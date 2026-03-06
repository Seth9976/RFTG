// 函数名称: sub_599d30
// 虚拟地址: 0x599d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_599d30(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* ebx = *arg1
    int32_t* ebx = *arg1
    int32_t eax_2 = arg4 * arg5
    int32_t* esi = ebx[2]
    void* edi = arg2
    
    if (data_3168024 != 0)
        arg6 = 1
    
    int32_t result = sub_5a881a(eax_2 * arg6)
    arg1[3] = result
    
    if (result == 0)
        data_273ac1c = "outofmem"
        return result
    
    if (data_3168024 == 0)
        if (*ebx != arg5 || ebx[1] != arg6)
            if (arg3 u< (esi * arg5 + 1) * arg6)
                data_273ac1c = "not enough pixels"
                return 0
        else if (arg3 != (esi * arg5 + 1) * arg6)
            data_273ac1c = "not enough pixels"
            return 0
    
    int32_t var_20 = 0
    
    if (arg6 != 0)
        int32_t eax_129
        
        do
            char* ecx_4 = var_20 * eax_2 + result
            int32_t* edx_10 = ecx_4 - eax_2
            uint32_t ebx_2 = zx.d(*edi)
            uint32_t var_14_1 = ebx_2
            
            if (ebx_2 s> 4)
                data_273ac1c = "invalid filter"
                return 0
            
            if (var_20 == 0)
                ebx_2 = zx.d(*(ebx_2 + 0x8bc818))
                var_14_1 = ebx_2
            
            if (esi s> 0)
                uint32_t edx_11 = edx_10 - (edi + 1)
                char* eax_8 = ecx_4 - (edi + 1)
                char* ebx_3 = edi + 1
                char* var_10_1 = eax_8
                int32_t* i_25 = esi
                int32_t* i
                
                do
                    uint32_t edx_12
                    
                    switch (var_14_1)
                        case 0, 1, 5, 6
                            edx_12.b = *ebx_3
                            *(eax_8 + ebx_3) = edx_12.b
                        case 2
                            edx_12.b = ebx_3[edx_11]
                            edx_12.b += *ebx_3
                            *(eax_8 + ebx_3) = edx_12.b
                        case 3
                            edx_12.b = ebx_3[edx_11]
                            edx_12.b u>>= 1
                            edx_12.b += *ebx_3
                            *(eax_8 + ebx_3) = edx_12.b
                        case 4
                            uint32_t eax_10 = zx.d(ebx_3[edx_11])
                            int32_t eax_11
                            int32_t edx_13
                            edx_13:eax_11 = sx.q(eax_10)
                            int32_t eax_13 = (eax_11 ^ edx_13) - edx_13
                            int32_t edx_15
                            
                            if (eax_13 s> 0 || eax_13 s> eax_13)
                                edx_15.b = *ebx_3
                                edx_15.b += ((0 s> eax_13) - 1) & eax_10.b
                                eax_8 = var_10_1
                                *(eax_8 + ebx_3) = edx_15.b
                            else
                                edx_15.b = *ebx_3
                                edx_15.b = edx_15.b
                                eax_8 = var_10_1
                                *(eax_8 + ebx_3) = edx_15.b
                    
                    ebx_3 = &ebx_3[1]
                    i = i_25
                    i_25 -= 1
                while (i != 1)
                ebx_2 = var_14_1
            
            if (esi != arg4)
                *(ecx_4 + esi) = 0xff
            
            edi = edi + 1 + esi
            void* edx_16 = edx_10 + arg4
            void* ecx_5 = &ecx_4[arg4]
            arg2 = edi
            arg1 = edx_16
            
            if (esi != arg4)
                switch (ebx_2)
                    case 0
                        if (arg5 - 1 u>= 1)
                            int32_t i_17 = arg5 - 1
                            int32_t i_1
                            
                            do
                                if (esi s> 0)
                                    void* eax_74 = ecx_5
                                    arg1 = esi
                                    int32_t* j
                                    
                                    do
                                        ebx_2.b = *(edi - ecx_5 + eax_74)
                                        *eax_74 = ebx_2.b
                                        eax_74 += 1
                                        j = arg1
                                        arg1 -= 1
                                    while (j != 1)
                                
                                *(ecx_5 + esi) = 0xff
                                ecx_5 += arg4
                                edi += esi
                                i_1 = i_17
                                i_17 -= 1
                            while (i_1 != 1)
                    case 1
                        if (arg5 - 1 u>= 1)
                            int32_t i_18 = arg5 - 1
                            void* var_18_3 = ecx_5 - arg4
                            int32_t i_2
                            
                            do
                                void* eax_77 = nullptr
                                void* var_c_6 = nullptr
                                
                                if (esi s> 0)
                                    do
                                        void* edx_61 = eax_77 + ecx_5
                                        eax_77.b = *(var_18_3 + eax_77)
                                        eax_77.b += *(edx_61 + edi - ecx_5)
                                        *edx_61 = eax_77.b
                                        eax_77 = var_c_6 + 1
                                        var_c_6 = eax_77
                                    while (eax_77 s< esi)
                                
                                var_18_3 += arg4
                                *(ecx_5 + esi) = 0xff
                                edi += esi
                                ecx_5 += arg4
                                i_2 = i_18
                                i_18 -= 1
                            while (i_2 != 1)
                    case 2
                        if (arg5 - 1 u>= 1)
                            int32_t i_21 = arg5 - 1
                            int32_t i_3
                            
                            do
                                if (esi s> 0)
                                    int32_t edx_62 = edx_16 - edi
                                    void* eax_82 = edi
                                    int32_t var_8_5 = edx_62
                                    int32_t* var_30_1 = esi
                                    
                                    while (true)
                                        edx_62.b = *(eax_82 + edx_62)
                                        edx_62.b += *eax_82
                                        eax_82 += 1
                                        int32_t* temp16_1 = var_30_1
                                        var_30_1 -= 1
                                        *(eax_82 + ecx_5 - edi - 1) = edx_62.b
                                        
                                        if (temp16_1 == 1)
                                            break
                                        
                                        edx_62 = var_8_5
                                    
                                    edx_16 = arg1
                                
                                *(ecx_5 + esi) = 0xff
                                edx_16 += arg4
                                edi += esi
                                ecx_5 += arg4
                                i_3 = i_21
                                i_21 -= 1
                                arg1 = edx_16
                            while (i_3 != 1)
                    case 3
                        if (arg5 - 1 u>= 1)
                            int32_t i_19 = arg5 - 1
                            void* var_18_4 = ecx_5 - arg4
                            int32_t i_4
                            
                            do
                                int32_t ebx_28 = 0
                                
                                if (esi s> 0)
                                    void* eax_86 = edi
                                    
                                    do
                                        char edx_69 = ((zx.d(*(eax_86 + edx_16 - edi))
                                            + zx.d(*(var_18_4 + ebx_28))) s>> 1).b + *eax_86
                                        ebx_28 += 1
                                        *(eax_86 + ecx_5 - edi) = edx_69
                                        eax_86 += 1
                                    while (ebx_28 s< esi)
                                    
                                    edi = arg2
                                    edx_16 = arg1
                                
                                var_18_4 += arg4
                                *(ecx_5 + esi) = 0xff
                                edi += esi
                                edx_16 += arg4
                                ecx_5 += arg4
                                i_4 = i_19
                                i_19 -= 1
                                arg2 = edi
                                arg1 = edx_16
                            while (i_4 != 1)
                    case 4
                        if (arg5 - 1 u>= 1)
                            int32_t i_24 = arg5 - 1
                            void* var_c_7 = ecx_5 - arg4
                            int32_t i_5
                            
                            do
                                if (esi s> 0)
                                    void* var_10_6 = var_c_7
                                    void* var_14_5 = arg2
                                    int32_t* j_5 = esi
                                    int32_t* j_1
                                    
                                    do
                                        uint32_t ebx_29 = zx.d(*(var_10_6 + arg1 - ecx_5))
                                        uint32_t edx_77 = zx.d(*(var_14_5 + arg1 - arg2))
                                        uint32_t edx_78 = zx.d(*var_10_6)
                                        uint32_t edi_18 = edx_78 - ebx_29 + edx_77
                                        int32_t eax_94
                                        int32_t edx_79
                                        edx_79:eax_94 = sx.q(edi_18 - edx_78)
                                        int32_t ebx_32 = (eax_94 ^ edx_79) - edx_79
                                        int32_t eax_97
                                        int32_t edx_80
                                        edx_80:eax_97 = sx.q(edi_18 - edx_77)
                                        int32_t eax_99 = (eax_97 ^ edx_80) - edx_80
                                        int32_t eax_102
                                        int32_t edx_81
                                        edx_81:eax_102 = sx.q(edi_18 - ebx_29)
                                        int32_t eax_104 = (eax_102 ^ edx_81) - edx_81
                                        char eax_106
                                        
                                        if (ebx_32 s> eax_99 || ebx_32 s> eax_104)
                                            eax_106 = edx_77.b
                                            
                                            if (eax_99 s> eax_104)
                                                eax_106 = ebx_29.b
                                        else
                                            eax_106 = *var_10_6
                                        
                                        edx_81.b = *var_14_5
                                        edx_81.b += eax_106
                                        *(var_10_6 + arg4) = edx_81.b
                                        j_1 = j_5
                                        j_5 -= 1
                                        var_10_6 += 1
                                        var_14_5 += 1
                                    while (j_1 != 1)
                                
                                arg2 += esi
                                var_c_7 += arg4
                                arg1 += arg4
                                *(ecx_5 + esi) = 0xff
                                ecx_5 += arg4
                                i_5 = i_24
                                i_24 -= 1
                            while (i_5 != 1)
                            edi = arg2
                    case 5
                        if (arg5 - 1 u>= 1)
                            int32_t i_20 = arg5 - 1
                            char* var_1c_5 = ecx_5 - arg4
                            int32_t i_6
                            
                            do
                                void* eax_112 = nullptr
                                void* var_c_8 = nullptr
                                
                                if (esi s> 0)
                                    do
                                        void* edx_86 = eax_112 + ecx_5
                                        eax_112.b = *(var_1c_5 + eax_112)
                                        eax_112.b u>>= 1
                                        eax_112.b += *(edx_86 + edi - ecx_5)
                                        *edx_86 = eax_112.b
                                        eax_112 = var_c_8 + 1
                                        var_c_8 = eax_112
                                    while (eax_112 s< esi)
                                
                                var_1c_5 = &var_1c_5[arg4]
                                *(ecx_5 + esi) = 0xff
                                edi += esi
                                ecx_5 += arg4
                                i_6 = i_20
                                i_20 -= 1
                            while (i_6 != 1)
                    case 6
                        if (arg5 - 1 u>= 1)
                            int32_t i_23 = arg5 - 1
                            char* var_10_7 = ecx_5 - arg4
                            int32_t i_7
                            
                            do
                                void* ebx_37 = nullptr
                                
                                if (esi s> 0)
                                    do
                                        int32_t eax_121
                                        int32_t edx_91
                                        edx_91:eax_121 = sx.q(zx.d(*(var_10_7 + ebx_37)))
                                        char var_2c_4
                                        
                                        if (0 s> (eax_121 ^ edx_91) - edx_91)
                                            var_2c_4 = 0
                                        else
                                            var_2c_4 = *(var_10_7 + ebx_37)
                                        
                                        char* eax_126
                                        eax_126.b = *(ebx_37 + ecx_5 + edi - ecx_5)
                                        eax_126.b += var_2c_4
                                        ebx_37 += 1
                                        *(ebx_37 + ecx_5 - 1) = eax_126.b
                                    while (ebx_37 s< esi)
                                
                                var_10_7 = &var_10_7[arg4]
                                *(ecx_5 + esi) = 0xff
                                edi += esi
                                ecx_5 += arg4
                                i_7 = i_23
                                i_23 -= 1
                            while (i_7 != 1)
            else
                switch (ebx_2)
                    case 0
                        if (arg5 - 1 u>= 1)
                            int32_t i_26 = arg5 - 1
                            int32_t i_8
                            
                            do
                                if (esi s> 0)
                                    void* eax_21 = ecx_5
                                    arg1 = esi
                                    int32_t* j_2
                                    
                                    do
                                        *eax_21 = *(edi - ecx_5 + eax_21)
                                        eax_21 += 1
                                        j_2 = arg1
                                        arg1 -= 1
                                    while (j_2 != 1)
                                
                                edi += esi
                                ecx_5 += esi
                                i_8 = i_26
                                i_26 -= 1
                            while (i_8 != 1)
                    case 1
                        if (arg5 - 1 u>= 1)
                            char* var_14_2 = ecx_5 - esi
                            int32_t i_27 = arg5 - 1
                            int32_t i_9
                            
                            do
                                void* eax_24 = nullptr
                                void* var_c_2 = nullptr
                                
                                if (esi s> 0)
                                    do
                                        void* edx_23 = eax_24 + ecx_5
                                        eax_24.b = *(var_14_2 + eax_24)
                                        eax_24.b += *(edx_23 + edi - ecx_5)
                                        *edx_23 = eax_24.b
                                        eax_24 = var_c_2 + 1
                                        var_c_2 = eax_24
                                    while (eax_24 s< esi)
                                
                                var_14_2 += esi
                                edi += esi
                                ecx_5 += esi
                                i_9 = i_27
                                i_27 -= 1
                            while (i_9 != 1)
                    case 2
                        if (arg5 - 1 u>= 1)
                            int32_t i_28 = arg5 - 1
                            void* ecx_6 = ecx_5
                            int32_t i_10
                            
                            do
                                if (esi s> 0)
                                    int32_t edx_24 = edx_16 - edi
                                    char* eax_28 = edi
                                    int32_t var_8_2 = edx_24
                                    int32_t* var_1c_1 = esi
                                    
                                    while (true)
                                        edx_24.b = eax_28[edx_24]
                                        edx_24.b += *eax_28
                                        eax_28 = &eax_28[1]
                                        int32_t* temp18_1 = var_1c_1
                                        var_1c_1 -= 1
                                        eax_28[ecx_6 - edi - 1] = edx_24.b
                                        
                                        if (temp18_1 == 1)
                                            break
                                        
                                        edx_24 = var_8_2
                                    
                                    edx_16 = arg1
                                
                                edx_16 += esi
                                edi += esi
                                ecx_6 += esi
                                i_10 = i_28
                                i_28 -= 1
                                arg1 = edx_16
                            while (i_10 != 1)
                    case 3
                        if (arg5 - 1 u>= 1)
                            void* var_14_3 = ecx_5 - esi
                            int32_t i_29 = arg5 - 1
                            int32_t i_11
                            
                            do
                                int32_t ebx_11 = 0
                                int32_t var_c_3 = 0
                                
                                if (esi s> 0)
                                    void* eax_31 = edi
                                    void* var_1c_2 = eax_31
                                    
                                    do
                                        char edx_31 = ((zx.d(*(eax_31 + edx_16 - edi))
                                            + zx.d(*(var_14_3 + ebx_11))) s>> 1).b + *var_1c_2
                                        eax_31 = var_1c_2 + 1
                                        *(eax_31 + ecx_5 - edi - 1) = edx_31
                                        ebx_11 = var_c_3 + 1
                                        var_c_3 = ebx_11
                                        var_1c_2 = eax_31
                                    while (ebx_11 s< esi)
                                    
                                    edx_16 = arg1
                                
                                var_14_3 += esi
                                edx_16 += esi
                                edi += esi
                                ecx_5 += esi
                                i_11 = i_29
                                i_29 -= 1
                                arg1 = edx_16
                            while (i_11 != 1)
                    case 4
                        if (arg5 - 1 u>= 1)
                            void* var_18_1 = ecx_5 - esi
                            int32_t i_15 = arg5 - 1
                            void* ecx_7 = ecx_5
                            int32_t i_12
                            
                            do
                                if (esi s> 0)
                                    void* var_10_3 = var_18_1
                                    void* var_c_4 = arg2
                                    int32_t* j_4 = esi
                                    int32_t* j_3
                                    
                                    do
                                        uint32_t ebx_14 = zx.d(*(arg1 - ecx_7 + var_10_3))
                                        uint32_t edx_39 = zx.d(*(var_c_4 + arg1 - arg2))
                                        uint32_t edx_40 = zx.d(*var_10_3)
                                        uint32_t edi_7 = edx_40 - ebx_14 + edx_39
                                        int32_t eax_41
                                        int32_t edx_41
                                        edx_41:eax_41 = sx.q(edi_7 - edx_40)
                                        int32_t ebx_17 = (eax_41 ^ edx_41) - edx_41
                                        int32_t eax_44
                                        int32_t edx_42
                                        edx_42:eax_44 = sx.q(edi_7 - edx_39)
                                        int32_t eax_46 = (eax_44 ^ edx_42) - edx_42
                                        int32_t eax_49
                                        int32_t edx_43
                                        edx_43:eax_49 = sx.q(edi_7 - ebx_14)
                                        int32_t eax_51 = (eax_49 ^ edx_43) - edx_43
                                        char eax_53
                                        
                                        if (ebx_17 s> eax_46 || ebx_17 s> eax_51)
                                            eax_53 = edx_39.b
                                            
                                            if (eax_46 s> eax_51)
                                                eax_53 = ebx_14.b
                                        else
                                            eax_53 = *var_10_3
                                        
                                        edx_43.b = *var_c_4
                                        edx_43.b += eax_53
                                        *(var_10_3 + esi) = edx_43.b
                                        j_3 = j_4
                                        j_4 -= 1
                                        var_10_3 += 1
                                        var_c_4 += 1
                                    while (j_3 != 1)
                                
                                arg2 += esi
                                var_18_1 += esi
                                arg1 += esi
                                ecx_7 += esi
                                i_12 = i_15
                                i_15 -= 1
                            while (i_12 != 1)
                            edi = arg2
                    case 5
                        if (arg5 - 1 u>= 1)
                            char* var_18_2 = ecx_5 - esi
                            int32_t i_16 = arg5 - 1
                            int32_t i_13
                            
                            do
                                void* eax_58 = nullptr
                                void* var_c_5 = nullptr
                                
                                if (esi s> 0)
                                    do
                                        void* edx_48 = eax_58 + ecx_5
                                        eax_58.b = *(var_18_2 + eax_58)
                                        eax_58.b u>>= 1
                                        eax_58.b += *(edx_48 + edi - ecx_5)
                                        *edx_48 = eax_58.b
                                        eax_58 = var_c_5 + 1
                                        var_c_5 = eax_58
                                    while (eax_58 s< esi)
                                
                                var_18_2 += esi
                                edi += esi
                                ecx_5 += esi
                                i_13 = i_16
                                i_16 -= 1
                            while (i_13 != 1)
                    case 6
                        if (arg5 - 1 u>= 1)
                            void* var_10_4 = ecx_5 - esi
                            int32_t i_22 = arg5 - 1
                            int32_t i_14
                            
                            do
                                void* ebx_20 = nullptr
                                
                                if (esi s> 0)
                                    do
                                        int32_t eax_66
                                        int32_t edx_53
                                        edx_53:eax_66 = sx.q(zx.d(*(ebx_20 + var_10_4)))
                                        char var_2c_2
                                        
                                        if (0 s> (eax_66 ^ edx_53) - edx_53)
                                            var_2c_2 = 0
                                        else
                                            var_2c_2 = *(ebx_20 + var_10_4)
                                        
                                        char* eax_71
                                        eax_71.b = *(ebx_20 + ecx_5 + edi - ecx_5)
                                        eax_71.b += var_2c_2
                                        ebx_20 += 1
                                        *(ebx_20 + ecx_5 - 1) = eax_71.b
                                    while (ebx_20 s< esi)
                                
                                var_10_4 += esi
                                edi += esi
                                ecx_5 += esi
                                i_14 = i_22
                                i_22 -= 1
                            while (i_14 != 1)
            
            eax_129 = var_20 + 1
            var_20 = eax_129
        while (eax_129 u< arg6)
    
    return 1
}

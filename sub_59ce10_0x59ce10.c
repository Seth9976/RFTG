// 函数名称: sub_59ce10
// 虚拟地址: 0x59ce10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_59ce10(void* arg1, uint32_t* arg2, uint32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: char* eax = *(arg1 + 0xa8)
    char* eax = *(arg1 + 0xa8)
    char eax_2
    
    if (eax u< *(arg1 + 0xac))
        char ecx = *eax
        *(arg1 + 0xa8) = &eax[1]
        eax_2 = ecx
    else if (*(arg1 + 0x20) == 0)
        eax_2 = 0
    else
        int32_t eax_4 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_4 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_4 + arg1 + 0x28
        else
            char* eax_6 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_6
            *eax_6 = 0
        
        char* eax_8 = *(arg1 + 0xa8)
        char ecx_2 = *eax_8
        *(arg1 + 0xa8) = &eax_8[1]
        eax_2 = ecx_2
    
    char* eax_10 = *(arg1 + 0xa8)
    uint32_t var_c = zx.d(eax_2)
    char eax_12
    uint32_t ecx_3
    
    if (eax_10 u< *(arg1 + 0xac))
        ecx_3.b = *eax_10
        *(arg1 + 0xa8) = &eax_10[1]
        eax_12 = ecx_3.b
    else if (*(arg1 + 0x20) == 0)
        eax_12 = 0
    else
        int32_t eax_14
        eax_14, ecx_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_14 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_14 + arg1 + 0x28
        else
            char* eax_16 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_16
            *eax_16 = 0
        
        char* eax_17 = *(arg1 + 0xa8)
        ecx_3.b = *eax_17
        *(arg1 + 0xa8) = &eax_17[1]
        eax_12 = ecx_3.b
    
    uint32_t eax_19 = zx.d(eax_12)
    char* eax_20 = *(arg1 + 0xa8)
    char eax_22
    
    if (eax_20 u< *(arg1 + 0xac))
        ecx_3.b = *eax_20
        *(arg1 + 0xa8) = &eax_20[1]
        eax_22 = ecx_3.b
    else if (*(arg1 + 0x20) == 0)
        eax_22 = 0
    else
        int32_t eax_24
        void* ecx_6
        eax_24, ecx_6 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_24 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_24 + arg1 + 0x28
        else
            char* eax_26 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_26
            *eax_26 = 0
        
        char* eax_27 = *(arg1 + 0xa8)
        ecx_6.b = *eax_27
        *(arg1 + 0xa8) = &eax_27[1]
        eax_22 = ecx_6.b
    
    int32_t var_34 = 0
    uint32_t eax_29 = sub_595ac0(arg1)
    uint32_t eax_30 = sub_595ac0(arg1)
    char* eax_31 = *(arg1 + 0xa8)
    char eax_33
    
    if (eax_31 u< *(arg1 + 0xac))
        char ecx_7 = *eax_31
        *(arg1 + 0xa8) = &eax_31[1]
        eax_33 = ecx_7
    else if (*(arg1 + 0x20) == 0)
        eax_33 = 0
    else
        int32_t eax_35 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_35 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_35 + arg1 + 0x28
        else
            char* eax_37 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_37
            *eax_37 = 0
        
        char* eax_39 = *(arg1 + 0xa8)
        char ecx_9 = *eax_39
        *(arg1 + 0xa8) = &eax_39[1]
        eax_33 = ecx_9
    
    uint32_t ecx_10 = zx.d(eax_33)
    sub_595ac0(arg1)
    sub_595ac0(arg1)
    uint32_t eax_41 = sub_595ac0(arg1)
    uint32_t eax_42 = sub_595ac0(arg1)
    char* eax_43 = *(arg1 + 0xa8)
    char eax_45
    char ecx_11
    
    if (eax_43 u< *(arg1 + 0xac))
        ecx_11 = *eax_43
        *(arg1 + 0xa8) = &eax_43[1]
        eax_45 = ecx_11
    else if (*(arg1 + 0x20) == 0)
        eax_45 = 0
    else
        int32_t eax_47 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_47 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_47 + arg1 + 0x28
        else
            char* eax_49 = *(arg1 + 0xac) - 1
            *(arg1 + 0x20) = 0
            *(arg1 + 0xa8) = eax_49
            *eax_49 = 0
        
        char* eax_50 = *(arg1 + 0xa8)
        ecx_11 = *eax_50
        *(arg1 + 0xa8) = &eax_50[1]
        eax_45 = ecx_11
    
    uint32_t ebx = zx.d(eax_45)
    char* eax_52 = *(arg1 + 0xa8)
    uint32_t var_10 = ebx
    char eax_54
    
    if (eax_52 u< *(arg1 + 0xac))
        ecx_11 = *eax_52
        *(arg1 + 0xa8) = &eax_52[1]
        eax_54 = ecx_11
    else if (*(arg1 + 0x20) == 0)
        eax_54 = 0
    else
        int32_t eax_56 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_56 != 0)
            *(arg1 + 0xa8) = arg1 + 0x28
            *(arg1 + 0xac) = eax_56 + arg1 + 0x28
        else
            *(arg1 + 0x20) = eax_56
            char* eax_58 = *(arg1 + 0xac) - 1
            *(arg1 + 0xa8) = eax_58
            *eax_58 = 0
        
        char* eax_60 = *(arg1 + 0xa8)
        char ecx_14 = *eax_60
        *(arg1 + 0xa8) = &eax_60[1]
        eax_54 = ecx_14
    
    uint32_t edi_7 = zx.d(eax_22)
    int128_t* var_1c = nullptr
    char* var_20 = nullptr
    int32_t var_38 = 0
    int32_t var_40 = 1
    
    if (edi_7 s>= 8)
        edi_7 -= 8
        var_34 = 1
    
    if (eax_41 s>= 1 && eax_42 s>= 1 && edi_7 - 1 u<= 2
            && (ebx == 8 || ebx == 0x10 || ebx == 0x18 || ebx == 0x20))
        if (eax_19 != 0)
            ebx = ecx_10
            var_10 = ebx
        
        *arg2 = eax_41
        *arg3 = eax_42
        int32_t i_4 = eax_42 * eax_41
        int32_t eax_67
        int32_t edx_11
        edx_11:eax_67 = sx.q(ebx)
        int32_t eax_69 = (eax_67 + (edx_11 & 7)) s>> 3
        *arg4 = eax_69
        void* result_1 = sub_5a881a(i_4 * eax_69)
        void* result = result_1
        
        if (result_1 != 0)
            sub_5958f0(arg1, var_c)
            char* ecx_19
            
            if (eax_19 == 0)
            label_59d243:
                int32_t var_8_1 = 0
                
                if (i_4 s> 0)
                    void* edx_19 = result_1 + 1
                    uint16_t ebx_3 = var_c.w
                    void* var_24_1 = edx_19
                    int32_t i_3 = i_4
                    int32_t i
                    
                    do
                        if (var_34 == 0)
                        label_59d312:
                            
                            if (eax_19 != 0)
                                char* eax_93 = *(arg1 + 0xa8)
                                char eax_95
                                
                                if (eax_93 u< *(arg1 + 0xac))
                                    ecx_19.b = *eax_93
                                    *(arg1 + 0xa8) = &eax_93[1]
                                    eax_95 = ecx_19.b
                                else if (*(arg1 + 0x20) == 0)
                                    eax_95 = 0
                                else
                                    int32_t eax_97 =
                                        (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                    
                                    if (eax_97 != 0)
                                        *(arg1 + 0xa8) = arg1 + 0x28
                                        *(arg1 + 0xac) = arg1 + 0x28 + eax_97
                                    else
                                        *(arg1 + 0x20) = eax_97
                                        char* eax_99 = *(arg1 + 0xac) - 1
                                        *(arg1 + 0xa8) = eax_99
                                        *eax_99 = 0
                                    
                                    char* eax_100 = *(arg1 + 0xa8)
                                    char ecx_26 = *eax_100
                                    edx_19 = var_24_1
                                    *(arg1 + 0xa8) = &eax_100[1]
                                    eax_95 = ecx_26
                                
                                ecx_19 = zx.d(eax_95)
                                
                                if (ecx_19 s>= eax_30)
                                    ecx_19 = nullptr
                                
                                if (var_10 s> 0)
                                    int32_t edi_15 = 0
                                    void* eax_104 = eax_69 * ecx_19 + var_1c
                                    ecx_19 = &var_c
                                    
                                    do
                                        ebx_3.b = *eax_104
                                        *ecx_19 = ebx_3.b
                                        edi_15 += 8
                                        eax_104 += 1
                                        ecx_19 = &ecx_19[1]
                                    while (edi_15 s< var_10)
                                    
                                    ebx_3 = var_c.w
                            else if (var_10 s> 0)
                                int32_t var_40_1 = 0
                                uint32_t* ebx_4 = &var_c
                                int32_t eax_115
                                
                                do
                                    char* eax_105 = *(arg1 + 0xa8)
                                    char eax_107
                                    
                                    if (eax_105 u< *(arg1 + 0xac))
                                        ecx_19.b = *eax_105
                                        *(arg1 + 0xa8) = &eax_105[1]
                                        eax_107 = ecx_19.b
                                    else if (*(arg1 + 0x20) == 0)
                                        eax_107 = 0
                                    else
                                        int32_t eax_109
                                        eax_109, ecx_19 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, 
                                            *(arg1 + 0x24))
                                        
                                        if (eax_109 != 0)
                                            *(arg1 + 0xa8) = arg1 + 0x28
                                            *(arg1 + 0xac) = arg1 + 0x28 + eax_109
                                        else
                                            *(arg1 + 0x20) = eax_109
                                            char* eax_111 = *(arg1 + 0xac) - 1
                                            *(arg1 + 0xa8) = eax_111
                                            *eax_111 = 0
                                        
                                        char* eax_112 = *(arg1 + 0xa8)
                                        ecx_19.b = *eax_112
                                        edx_19 = var_24_1
                                        *(arg1 + 0xa8) = &eax_112[1]
                                        eax_107 = ecx_19.b
                                    
                                    *ebx_4 = eax_107
                                    eax_115 = var_40_1 + 8
                                    ebx_4 += 1
                                    var_40_1 = eax_115
                                while (eax_115 s< var_10)
                                ebx_3 = var_c.w
                            
                            if (var_10 - 8 u<= 0x18)
                                switch (var_10 + &jump_table_59d5f0[3])
                                    case &lookup_table_59d604
                                        var_8_1.b = ebx_3.b
                                        var_8_1:1.b = ebx_3.b
                                        var_8_1:3.b = 0xff
                                        var_8_1:2.b = ebx_3.b
                                    case &lookup_table_59d604[8]
                                        var_8_1.b = ebx_3.b
                                        var_8_1:1.b = ebx_3.b
                                        var_8_1:3.b = ebx_3:1.b
                                        var_8_1:2.b = ebx_3.b
                                    case &lookup_table_59d604[0x10]
                                        ecx_19.b = var_c:2.b
                                        var_8_1.b = ecx_19.b
                                        var_8_1:3.b = 0xff
                                        var_8_1:1.b = ebx_3:1.b
                                        var_8_1:2.b = ebx_3.b
                                    case &lookup_table_59d604[0x18]
                                        uint32_t eax_118
                                        eax_118.b = var_c:2.b
                                        ecx_19.b = var_c:3.b
                                        var_8_1.b = eax_118.b
                                        var_8_1:3.b = ecx_19.b
                                        var_8_1:1.b = ebx_3:1.b
                                        var_8_1:2.b = ebx_3.b
                            
                            var_40 = 0
                        else
                            if (var_20 == 0)
                                char* eax_82 = *(arg1 + 0xa8)
                                char eax_84
                                
                                if (eax_82 u< *(arg1 + 0xac))
                                    ecx_19.b = *eax_82
                                    *(arg1 + 0xa8) = &eax_82[1]
                                    eax_84 = ecx_19.b
                                else if (*(arg1 + 0x20) == 0)
                                    eax_84 = 0
                                else
                                    int32_t eax_86 =
                                        (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                    
                                    if (eax_86 != 0)
                                        *(arg1 + 0xa8) = arg1 + 0x28
                                        *(arg1 + 0xac) = arg1 + 0x28 + eax_86
                                    else
                                        *(arg1 + 0x20) = eax_86
                                        char* eax_88 = *(arg1 + 0xac) - 1
                                        *(arg1 + 0xa8) = eax_88
                                        *eax_88 = 0
                                    
                                    char* eax_89 = *(arg1 + 0xa8)
                                    char ecx_22 = *eax_89
                                    edx_19 = var_24_1
                                    *(arg1 + 0xa8) = &eax_89[1]
                                    eax_84 = ecx_22
                                
                                uint32_t eax_91 = zx.d(eax_84)
                                var_20 = (eax_91 & 0x7f) + 1
                                var_38 = eax_91 s>> 7
                                goto label_59d312
                            
                            if (var_38 == 0 || var_40 != 0)
                                goto label_59d312
                        
                        if (eax_69 - 1 u<= 3)
                            switch (eax_69)
                                case 1
                                    *(edx_19 - 1) = ((zx.d(var_8_1:1.b) * 0x96 + zx.d(var_8_1.b) * 0x4d
                                        + zx.d(var_8_1:2.b) * 0x1d) s>> 8).b
                                case 2
                                    *(edx_19 - 1) = ((zx.d(var_8_1:1.b) * 0x96 + zx.d(var_8_1.b) * 0x4d
                                        + zx.d(var_8_1:2.b) * 0x1d) s>> 8).b
                                    *edx_19 = var_8_1:3.b
                                case 3
                                    int32_t eax_120
                                    eax_120.b = var_8_1:1.b
                                    *(edx_19 - 1) = var_8_1.b
                                    *edx_19 = eax_120.b
                                    *(edx_19 + 1) = var_8_1:2.b
                                case 4
                                    *(edx_19 - 1) = var_8_1.b
                                    *edx_19 = var_8_1:1.b
                                    *(edx_19 + 1) = var_8_1:2.b
                                    *(edx_19 + 2) = var_8_1:3.b
                        
                        edx_19 += eax_69
                        var_20 -= 1
                        i = i_3
                        i_3 -= 1
                        var_24_1 = edx_19
                    while (i != 1)
                
                if (1 - (zx.d(eax_54) s>> 5 & 1) != 0)
                    int32_t var_44_1 = 0
                    
                    if (eax_42 s> 0)
                        int32_t i_1 = eax_41 * eax_69
                        int32_t edx_23 = 0
                        int32_t i_2 = i_1
                        void* edi_18 = nullptr
                        
                        do
                            if (i_1 s> 0)
                                char* ecx_36 = edi_18 + result
                                char* eax_139 =
                                    (eax_42 - edx_23 - 1) * eax_41 * eax_69 + edi_18 + result
                                
                                do
                                    void* ebx_5
                                    ebx_5.b = *eax_139
                                    edx_23.b = *ecx_36
                                    *ecx_36 = ebx_5.b
                                    *eax_139 = edx_23.b
                                    i_1 -= 1
                                    ecx_36 = &ecx_36[1]
                                    eax_139 = &eax_139[1]
                                while (i_1 s> 0)
                                
                                i_1 = i_2
                            
                            edx_23 = (var_44_1 + 1) * 2
                            edi_18 += i_1
                            var_44_1 += 1
                        while (edx_23 s< eax_42)
                
                if (var_1c != 0)
                    __free_base(var_1c)
                
                return result
            
            sub_5958f0(arg1, eax_29)
            int32_t eax_76
            int32_t edx_16
            edx_16:eax_76 = sx.q(ecx_10 * eax_30)
            int32_t ebx_2 = ((edx_16 & 7) + eax_76) s>> 3
            int128_t* eax_77 = sub_5a881a(ebx_2)
            var_1c = eax_77
            
            if (eax_77 != 0)
                int128_t* var_58_9 = eax_77
                int32_t eax_79
                eax_79, ecx_19 = sub_595930(ebx_2, arg1, eax_77)
                
                if (eax_79 != 0)
                    result_1 = result
                    goto label_59d243
                
                __free_base(result)
                __free_base(var_1c)
                data_273ac1c = "bad palette"
                return 0
        
        data_273ac1c = "outofmem"
    
    return 0
}

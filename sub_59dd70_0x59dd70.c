// 函数名称: sub_59dd70
// 虚拟地址: 0x59dd70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_59dd70(int32_t arg1, char* arg2, int32_t* arg3, void* arg4, void* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_34 = 0
    uint32_t ecx = 0
    void var_28
    void* eax_3 = &var_28
    uint32_t var_54_1
    
    while (true)
        if (ecx != 0xa)
            char* eax_5 = *(arg4 + 0xa8)
            var_54_1 = ecx + 1
            uint32_t var_2c_1
            uint32_t ecx_1
            
            if (eax_5 u< *(arg4 + 0xac))
                ecx_1.b = *eax_5
                *(arg4 + 0xa8) = &eax_5[1]
                var_2c_1 = zx.d(ecx_1.b)
            else if (*(arg4 + 0x20) == 0)
                var_2c_1 = 0
            else
                int32_t eax_9 = (*(arg4 + 0x10))(*(arg4 + 0x1c), arg4 + 0x28, *(arg4 + 0x24))
                
                if (eax_9 != 0)
                    *(arg4 + 0xa8) = arg4 + 0x28
                    *(arg4 + 0xac) = arg4 + 0x28 + eax_9
                else
                    char* eax_11 = *(arg4 + 0xac) - 1
                    *(arg4 + 0x20) = 0
                    *(arg4 + 0xa8) = eax_11
                    *eax_11 = 0
                
                char* eax_12 = *(arg4 + 0xa8)
                ecx_1 = zx.d(*eax_12)
                *(arg4 + 0xa8) = &eax_12[1]
                var_2c_1 = ecx_1
            
            char* eax_14 = *(arg4 + 0xa8)
            char ebx_1
            
            if (eax_14 u< *(arg4 + 0xac))
                ecx_1.b = *eax_14
                *(arg4 + 0xa8) = &eax_14[1]
                ebx_1 = ecx_1.b
            else if (*(arg4 + 0x20) == 0)
                ebx_1 = 0
            else
                int32_t eax_17
                eax_17, ecx_1 = (*(arg4 + 0x10))(*(arg4 + 0x1c), arg4 + 0x28, *(arg4 + 0x24))
                
                if (eax_17 != 0)
                    *(arg4 + 0xa8) = arg4 + 0x28
                    *(arg4 + 0xac) = arg4 + 0x28 + eax_17
                else
                    char* eax_19 = *(arg4 + 0xac) - 1
                    *(arg4 + 0x20) = 0
                    *(arg4 + 0xa8) = eax_19
                    *eax_19 = 0
                
                char* eax_20 = *(arg4 + 0xa8)
                ecx_1.b = *eax_20
                *(arg4 + 0xa8) = &eax_20[1]
                ebx_1 = ecx_1.b
            
            char* eax_22 = *(arg4 + 0xa8)
            *eax_3 = ebx_1
            char eax_24
            
            if (eax_22 u< *(arg4 + 0xac))
                ecx_1.b = *eax_22
                *(arg4 + 0xa8) = &eax_22[1]
                eax_24 = ecx_1.b
            else if (*(arg4 + 0x20) == 0)
                eax_24 = 0
            else
                int32_t eax_26 = (*(arg4 + 0x10))(*(arg4 + 0x1c), arg4 + 0x28, *(arg4 + 0x24))
                
                if (eax_26 != 0)
                    *(arg4 + 0xa8) = arg4 + 0x28
                    *(arg4 + 0xac) = arg4 + 0x28 + eax_26
                else
                    *(arg4 + 0x20) = eax_26
                    char* eax_28 = *(arg4 + 0xac) - 1
                    *(arg4 + 0xa8) = eax_28
                    *eax_28 = 0
                
                char* eax_29 = *(arg4 + 0xa8)
                char ecx_6 = *eax_29
                *(arg4 + 0xa8) = &eax_29[1]
                eax_24 = ecx_6
            
            *(eax_3 + 1) = eax_24
            char* eax_31 = *(arg4 + 0xa8)
            char eax_33
            
            if (eax_31 u< *(arg4 + 0xac))
                void* ecx_7
                ecx_7.b = *eax_31
                *(arg4 + 0xa8) = &eax_31[1]
                eax_33 = ecx_7.b
            else if (*(arg4 + 0x20) == 0)
                eax_33 = 0
            else
                int32_t eax_35 = (*(arg4 + 0x10))(*(arg4 + 0x1c), arg4 + 0x28, *(arg4 + 0x24))
                
                if (eax_35 != 0)
                    *(arg4 + 0xa8) = arg4 + 0x28
                    *(arg4 + 0xac) = arg4 + 0x28 + eax_35
                else
                    *(arg4 + 0x20) = eax_35
                    char* eax_37 = *(arg4 + 0xac) - 1
                    *(arg4 + 0xa8) = eax_37
                    *eax_37 = 0
                
                char* eax_38 = *(arg4 + 0xa8)
                char ecx_9 = *eax_38
                *(arg4 + 0xa8) = &eax_38[1]
                eax_33 = ecx_9
            
            *(eax_3 + 2) = eax_33
            var_34 |= zx.d(eax_33)
            
            if (*(arg4 + 0x10) == 0)
            label_59dfba:
                int32_t eax_42 = *(arg4 + 0xa8)
                
                if (sbb.d(eax_42, eax_42, eax_42 u< *(arg4 + 0xac)) != 0xffffffff)
                label_59e002:
                    data_273ac1c = "bad file"
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
            else if ((*(arg4 + 0x18))(*(arg4 + 0x1c)) != 0)
                if (*(arg4 + 0x20) == 0)
                    goto label_59e002
                
                goto label_59dfba
            
            if (ebx_1 == 8)
                if (var_2c_1 == 0)
                    break
                
                ecx = var_54_1
                eax_3 += 3
                continue
        
    label_59dfe3:
        data_273ac1c = "bad format"
    label_59dff7:
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t ecx_15
    ecx_15.b = (var_34.b & 0x10) != 0
    int32_t var_4c_2 = 0
    *arg3 = ecx_15 + 3
    
    if (arg6 s> 0)
        char* var_50_1 = arg2
        int32_t ecx_27
        
        do
            int32_t var_48_1 = 0
            
            if (var_54_1 s> 0)
                void* var_34_1 = &var_28
                int32_t eax_89
                
                do
                    uint32_t eax_48 = zx.d(*(var_34_1 + 1))
                    char* edi_9 = var_50_1
                    void* i
                    
                    if (eax_48 == 0)
                        int32_t ebx_10 = 0
                        
                        if (arg5 s> 0)
                            uint32_t edx_17 = zx.d(*(var_34_1 + 2))
                            
                            do
                                int32_t eax_87
                                eax_87, i = sub_59dc70(arg4, edx_17, edi_9)
                                
                                if (eax_87 == 0)
                                    goto label_59dff7
                                
                                ebx_10 += 1
                                edi_9 = &edi_9[4]
                            while (ebx_10 s< arg5)
                    else if (eax_48 == 1)
                        void* i_3 = arg5
                        
                        if (arg5 s> 0)
                            do
                                char* eax_71 = *(arg4 + 0xa8)
                                char j_9
                                
                                if (eax_71 u< *(arg4 + 0xac))
                                    i.b = *eax_71
                                    *(arg4 + 0xa8) = &eax_71[1]
                                    j_9 = i.b
                                else if (*(arg4 + 0x20) == 0)
                                    j_9 = 0
                                else
                                    int32_t eax_74 =
                                        (*(arg4 + 0x10))(*(arg4 + 0x1c), arg4 + 0x28, *(arg4 + 0x24))
                                    
                                    if (eax_74 != 0)
                                        *(arg4 + 0xa8) = arg4 + 0x28
                                        *(arg4 + 0xac) = arg4 + 0x28 + eax_74
                                    else
                                        *(arg4 + 0x20) = eax_74
                                        char* eax_76 = *(arg4 + 0xac) - 1
                                        *(arg4 + 0xa8) = eax_76
                                        *eax_76 = 0
                                    
                                    char* eax_77 = *(arg4 + 0xa8)
                                    char j_10 = *eax_77
                                    *(arg4 + 0xa8) = &eax_77[1]
                                    j_9 = j_10
                                
                                char j_6 = j_9
                                
                                if (*(arg4 + 0x10) == 0)
                                label_59e2c8:
                                    int32_t eax_80 = *(arg4 + 0xa8)
                                    
                                    if (sbb.d(eax_80, eax_80, eax_80 u< *(arg4 + 0xac)) != 0xffffffff)
                                        goto label_59e002
                                else if ((*(arg4 + 0x18))(*(arg4 + 0x1c)) != 0)
                                    if (*(arg4 + 0x20) == 0)
                                        goto label_59e002
                                    
                                    goto label_59e2c8
                                
                                if (zx.d(j_9) s> i_3)
                                    j_6 = i_3.b
                                
                                uint32_t ebx_9 = zx.d(*(var_34_1 + 2))
                                uint32_t var_3c_3 = ebx_9
                                void var_60
                                
                                if (sub_59dc70(arg4, ebx_9, &var_60) == 0)
                                    goto label_59dff7
                                
                                uint32_t j_5 = zx.d(j_6)
                                
                                if (j_5 s> 0)
                                    char* edx_16 = &var_60 - edi_9
                                    uint32_t j_3 = j_5
                                    uint32_t j
                                    
                                    do
                                        int32_t ecx_23 = 0x80
                                        char* eax_85 = edi_9
                                        int32_t k_3 = 4
                                        int32_t k
                                        
                                        do
                                            if ((ebx_9 & ecx_23) != 0)
                                                ebx_9.b = *(edx_16 + eax_85)
                                                *eax_85 = ebx_9.b
                                                ebx_9 = var_3c_3
                                            
                                            eax_85 = &eax_85[1]
                                            ecx_23 s>>= 1
                                            k = k_3
                                            k_3 -= 1
                                        while (k != 1)
                                        edx_16 -= 4
                                        j = j_3
                                        j_3 -= 1
                                        edi_9 = eax_85
                                    while (j != 1)
                                
                                i = i_3 - j_5
                                i_3 = i
                            while (i s> 0)
                    else
                        if (eax_48 != 2)
                            goto label_59dfe3
                        
                        void* i_2 = arg5
                        
                        if (arg5 s> 0)
                            void* i_1
                            
                            do
                                char* eax_53 = *(arg4 + 0xa8)
                                uint32_t ebx_2
                                
                                if (eax_53 u< *(arg4 + 0xac))
                                    i.b = *eax_53
                                    eax_53 = &eax_53[1]
                                    *(arg4 + 0xa8) = eax_53
                                    ebx_2 = zx.d(i.b)
                                else if (*(arg4 + 0x20) == 0)
                                    ebx_2 = 0
                                else
                                    int32_t eax_55
                                    eax_55, i =
                                        (*(arg4 + 0x10))(*(arg4 + 0x1c), arg4 + 0x28, *(arg4 + 0x24))
                                    
                                    if (eax_55 != 0)
                                        *(arg4 + 0xa8) = arg4 + 0x28
                                        *(arg4 + 0xac) = arg4 + 0x28 + eax_55
                                    else
                                        *(arg4 + 0x20) = eax_55
                                        char* eax_57 = *(arg4 + 0xac) - 1
                                        *(arg4 + 0xa8) = eax_57
                                        *eax_57 = 0
                                    
                                    char* eax_58 = *(arg4 + 0xa8)
                                    i.b = *eax_58
                                    eax_53 = &eax_58[1]
                                    *(arg4 + 0xa8) = eax_53
                                    ebx_2 = zx.d(i.b)
                                
                                if (*(arg4 + 0x10) == 0)
                                label_59e141:
                                    
                                    if (sbb.d(eax_53, eax_53, *(arg4 + 0xa8) u< *(arg4 + 0xac))
                                            != 0xffffffff)
                                        goto label_59e002
                                else
                                    eax_53, i = (*(arg4 + 0x18))(*(arg4 + 0x1c))
                                    
                                    if (eax_53 != 0)
                                        if (*(arg4 + 0x20) == 0)
                                            goto label_59e002
                                        
                                        goto label_59e141
                                
                                uint32_t j_4
                                
                                if (ebx_2 s< 0x80)
                                    j_4 = ebx_2 + 1
                                    
                                    if (ebx_2 + 1 s> i_2)
                                        goto label_59e002
                                    
                                    if (j_4 s> 0)
                                        uint32_t edx_12 = zx.d(*(var_34_1 + 2))
                                        int32_t ebx_6 = 0
                                        
                                        do
                                            int32_t eax_68
                                            eax_68, i = sub_59dc70(arg4, edx_12, edi_9)
                                            
                                            if (eax_68 == 0)
                                                goto label_59dff7
                                            
                                            ebx_6 += 1
                                            edi_9 = &edi_9[4]
                                        while (ebx_6 s< j_4)
                                else
                                    uint32_t j_8
                                    
                                    if (ebx_2 != 0x80)
                                        j_8 = ebx_2 - 0x7f
                                        j_4 = j_8
                                    else
                                        uint32_t j_7 = sub_5959c0(arg4)
                                        j_8 = j_7
                                        j_4 = j_7
                                    
                                    if (j_8 s> i_2)
                                        goto label_59e002
                                    
                                    uint32_t eax_63 = zx.d(*(var_34_1 + 2))
                                    void var_5c
                                    int32_t eax_64
                                    eax_64, i = sub_59dc70(arg4, eax_63, &var_5c)
                                    
                                    if (eax_64 == 0)
                                        goto label_59dff7
                                    
                                    if (j_8 s> 0)
                                        char* edx_11 = &var_5c - edi_9
                                        uint32_t j_2 = j_4
                                        uint32_t j_1
                                        
                                        do
                                            i = 0x80
                                            char* eax_66 = edi_9
                                            int32_t k_2 = 4
                                            int32_t k_1
                                            
                                            do
                                                if ((eax_63 & i) != 0)
                                                    j_8.b = *(edx_11 + eax_66)
                                                    *eax_66 = j_8.b
                                                
                                                eax_66 = &eax_66[1]
                                                i s>>= 1
                                                k_1 = k_2
                                                k_2 -= 1
                                            while (k_1 != 1)
                                            edx_11 -= 4
                                            j_1 = j_2
                                            j_2 -= 1
                                            edi_9 = eax_66
                                        while (j_1 != 1)
                                
                                i_1 = i_2 - j_4
                                i_2 = i_1
                            while (i_1 s> 0)
                    var_34_1 += 3
                    eax_89 = var_48_1 + 1
                    var_48_1 = eax_89
                while (eax_89 s< var_54_1)
            
            var_50_1 = &var_50_1[arg5 * 4]
            ecx_27 = var_4c_2 + 1
            var_4c_2 = ecx_27
        while (ecx_27 s< arg6)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg2
}

// 函数名称: sub_4ae980
// 虚拟地址: 0x4ae980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4ae980()
{
    // 第一条实际指令: char* result_1
    char* result_1
    char* result = __security_cookie ^ &result_1
    char* result_3 = result
    int32_t var_428[0x6]
    void var_410
    void* entry_ebx
    
    for (int32_t i = 0; i s<= 0xb; i += 1)
        if (*(entry_ebx + (i << 1) + 0x1e06) != 0 && *(entry_ebx + (i << 1) + 0x1e2e) != 0)
            if (i u> 0xb)
            label_4aea29:
                char* j = nullptr
                
                if (*(entry_ebx + 0x458) s> 0)
                    int32_t eax_2 = sub_4ae050(i)
                    result = entry_ebx + 0x20
                    char* result_2 = result
                    
                    do
                        result = sub_4ae0d0(result, j, entry_ebx, i)
                        var_428[j] = result
                        result_2[i + 0x6f] = result.b
                        
                        if (result s>= eax_2)
                            result = result_2
                            result[i + 0x47] = 1
                            *(entry_ebx + (i << 1) + 0x1e2e) = 0
                            
                            if (*(entry_ebx + 0x18) == 0)
                                int32_t i_2 = i
                                sub_49b450(j, result_2)
                                int32_t var_44c_2 = (&data_8c6758)[i]
                                int32_t var_450_1 = *result_2
                                sub_5a733b(&var_410, "%s claims %s goal.\n")
                                char const* const var_45c_1 = "goal"
                                void* var_460_1 = &var_410
                                int32_t eax_5
                                int32_t edx_4
                                eax_5, edx_4 = sub_4c5680("%s (%s)")
                                void* var_44c_3 = &var_410
                                result = sub_4591b0(eax_5, edx_4, entry_ebx, j)
                        
                        result_2 = &result_2[0xb4]
                        j = &j[1]
                    while (j s< sx.d(*(entry_ebx + 0x458)))
            else
                bool cond:0_1
                
                switch (i)
                    case 0
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 7)
                            goto label_4aea29
                        
                        cond:0_1 = result.b != 0xff
                    case 1
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 5)
                            goto label_4aea29
                        
                        cond:0_1 = result.b != 6
                    case 2, 4, 6, 8, 9, 0xb
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 3 || result.b == 4 || result.b == 5)
                            goto label_4aea29
                        
                        cond:0_1 = result.b != 6
                    case 3
                        cond:0_1 = *(entry_ebx + 0x1ec0) != 0xa
                    case 5
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 3)
                            goto label_4aea29
                        
                        cond:0_1 = result.b != 4
                        goto label_4aea23
                    case 7
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 5 || result.b == 6)
                            goto label_4aea29
                        
                        cond:0_1 = result.b != 9
                    case 0xa
                        goto label_4aea29
                
            label_4aea23:
                
                if (not(cond:0_1))
                    goto label_4aea29
    
    void* i_1 = 0xc
    void* i_3 = 0xc
    
    do
        if (*(entry_ebx + (i_1 << 1) + 0x1e06) != 0)
            bool cond:1_1
            
            if (i_1 - 0xc u> 7)
            label_4aeb5e:
                *(entry_ebx + i_1 + 0x1e56) = 0
                int32_t edi = 0
                
                if (*(entry_ebx + 0x458) s> 0)
                    int32_t eax_8 = sub_4ae050(i_3)
                    int32_t var_434_2 = eax_8
                    void* esi_1 = entry_ebx + i_3 + 0x8f
                    
                    do
                        int32_t eax_9 = sub_4ae0d0(eax_8, edi, entry_ebx, i_3)
                        char ecx_8 = eax_9.b
                        *esi_1 = ecx_8
                        int32_t edx_8 = sx.d(*(entry_ebx + i_3 + 0x1e56))
                        var_428[edi] = eax_9
                        
                        if (eax_9 s> edx_8)
                            *(entry_ebx + i_3 + 0x1e56) = ecx_8
                        
                        if (eax_9 s< var_434_2)
                            var_428[edi] = 0
                        
                        eax_8 = sx.d(*(entry_ebx + 0x458))
                        edi += 1
                        esi_1 += 0xb4
                    while (edi s< eax_8)
                
                result = nullptr
                result_1 = nullptr
                
                if (*(entry_ebx + 0x458) s> 0)
                    void* i_4 = i_3
                    int32_t ecx_18
                    
                    do
                        if (*(i_4 + result * 0xb4 + entry_ebx + 0x20 + 0x47) != 0)
                            int32_t ecx_11 = var_428[result]
                            
                            if (ecx_11 == 0 || ecx_11 s< sx.d(*(entry_ebx + i_4 + 0x1e56)))
                                *(entry_ebx + (i_4 << 1) + 0x1e2e) = 1
                                *(i_4 + result * 0xb4 + entry_ebx + 0x20 + 0x47) = 0
                                
                                if (*(entry_ebx + 0x18) == 0)
                                    void* eax_10 = *(data_27e7a40 + 0x548)
                                    int32_t ecx_12 = *(eax_10 + 0x2c024)
                                    
                                    if (ecx_12 s>= 0x800)
                                        sub_4c5870("gui->numUIActions < MAX_UIACTIONS", &data_83f3d3, 
                                            "..\code\RFTGClient.cpp", 0x2c21, "UIActionQueueAlloc")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    *(eax_10 + 0x2c024) = ecx_12 + 1
                                    sub_5abfc0((ecx_12 << 6) + eax_10 + 0xc024, 0, 0x40)
                                    *((ecx_12 << 6) + eax_10 + 0xc04c) = 0xffffffff
                                    *((ecx_12 << 6) + eax_10 + 0xc050) = 0xffffffff
                                    void* eax_11 = data_27e7a40
                                    *((ecx_12 << 6) + eax_10 + 0xc024) = 0xe
                                    *((ecx_12 << 6) + eax_10 + 0xc060) = 0
                                    void* eax_12 = *(eax_11 + 0x548)
                                    
                                    if (eax_12 == 0)
                                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                            "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t eax_15
                                    
                                    switch (sx.d(*(*(eax_12 + 0x45844) + 0x1ec0)) + 0xa)
                                        case 0
                                            eax_15 = 0xfffffff6
                                        label_4aed06:
                                            *((ecx_12 << 6) + eax_10 + 0xc054) = eax_15
                                            int32_t eax_16 = 0xffffffff
                                            
                                            if (result_1 != 0xffffffff)
                                                eax_16 = *sub_46b2b0(result_1)
                                                i_4 = i_3
                                            
                                            *((ecx_12 << 6) + eax_10 + 0xc028) = eax_16
                                            void* eax_18 = data_27e7a40
                                            *((ecx_12 << 6) + eax_10 + 0xc02c) = 1
                                            eax_18.b = *(*(eax_18 + 0x548) + 0x2c068) != 0
                                            *((ecx_12 << 6) + eax_10 + 0xc05c) = zx.d(eax_18.b)
                                            *((ecx_12 << 6) + eax_10 + 0xc040) = i_4
                                            *((ecx_12 << 6) + eax_10 + 0xc058) = 0
                                            int32_t var_44c_5 = (&data_8c6758)[i_4]
                                            int32_t var_450_3 = *(result * 0xb4 + entry_ebx + 0x20)
                                            sub_5a733b(&var_410, "%s loses %s goal.\n")
                                            char const* const var_45c_2 = "goal"
                                            void* var_460_2 = &var_410
                                            sub_4c5680("%s (%s)")
                                            char* result_5 = result_1
                                            void* var_44c_6 = &var_410
                                            sub_4591b0(result_5, &var_410, entry_ebx, result_5)
                                            result = result_1
                                        case 9, 0xa, 0x14
                                            eax_15 = 0
                                            goto label_4aed06
                                        case 0xb, 0xc
                                            eax_15 = 1
                                            goto label_4aed06
                                        case 0xd
                                            eax_15 = 2
                                            goto label_4aed06
                                        case 0xe
                                            eax_15 = 8
                                            goto label_4aed06
                                        case 0xf
                                            eax_15 = 3
                                            goto label_4aed06
                                        case 0x10
                                            eax_15 = 9
                                            goto label_4aed06
                                        case 0x11, 0x12
                                            eax_15 = 4
                                            goto label_4aed06
                                        case 0x13
                                            eax_15 = 5
                                            goto label_4aed06
                                        default
                                        label_4af3cb:
                                            sub_49b2a0()
                                            noreturn
                        
                        ecx_18 = sx.d(*(entry_ebx + 0x458))
                        result = &result[1]
                        result_1 = result
                    while (result s< ecx_18)
                
                int32_t j_1 = sx.d(*(entry_ebx + 0x458))
                result_1 = nullptr
                
                if (j_1 s> 0)
                    char* result_6
                    
                    do
                        result_6 = result_1
                        int32_t eax_20 = 0
                        int32_t edx_18 = 1
                        
                        if (j_1 s> 0)
                            do
                                if (result_6 != eax_20 && var_428[result_6] s<= var_428[eax_20])
                                    edx_18 = 0
                                
                                eax_20 += 1
                            while (eax_20 s< j_1)
                        
                        void* i_5 = i_3
                        void* result_4 = result_6 * 0xb4 + entry_ebx + 0x20
                        
                        if (edx_18 == 0 || *(i_5 + result_4 + 0x47) != 0)
                            int32_t ecx_29 = var_428[result_6]
                            int32_t eax_38
                            
                            if (ecx_29 s>= sx.d(*(entry_ebx + i_5 + 0x1e56)))
                                eax_38 = sub_4ae050(i_5)
                            
                            char const* const var_454_4
                            
                            if (ecx_29 s< sx.d(*(entry_ebx + i_5 + 0x1e56)) || ecx_29 s< eax_38)
                                result = result_4
                            label_4af1b5:
                                
                                if (*(result + i_5 + 0x5b) != 0)
                                    *(result + i_5 + 0x5b) = 0
                                    
                                    if (*(entry_ebx + 0x18) == 0)
                                        void* eax_51 = *(data_27e7a40 + 0x548)
                                        int32_t ecx_34 = *(eax_51 + 0x2c024)
                                        
                                        if (ecx_34 s>= 0x800)
                                            sub_4c5870("gui->numUIActions < MAX_UIACTIONS", 
                                                &data_83f3d3, "..\code\RFTGClient.cpp", 0x2c21, 
                                                "UIActionQueueAlloc")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        *(eax_51 + 0x2c024) = ecx_34 + 1
                                        sub_5abfc0((ecx_34 << 6) + eax_51 + 0xc024, 0, 0x40)
                                        void* eax_52 = data_27e7a40
                                        *((ecx_34 << 6) + eax_51 + 0xc04c) = 0xffffffff
                                        *((ecx_34 << 6) + eax_51 + 0xc050) = 0xffffffff
                                        *((ecx_34 << 6) + eax_51 + 0xc024) = 0x10
                                        *((ecx_34 << 6) + eax_51 + 0xc060) = 0
                                        void* eax_53 = *(eax_52 + 0x548)
                                        
                                        if (eax_53 == 0)
                                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t eax_55 = sx.d(*(*(eax_53 + 0x45844) + 0x1ec0)) + 0xa
                                        
                                        if (eax_55 u> 0x14)
                                            goto label_4af3cb
                                        
                                        int32_t eax_57
                                        
                                        switch (eax_55)
                                            case 0
                                                eax_57 = 0xfffffff6
                                            label_4af294:
                                                *((ecx_34 << 6) + eax_51 + 0xc054) = eax_57
                                                int32_t eax_58
                                                
                                                if (result_1 != 0xffffffff)
                                                    eax_58 = *sub_46b2b0(result_1)
                                                    i_5 = i_3
                                                else
                                                    eax_58 = 0xffffffff
                                                
                                                void* ecx_36 = data_27e7a40
                                                *((ecx_34 << 6) + eax_51 + 0xc028) = eax_58
                                                *((ecx_34 << 6) + eax_51 + 0xc02c) = 1
                                                eax_58.b = *(*(ecx_36 + 0x548) + 0x2c068) != 0
                                                *((ecx_34 << 6) + eax_51 + 0xc05c) = zx.d(eax_58.b)
                                                *((ecx_34 << 6) + eax_51 + 0xc040) = i_5
                                                *((ecx_34 << 6) + eax_51 + 0xc058) = 0
                                                int32_t var_44c_10 = (&data_8c6758)[i_5]
                                                int32_t var_450_8 = *result_4
                                                var_454_4 = "%s loses points for %s goal.\n"
                                            case 1, 2, 3, 4, 5, 6, 7, 8
                                                goto label_4af3cb
                                            case 9, 0xa, 0x14
                                                eax_57 = 0
                                                goto label_4af294
                                            case 0xb, 0xc
                                                eax_57 = 1
                                                goto label_4af294
                                            case 0xd
                                                eax_57 = 2
                                                goto label_4af294
                                            case 0xe
                                                eax_57 = 8
                                                goto label_4af294
                                            case 0xf
                                                eax_57 = 3
                                                goto label_4af294
                                            case 0x10
                                                eax_57 = 9
                                                goto label_4af294
                                            case 0x11, 0x12
                                                eax_57 = 4
                                                goto label_4af294
                                            case 0x13
                                                eax_57 = 5
                                                goto label_4af294
                                        
                                    label_4af2f9:
                                        sub_5a733b(&var_410, var_454_4)
                                        char const* const var_45c_4 = "goal"
                                        void* var_460_4 = &var_410
                                        void* var_44c_11 = &var_410
                                        result = sub_4591b0(&var_410, sub_4c5680("%s (%s)"), entry_ebx, 
                                            result_1)
                                        result_6 = result_1
                            else
                                result = result_4
                                
                                if (*(result + i_5 + 0x47) != 0)
                                    goto label_4af1b5
                                
                                if (*(result + i_5 + 0x5b) == 0)
                                    *(result + i_5 + 0x5b) = 1
                                    
                                    if (*(entry_ebx + 0x18) == 0)
                                        void* eax_40 = *(data_27e7a40 + 0x548)
                                        int32_t ecx_30 = *(eax_40 + 0x2c024)
                                        
                                        if (ecx_30 s>= 0x800)
                                            sub_4c5870("gui->numUIActions < MAX_UIACTIONS", 
                                                &data_83f3d3, "..\code\RFTGClient.cpp", 0x2c21, 
                                                "UIActionQueueAlloc")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        *(eax_40 + 0x2c024) = ecx_30 + 1
                                        sub_5abfc0((ecx_30 << 6) + eax_40 + 0xc024, 0, 0x40)
                                        void* eax_41 = data_27e7a40
                                        *((ecx_30 << 6) + eax_40 + 0xc04c) = 0xffffffff
                                        *((ecx_30 << 6) + eax_40 + 0xc050) = 0xffffffff
                                        *((ecx_30 << 6) + eax_40 + 0xc024) = 0xf
                                        *((ecx_30 << 6) + eax_40 + 0xc060) = 0
                                        void* eax_42 = *(eax_41 + 0x548)
                                        
                                        if (eax_42 == 0)
                                            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, 
                                                "..\code\RFTGClient.cpp", 0xcc, "GetGame")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        int32_t eax_44 = sx.d(*(*(eax_42 + 0x45844) + 0x1ec0)) + 0xa
                                        
                                        if (eax_44 u> 0x14)
                                            goto label_4af3cb
                                        
                                        int32_t eax_46
                                        
                                        switch (eax_44)
                                            case 0
                                                eax_46 = 0xfffffff6
                                            label_4af14c:
                                                *((ecx_30 << 6) + eax_40 + 0xc054) = eax_46
                                                int32_t eax_47
                                                
                                                if (result_1 != 0xffffffff)
                                                    eax_47 = *sub_46b2b0(result_1)
                                                    i_5 = i_3
                                                else
                                                    eax_47 = 0xffffffff
                                                
                                                void* ecx_32 = data_27e7a40
                                                *((ecx_30 << 6) + eax_40 + 0xc028) = eax_47
                                                *((ecx_30 << 6) + eax_40 + 0xc02c) = 1
                                                eax_47.b = *(*(ecx_32 + 0x548) + 0x2c068) != 0
                                                *((ecx_30 << 6) + eax_40 + 0xc05c) = zx.d(eax_47.b)
                                                *((ecx_30 << 6) + eax_40 + 0xc040) = i_5
                                                *((ecx_30 << 6) + eax_40 + 0xc058) = 0
                                                int32_t var_44c_9 = (&data_8c6758)[i_5]
                                                int32_t var_450_7 = *result_4
                                                var_454_4 = "%s gains points for %s goal.\n"
                                            case 1, 2, 3, 4, 5, 6, 7, 8
                                                goto label_4af3cb
                                            case 9, 0xa, 0x14
                                                eax_46 = 0
                                                goto label_4af14c
                                            case 0xb, 0xc
                                                eax_46 = 1
                                                goto label_4af14c
                                            case 0xd
                                                eax_46 = 2
                                                goto label_4af14c
                                            case 0xe
                                                eax_46 = 8
                                                goto label_4af14c
                                            case 0xf
                                                eax_46 = 3
                                                goto label_4af14c
                                            case 0x10
                                                eax_46 = 9
                                                goto label_4af14c
                                            case 0x11, 0x12
                                                eax_46 = 4
                                                goto label_4af14c
                                            case 0x13
                                                eax_46 = 5
                                                goto label_4af14c
                                        
                                        goto label_4af2f9
                        else
                            result = nullptr
                            int32_t k = 0
                            *(entry_ebx + (i_5 << 1) + 0x1e2e) = 0
                            int32_t k_1 = 0
                            
                            if (*(entry_ebx + 0x458) s> 0)
                                char* var_430_2 = i_5 + entry_ebx + 0x67
                                
                                do
                                    result.b = result_6 == k
                                    *var_430_2 = result.b
                                    
                                    if (result.b != 0)
                                        int32_t ecx_21 = 0
                                        int32_t var_434_3 = 0
                                        
                                        if (*(entry_ebx + 0x458) s> 0)
                                            do
                                                if (*(i_5 + ecx_21 * 0xb4 + entry_ebx + 0x20 + 0x5b)
                                                        != 0)
                                                    *(i_5 + ecx_21 * 0xb4 + entry_ebx + 0x20 + 0x5b) = 0
                                                    
                                                    if (*(entry_ebx + 0x18) == 0)
                                                        void* eax_25 = *(data_27e7a40 + 0x548)
                                                        int32_t ecx_22 = *(eax_25 + 0x2c024)
                                                        
                                                        if (ecx_22 s>= 0x800)
                                                            sub_4c5870(
                                                                "gui->numUIActions < MAX_UIACTIONS", 
                                                                &data_83f3d3, "..\code\RFTGClient.cpp", 
                                                                0x2c21, "UIActionQueueAlloc")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_4c5a30()
                                                            noreturn
                                                        
                                                        *(eax_25 + 0x2c024) = ecx_22 + 1
                                                        sub_5abfc0((ecx_22 << 6) + eax_25 + 0xc024, 0, 
                                                            0x40)
                                                        *((ecx_22 << 6) + eax_25 + 0xc04c) = 0xffffffff
                                                        *((ecx_22 << 6) + eax_25 + 0xc050) = 0xffffffff
                                                        void* eax_26 = data_27e7a40
                                                        *((ecx_22 << 6) + eax_25 + 0xc024) = 0x10
                                                        *((ecx_22 << 6) + eax_25 + 0xc060) = 0
                                                        void* eax_27 = *(eax_26 + 0x548)
                                                        
                                                        if (eax_27 == 0)
                                                            sub_4c5870("gCClient->rftgClientData", 
                                                                &data_83f3d3, "..\code\RFTGClient.cpp", 
                                                                0xcc, "GetGame")
                                                            
                                                            if (IsDebuggerPresent() == 1)
                                                                breakpoint
                                                            
                                                            sub_4c5a30()
                                                            noreturn
                                                        
                                                        int32_t eax_29 =
                                                            sx.d(*(*(eax_27 + 0x45844) + 0x1ec0)) + 0xa
                                                        
                                                        if (eax_29 u> 0x14)
                                                            goto label_4af3cb
                                                        
                                                        int32_t eax_30
                                                        
                                                        switch (eax_29)
                                                            case 0
                                                                eax_30 = 0xfffffff6
                                                            label_4aef5a:
                                                                *((ecx_22 << 6) + eax_25 + 0xc054) =
                                                                    eax_30
                                                                int32_t eax_31 = 0xffffffff
                                                                
                                                                if (var_434_3 != 0xffffffff)
                                                                    eax_31 = *sub_46b2b0(var_434_3)
                                                                    i_5 = i_3
                                                                
                                                                *((ecx_22 << 6) + eax_25 + 0xc028) =
                                                                    eax_31
                                                                void* eax_33 = data_27e7a40
                                                                *((ecx_22 << 6) + eax_25 + 0xc02c) = 1
                                                                ecx_21 = var_434_3
                                                                eax_33.b =
                                                                    *(*(eax_33 + 0x548) + 0x2c068) != 0
                                                                *((ecx_22 << 6) + eax_25 + 0xc05c) =
                                                                    zx.d(eax_33.b)
                                                                *((ecx_22 << 6) + eax_25 + 0xc040) = i_5
                                                                *((ecx_22 << 6) + eax_25 + 0xc058) = 0
                                                                result_6 = result_1
                                                            case 1, 2, 3, 4, 5, 6, 7, 8
                                                                goto label_4af3cb
                                                            case 9, 0xa, 0x14
                                                                eax_30 = 0
                                                                goto label_4aef5a
                                                            case 0xb, 0xc
                                                                eax_30 = 1
                                                                goto label_4aef5a
                                                            case 0xd
                                                                eax_30 = 2
                                                                goto label_4aef5a
                                                            case 0xe
                                                                eax_30 = 8
                                                                goto label_4aef5a
                                                            case 0xf
                                                                eax_30 = 3
                                                                goto label_4aef5a
                                                            case 0x10
                                                                eax_30 = 9
                                                                goto label_4aef5a
                                                            case 0x11, 0x12
                                                                eax_30 = 4
                                                                goto label_4aef5a
                                                            case 0x13
                                                                eax_30 = 5
                                                                goto label_4aef5a
                                                
                                                result = sx.d(*(entry_ebx + 0x458))
                                                ecx_21 += 1
                                                var_434_3 = ecx_21
                                            while (ecx_21 s< result)
                                            
                                            k = k_1
                                    
                                    var_430_2 = &var_430_2[0xb4]
                                    k += 1
                                    k_1 = k
                                while (k s< sx.d(*(entry_ebx + 0x458)))
                            
                            if (*(entry_ebx + 0x18) == 0)
                                void* i_6 = i_5
                                sub_49b450(result_6, k)
                                int32_t var_44c_7 = (&data_8c6758)[i_5]
                                int32_t var_450_5 = *result_4
                                sub_5a733b(&var_410, "%s claims %s goal.\n")
                                char const* const var_45c_3 = "goal"
                                void* var_460_3 = &var_410
                                int32_t eax_36
                                int32_t edx_27
                                eax_36, edx_27 = sub_4c5680("%s (%s)")
                                void* var_44c_8 = &var_410
                                result = sub_4591b0(eax_36, edx_27, entry_ebx, result_6)
                        
                        j_1 = sx.d(*(entry_ebx + 0x458))
                        result_1 = &result_6[1]
                    while (&result_6[1] s< j_1)
            else
                switch (i_1)
                    case 0xc, 0x10, 0x13
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 3 || result.b == 4 || result.b == 5)
                            goto label_4aeb5e
                        
                    label_4aeb56:
                        cond:1_1 = result.b != 6
                        goto label_4aeb58
                    case 0xd, 0xf, 0x11
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 5)
                            goto label_4aeb5e
                        
                        goto label_4aeb56
                    case 0xe
                        result.b = *(entry_ebx + 0x1ec0)
                        
                        if (result.b == 3)
                            goto label_4aeb5e
                        
                        cond:1_1 = result.b != 4
                    label_4aeb58:
                        
                        if (not(cond:1_1))
                            goto label_4aeb5e
                    case 0x12
                        goto label_4aeb5e
        
        i_1 = i_3 + 1
        i_3 = i_1
    while (i_1 s<= 0x13)
    
    sub_5a6aba(result_3 ^ &result_1)
    return result
}

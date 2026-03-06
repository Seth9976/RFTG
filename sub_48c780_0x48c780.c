// 函数名称: sub_48c780
// 虚拟地址: 0x48c780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_48c780(int32_t arg1)
{
    // 第一条实际指令: __chkstk(0x5634)
    __chkstk(0x5634)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    int32_t edx = 0
    int32_t eax_3 = 0
    data_26031cc = 0
    data_2689cf0 = 0
    
    for (void* i = &data_2691ca8; i s< 0x26a2d88; )
        *(eax_3 + &data_2689940) = 0xffffffff
        *(eax_3 + &data_2689cf8) = 0xffffffff
        
        if (*(sx.d(*(arg1 + 0x45a)) + i + 9) != 0)
            *(eax_3 + &data_2689cf8) = edx
            edx += 1
            
            if (*(i + 0xe) != 0)
                *(eax_3 + &data_2689940) = esi
                esi += 1
        
        i += 0x128
        eax_3 += 4
    
    data_26031cc = esi
    data_2689cf0 = edx
    int32_t eax_4 = sub_4cce80(0xa)
    char const* const ecx = "Game over"
    char const i_1
    
    do
        i_1 = *ecx
        *(eax_4 - "Game over" + ecx) = i_1
        ecx = &ecx[1]
    while (i_1 != 0)
    int32_t var_5638 = eax_4
    void var_408
    void var_407
    int32_t i_2
    
    for (i_2 = 1; i_2 s< 0xd; i_2 += 1)
        int32_t var_14_1 = i_2 - 1
        sub_5a733b(&var_408, "VP Pool %d")
        void* eax_5 = &var_408
        char j
        
        do
            j = *eax_5
            eax_5 += 1
        while (j != 0)
        int32_t eax_8 = sub_4cce80(eax_5 - &var_407 + 1)
        void* ecx_2 = &var_408
        char j_1
        
        do
            j_1 = *ecx_2
            *(eax_8 - &var_408 + ecx_2) = j_1
            ecx_2 += 1
        while (j_1 != 0)
        (&var_5638)[i_2] = eax_8
    
    for (int32_t i_3 = 0; i_3 s< 0xc; )
        int32_t i_90 = i_3
        sub_5a733b(&var_408, "Max active %d")
        void* eax_9 = &var_408
        char j_2
        
        do
            j_2 = *eax_9
            eax_9 += 1
        while (j_2 != 0)
        int32_t eax_12 = sub_4cce80(eax_9 - &var_407 + 1)
        void* ecx_3 = &var_408
        char j_3
        
        do
            j_3 = *ecx_3
            *(eax_12 - &var_408 + ecx_3) = j_3
            ecx_3 += 1
        while (j_3 != 0)
        (&var_5638)[i_2] = eax_12
        i_3 += 1
        i_2 += 1
    
    for (int32_t i_4 = 0; i_4 s< 0xc; )
        int32_t i_91 = i_4
        sub_5a733b(&var_408, "Clock %d")
        void* eax_13 = &var_408
        char j_4
        
        do
            j_4 = *eax_13
            eax_13 += 1
        while (j_4 != 0)
        int32_t eax_16 = sub_4cce80(eax_13 - &var_407 + 1)
        void* ecx_4 = &var_408
        char j_5
        
        do
            j_5 = *ecx_4
            *(eax_16 - &var_408 + ecx_4) = j_5
            ecx_4 += 1
        while (j_5 != 0)
        (&var_5638)[i_2] = eax_16
        i_4 += 1
        i_2 += 1
    
    int32_t eax_17
    eax_17.b = *(arg1 + 0x45a)
    
    if (eax_17.b s> 0 && eax_17.b s< 4)
        for (int32_t i_5 = 0; i_5 s< 0x14; )
            int32_t i_92 = i_5
            sub_5a733b(&var_408, "Goal active %d")
            void* eax_18 = &var_408
            char j_6
            
            do
                j_6 = *eax_18
                eax_18 += 1
            while (j_6 != 0)
            int32_t eax_21 = sub_4cce80(eax_18 - &var_407 + 1)
            void* ecx_5 = &var_408
            char j_7
            
            do
                j_7 = *ecx_5
                *(eax_21 - &var_408 + ecx_5) = j_7
                ecx_5 += 1
            while (j_7 != 0)
            (&var_5638)[i_2] = eax_21
            i_5 += 1
            i_2 += 1
        
        for (int32_t i_6 = 0; i_6 s< 0x14; )
            int32_t i_93 = i_6
            sub_5a733b(&var_408, "Goal available %d")
            void* eax_22 = &var_408
            char j_8
            
            do
                j_8 = *eax_22
                eax_22 += 1
            while (j_8 != 0)
            int32_t eax_25 = sub_4cce80(eax_22 - &var_407 + 1)
            void* ecx_6 = &var_408
            char j_9
            
            do
                j_9 = *ecx_6
                *(eax_25 - &var_408 + ecx_6) = j_9
                ecx_6 += 1
            while (j_9 != 0)
            (&var_5638)[i_2] = eax_25
            i_6 += 1
            i_2 += 1
    
    int32_t i_7 = 0
    
    if (data_2689cf0 s> 0)
        do
            int32_t eax_26 = 0
            
            while (*((eax_26 << 2) + &data_2689cf8) != i_7)
                if (*((eax_26 << 2) + &data_2689cfc) == i_7)
                    eax_26 += 1
                    break
                
                if (*((eax_26 << 2) + &data_2689d00) == i_7)
                    eax_26 += 2
                    break
                
                if (*((eax_26 << 2) + &data_2689d04) == i_7)
                    eax_26 += 3
                    break
                
                eax_26 += 4
                
                if (eax_26 s>= 0xec)
                    break
            
            int32_t var_14_2 = *(eax_26 * 0x128 + &data_2691ca8)
            sub_5a733b(&var_408, "%s in hand")
            void* eax_29 = &var_408
            char j_10
            
            do
                j_10 = *eax_29
                eax_29 += 1
            while (j_10 != 0)
            int32_t eax_32 = sub_4cce80(eax_29 - &var_407 + 1)
            void* ecx_7 = &var_408
            char j_11
            
            do
                j_11 = *ecx_7
                *(eax_32 - &var_408 + ecx_7) = j_11
                ecx_7 += 1
            while (j_11 != 0)
            (&var_5638)[i_2] = eax_32
            i_7 += 1
            i_2 += 1
        while (i_7 s< data_2689cf0)
    
    for (int32_t i_8 = 0; i_8 s< 5; )
        int32_t i_94 = i_8
        sub_5a733b(&var_408, "Dev buildable %d")
        void* eax_33 = &var_408
        char j_12
        
        do
            j_12 = *eax_33
            eax_33 += 1
        while (j_12 != 0)
        int32_t eax_36 = sub_4cce80(eax_33 - &var_407 + 1)
        void* ecx_8 = &var_408
        char j_13
        
        do
            j_13 = *ecx_8
            *(eax_36 - &var_408 + ecx_8) = j_13
            ecx_8 += 1
        while (j_13 != 0)
        (&var_5638)[i_2] = eax_36
        i_8 += 1
        i_2 += 1
    
    void* edx_1
    
    for (int32_t i_9 = 0; i_9 s< 5; )
        int32_t i_95 = i_9
        sub_5a733b(&var_408, "World buildable %d")
        void* eax_37 = &var_408
        char j_14
        
        do
            j_14 = *eax_37
            eax_37 += 1
        while (j_14 != 0)
        int32_t eax_40 = sub_4cce80(eax_37 - &var_407 + 1)
        void* ecx_9 = &var_408
        
        do
            edx_1.b = *ecx_9
            *(eax_40 - &var_408 + ecx_9) = edx_1.b
            ecx_9 += 1
        while (edx_1.b != 0)
        
        (&var_5638)[i_2] = eax_40
        i_9 += 1
        i_2 += 1
    
    int32_t eax_41 = 0
    int32_t i_89 = i_2
    int32_t var_814 = 0
    void var_5634
    void var_5630
    int32_t var_562c[0x1385]
    int16_t var_808
    
    if (*(arg1 + 0x458) s> 0)
        while (true)
            if (eax_41 != 0)
                int32_t var_14_3 = eax_41
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_1 = 0
            
            int32_t i_10 = 0
            
            if (data_2689cf0 s> 0)
                do
                    int32_t eax_42 = 0
                    
                    while (*((eax_42 << 2) + &data_2689cf8) != i_10)
                        if (*((eax_42 << 2) + &data_2689cfc) == i_10)
                            eax_42 += 1
                            break
                        
                        if (*((eax_42 << 2) + &data_2689d00) == i_10)
                            eax_42 += 2
                            break
                        
                        if (*((eax_42 << 2) + &data_2689d04) == i_10)
                            eax_42 += 3
                            break
                        
                        eax_42 += 4
                        
                        if (eax_42 s>= 0xec)
                            break
                    
                    int32_t var_14_4 = *(eax_42 * 0x128 + &data_2691ca8)
                    int16_t* var_18_10 = &var_808
                    sub_5a733b(&var_408, "%s active %s")
                    void* eax_44 = &var_408
                    char j_15
                    
                    do
                        j_15 = *eax_44
                        eax_44 += 1
                    while (j_15 != 0)
                    int32_t eax_47 = sub_4cce80(eax_44 - &var_407 + 1)
                    int32_t ecx_10 = &var_408
                    char j_16
                    
                    do
                        j_16 = *ecx_10
                        *(ecx_10 + eax_47 - &var_408) = j_16
                        ecx_10 += 1
                    while (j_16 != 0)
                    (&var_5638)[i_2] = eax_47
                    i_10 += 1
                    i_2 += 1
                while (i_10 s< data_2689cf0)
            
            int32_t i_11 = 0
            
            if (data_26031cc s> 0)
                do
                    int32_t eax_48 = 0
                    
                    while (*((eax_48 << 2) + &data_2689940) != i_11)
                        if (*((eax_48 << 2) + &data_2689944) == i_11)
                            eax_48 += 1
                            break
                        
                        if (*((eax_48 << 2) + &data_2689948) == i_11)
                            eax_48 += 2
                            break
                        
                        if (*((eax_48 << 2) + &data_268994c) == i_11)
                            eax_48 += 3
                            break
                        
                        eax_48 += 4
                        
                        if (eax_48 s>= 0xec)
                            break
                    
                    int32_t var_14_5 = *(eax_48 * 0x128 + &data_2691ca8)
                    int16_t* var_18_11 = &var_808
                    sub_5a733b(&var_408, "%s good %s")
                    void* eax_51 = &var_408
                    char j_17
                    
                    do
                        j_17 = *eax_51
                        eax_51 += 1
                    while (j_17 != 0)
                    int32_t eax_54 = sub_4cce80(eax_51 - &var_407 + 1)
                    void* ecx_12 = &var_408
                    char j_18
                    
                    do
                        j_18 = *ecx_12
                        *(ecx_12 + eax_54 - &var_408) = j_18
                        ecx_12 += 1
                    while (j_18 != 0)
                    (&var_5638)[i_2] = eax_54
                    i_11 += 1
                    i_2 += 1
                while (i_11 s< data_26031cc)
            
            for (int32_t i_12 = 0; i_12 s< 6; )
                int32_t i_96 = i_12
                int16_t* var_18_12 = &var_808
                sub_5a733b(&var_408, "%s %d goods")
                void* eax_55 = &var_408
                char j_19
                
                do
                    j_19 = *eax_55
                    eax_55 += 1
                while (j_19 != 0)
                int32_t eax_58 = sub_4cce80(eax_55 - &var_407 + 1)
                void* ecx_13 = &var_408
                char j_20
                
                do
                    j_20 = *ecx_13
                    *(ecx_13 + eax_58 - &var_408) = j_20
                    ecx_13 += 1
                while (j_20 != 0)
                (&var_5638)[i_2] = eax_58
                i_12 += 1
                i_2 += 1
            
            int16_t* var_14_6 = &var_808
            sub_5a733b(&var_408, "%s Novelty good")
            void* eax_59 = &var_408
            char i_13
            
            do
                i_13 = *eax_59
                eax_59 += 1
            while (i_13 != 0)
            int32_t eax_62 = sub_4cce80(eax_59 - &var_407 + 1)
            void* ecx_15 = &var_408
            char i_14
            
            do
                i_14 = *ecx_15
                *(ecx_15 + eax_62 - &var_408) = i_14
                ecx_15 += 1
            while (i_14 != 0)
            (&var_5638)[i_2] = eax_62
            int16_t* var_14_7 = &var_808
            sub_5a733b(&var_408, "%s Rare good")
            void* eax_63 = &var_408
            char i_15
            
            do
                i_15 = *eax_63
                eax_63 += 1
            while (i_15 != 0)
            int32_t eax_66 = sub_4cce80(eax_63 - &var_407 + 1)
            void* ecx_16 = &var_408
            char i_16
            
            do
                i_16 = *ecx_16
                *(ecx_16 + eax_66 - &var_408) = i_16
                ecx_16 += 1
            while (i_16 != 0)
            *(&var_5634 + (i_2 << 2)) = eax_66
            int16_t* var_14_8 = &var_808
            sub_5a733b(&var_408, "%s Gene good")
            void* eax_67 = &var_408
            char i_17
            
            do
                i_17 = *eax_67
                eax_67 += 1
            while (i_17 != 0)
            int32_t eax_70 = sub_4cce80(eax_67 - &var_407 + 1)
            void* ecx_17 = &var_408
            char i_18
            
            do
                i_18 = *ecx_17
                *(ecx_17 + eax_70 - &var_408) = i_18
                ecx_17 += 1
            while (i_18 != 0)
            *(&var_5630 + (i_2 << 2)) = eax_70
            int16_t* var_14_9 = &var_808
            sub_5a733b(&var_408, "%s Alien good")
            void* eax_71 = &var_408
            char i_19
            
            do
                i_19 = *eax_71
                eax_71 += 1
            while (i_19 != 0)
            int32_t eax_74 = sub_4cce80(eax_71 - &var_407 + 1)
            void* ecx_18 = &var_408
            char i_20
            
            do
                i_20 = *ecx_18
                *(ecx_18 + eax_74 - &var_408) = i_20
                ecx_18 += 1
            while (i_20 != 0)
            var_562c[i_2] = eax_74
            int32_t edi_10 = i_2 + 4
            
            for (int32_t i_21 = 0; i_21 s< 0xc; )
                int32_t i_97 = i_21
                int16_t* var_18_17 = &var_808
                sub_5a733b(&var_408, "%s %d cards")
                void* eax_75 = &var_408
                char j_21
                
                do
                    j_21 = *eax_75
                    eax_75 += 1
                while (j_21 != 0)
                int32_t eax_78 = sub_4cce80(eax_75 - &var_407 + 1)
                void* ecx_19 = &var_408
                char j_22
                
                do
                    j_22 = *ecx_19
                    *(ecx_19 + eax_78 - &var_408) = j_22
                    ecx_19 += 1
                while (j_22 != 0)
                (&var_5638)[edi_10] = eax_78
                i_21 += 1
                edi_10 += 1
            
            for (int32_t i_22 = 0; i_22 s< 0xf; )
                int32_t i_98 = i_22
                int16_t* var_18_18 = &var_808
                sub_5a733b(&var_408, "%s %d cards seen")
                void* eax_79 = &var_408
                char j_23
                
                do
                    j_23 = *eax_79
                    eax_79 += 1
                while (j_23 != 0)
                int32_t eax_82 = sub_4cce80(eax_79 - &var_407 + 1)
                void* ecx_20 = &var_408
                char j_24
                
                do
                    j_24 = *ecx_20
                    *(ecx_20 + eax_82 - &var_408) = j_24
                    ecx_20 += 1
                while (j_24 != 0)
                (&var_5638)[edi_10] = eax_82
                i_22 += 1
                edi_10 += 1
            
            for (int32_t i_23 = 0; i_23 s< 0xa; )
                int32_t i_99 = i_23
                int16_t* var_18_19 = &var_808
                sub_5a733b(&var_408, "%s %d developments")
                void* eax_83 = &var_408
                char j_25
                
                do
                    j_25 = *eax_83
                    eax_83 += 1
                while (j_25 != 0)
                int32_t eax_86 = sub_4cce80(eax_83 - &var_407 + 1)
                void* ecx_21 = &var_408
                char j_26
                
                do
                    j_26 = *ecx_21
                    *(ecx_21 + eax_86 - &var_408) = j_26
                    ecx_21 += 1
                while (j_26 != 0)
                (&var_5638)[edi_10] = eax_86
                i_23 += 1
                edi_10 += 1
            
            for (int32_t i_24 = 0; i_24 s< 0xa; )
                int32_t i_100 = i_24
                int16_t* var_18_20 = &var_808
                sub_5a733b(&var_408, "%s %d worlds")
                void* eax_87 = &var_408
                char j_27
                
                do
                    j_27 = *eax_87
                    eax_87 += 1
                while (j_27 != 0)
                int32_t eax_90 = sub_4cce80(eax_87 - &var_407 + 1)
                void* ecx_22 = &var_408
                char j_28
                
                do
                    j_28 = *ecx_22
                    *(ecx_22 + eax_90 - &var_408) = j_28
                    ecx_22 += 1
                while (j_28 != 0)
                (&var_5638)[edi_10] = eax_90
                i_24 += 1
                edi_10 += 1
            
            for (int32_t i_25 = 0; i_25 s< 5; )
                int32_t i_101 = i_25
                int16_t* var_18_21 = &var_808
                sub_5a733b(&var_408, "%s %d six developments")
                void* eax_91 = &var_408
                char j_29
                
                do
                    j_29 = *eax_91
                    eax_91 += 1
                while (j_29 != 0)
                int32_t eax_94 = sub_4cce80(eax_91 - &var_407 + 1)
                void* ecx_23 = &var_408
                char j_30
                
                do
                    j_30 = *ecx_23
                    *(ecx_23 + eax_94 - &var_408) = j_30
                    ecx_23 += 1
                while (j_30 != 0)
                (&var_5638)[edi_10] = eax_94
                i_25 += 1
                edi_10 += 1
            
            for (int32_t i_26 = 0; i_26 s< 0xa; )
                int32_t i_102 = i_26
                int16_t* var_18_22 = &var_808
                sub_5a733b(&var_408, "%s %d military")
                void* eax_95 = &var_408
                char j_31
                
                do
                    j_31 = *eax_95
                    eax_95 += 1
                while (j_31 != 0)
                int32_t eax_98 = sub_4cce80(eax_95 - &var_407 + 1)
                void* ecx_24 = &var_408
                char j_32
                
                do
                    j_32 = *ecx_24
                    *(ecx_24 + eax_98 - &var_408) = j_32
                    ecx_24 += 1
                while (j_32 != 0)
                (&var_5638)[edi_10] = eax_98
                i_26 += 1
                edi_10 += 1
            
            int16_t* var_14_10 = &var_808
            sub_5a733b(&var_408, "%s conflicting military")
            void* eax_99 = &var_408
            char i_27
            
            do
                i_27 = *eax_99
                eax_99 += 1
            while (i_27 != 0)
            int32_t eax_102 = sub_4cce80(eax_99 - &var_407 + 1)
            void* ecx_25 = &var_408
            char i_28
            
            do
                i_28 = *ecx_25
                *(eax_102 - &var_408 + ecx_25) = i_28
                ecx_25 += 1
            while (i_28 != 0)
            (&var_5638)[edi_10] = eax_102
            int16_t* var_14_11 = &var_808
            sub_5a733b(&var_408, "%s skip develop")
            void* eax_103 = &var_408
            char i_29
            
            do
                i_29 = *eax_103
                eax_103 += 1
            while (i_29 != 0)
            int32_t eax_106 = sub_4cce80(eax_103 - &var_407 + 1)
            void* ecx_26 = &var_408
            char i_30
            
            do
                i_30 = *ecx_26
                *(eax_106 - &var_408 + ecx_26) = i_30
                ecx_26 += 1
            while (i_30 != 0)
            *(&var_5634 + (edi_10 << 2)) = eax_106
            int16_t* var_14_12 = &var_808
            sub_5a733b(&var_408, "%s skip settle")
            void* eax_107 = &var_408
            char i_31
            
            do
                i_31 = *eax_107
                eax_107 += 1
            while (i_31 != 0)
            int32_t eax_110 = sub_4cce80(eax_107 - &var_407 + 1)
            void* ecx_27 = &var_408
            char i_32
            
            do
                i_32 = *ecx_27
                *(eax_110 - &var_408 + ecx_27) = i_32
                ecx_27 += 1
            while (i_32 != 0)
            *(&var_5630 + (edi_10 << 2)) = eax_110
            int16_t* var_14_13 = &var_808
            sub_5a733b(&var_408, "%s explore mix")
            void* eax_111 = &var_408
            char i_33
            
            do
                i_33 = *eax_111
                eax_111 += 1
            while (i_33 != 0)
            int32_t eax_114 = sub_4cce80(eax_111 - &var_407 + 1)
            void* ecx_28 = &var_408
            char i_34
            
            do
                i_34 = *ecx_28
                *(eax_114 - &var_408 + ecx_28) = i_34
                ecx_28 += 1
            while (i_34 != 0)
            var_562c[edi_10] = eax_114
            int32_t edi_11 = edi_10 + 4
            
            for (int32_t i_35 = 0; i_35 s< 6; )
                int32_t i_103 = i_35
                int16_t* var_18_27 = &var_808
                sub_5a733b(&var_408, "%s %d consume ability")
                void* eax_115 = &var_408
                char j_33
                
                do
                    j_33 = *eax_115
                    eax_115 += 1
                while (j_33 != 0)
                int32_t eax_118 = sub_4cce80(eax_115 - &var_407 + 1)
                void* ecx_29 = &var_408
                char j_34
                
                do
                    j_34 = *ecx_29
                    *(eax_118 - &var_408 + ecx_29) = j_34
                    ecx_29 += 1
                while (j_34 != 0)
                (&var_5638)[edi_11] = eax_118
                i_35 += 1
                edi_11 += 1
            
            for (int32_t i_36 = 0; i_36 s< 6; )
                int32_t i_104 = i_36
                int16_t* var_18_28 = &var_808
                sub_5a733b(&var_408, "%s %d immediate consume")
                void* eax_119 = &var_408
                char j_35
                
                do
                    j_35 = *eax_119
                    eax_119 += 1
                while (j_35 != 0)
                int32_t eax_122 = sub_4cce80(eax_119 - &var_407 + 1)
                void* ecx_30 = &var_408
                char j_36
                
                do
                    j_36 = *ecx_30
                    *(eax_122 - &var_408 + ecx_30) = j_36
                    ecx_30 += 1
                while (j_36 != 0)
                (&var_5638)[edi_11] = eax_122
                i_36 += 1
                edi_11 += 1
            
            int32_t eax_123
            eax_123.b = *(arg1 + 0x45a)
            
            if (eax_123.b s> 0 && eax_123.b s< 4)
                for (int32_t i_37 = 0; i_37 s< 0x14; )
                    int32_t i_105 = i_37
                    int16_t* var_18_29 = &var_808
                    sub_5a733b(&var_408, "%s goal %d claimed")
                    void* eax_124 = &var_408
                    char j_37
                    
                    do
                        j_37 = *eax_124
                        eax_124 += 1
                    while (j_37 != 0)
                    int32_t eax_127 = sub_4cce80(eax_124 - &var_407 + 1)
                    void* ecx_31 = &var_408
                    char j_38
                    
                    do
                        j_38 = *ecx_31
                        *(eax_127 - &var_408 + ecx_31) = j_38
                        ecx_31 += 1
                    while (j_38 != 0)
                    (&var_5638)[edi_11] = eax_127
                    i_37 += 1
                    edi_11 += 1
            
            if (*(arg1 + 0x45a) == 3)
                int16_t* var_14_14 = &var_808
                sub_5a733b(&var_408, "%s prestige action used")
                void* eax_129 = &var_408
                char i_38
                
                do
                    i_38 = *eax_129
                    eax_129 += 1
                while (i_38 != 0)
                int32_t eax_132 = sub_4cce80(eax_129 - &var_407 + 1)
                void* ecx_32 = &var_408
                char i_39
                
                do
                    i_39 = *ecx_32
                    *(eax_132 - &var_408 + ecx_32) = i_39
                    ecx_32 += 1
                while (i_39 != 0)
                (&var_5638)[edi_11] = eax_132
                edi_11 += 1
                
                for (int32_t i_40 = 0; i_40 s< 0xf; )
                    int32_t i_106 = i_40
                    int16_t* var_18_31 = &var_808
                    sub_5a733b(&var_408, "%s %d prestige")
                    void* eax_133 = &var_408
                    char j_39
                    
                    do
                        j_39 = *eax_133
                        eax_133 += 1
                    while (j_39 != 0)
                    int32_t eax_136 = sub_4cce80(eax_133 - &var_407 + 1)
                    void* ecx_33 = &var_408
                    char j_40
                    
                    do
                        j_40 = *ecx_33
                        *(eax_136 - &var_408 + ecx_33) = j_40
                        ecx_33 += 1
                    while (j_40 != 0)
                    (&var_5638)[edi_11] = eax_136
                    i_40 += 1
                    edi_11 += 1
            
            int16_t* var_14_15 = &var_808
            sub_5a733b(&var_408, "%s winner")
            void* eax_137 = &var_408
            char i_41
            
            do
                i_41 = *eax_137
                eax_137 += 1
            while (i_41 != 0)
            int32_t eax_140 = sub_4cce80(eax_137 - &var_407 + 1)
            void* ecx_34 = &var_408
            char i_42
            
            do
                i_42 = *ecx_34
                *(eax_140 - &var_408 + ecx_34) = i_42
                ecx_34 += 1
            while (i_42 != 0)
            edx_1 = sx.d(*(arg1 + 0x458))
            (&var_5638)[edi_11] = eax_140
            int32_t eax_142 = var_814 + 1
            i_2 = edi_11 + 1
            var_814 = eax_142
            
            if (eax_142 s>= edx_1)
                break
            
            eax_41 = var_814
        
        i_89 = i_2
    
    int32_t i_43 = 0
    
    if (*(arg1 + 0x458) s> 0)
        do
            if (i_43 != 0)
                int32_t i_107 = i_43
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_2 = 0
            
            for (int32_t j_41 = 0; j_41 s< 0x14; )
                int32_t j_89 = j_41
                int16_t* var_18_34 = &var_808
                sub_5a733b(&var_408, "%s %d points behind")
                void* eax_144 = &var_408
                char k
                
                do
                    k = *eax_144
                    eax_144 += 1
                while (k != 0)
                int32_t eax_147 = sub_4cce80(eax_144 - &var_407 + 1)
                char* ecx_35 = &var_408
                
                do
                    edx_1.b = *ecx_35
                    *(eax_147 - &var_408 + ecx_35) = edx_1.b
                    ecx_35 = &ecx_35[1]
                while (edx_1.b != 0)
                
                (&var_5638)[i_89] = eax_147
                j_41 += 1
                i_89 += 1
            
            i_43 += 1
        while (i_43 s< sx.d(*(arg1 + 0x458)))
    
    if (*(arg1 + 0x45a) == 3 && *(arg1 + 0x458) s> 0)
        int32_t i_44 = 0
        
        do
            if (i_44 != 0)
                int32_t i_108 = i_44
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_3 = 0
            
            for (int32_t j_42 = 0; j_42 s< 5; )
                int32_t j_90 = j_42
                int16_t* var_18_36 = &var_808
                sub_5a733b(&var_408, "%s %d prestige behind")
                void* eax_150 = &var_408
                char k_1
                
                do
                    k_1 = *eax_150
                    eax_150 += 1
                while (k_1 != 0)
                int32_t eax_153 = sub_4cce80(eax_150 - &var_407 + 1)
                char* ecx_38 = &var_408
                int32_t edx_3
                
                do
                    edx_3.b = *ecx_38
                    *(eax_153 - &var_408 + ecx_38) = edx_3.b
                    ecx_38 = &ecx_38[1]
                while (edx_3.b != 0)
                (&var_5638)[i_89] = eax_153
                j_42 += 1
                i_89 += 1
            
            i_44 += 1
        while (i_44 s< sx.d(*(arg1 + 0x458)))
    
    int32_t eax_155 = 0
    int32_t var_814_1 = 0
    
    if (*(arg1 + 0x458) s> 0)
        int32_t i_132 = i_89
        
        while (true)
            if (eax_155 != 0)
                int32_t var_14_16 = eax_155
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_4 = 0
            
            for (int32_t i_45 = 0; i_45 s< 5; )
                int32_t i_109 = i_45
                int16_t* var_18_38 = &var_808
                sub_5a733b(&var_408, "%s %d built behind")
                void* eax_156 = &var_408
                char j_43
                
                do
                    j_43 = *eax_156
                    eax_156 += 1
                while (j_43 != 0)
                int32_t eax_159 = sub_4cce80(eax_156 - &var_407 + 1)
                void* ecx_41 = &var_408
                char j_44
                
                do
                    j_44 = *ecx_41
                    *(eax_159 - &var_408 + ecx_41) = j_44
                    ecx_41 += 1
                while (j_44 != 0)
                (&var_5638)[i_132] = eax_159
                i_45 += 1
                i_132 += 1
            
            int32_t eax_161 = var_814_1 + 1
            var_814_1 = eax_161
            
            if (eax_161 s>= sx.d(*(arg1 + 0x458)))
                break
            
            eax_155 = var_814_1
        
        i_89 = i_132
    
    int32_t i_46 = 0
    
    if (*(arg1 + 0x458) s> 0)
        do
            if (i_46 != 0)
                int32_t i_110 = i_46
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_5 = 0
            
            for (int32_t j_45 = 0; j_45 s< 0xa; )
                int32_t j_91 = j_45
                int16_t* var_18_40 = &var_808
                sub_5a733b(&var_408, "%s %d cards behind")
                void* eax_162 = &var_408
                char k_2
                
                do
                    k_2 = *eax_162
                    eax_162 += 1
                while (k_2 != 0)
                int32_t eax_165 = sub_4cce80(eax_162 - &var_407 + 1)
                char* ecx_42 = &var_408
                int32_t edx_4
                
                do
                    edx_4.b = *ecx_42
                    *(ecx_42 + eax_165 - &var_408) = edx_4.b
                    ecx_42 = &ecx_42[1]
                while (edx_4.b != 0)
                (&var_5638)[i_89] = eax_165
                j_45 += 1
                i_89 += 1
            
            i_46 += 1
        while (i_46 s< sx.d(*(arg1 + 0x458)))
    
    int32_t i_47 = 0
    
    if (*(arg1 + 0x458) s> 0)
        do
            if (i_47 != 0)
                int32_t i_111 = i_47
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_6 = 0
            
            for (int32_t j_46 = 0; j_46 s< 5; )
                int32_t j_92 = j_46
                int16_t* var_18_42 = &var_808
                sub_5a733b(&var_408, "%s %d goods behind")
                void* eax_167 = &var_408
                char k_3
                
                do
                    k_3 = *eax_167
                    eax_167 += 1
                while (k_3 != 0)
                int32_t eax_170 = sub_4cce80(eax_167 - &var_407 + 1)
                void* ecx_45 = &var_408
                char k_4
                
                do
                    k_4 = *ecx_45
                    *(ecx_45 + eax_170 - &var_408) = k_4
                    ecx_45 += 1
                while (k_4 != 0)
                (&var_5638)[i_89] = eax_170
                j_46 += 1
                i_89 += 1
            
            i_47 += 1
        while (i_47 s< sx.d(*(arg1 + 0x458)))
    
    sub_4b3aa0(&data_2691c30, i_89, sx.d(*(arg1 + 0x458)))
    int32_t eax_171 = 0
    
    if (i_89 s> 0)
        do
            *(data_2691c98 + (eax_171 << 2)) = (&var_5638)[eax_171]
            eax_171 += 1
        while (eax_171 s< i_89)
    
    int32_t eax_172 = sx.d(*(arg1 + 0x459))
    int32_t eax_176
    
    if (*(arg1 + 0x45a) != 3)
        int32_t eax_177 = neg.d(eax_172)
        eax_176 = (sbb.d(eax_177, eax_177, eax_172 != 0) & 0x10) + 7
    else
        int32_t eax_173 = neg.d(eax_172)
        eax_176 = (sbb.d(eax_173, eax_173, eax_172 != 0) & 0x3d) + 0xf
    
    int32_t eax_180 = 0
    int32_t edi_13 = 0
    int32_t var_810 = 0
    int32_t var_814_2 = 0
    
    if (*(arg1 + 0x458) s> 0)
        while (true)
            if (eax_180 != 0)
                int32_t var_14_18 = eax_180
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_7 = 0
            
            int32_t i_48 = 0
            
            if (data_2689cf0 s> 0)
                do
                    int32_t eax_181 = 0
                    
                    while (*((eax_181 << 2) + &data_2689cf8) != i_48)
                        if (*((eax_181 << 2) + &data_2689cfc) == i_48)
                            eax_181 += 1
                            break
                        
                        if (*((eax_181 << 2) + &data_2689d00) == i_48)
                            eax_181 += 2
                            break
                        
                        if (*((eax_181 << 2) + &data_2689d04) == i_48)
                            eax_181 += 3
                            break
                        
                        eax_181 += 4
                        
                        if (eax_181 s>= 0xec)
                            break
                    
                    int32_t var_14_19 = *(eax_181 * 0x128 + &data_2691ca8)
                    int16_t* var_18_45 = &var_808
                    sub_5a733b(&var_408, "%s active %s")
                    void* eax_183 = &var_408
                    char j_47
                    
                    do
                        j_47 = *eax_183
                        eax_183 += 1
                    while (j_47 != 0)
                    int32_t eax_186 = sub_4cce80(eax_183 - &var_407 + 1)
                    void* ecx_51 = &var_408
                    char j_48
                    
                    do
                        j_48 = *ecx_51
                        *(ecx_51 + eax_186 - &var_408) = j_48
                        ecx_51 += 1
                    while (j_48 != 0)
                    (&var_5638)[edi_13] = eax_186
                    i_48 += 1
                    edi_13 += 1
                while (i_48 s< data_2689cf0)
            
            for (int32_t i_49 = 0; i_49 s< 0xa; )
                int32_t i_112 = i_49
                int16_t* var_18_46 = &var_808
                sub_5a733b(&var_408, "%s %d developments")
                void* eax_187 = &var_408
                char j_49
                
                do
                    j_49 = *eax_187
                    eax_187 += 1
                while (j_49 != 0)
                int32_t eax_190 = sub_4cce80(eax_187 - &var_407 + 1)
                void* ecx_52 = &var_408
                char j_50
                
                do
                    j_50 = *ecx_52
                    *(ecx_52 + eax_190 - &var_408) = j_50
                    ecx_52 += 1
                while (j_50 != 0)
                (&var_5638)[edi_13] = eax_190
                i_49 += 1
                edi_13 += 1
            
            for (int32_t i_50 = 0; i_50 s< 0xa; )
                int32_t i_113 = i_50
                int16_t* var_18_47 = &var_808
                sub_5a733b(&var_408, "%s %d worlds")
                void* eax_191 = &var_408
                char j_51
                
                do
                    j_51 = *eax_191
                    eax_191 += 1
                while (j_51 != 0)
                int32_t eax_194 = sub_4cce80(eax_191 - &var_407 + 1)
                void* ecx_53 = &var_408
                char j_52
                
                do
                    j_52 = *ecx_53
                    *(ecx_53 + eax_194 - &var_408) = j_52
                    ecx_53 += 1
                while (j_52 != 0)
                (&var_5638)[edi_13] = eax_194
                i_50 += 1
                edi_13 += 1
            
            int32_t i_51 = 0
            
            if (data_26031cc s> 0)
                do
                    int32_t eax_195 = 0
                    
                    while (*((eax_195 << 2) + &data_2689940) != i_51)
                        if (*((eax_195 << 2) + &data_2689944) == i_51)
                            eax_195 += 1
                            break
                        
                        if (*((eax_195 << 2) + &data_2689948) == i_51)
                            eax_195 += 2
                            break
                        
                        if (*((eax_195 << 2) + &data_268994c) == i_51)
                            eax_195 += 3
                            break
                        
                        eax_195 += 4
                        
                        if (eax_195 s>= 0xec)
                            break
                    
                    int32_t var_14_20 = *(eax_195 * 0x128 + &data_2691ca8)
                    int16_t* var_18_48 = &var_808
                    sub_5a733b(&var_408, "%s good %s")
                    void* eax_198 = &var_408
                    char j_53
                    
                    do
                        j_53 = *eax_198
                        eax_198 += 1
                    while (j_53 != 0)
                    int32_t eax_201 = sub_4cce80(eax_198 - &var_407 + 1)
                    void* ecx_54 = &var_408
                    char j_54
                    
                    do
                        j_54 = *ecx_54
                        *(ecx_54 + eax_201 - &var_408) = j_54
                        ecx_54 += 1
                    while (j_54 != 0)
                    (&var_5638)[edi_13] = eax_201
                    i_51 += 1
                    edi_13 += 1
                while (i_51 s< data_26031cc)
            
            for (int32_t i_52 = 0; i_52 s< 6; )
                int32_t i_114 = i_52
                int16_t* var_18_49 = &var_808
                sub_5a733b(&var_408, "%s %d goods")
                void* eax_202 = &var_408
                char j_55
                
                do
                    j_55 = *eax_202
                    eax_202 += 1
                while (j_55 != 0)
                int32_t eax_205 = sub_4cce80(eax_202 - &var_407 + 1)
                void* ecx_55 = &var_408
                char j_56
                
                do
                    j_56 = *ecx_55
                    *(eax_205 - &var_408 + ecx_55) = j_56
                    ecx_55 += 1
                while (j_56 != 0)
                (&var_5638)[edi_13] = eax_205
                i_52 += 1
                edi_13 += 1
            
            int16_t* var_14_21 = &var_808
            sub_5a733b(&var_408, "%s Novelty good")
            void* eax_206 = &var_408
            char i_53
            
            do
                i_53 = *eax_206
                eax_206 += 1
            while (i_53 != 0)
            int32_t eax_209 = sub_4cce80(eax_206 - &var_407 + 1)
            void* ecx_57 = &var_408
            char i_54
            
            do
                i_54 = *ecx_57
                *(eax_209 - &var_408 + ecx_57) = i_54
                ecx_57 += 1
            while (i_54 != 0)
            (&var_5638)[edi_13] = eax_209
            int16_t* var_14_22 = &var_808
            sub_5a733b(&var_408, "%s Rare good")
            void* eax_210 = &var_408
            char i_55
            
            do
                i_55 = *eax_210
                eax_210 += 1
            while (i_55 != 0)
            int32_t eax_213 = sub_4cce80(eax_210 - &var_407 + 1)
            void* ecx_58 = &var_408
            char i_56
            
            do
                i_56 = *ecx_58
                *(eax_213 - &var_408 + ecx_58) = i_56
                ecx_58 += 1
            while (i_56 != 0)
            *(&var_5634 + (edi_13 << 2)) = eax_213
            int16_t* var_14_23 = &var_808
            sub_5a733b(&var_408, "%s Gene good")
            void* eax_214 = &var_408
            char i_57
            
            do
                i_57 = *eax_214
                eax_214 += 1
            while (i_57 != 0)
            int32_t eax_217 = sub_4cce80(eax_214 - &var_407 + 1)
            void* ecx_59 = &var_408
            char i_58
            
            do
                i_58 = *ecx_59
                *(eax_217 - &var_408 + ecx_59) = i_58
                ecx_59 += 1
            while (i_58 != 0)
            *(&var_5630 + (edi_13 << 2)) = eax_217
            int16_t* var_14_24 = &var_808
            sub_5a733b(&var_408, "%s Alien good")
            void* eax_218 = &var_408
            char i_59
            
            do
                i_59 = *eax_218
                eax_218 += 1
            while (i_59 != 0)
            int32_t eax_221 = sub_4cce80(eax_218 - &var_407 + 1)
            void* ecx_60 = &var_408
            char i_60
            
            do
                i_60 = *ecx_60
                *(eax_221 - &var_408 + ecx_60) = i_60
                ecx_60 += 1
            while (i_60 != 0)
            var_562c[edi_13] = eax_221
            int32_t edi_16 = edi_13 + 4
            
            for (int32_t i_61 = 0; i_61 s< 0xc; )
                int32_t i_115 = i_61
                int16_t* var_18_54 = &var_808
                sub_5a733b(&var_408, "%s %d cards")
                void* eax_222 = &var_408
                char j_57
                
                do
                    j_57 = *eax_222
                    eax_222 += 1
                while (j_57 != 0)
                int32_t eax_225 = sub_4cce80(eax_222 - &var_407 + 1)
                void* ecx_61 = &var_408
                char j_58
                
                do
                    j_58 = *ecx_61
                    *(eax_225 - &var_408 + ecx_61) = j_58
                    ecx_61 += 1
                while (j_58 != 0)
                (&var_5638)[edi_16] = eax_225
                i_61 += 1
                edi_16 += 1
            
            for (int32_t i_62 = 0; i_62 s< 0xf; )
                int32_t i_116 = i_62
                int16_t* var_18_55 = &var_808
                sub_5a733b(&var_408, "%s %d cards seen")
                void* eax_226 = &var_408
                char j_59
                
                do
                    j_59 = *eax_226
                    eax_226 += 1
                while (j_59 != 0)
                int32_t eax_229 = sub_4cce80(eax_226 - &var_407 + 1)
                void* ecx_62 = &var_408
                char j_60
                
                do
                    j_60 = *ecx_62
                    *(eax_229 - &var_408 + ecx_62) = j_60
                    ecx_62 += 1
                while (j_60 != 0)
                (&var_5638)[edi_16] = eax_229
                i_62 += 1
                edi_16 += 1
            
            for (int32_t i_63 = 0; i_63 s< 0xa; )
                int32_t i_117 = i_63
                int16_t* var_18_56 = &var_808
                sub_5a733b(&var_408, "%s %d military")
                void* eax_230 = &var_408
                char j_61
                
                do
                    j_61 = *eax_230
                    eax_230 += 1
                while (j_61 != 0)
                int32_t eax_233 = sub_4cce80(eax_230 - &var_407 + 1)
                void* ecx_63 = &var_408
                char j_62
                
                do
                    j_62 = *ecx_63
                    *(eax_233 - &var_408 + ecx_63) = j_62
                    ecx_63 += 1
                while (j_62 != 0)
                (&var_5638)[edi_16] = eax_233
                i_63 += 1
                edi_16 += 1
            
            int16_t* var_14_25 = &var_808
            sub_5a733b(&var_408, "%s skip develop")
            void* eax_234 = &var_408
            char i_64
            
            do
                i_64 = *eax_234
                eax_234 += 1
            while (i_64 != 0)
            int32_t eax_237 = sub_4cce80(eax_234 - &var_407 + 1)
            void* ecx_64 = &var_408
            char i_65
            
            do
                i_65 = *ecx_64
                *(ecx_64 + eax_237 - &var_408) = i_65
                ecx_64 += 1
            while (i_65 != 0)
            (&var_5638)[edi_16] = eax_237
            int16_t* var_14_26 = &var_808
            sub_5a733b(&var_408, "%s skip settle")
            void* eax_238 = &var_408
            char i_66
            
            do
                i_66 = *eax_238
                eax_238 += 1
            while (i_66 != 0)
            int32_t eax_241 = sub_4cce80(eax_238 - &var_407 + 1)
            void* ecx_65 = &var_408
            char i_67
            
            do
                i_67 = *ecx_65
                *(ecx_65 + eax_241 - &var_408) = i_67
                ecx_65 += 1
            while (i_67 != 0)
            *(&var_5634 + (edi_16 << 2)) = eax_241
            int16_t* var_14_27 = &var_808
            sub_5a733b(&var_408, "%s explore mix")
            void* eax_242 = &var_408
            char i_68
            
            do
                i_68 = *eax_242
                eax_242 += 1
            while (i_68 != 0)
            int32_t eax_245 = sub_4cce80(eax_242 - &var_407 + 1)
            void* ecx_66 = &var_408
            char i_69
            
            do
                i_69 = *ecx_66
                *(ecx_66 + eax_245 - &var_408) = i_69
                ecx_66 += 1
            while (i_69 != 0)
            *(&var_5630 + (edi_16 << 2)) = eax_245
            edi_13 = edi_16 + 3
            
            for (int32_t i_70 = 0; i_70 s< 6; )
                int32_t i_118 = i_70
                int16_t* var_18_60 = &var_808
                sub_5a733b(&var_408, "%s %d consume ability")
                void* eax_246 = &var_408
                char j_63
                
                do
                    j_63 = *eax_246
                    eax_246 += 1
                while (j_63 != 0)
                int32_t eax_249 = sub_4cce80(eax_246 - &var_407 + 1)
                void* ecx_67 = &var_408
                char j_64
                
                do
                    j_64 = *ecx_67
                    *(ecx_67 + eax_249 - &var_408) = j_64
                    ecx_67 += 1
                while (j_64 != 0)
                (&var_5638)[edi_13] = eax_249
                i_70 += 1
                edi_13 += 1
            
            for (int32_t i_71 = 0; i_71 s< 6; )
                int32_t i_119 = i_71
                int16_t* var_18_61 = &var_808
                sub_5a733b(&var_408, "%s %d immediate consume")
                void* eax_250 = &var_408
                char j_65
                
                do
                    j_65 = *eax_250
                    eax_250 += 1
                while (j_65 != 0)
                int32_t eax_253 = sub_4cce80(eax_250 - &var_407 + 1)
                void* ecx_68 = &var_408
                char j_66
                
                do
                    j_66 = *ecx_68
                    *(ecx_68 + eax_253 - &var_408) = j_66
                    ecx_68 += 1
                while (j_66 != 0)
                (&var_5638)[edi_13] = eax_253
                i_71 += 1
                edi_13 += 1
            
            int32_t eax_254
            eax_254.b = *(arg1 + 0x45a)
            
            if (eax_254.b s> 0 && eax_254.b s< 4)
                for (int32_t i_72 = 0; i_72 s< 0x14; )
                    int32_t i_120 = i_72
                    int16_t* var_18_62 = &var_808
                    sub_5a733b(&var_408, "%s goal %d claimed")
                    void* eax_255 = &var_408
                    char j_67
                    
                    do
                        j_67 = *eax_255
                        eax_255 += 1
                    while (j_67 != 0)
                    int32_t eax_258 = sub_4cce80(eax_255 - &var_407 + 1)
                    void* ecx_69 = &var_408
                    char j_68
                    
                    do
                        j_68 = *ecx_69
                        *(ecx_69 + eax_258 - &var_408) = j_68
                        ecx_69 += 1
                    while (j_68 != 0)
                    (&var_5638)[edi_13] = eax_258
                    i_72 += 1
                    edi_13 += 1
            
            if (*(arg1 + 0x45a) == 3)
                int16_t* var_14_28 = &var_808
                sub_5a733b(&var_408, "%s prestige action used")
                void* eax_260 = &var_408
                char i_73
                
                do
                    i_73 = *eax_260
                    eax_260 += 1
                while (i_73 != 0)
                int32_t eax_263 = sub_4cce80(eax_260 - &var_407 + 1)
                void* ecx_70 = &var_408
                char i_74
                
                do
                    i_74 = *ecx_70
                    *(ecx_70 + eax_263 - &var_408) = i_74
                    ecx_70 += 1
                while (i_74 != 0)
                (&var_5638)[edi_13] = eax_263
                edi_13 += 1
                
                for (int32_t i_75 = 0; i_75 s< 0xf; )
                    int32_t i_121 = i_75
                    int16_t* var_18_64 = &var_808
                    sub_5a733b(&var_408, "%s %d prestige")
                    void* eax_264 = &var_408
                    char j_69
                    
                    do
                        j_69 = *eax_264
                        eax_264 += 1
                    while (j_69 != 0)
                    int32_t eax_267 = sub_4cce80(eax_264 - &var_407 + 1)
                    void* ecx_71 = &var_408
                    char j_70
                    
                    do
                        j_70 = *ecx_71
                        *(ecx_71 + eax_267 - &var_408) = j_70
                        ecx_71 += 1
                    while (j_70 != 0)
                    (&var_5638)[edi_13] = eax_267
                    i_75 += 1
                    edi_13 += 1
            
            for (int32_t i_76 = 0; i_76 s< 0xa; )
                char const* const eax_268
                
                if (i_76 s< 0)
                    eax_268 = "(none)"
                else if (i_76.b s>= 0)
                    eax_268 = (&data_8c67a8)[i_76]
                else
                    eax_268 = (&data_8c67cc)[i_76 & 0x7f]
                
                char const* const var_14_29 = eax_268
                int16_t* var_18_65 = &var_808
                sub_5a733b(&var_408, "%s prev %s")
                void* eax_271 = &var_408
                char j_71
                
                do
                    j_71 = *eax_271
                    eax_271 += 1
                while (j_71 != 0)
                int32_t eax_274 = sub_4cce80(eax_271 - &var_407 + 1)
                void* ecx_72 = &var_408
                char j_72
                
                do
                    j_72 = *ecx_72
                    *(ecx_72 + eax_274 - &var_408) = j_72
                    ecx_72 += 1
                while (j_72 != 0)
                (&var_5638)[edi_13] = eax_274
                i_76 += 1
                edi_13 += 1
            
            int32_t eax_276 = var_814_2 + 1
            var_814_2 = eax_276
            
            if (eax_276 s>= sx.d(*(arg1 + 0x458)))
                break
            
            eax_180 = var_814_2
        
        var_810 = edi_13
    
    int32_t i_77 = 0
    
    if (*(arg1 + 0x458) s> 0)
        do
            if (i_77 != 0)
                int32_t i_122 = i_77
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_8 = 0
            
            for (int32_t j_73 = 0; j_73 s< 0x14; )
                int32_t j_93 = j_73
                int16_t* var_18_67 = &var_808
                sub_5a733b(&var_408, "%s %d points behind")
                void* eax_278 = &var_408
                char k_5
                
                do
                    k_5 = *eax_278
                    eax_278 += 1
                while (k_5 != 0)
                int32_t eax_281 = sub_4cce80(eax_278 - &var_407 + 1)
                char* ecx_73 = &var_408
                int32_t edx_7
                
                do
                    edx_7.b = *ecx_73
                    *(ecx_73 + eax_281 - &var_408) = edx_7.b
                    ecx_73 = &ecx_73[1]
                while (edx_7.b != 0)
                (&var_5638)[var_810] = eax_281
                j_73 += 1
                var_810 += 1
            
            i_77 += 1
        while (i_77 s< sx.d(*(arg1 + 0x458)))
    
    if (*(arg1 + 0x45a) == 3 && *(arg1 + 0x458) s> 0)
        int32_t i_78 = 0
        
        do
            if (i_78 != 0)
                int32_t i_123 = i_78
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_9 = 0
            
            for (int32_t j_74 = 0; j_74 s< 5; )
                int32_t j_94 = j_74
                int16_t* var_18_69 = &var_808
                sub_5a733b(&var_408, "%s %d prestige behind")
                void* eax_284 = &var_408
                char k_6
                
                do
                    k_6 = *eax_284
                    eax_284 += 1
                while (k_6 != 0)
                int32_t eax_287 = sub_4cce80(eax_284 - &var_407 + 1)
                char* ecx_76 = &var_408
                int32_t edx_9
                
                do
                    edx_9.b = *ecx_76
                    *(ecx_76 + eax_287 - &var_408) = edx_9.b
                    ecx_76 = &ecx_76[1]
                while (edx_9.b != 0)
                (&var_5638)[var_810] = eax_287
                j_74 += 1
                var_810 += 1
            
            i_78 += 1
        while (i_78 s< sx.d(*(arg1 + 0x458)))
    
    int32_t eax_289 = 0
    int32_t var_814_3 = 0
    
    if (*(arg1 + 0x458) s> 0)
        int32_t edi_17 = var_810
        
        while (true)
            if (eax_289 != 0)
                int32_t var_14_30 = eax_289
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_10 = 0
            
            for (int32_t i_79 = 0; i_79 s< 5; )
                int32_t i_124 = i_79
                int16_t* var_18_71 = &var_808
                sub_5a733b(&var_408, "%s %d build behind")
                void* eax_290 = &var_408
                char j_75
                
                do
                    j_75 = *eax_290
                    eax_290 += 1
                while (j_75 != 0)
                int32_t eax_293 = sub_4cce80(eax_290 - &var_407 + 1)
                void* ecx_79 = &var_408
                char j_76
                
                do
                    j_76 = *ecx_79
                    *(ecx_79 + eax_293 - &var_408) = j_76
                    ecx_79 += 1
                while (j_76 != 0)
                (&var_5638)[edi_17] = eax_293
                i_79 += 1
                edi_17 += 1
            
            int32_t eax_295 = var_814_3 + 1
            var_814_3 = eax_295
            
            if (eax_295 s>= sx.d(*(arg1 + 0x458)))
                break
            
            eax_289 = var_814_3
        
        var_810 = edi_17
    
    int32_t i_80 = 0
    
    if (*(arg1 + 0x458) s> 0)
        do
            if (i_80 != 0)
                int32_t i_125 = i_80
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_11 = 0
            
            for (int32_t j_77 = 0; j_77 s< 0xa; )
                int32_t j_95 = j_77
                int16_t* var_18_73 = &var_808
                sub_5a733b(&var_408, "%s %d cards behind")
                void* eax_296 = &var_408
                char k_7
                
                do
                    k_7 = *eax_296
                    eax_296 += 1
                while (k_7 != 0)
                int32_t eax_299 = sub_4cce80(eax_296 - &var_407 + 1)
                char* ecx_80 = &var_408
                int32_t edx_10
                
                do
                    edx_10.b = *ecx_80
                    *(ecx_80 + eax_299 - &var_408) = edx_10.b
                    ecx_80 = &ecx_80[1]
                while (edx_10.b != 0)
                (&var_5638)[var_810] = eax_299
                j_77 += 1
                var_810 += 1
            
            i_80 += 1
        while (i_80 s< sx.d(*(arg1 + 0x458)))
    
    int32_t i_81 = 0
    
    if (*(arg1 + 0x458) s> 0)
        do
            if (i_81 != 0)
                int32_t i_126 = i_81
                sub_5a733b(&var_808, "Opponent %d")
            else
                var_808 = 0x7355
                char var_806_12 = 0
            
            for (int32_t j_78 = 0; j_78 s< 5; )
                int32_t j_96 = j_78
                int16_t* var_18_75 = &var_808
                sub_5a733b(&var_408, "%s %d goods behind")
                void* eax_301 = &var_408
                char k_8
                
                do
                    k_8 = *eax_301
                    eax_301 += 1
                while (k_8 != 0)
                int32_t eax_304 = sub_4cce80(eax_301 - &var_407 + 1)
                void* ecx_83 = &var_408
                char k_9
                
                do
                    k_9 = *ecx_83
                    *(ecx_83 + eax_304 - &var_408) = k_9
                    ecx_83 += 1
                while (k_9 != 0)
                (&var_5638)[var_810] = eax_304
                j_78 += 1
                var_810 += 1
            
            i_81 += 1
        while (i_81 s< sx.d(*(arg1 + 0x458)))
    
    int32_t ecx_88
    
    for (int32_t i_82 = 0; i_82 s< 0xc; )
        int32_t i_127 = i_82
        sub_5a733b(&var_408, "VP Pool %d")
        void* eax_305 = &var_408
        char j_79
        
        do
            j_79 = *eax_305
            eax_305 += 1
        while (j_79 != 0)
        int32_t eax_308 = sub_4cce80(eax_305 - &var_407 + 1)
        void* ecx_86 = &var_408
        char j_80
        
        do
            j_80 = *ecx_86
            *(ecx_86 + eax_308 - &var_408) = j_80
            ecx_86 += 1
        while (j_80 != 0)
        (&var_5638)[var_810] = eax_308
        ecx_88 = var_810 + 1
        i_82 += 1
        var_810 = ecx_88
    
    int32_t i_83 = 0
    int32_t edi_18 = ecx_88
    
    do
        int32_t i_128 = i_83
        sub_5a733b(&var_408, "Max active %d")
        void* eax_309 = &var_408
        char j_81
        
        do
            j_81 = *eax_309
            eax_309 += 1
        while (j_81 != 0)
        int32_t eax_312 = sub_4cce80(eax_309 - &var_407 + 1)
        void* ecx_89 = &var_408
        char j_82
        
        do
            j_82 = *ecx_89
            *(ecx_89 + eax_312 - &var_408) = j_82
            ecx_89 += 1
        while (j_82 != 0)
        (&var_5638)[edi_18] = eax_312
        i_83 += 1
        edi_18 += 1
    while (i_83 s< 0xc)
    
    for (int32_t i_84 = 0; i_84 s< 0xc; )
        int32_t i_129 = i_84
        sub_5a733b(&var_408, "Clock %d")
        void* eax_313 = &var_408
        char j_83
        
        do
            j_83 = *eax_313
            eax_313 += 1
        while (j_83 != 0)
        int32_t eax_316 = sub_4cce80(eax_313 - &var_407 + 1)
        void* ecx_90 = &var_408
        char j_84
        
        do
            j_84 = *ecx_90
            *(ecx_90 + eax_316 - &var_408) = j_84
            ecx_90 += 1
        while (j_84 != 0)
        (&var_5638)[edi_18] = eax_316
        i_84 += 1
        edi_18 += 1
    
    int32_t eax_317
    eax_317.b = *(arg1 + 0x45a)
    
    if (eax_317.b s> 0 && eax_317.b s< 4)
        for (int32_t i_85 = 0; i_85 s< 0x14; )
            int32_t i_130 = i_85
            sub_5a733b(&var_408, "Goal active %d")
            void* eax_318 = &var_408
            char j_85
            
            do
                j_85 = *eax_318
                eax_318 += 1
            while (j_85 != 0)
            int32_t eax_321 = sub_4cce80(eax_318 - &var_407 + 1)
            void* ecx_91 = &var_408
            char j_86
            
            do
                j_86 = *ecx_91
                *(eax_321 - &var_408 + ecx_91) = j_86
                ecx_91 += 1
            while (j_86 != 0)
            (&var_5638)[edi_18] = eax_321
            i_85 += 1
            edi_18 += 1
        
        for (int32_t i_86 = 0; i_86 s< 0x14; )
            int32_t i_131 = i_86
            sub_5a733b(&var_408, "Goal available %d")
            void* eax_322 = &var_408
            char j_87
            
            do
                j_87 = *eax_322
                eax_322 += 1
            while (j_87 != 0)
            int32_t eax_325 = sub_4cce80(eax_322 - &var_407 + 1)
            void* ecx_92 = &var_408
            char j_88
            
            do
                j_88 = *ecx_92
                *(eax_325 - &var_408 + ecx_92) = j_88
                ecx_92 += 1
            while (j_88 != 0)
            (&var_5638)[edi_18] = eax_325
            i_86 += 1
            edi_18 += 1
    
    int32_t ebx_1 = 0
    
    if (eax_176 s> 0)
        do
            if (*(arg1 + 0x459) == 0)
                int32_t eax_332 = *((ebx_1 << 2) + &data_8c6a80)
                char const* const eax_333
                
                if (eax_332 s< 0)
                    eax_333 = "(none)"
                else if (eax_332.b s>= 0)
                    eax_333 = (&data_8c67a8)[eax_332]
                else
                    eax_333 = (&data_8c67cc)[eax_332 & 0x7f]
                
                char const* const var_14_32 = eax_333
                sub_5a733b(&var_408, "Raw %s")
            else
                int32_t eax_327 = *((ebx_1 << 3) + &data_8c6824)
                char const* const ecx_93
                
                if (eax_327 s< 0)
                    ecx_93 = "(none)"
                else if (eax_327.b s>= 0)
                    ecx_93 = (&data_8c67a8)[eax_327]
                else
                    ecx_93 = (&data_8c67cc)[eax_327 & 0x7f]
                
                int32_t eax_329 = *((ebx_1 << 3) + &data_8c6820)
                char const* const eax_330
                
                if (eax_329 s< 0)
                    eax_330 = "(none)"
                else if (eax_329.b s>= 0)
                    eax_330 = (&data_8c67a8)[eax_329]
                else
                    eax_330 = (&data_8c67cc)[eax_329 & 0x7f]
                
                char const* const var_14_31 = ecx_93
                char const* const var_18_81 = eax_330
                sub_5a733b(&var_408, "Raw %s/%s")
            
            void* eax_335 = &var_408
            char i_87
            
            do
                i_87 = *eax_335
                eax_335 += 1
            while (i_87 != 0)
            int32_t eax_338 = sub_4cce80(eax_335 - &var_407 + 1)
            void* ecx_94 = &var_408
            char i_88
            
            do
                i_88 = *ecx_94
                *(eax_338 - &var_408 + ecx_94) = i_88
                ecx_94 += 1
            while (i_88 != 0)
            (&var_5638)[edi_18] = eax_338
            ebx_1 += 1
            edi_18 += 1
        while (ebx_1 s< eax_176)
    
    sub_4b3aa0(&data_2691bc0, edi_18, eax_176)
    int32_t result = 0
    
    if (edi_18 s> 0)
        do
            *(data_2691c28 + (result << 2)) = (&var_5638)[result]
            result += 1
        while (result s< edi_18)
    
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return result
}

// 函数名称: sub_671c20
// 虚拟地址: 0x671c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_671c20(char* arg1, void* arg2)
{
    // 第一条实际指令: char eax = arg1[0x13a]
    char eax = arg1[0x13a]
    uint32_t edx = zx.d(arg1[0x205])
    int32_t ecx = *(arg2 + 4)
    uint32_t var_28 = *(arg1 + 0x104)
    uint32_t i_43
    i_43.b = eax
    char* i_26 = *(arg1 + 0x108)
    int32_t i_15 = (zx.d(*(arg2 + 0xb)) + 7) s>> 3
    int32_t i_19 = i_15
    char* i_31 = i_26
    char* i_30 = i_26
    uint32_t i_39 = 0x7fffffff
    
    if ((i_43.b & 8) != 0 && i_43.b != 8)
        i_43 = 0
        int32_t edi_1 = 0
        
        if (ecx != 0)
            do
                uint32_t ecx_2 = zx.d(i_26[edi_1 + 1])
                
                if (ecx_2 s>= 0x80)
                    ecx_2 = 0x100 - ecx_2
                
                edi_1 += 1
                i_43 += ecx_2
            while (edi_1 u< ecx)
        
        if (arg1[0x204] == 2)
            uint32_t edi_2 = zx.d(i_43.w)
            int32_t ecx_3 = 0
            uint32_t var_34_2 = edi_2
            uint32_t edx_1 = i_43 u>> 0xa & 0x3fffc0
            
            if (edx s> 0)
                do
                    if ((*(arg1 + 0x208))[ecx_3] == 0)
                        uint32_t eax_6 = zx.d(*(*(arg1 + 0x20c) + (ecx_3 << 1)))
                        edi_2 = (eax_6 * var_34_2) u>> 8
                        var_34_2 = edi_2
                        edx_1 = (edx_1 * eax_6) u>> 8
                    
                    ecx_3 += 1
                while (ecx_3 s< edx)
            
            uint32_t eax_7 = zx.d(**(arg1 + 0x214))
            i_26 = i_31
            uint32_t ecx_7 = (eax_7 * edx_1) u>> 3
            
            if (ecx_7 u<= 0x3fffc0)
                i_43 = ((eax_7 * edi_2) u>> 3) + (ecx_7 << 0xa)
            else
                i_43 = 0x7fffffff
        
        i_39 = i_43
    
    i_43.b = eax
    
    if (i_43.b == 0x10)
        int32_t i_25 = 0
        char* eax_11 = *(arg1 + 0x10c) + 1
        char* edi_5 = &i_26[1]
        
        if (i_15 != 0)
            int32_t i_18 = i_15
            int32_t i
            
            do
                *eax_11 = *edi_5
                edi_5 = &edi_5[1]
                eax_11 = &eax_11[1]
                i = i_15
                i_15 -= 1
            while (i != 1)
            i_25 = i_18
        
        if (i_25 u< ecx)
            char* edx_4 = &i_26[1] - eax_11
            char* edi_6 = edi_5 - eax_11
            int32_t i_16 = ecx - i_25
            int32_t i_1
            
            do
                i_25.b = *(edi_6 + eax_11)
                i_25.b -= *(edx_4 + eax_11)
                eax_11 = &eax_11[1]
                i_1 = i_16
                i_16 -= 1
                eax_11[0xffffffff] = i_25.b
            while (i_1 != 1)
        
        i_26 = *(arg1 + 0x10c)
        i_31 = i_26
        goto label_671d8a
    
    if ((i_43.b & 0x10) != 0)
        uint32_t i_42 = i_39
        
        if (arg1[0x204] == 2)
            uint32_t edi_10 = zx.d(i_39.w)
            int32_t edx_8 = 0
            uint32_t ecx_16 = i_39 u>> 0xa & 0x3fffc0
            uint32_t var_34_4 = edi_10
            
            if (edx s> 0)
                do
                    if ((*(arg1 + 0x208))[edx_8] == 1)
                        uint32_t eax_20 = zx.d(*(*(arg1 + 0x210) + (edx_8 << 1)))
                        edi_10 = (eax_20 * var_34_4) u>> 8
                        var_34_4 = edi_10
                        ecx_16 = (ecx_16 * eax_20) u>> 8
                    
                    edx_8 += 1
                while (edx_8 s< edx)
            
            uint32_t edx_10 = zx.d(*(*(arg1 + 0x218) + 2))
            uint32_t eax_23 = (edx_10 * ecx_16) u>> 3
            
            if (eax_23 u<= 0x3fffc0)
                i_42 = ((edx_10 * edi_10) u>> 3) + (eax_23 << 0xa)
            else
                i_42 = 0x7fffffff
            
            i_26 = i_31
        
        int32_t i_20 = 0
        void* edi_13 = &i_26[1]
        char* eax_26 = *(arg1 + 0x10c) + 1
        void* var_38_1 = edi_13
        void* i_46
        
        if (i_15 == 0)
            i_46 = nullptr
        else
            int32_t i_9 = i_15
            i_46 = nullptr
            int32_t i_2
            
            do
                char* i_36
                i_36.b = *edi_13
                i_26 = zx.d(i_36.b)
                *eax_26 = i_36.b
                
                if (i_26 s>= 0x80)
                    i_36 = 0x100 - i_26
                else
                    i_36 = i_26
                
                i_46 += i_36
                edi_13 += 1
                eax_26 = &eax_26[1]
                i_2 = i_9
                i_9 -= 1
            while (i_2 != 1)
            i_20 = i_15
        
        if (i_20 u< ecx)
            i_26 = var_38_1 - eax_26
            void* edi_14 = edi_13 - eax_26
            int32_t i_21 = i_20
            int32_t i_37
            
            do
                void* ecx_19
                ecx_19.b = *(edi_14 + eax_26)
                ecx_19.b -= *(i_26 + eax_26)
                *eax_26 = ecx_19.b
                uint32_t ecx_20 = zx.d(ecx_19.b)
                uint32_t edi_15
                
                if (ecx_20 s>= 0x80)
                    edi_15 = 0x100 - ecx_20
                else
                    edi_15 = ecx_20
                
                i_46 += edi_15
                
                if (i_46 u> i_42)
                    break
                
                i_37 = i_21 + 1
                eax_26 = &eax_26[1]
                i_21 = i_37
            while (i_37 u< ecx)
        
        if (arg1[0x204] == 2)
            i_26 = zx.d(i_46.w)
            uint32_t esi_5 = i_46 u>> 0xa & 0x3fffc0
            int32_t ecx_22 = 0
            char* i_28 = i_26
            
            if (edx s> 0)
                do
                    if ((*(arg1 + 0x208))[ecx_22] == 1)
                        uint32_t eax_28 = zx.d(*(*(arg1 + 0x210) + (ecx_22 << 1)))
                        i_26 = (eax_28 * i_28) u>> 8
                        i_28 = i_26
                        esi_5 = (esi_5 * eax_28) u>> 8
                    
                    ecx_22 += 1
                while (ecx_22 s< edx)
            
            uint32_t ecx_23 = zx.d(*(*(arg1 + 0x218) + 2))
            uint32_t eax_32 = (ecx_23 * esi_5) u>> 3
            
            if (eax_32 u<= 0x3fffc0)
                i_46 = (eax_32 << 0xa) + ((ecx_23 * i_26) u>> 3)
            else
                i_46 = 0x7fffffff
        
        if (i_46 u< i_39)
            i_39 = i_46
            i_31 = *(arg1 + 0x10c)
    
    if (eax != 0x20)
    label_671d8a:
        
        if ((eax & 0x20) != 0)
            uint32_t i_44 = 0
            uint32_t i_48 = 0
            uint32_t i_41 = i_39
            
            if (arg1[0x204] == 2)
                uint32_t edi_7 = zx.d(i_39.w)
                uint32_t ecx_12 = i_39 u>> 0xa & 0x3fffc0
                int32_t esi_3 = 0
                uint32_t var_34_3 = edi_7
                
                if (edx s> 0)
                    do
                        if ((*(arg1 + 0x208))[esi_3] == 2)
                            uint32_t eax_14 = zx.d(*(*(arg1 + 0x210) + (esi_3 << 1)))
                            edi_7 = (eax_14 * var_34_3) u>> 8
                            var_34_3 = edi_7
                            ecx_12 = (ecx_12 * eax_14) u>> 8
                        
                        esi_3 += 1
                    while (esi_3 s< edx)
                
                uint32_t edx_7 = zx.d(*(*(arg1 + 0x218) + 4))
                uint32_t eax_17 = (edx_7 * ecx_12) u>> 3
                
                if (eax_17 u<= 0x3fffc0)
                    i_41 = ((edx_7 * edi_7) u>> 3) + (eax_17 << 0xa)
                else
                    i_41 = 0x7fffffff
                
                i_44 = 0
            
            i_26 = &i_30[1]
            void* ecx_33 = *(arg1 + 0x110) + 1
            uint32_t i_47 = 0
            
            if (ecx u> 0)
                char* edi_20 = var_28 + 1 - i_26
                
                do
                    i_44.b = *i_26
                    i_44.b -= *(edi_20 + i_26)
                    ecx_33 += 1
                    *(ecx_33 - 1) = i_44.b
                    uint32_t eax_44 = zx.d(i_44.b)
                    i_26 = &i_26[1]
                    uint32_t esi_14
                    
                    if (eax_44 s>= 0x80)
                        esi_14 = 0x100 - eax_44
                    else
                        esi_14 = eax_44
                    
                    uint32_t i_51 = i_48 + esi_14
                    i_48 = i_51
                    
                    if (i_51 u> i_41)
                        break
                    
                    i_44 = i_47 + 1
                    i_47 = i_44
                while (i_44 u< ecx)
                
                i_44 = i_48
            
            if (arg1[0x204] == 2)
                uint32_t esi_15 = zx.d(i_44.w)
                int32_t ecx_34 = 0
                uint32_t var_34_6 = esi_15
                i_26 = i_44 u>> 0xa & 0x3fffc0
                
                if (edx s> 0)
                    do
                        if ((*(arg1 + 0x208))[ecx_34] == 2)
                            uint32_t eax_51 = zx.d(*(*(arg1 + 0x20c) + (ecx_34 << 1)))
                            esi_15 = (eax_51 * var_34_6) u>> 8
                            var_34_6 = esi_15
                            i_26 = (i_26 * eax_51) u>> 8
                        
                        ecx_34 += 1
                    while (ecx_34 s< edx)
                
                uint32_t ecx_36 = zx.d(*(*(arg1 + 0x214) + 4))
                uint32_t eax_54 = (ecx_36 * i_26) u>> 3
                uint32_t i_50
                
                if (eax_54 u<= 0x3fffc0)
                    i_50 = ((ecx_36 * esi_15) u>> 3) + (eax_54 << 0xa)
                else
                    i_50 = 0x7fffffff
                
                i_44 = i_50
            
            if (i_44 u< i_39)
                i_26 = *(arg1 + 0x110)
                i_39 = i_44
                i_31 = i_26
        
        if (eax == 0x40)
            i_26 = nullptr
            char* edi_23 = &i_30[1]
            char* esi_19 = *(arg1 + 0x114) + 1
            char* ecx_41 = var_28 + 1
            
            if (i_19 u> 0)
                int32_t i_10 = i_19
                int32_t i_3
                
                do
                    int32_t eax_56
                    eax_56.b = *ecx_41
                    i_26.b = *edi_23
                    eax_56.b u>>= 1
                    i_26.b -= eax_56.b
                    *esi_19 = i_26.b
                    esi_19 = &esi_19[1]
                    ecx_41 = &ecx_41[1]
                    edi_23 = &edi_23[1]
                    i_3 = i_10
                    i_10 -= 1
                while (i_3 != 1)
                i_26 = i_19
            
            if (i_26 u< ecx)
                char* edi_24 = edi_23 - ecx_41
                void* eax_59 = &i_30[1] - ecx_41
                char* esi_20 = esi_19 - ecx_41
                void* i_17 = ecx - i_26
                void* i_4
                
                do
                    int32_t eax_63
                    int32_t edx_25
                    edx_25:eax_63 = sx.q(zx.d(*(eax_59 + ecx_41)) + zx.d(*ecx_41))
                    i_26.b = *(edi_24 + ecx_41)
                    i_26.b -= ((eax_63 - edx_25) s>> 1).b
                    *(esi_20 + ecx_41) = i_26.b
                    ecx_41 = &ecx_41[1]
                    i_4 = i_17
                    i_17 -= 1
                while (i_4 != 1)
            
            i_31 = *(arg1 + 0x114)
            goto label_672239
    else
        i_26 = i_30
        char* ecx_27 = nullptr
        char* eax_35 = *(arg1 + 0x110) + 1
        void* edi_17 = &i_26[1]
        
        if (ecx u> 0)
            void* esi_9 = edi_17 - i_26 + var_28
            
            do
                i_26.b = *(ecx_27 + edi_17)
                i_26.b -= *esi_9
                ecx_27 = &ecx_27[1]
                *eax_35 = i_26.b
                esi_9 += 1
                eax_35 = &eax_35[1]
            while (ecx_27 u< ecx)
        
        i_31 = *(arg1 + 0x110)
    
    if ((eax & 0x40) != 0)
        i_26 = nullptr
        void* i_49 = nullptr
        uint32_t i_29 = i_39
        
        if (arg1[0x204] == 2)
            uint32_t esi_10 = zx.d(i_39.w)
            uint32_t ecx_30 = i_39 u>> 0xa & 0x3fffc0
            uint32_t var_34_5 = esi_10
            
            if (edx s> 0)
                do
                    if (i_26[*(arg1 + 0x208)] == 3)
                        uint32_t eax_39 = zx.d(*(*(arg1 + 0x210) + (i_26 << 1)))
                        esi_10 = (eax_39 * var_34_5) u>> 8
                        var_34_5 = esi_10
                        ecx_30 = (ecx_30 * eax_39) u>> 8
                    
                    i_26 = &i_26[1]
                while (i_26 s< edx)
            
            i_26 = zx.d(*(*(arg1 + 0x218) + 6))
            uint32_t eax_42 = (i_26 * ecx_30) u>> 3
            
            if (eax_42 u<= 0x3fffc0)
                i_26 = ((i_26 * esi_10) u>> 3) + (eax_42 << 0xa)
                i_29 = i_26
            else
                i_29 = 0x7fffffff
        
        void* edi_29 = &i_30[1]
        char* esi_23 = *(arg1 + 0x114) + 1
        void* ecx_47 = var_28 + 1
        int32_t i_24 = 0
        void* var_38_5 = edi_29
        
        if (i_19 u> 0)
            int32_t i_11 = i_19
            i_24 = i_19
            int32_t i_5
            
            do
                i_26.b = *ecx_47
                int32_t i_32
                i_32.b = *edi_29
                i_26.b u>>= 1
                i_32.b -= i_26.b
                *esi_23 = i_32.b
                i_32 = zx.d(i_32.b)
                esi_23 = &esi_23[1]
                ecx_47 += 1
                edi_29 += 1
                
                if (i_32 s>= 0x80)
                    i_26 = 0x100 - i_32
                else
                    i_26 = i_32
                
                i_49 += i_26
                i_5 = i_11
                i_11 -= 1
            while (i_5 != 1)
        
        if (i_24 u< ecx)
            void* eax_76 = var_38_5 - ecx_47
            char* edi_30 = edi_29 - ecx_47
            char* esi_24 = esi_23 - ecx_47
            int32_t i_34
            
            do
                int32_t eax_79
                int32_t edx_33
                edx_33:eax_79 = sx.q(zx.d(*(eax_76 + ecx_47)) + zx.d(*ecx_47))
                int32_t eax_80
                eax_80.b = *(edi_30 + ecx_47)
                eax_80.b -= ((eax_79 - edx_33) s>> 1).b
                *(esi_24 + ecx_47) = eax_80.b
                uint32_t i_33 = zx.d(eax_80.b)
                ecx_47 += 1
                
                if (i_33 s>= 0x80)
                    i_26 = 0x100 - i_33
                else
                    i_26 = i_33
                
                void* i_52 = i_49 + i_26
                i_49 = i_52
                
                if (i_52 u> i_29)
                    break
                
                i_34 = i_24 + 1
                i_24 = i_34
            while (i_34 u< ecx)
        
        uint32_t i_45
        
        if (arg1[0x204] != 2)
            i_45 = i_49
        else
            uint32_t esi_25 = zx.d(i_49.w)
            char* ecx_48 = nullptr
            uint32_t var_34_8 = esi_25
            i_26 = i_49 u>> 0xa & 0x3fffc0
            
            if (edx s> 0)
                do
                    if (ecx_48[*(arg1 + 0x208)] == 0)
                        uint32_t eax_88 = zx.d(*(*(arg1 + 0x20c) + (ecx_48 << 1)))
                        esi_25 = (eax_88 * var_34_8) u>> 8
                        var_34_8 = esi_25
                        i_26 = (i_26 * eax_88) u>> 8
                    
                    ecx_48 = &ecx_48[1]
                while (ecx_48 s< edx)
            
            uint32_t ecx_50 = zx.d(*(*(arg1 + 0x214) + 6))
            uint32_t eax_91 = (ecx_50 * i_26) u>> 3
            
            if (eax_91 u<= 0x3fffc0)
                i_45 = ((ecx_50 * esi_25) u>> 3) + (eax_91 << 0xa)
            else
                i_45 = 0x7fffffff
        
        if (i_45 u< i_39)
            i_26 = *(arg1 + 0x114)
            i_39 = i_45
            i_31 = i_26
    
    if (eax != 0x80)
    label_672239:
        
        if ((eax & 0x80) != 0)
            char* edx_26 = nullptr
            uint32_t var_1c_2 = 0
            uint32_t i_40 = i_39
            
            if (arg1[0x204] == 2)
                uint32_t edi_26 = zx.d(i_39.w)
                uint32_t ecx_44 = i_39 u>> 0xa & 0x3fffc0
                
                if (edx s> 0)
                    do
                        if (edx_26[*(arg1 + 0x208)] == 4)
                            uint32_t eax_69 = zx.d(*(*(arg1 + 0x210) + (edx_26 << 1)))
                            edi_26 = (edi_26 * eax_69) u>> 8
                            ecx_44 = (ecx_44 * eax_69) u>> 8
                        
                        edx_26 = &edx_26[1]
                    while (edx_26 s< edx)
                
                uint32_t edx_28 = zx.d(*(*(arg1 + 0x218) + 8))
                uint32_t eax_72 = (edx_28 * ecx_44) u>> 3
                
                if (eax_72 u<= 0x3fffc0)
                    i_40 = ((edx_28 * edi_26) u>> 3) + (eax_72 << 0xa)
                else
                    i_40 = 0x7fffffff
            
            i_26 = var_28 + 1
            void* ecx_63 = *(arg1 + 0x118) + 1
            int32_t i_23 = 0
            void* edi_38 = &i_30[1]
            void* var_2c_2 = &i_30[1]
            char* i_27 = i_26
            
            if (i_19 != 0)
                int32_t i_14 = i_19
                i_23 = i_19
                int32_t i_6
                
                do
                    int32_t eax_110
                    eax_110.b = *edi_38
                    eax_110.b -= *i_26
                    ecx_63 += 1
                    *(ecx_63 - 1) = eax_110.b
                    eax_110 = zx.d(eax_110.b)
                    i_26 = &i_26[1]
                    edi_38 += 1
                    int32_t esi_32
                    
                    if (eax_110 s>= 0x80)
                        esi_32 = 0x100 - eax_110
                    else
                        esi_32 = eax_110
                    
                    var_1c_2 += esi_32
                    i_6 = i_14
                    i_14 -= 1
                while (i_6 != 1)
                var_2c_2 = edi_38
            
            void* var_24_1 = &i_30[1]
            
            if (i_23 u< ecx)
                int32_t edx_47 = i_26 - &i_30[1]
                char* i_38 = ecx_63 - var_2c_2
                int32_t i_35
                
                do
                    uint32_t ebx_9 = zx.d(*var_24_1)
                    uint32_t esi_33 = zx.d(*(var_24_1 + edx_47))
                    uint32_t ecx_65 = zx.d(*(i_27 - &i_30[1] + var_24_1))
                    var_24_1 += 1
                    uint32_t esi_34 = esi_33 - ecx_65
                    int32_t eax_117
                    int32_t edx_49
                    edx_49:eax_117 = sx.q(esi_34)
                    uint32_t ebx_10 = ebx_9 - ecx_65
                    int32_t ecx_68 = (eax_117 ^ edx_49) - edx_49
                    int32_t eax_119
                    int32_t edx_50
                    edx_50:eax_119 = sx.q(ebx_10)
                    int32_t edi_41 = (eax_119 ^ edx_50) - edx_50
                    int32_t eax_121
                    int32_t edx_51
                    edx_51:eax_121 = sx.q(ebx_10 + esi_34)
                    int32_t eax_123 = (eax_121 ^ edx_51) - edx_51
                    char edx_52
                    
                    if (ecx_68 s> edi_41 || ecx_68 s> eax_123)
                        edx_52 = esi_33.b
                        
                        if (edi_41 s> eax_123)
                            edx_52 = ecx_65.b
                    else
                        edx_52 = ebx_9.b
                    
                    char* ecx_69 = var_2c_2
                    eax_123.b = *ecx_69
                    eax_123.b -= edx_52
                    i_26 = i_38
                    *(ecx_69 + i_26) = eax_123.b
                    uint32_t eax_124 = zx.d(eax_123.b)
                    var_2c_2 = &ecx_69[1]
                    uint32_t ecx_71
                    
                    if (eax_124 s>= 0x80)
                        ecx_71 = 0x100 - eax_124
                    else
                        ecx_71 = eax_124
                    
                    uint32_t eax_126 = var_1c_2 + ecx_71
                    var_1c_2 = eax_126
                    
                    if (eax_126 u> i_40)
                        break
                    
                    i_35 = i_23 + 1
                    i_23 = i_35
                while (i_35 u< ecx)
            
            uint32_t ecx_75
            
            if (arg1[0x204] != 2)
                ecx_75 = var_1c_2
            else
                uint32_t esi_35 = zx.d(var_1c_2.w)
                char* ecx_72 = nullptr
                i_26 = var_1c_2 u>> 0xa & 0x3fffc0
                
                if (edx s> 0)
                    do
                        if (ecx_72[*(arg1 + 0x208)] == 4)
                            uint32_t eax_133 = zx.d(*(*(arg1 + 0x20c) + (ecx_72 << 1)))
                            esi_35 = (esi_35 * eax_133) u>> 8
                            i_26 = (i_26 * eax_133) u>> 8
                        
                        ecx_72 = &ecx_72[1]
                    while (ecx_72 s< edx)
                
                uint32_t ecx_74 = zx.d(*(*(arg1 + 0x214) + 8))
                uint32_t eax_136 = (ecx_74 * i_26) u>> 3
                
                if (eax_136 u<= 0x3fffc0)
                    ecx_75 = ((ecx_74 * esi_35) u>> 3) + (eax_136 << 0xa)
                else
                    ecx_75 = 0x7fffffff
            
            if (ecx_75 u< i_39)
                i_26 = *(arg1 + 0x118)
                i_31 = i_26
    else
        void* eax_94 = *(arg1 + 0x118) + 1
        int32_t i_22 = 0
        void* edi_32 = &i_30[1]
        void* var_2c_1 = &i_30[1]
        void* esi_28 = var_28 + 1
        
        if (i_19 != 0)
            int32_t i_12 = i_19
            i_22 = i_19
            int32_t i_7
            
            do
                int32_t edx_37
                edx_37.b = *edi_32
                edx_37.b -= *esi_28
                eax_94 += 1
                *(eax_94 - 1) = edx_37.b
                esi_28 += 1
                edi_32 += 1
                i_7 = i_12
                i_12 -= 1
            while (i_7 != 1)
            var_2c_1 = edi_32
        
        void* var_34_9 = &i_30[1]
        
        if (i_22 u< ecx)
            int32_t eax_95 = eax_94 - var_2c_1
            int32_t i_13 = ecx - i_22
            int32_t i_8
            
            do
                uint32_t ebx_5 = zx.d(*var_34_9)
                uint32_t esi_30 = zx.d(*(var_34_9 + esi_28 - &i_30[1]))
                uint32_t ecx_56 = zx.d(*(var_28 + 1 - &i_30[1] + var_34_9))
                var_34_9 += 1
                uint32_t esi_31 = esi_30 - ecx_56
                int32_t eax_99
                int32_t edx_40
                edx_40:eax_99 = sx.q(esi_31)
                uint32_t ebx_6 = ebx_5 - ecx_56
                int32_t ecx_59 = (eax_99 ^ edx_40) - edx_40
                int32_t eax_101
                int32_t edx_41
                edx_41:eax_101 = sx.q(ebx_6)
                int32_t edi_37 = (eax_101 ^ edx_41) - edx_41
                int32_t eax_103
                int32_t edx_42
                edx_42:eax_103 = sx.q(ebx_6 + esi_31)
                int32_t eax_105 = (eax_103 ^ edx_42) - edx_42
                char ecx_60
                
                if (ecx_59 s> edi_37 || ecx_59 s> eax_105)
                    ecx_60 = esi_30.b
                    
                    if (edi_37 s> eax_105)
                        ecx_60 = ecx_56.b
                else
                    ecx_60 = ebx_5.b
                
                edx_42.b = *var_2c_1
                edx_42.b -= ecx_60
                *(var_2c_1 + eax_95) = edx_42.b
                i_8 = i_13
                i_13 -= 1
                var_2c_1 += 1
            while (i_8 != 1)
        
        i_26 = arg1
        i_31 = *(i_26 + 0x118)
    
    char* result = sub_671800(i_31, i_26, *(arg2 + 4) + 1, arg1)
    
    if (arg1[0x205] u> 0)
        result = 1
        
        if (edx s> 1)
            do
                char* ecx_80 = *(arg1 + 0x208)
                *(ecx_80 + result) = *(ecx_80 + result - 1)
                result = &result[1]
            while (result s< edx)
        
        result[*(arg1 + 0x208)] = *i_31
    
    return result
}

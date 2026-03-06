// 函数名称: sub_6746d0
// 虚拟地址: 0x6746d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6746d0(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* edi = arg1
    
    if (edi != 0)
        int32_t** esi_1 = edi[7]
        
        if (esi_1 != 0 && arg2 u<= 5)
            if (edi[3] != 0 && (*edi != 0 || edi[1] == 0))
                int32_t eax_1 = esi_1[1]
                
                if (eax_1 != 0x29a || arg2 == 4)
                    if (edi[4] == 0)
                        edi[6] = "buffer error"
                        return 0xfffffffb
                    
                    char* edx = esi_1[0xa]
                    *esi_1 = edi
                    char* var_8_1 = edx
                    esi_1[0xa] = arg2
                    
                    if (eax_1 == 0x2a)
                        if (esi_1[6] != 2)
                            int32_t eax_27
                            
                            if (esi_1[0x22] s< 2)
                                eax_27 = esi_1[0x21]
                            
                            int32_t eax_28
                            
                            if (esi_1[0x22] s>= 2 || eax_27 s< 2)
                                eax_28 = 0
                            else if (eax_27 s>= 6)
                                int32_t edx_17
                                edx_17.b = eax_27 != 6
                                eax_28 = edx_17 + 2
                            else
                                eax_28 = 1
                            
                            int32_t ecx_31 = (((esi_1[0xc] - 8) << 0xc) + 0x800) | eax_28 << 6
                            
                            if (esi_1[0x1b] != 0)
                                ecx_31 |= 0x20
                            
                            int32_t eax_30
                            int32_t edx_18
                            edx_18:eax_30 = mulu.dp.d(0x8421085, ecx_31)
                            esi_1[1] = 0x71
                            int32_t edx_19 = sub_673220(esi_1, edx_18, (ecx_31 u/ 0x1f + 1) * 0x1f)
                            
                            if (esi_1[0x1b] != 0)
                                sub_673220(esi_1, sub_673220(esi_1, edx_19, zx.d(*(edi + 0x32))), 
                                    zx.d(edi[0xc].w))
                            
                            void* eax_35
                            eax_35, edx = sub_6783e0(0, nullptr, 0)
                            edi[0xc] = eax_35
                        else
                            edi[0xc] = sub_673170(0, nullptr, 0)
                            esi_1[2][esi_1[5]] = 0x1f
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = 0x8b
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = 8
                            esi_1[5] += 1
                            void* eax_7 = esi_1[7]
                            char* ecx_4 = esi_1[5]
                            
                            if (eax_7 != 0)
                                int32_t edx_5 = *(eax_7 + 0x24)
                                int32_t ecx_9 = *(eax_7 + 0x2c)
                                char edx_6 = (neg.d(edx_5)).b
                                char ecx_10 = (neg.d(ecx_9)).b
                                int32_t ecx_11 = *(eax_7 + 0x1c)
                                char ecx_12 = (neg.d(ecx_11)).b
                                int32_t ecx_13 = *(eax_7 + 0x10)
                                char ecx_14 = (neg.d(ecx_13)).b
                                edx_6 = (sbb.b(edx_6, edx_6, edx_5 != 0) & 0x10)
                                    + (sbb.b(ecx_10, ecx_10, ecx_9 != 0) & 2)
                                    + (sbb.b(ecx_12, ecx_12, ecx_11 != 0) & 8)
                                    + (sbb.b(ecx_14, ecx_14, ecx_13 != 0) & 4)
                                eax_7.b = *eax_7 != 0
                                ecx_4[esi_1[2]] = edx_6 + eax_7.b
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = esi_1[7][1].b
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(esi_1[7] + 5)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(esi_1[7] + 6)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(esi_1[7] + 7)
                                esi_1[5] += 1
                                int32_t eax_20 = esi_1[0x21]
                                char eax_21
                                
                                if (eax_20 == 9)
                                    eax_21 = 2
                                else if (esi_1[0x22] s>= 2 || eax_20 s< 2)
                                    eax_21 = 4
                                else
                                    eax_21 = 0
                                
                                esi_1[5][esi_1[2]] = eax_21
                                esi_1[5] += 1
                                void* ecx_23
                                ecx_23.b = esi_1[7][3].b
                                esi_1[5][esi_1[2]] = ecx_23.b
                                esi_1[5] += 1
                                void* eax_23 = esi_1[7]
                                char* ecx_24 = esi_1[5]
                                
                                if (*(eax_23 + 0x10) != 0)
                                    eax_23.b = *(eax_23 + 0x14)
                                    ecx_24[esi_1[2]] = eax_23.b
                                    esi_1[5] += 1
                                    void* ecx_25
                                    ecx_25.b = *(esi_1[7] + 0x15)
                                    esi_1[5][esi_1[2]] = ecx_25.b
                                    esi_1[5] += 1
                                    ecx_24 = esi_1[5]
                                
                                edx = esi_1[7]
                                
                                if (*(edx + 0x2c) != 0)
                                    int32_t eax_26
                                    eax_26, edx = sub_673170(edi[0xc], esi_1[2], ecx_24)
                                    edi[0xc] = eax_26
                                
                                esi_1[8] = 0
                                esi_1[1] = 0x45
                            else
                                ecx_4[esi_1[2]] = eax_7.b
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = 0
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = 0
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = 0
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = 0
                                esi_1[5] += 1
                                int32_t eax_12 = esi_1[0x21]
                                char eax_13
                                
                                if (eax_12 == 9)
                                    eax_13 = 2
                                else if (esi_1[0x22] s>= 2 || eax_12 s< 2)
                                    eax_13 = 4
                                else
                                    eax_13 = 0
                                
                                edx = esi_1[2]
                                *(esi_1[5] + edx) = eax_13
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = 0xb
                                esi_1[5] += 1
                                esi_1[1] = 0x71
                    
                    if (esi_1[1] == 0x45)
                        void* eax_36 = esi_1[7]
                        
                        if (*(eax_36 + 0x10) == 0)
                            esi_1[1] = 0x49
                        else
                            char* ecx_39 = esi_1[5]
                            arg1 = ecx_39
                            
                            if (esi_1[8] u< zx.d(*(eax_36 + 0x14)))
                                do
                                    char* eax_42 = esi_1[5]
                                    
                                    if (eax_42 == esi_1[3])
                                        if (esi_1[7][0xb] != 0 && eax_42 u> ecx_39)
                                            edi[0xc] =
                                                sub_673170(edi[0xc], esi_1[2] + ecx_39, eax_42 - ecx_39)
                                        
                                        sub_673250(edi)
                                        eax_42 = esi_1[5]
                                        ecx_39 = eax_42
                                        arg1 = ecx_39
                                        
                                        if (eax_42 == esi_1[3])
                                            break
                                    
                                    char* ecx_41
                                    ecx_41.b = esi_1[7][4][esi_1[8]]
                                    eax_42[esi_1[2]] = ecx_41.b
                                    ecx_39 = arg1
                                    esi_1[5] += 1
                                    esi_1[8] += 1
                                while (esi_1[8] u< zx.d(esi_1[7][5].w))
                            
                            if (esi_1[7][0xb] != 0)
                                int32_t eax_44 = esi_1[5]
                                
                                if (eax_44 u> ecx_39)
                                    edi[0xc] = sub_673170(edi[0xc], esi_1[2] + ecx_39, eax_44 - ecx_39)
                            
                            edx = esi_1[7]
                            
                            if (esi_1[8] == *(edx + 0x14))
                                esi_1[8] = 0
                                esi_1[1] = 0x49
                    
                    uint32_t i
                    
                    if (esi_1[1] == 0x49)
                        if (esi_1[7][7] == 0)
                            esi_1[1] = 0x5b
                        else
                            edx = esi_1[5]
                            
                            do
                                char* eax_54 = esi_1[5]
                                
                                if (eax_54 == esi_1[3])
                                    if (esi_1[7][0xb] != 0 && eax_54 u> edx)
                                        edi[0xc] = sub_673170(edi[0xc], esi_1[2] + edx, eax_54 - edx)
                                    
                                    sub_673250(edi)
                                    eax_54 = esi_1[5]
                                    edx = eax_54
                                    
                                    if (eax_54 == esi_1[3])
                                        i = 1
                                        break
                                
                                int32_t ecx_47 = esi_1[8]
                                i = zx.d(*(esi_1[7][7] + ecx_47))
                                esi_1[8] = ecx_47 + 1
                                eax_54[esi_1[2]] = i.b
                                esi_1[5] += 1
                            while (i != 0)
                            
                            if (esi_1[7][0xb] != 0)
                                int32_t eax_56 = esi_1[5]
                                
                                if (eax_56 u> edx)
                                    int32_t eax_58
                                    eax_58, edx = sub_673170(edi[0xc], esi_1[2] + edx, eax_56 - edx)
                                    edi[0xc] = eax_58
                            
                            if (i == 0)
                                esi_1[8] = i
                                esi_1[1] = 0x5b
                    
                    if (esi_1[1] == 0x5b)
                        if (esi_1[7][9] != 0)
                            edx = esi_1[5]
                            
                            do
                                char* eax_64 = esi_1[5]
                                
                                if (eax_64 == esi_1[3])
                                    if (esi_1[7][0xb] != 0 && eax_64 u> edx)
                                        edi[0xc] = sub_673170(edi[0xc], esi_1[2] + edx, eax_64 - edx)
                                    
                                    sub_673250(edi)
                                    eax_64 = esi_1[5]
                                    edx = eax_64
                                    
                                    if (eax_64 == esi_1[3])
                                        i = 1
                                        break
                                
                                int32_t ecx_54 = esi_1[8]
                                i = zx.d(*(esi_1[7][9] + ecx_54))
                                esi_1[8] = ecx_54 + 1
                                eax_64[esi_1[2]] = i.b
                                esi_1[5] += 1
                            while (i != 0)
                            
                            if (esi_1[7][0xb] != 0)
                                int32_t eax_66 = esi_1[5]
                                
                                if (eax_66 u> edx)
                                    int32_t eax_68
                                    eax_68, edx = sub_673170(edi[0xc], esi_1[2] + edx, eax_66 - edx)
                                    edi[0xc] = eax_68
                        
                        if (esi_1[7][9] == 0 || i == 0)
                            esi_1[1] = 0x67
                    
                    if (esi_1[1] == 0x67)
                        if (esi_1[7][0xb] == 0)
                            esi_1[1] = 0x71
                        else
                            if (esi_1[5] + 2 u> esi_1[3])
                                sub_673250(edi)
                            
                            char* eax_70 = esi_1[5]
                            edx = &eax_70[2]
                            
                            if (edx u<= esi_1[3])
                                edx.b = edi[0xc].b
                                eax_70[esi_1[2]] = edx.b
                                int32_t edx_28 = esi_1[2]
                                esi_1[5] += 1
                                i.b = *(edi + 0x31)
                                esi_1[5][edx_28] = i.b
                                esi_1[5] += 1
                                int32_t eax_72
                                eax_72, edx = sub_673170(0, nullptr, 0)
                                edi[0xc] = eax_72
                                esi_1[1] = 0x71
                    
                    if (esi_1[5] == 0)
                        int32_t eax_75
                        
                        if (edi[1] != 0)
                        label_674d04:
                            eax_75 = arg2
                        else
                            int32_t ecx_62
                            ecx_62.b = var_8_1 s<= 4
                            eax_75 = arg2
                            edx = var_8_1 * 2 - ((ecx_62 - 1) & 9)
                            int32_t ecx_65
                            ecx_65.b = eax_75 s<= 4
                            
                            if (eax_75 * 2 - ((ecx_65 - 1) & 9) s<= edx && eax_75 != 4)
                                edi[6] = "buffer error"
                                return 0xfffffffb
                        
                        int32_t ecx_68 = esi_1[1]
                        
                        if (ecx_68 == 0x29a)
                            if (edi[1] != 0)
                                edi[6] = "buffer error"
                                return 0xfffffffb
                            
                            if (esi_1[0x1d] != 0 || (eax_75 != 0 && ecx_68 != 0x29a))
                                goto label_674d4c
                            
                            goto label_674e3c
                        
                        if (edi[1] != 0 || esi_1[0x1d] != 0 || (eax_75 != 0 && ecx_68 != 0x29a))
                        label_674d4c:
                            int32_t ecx_69 = esi_1[0x22]
                            int32_t eax_79
                            
                            if (ecx_69 == 2)
                                eax_79, edx = sub_6744f0(esi_1, edx)
                            else if (ecx_69 != 3)
                                eax_79, edx = (&data_832e58)[esi_1[0x21] * 3](esi_1, eax_75)
                            else
                                eax_79, edx = sub_6741e0(esi_1, edx)
                            
                            if (eax_79 == 2 || eax_79 == 3)
                                esi_1[1] = 0x29a
                            
                            if (eax_79 != 0 && eax_79 != 2)
                                if (eax_79 == 1)
                                    if (arg2 == 1)
                                        sub_6780e0(esi_1)
                                    else if (arg2 != 5)
                                        sub_678020(esi_1, nullptr, 0, 0)
                                        
                                        if (arg2 == 3)
                                            *(esi_1[0x11] + (esi_1[0x13] << 1) - 2) = 0
                                            sub_5abfc0(esi_1[0x11], 0, esi_1[0x13] * 2 - 2)
                                            
                                            if (esi_1[0x1d] == 0)
                                                esi_1[0x1b] = 0
                                                esi_1[0x17] = 0
                                                esi_1[0x5ad] = 0
                                    
                                    edx = sub_673250(edi)
                                    
                                    if (edi[4] == 0)
                                        esi_1[0xa] = 0xffffffff
                                        return 0
                                
                                goto label_674e3c
                            
                            if (edi[4] == 0)
                                esi_1[0xa] = 0xffffffff
                        else
                        label_674e3c:
                            
                            if (arg2 == 4)
                                int32_t eax_85 = esi_1[6]
                                
                                if (eax_85 s<= 0)
                                    return 1
                                
                                if (eax_85 != 2)
                                    sub_673220(esi_1, sub_673220(esi_1, edx, zx.d(*(edi + 0x32))), 
                                        zx.d(edi[0xc].w))
                                else
                                    esi_1[2][esi_1[5]] = edi[0xc].b
                                    esi_1[5] += 1
                                    esi_1[5][esi_1[2]] = *(edi + 0x31)
                                    esi_1[5] += 1
                                    esi_1[5][esi_1[2]] = *(edi + 0x32)
                                    esi_1[5] += 1
                                    esi_1[5][esi_1[2]] = *(edi + 0x33)
                                    esi_1[5] += 1
                                    esi_1[5][esi_1[2]] = edi[2].b
                                    esi_1[5] += 1
                                    esi_1[5][esi_1[2]] = *(edi + 9)
                                    esi_1[5] += 1
                                    esi_1[5][esi_1[2]] = *(edi + 0xa)
                                    esi_1[5] += 1
                                    esi_1[5][esi_1[2]] = *(edi + 0xb)
                                    esi_1[5] += 1
                                
                                sub_673250(edi)
                                int32_t eax_96 = esi_1[6]
                                
                                if (eax_96 s> 0)
                                    esi_1[6] = neg.d(eax_96)
                                
                                int32_t result
                                result.b = esi_1[5] == 0
                                return result
                    else
                        edx = sub_673250(edi)
                        
                        if (edi[4] != 0)
                            goto label_674d04
                        
                        esi_1[0xa] = 0xffffffff
                    
                    return 0
            
            edi[6] = "stream error"
    
    return 0xfffffffe
}

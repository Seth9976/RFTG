// 函数名称: sub_5ab990
// 虚拟地址: 0x5ab990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5ab990(int128_t* arg1, int128_t* arg2, void* arg3)
{
    // 第一条实际指令: int128_t* esi = arg2
    int128_t* esi = arg2
    void* ecx = arg3
    int128_t* edi = arg1
    void* eax_1
    
    if (edi u> esi && edi u< ecx + esi)
        void* esi_2 = ecx + esi - 4
        void* edi_2 = ecx + edi - 4
        uint32_t ecx_4
        
        if ((edi_2 & 3) == 0)
            ecx_4 = ecx u>> 2
            
            if (ecx_4 u< 8)
                jump((&jump_table_5abc4c)[neg.d(ecx_4)])
            
            edi_2, esi_2 = __builtin_memcpy(edi_2 - (ecx_4 << 2), esi_2 - (ecx_4 << 2), ecx_4 << 2)
            
            switch (ecx & 3)
                case nullptr
                    return arg1
                case 1
                    goto label_5abcb4
                case 2
                    goto label_5abcc4
                case 3
                    goto label_5abcd8
        else if (ecx u< 4)
            switch (ecx)
                case nullptr
                    return arg1
                case 1
                label_5abcb4:
                    eax_1.b = *(esi_2 + 3)
                    *(edi_2 + 3) = eax_1.b
                    return arg1
                case 2
                label_5abcc4:
                    eax_1.b = *(esi_2 + 3)
                    *(edi_2 + 3) = eax_1.b
                    eax_1.b = *(esi_2 + 2)
                    *(edi_2 + 2) = eax_1.b
                    return arg1
                case 3
                label_5abcd8:
                    eax_1.b = *(esi_2 + 3)
                    *(edi_2 + 3) = eax_1.b
                    eax_1.b = *(esi_2 + 2)
                    *(edi_2 + 2) = eax_1.b
                    eax_1.b = *(esi_2 + 1)
                    *(edi_2 + 1) = eax_1.b
                    return arg1
        else
            eax_1 = edi_2 & 3
            void* ecx_6 = ecx - eax_1
            
            switch (jump_table_5abba0[eax_1])
                case 0x5abbb0
                    eax_1.b = *(esi_2 + 3)
                    *(edi_2 + 3) = eax_1.b
                    ecx_4 = ecx_6 u>> 2
                    
                    if (ecx_4 u< 8)
                        jump((&jump_table_5abc4c)[neg.d(ecx_4)])
                    
                    edi_2, esi_2 =
                        __builtin_memcpy(edi_2 - 1 - (ecx_4 << 2), esi_2 - 1 - (ecx_4 << 2), ecx_4 << 2)
                    
                    switch (3 & ecx_6)
                        case nullptr
                            return arg1
                        case 1
                            goto label_5abcb4
                        case 2
                            goto label_5abcc4
                        case 3
                            goto label_5abcd8
                case 0x5abbd4
                    eax_1.b = *(esi_2 + 3)
                    *(edi_2 + 3) = eax_1.b
                    eax_1.b = *(esi_2 + 2)
                    ecx_4 = ecx_6 u>> 2
                    *(edi_2 + 2) = eax_1.b
                    
                    if (ecx_4 u< 8)
                        jump((&jump_table_5abc4c)[neg.d(ecx_4)])
                    
                    edi_2, esi_2 =
                        __builtin_memcpy(edi_2 - 2 - (ecx_4 << 2), esi_2 - 2 - (ecx_4 << 2), ecx_4 << 2)
                    
                    switch (3 & ecx_6)
                        case nullptr
                            return arg1
                        case 1
                            goto label_5abcb4
                        case 2
                            goto label_5abcc4
                        case 3
                            goto label_5abcd8
                case 0x5abbfc
                    eax_1.b = *(esi_2 + 3)
                    *(edi_2 + 3) = eax_1.b
                    eax_1.b = *(esi_2 + 2)
                    *(edi_2 + 2) = eax_1.b
                    eax_1.b = *(esi_2 + 1)
                    ecx_4 = ecx_6 u>> 2
                    *(edi_2 + 1) = eax_1.b
                    
                    if (ecx_4 u< 8)
                        jump((&jump_table_5abc4c)[neg.d(ecx_4)])
                    
                    edi_2, esi_2 =
                        __builtin_memcpy(edi_2 - 3 - (ecx_4 << 2), esi_2 - 3 - (ecx_4 << 2), ecx_4 << 2)
                    
                    switch (3 & ecx_6)
                        case nullptr
                            return arg1
                        case 1
                            goto label_5abcb4
                        case 2
                            goto label_5abcc4
                        case 3
                            goto label_5abcd8
    
    if (ecx u>= 0x80 && data_3166fe0 != 0 && (edi & 0xf) == (esi & 0xf))
        int128_t* var_10_2 = edi
        void* eax_19 = esi & 0xf
        
        if (eax_19 != 0)
            void* i_9 = (0x10 - eax_19) & 3
            
            if (i_9 != 0)
                void* i
                
                do
                    void* edx_9
                    edx_9.b = *esi
                    *edi = edx_9.b
                    esi += 1
                    edi += 1
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            
            uint32_t i_6 = (0x10 - eax_19) u>> 2
            
            if (i_6 != 0)
                uint32_t i_1
                
                do
                    *edi = *esi
                    esi += 4
                    edi += 4
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
            
            ecx -= 0x10 - eax_19
        
        void* ecx_7 = ecx & 0x7f
        uint32_t i_10 = ecx u>> 7
        
        if (i_10 != 0)
            uint32_t i_2
            
            do
                int128_t xmm1_1 = esi[1]
                int128_t xmm2_1 = esi[2]
                int128_t xmm3_1 = esi[3]
                *edi = *esi
                edi[1] = xmm1_1
                edi[2] = xmm2_1
                edi[3] = xmm3_1
                int128_t xmm5_1 = esi[5]
                int128_t xmm6_1 = esi[6]
                int128_t xmm7_1 = esi[7]
                edi[4] = esi[4]
                edi[5] = xmm5_1
                edi[6] = xmm6_1
                edi[7] = xmm7_1
                esi = &esi[8]
                edi = &edi[8]
                i_2 = i_10
                i_10 -= 1
            while (i_2 != 1)
        
        if (ecx_7 != 0)
            uint32_t i_11 = ecx_7 u>> 4
            
            if (i_11 != 0)
                uint32_t i_3
                
                do
                    *edi = *esi
                    esi = &esi[1]
                    edi = &edi[1]
                    i_3 = i_11
                    i_11 -= 1
                while (i_3 != 1)
            
            void* ecx_8 = ecx_7 & 0xf
            
            if (ecx_8 != 0)
                uint32_t i_7 = ecx_8 u>> 2
                
                if (i_7 != 0)
                    uint32_t i_4
                    
                    do
                        *edi = *esi
                        esi += 4
                        edi += 4
                        i_4 = i_7
                        i_7 -= 1
                    while (i_4 != 1)
                
                void* i_8 = ecx_8 & 3
                
                if (i_8 != 0)
                    void* i_5
                    
                    do
                        void* eax_20
                        eax_20.b = *esi
                        *edi = eax_20.b
                        esi += 1
                        edi += 1
                        i_5 = i_8
                        i_8 -= 1
                    while (i_5 != 1)
        
        return var_10_2
    
    uint32_t ecx_1
    void* edx_1
    
    if ((edi & 3) != 0)
        if (ecx u< 4)
            jump(*(((ecx - 4) << 2) + &data_5abb10))
        
        eax_1 = edi & 3
        void* ecx_3 = ecx - 4 + eax_1
        
        switch (jump_table_5aba14[eax_1])
            case 0x5aba24
                edx_1 = 3 & ecx_3
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = *(esi + 1)
                *(edi + 1) = eax_1.b
                eax_1.b = *(esi + 2)
                ecx_1 = ecx_3 u>> 2
                *(edi + 2) = eax_1.b
                esi += 3
                edi += 3
                
                if (ecx_1 u>= 8)
                    edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
                    
                    switch (edx_1)
                        case nullptr
                            return arg1
                        case 1
                            goto label_5abb18
                        case 2
                            goto label_5abb24
                        case 3
                            goto label_5abb38
            case 0x5aba50
                edx_1 = 3 & ecx_3
                eax_1.b = *esi
                *edi = eax_1.b
                eax_1.b = *(esi + 1)
                ecx_1 = ecx_3 u>> 2
                *(edi + 1) = eax_1.b
                esi += 2
                edi += 2
                
                if (ecx_1 u>= 8)
                    edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
                    
                    switch (edx_1)
                        case nullptr
                            return arg1
                        case 1
                            goto label_5abb18
                        case 2
                            goto label_5abb24
                        case 3
                            goto label_5abb38
            case 0x5aba74
                edx_1 = 3 & ecx_3
                eax_1.b = *esi
                *edi = eax_1.b
                esi += 1
                ecx_1 = ecx_3 u>> 2
                edi += 1
                
                if (ecx_1 u>= 8)
                    edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
                    
                    switch (edx_1)
                        case nullptr
                            return arg1
                        case 1
                            goto label_5abb18
                        case 2
                            goto label_5abb24
                        case 3
                            goto label_5abb38
    else
        ecx_1 = ecx u>> 2
        edx_1 = ecx & 3
        
        if (ecx_1 u>= 8)
            edi, esi = __builtin_memcpy(edi, esi, ecx_1 << 2)
            
            switch (edx_1)
                case nullptr
                    return arg1
                case 1
                    goto label_5abb18
                case 2
                    goto label_5abb24
                case 3
                    goto label_5abb38
    
    switch (ecx_1)
        case 0
            goto label_5abaf7
        case 1
            goto label_5abae8
        case 2
            goto label_5abae0
        case 3
            goto label_5abad8
        case 4
            goto label_5abad0
        case 5
            goto label_5abac8
        case 6
            goto label_5abac0
        case 7
            *(edi + (ecx_1 << 2) - 0x1c) = *(esi + (ecx_1 << 2) - 0x1c)
        label_5abac0:
            *(edi + (ecx_1 << 2) - 0x18) = *(esi + (ecx_1 << 2) - 0x18)
        label_5abac8:
            *(edi + (ecx_1 << 2) - 0x14) = *(esi + (ecx_1 << 2) - 0x14)
        label_5abad0:
            *(edi + (ecx_1 << 2) - 0x10) = *(esi + (ecx_1 << 2) - 0x10)
        label_5abad8:
            *(edi + (ecx_1 << 2) - 0xc) = *(esi + (ecx_1 << 2) - 0xc)
        label_5abae0:
            *(edi + (ecx_1 << 2) - 8) = *(esi + (ecx_1 << 2) - 8)
        label_5abae8:
            *(edi + (ecx_1 << 2) - 4) = *(esi + (ecx_1 << 2) - 4)
            eax_1 = ecx_1 << 2
            esi += eax_1
            edi += eax_1
        label_5abaf7:
            
            switch (edx_1)
                case nullptr
                    return arg1
                case 1
                label_5abb18:
                    eax_1.b = *esi
                    *edi = eax_1.b
                    return arg1
                case 2
                label_5abb24:
                    eax_1.b = *esi
                    *edi = eax_1.b
                    eax_1.b = *(esi + 1)
                    *(edi + 1) = eax_1.b
                    return arg1
                case 3
                label_5abb38:
                    eax_1.b = *esi
                    *edi = eax_1.b
                    eax_1.b = *(esi + 1)
                    *(edi + 1) = eax_1.b
                    eax_1.b = *(esi + 2)
                    *(edi + 2) = eax_1.b
                    return arg1
}

// 函数名称: sub_599040
// 虚拟地址: 0x599040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_599040(int32_t* arg1)
{
    // 第一条实际指令: while (true)
    while (true)
        int32_t i = arg1[2]
        int32_t i_7
        
        if (i s< 0x10)
            int32_t ebx_1 = arg1[1]
            int32_t esi_1 = arg1[3]
            
            do
                char* eax = *arg1
                uint32_t eax_1
                
                if (eax u< ebx_1)
                    i_7.b = *eax
                    *arg1 = &eax[1]
                    eax_1 = zx.d(i_7.b)
                else
                    eax_1 = 0
                
                int32_t eax_3 = eax_1 << i.b
                i += 8
                arg1[2] = i
                esi_1 |= eax_3
                arg1[3] = esi_1
            while (i s<= 0x18)
        
        int32_t ecx_1 = arg1[3]
        uint32_t eax_6 = zx.d(*(arg1 + ((ecx_1 & 0x1ff) << 1) + 0x20))
        uint32_t ebx_2
        
        if (eax_6 s>= 0xffff)
            int32_t eax_10 = (ecx_1 s>> 1 & 0x5555) | ((ecx_1 & 0x5555) * 2)
            int32_t ecx_8 = (eax_10 s>> 2 & 0x3333) | ((eax_10 & 0x3333) * 4)
            int32_t eax_17 = (ecx_8 s>> 4 & 0xf0f) | (ecx_8 & 0xf0f) << 4
            int32_t i_1 = zx.d((eax_17 s>> 8).b) | (eax_17 & 0xff) << 8
            void* ecx_11 = &arg1[0x11a]
            int32_t eax_20 = 0xa
            
            if (i_1 s< *ecx_11)
            label_599143:
                int32_t edx_5 = (i_1 s>> (0x10 - eax_20.b)) - zx.d(*(arg1 + (eax_20 << 1) + 0x420))
                    + zx.d(*(arg1 + (eax_20 << 1) + 0x484))
                arg1[3] u>>= eax_20.b
                arg1[2] -= eax_20
                ebx_2 = zx.d(*(arg1 + (edx_5 << 1) + 0x5c4))
                goto label_599155
            
            do
                ecx_11 += 4
                eax_20 += 1
            while (i_1 s>= *ecx_11)
            
            if (eax_20 != 0x10)
                goto label_599143
        else
            uint32_t ecx_2 = zx.d(*(eax_6 + arg1 + 0x4a4))
            arg1[3] u>>= ecx_2.b
            arg1[2] -= ecx_2
            ebx_2 = zx.d(*(arg1 + (eax_6 << 1) + 0x5c4))
        label_599155:
            int32_t i_2 = arg1[2]
            int32_t esi_2 = arg1[3]
            
            if (ebx_2 s>= 0x100)
                if (ebx_2 == 0x100)
                    return 1
                
                i_7 = *((ebx_2 << 2) + &data_8bc1fc)
                int32_t ebx_3 = *((ebx_2 << 2) + &data_8bc28c)
                int32_t i_8 = i_7
                
                if (ebx_3 != 0)
                    if (i_2 s< ebx_3)
                        do
                            char* eax_23 = *arg1
                            uint32_t eax_24
                            
                            if (eax_23 u< arg1[1])
                                i_7.b = *eax_23
                                *arg1 = &eax_23[1]
                                eax_24 = zx.d(i_7.b)
                            else
                                eax_24 = 0
                            
                            int32_t eax_26 = eax_24 << i_2.b
                            i_2 += 8
                            arg1[2] = i_2
                            esi_2 |= eax_26
                            arg1[3] = esi_2
                        while (i_2 s<= 0x18)
                    
                    int32_t edx_6 = arg1[3]
                    arg1[2] -= ebx_3
                    char ecx_16 = ebx_3.b
                    i_8 += ((1 << ecx_16) - 1) & edx_6
                    arg1[3] = edx_6 u>> ecx_16
                    i_7 = i_8
                
                int32_t i_3 = arg1[2]
                
                if (i_3 s< 0x10)
                    int32_t esi_3 = arg1[3]
                    
                    do
                        char* eax_30 = *arg1
                        uint32_t eax_31
                        
                        if (eax_30 u< arg1[1])
                            ebx_3.b = *eax_30
                            *arg1 = &eax_30[1]
                            eax_31 = zx.d(ebx_3.b)
                        else
                            eax_31 = 0
                        
                        int32_t eax_33 = eax_31 << i_3.b
                        i_3 += 8
                        arg1[2] = i_3
                        esi_3 |= eax_33
                        arg1[3] = esi_3
                    while (i_3 s<= 0x18)
                
                int32_t ecx_17 = arg1[3]
                uint32_t eax_36 = zx.d(*(arg1 + ((ecx_17 & 0x1ff) << 1) + 0x804))
                uint32_t eax_37
                
                if (eax_36 s>= 0xffff)
                    int32_t eax_41 = (ecx_17 s>> 1 & 0x5555) | ((ecx_17 & 0x5555) * 2)
                    int32_t ecx_24 = (eax_41 s>> 2 & 0x3333) | ((eax_41 & 0x3333) * 4)
                    int32_t eax_48 = (ecx_24 s>> 4 & 0xf0f) | (ecx_24 & 0xf0f) << 4
                    int32_t i_4 = zx.d((eax_48 s>> 8).b) | (eax_48 & 0xff) << 8
                    void* ecx_27 = &arg1[0x313]
                    int32_t eax_51 = 0xa
                    
                    if (i_4 s< *ecx_27)
                    label_5992ec:
                        int32_t edx_13 = (i_4 s>> (0x10 - eax_51.b))
                            - zx.d(*(arg1 + (eax_51 << 1) + 0xc04))
                            + zx.d(*(arg1 + (eax_51 << 1) + 0xc68))
                        arg1[3] u>>= eax_51.b
                        arg1[2] -= eax_51
                        eax_37 = zx.d(*(arg1 + (edx_13 << 1) + 0xda8))
                        i_7 = i_8
                        goto label_599301
                    
                    do
                        ecx_27 += 4
                        eax_51 += 1
                    while (i_4 s>= *ecx_27)
                    
                    if (eax_51 != 0x10)
                        goto label_5992ec
                else
                    uint32_t ecx_18 = zx.d(*(eax_36 + arg1 + 0xc88))
                    arg1[3] u>>= ecx_18.b
                    arg1[2] -= ecx_18
                    eax_37 = zx.d(*(arg1 + (eax_36 << 1) + 0xda8))
                label_599301:
                    int32_t i_5 = arg1[2]
                    int32_t esi_4 = arg1[3]
                    
                    if (eax_37 s>= 0)
                        int32_t var_c_1 = *((eax_37 << 2) + &data_8bc710)
                        int32_t ebx_5 = *((eax_37 << 2) + &data_8bc790)
                        
                        if (ebx_5 != 0)
                            if (i_5 s< ebx_5)
                                do
                                    char* eax_52 = *arg1
                                    uint32_t eax_53
                                    
                                    if (eax_52 u< arg1[1])
                                        i_7.b = *eax_52
                                        *arg1 = &eax_52[1]
                                        eax_53 = zx.d(i_7.b)
                                    else
                                        eax_53 = 0
                                    
                                    int32_t eax_55 = eax_53 << i_5.b
                                    i_5 += 8
                                    arg1[2] = i_5
                                    esi_4 |= eax_55
                                    arg1[3] = esi_4
                                while (i_5 s<= 0x18)
                            
                            int32_t edx_14 = arg1[3]
                            arg1[2] -= ebx_5
                            char ecx_32 = ebx_5.b
                            var_c_1 += ((1 << ecx_32) - 1) & edx_14
                            arg1[3] = edx_14 u>> ecx_32
                            i_7 = i_8
                        
                        int32_t eax_59 = arg1[4]
                        
                        if (eax_59 - arg1[5] s< var_c_1)
                            data_273ac1c = "bad dist"
                            break
                        
                        if (eax_59 + i_7 u> arg1[6])
                            if (sub_598fe0(i_7, arg1) == 0)
                                break
                            
                            i_7 = i_8
                        
                        char* eax_63 = arg1[4] - var_c_1
                        
                        if (i_7 == 0)
                            continue
                        else
                            int32_t i_6
                            
                            do
                                *arg1[4] = *eax_63
                                arg1[4] += 1
                                eax_63 = &eax_63[1]
                                i_6 = i_7
                                i_7 -= 1
                            while (i_6 != 1)
                            continue
            else if (ebx_2 s>= 0)
                if (arg1[4] u>= arg1[6])
                    int32_t eax_21
                    eax_21, i_7 = sub_598fe0(1, arg1)
                    
                    if (eax_21 == 0)
                        break
                
                *arg1[4] = ebx_2.b
                arg1[4] += 1
                continue
        data_273ac1c = "bad huffman code"
        return 0
    
    return 0
}

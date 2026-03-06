// 函数名称: sub_4afc80
// 虚拟地址: 0x4afc80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4afc80()
{
    // 第一条实际指令: int32_t* ecx = __chkstk(0x1914)
    int32_t* ecx = __chkstk(0x1914)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t var_14 = (&data_8c66c8)[sx.d(*(ecx + 0x45a))]
    void* ebx = nullptr
    int32_t edi = 0
    int32_t var_1900 = 0x148
    int32_t var_18f0 = 0
    void* var_18f4 = nullptr
    int32_t var_1908 = 0
    int32_t i_13 = 0xffffffff
    char var_40c[0x3d0]
    sub_5a733b(&var_40c, "Race for the Galaxy 0.9.4: %s.\n")
    sub_4c5680(&var_40c)
    void* eax_3 = *ecx
    ecx[0x7b1].b = 0
    
    if (eax_3 != 0)
        int32_t var_14_2 = *(eax_3 + 0x53c)
        sub_5a733b(&var_40c, "Campaign: %s.\n")
        sub_4c5680(&var_40c)
    
    int32_t var_14_4 = (&data_8c66d8)[sx.d(ecx[0x116].b)]
    char const* const var_18_2
    
    if (*(ecx + 0x459) != 0)
        var_18_2 = "%s, advanced game.\n"
    else
        var_18_2 = "%s.\n"
    
    sub_5a733b(&var_40c, var_18_2)
    sub_4c5680(&var_40c)
    char eax_4 = *(ecx + 0x45a)
    
    if (eax_4 s> 0 && eax_4 s< 4)
        if (*(ecx + 0x45b) == 0)
            char const* const var_14_7 = "goal"
            char const* const var_18_3 = "Goals enabled.\n"
            sub_4c5680("%s (%s)")
        else
            sub_4c5680("Goals disabled.\n")
    
    eax_4 = *(ecx + 0x45a)
    
    if (eax_4 s> 1 && eax_4 s< 4)
        if (ecx[0x117].b == 0)
            char const* const var_14_9 = "takeover"
            char const* const var_18_4 = "Takeovers enabled.\n"
            sub_4c5680("%s (%s)")
        else
            sub_4c5680("Takeovers disabled.\n")
    
    void* const var_14_10 = &data_8752c0
    char const* const var_18_5 = "=== Start of game ===\n"
    sub_4c5680("%s (%s)")
    int32_t i = 0
    int32_t var_18ec[0x148]
    int32_t var_13cc[0x148]
    void var_98c
    
    if (0 s< ecx[0x118].w)
        void* edx_1 = &ecx[0x11b]
        
        do
            if (*(edx_1 - 7) == 0)
                char ecx_6 = (*(*edx_1 + 0x10)).b
                
                if ((ecx_6 & 4) != 0)
                    *(&var_98c + (edi << 2)) = i
                    edi += 1
                
                if ((ecx_6 & 8) != 0)
                    var_18ec[ebx] = i
                    ebx += 1
                
                if ((ecx_6 & 0x10) != 0)
                    var_13cc[var_1908] = i
                    var_1908 += 1
            
            i += 1
            edx_1 += 0x14
        while (i s< sx.d(ecx[0x118].w))
        
        var_18f4 = ebx
        var_18f0 = edi
    
    void* eax_5
    
    if (*(ecx + 0x45a) s< 2 && *(ecx + 0x45d) == 0)
        eax_5 = *ecx
        
        if (eax_5 == 0 || (*(eax_5 + 0x241c) & 8) == 0)
            goto label_4afefa
        
        goto label_4afe89
    
    eax_5 = *ecx
    int32_t var_18fc
    
    if (eax_5 != 0 && (*(eax_5 + 0x241c) & 8) == 0)
    label_4afefa:
        int32_t eax_9 = 0
        
        if (edi s> 0)
            do
                int32_t ecx_4 = *(&var_98c + (eax_9 << 2))
                eax_9 += 1
                *(&ecx[ecx_4 * 5] + 0x465) = 1
            while (eax_9 s< edi)
        
        int32_t i_1 = 0
        
        if (ecx[0x116].b s> 0)
            int32_t* eax_10 = 0x1ed8
            int32_t* var_18f8_2 = nullptr
            int32_t* var_18f4_1 = 0x1ed8
            ebx = ecx + 0x3e
            
            do
                if (*ecx == 0)
                label_4aff93:
                    int32_t eax_15 = ecx[3] * 0x19660d + 0x3c6ef35f
                    ecx[3] = eax_15
                    int32_t eax_18
                    int32_t edx_6
                    edx_6:eax_18 = sx.q(eax_15 u>> 0x10 & 0x7fff)
                    int32_t temp1_1 = mods.dp.d(edx_6:eax_18, var_18f0)
                    char var_14_12 = 1
                    var_18fc = temp1_1
                    sub_49f030(divs.dp.d(edx_6:eax_18, var_18f0), *(&var_98c + (temp1_1 << 2)), ecx, 
                        i_1, var_14_12)
                    int32_t eax_20 = var_18fc
                    *ebx = *(&var_98c + (eax_20 << 2))
                    void var_990
                    int32_t edx_9 = *(&var_990 + (var_18f0 << 2))
                    var_18f0 -= 1
                    (&__saved_ebp)[eax_20 - 0x262] = edx_9
                else
                    int32_t ecx_10 = ecx[1]
                    
                    if (*(eax_10 + ecx_10) s>= 1)
                        *(eax_10 + ecx_10 - 0x18) = 1
                    
                    if (*ecx == 0)
                        goto label_4aff93
                    
                    int32_t ecx_11 = ecx[1]
                    
                    if (*(eax_10 + ecx_11) s< 1)
                        goto label_4aff93
                    
                    int32_t edx_4 = *(var_18f8_2 + ecx_11)
                    
                    if (edx_4 s<= 0)
                        goto label_4aff93
                    
                    sub_49f030(var_18f8_2, edx_4, ecx, i_1, 1)
                    *ebx = *(var_18f8_2 + ecx[1])
                
                var_18f8_2 = &var_18f8_2[0x148]
                i_1 += 1
                eax_10 = &var_18f4_1[1]
                ebx += 0xb4
                var_18f4_1 = eax_10
            while (i_1 s< sx.d(ecx[0x116].b))
        
        int32_t eax_23 = 0
        
        if (var_18f0 s> 0)
            do
                int32_t ecx_19 = *(&var_98c + (eax_23 << 2))
                eax_23 += 1
                *(&ecx[ecx_19 * 5] + 0x465) = 0
            while (eax_23 s< var_18f0)
        
        int32_t i_2 = 0
        
        if (ecx[0x116].b s> 0)
            void* var_18f4_2 = ecx + 0xb5
            
            do
                void* eax_24 = *ecx
                ebx.b = 6
                
                if (eax_24 != 0 && (*(eax_24 + 0x241c) & 4) != 0)
                    ebx.b = 4
                
                sub_49cf20(ecx, i_2, sx.d(ebx.b), nullptr)
                *var_18f4_2 = ebx.b
                i_2 += 1
                var_18f4_2 += 0xb4
            while (i_2 s< sx.d(ecx[0x116].b))
    else
    label_4afe89:
        int32_t i_14 = 0
        int32_t var_43c[0xc]
        
        if (ecx[0x116].b s> 0)
            int32_t var_190c_1 = 0
            int32_t* var_1904_1 = 0x1ec0
            void* var_18f8_1 = &ecx[0xa]
            int32_t i_3
            
            do
                void* ebx_2
                int32_t edi_4
                
                if (*ecx == 0)
                    int32_t eax_38 = ecx[3] * 0x19660d + 0x3c6ef35f
                    ecx[3] = eax_38
                    int32_t temp1_2 = mods.dp.d(sx.q(eax_38 u>> 0x10 & 0x7fff), var_18f4)
                    void* ecx_24 = var_18f4 - 1
                    var_18f4 = ecx_24
                    edi_4 = i_14 * 8
                    ebx_2 = &__saved_ebp + edi_4 - 0x434
                    int32_t edx_18 = (&__saved_ebp)[temp1_2 - 0x63a]
                    (&__saved_ebp)[temp1_2 - 0x63a] = var_18ec[ecx_24]
                    int32_t eax_45 = ecx[3] * 0x19660d + 0x3c6ef35f
                    ecx[3] = eax_45
                    *(&var_43c + edi_4) = edx_18
                    int32_t temp1_3 = mods.dp.d(sx.q(eax_45 u>> 0x10 & 0x7fff), var_1908)
                    int32_t ecx_27 = var_1908 - 1
                    var_1908 = ecx_27
                    int32_t ecx_28 = var_13cc[ecx_27]
                    var_18fc = temp1_3
                    *ebx_2 = (&__saved_ebp)[temp1_3 - 0x4f2]
                    (&__saved_ebp)[temp1_3 - 0x4f2] = ecx_28
                else
                    int32_t eax_8
                    int32_t* ebx_1
                    
                    if (ecx[6].b != 0)
                        eax_8 = sub_49ca40(ecx)
                        ebx_1 = var_1904_1
                    else
                        int32_t ecx_9 = ecx[1]
                        ebx_1 = var_1904_1
                        int32_t eax_6 = *(ebx_1 + ecx_9)
                        
                        if (eax_6 s< *(ebx_1 + ecx_9 + 0x18))
                            eax_8 = *(ecx_9 + ((var_190c_1 + eax_6) << 2))
                            *(ebx_1 + ecx_9) = eax_6 + 1
                            
                            if (eax_8 s< 0)
                                eax_8 = sub_49ca40(ecx)
                        else
                            eax_8 = sub_49ca40(ecx)
                    
                    edi_4 = i_14 * 8
                    bool cond:1_1 = ecx[6].b != 0
                    *(&var_43c + edi_4) = eax_8
                    int32_t eax_34
                    
                    if (cond:1_1 || *ecx == 0)
                        eax_34 = sub_49ca40(ecx)
                    else
                        int32_t ecx_22 = ecx[1]
                        int32_t edx_14 = *(ebx_1 + ecx_22)
                        
                        if (edx_14 s>= *(ebx_1 + ecx_22 + 0x18))
                            eax_34 = sub_49ca40(ecx)
                        else
                            eax_34 = *(ecx_22 + ((var_190c_1 + edx_14) << 2))
                            *(ebx_1 + ecx_22) = edx_14 + 1
                            
                            if (eax_34 s< 0)
                                eax_34 = sub_49ca40(ecx)
                    
                    ebx_2 = &__saved_ebp + edi_4 - 0x434
                    *ebx_2 = eax_34
                
                int32_t eax_50 = *(&var_43c + edi_4)
                int32_t edi_8 = *ebx_2
                *(&__saved_ebp + edi_4 - 0x468) = eax_50
                *(&__saved_ebp + edi_4 - 0x464) = edi_8
                int16_t eax_52 = 1 << i_14.b
                ecx[eax_50 * 5 + 0x119].w = 0x8ff
                ecx[eax_50 * 5 + 0x11a].w |= eax_52
                int32_t var_14_14 = *(&__saved_ebp + edi_4 - 0x438)
                sub_49c260(i_14, &__saved_ebp + edi_4 - 0x438)
                int32_t edx_23 = *ebx_2
                int32_t var_14_15 = edx_23
                sub_49c260(i_14, edx_23)
                
                if (*(*var_18f8_1 + 0x20) != 0)
                    int32_t var_14_16 = *ecx[eax_50 * 5 + 0x11b]
                    int32_t var_18_9 = *(var_18f8_1 - 8)
                    sub_5a733b(&var_40c, "%s draws the start world %s.\n")
                    (*(*var_18f8_1 + 0x20))(ecx, i_14, &var_40c, "draw")
                
                void* ecx_32
                ecx_32.w = eax_52
                int32_t eax_57 = *ebx_2 * 5
                ecx[eax_57 + 0x11a].w |= ecx_32.w
                ecx[eax_57 + 0x119].w = 0x8ff
                
                if (*(*var_18f8_1 + 0x20) != 0)
                    int32_t var_14_17 = *ecx[eax_57 + 0x11b]
                    int32_t var_18_10 = *(var_18f8_1 - 8)
                    sub_5a733b(&var_40c, "%s draws the start world %s.\n")
                    (*(*var_18f8_1 + 0x20))(ecx, i_14, &var_40c, "draw")
                
                var_1904_1 = &var_1904_1[1]
                var_190c_1 += 0x148
                i_3 = i_14 + 1
                i_14 = i_3
                var_18f8_1 += 0xb4
            while (i_3 s< sx.d(ecx[0x116].b))
        
        int32_t i_4 = 0
        
        if (ecx[0x116].b s> 0)
            void* ebx_4 = ecx + 0xb5
            
            do
                sub_49cf20(ecx, i_4, 6, nullptr)
                *ebx_4 = 6
                i_4 += 1
                ebx_4 += 0xb4
            while (i_4 s< sx.d(ecx[0x116].b))
        
        int32_t i_5 = 0
        int32_t i_15 = 0
        int32_t var_1910
        int32_t var_eac[0x147]
        
        if (ecx[0x116].b s> 0)
            int32_t (* var_18f4_3)[0xc] = &var_43c
            void* edi_12 = &ecx[0x32]
            
            do
                int32_t eax_63 = 0
                var_18fc = 0
                
                if (0 s< ecx[0x118].w)
                    int32_t ebx_5 = sx.d(ecx[0x118].w)
                    void* ecx_39 = &ecx[0x119]
                    
                    do
                        if (sx.d(*ecx_39) == i_15 && *(ecx_39 + 1) == 2)
                            int32_t edx_32 = var_18fc
                            var_eac[edx_32] = eax_63
                            var_18fc = edx_32 + 1
                        
                        eax_63 += 1
                        ecx_39 += 0x14
                    while (eax_63 s< ebx_5)
                    
                    i_5 = i_15
                
                var_1910 = 2
                sub_49d720(ecx, i_5)
                int32_t eax_64 = *edi_12
                
                if (eax_64 s>= *(edi_12 - 4))
                    (*(*(edi_12 - 0xa0) + 0xc))(ecx, i_5, 1, &var_eac, &var_18fc, var_18f4_3, 
                        &var_1910, 0, 0, 0, 0)
                    *(edi_12 + 8) = *(edi_12 - 4)
                else
                    int32_t edx_35 = *(edi_12 - 8)
                    int32_t ecx_41 = *(edx_35 + (eax_64 << 2) + 8)
                    int32_t edx_36
                    
                    if (ecx_41 s>= 0 && ecx_41 s<= 0x64)
                        edx_36 = *(edx_35 + ((eax_64 + ecx_41 + 3) << 2))
                    
                    if (ecx_41 s< 0 || ecx_41 s> 0x64 || edx_36 s< 0 || edx_36 s> 0x64)
                        sub_49b2a0()
                        noreturn
                    
                    *(edi_12 + 8) = eax_64 + ecx_41 + 3 + edx_36 + 1
                
                if (*(ecx + 0x1ec3) != 0)
                    goto label_4b074f
                
                var_18f4_3 = &(*var_18f4_3)[2]
                i_5 += 1
                edi_12 += 0xb4
                i_15 = i_5
            while (i_5 s< sx.d(ecx[0x116].b))
        
        int32_t i_6 = 0
        
        if (ecx[0x116].b s> 0)
            void* ebx_6 = &ecx[0xa]
            
            do
                int32_t eax_69 = *(*ebx_6 + 0x10)
                
                if (eax_69 != 0)
                    eax_69(ecx, i_6, 0xffffffff)
                
                i_6 += 1
                ebx_6 += 0xb4
            while (i_6 s< sx.d(ecx[0x116].b))
        
        int32_t i_7 = 0
        
        if (ecx[0x116].b s> 0)
            void* var_18f4_4 = &ecx[8]
            
            do
                sub_49d860(&var_eac, &(&__saved_ebp)[i_7 * 2 - 0x10e], ecx, i_7, 1, &var_eac, 
                    &var_18fc, &var_1910)
                int32_t var_46c[0xc]
                int32_t eax_72 = var_46c[i_7 * 2]
                var_438
                
                if (eax_72 != (&__saved_ebp)[i_7 * 2 - 0x10e])
                    *(&var_438 + (i_7 << 3)) = eax_72
                
                *(&ecx[*(&var_438 + (i_7 << 3)) * 5] + 0x465) = 1
                
                if (var_1910 == 1)
                    int32_t eax_74 = var_18fc
                    sub_4af830(eax_74, var_18f4_4, &(&__saved_ebp)[i_7 * 2 - 0x10e], ecx, &var_eac, 
                        eax_74, var_18f4_4)
                
                var_18f4_4 += 0xb4
                i_7 += 1
            while (i_7 s< sx.d(ecx[0x116].b))
    int32_t edi_14 = sx.d(ecx[0x116].b)
    int32_t i_8 = 0
    
    if (edi_14 s> 0)
        void* edx_42 = ecx + 0x3e
        
        do
            int32_t ecx_48 = sx.d(*edx_42)
            
            if (ecx_48 s< var_1900)
                var_1900 = ecx_48
                i_13 = i_8
            
            i_8 += 1
            edx_42 += 0xb4
        while (i_8 s< sx.d(ecx[0x116].b))
    
    int32_t i_9 = 0
    
    if (edi_14 s> 0)
        void* edi_15 = &ecx[8]
        
        do
            int32_t var_14_23 = *ecx[sx.d(*(edi_15 + 0x1e)) * 5 + 0x11b]
            int32_t var_18_16 = *edi_15
            sub_5a733b(&var_40c, "%s starts with %s.\n")
            sub_4c5680(&var_40c)
            i_9 += 1
            edi_15 += 0xb4
        while (i_9 s< sx.d(ecx[0x116].b))
    
    sub_4af920(ecx)
    int32_t i_10 = 0
    
    if (ecx[0x116].b s> 0)
        void* ebx_8 = &ecx[0xa]
        
        do
            int32_t eax_79 = *(*ebx_8 + 0x10)
            
            if (eax_79 != 0)
                eax_79(ecx, i_10, 0xffffffff)
            
            i_10 += 1
            ebx_8 += 0xb4
        while (i_10 s< sx.d(ecx[0x116].b))
    
    int32_t entry_ebx
    
    if (*(ecx + 0x1ec3) != 0)
    label_4b074f:
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return 0
    
    if (i_13 s> 0)
        int32_t i_16 = i_13
        int32_t i_11
        
        do
            sub_4af650()
            i_11 = i_16
            i_16 -= 1
        while (i_11 != 1)
    
    int32_t var_14_25 = ecx[8]
    sub_5a733b(&var_40c, "%s is the first player.\n")
    char const* const var_14_26 = "verbose"
    char (* var_18_19)[0x3d0] = &var_40c
    sub_4c5680("%s (%s)")
    void* eax_81 = *ecx
    
    if (eax_81 != 0 && (*(eax_81 + 0x241c) & 1) != 0)
        int32_t i_12 = 0
        
        if (ecx[0x116].b s> 0)
            void* var_1900_1 = &ecx[8]
            
            do
                int32_t var_14_28 = *ecx[sub_49cd90(ecx, 0) * 5 + 0x11b]
                int32_t var_18_20 = *var_1900_1
                sub_5a733b(&var_40c, "%s is given %s.\n")
                sub_4c5680(&var_40c)
                i_12 += 1
                var_1900_1 += 0xb4
            while (i_12 s< sx.d(ecx[0x116].b))
    
    sub_49d660(ecx)
    ecx[0x7b0].b = 5
    sub_4ae980()
    ecx[0x7b0].b = 0xff
    *(ecx + 0x1ec2) = 0
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return 1
}

// 函数名称: sub_5993f0
// 虚拟地址: 0x5993f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5993f0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (arg1[2] s< 5)
        sub_598fa0(arg1)
    
    int32_t eax_2 = arg1[3]
    arg1[2] -= 5
    bool cond:1 = arg1[2] s>= 5
    arg1[3] = eax_2 u>> 5
    
    if (not(cond:1))
        sub_598fa0(arg1)
    
    int32_t eax_4 = arg1[3]
    arg1[2] -= 5
    bool cond:2 = arg1[2] s>= 4
    arg1[3] = eax_4 u>> 5
    
    if (not(cond:2))
        sub_598fa0(arg1)
    
    int32_t eax_6 = arg1[3]
    arg1[2] -= 4
    int32_t j_1 = arg1[2]
    uint32_t eax_7 = eax_6 u>> 4
    void* i = nullptr
    arg1[3] = eax_7
    int32_t var_1c
    __builtin_memset(&var_1c, 0, 0x13)
    
    if ((eax_6 & 0xf) + 4 s> 0)
        int32_t j = j_1
        
        do
            if (j s< 3)
                uint32_t edx = eax_7
                
                do
                    char* edi_4 = *arg1
                    uint32_t eax_8
                    
                    if (edi_4 u< arg1[1])
                        eax_7.b = *edi_4
                        *arg1 = &edi_4[1]
                        eax_8 = zx.d(eax_7.b)
                    else
                        eax_8 = 0
                    
                    uint32_t eax_9 = eax_8 << j.b
                    j += 8
                    arg1[2] = j
                    edx |= eax_9
                    eax_7 = edx
                    arg1[3] = edx
                while (j s<= 0x18)
            
            char edx_1 = eax_7.b
            eax_7 u>>= 3
            j -= 3
            arg1[3] = eax_7
            arg1[2] = j
            uint32_t edi_6 = zx.d(*(i + 0x8bc544))
            i += 1
            *(&var_1c + edi_6) = edx_1 & 7
        while (i s< (eax_6 & 0xf) + 4)
    
    int128_t var_9c8[0x40]
    int32_t eax_10
    int32_t ecx_7
    eax_10, ecx_7 = sub_598d30(eax_7, &var_1c, &var_9c8, 0x13)
    
    if (eax_10 != 0)
        int32_t edi_7 = (eax_2 & 0x1f) + 0x101
        int32_t eax_12 = (eax_4 & 0x1f) + 1 + edi_7
        int32_t var_9cc_1 = 0
        int32_t var_9e0_1 = eax_12
        char var_1e4[0x1c8]
        
        if (eax_12 s> 0)
            uint32_t edi_8 = arg1[3]
            int32_t i_1 = arg1[2]
            
            do
                if (i_1 s< 0x10)
                    int32_t edx_4 = arg1[1]
                    
                    do
                        char* eax_13 = *arg1
                        uint32_t eax_14
                        
                        if (eax_13 u< edx_4)
                            ecx_7.b = *eax_13
                            *arg1 = &eax_13[1]
                            eax_14 = zx.d(ecx_7.b)
                        else
                            eax_14 = 0
                        
                        int32_t eax_16 = eax_14 << i_1.b
                        i_1 += 8
                        arg1[2] = i_1
                        edi_8 |= eax_16
                        arg1[3] = edi_8
                    while (i_1 s<= 0x18)
                
                uint32_t eax_17 = zx.d(*(&var_9c8 + ((edi_8 & 0x1ff) << 1)))
                uint32_t edx_5
                
                if (eax_17 s>= 0xffff)
                    int32_t eax_21 = (edi_8 s>> 1 & 0x5555) | ((edi_8 & 0x5555) * 2)
                    int32_t ecx_14 = (eax_21 s>> 2 & 0x3333) | ((eax_21 & 0x3333) * 4)
                    int32_t edx_12 = (ecx_14 s>> 4 & 0xf0f) | (ecx_14 & 0xf0f) << 4
                    int32_t i_2 = zx.d((edx_12 s>> 8).b) | (edx_12 & 0xff) << 8
                    int32_t ecx_17 = 0xa
                    int32_t var_9d0_1 = 0xa
                    int32_t var_580
                    
                    if (i_2 s>= var_580)
                        int32_t var_5a8[0xa]
                        
                        do
                            ecx_17 += 1
                        while (i_2 s>= var_5a8[ecx_17])
                        
                        var_9d0_1 = ecx_17
                    
                    if (i_2 s< var_580 || ecx_17 != 0x10)
                        edi_8 u>>= ecx_17.b
                        i_1 -= ecx_17
                        uint32_t var_9dc_1 = edi_8
                        int16_t var_5c8[0x10]
                        int16_t var_564[0x10]
                        eax_17 = (i_2 s>> (0x10 - var_9d0_1.b)) - zx.d(var_5c8[var_9d0_1])
                            + zx.d(var_564[var_9d0_1])
                        edx_5 = edi_8
                        goto label_599665
                    
                    var_1e4[var_9cc_1] = 0xff
                    var_9cc_1 += 1
                else
                    char var_544[0x120]
                    uint32_t ecx_10 = zx.d(var_544[eax_17])
                    edi_8 u>>= ecx_10.b
                    i_1 -= ecx_10
                    edx_5 = edi_8
                label_599665:
                    int16_t var_424[0x11f]
                    uint32_t eax_30 = zx.d(var_424[eax_17])
                    arg1[2] = i_1
                    arg1[3] = edi_8
                    
                    if (eax_30 s>= 0x10)
                        char var_9f4_1
                        int32_t var_9f0_1
                        int32_t var_9d0_2
                        void* edx_17
                        
                        if (eax_30 != 0x10)
                            int32_t eax_45
                            
                            if (eax_30 != 0x11)
                                if (i_1 s< 7)
                                    int32_t i_3 = i_1
                                    edi_8 = edx_5
                                    
                                    do
                                        char* eax_46 = *arg1
                                        uint32_t eax_47
                                        
                                        if (eax_46 u< arg1[1])
                                            edx_5.b = *eax_46
                                            *arg1 = &eax_46[1]
                                            eax_47 = zx.d(edx_5.b)
                                        else
                                            eax_47 = 0
                                        
                                        uint32_t eax_49 = eax_47 << i_3.b
                                        i_3 += 8
                                        i_1 = i_3
                                        arg1[2] = i_3
                                        edi_8 |= eax_49
                                        arg1[3] = edi_8
                                    while (i_3 s<= 0x18)
                                
                                int32_t eax_51 = edi_8 & 0x7f
                                edi_8 u>>= 7
                                i_1 -= 7
                                eax_45 = eax_51 + 0xb
                            else
                                if (i_1 s< 3)
                                    int32_t i_4 = i_1
                                    edi_8 = edx_5
                                    
                                    do
                                        char* eax_39 = *arg1
                                        uint32_t eax_40
                                        
                                        if (eax_39 u< arg1[1])
                                            edx_5.b = *eax_39
                                            *arg1 = &eax_39[1]
                                            eax_40 = zx.d(edx_5.b)
                                        else
                                            eax_40 = 0
                                        
                                        uint32_t eax_42 = eax_40 << i_4.b
                                        i_4 += 8
                                        i_1 = i_4
                                        arg1[2] = i_4
                                        edi_8 |= eax_42
                                        arg1[3] = edi_8
                                    while (i_4 s<= 0x18)
                                
                                int32_t eax_44 = edi_8 & 7
                                edi_8 u>>= 3
                                i_1 -= 3
                                eax_45 = eax_44 + 3
                            
                            var_9f0_1 = eax_45
                            edx_17 = &__saved_ebp + var_9cc_1 - 0x1e0
                            var_9f4_1 = 0
                            var_9d0_2 = eax_45
                        else
                            if (i_1 s< 2)
                                int32_t i_5 = i_1
                                edi_8 = edx_5
                                
                                do
                                    char* eax_31 = *arg1
                                    uint32_t eax_32
                                    
                                    if (eax_31 u< arg1[1])
                                        edx_5.b = *eax_31
                                        *arg1 = &eax_31[1]
                                        eax_32 = zx.d(edx_5.b)
                                    else
                                        eax_32 = 0
                                    
                                    uint32_t eax_34 = eax_32 << i_5.b
                                    i_5 += 8
                                    i_1 = i_5
                                    arg1[2] = i_5
                                    edi_8 |= eax_34
                                    arg1[3] = edi_8
                                while (i_5 s<= 0x18)
                            
                            int32_t eax_36 = edi_8 & 3
                            edi_8 u>>= 2
                            i_1 -= 2
                            var_9f0_1 = eax_36 + 3
                            var_9d0_2 = eax_36 + 3
                            void var_1e5
                            var_9f4_1 = *(&var_1e5 + var_9cc_1)
                            edx_17 = &__saved_ebp + var_9cc_1 - 0x1e0
                        
                        arg1[3] = edi_8
                        arg1[2] = i_1
                        sub_5abfc0(edx_17, var_9f4_1, var_9f0_1)
                        var_9cc_1 += var_9d0_2
                    else
                        var_1e4[var_9cc_1] = eax_30.b
                        var_9cc_1 += 1
                eax_12 = var_9e0_1
            while (var_9cc_1 s< eax_12)
            
            edi_7 = (eax_2 & 0x1f) + 0x101
        
        if (var_9cc_1 == eax_12)
            int32_t eax_54 = sub_598d30(eax_12, &var_1e4, &arg1[8], edi_7)
            
            if (eax_54 != 0)
                int32_t eax_55 =
                    sub_598d30(eax_54, &__saved_ebp + edi_7 - 0x1e0, &arg1[0x201], (eax_4 & 0x1f) + 1)
                int32_t eax_56 = neg.d(eax_55)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return neg.d(sbb.d(eax_56, eax_56, eax_55 != 0))
        else
            data_273ac1c = "bad codelengths"
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

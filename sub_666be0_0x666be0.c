// 函数名称: sub_666be0
// 虚拟地址: 0x666be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_666be0(void* arg1, int128_t* arg2, int32_t arg3)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    uint32_t ebx = zx.d(*(edi + 0x143))
    uint32_t edx = zx.d(*(edi + 0x139))
    int32_t esi = *(edi + 0xe4)
    char* var_8 = *(edi + 0x108) + 1
    uint32_t var_c = edx
    char* var_18 = nullptr
    arg1:3.b = 0
    
    if (ebx == 0)
        sub_664320(edi, "internal row logic error")
        noreturn
    
    int32_t ecx = *(edi + 0x11c)
    
    if (ecx != 0)
        uint32_t eax_4
        
        if (ebx u< 8)
            eax_4 = (esi * ebx + 7) u>> 3
        else
            eax_4 = (ebx u>> 3) * esi
        
        if (ecx != eax_4)
            sub_664320(edi, "internal row size calculation error")
            noreturn
    
    if (esi == 0)
        sub_664320(edi, "internal row width error")
        noreturn
    
    int32_t eax_9 = esi * ebx
    int32_t ecx_2 = eax_9 & 7
    char var_10 = ecx_2.b
    
    if (ecx_2 != 0)
        uint32_t eax_12
        
        if (ebx u< 8)
            eax_12 = (eax_9 + 7) u>> 3
        else
            eax_12 = (ebx u>> 3) * esi
        
        var_18 = eax_12 + arg2 - 1
        char* eax_14
        eax_14.b = *(eax_12 + arg2 - 1)
        arg1:3.b = eax_14.b
        
        if ((*(edi + 0x74) & 0x10000) == 0)
            var_10 = (0xff s>> ecx_2.b).b
        else
            var_10 = (0xff << ecx_2.b).b
        
        edx = var_c
    
    int32_t ecx_3
    
    if (*(edi + 0x138) != 0)
        ecx_3 = *(edi + 0x74)
    
    uint32_t eax_21
    int32_t edx_7
    
    if (*(edi + 0x138) == 0 || (ecx_3.b & 2) == 0 || edx u>= 6
            || (arg3 != 0 && (arg3 != 1 || (arg3.b & edx.b) == 0)))
        void* ebx_7
        
        if (ebx u< 8)
            ebx_7 = (eax_9 + 7) u>> 3
        else
            ebx_7 = (ebx u>> 3) * esi
        
        eax_21, edx_7 = sub_5ab990(arg2, var_8, ebx_7)
    label_66707f:
        
        if (var_18 != 0)
            eax_21.b = var_10
            edx_7.b = eax_21.b
            eax_21.b &= arg1:3.b
            edx_7.b = not.b(edx_7.b)
            edx_7.b &= *var_18
            edx_7.b |= eax_21.b
            *var_18 = edx_7.b
    else
        eax_21 = (edx & 1) << (3 - ((edx + 1) u>> 1).b) & 7
        
        if (esi u> eax_21)
            if (ebx u< 8)
                eax_21 = divu.dp.d(0:8, ebx)
                uint32_t var_1c_1 = eax_21
                
                if ((ecx_3 & 0x10000) == 0)
                    if (arg3 == 0)
                        int32_t ecx_15 = 0
                        
                        if (ebx != 1)
                            ecx_15.b = ebx != 2
                            ecx_15 += 1
                        
                        edx_7 = *(((var_c + ecx_15 * 6) << 2) + &data_82ef70)
                    else
                        int32_t edx_9 = 0
                        
                        if (ebx != 1)
                            edx_9.b = ebx != 2
                            edx_9 += 1
                        
                        edx_7 = *((((var_c u>> 1) + edx_9 * 3) << 2) + &data_82efdc)
                else if (arg3 == 0)
                    int32_t ecx_9 = 0
                    
                    if (ebx != 1)
                        ecx_9.b = ebx != 2
                        ecx_9 += 1
                    
                    edx_7 = *(((var_c + ecx_9 * 6) << 2) + &data_82ef28)
                else
                    int32_t edx_5 = 0
                    
                    if (ebx != 1)
                        edx_5.b = ebx != 2
                        edx_5 += 1
                    
                    edx_7 = *((((var_c u>> 1) + edx_5 * 3) << 2) + &data_82efb8)
                
                char* edi_1 = arg2
                char* ebx_1 = var_8
                
                while (true)
                    char ecx_18 = edx_7.b
                    edx_7 = ror.d(edx_7, 8)
                    uint32_t ecx_19 = zx.d(ecx_18)
                    
                    if (ecx_19 != 0)
                        if (ecx_19 == 0xff)
                            ecx_19.b = *ebx_1
                            *edi_1 = ecx_19.b
                        else
                            ebx_1.b = *ebx_1
                            eax_21.b = ecx_19.b
                            eax_21.b = not.b(eax_21.b)
                            eax_21.b &= *edi_1
                            ebx_1.b &= ecx_19.b
                            eax_21.b |= ebx_1.b
                            ebx_1 = var_8
                            *edi_1 = eax_21.b
                            eax_21 = var_1c_1
                    
                    if (esi u<= eax_21)
                        break
                    
                    esi -= eax_21
                    edi_1 = &edi_1[1]
                    ebx_1 = &ebx_1[1]
                    var_8 = ebx_1
                
                goto label_66707f
            
            if ((ebx.b & 7) != 0)
                sub_664320(edi, "invalid user transform pixel depth")
                noreturn
            
            uint32_t ebx_2 = ebx u>> 3
            int32_t eax_23 = eax_21 * ebx_2
            arg2 += eax_23
            void* var_8_1 = &var_8[eax_23]
            void* i_4 = esi * ebx_2 - eax_23
            
            if (arg3 == 0)
                arg1 = ebx_2
            else
                void* eax_25 = (1 << ((6 - edx) u>> 1).b) * ebx_2
                arg1 = eax_25
                
                if (eax_25 u> i_4)
                    arg1 = i_4
            
            void* edx_12 = arg1
            int32_t ebx_4 = (1 << ((7 - edx) u>> 1).b) * ebx_2
            
            if (edx_12 == 1)
                uint8_t* edi_10 = var_8_1
                edx_12.b = *edi_10
                eax_21 = arg2
                *eax_21 = edx_12.b
                
                if (i_4 u> ebx_4)
                    do
                        uint8_t ecx_23 = edi_10[ebx_4]
                        edi_10 = &edi_10[ebx_4]
                        eax_21 += ebx_4
                        i_4 -= ebx_4
                        *eax_21 = ecx_23
                    while (i_4 u> ebx_4)
            else if (edx_12 == 2)
                eax_21 = arg2
                uint8_t* edi_9 = var_8_1
                
                while (true)
                    *eax_21 = *edi_9
                    edx_12.b = edi_9[1]
                    *(eax_21 + 1) = edx_12.b
                    
                    if (i_4 u<= ebx_4)
                        break
                    
                    i_4 -= ebx_4
                    edi_9 = &edi_9[ebx_4]
                    eax_21 += ebx_4
                    
                    if (i_4 u<= 1)
                        *eax_21 = *edi_9
                        return eax_21
            else if (edx_12 == 3)
                void* edi_8 = var_8_1
                eax_21 = arg2
                *eax_21 = *edi_8
                edx_12.b = *(edi_8 + 1)
                *(eax_21 + 1) = edx_12.b
                *(eax_21 + 2) = *(edi_8 + 2)
                
                if (i_4 u> ebx_4)
                    do
                        char edx_15 = *(edi_8 + ebx_4)
                        edi_8 += ebx_4
                        eax_21 += ebx_4
                        *eax_21 = edx_15
                        *(eax_21 + 1) = *(edi_8 + 1)
                        i_4 -= ebx_4
                        *(eax_21 + 2) = *(edi_8 + 2)
                    while (i_4 u> ebx_4)
            else
                if (edx_12 u< 0x10)
                    eax_21 = arg2
                
                if (edx_12 u>= 0x10 || (eax_21.b & 1) != 0 || (var_8_1.b & 1) != 0
                        || (edx_12.b & 1) != 0 || (ebx_4.b & 1) != 0)
                    eax_21 = sub_5ab990(arg2, var_8_1, arg1)
                    
                    if (i_4 u> ebx_4)
                        int128_t* eax_32
                        
                        do
                            var_8_1 += ebx_4
                            arg2 += ebx_4
                            i_4 -= ebx_4
                            
                            if (arg1 u> i_4)
                                arg1 = i_4
                            
                            eax_32 = sub_5ab990(arg2, var_8_1, arg1)
                        while (i_4 u> ebx_4)
                        
                        return eax_32
                else if ((eax_21.b & 3) != 0 || (var_8_1.b & 3) != 0 || (edx_12.b & 3) != 0
                        || (ebx_4.b & 3) != 0)
                    int16_t* edi_5 = var_8_1
                    uint32_t var_1c_4 = (ebx_4 - edx_12) u>> 1
                    
                    while (true)
                        arg1 = edx_12
                        void* i
                        
                        do
                            uint32_t ecx_34
                            ecx_34.w = *edi_5
                            *eax_21 = ecx_34.w
                            eax_21 += 2
                            edi_5 = &edi_5[1]
                            i = arg1
                            arg1 -= 2
                        while (i != 2)
                        
                        if (i_4 u<= ebx_4)
                            break
                        
                        i_4 -= ebx_4
                        eax_21 += var_1c_4 << 1
                        edi_5 = &edi_5[var_1c_4]
                        
                        if (edx_12 u> i_4)
                            void* edi_6 = edi_5 - eax_21
                            void* i_1
                            
                            do
                                edx_12.b = *(edi_6 + eax_21)
                                *eax_21 = edx_12.b
                                eax_21 += 1
                                i_1 = i_4
                                i_4 -= 1
                            while (i_1 != 1)
                            return eax_21
                else
                    void* edi_2 = var_8_1
                    
                    while (true)
                        arg1 = edx_12
                        void* i_2
                        
                        do
                            *eax_21 = *edi_2
                            eax_21 += 4
                            edi_2 += 4
                            i_2 = arg1
                            arg1 -= 4
                        while (i_2 != 4)
                        
                        if (i_4 u<= ebx_4)
                            break
                        
                        uint32_t ecx_31 = ((ebx_4 - edx_12) u>> 2) * 4
                        i_4 -= ebx_4
                        eax_21 += ecx_31
                        edi_2 += ecx_31
                        
                        if (edx_12 u> i_4)
                            void* edi_3 = edi_2 - eax_21
                            void* i_3
                            
                            do
                                edx_12.b = *(edi_3 + eax_21)
                                *eax_21 = edx_12.b
                                eax_21 += 1
                                i_3 = i_4
                                i_4 -= 1
                            while (i_3 != 1)
                            return eax_21
    return eax_21
}

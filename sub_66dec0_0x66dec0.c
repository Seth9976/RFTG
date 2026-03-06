// 函数名称: sub_66dec0
// 虚拟地址: 0x66dec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_66dec0(int32_t* arg1, uint32_t arg2, char* arg3)
{
    // 第一条实际指令: uint32_t ebx
    uint32_t ebx
    uint32_t var_18 = ebx
    int32_t* edi = arg1
    char* eax
    eax.b = edi[2].b
    int32_t i_14 = *edi
    
    if (eax.b == 0)
        char* ecx_1 = arg3
        uint32_t edx_1
        
        if (ecx_1 == 0)
            edx_1 = 0
        else
            edx_1 = zx.d(*(ecx_1 + 8))
        
        eax.b = *(edi + 9)
        
        if (eax.b u< 8)
            uint32_t eax_1 = zx.d(eax.b)
            
            if (eax_1 == 1)
                uint32_t edi_9 = ((i_14 - 1) u>> 3) + arg2
                eax = 7 - ((i_14 - 1) & 7)
                char* var_c_3 = i_14 + arg2 - 1
                
                if (i_14 != 0)
                    int32_t i_9 = i_14
                    int32_t i
                    
                    do
                        char* edx_12
                        edx_12.b = *edi_9
                        int32_t ecx_12
                        ecx_12.b = eax.b
                        edx_12.b u>>= ecx_12.b
                        edx_12.b &= 1
                        char temp3_1 = edx_12.b
                        edx_12.b = neg.b(edx_12.b)
                        edx_12.b = sbb.b(edx_12.b, edx_12.b, temp3_1 != 0)
                        *var_c_3 = edx_12.b
                        
                        if (eax != 7)
                            eax = &eax[1]
                        else
                            eax = nullptr
                            edi_9 -= 1
                        
                        var_c_3 -= 1
                        i = i_9
                        i_9 -= 1
                    while (i != 1)
                
                edx_1 = zx.d((edx_1.w & 1) * 0xff)
                edi = arg1
            else if (eax_1 == 2)
                char* var_c_2 = i_14 + arg2 - 1
                eax = (i_14 - 1) & 3
                uint32_t edi_6 = ((i_14 - 1) u>> 2) + arg2
                int32_t edx_9 = (3 - eax) * 2
                
                if (i_14 != 0)
                    int32_t i_8 = i_14
                    int32_t i_1
                    
                    do
                        uint32_t ecx_9
                        ecx_9.b = edx_9.b
                        char eax_12 = (zx.d(*edi_6) u>> ecx_9.b).b & 3
                        ecx_9.b = eax_12
                        ecx_9.b *= 2
                        ecx_9.b *= 2
                        ecx_9.b |= eax_12
                        ecx_9.b *= 2
                        ecx_9.b *= 2
                        ecx_9.b |= eax_12
                        ecx_9.b *= 2
                        ecx_9.b *= 2
                        ecx_9.b |= eax_12
                        *var_c_2 = ecx_9.b
                        
                        if (edx_9 != 6)
                            edx_9 += 2
                        else
                            edx_9 = 0
                            edi_6 -= 1
                        
                        eax = 1
                        var_c_2 -= 1
                        i_1 = i_8
                        i_8 -= 1
                    while (i_1 != 1)
                
                edx_1 = zx.d((edx_1.w & 3) * 0x55)
                edi = arg1
            else
                eax = eax_1 - 4
                
                if (eax_1 == 4)
                    int32_t edx_2 = edx_1 & 0xf
                    char* edi_3 = ((i_14 - 1) u>> 1) + arg2
                    eax = i_14 + arg2 - 1
                    int32_t edx_4 = 4 - ((i_14 - 1) & 1) * 4
                    char* var_c_1 = eax
                    
                    if (i_14 != 0)
                        int32_t i_7 = i_14
                        int32_t i_2
                        
                        do
                            int32_t ecx_8
                            ecx_8.b = edx_4.b
                            char eax_7 = (zx.d(*edi_3) u>> ecx_8.b).b & 0xf
                            ecx_8.b = eax_7
                            ecx_8.b <<= 4
                            ecx_8.b |= eax_7
                            *var_c_1 = ecx_8.b
                            
                            if (edx_4 != 4)
                                edx_4 = 4
                            else
                                edx_4 = 0
                                edi_3 -= 1
                            
                            eax = 1
                            var_c_1 -= 1
                            i_2 = i_7
                            i_7 -= 1
                        while (i_2 != 1)
                    
                    edx_1 = zx.d((edx_2 << 4).w + edx_2.w)
                    edi = arg1
            
            ecx_1 = arg3
            *(edi + 9) = 8
            *(edi + 0xb) = 8
            edi[1] = i_14
        
        if (ecx_1 != 0)
            eax.b = *(edi + 9)
            
            if (eax.b != 8)
                if (eax.b == 0x10)
                    int32_t eax_17 = edi[1]
                    void* ecx_15 = eax_17 + arg2 - 1
                    eax = arg2 + (eax_17 << 1) - 1
                    
                    if (i_14 != 0)
                        int32_t i_13 = i_14
                        int32_t i_3
                        
                        do
                            uint32_t ebx_1
                            ebx_1.b = (edx_1 u>> 8).b
                            
                            if (*(ecx_15 - 1) != ebx_1.b || *ecx_15 != edx_1.b)
                                *(eax - 1) = 0xffff
                            else
                                *(eax - 1) = 0
                            
                            *(eax - 2) = *ecx_15
                            eax[0xfffffffd] = *(ecx_15 - 1)
                            eax -= 4
                            ecx_15 -= 2
                            i_3 = i_13
                            i_13 -= 1
                        while (i_3 != 1)
                        edi = arg1
                
                goto label_66e115
            
            char* ecx_14 = i_14 + arg2 - 1
            eax = arg2 + (i_14 << 1) - 1
            
            if (i_14 == 0)
            label_66e115:
                eax.b = *(edi + 9)
                edi[2].b = 4
                *(edi + 0xa) = 2
            else
                int32_t i_12 = i_14
                int32_t i_4
                
                do
                    if (zx.w(*ecx_14) != (edx_1.w & 0xff))
                        *eax = 0xff
                    else
                        *eax = 0
                    
                    uint16_t ebx_2
                    ebx_2.b = *ecx_14
                    *(eax - 1) = ebx_2.b
                    eax -= 2
                    ecx_14 -= 1
                    i_4 = i_12
                    i_12 -= 1
                while (i_4 != 1)
                edi = arg1
                eax.b = *(edi + 9)
                edi[2].b = 4
                *(edi + 0xa) = 2
            
        label_66e26e:
            eax.b *= 2
            *(edi + 0xb) = eax.b
            uint32_t eax_23 = zx.d(eax.b)
            
            if (eax.b u>= 8)
                int32_t eax_25 = (eax_23 u>> 3) * i_14
                edi[1] = eax_25
                return eax_25
            
            eax = (eax_23 * i_14 + 7) u>> 3
            edi[1] = eax
    else if (eax.b == 2)
        eax = arg3
        
        if (eax != 0)
            char ecx = *(edi + 9)
            char edx
            
            if (ecx == 8)
                edx = eax[6]
                ebx.b = eax[2]
                arg1:3.b = eax[4]
                char* edx_14 = &edi[1][arg2 - 1]
                void* ecx_17 = arg2 + (i_14 << 2) - 1
                
                if (i_14 != 0)
                    int32_t i_10 = i_14
                    int32_t i_5
                    
                    do
                        if (edx_14[0xfffffffe] != ebx.b)
                            *ecx_17 = 0xff
                        else
                            eax.b = arg1:3.b
                            
                            if (edx_14[0xffffffff] != eax.b)
                                *ecx_17 = 0xff
                            else
                                eax.b = edx
                                
                                if (*edx_14 != eax.b)
                                    *ecx_17 = 0xff
                                else
                                    *ecx_17 = 0
                        
                        *(ecx_17 - 1) = *edx_14
                        *(ecx_17 - 2) = edx_14[0xffffffff]
                        *(ecx_17 - 3) = edx_14[0xfffffffe]
                        ecx_17 -= 4
                        edx_14 -= 3
                        i_5 = i_10
                        i_10 -= 1
                    while (i_5 != 1)
            else if (ecx == 0x10)
                char ecx_19 = eax[5]
                edx = eax[3]
                char ecx_20 = eax[7]
                arg1:3.b = eax[2]
                char ecx_22 = eax[4]
                eax.b = eax[6]
                char var_8_1 = eax.b
                char* ecx_24 = edi[1] + arg2 - 1
                eax = arg2 + (i_14 << 3) - 1
                
                if (i_14 != 0)
                    int32_t i_11 = i_14
                    int32_t i_6
                    
                    do
                        if (ecx_24[0xfffffffb] != edx)
                            *(eax - 1) = 0xffff
                        else
                            ebx.b = arg1:3.b
                            
                            if (ecx_24[0xfffffffc] != ebx.b)
                                *(eax - 1) = 0xffff
                            else
                                ebx.b = ecx_19
                                
                                if (ecx_24[0xfffffffd] != ebx.b)
                                    *(eax - 1) = 0xffff
                                else
                                    ebx.b = ecx_22
                                    
                                    if (ecx_24[0xfffffffe] != ebx.b)
                                        *(eax - 1) = 0xffff
                                    else
                                        ebx.b = ecx_20
                                        
                                        if (ecx_24[0xffffffff] != ebx.b)
                                            *(eax - 1) = 0xffff
                                        else
                                            ebx.b = var_8_1
                                            
                                            if (*ecx_24 != ebx.b)
                                                *(eax - 1) = 0xffff
                                            else
                                                *(eax - 1) = 0
                        
                        eax[0xfffffffe] = *ecx_24
                        eax[0xfffffffd] = ecx_24[0xffffffff]
                        eax[0xfffffffc] = ecx_24[0xfffffffe]
                        eax[0xfffffffb] = ecx_24[0xfffffffd]
                        eax[0xfffffffa] = ecx_24[0xfffffffc]
                        eax[0xfffffff9] = ecx_24[0xfffffffb]
                        eax -= 8
                        ecx_24 -= 6
                        i_6 = i_11
                        i_11 -= 1
                    while (i_6 != 1)
            eax.b = *(edi + 9)
            edi[2].b = 6
            *(edi + 0xa) = 4
            eax.b *= 2
            goto label_66e26e
    
    return eax
}

// 函数名称: sub_66c800
// 虚拟地址: 0x66c800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_66c800(uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: uint32_t eax = *(arg3 + 0x180)
    uint32_t eax = *(arg3 + 0x180)
    int32_t ecx = *(arg3 + 0x188)
    int32_t edx = *(arg3 + 0x18c)
    int32_t ebx = *(arg3 + 0x174)
    int32_t eax_1 = *(arg3 + 0x190)
    int32_t ecx_1 = *(arg3 + 0x194)
    uint32_t* eax_2 = arg1
    uint32_t i_23 = *eax_2
    uint32_t eax_3 = zx.d(eax_2[2].b)
    int32_t edi = *(arg3 + 0x184)
    uint32_t edx_3 = *(arg3 + 0x70) u>> 0xd & 1
    int32_t var_20 = edi
    int32_t var_8 = ebx
    
    switch (eax_3)
        case 0
            eax_3 = zx.d(*(arg1 + 9)) - 1
            
            if (eax_3 u<= 0xf)
                eax_3 = zx.d(lookup_table_66d7b4[eax_3])
                
                switch (eax_3)
                    case 0
                        uint32_t edi_1 = arg2
                        uint32_t edx_5 = 7
                        
                        if (i_23 != 0)
                            arg1 = i_23
                            uint32_t i
                            
                            do
                                ebx.b = *edi_1
                                i_23.b = edx_5.b
                                eax_3.b = ebx.b
                                eax_3.b u>>= i_23.b
                                eax_3.b &= 1
                                
                                if (zx.w(eax_3.b) == *(arg3 + 0x1b0))
                                    eax_3.b = (0x7f7f s>> (7 - edx_5.b)).b & ebx.b
                                    *edi_1 = eax_3.b
                                    ebx.b = *(arg3 + 0x15c)
                                    ebx.b <<= edx_5.b
                                    ebx.b |= eax_3.b
                                    *edi_1 = ebx.b
                                
                                if (edx_5 != 0)
                                    edx_5 -= 1
                                else
                                    edx_5 = 7
                                    edi_1 += 1
                                
                                i = arg1
                                arg1 -= 1
                            while (i != 1)
                    case 1
                        uint32_t edi_2 = arg2
                        uint32_t edx_6 = 6
                        
                        if (eax == 0)
                            if (i_23 != 0)
                                arg1 = i_23
                                uint32_t i_1
                                
                                do
                                    ebx.b = *edi_2
                                    i_23.b = edx_6.b
                                    eax_3.b = ebx.b
                                    eax_3.b u>>= i_23.b
                                    eax_3.b &= 3
                                    
                                    if (zx.w(eax_3.b) == *(arg3 + 0x1b0))
                                        eax_3.b = (0x3f3f s>> (6 - edx_6.b)).b & ebx.b
                                        *edi_2 = eax_3.b
                                        ebx.b = *(arg3 + 0x15c)
                                        ebx.b <<= edx_6.b
                                        ebx.b |= eax_3.b
                                        *edi_2 = ebx.b
                                    
                                    if (edx_6 != 0)
                                        edx_6 -= 2
                                    else
                                        edx_6 = 6
                                        edi_2 += 1
                                    
                                    i_1 = arg1
                                    arg1 -= 1
                                while (i_1 != 1)
                        else if (i_23 != 0)
                            arg1 = i_23
                            uint32_t edi_3 = edi_2
                            uint32_t i_2
                            
                            do
                                ebx.b = *edi_3
                                i_23.b = edx_6.b
                                eax_3.b = ebx.b
                                eax_3.b u>>= i_23.b
                                eax_3.b &= 3
                                
                                if (zx.w(eax_3.b) != *(arg3 + 0x1b0))
                                    uint32_t eax_5 = zx.d(eax_3.b)
                                    eax_3.b =
                                        *((((((eax_5 << 2 | eax_5) * 4) | eax_5) * 4) | eax_5) + eax)
                                    eax_3.b u>>= 6
                                    ebx.b = (0x3f3f s>> (6 - edx_6.b)).b & *edi_3
                                    eax_3.b <<= edx_6.b
                                else
                                    eax_3.b = (0x3f3f s>> (6 - edx_6.b)).b & ebx.b
                                    *edi_3 = eax_3.b
                                    ebx.b = *(arg3 + 0x15c)
                                    ebx.b <<= edx_6.b
                                
                                ebx.b |= eax_3.b
                                *edi_3 = ebx.b
                                
                                if (edx_6 != 0)
                                    edx_6 -= 2
                                else
                                    edx_6 = 6
                                    edi_3 += 1
                                
                                i_2 = arg1
                                arg1 -= 1
                            while (i_2 != 1)
                    case 2
                        uint32_t edi_4 = arg2
                        uint32_t edx_7 = 4
                        
                        if (eax == 0)
                            if (i_23 != 0)
                                arg1 = i_23
                                uint32_t i_3
                                
                                do
                                    char ebx_1 = *edi_4
                                    i_23.b = edx_7.b
                                    eax_3.b = ebx_1
                                    eax_3.b u>>= i_23.b
                                    eax_3.b &= 0xf
                                    
                                    if (zx.w(eax_3.b) == *(arg3 + 0x1b0))
                                        eax_3.b = (0xf0f s>> (4 - edx_7.b)).b & ebx_1
                                        *edi_4 = eax_3.b
                                        *edi_4 = *(arg3 + 0x15c) << edx_7.b | eax_3.b
                                    
                                    if (edx_7 != 0)
                                        edx_7 -= 4
                                    else
                                        edx_7 = 4
                                        edi_4 += 1
                                    
                                    i_3 = arg1
                                    arg1 -= 1
                                while (i_3 != 1)
                        else if (i_23 != 0)
                            arg1 = i_23
                            uint32_t i_4
                            
                            do
                                ebx.b = *edi_4
                                i_23.b = edx_7.b
                                eax_3.b = ebx.b
                                eax_3.b u>>= i_23.b
                                eax_3.b &= 0xf
                                
                                if (zx.w(eax_3.b) != *(arg3 + 0x1b0))
                                    uint32_t eax_6 = zx.d(eax_3.b)
                                    eax_3.b = *((eax_6 << 4 | eax_6) + eax)
                                    eax_3.b u>>= 4
                                    ebx.b = (0xf0f s>> (4 - edx_7.b)).b & *edi_4
                                    eax_3.b <<= edx_7.b
                                else
                                    eax_3.b = (0xf0f s>> (4 - edx_7.b)).b & ebx.b
                                    *edi_4 = eax_3.b
                                    ebx.b = *(arg3 + 0x15c)
                                    ebx.b <<= edx_7.b
                                
                                ebx.b |= eax_3.b
                                *edi_4 = ebx.b
                                
                                if (edx_7 != 0)
                                    edx_7 -= 4
                                else
                                    edx_7 = 4
                                    edi_4 += 1
                                
                                i_4 = arg1
                                arg1 -= 1
                            while (i_4 != 1)
                    case 3
                        eax_3 = arg2
                        
                        if (eax == 0)
                            if (i_23 != 0)
                                uint32_t i_5
                                
                                do
                                    if (zx.w(*eax_3) == *(arg3 + 0x1b0))
                                        uint16_t edx_8
                                        edx_8.b = *(arg3 + 0x15c)
                                        *eax_3 = edx_8.b
                                    
                                    eax_3 += 1
                                    i_5 = i_23
                                    i_23 -= 1
                                while (i_5 != 1)
                        else if (i_23 != 0)
                            uint32_t i_6
                            
                            do
                                uint32_t edx_4
                                edx_4.b = *eax_3
                                
                                if (zx.w(edx_4.b) != *(arg3 + 0x1b0))
                                    edx_4.b = *(zx.d(edx_4.b) + eax)
                                else
                                    edx_4.b = *(arg3 + 0x15c)
                                
                                *eax_3 = edx_4.b
                                eax_3 += 1
                                i_6 = i_23
                                i_23 -= 1
                            while (i_6 != 1)
                    case 4
                        eax_3 = arg2
                        
                        if (edi == 0)
                            if (i_23 != 0)
                                uint32_t i_7
                                
                                do
                                    if (zx.w(*eax_3) * 0x100 + zx.w(*(eax_3 + 1)) == *(arg3 + 0x1b0))
                                        *eax_3 = *(arg3 + 0x15d)
                                        *(eax_3 + 1) = *(arg3 + 0x15c)
                                    
                                    eax_3 += 2
                                    i_7 = i_23
                                    i_23 -= 1
                                while (i_7 != 1)
                        else if (i_23 != 0)
                            arg1 = i_23
                            uint32_t i_8
                            
                            do
                                uint16_t ecx_22
                                
                                if (zx.w(*eax_3) * 0x100 + zx.w(*(eax_3 + 1)) != *(arg3 + 0x1b0))
                                    ecx_22.b = ebx.b
                                    uint32_t ecx_24 = zx.d(*(
                                        *(edi + (zx.d(*(eax_3 + 1)) u>> ecx_22.b << 2))
                                        + (zx.d(*eax_3) << 1)))
                                    *eax_3 = (ecx_24 u>> 8).b
                                    *(eax_3 + 1) = ecx_24.b
                                else
                                    ecx_22.b = *(arg3 + 0x15d)
                                    *eax_3 = ecx_22.b
                                    uint16_t edx_9
                                    edx_9.b = *(arg3 + 0x15c)
                                    *(eax_3 + 1) = edx_9.b
                                eax_3 += 2
                                i_8 = arg1
                                arg1 -= 1
                            while (i_8 != 1)
        case 2
            eax_3 = arg1
            
            if (*(eax_3 + 9) != 8)
                if (edi == 0)
                    if (i_23 != 0)
                        char* eax_14 = arg2 + 2
                        uint32_t i_9
                        
                        do
                            if (zx.w(eax_14[0xfffffffe]) * 0x100 + zx.w(eax_14[0xffffffff])
                                    == *(arg3 + 0x1aa)
                                    && zx.w(*eax_14) * 0x100 + zx.w(eax_14[1]) == *(arg3 + 0x1ac)
                                    && zx.w(eax_14[2]) * 0x100 + zx.w(eax_14[3]) == *(arg3 + 0x1ae))
                                eax_14[0xfffffffe] = *(arg3 + 0x157)
                                eax_14[0xffffffff] = *(arg3 + 0x156)
                                *eax_14 = *(arg3 + 0x159)
                                eax_14[1] = *(arg3 + 0x158)
                                eax_14[2] = *(arg3 + 0x15b)
                                eax_14[3] = *(arg3 + 0x15a)
                            
                            eax_14 = &eax_14[6]
                            i_9 = i_23
                            i_23 -= 1
                        while (i_9 != 1)
                        return eax_14
                else if (i_23 != 0)
                    char* eax_12 = arg2 + 2
                    arg1 = i_23
                    uint32_t i_10
                    
                    do
                        i_23.b = eax_12[0xfffffffe]
                        
                        if (zx.w(i_23.b) * 0x100 + zx.w(eax_12[0xffffffff]) != *(arg3 + 0x1aa)
                                || zx.w(*eax_12) * 0x100 + zx.w(eax_12[1]) != *(arg3 + 0x1ac)
                                || zx.w(eax_12[2]) * 0x100 + zx.w(eax_12[3]) != *(arg3 + 0x1ae))
                            char edx_37 = ebx.b
                            uint16_t ecx_25
                            ecx_25.b = edx_37
                            uint32_t ecx_29 = zx.d(*(
                                *(edi + (zx.d(eax_12[0xffffffff]) u>> ecx_25.b << 2))
                                + (zx.d(eax_12[0xfffffffe]) << 1)))
                            eax_12[0xfffffffe] = (ecx_29 u>> 8).b
                            uint32_t ebx_11 = zx.d(eax_12[1])
                            eax_12[0xffffffff] = ecx_29.b
                            ecx_29.b = edx_37
                            uint32_t ecx_31 =
                                zx.d(*(*(edi + (ebx_11 u>> ecx_29.b << 2)) + (zx.d(*eax_12) << 1)))
                            *eax_12 = (ecx_31 u>> 8).b
                            uint32_t ebx_16 = zx.d(eax_12[3])
                            eax_12[1] = ecx_31.b
                            ecx_31.b = edx_37
                            i_23 = zx.d(*(*(edi + (ebx_16 u>> ecx_31.b << 2)) + (zx.d(eax_12[2]) << 1)))
                            ebx = var_8
                            eax_12[2] = (i_23 u>> 8).b
                            eax_12[3] = i_23.b
                        else
                            eax_12[0xfffffffe] = *(arg3 + 0x157)
                            eax_12[0xffffffff] = *(arg3 + 0x156)
                            *eax_12 = *(arg3 + 0x159)
                            eax_12[1] = *(arg3 + 0x158)
                            eax_12[2] = *(arg3 + 0x15b)
                            eax_12[3] = *(arg3 + 0x15a)
                        
                        eax_12 = &eax_12[6]
                        i_10 = arg1
                        arg1 -= 1
                    while (i_10 != 1)
                    return eax_12
            else if (eax == 0)
                if (i_23 != 0)
                    char* eax_10 = arg2 + 2
                    uint32_t i_11
                    
                    do
                        if (zx.w(eax_10[0xfffffffe]) == *(arg3 + 0x1aa)
                                && zx.w(eax_10[0xffffffff]) == *(arg3 + 0x1ac)
                                && zx.w(*eax_10) == *(arg3 + 0x1ae))
                            eax_10[0xfffffffe] = *(arg3 + 0x156)
                            eax_10[0xffffffff] = *(arg3 + 0x158)
                            *eax_10 = *(arg3 + 0x15a)
                        
                        eax_10 = &eax_10[3]
                        i_11 = i_23
                        i_23 -= 1
                    while (i_11 != 1)
                    return eax_10
            else if (i_23 != 0)
                char* eax_8 = arg2 + 2
                uint32_t i_12
                
                do
                    edx_3.b = eax_8[0xfffffffe]
                    
                    if (zx.w(edx_3.b) != *(arg3 + 0x1aa) || zx.w(eax_8[0xffffffff]) != *(arg3 + 0x1ac)
                            || zx.w(*eax_8) != *(arg3 + 0x1ae))
                        eax_8[0xfffffffe] = *(zx.d(edx_3.b) + eax)
                        eax_8[0xffffffff] = *(zx.d(eax_8[0xffffffff]) + eax)
                        edx_3 = zx.d(*(zx.d(*eax_8) + eax))
                    else
                        eax_8[0xfffffffe] = *(arg3 + 0x156)
                        eax_8[0xffffffff] = *(arg3 + 0x158)
                        edx_3 = zx.d(*(arg3 + 0x15a))
                    
                    *eax_8 = edx_3.b
                    eax_8 = &eax_8[3]
                    i_12 = i_23
                    i_23 -= 1
                while (i_12 != 1)
                return eax_8
        case 4
            eax_3 = arg1
            
            if (*(eax_3 + 9) != 8)
                if (edi == 0 || eax_1 == 0 || ecx_1 == 0)
                    if (i_23 != 0)
                        char* edx_54 = arg2 + 1
                        arg1 = i_23
                        uint32_t eax_28
                        uint32_t i_13
                        
                        do
                            eax_28 = zx.d(zx.w(edx_54[1]) * 0x100 + zx.w(edx_54[2]))
                            
                            if (eax_28.w == 0)
                                eax_28.b = *(arg3 + 0x15d)
                                edx_54[0xffffffff] = eax_28.b
                                uint16_t ecx_49
                                ecx_49.b = *(arg3 + 0x15c)
                                *edx_54 = ecx_49.b
                            else if (eax_28.w u< 0xffff)
                                int32_t ecx_52 = zx.d(*(arg3 + 0x166)) * (0xffff - eax_28)
                                    + zx.d(zx.w(edx_54[0xffffffff]) * 0x100 + zx.w(*edx_54)) * eax_28
                                    + 0x8000
                                eax_28 = ((ecx_52 u>> 0x10) + ecx_52) u>> 0x10
                                edx_54[0xffffffff] = (eax_28 u>> 8).b
                                *edx_54 = eax_28.b
                            
                            edx_54 = &edx_54[4]
                            i_13 = arg1
                            arg1 -= 1
                        while (i_13 != 1)
                        return eax_28
                else if (i_23 != 0)
                    void* edx_52 = arg2 + 1
                    arg1 = i_23
                    uint32_t eax_19
                    uint32_t i_14
                    
                    do
                        eax_19 = zx.d(zx.w(*(edx_52 + 1)) * 0x100 + zx.w(*(edx_52 + 2)))
                        
                        if (eax_19.w == 0xffff)
                            eax_19 = zx.d(
                                *(*(edi + (zx.d(*edx_52) u>> ebx.b << 2)) + (zx.d(*(edx_52 - 1)) << 1)))
                            *edx_52 = eax_19.b
                            *(edx_52 - 1) = (eax_19 u>> 8).b
                        else if (eax_19.w != 0)
                            int32_t ecx_43 = zx.d(*(*(ecx_1 + (zx.d(*edx_52) u>> ebx.b << 2))
                                + (zx.d(*(edx_52 - 1)) << 1))) * eax_19
                            ebx = var_8
                            int32_t ecx_44 = ecx_43 + zx.d(*(arg3 + 0x166)) * (0xffff - eax_19) + 0x8000
                            eax_19 = ((ecx_44 u>> 0x10) + ecx_44) u>> 0x10
                            
                            if (edx_3 == 0)
                                ecx_44.b = ebx.b
                                eax_19 = zx.d(*(*(eax_1 + (zx.d(eax_19.b) u>> ecx_44.b << 2))
                                    + (eax_19 u>> 8 << 1)))
                            
                            edi = var_20
                            *edx_52 = eax_19.b
                            *(edx_52 - 1) = (eax_19 u>> 8).b
                        else
                            eax_19.b = *(arg3 + 0x15d)
                            *(edx_52 - 1) = eax_19.b
                            *edx_52 = *(arg3 + 0x15c)
                        
                        edx_52 += 4
                        i_14 = arg1
                        arg1 -= 1
                    while (i_14 != 1)
                    return eax_19
            else if (edx == 0 || ecx == 0 || eax == 0)
                eax_3 = arg2
                
                if (i_23 != 0)
                    uint32_t i_24 = i_23
                    uint32_t i_15
                    
                    do
                        edx_3.b = *(eax_3 + 1)
                        
                        if (edx_3.b == 0)
                            i_23.b = *(arg3 + 0x15c)
                            *eax_3 = i_23.b
                        else if (edx_3.b u< 0xff)
                            uint16_t edx_50 = zx.w(edx_3.b)
                            edx_3 =
                                zx.d((0xff - edx_50) * *(arg3 + 0x166) + zx.w(*eax_3) * edx_50 + 0x80)
                            *eax_3 = (((edx_3 u>> 8) + edx_3) s>> 8).b
                        
                        eax_3 += 2
                        i_15 = i_24
                        i_24 -= 1
                    while (i_15 != 1)
            else
                uint32_t edi_12 = arg2
                arg1 = edi_12
                
                if (i_23 != 0)
                    uint32_t i_21 = i_23
                    uint32_t eax_15
                    uint32_t i_16
                    
                    do
                        eax_15 = zx.d(*(edi_12 + 1))
                        
                        if (eax_15.w == 0xff)
                            eax_15.b = *(zx.d(*edi_12) + eax)
                        else if (eax_15.w != 0)
                            uint32_t eax_16 = zx.d((0xff - eax_15.w) * *(arg3 + 0x166)
                                + zx.w(*(zx.d(*edi_12) + edx)) * eax_15.w + 0x80)
                            eax_15 = (eax_16 + (eax_16 u>> 8)) s>> 8
                            
                            if (edx_3 == 0)
                                eax_15.b = *(zx.d(eax_15.b) + ecx)
                            
                            edi_12 = arg1
                        else
                            eax_15.b = *(arg3 + 0x15c)
                        
                        *edi_12 = eax_15.b
                        edi_12 += 2
                        i_16 = i_21
                        i_21 -= 1
                        arg1 = edi_12
                    while (i_16 != 1)
                    return eax_15
        case 6
            if (*(arg1 + 9) != 8)
                if (edi == 0 || eax_1 == 0 || ecx_1 == 0)
                    if (i_23 != 0)
                        eax_3 = arg2 + 1
                        arg1 = i_23
                        uint32_t i_17
                        
                        do
                            uint32_t ecx_106 = zx.d(zx.w(*(eax_3 + 5)) * 0x100 + zx.w(*(eax_3 + 6)))
                            
                            if (ecx_106.w == 0)
                                *(eax_3 - 1) = *(arg3 + 0x157)
                                *eax_3 = *(arg3 + 0x156)
                                *(eax_3 + 1) = *(arg3 + 0x159)
                                *(eax_3 + 2) = *(arg3 + 0x158)
                                *(eax_3 + 3) = *(arg3 + 0x15b)
                                *(eax_3 + 4) = *(arg3 + 0x15a)
                            else if (ecx_106.w u< 0xffff)
                                int32_t ebx_67 =
                                    zx.d(zx.w(*(eax_3 - 1)) * 0x100 + zx.w(*eax_3)) * ecx_106
                                    + zx.d(*(arg3 + 0x156)) * (0xffff - ecx_106) + 0x8000
                                uint32_t ecx_116 = ((ebx_67 u>> 0x10) + ebx_67) u>> 0x10
                                *eax_3 = ecx_116.b
                                uint16_t ecx_117 = zx.w(*(eax_3 + 1))
                                *(eax_3 - 1) = (ecx_116 u>> 8).b
                                int32_t ebx_73 = zx.d(ecx_117 * 0x100 + zx.w(*(eax_3 + 2))) * ecx_106
                                    + zx.d(*(arg3 + 0x158)) * (0xffff - ecx_106) + 0x8000
                                uint32_t ecx_123 = ((ebx_73 u>> 0x10) + ebx_73) u>> 0x10
                                *(eax_3 + 2) = ecx_123.b
                                uint16_t ecx_124 = zx.w(*(eax_3 + 3))
                                *(eax_3 + 1) = (ecx_123 u>> 8).b
                                int32_t edx_123 = zx.d(ecx_124 * 0x100 + zx.w(*(eax_3 + 4))) * ecx_106
                                    + zx.d(*(arg3 + 0x15a)) * (0xffff - ecx_106) + 0x8000
                                uint32_t ecx_130 = ((edx_123 u>> 0x10) + edx_123) u>> 0x10
                                *(eax_3 + 3) = (ecx_130 u>> 8).b
                                *(eax_3 + 4) = ecx_130.b
                            
                            eax_3 += 8
                            i_17 = arg1
                            arg1 -= 1
                        while (i_17 != 1)
                else if (i_23 != 0)
                    void* eax_37 = arg2 + 1
                    uint32_t i_22 = i_23
                    uint32_t i_18
                    
                    do
                        uint32_t edx_81 = zx.d(zx.w(*(eax_37 + 5)) * 0x100 + zx.w(*(eax_37 + 6)))
                        uint32_t ecx_74
                        
                        if (edx_81.w == 0xffff)
                            char edx_82 = ebx.b
                            uint32_t ecx_70 = zx.d(*
                                (*(edi + (zx.d(*eax_37) u>> edx_82 << 2)) + (zx.d(*(eax_37 - 1)) << 1)))
                            *(eax_37 - 1) = (ecx_70 u>> 8).b
                            uint32_t ebx_50 = zx.d(*(eax_37 + 2))
                            *eax_37 = ecx_70.b
                            ecx_70.b = edx_82
                            uint32_t ecx_72 = zx.d(
                                *(*(edi + (ebx_50 u>> ecx_70.b << 2)) + (zx.d(*(eax_37 + 1)) << 1)))
                            *(eax_37 + 1) = (ecx_72 u>> 8).b
                            uint32_t ebx_55 = zx.d(*(eax_37 + 4))
                            *(eax_37 + 2) = ecx_72.b
                            ecx_72.b = edx_82
                            ecx_74 = zx.d(
                                *(*(edi + (ebx_55 u>> ecx_72.b << 2)) + (zx.d(*(eax_37 + 3)) << 1)))
                            ebx = var_8
                            *(eax_37 + 4) = ecx_74.b
                            *(eax_37 + 3) = (ecx_74 u>> 8).b
                        else if (edx_81.w != 0)
                            uint32_t ecx_78 = zx.d(ebx.b)
                            int32_t edx_93 = zx.d(*(*(ecx_1 + (zx.d(*eax_37) u>> ecx_78.b << 2))
                                + (zx.d(*(eax_37 - 1)) << 1))) * edx_81
                                + zx.d(*(arg3 + 0x160)) * (0xffff - edx_81) + 0x8000
                            uint32_t ecx_85 = ((edx_93 u>> 0x10) + edx_93) u>> 0x10
                            
                            if (edx_3 == 0)
                                uint32_t edx_94 = ecx_85
                                ecx_85.b = var_8.b
                                ecx_85 = zx.d(*(*(eax_1 + (zx.d(edx_94.b) u>> ecx_85.b << 2))
                                    + (edx_94 u>> 8 << 1)))
                            
                            uint8_t edx_97 = (ecx_85 u>> 8).b
                            *eax_37 = ecx_85.b
                            ecx_85.b = ecx_78.b
                            *(eax_37 - 1) = edx_97
                            int32_t edx_103 = zx.d(*(*(ecx_1 + (zx.d(*(eax_37 + 2)) u>> ecx_85.b << 2))
                                + (zx.d(*(eax_37 + 1)) << 1))) * edx_81
                                + zx.d(*(arg3 + 0x162)) * (0xffff - edx_81) + 0x8000
                            uint32_t ecx_94 = ((edx_103 u>> 0x10) + edx_103) u>> 0x10
                            
                            if (edx_3 == 0)
                                uint32_t edx_104 = ecx_94
                                ecx_94.b = var_8.b
                                ecx_94 = zx.d(*(*(eax_1 + (zx.d(edx_104.b) u>> ecx_94.b << 2))
                                    + (edx_104 u>> 8 << 1)))
                            
                            uint8_t edx_107 = (ecx_94 u>> 8).b
                            *(eax_37 + 2) = ecx_94.b
                            ecx_94.b = ecx_78.b
                            *(eax_37 + 1) = edx_107
                            ebx = var_8
                            int32_t edx_113 = zx.d(*(*(ecx_1 + (zx.d(*(eax_37 + 4)) u>> ecx_94.b << 2))
                                + (zx.d(*(eax_37 + 3)) << 1))) * edx_81
                                + zx.d(*(arg3 + 0x164)) * (0xffff - edx_81) + 0x8000
                            ecx_74 = ((edx_113 u>> 0x10) + edx_113) u>> 0x10
                            
                            if (edx_3 == 0)
                                uint32_t edx_114 = ecx_74
                                ecx_74.b = ebx.b
                                ecx_74 = zx.d(*(*(eax_1 + (zx.d(edx_114.b) u>> ecx_74.b << 2))
                                    + (edx_114 u>> 8 << 1)))
                            
                            edi = var_20
                            *(eax_37 + 4) = ecx_74.b
                            *(eax_37 + 3) = (ecx_74 u>> 8).b
                        else
                            *(eax_37 - 1) = *(arg3 + 0x157)
                            *eax_37 = *(arg3 + 0x156)
                            *(eax_37 + 1) = *(arg3 + 0x159)
                            *(eax_37 + 2) = *(arg3 + 0x158)
                            *(eax_37 + 3) = *(arg3 + 0x15b)
                            *(eax_37 + 4) = *(arg3 + 0x15a)
                        eax_37 += 8
                        i_18 = i_22
                        i_22 -= 1
                    while (i_18 != 1)
                    return eax_37
            else if (edx == 0 || ecx == 0 || eax == 0)
                if (i_23 != 0)
                    void* eax_35 = arg2 + 1
                    arg1 = i_23
                    uint32_t i_19
                    
                    do
                        i_23.b = *(eax_35 + 2)
                        
                        if (i_23.b == 0)
                            *(eax_35 - 1) = *(arg3 + 0x156)
                            int32_t edx_55
                            edx_55.b = *(arg3 + 0x158)
                            *eax_35 = edx_55.b
                            *(eax_35 + 1) = *(arg3 + 0x15a)
                        else if (i_23.b u< 0xff)
                            uint16_t ecx_66 = zx.w(i_23.b)
                            uint32_t edx_73 = zx.d(*(arg3 + 0x156) * (0xff - ecx_66)
                                + zx.w(*(eax_35 - 1)) * ecx_66 + 0x80)
                            *(eax_35 - 1) = (((edx_73 u>> 8) + edx_73) s>> 8).b
                            uint32_t edx_75 =
                                zx.d(*(arg3 + 0x158) * (0xff - ecx_66) + zx.w(*eax_35) * ecx_66 + 0x80)
                            *eax_35 = (((edx_75 u>> 8) + edx_75) s>> 8).b
                            i_23 = zx.d(*(arg3 + 0x15a) * (0xff - ecx_66) + zx.w(*(eax_35 + 1)) * ecx_66
                                + 0x80)
                            *(eax_35 + 1) = (((i_23 u>> 8) + i_23) s>> 8).b
                        
                        eax_35 += 4
                        i_19 = arg1
                        arg1 -= 1
                    while (i_19 != 1)
                    return eax_35
            else if (i_23 != 0)
                uint32_t edx_56 = eax
                void* eax_33 = arg2 + 1
                arg1 = i_23
                uint32_t i_20
                
                do
                    i_23.b = *(eax_33 + 2)
                    
                    if (i_23.b == 0xff)
                        *(eax_33 - 1) = *(zx.d(*(eax_33 - 1)) + edx_56)
                        *eax_33 = *(zx.d(*eax_33) + edx_56)
                        i_23 = zx.d(*(zx.d(*(eax_33 + 1)) + edx_56))
                    else if (i_23.b != 0)
                        int32_t ebx_26
                        ebx_26.w = *(arg3 + 0x160)
                        uint16_t ecx_62 = zx.w(i_23.b)
                        ebx_26.w *= 0xff - ecx_62
                        uint32_t edx_59 =
                            zx.d(zx.w(*(zx.d(*(eax_33 - 1)) + edx)) * ecx_62 + ebx_26.w + 0x80)
                        int32_t edx_61 = (edx_59 + (edx_59 u>> 8)) s>> 8
                        
                        if (edx_3 == 0)
                            edx_61.b = *(zx.d(edx_61.b) + ecx)
                        
                        *(eax_33 - 1) = edx_61.b
                        int32_t ebx_30
                        ebx_30.w = *(arg3 + 0x162)
                        ebx_30.w *= 0xff - ecx_62
                        uint32_t edx_64 = zx.d(zx.w(*(zx.d(*eax_33) + edx)) * ecx_62 + ebx_30.w + 0x80)
                        int32_t edx_66 = (edx_64 + (edx_64 u>> 8)) s>> 8
                        
                        if (edx_3 == 0)
                            edx_66.b = *(zx.d(edx_66.b) + ecx)
                        
                        *eax_33 = edx_66.b
                        uint32_t ecx_63 = zx.d(zx.w(*(zx.d(*(eax_33 + 1)) + edx)) * ecx_62
                            + *(arg3 + 0x164) * (0xff - ecx_62) + 0x80)
                        i_23 = (ecx_63 + (ecx_63 u>> 8)) s>> 8
                        
                        if (edx_3 == 0)
                            i_23.b = *(zx.d(i_23.b) + ecx)
                        
                        edx_56 = eax
                    else
                        *(eax_33 - 1) = *(arg3 + 0x156)
                        *eax_33 = *(arg3 + 0x158)
                        i_23 = zx.d(*(arg3 + 0x15a))
                    
                    *(eax_33 + 1) = i_23.b
                    eax_33 += 4
                    i_20 = arg1
                    arg1 -= 1
                while (i_20 != 1)
                return eax_33
    
    return eax_3
}

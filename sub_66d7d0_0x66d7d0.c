// 函数名称: sub_66d7d0
// 虚拟地址: 0x66d7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66d7d0(int32_t* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 0x184)
    int32_t edx = *(arg3 + 0x184)
    int32_t* ecx = arg1
    int32_t i_11 = *ecx
    int32_t edi = *(arg3 + 0x180)
    arg3 = *(arg3 + 0x174)
    void* eax_1
    eax_1.b = *(ecx + 9)
    
    if (eax_1.b u<= 8 && edi != 0)
    label_66d817:
        
        switch (zx.d(ecx[2].b))
            case 0
                bool cond:3_1 = eax_1.b != 2
                eax_1 = arg2
                
                if (not(cond:3_1))
                    void* var_8_1 = eax_1
                    
                    if (i_11 != 0)
                        int32_t i_10 = ((i_11 - 1) u>> 2) + 1
                        int32_t i
                        
                        do
                            uint32_t eax_2 = zx.d(*eax_1)
                            int32_t eax_3 = eax_2 & 3
                            int32_t edx_9 = eax_2 & 0xc
                            edx_9.b = (((edx_9 << 2 | edx_9) * 4) | edx_9 s>> 2 | edx_9)[edi]
                            edx_9.b &= 0xcf
                            edx_9.b |= (((((eax_3 << 2 | eax_3) * 4) | eax_3) * 4) | eax_3)[edi] u>> 2
                            int32_t esi_4 = eax_2 & 0x30
                            int32_t ecx_32 = eax_2 & 0xc0
                            edx_9.b u>>= 2
                            edx_9.b |= ((esi_4 s>> 2 | esi_4) s>> 2 | esi_4 << 2 | esi_4)[edi] & 0xc3
                            ecx_32.b = (((ecx_32 s>> 2 | ecx_32) s>> 2 | ecx_32) s>> 2 | ecx_32)[edi]
                            edx_9.b u>>= 2
                            ecx_32.b &= 0xc0
                            edx_9.b |= ecx_32.b
                            *var_8_1 = edx_9.b
                            eax_1 = var_8_1 + 1
                            i = i_10
                            i_10 -= 1
                            var_8_1 = eax_1
                        while (i != 1)
                        eax_1 = arg2
                        ecx = arg1
                
                ecx.b = *(ecx + 9)
                
                if (ecx.b == 4)
                    void* edx_10 = eax_1
                    
                    if (i_11 != 0)
                        int32_t i_12 = ((i_11 - 1) u>> 1) + 1
                        int32_t eax_28
                        int32_t i_1
                        
                        do
                            uint32_t eax_27 = zx.d(*edx_10)
                            int32_t ecx_34 = eax_27 & 0xf0
                            ecx_34.b = (ecx_34 s>> 4 | ecx_34)[edi]
                            eax_28 = eax_27 & 0xf
                            eax_28.b = (eax_28 << 4 | eax_28)[edi]
                            ecx_34.b &= 0xf0
                            eax_28.b u>>= 4
                            ecx_34.b |= eax_28.b
                            *edx_10 = ecx_34.b
                            edx_10 += 1
                            i_1 = i_12
                            i_12 -= 1
                        while (i_1 != 1)
                        return eax_28
                else if (ecx.b != 8)
                    if (ecx.b == 0x10 && i_11 != 0)
                        int32_t i_2
                        
                        do
                            uint32_t ecx_36
                            ecx_36.b = arg3.b
                            ecx_36 = zx.d(*
                                (*(edx + (zx.d(*(eax_1 + 1)) u>> ecx_36.b << 2)) + (zx.d(*eax_1) << 1)))
                            *eax_1 = (ecx_36 u>> 8).b
                            *(eax_1 + 1) = ecx_36.b
                            eax_1 += 2
                            i_2 = i_11
                            i_11 -= 1
                        while (i_2 != 1)
                else if (i_11 != 0)
                    int32_t i_3
                    
                    do
                        edx.b = *(zx.d(*eax_1) + edi)
                        *eax_1 = edx.b
                        eax_1 += 1
                        i_3 = i_11
                        i_11 -= 1
                    while (i_3 != 1)
            case 2
                bool cond:0_1 = eax_1.b != 8
                eax_1 = arg2
                
                if (cond:0_1)
                    if (i_11 != 0)
                        char ebx_3 = arg3.b
                        int32_t i_4
                        
                        do
                            ecx.b = ebx_3
                            int32_t* edi_4 = zx.d(
                                *(*(edx + (zx.d(*(eax_1 + 1)) u>> ecx.b << 2)) + (zx.d(*eax_1) << 1)))
                            *eax_1 = (edi_4 u>> 8).b
                            *(eax_1 + 1) = edi_4.b
                            int32_t* edi_8 = zx.d(*(*(edx + (zx.d(*(eax_1 + 3)) u>> ebx_3 << 2))
                                + (zx.d(*(eax_1 + 2)) << 1)))
                            *(eax_1 + 2) = (edi_8 u>> 8).b
                            *(eax_1 + 3) = edi_8.b
                            int32_t* edi_12 = zx.d(*(*(edx + (zx.d(*(eax_1 + 5)) u>> ebx_3 << 2))
                                + (zx.d(*(eax_1 + 4)) << 1)))
                            *(eax_1 + 4) = (edi_12 u>> 8).b
                            *(eax_1 + 5) = edi_12.b
                            eax_1 += 6
                            i_4 = i_11
                            i_11 -= 1
                        while (i_4 != 1)
                else if (i_11 != 0)
                    int32_t i_5
                    
                    do
                        *eax_1 = *(zx.d(*eax_1) + edi)
                        *(eax_1 + 1) = *(zx.d(*(eax_1 + 1)) + edi)
                        *(eax_1 + 2) = *(zx.d(*(eax_1 + 2)) + edi)
                        eax_1 += 3
                        i_5 = i_11
                        i_11 -= 1
                    while (i_5 != 1)
            case 4
                bool cond:2_1 = eax_1.b != 8
                eax_1 = arg2
                
                if (cond:2_1)
                    if (i_11 != 0)
                        int32_t i_6
                        
                        do
                            int32_t* ecx_29
                            ecx_29.b = arg3.b
                            ecx_29 = zx.d(*
                                (*(edx + (zx.d(*(eax_1 + 1)) u>> ecx_29.b << 2)) + (zx.d(*eax_1) << 1)))
                            *eax_1 = (ecx_29 u>> 8).b
                            *(eax_1 + 1) = ecx_29.b
                            eax_1 += 4
                            i_6 = i_11
                            i_11 -= 1
                        while (i_6 != 1)
                else if (i_11 != 0)
                    int32_t i_7
                    
                    do
                        ecx.b = *(zx.d(*eax_1) + edi)
                        *eax_1 = ecx.b
                        eax_1 += 2
                        i_7 = i_11
                        i_11 -= 1
                    while (i_7 != 1)
            case 6
                bool cond:1_1 = eax_1.b != 8
                eax_1 = arg2
                
                if (cond:1_1)
                    if (i_11 != 0)
                        char ebx_4 = arg3.b
                        int32_t i_8
                        
                        do
                            ecx.b = ebx_4
                            int32_t* edi_16 = zx.d(
                                *(*(edx + (zx.d(*(eax_1 + 1)) u>> ecx.b << 2)) + (zx.d(*eax_1) << 1)))
                            *eax_1 = (edi_16 u>> 8).b
                            *(eax_1 + 1) = edi_16.b
                            int32_t* edi_20 = zx.d(*(*(edx + (zx.d(*(eax_1 + 3)) u>> ebx_4 << 2))
                                + (zx.d(*(eax_1 + 2)) << 1)))
                            *(eax_1 + 2) = (edi_20 u>> 8).b
                            *(eax_1 + 3) = edi_20.b
                            int32_t* edi_24 = zx.d(*(*(edx + (zx.d(*(eax_1 + 5)) u>> ebx_4 << 2))
                                + (zx.d(*(eax_1 + 4)) << 1)))
                            *(eax_1 + 4) = (edi_24 u>> 8).b
                            *(eax_1 + 5) = edi_24.b
                            eax_1 += 8
                            i_8 = i_11
                            i_11 -= 1
                        while (i_8 != 1)
                else if (i_11 != 0)
                    int32_t i_9
                    
                    do
                        *eax_1 = *(zx.d(*eax_1) + edi)
                        *(eax_1 + 1) = *(zx.d(*(eax_1 + 1)) + edi)
                        *(eax_1 + 2) = *(zx.d(*(eax_1 + 2)) + edi)
                        eax_1 += 4
                        i_9 = i_11
                        i_11 -= 1
                    while (i_9 != 1)
    else if (eax_1.b == 0x10 && edx != 0)
        goto label_66d817
    
    return eax_1
}

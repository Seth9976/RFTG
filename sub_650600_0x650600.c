// 函数名称: sub_650600
// 虚拟地址: 0x650600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_650600(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t* edi = nullptr
    sub_5abfc0(esi, 0, 0x38)
    int32_t* ebx = arg2
    int32_t i_8 = ebx[1]
    
    if (i_8 s> 0)
        int32_t* ecx_1 = ebx[2]
        int32_t i_7 = i_8
        int32_t i
        
        do
            if (*ecx_1 s> 0)
                edi += 1
            
            ecx_1 = &ecx_1[1]
            i = i_7
            i_7 -= 1
        while (i != 1)
    
    esi[1] = i_8
    esi[2] = edi
    *esi = *ebx
    
    if (edi s> 0)
        int32_t* eax_1 = sub_64fcf0(ebx[2], ebx[1], edi)
        int32_t eax_2 = edi << 2
        __alloca_probe_16(eax_2)
        int32_t* edx_2 = eax_1
        int32_t __saved_edi
        int32_t* eax_3 = &__saved_edi
        int32_t* var_10_1 = &__saved_edi
        
        if (edx_2 == 0)
            sub_650400(esi)
            return 0xffffffff
        
        if (edi s> 0)
            int32_t** eax_5 = &__saved_edi - edx_2
            arg1 = edi
            int32_t* i_1
            
            do
                int32_t ecx_4 = rol.d(*edx_2, 0x10)
                int32_t eax_10 = ((ecx_4 u>> 8 ^ ecx_4 << 8) & 0xff00ff) ^ ecx_4 << 8
                int32_t ecx_10 = ((eax_10 u>> 4 ^ eax_10 << 4) & 0xf0f0f0f) ^ eax_10 << 4
                int32_t eax_16 = ((ecx_10 u>> 2 ^ ecx_10 << 2) & 0x33333333) ^ (ecx_10 * 4)
                *edx_2 = ((eax_16 u>> 1 ^ (eax_16 * 2)) & 0x55555555) ^ (eax_16 * 2)
                *(eax_5 + edx_2) = edx_2
                edx_2 = &edx_2[1]
                i_1 = arg1
                arg1 -= 1
            while (i_1 != 1)
            ebx = arg2
            eax_3 = var_10_1
        
        sub_5a7ac0(eax_3, edi, 4, sub_6505d0)
        __alloca_probe_16(eax_2)
        arg1 = &__saved_edi
        esi[5] = sub_5a881a(eax_2)
        int32_t eax_20 = 0
        
        if (edi s> 0)
            do
                arg1[(var_10_1[eax_20] - eax_1) s>> 2] = eax_20
                eax_20 += 1
            while (eax_20 s< edi)
            
            if (edi s> 0)
                int32_t* eax_21 = arg1
                int32_t* ecx_22 = eax_1 - eax_21
                int32_t* var_14_2 = ecx_22
                int32_t* var_10_2 = edi
                
                while (true)
                    int32_t edx_7 = *eax_21
                    int32_t ecx_23 = *(ecx_22 + eax_21)
                    eax_21 = &eax_21[1]
                    int32_t* temp2_1 = var_10_2
                    var_10_2 -= 1
                    *(esi[5] + (edx_7 << 2)) = ecx_23
                    
                    if (temp2_1 == 1)
                        break
                    
                    ecx_22 = var_14_2
                
                ebx = arg2
        
        __free_base(eax_1)
        esi[4] = sub_64ff20(esi, ebx, edi, arg1)
        esi[6] = sub_5a881a(eax_2)
        int32_t i_2 = 0
        uint32_t ecx_25 = 0
        
        if (ebx[1] s> 0)
            do
                if (*(ebx[2] + (i_2 << 2)) s> 0)
                    *(esi[6] + (arg1[ecx_25] << 2)) = i_2
                    ecx_25 += 1
                
                i_2 += 1
            while (i_2 s< ebx[1])
        
        int32_t eax_25
        char* edx_12
        eax_25, edx_12 = sub_5a881a(ecx_25)
        int32_t i_3 = 0
        esi[7] = eax_25
        arg2 = nullptr
        
        if (ebx[1] s> 0)
            do
                int32_t eax_26 = ebx[2]
                
                if (*(eax_26 + (i_3 << 2)) s> 0)
                    edx_12 = arg1[arg2]
                    char* eax_27
                    eax_27.b = *(eax_26 + (i_3 << 2))
                    arg2 += 1
                    edx_12[esi[7]] = eax_27.b
                
                i_3 += 1
            while (i_3 s< ebx[1])
        
        uint32_t i_4 = esi[2]
        char* edi_4 = nullptr
        int32_t eax_28 = 0
        
        for (; i_4 != 0; i_4 u>>= 1)
            eax_28 += 1
        
        esi[9] = eax_28 - 4
        
        if (eax_28 - 4 s< 5)
            esi[9] = 5
        
        if (esi[9] s> 8)
            esi[9] = 8
        
        int32_t ecx_26 = esi[9]
        int32_t ebx_8 = 1 << ecx_26.b
        int32_t var_14_3 = ebx_8
        esi[8] = _calloc(8, edx_12, ecx_26, ebx_8, 4)
        esi[0xa] = 0
        
        if (arg2 s> 0)
            do
                void* eax_31 = esi[7]
                int32_t ecx_27 = sx.d(*(eax_31 + edi_4))
                
                if (esi[0xa] s< ecx_27)
                    esi[0xa] = ecx_27
                
                int32_t ebx_9 = sx.d(*(eax_31 + edi_4))
                
                if (ebx_9 s<= esi[9])
                    int32_t edx_16 = rol.d(*(esi[5] + (edi_4 << 2)), 0x10)
                    int32_t eax_36 = ((edx_16 u>> 8 ^ edx_16 << 8) & 0xff00ff) ^ edx_16 << 8
                    int32_t edx_22 = ((eax_36 u>> 4 ^ eax_36 << 4) & 0xf0f0f0f) ^ eax_36 << 4
                    int32_t eax_42 = ((edx_22 u>> 2 ^ edx_22 << 2) & 0x33333333) ^ (edx_22 * 4)
                    void* i_5 = nullptr
                    arg1 = nullptr
                    
                    if (1 << ((esi[9]).b - ebx_9.b) s> 0)
                        do
                            int32_t ecx_36
                            ecx_36.b = edi_4[esi[7]]
                            *(esi[8] + ((i_5 << ecx_36.b
                                | (((eax_42 u>> 1 ^ (eax_42 * 2)) & 0x55555555) ^ (eax_42 * 2))) << 2)) =
                                &edi_4[1]
                            i_5 = arg1 + 1
                            arg1 = i_5
                        while (i_5 s< 1 << ((esi[9]).b - edi_4[esi[7]]))
                
                edi_4 = &edi_4[1]
            while (edi_4 s< arg2)
            
            ebx_8 = var_14_3
        
        int32_t eax_47 = 0xfffffffe << (0x1f - (esi[9]).b)
        int32_t edi_5 = 0
        arg1 = nullptr
        int32_t var_8_2 = 0
        int32_t var_10_3 = 0
        
        if (ebx_8 s> 0)
            do
                int32_t i_6 = edi_5 << (0x20 - (esi[9]).b)
                int32_t ecx_44 = rol.d(i_6, 0x10)
                int32_t eax_52 = ((ecx_44 u>> 8 ^ ecx_44 << 8) & 0xff00ff) ^ ecx_44 << 8
                int32_t ecx_50 = ((eax_52 u>> 4 ^ eax_52 << 4) & 0xf0f0f0f) ^ eax_52 << 4
                int32_t edx_40 = ((ecx_50 u>> 2 ^ ecx_50 << 2) & 0x33333333) ^ (ecx_50 * 4)
                
                if (*(esi[8] + ((((edx_40 u>> 1 ^ (edx_40 * 2)) & 0x55555555) ^ (edx_40 * 2)) << 2))
                        == 0)
                    int32_t* edx_42 = arg1
                    int32_t* ebx_20 = arg2
                    void* ecx_55 = edx_42 + 1
                    
                    if (ecx_55 s< ebx_20)
                        ebx_20 = arg2
                        int32_t* var_c_2 = esi[5] + (edx_42 << 2) + 4
                        
                        while (*var_c_2 u<= i_6)
                            arg1 += 1
                            var_c_2 = &var_c_2[1]
                            ecx_55 += 1
                            
                            if (ecx_55 s>= ebx_20)
                                break
                        
                        edx_42 = arg1
                    
                    int32_t ecx_56 = var_8_2
                    
                    if (ecx_56 s< ebx_20)
                        int32_t* var_c_3 = esi[5] + (ecx_56 << 2)
                        
                        while (i_6 u>= (*var_c_3 & eax_47))
                            var_c_3 = &var_c_3[1]
                            ecx_56 += 1
                            
                            if (ecx_56 s>= ebx_20)
                                break
                        
                        edx_42 = arg1
                        var_8_2 = ecx_56
                    
                    void* edi_8 = ebx_20 - ecx_56
                    
                    if (edx_42 u> 0x7fff)
                        edx_42 = 0x7fff
                    
                    if (edi_8 u> 0x7fff)
                        edi_8 = 0x7fff
                    
                    int32_t ecx_61 = ((eax_52 u>> 4 ^ eax_52 << 4) & 0xf0f0f0f) ^ eax_52 << 4
                    int32_t eax_58 = ((ecx_61 u>> 2 ^ ecx_61 << 2) & 0x33333333) ^ (ecx_61 * 4)
                    *(esi[8] + ((((eax_58 u>> 1 ^ (eax_58 * 2)) & 0x55555555) ^ (eax_58 * 2)) << 2)) =
                        (edx_42 | 0xffff0000) << 0xf | edi_8
                
                edi_5 = var_10_3 + 1
                var_10_3 = edi_5
            while (edi_5 s< var_14_3)
    
    return 0
}

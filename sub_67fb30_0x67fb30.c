// 函数名称: sub_67fb30
// 虚拟地址: 0x67fb30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67fb30(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = arg1[0x65]
    void* edx = arg1[0x6f]
    char ecx_1 = (arg1[0x67]).b
    int32_t eax_3 = 1 << ecx_1
    int32_t eax_4 = 0xffffffff << ecx_1
    
    if (arg1[0x45] != 0 && *(edx + 0x28) == 0)
        int32_t result = sub_67f550(arg1)
        
        if (result == 0)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
    
    void* ecx_25 = edx
    
    if (*(ecx_25 + 8) == 0)
        int32_t* eax_5 = arg1[6]
        int32_t* var_128_1 = arg1
        int32_t var_138 = *eax_5
        int32_t eax_6 = eax_5[1]
        int32_t edx_3 = *arg2
        int32_t eax_7 = *(ecx_25 + 0x14)
        int32_t ebx_1 = *(ecx_25 + 0xc)
        int32_t edi_1 = *(ecx_25 + 0x10)
        int32_t ecx_4 = *(ecx_25 + 0x3c)
        int32_t ecx_5 = arg1[0x64]
        int32_t var_114_1 = eax_7
        int32_t i_1 = 0
        int32_t var_10c = ecx_5
        int32_t var_130
        int32_t var_12c
        
        if (eax_7 == 0)
            if (ecx_5 s> ecx)
                goto label_67ff9b
            
            while (true)
                int32_t eax_9
                
                if (edi_1 s< 8)
                    if (sub_67ed20(&var_138, ebx_1, edi_1, 0) == 0)
                        goto label_67ffd7
                    
                    edi_1 = var_12c
                    ebx_1 = var_130
                    
                    if (edi_1 s>= 8)
                        goto label_67fc75
                    
                    eax_9 = 1
                    goto label_67fcad
                
            label_67fc75:
                uint32_t eax_12 = zx.d((ebx_1 s>> (edi_1.b - 8)).b)
                int32_t ecx_7 = *(ecx_4 + (eax_12 << 2) + 0x90)
                uint32_t var_118_1
                
                if (ecx_7 == 0)
                    eax_9 = 9
                label_67fcad:
                    uint32_t eax_14 = sub_67ee40(&var_138, ebx_1, edi_1, ecx_4, eax_9)
                    var_118_1 = eax_14
                    
                    if (eax_14 s< 0)
                        goto label_67ffd7
                    
                    ebx_1 = var_130
                    edi_1 = var_12c
                else
                    edi_1 -= ecx_7
                    var_118_1 = zx.d(*(eax_12 + ecx_4 + 0x490))
                
                int32_t esi_2 = var_118_1 s>> 4
                int32_t eax_16 = var_118_1 & 0xf
                int32_t var_11c_1 = esi_2
                int32_t var_118_2 = eax_16
                
                if (eax_16 != 0)
                    if (eax_16 != 1)
                        *(*arg1 + 0x14) = 0x76
                        (*(*arg1 + 4))(arg1, 0xffffffff)
                    
                    if (edi_1 s< 1)
                        if (sub_67ed20(&var_138, ebx_1, edi_1, 1) == 0)
                            goto label_67ffd7
                        
                        ebx_1 = var_130
                        edi_1 = var_12c
                    
                    edi_1 -= 1
                    
                    if (((ebx_1 s>> edi_1.b).b & 1) == 0)
                        var_118_2 = eax_4
                    else
                        var_118_2 = eax_3
                else if (esi_2 != 0xf)
                    int32_t eax_33 = 1 << esi_2.b
                    var_114_1 = eax_33
                    
                    if (esi_2 == 0)
                        break
                    
                    if (edi_1 s< esi_2)
                        if (sub_67ed20(&var_138, ebx_1, edi_1, esi_2) == 0)
                            goto label_67ffd7
                        
                        ebx_1 = var_130
                        edi_1 = var_12c
                    
                    edi_1 -= esi_2
                    var_114_1 += ebx_1 s>> edi_1.b & (eax_33 - 1)
                    break
                
                int32_t eax_29
                
                do
                    int32_t eax_21 = *((var_10c << 2) + &data_8357b0)
                    int16_t* esi_3 = edx_3 + (eax_21 << 1)
                    
                    if (*(edx_3 + (eax_21 << 1)) == 0)
                        int32_t temp0_1 = var_11c_1
                        var_11c_1 -= 1
                        
                        if (temp0_1 - 1 s< 0)
                            break
                    else
                        if (edi_1 s< 1)
                            if (sub_67ed20(&var_138, ebx_1, edi_1, 1) == 0)
                                goto label_67ffd7
                            
                            ebx_1 = var_130
                            edi_1 = var_12c
                        
                        edi_1 -= 1
                        
                        if (((ebx_1 s>> edi_1.b).b & 1) != 0)
                            int16_t eax_25 = *esi_3
                            
                            if ((eax_3 & sx.d(eax_25)) == 0)
                                if (eax_25 s< 0)
                                    *esi_3 = eax_25 + eax_4.w
                                else
                                    *esi_3 = eax_25 + eax_3.w
                    
                    eax_29 = var_10c + 1
                    var_10c = eax_29
                while (eax_29 s<= ecx)
                
                if (var_118_2 != 0)
                    int32_t eax_30 = *((var_10c << 2) + &data_8357b0)
                    *(edx_3 + (eax_30 << 1)) = var_118_2.w
                    int32_t var_108[0x40]
                    var_108[i_1] = eax_30
                    i_1 += 1
                
                int32_t eax_32 = var_10c + 1
                var_10c = eax_32
                
                if (eax_32 s> ecx)
                    goto label_67ff9b
        
        if (var_114_1 u<= 0)
            goto label_67ff9b
        
        int32_t eax_36 = var_10c
        
        if (eax_36 s<= ecx)
            while (true)
                int32_t eax_37 = *((eax_36 << 2) + &data_8357b0)
                int16_t* eax_38 = edx_3 + (eax_37 << 1)
                int16_t* var_110_1 = eax_38
                
                if (*(edx_3 + (eax_37 << 1)) != 0)
                    if (edi_1 s< 1)
                        if (sub_67ed20(&var_138, ebx_1, edi_1, 1) == 0)
                            break
                        
                        ebx_1 = var_130
                        edi_1 = var_12c
                        eax_38 = var_110_1
                    
                    edi_1 -= 1
                    
                    if (((ebx_1 s>> edi_1.b).b & 1) != 0)
                        int16_t eax_40 = *eax_38
                        
                        if ((eax_3 & sx.d(eax_40)) == 0)
                            int16_t eax_41
                            
                            if (eax_40 s< 0)
                                eax_41 = eax_40 + eax_4.w
                            else
                                eax_41 = eax_40 + eax_3.w
                            
                            *var_110_1 = eax_41
                
                eax_36 = var_10c + 1
                var_10c = eax_36
                
                if (eax_36 s> ecx)
                    goto label_67ff8c
            
        label_67ffd7:
            int32_t i = i_1
            
            while (i s> 0)
                int32_t edx_20 = (&var_10c)[i]
                i -= 1
                *(edx_3 + (edx_20 << 1)) = 0
            
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        
    label_67ff8c:
        var_114_1 -= 1
    label_67ff9b:
        *arg1[6] = var_138
        *(arg1[6] + 4) = eax_6
        ecx_25 = edx
        *(ecx_25 + 0xc) = ebx_1
        *(ecx_25 + 0x10) = edi_1
        *(ecx_25 + 0x14) = var_114_1
    
    *(ecx_25 + 0x28) -= 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}

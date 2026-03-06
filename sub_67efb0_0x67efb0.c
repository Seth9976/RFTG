// 函数名称: sub_67efb0
// 虚拟地址: 0x67efb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67efb0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = *(arg1 + 0x1bc)
    void* var_34 = ebx
    
    if (*(arg1 + 0x114) != 0 && *(ebx + 0x24) == 0 && sub_67ef30(arg1) == 0)
    label_67effc:
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    if (*(ebx + 8) == 0)
        bool cond:1_1 = *(arg1 + 0x164) s<= 0
        int32_t* eax_5 = *(arg1 + 0x18)
        int32_t edx_1 = eax_5[1]
        int32_t esi_2 = *(ebx + 0xc)
        int32_t eax_6 = *(ebx + 0x10)
        int32_t var_30 = *eax_5
        int32_t edx_2 = *(ebx + 0x18)
        int32_t var_18 = *(ebx + 0x14)
        int32_t ecx_5 = *(ebx + 0x1c)
        int32_t edx_3 = *(ebx + 0x20)
        void* var_20_1 = arg1
        int32_t var_44_1 = 0
        
        if (not(cond:1_1))
            void* ecx_6 = ebx + 0x70
            void* var_40_1 = arg1 + 0x168
            void* var_3c_1 = ecx_6
            
            while (true)
                int16_t* edx_5 = *(arg2 + (var_44_1 << 2))
                int32_t edi_3 = *(ecx_6 - 0x28)
                int32_t ecx_7 = *ecx_6
                int32_t var_28
                int32_t var_24
                int32_t ecx_8
                
                if (eax_6 s< 8)
                    if (sub_67ed20(&var_30, esi_2, eax_6, 0) == 0)
                        goto label_67effc
                    
                    eax_6 = var_24
                    esi_2 = var_28
                    
                    if (eax_6 s>= 8)
                        goto label_67f0b0
                    
                    ecx_8 = 1
                    goto label_67f0df
                
            label_67f0b0:
                uint32_t edx_8 = zx.d((esi_2 s>> (eax_6.b - 8)).b)
                int32_t ecx_10 = *(edi_3 + (edx_8 << 2) + 0x90)
                uint32_t edi_4
                
                if (ecx_10 == 0)
                    ecx_8 = 9
                label_67f0df:
                    edi_4 = sub_67ee40(&var_30, esi_2, eax_6, edi_3, ecx_8)
                    
                    if (edi_4 s< 0)
                        goto label_67effc
                    
                    esi_2 = var_28
                    eax_6 = var_24
                else
                    edi_4 = zx.d(*(edx_8 + edi_3 + 0x490))
                    eax_6 -= ecx_10
                
                if (edi_4 != 0)
                    if (eax_6 s< edi_4)
                        if (sub_67ed20(&var_30, esi_2, eax_6, edi_4) == 0)
                            goto label_67effc
                        
                        esi_2 = var_28
                        eax_6 = var_24
                    
                    eax_6 -= edi_4
                    uint32_t edx_11 = ((1 << edi_4.b) - 1) & esi_2 s>> eax_6.b
                    ebx = var_34
                    
                    if (edx_11 s>= (*U"????????????????")[0x10 + edi_4])
                        edi_4 = edx_11
                    else
                        edi_4 = *((edi_4 << 2) + &data_835930) + edx_11
                
                if (*(var_3c_1 + 0x28) != 0)
                    int32_t ecx_14 = *var_40_1
                    (&var_18)[ecx_14] += edi_4
                    *edx_5 = ((&__saved_ebp)[ecx_14 - 5]).w
                
                if (*(var_3c_1 + 0x50) == 0)
                    int32_t var_1c_2 = 1
                    int32_t var_1c_3
                    
                    do
                        int32_t ecx_32
                        int32_t edi_12
                        
                        if (eax_6 s< 8)
                            if (sub_67ed20(&var_30, esi_2, eax_6, 0) == 0)
                                goto label_67effc
                            
                            eax_6 = var_24
                            esi_2 = var_28
                            
                            if (eax_6 s>= 8)
                                goto label_67f314
                            
                            edi_12 = ecx_7
                            ecx_32 = 1
                            goto label_67f34d
                        
                    label_67f314:
                        edi_12 = ecx_7
                        uint32_t edx_26 = zx.d((esi_2 s>> (eax_6.b - 8)).b)
                        int32_t ecx_34 = *(edi_12 + (edx_26 << 2) + 0x90)
                        uint32_t edi_13
                        
                        if (ecx_34 == 0)
                            ecx_32 = 9
                        label_67f34d:
                            edi_13 = sub_67ee40(&var_30, esi_2, eax_6, edi_12, ecx_32)
                            
                            if (edi_13 s< 0)
                                goto label_67effc
                            
                            esi_2 = var_28
                            eax_6 = var_24
                        else
                            edi_13 = zx.d(*(edx_26 + edi_12 + 0x490))
                            eax_6 -= ecx_34
                        
                        int32_t ecx_36 = edi_13 s>> 4
                        int32_t edi_14 = edi_13 & 0xf
                        
                        if (edi_14 == 0)
                            if (ecx_36 != 0xf)
                                break
                            
                            var_1c_3 = var_1c_2 + ecx_36
                        else
                            var_1c_3 = var_1c_2 + ecx_36
                            
                            if (eax_6 s< edi_14)
                                if (sub_67ed20(&var_30, esi_2, eax_6, edi_14) == 0)
                                    goto label_67effc
                                
                                esi_2 = var_28
                                eax_6 = var_24
                            
                            eax_6 -= edi_14
                        
                        var_1c_2 = var_1c_3 + 1
                    while (var_1c_3 + 1 s< 0x40)
                else
                    int32_t ebx_3 = 1
                    
                    while (true)
                        int32_t ecx_17
                        int32_t edi_7
                        
                        if (eax_6 s< 8)
                            if (sub_67ed20(&var_30, esi_2, eax_6, 0) == 0)
                                goto label_67effc
                            
                            eax_6 = var_24
                            esi_2 = var_28
                            
                            if (eax_6 s>= 8)
                                goto label_67f1a3
                            
                            edi_7 = ecx_7
                            ecx_17 = 1
                            goto label_67f1dc
                        
                    label_67f1a3:
                        edi_7 = ecx_7
                        uint32_t edx_15 = zx.d((esi_2 s>> (eax_6.b - 8)).b)
                        int32_t ecx_19 = *(edi_7 + (edx_15 << 2) + 0x90)
                        uint32_t edi_8
                        
                        if (ecx_19 == 0)
                            ecx_17 = 9
                        label_67f1dc:
                            edi_8 = sub_67ee40(&var_30, esi_2, eax_6, edi_7, ecx_17)
                            
                            if (edi_8 s< 0)
                                goto label_67effc
                            
                            esi_2 = var_28
                            eax_6 = var_24
                        else
                            edi_8 = zx.d(*(edx_15 + edi_7 + 0x490))
                            eax_6 -= ecx_19
                        
                        int32_t ecx_21 = edi_8 s>> 4
                        int32_t edi_9 = edi_8 & 0xf
                        int32_t ebx_7
                        
                        if (edi_9 == 0)
                            if (ecx_21 == 0xf)
                                ebx_7 = ebx_3 + ecx_21
                            label_67f263:
                                ebx_3 = ebx_7 + 1
                                
                                if (ebx_3 s< 0x40)
                                    continue
                            
                            ebx = var_34
                            break
                        
                        if (eax_6 s< edi_9)
                            if (sub_67ed20(&var_30, esi_2, eax_6, edi_9) == 0)
                                goto label_67effc
                            
                            esi_2 = var_28
                            eax_6 = var_24
                        
                        eax_6 -= edi_9
                        int32_t edx_18 = ((1 << edi_9.b) - 1) & esi_2 s>> eax_6.b
                        int16_t edi_11
                        
                        if (edx_18 s>= (*U"????????????????")[0x10 + edi_9])
                            edi_11 = edx_18.w
                        else
                            edi_11 = (*((edi_9 << 2) + &data_835930)).w + edx_18.w
                        
                        ebx_7 = ebx_3 + ecx_21
                        edx_5[*((ebx_7 << 2) + &data_8357b0)] = edi_11
                        goto label_67f263
                
                var_3c_1 += 4
                var_40_1 += 4
                int32_t ecx_26 = var_44_1 + 1
                var_44_1 = ecx_26
                
                if (ecx_26 s>= *(arg1 + 0x164))
                    break
                
                ecx_6 = var_3c_1
        
        **(arg1 + 0x18) = var_30
        *(*(arg1 + 0x18) + 4) = edx_1
        *(ebx + 0x10) = eax_6
        *(ebx + 0x14) = var_18
        *(ebx + 0x18) = edx_2
        *(ebx + 0x1c) = ecx_5
        *(ebx + 0xc) = esi_2
        *(ebx + 0x20) = edx_3
    
    *(ebx + 0x24) -= 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}

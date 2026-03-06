// 函数名称: sub_67f5d0
// 虚拟地址: 0x67f5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67f5d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* ebx = arg1
    char ecx = (*(ebx + 0x19c)).b
    void* edi = *(ebx + 0x1bc)
    void* var_2c = ebx
    
    if (*(ebx + 0x114) != 0 && *(edi + 0x28) == 0 && sub_67f550(ebx) == 0)
    label_67f622:
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    if (*(edi + 8) == 0)
        bool cond:1_1 = *(ebx + 0x164) s<= 0
        int32_t* eax_5 = *(ebx + 0x18)
        void* var_30_1 = ebx
        int32_t var_40 = *eax_5
        int32_t eax_6 = eax_5[1]
        int32_t edx_2 = *(edi + 0x14)
        int32_t eax_7 = *(edi + 0x10)
        int32_t var_20_1 = *(edi + 0xc)
        int32_t edx_3 = *(edi + 0x1c)
        int32_t var_18 = *(edi + 0x18)
        int32_t ecx_5 = *(edi + 0x20)
        int32_t edx_4 = *(edi + 0x24)
        int32_t i_1 = 0
        
        if (not(cond:1_1))
            void* var_24_1 = ebx + 0x168
            int32_t i
            
            do
                int16_t* edx_6 = *(arg2 + (i_1 << 2))
                int32_t ecx_9 = *var_24_1
                int32_t esi_2 = *(edi + (*(*(ebx + (ecx_9 << 2) + 0x14c) + 0x14) << 2) + 0x2c)
                int32_t var_38
                int32_t var_34
                int32_t ecx_12
                
                if (eax_7 s< 8)
                    if (sub_67ed20(&var_40, var_20_1, eax_7, 0) == 0)
                        goto label_67f622
                    
                    eax_7 = var_34
                    var_20_1 = var_38
                    
                    if (eax_7 s>= 8)
                        goto label_67f6ef
                    
                    ecx_12 = 1
                    goto label_67f721
                
            label_67f6ef:
                uint32_t edx_11 = zx.d((var_20_1 s>> (eax_7.b - 8)).b)
                int32_t ecx_14 = *(esi_2 + (edx_11 << 2) + 0x90)
                uint32_t esi_3
                
                if (ecx_14 == 0)
                    ecx_12 = 9
                label_67f721:
                    esi_3 = sub_67ee40(&var_40, var_20_1, eax_7, esi_2, ecx_12)
                    
                    if (esi_3 s< 0)
                        goto label_67f622
                    
                    eax_7 = var_34
                    var_20_1 = var_38
                else
                    esi_3 = zx.d(*(edx_11 + esi_2 + 0x490))
                    eax_7 -= ecx_14
                
                if (esi_3 != 0)
                    if (eax_7 s< esi_3)
                        if (sub_67ed20(&var_40, var_20_1, eax_7, esi_3) == 0)
                            goto label_67f622
                        
                        eax_7 = var_34
                        var_20_1 = var_38
                    
                    eax_7 -= esi_3
                    uint32_t edx_16 = ((1 << esi_3.b) - 1) & var_20_1 s>> eax_7.b
                    ebx = var_2c
                    
                    if (edx_16 s>= *((esi_3 << 2) + &data_835970))
                        esi_3 = edx_16
                    else
                        esi_3 = *((esi_3 << 2) + &data_8359b0) + edx_16
                
                (&var_18)[ecx_9] += esi_3
                var_24_1 += 4
                *edx_6 = ((&var_18)[ecx_9]).w << ecx
                i = i_1 + 1
                i_1 = i
            while (i s< *(ebx + 0x164))
        
        **(ebx + 0x18) = var_40
        *(*(ebx + 0x18) + 4) = eax_6
        int32_t ecx_25 = var_18
        *(edi + 0x10) = eax_7
        *(edi + 0x14) = edx_2
        *(edi + 0x18) = ecx_25
        *(edi + 0xc) = var_20_1
        *(edi + 0x1c) = edx_3
        *(edi + 0x20) = ecx_5
        *(edi + 0x24) = edx_4
    
    *(edi + 0x28) -= 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}

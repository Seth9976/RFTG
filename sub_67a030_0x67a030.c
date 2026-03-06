// 函数名称: sub_67a030
// 虚拟地址: 0x67a030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67a030()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    int32_t* ecx = entry_ebx[6]
    char* esi = *ecx
    int32_t edi = ecx[1]
    int32_t* var_128 = ecx
    
    if (edi != 0)
        goto label_67a08a
    
    if (ecx[3](entry_ebx) != 0)
        esi = *var_128
        edi = var_128[1]
        ecx = var_128
    label_67a08a:
        uint32_t eax_7 = zx.d(*esi) << 8
        void* esi_1 = &esi[1]
        int32_t edi_1 = edi - 1
        
        if (edi != 1)
            goto label_67a0c4
        
        if (ecx[3](entry_ebx) != 0)
            esi_1 = *var_128
            ecx = var_128
            edi_1 = var_128[1]
        label_67a0c4:
            int32_t i_1 = eax_7 + zx.d(*esi_1) - 2
            int32_t edi_2 = edi_1 - 1
            void* esi_2 = esi_1 + 1
            int32_t i = i_1
            
            if (i_1 s> 0x10)
                do
                    if (edi_2 == 0)
                        if (ecx[3](entry_ebx) == 0)
                            goto label_67a06d
                        
                        esi_2 = *var_128
                        edi_2 = var_128[1]
                    
                    uint32_t eax_15 = zx.d(*esi_2)
                    *(*entry_ebx + 0x14) = 0x50
                    *(*entry_ebx + 0x18) = eax_15
                    int32_t edi_3 = edi_2 - 1
                    void* esi_3 = esi_2 + 1
                    (*(*entry_ebx + 4))(entry_ebx, 1)
                    int32_t j = 1
                    char var_1c = 0
                    int32_t var_130_1 = 0
                    int32_t j_1 = 1
                    void* var_124_1
                    int32_t var_120_1
                    
                    do
                        if (edi_3 == 0)
                            if (var_128[3](entry_ebx) == 0)
                                goto label_67a06d
                            
                            esi_3 = *var_128
                            j = j_1
                            edi_3 = var_128[1]
                        
                        char edx_6 = *esi_3
                        var_130_1 += zx.d(edx_6)
                        (&var_1c)[j] = edx_6
                        j += 1
                        edi_3 -= 1
                        esi_3 += 1
                        var_120_1 = edi_3
                        var_124_1 = esi_3
                        j_1 = j
                    while (j s<= 0x10)
                    
                    void* eax_19 = *entry_ebx
                    int32_t var_12c_2 = i - 0x11
                    char var_1b
                    *(eax_19 + 0x18) = zx.d(var_1b)
                    char var_1a
                    *(eax_19 + 0x1c) = zx.d(var_1a)
                    char var_19
                    *(eax_19 + 0x20) = zx.d(var_19)
                    char var_18
                    *(eax_19 + 0x24) = zx.d(var_18)
                    char var_17
                    *(eax_19 + 0x28) = zx.d(var_17)
                    char var_16
                    *(eax_19 + 0x2c) = zx.d(var_16)
                    char var_15
                    *(eax_19 + 0x30) = zx.d(var_15)
                    char var_14
                    *(eax_19 + 0x34) = zx.d(var_14)
                    *(*entry_ebx + 0x14) = 0x56
                    (*(*entry_ebx + 4))(entry_ebx, 2)
                    void* eax_21 = *entry_ebx
                    char var_13
                    *(eax_21 + 0x18) = zx.d(var_13)
                    char var_12
                    *(eax_21 + 0x1c) = zx.d(var_12)
                    char var_11
                    *(eax_21 + 0x20) = zx.d(var_11)
                    char var_10
                    *(eax_21 + 0x24) = zx.d(var_10)
                    char var_f
                    *(eax_21 + 0x28) = zx.d(var_f)
                    char var_e
                    *(eax_21 + 0x2c) = zx.d(var_e)
                    char var_d
                    *(eax_21 + 0x30) = zx.d(var_d)
                    char var_c
                    *(eax_21 + 0x34) = zx.d(var_c)
                    *(*entry_ebx + 0x14) = 0x56
                    (*(*entry_ebx + 4))(entry_ebx, 2)
                    int32_t ecx_20 = var_130_1
                    
                    if (ecx_20 s> 0x100 || ecx_20 s> var_12c_2)
                        *(*entry_ebx + 0x14) = 8
                        (**entry_ebx)(entry_ebx)
                        ecx_20 = var_130_1
                    
                    int32_t eax_24 = 0
                    int32_t var_134_1 = 0
                    char var_11c[0x100]
                    
                    if (ecx_20 s> 0)
                        do
                            if (edi_3 == 0)
                                if (var_128[3](entry_ebx) == 0)
                                    goto label_67a06d
                                
                                esi_3 = *var_128
                                eax_24 = var_134_1
                                edi_3 = var_128[1]
                                ecx_20 = var_130_1
                            
                            var_11c[eax_24] = *esi_3
                            eax_24 += 1
                            edi_3 -= 1
                            esi_3 += 1
                            var_120_1 = edi_3
                            var_124_1 = esi_3
                            var_134_1 = eax_24
                        while (eax_24 s< ecx_20)
                    
                    uint32_t eax_27 = eax_15
                    i = var_12c_2 - ecx_20
                    void* esi_6
                    
                    if ((eax_27.b & 0x10) == 0)
                        esi_6 = &entry_ebx[eax_27 + 0x2d]
                    else
                        eax_27 -= 0x10
                        esi_6 = &entry_ebx[eax_27 + 0x31]
                    
                    if (eax_27 s< 0 || eax_27 s>= 4)
                        *(*entry_ebx + 0x14) = 0x1e
                        *(*entry_ebx + 0x18) = eax_27
                        (**entry_ebx)(entry_ebx)
                    
                    if (*esi_6 == 0)
                        *esi_6 = sub_67b670(entry_ebx)
                    
                    int32_t* eax_30 = *esi_6
                    *eax_30 = var_1c.d
                    eax_30[1] = var_18.d
                    eax_30[2] = var_14.d
                    int32_t edx_23
                    edx_23.b = var_c
                    eax_30[3] = var_10.d
                    eax_30[4].b = edx_23.b
                    __builtin_memcpy(*esi_6 + 0x11, &var_11c, 0x100)
                    esi_2 = var_124_1
                    edi_2 = var_120_1
                    ecx = var_128
                while (i s> 0x10)
                
                i_1 = i
            
            if (i_1 != 0)
                *(*entry_ebx + 0x14) = 0xb
                (**entry_ebx)(entry_ebx)
                ecx = var_128
            
            *ecx = esi_2
            ecx[1] = edi_2
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
    
    label_67a06d:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0
}

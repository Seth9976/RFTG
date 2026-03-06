// 函数名称: sub_67a3b0
// 虚拟地址: 0x67a3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67a3b0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* ecx = arg1[6]
    int32_t* ecx = arg1[6]
    char* ebx = *ecx
    int32_t esi = ecx[1]
    int32_t* var_c = ecx
    
    if (esi != 0)
        goto label_67a3eb
    
    if (ecx[3](arg1) != 0)
        ebx = *var_c
        esi = var_c[1]
        ecx = var_c
    label_67a3eb:
        uint32_t eax_6 = zx.d(*ebx) << 8
        void* ebx_1 = &ebx[1]
        int32_t esi_1 = esi - 1
        
        if (esi != 1)
            goto label_67a417
        
        if (ecx[3](arg1) != 0)
            ebx_1 = *var_c
            ecx = var_c
            esi_1 = var_c[1]
        label_67a417:
            int32_t i_1 = eax_6 + zx.d(*ebx_1) - 2
            int32_t esi_2 = esi_1 - 1
            void* ebx_2 = ebx_1 + 1
            int32_t i = i_1
            bool cond:1_1 = i_1 == 0
            
            if (i_1 s> 0)
                do
                    if (esi_2 == 0)
                        if (ecx[3](arg1) == 0)
                            return 0
                        
                        ebx_2 = *var_c
                        esi_2 = var_c[1]
                    
                    int32_t var_8_1 = esi_2 - 1
                    uint32_t esi_4 = zx.d(*ebx_2)
                    *(*arg1 + 0x14) = 0x51
                    int32_t eax_15 = esi_4 s>> 4
                    int32_t esi_5 = esi_4 & 0xf
                    *(*arg1 + 0x18) = esi_5
                    *(*arg1 + 0x1c) = eax_15
                    ebx_2 += 1
                    (*(*arg1 + 4))(arg1, 1)
                    
                    if (esi_5 s>= 4)
                        *(*arg1 + 0x14) = 0x1f
                        *(*arg1 + 0x18) = esi_5
                        (**arg1)(arg1)
                    
                    if (arg1[esi_5 + 0x29] == 0)
                        void* eax_18
                        int32_t ecx_5
                        eax_18, ecx_5 = sub_67b640(arg1)
                        arg1[esi_5 + 0x29] = eax_18
                    
                    void* eax_19 = arg1[esi_5 + 0x29]
                    void* const j_3 = &data_8357b0
                    void* j
                    
                    do
                        uint16_t esi_9
                        
                        if (eax_15 == 0)
                            if (var_8_1 == 0)
                                if (var_c[3](arg1) == 0)
                                    return 0
                                
                                ebx_2 = *var_c
                                var_8_1 = var_c[1]
                            
                            esi_9 = zx.w(*ebx_2)
                        else
                            if (var_8_1 == 0)
                                if (var_c[3](arg1) == 0)
                                    return 0
                                
                                ebx_2 = *var_c
                                var_8_1 = var_c[1]
                            
                            int32_t eax_22 = var_8_1 - 1
                            uint16_t esi_8 = (zx.d(*ebx_2) << 8).w
                            ebx_2 += 1
                            var_8_1 = eax_22
                            
                            if (eax_22 == 0)
                                if (var_c[3](arg1) == 0)
                                    return 0
                                
                                ebx_2 = *var_c
                                var_8_1 = var_c[1]
                            
                            esi_9 = esi_8 + zx.w(*ebx_2)
                        
                        var_8_1 -= 1
                        j = j_3 + 4
                        ebx_2 += 1
                        *(eax_19 + (*j_3 << 1)) = esi_9
                        j_3 = j
                    while (j s< U"????????????????")
                    
                    if (*(*arg1 + 0x68) s>= 2)
                        void* esi_12 = eax_19 + 4
                        int32_t j_2 = 8
                        int32_t j_1
                        
                        do
                            void* eax_29 = *arg1
                            *(eax_29 + 0x18) = zx.d(*(esi_12 - 4))
                            *(eax_29 + 0x1c) = zx.d(*(esi_12 - 2))
                            *(eax_29 + 0x20) = zx.d(*esi_12)
                            *(eax_29 + 0x24) = zx.d(*(esi_12 + 2))
                            *(eax_29 + 0x28) = zx.d(*(esi_12 + 4))
                            *(eax_29 + 0x2c) = zx.d(*(esi_12 + 6))
                            *(eax_29 + 0x30) = zx.d(*(esi_12 + 8))
                            *(eax_29 + 0x34) = zx.d(*(esi_12 + 0xa))
                            *(*arg1 + 0x14) = 0x5d
                            (*(*arg1 + 4))(arg1, 2)
                            esi_12 += 0x10
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                    
                    i -= 0x41
                    
                    if (eax_15 != 0)
                        i -= 0x40
                    
                    esi_2 = var_8_1
                    ecx = var_c
                while (i s> 0)
                
                cond:1_1 = i == 0
            
            if (not(cond:1_1))
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
                ecx = var_c
            
            ecx[1] = esi_2
            *ecx = ebx_2
            return 1
    
    return 0
}

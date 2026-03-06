// 函数名称: sub_658ac0
// 虚拟地址: 0x658ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_658ac0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t edx
    int128_t* esi = _calloc(eax, edx, ecx, 1, 0xc88)
    void* ecx_1 = *(arg1 + 0x1c)
    int128_t* var_8 = esi
    sub_5abfc0(esi, 0, 0xc88)
    int32_t eax_3 = sub_68b0a0(arg2, 1)
    
    if (eax_3 s>= 0)
        if (eax_3 == 0)
            *esi = 1
        label_658b29:
            int32_t eax_6 = sub_68b0a0(arg2, 1)
            
            if (eax_6 s>= 0)
                if (eax_6 == 0)
                label_658bfd:
                    
                    if (sub_68b0a0(arg2, 2) == 0)
                        if (*esi s> 1)
                            int32_t i = 0
                            
                            if (*(arg1 + 4) s> 0)
                                void* esi_2 = esi + 4
                                
                                do
                                    int32_t eax_17 = sub_68b0a0(arg2, 4)
                                    *esi_2 = eax_17
                                    
                                    if (eax_17 s>= *var_8)
                                        goto label_658cac
                                    
                                    if (eax_17 s< 0)
                                        goto label_658cac
                                    
                                    i += 1
                                    esi_2 += 4
                                while (i s< *(arg1 + 4))
                                
                                esi = var_8
                        
                        int32_t var_c_1 = 0
                        
                        if (*esi s<= 0)
                            return esi
                        
                        void* esi_3 = esi + 0x444
                        
                        while (true)
                            sub_68b0a0(arg2, 8)
                            int32_t eax_18 = sub_68b0a0(arg2, 8)
                            *(esi_3 - 0x40) = eax_18
                            
                            if (eax_18 s>= *(ecx_1 + 0x10))
                                break
                            
                            if (eax_18 s< 0)
                                break
                            
                            int32_t eax_19 = sub_68b0a0(arg2, 8)
                            *esi_3 = eax_19
                            
                            if (eax_19 s>= *(ecx_1 + 0x14))
                                break
                            
                            if (eax_19 s< 0)
                                break
                            
                            int32_t eax_21 = var_c_1 + 1
                            esi_3 += 4
                            var_c_1 = eax_21
                            
                            if (eax_21 s>= *var_8)
                                return var_8
                        
                    label_658cac:
                        esi = var_8
                else
                    int32_t eax_8 = sub_68b0a0(arg2, 8) + 1
                    *(esi + 0x484) = eax_8
                    
                    if (eax_8 s> 0)
                        int32_t i_2 = 0
                        void* ebx_1 = esi + 0x888
                        int32_t i_1
                        
                        do
                            int32_t ecx_2 = *(arg1 + 4)
                            int32_t eax_9 = 0
                            
                            if (ecx_2 != 0)
                                uint32_t j = ecx_2 - 1
                                
                                if (ecx_2 != 1)
                                    do
                                        eax_9 += 1
                                        j u>>= 1
                                    while (j != 0)
                            
                            int32_t eax_10 = sub_68b0a0(arg2, eax_9)
                            *(ebx_1 - 0x400) = eax_10
                            int32_t eax_12 = *(arg1 + 4)
                            int32_t ecx_3 = 0
                            
                            if (eax_12 != 0)
                                uint32_t j_1 = eax_12 - 1
                                
                                if (eax_12 != 1)
                                    do
                                        ecx_3 += 1
                                        j_1 u>>= 1
                                    while (j_1 != 0)
                            
                            int32_t eax_13 = sub_68b0a0(arg2, ecx_3)
                            *ebx_1 = eax_13
                            
                            if (eax_10 s< 0)
                                goto label_658cac
                            
                            if (eax_13 s< 0)
                                goto label_658cac
                            
                            if (eax_10 == eax_13)
                                goto label_658cac
                            
                            int32_t ecx_5 = *(arg1 + 4)
                            
                            if (eax_10 s>= ecx_5)
                                goto label_658cac
                            
                            if (eax_13 s>= ecx_5)
                                goto label_658cac
                            
                            i_1 = i_2 + 1
                            ebx_1 += 4
                            i_2 = i_1
                        while (i_1 s< *(var_8 + 0x484))
                        esi = var_8
                        goto label_658bfd
        else
            int32_t eax_5 = sub_68b0a0(arg2, 4) + 1
            *esi = eax_5
            
            if (eax_5 s> 0)
                goto label_658b29
    
    if (esi != 0)
        sub_5abfc0(esi, 0, 0xc88)
        __free_base(esi)
    
    return 0
}

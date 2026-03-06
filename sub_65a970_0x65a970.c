// 函数名称: sub_65a970
// 虚拟地址: 0x65a970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65a970(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t* ecx = *entry_ebx
    int32_t eax = ecx[3]
    int32_t eax_1 = *entry_ebx[4]
    int32_t esi = ecx[2]
    int32_t temp0 = divs.dp.d(sx.q(ecx[1] - *ecx), esi)
    int128_t var_434[0x20]
    sub_5abfc0(&var_434, 0, 0x200)
    int128_t var_234[0x20]
    sub_5abfc0(&var_234, 0, 0x200)
    int32_t i_1 = 0
    
    if (entry_ebx[2] s> 0)
        int32_t i
        
        do
            int32_t edi_1 = 0
            
            if (temp0 s> 0)
                do
                    if (i_1 == 0)
                        int32_t esi_1 = 0
                        int32_t var_10_1 = 0
                        
                        if (arg3 s> 0)
                            do
                                int32_t ecx_1 = arg4[esi_1]
                                int32_t eax_7 = *(ecx_1 + (edi_1 << 2))
                                int32_t ecx_2 = 1
                                
                                if (eax_1 s> 1)
                                    int32_t var_c_1 = ecx_1 + (edi_1 << 2) + 4
                                    
                                    do
                                        eax_7 *= eax
                                        
                                        if (ecx_2 + edi_1 s< temp0)
                                            eax_7 += *var_c_1
                                        
                                        var_c_1 += 4
                                        ecx_2 += 1
                                    while (ecx_2 s< eax_1)
                                    
                                    esi_1 = var_10_1
                                
                                void* ecx_3 = entry_ebx[4]
                                
                                if (eax_7 s< *(ecx_3 + 4))
                                    int32_t eax_8 = sub_6510c0(ecx_3, eax_7, arg1)
                                    entry_ebx[9] += eax_8
                                
                                esi_1 += 1
                                var_10_1 = esi_1
                            while (esi_1 s< arg3)
                    
                    int32_t var_c_2 = 0
                    
                    if (eax_1 s> 0)
                        int32_t esi_3 = edi_1 * esi
                        int32_t var_24_1 = esi_3
                        int32_t eax_25
                        
                        do
                            if (edi_1 s>= temp0)
                                goto label_65ab5a
                            
                            int32_t eax_11 = *ecx + esi_3
                            int32_t edx_8 = rol.d(1, i_1.b)
                            int32_t var_2c_1 = edx_8
                            
                            if (arg3 s> 0)
                                int32_t* esi_4 = arg4
                                int32_t* eax_13 = arg2 - esi_4
                                int32_t j_1 = arg3
                                int32_t j
                                
                                do
                                    if (i_1 == 0)
                                        int32_t eax_15 = *(*esi_4 + (edi_1 << 2))
                                        *(&var_234 + (eax_15 << 2)) += esi
                                    
                                    int32_t eax_18 = *(*esi_4 + (edi_1 << 2))
                                    
                                    if ((ecx[eax_18 + 6] & edx_8) != 0)
                                        int32_t eax_20 = *(*(entry_ebx[5] + (eax_18 << 2)) + (i_1 << 2))
                                        
                                        if (eax_20 != 0)
                                            int32_t eax_23 = arg5(arg1, 
                                                *(eax_13 + esi_4) + (eax_11 << 2), esi, eax_20, 0)
                                            entry_ebx[8] += eax_23
                                            edx_8 = var_2c_1
                                            int32_t __saved_ebp
                                            void* ecx_13 =
                                                &(&__saved_ebp)[*(*esi_4 + (edi_1 << 2)) - 0x10c]
                                            *ecx_13 += eax_23
                                    
                                    esi_4 = &esi_4[1]
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                esi_3 = var_24_1
                            
                            esi_3 += esi
                            eax_25 = var_c_2 + 1
                            edi_1 += 1
                            var_c_2 = eax_25
                            var_24_1 = esi_3
                        while (eax_25 s< eax_1)
                while (edi_1 s< temp0)
            
        label_65ab5a:
            i = i_1 + 1
            i_1 = i
        while (i s< entry_ebx[2])
    
    return 0
}

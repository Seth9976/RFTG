// 函数名称: sub_65b030
// 虚拟地址: 0x65b030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t**sub_65b030(void* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    int32_t eax = 0
    
    if (arg5 s> 0)
        do
            if (*(arg4 + (eax << 2)) != 0)
                edx += 1
            
            eax += 1
        while (eax s< arg5)
        
        if (edx != 0)
            int32_t* ecx_1 = *arg2
            int32_t esi_2 = ecx_1[2]
            int32_t temp0 = divs.dp.d(sx.q(ecx_1[1] - *ecx_1), esi_2)
            int32_t ebx = ecx_1[3]
            int128_t** result = sub_649ad0(arg1, 4)
            int32_t esi_5 = temp0 * 4
            int128_t* eax_6 = sub_649ad0(arg1, esi_5)
            *result = eax_6
            sub_5abfc0(eax_6, 0, esi_5)
            int32_t edi_1 = arg5
            int32_t var_1c = 0
            int32_t esi_6 = divs.dp.d(sx.q(*ecx_1), edi_1)
            
            if (temp0 s> 0)
                int32_t ecx_9
                
                do
                    int32_t ebx_2 = 0
                    arg5 = 0
                    int32_t var_c_1 = 0
                    
                    if (esi_2 s> 0)
                        ebx_2 = 0
                        int32_t eax_21
                        
                        do
                            int32_t eax_12
                            int32_t edx_7
                            edx_7:eax_12 = sx.q(*(*arg3 + (esi_6 << 2)))
                            int32_t eax_14 = (eax_12 ^ edx_7) - edx_7
                            
                            if (eax_14 s> arg5)
                                arg5 = eax_14
                            
                            int32_t ecx_4 = 1
                            
                            if (edi_1 s> 1)
                                do
                                    int32_t eax_17
                                    int32_t edx_9
                                    edx_9:eax_17 = sx.q(*(arg3[ecx_4] + (esi_6 << 2)))
                                    int32_t eax_19 = (eax_17 ^ edx_9) - edx_9
                                    
                                    if (eax_19 s> ebx_2)
                                        ebx_2 = eax_19
                                    
                                    ecx_4 += 1
                                while (ecx_4 s< edi_1)
                            
                            eax_21 = var_c_1 + edi_1
                            esi_6 += 1
                            var_c_1 = eax_21
                        while (eax_21 s< esi_2)
                    
                    int32_t eax_22 = 0
                    
                    if (ebx - 1 s> 0)
                        void* ecx_6 = &ecx_1[0x286]
                        
                        while (arg5 s> *(ecx_6 - 0x100) || ebx_2 s> *ecx_6)
                            eax_22 += 1
                            ecx_6 += 4
                            
                            if (eax_22 s>= ebx - 1)
                                break
                    
                    *(*result + (var_1c << 2)) = eax_22
                    ecx_9 = var_1c + 1
                    var_1c = ecx_9
                while (ecx_9 s< temp0)
            
            arg2[0xa] += 1
            return result
    
    return 0
}

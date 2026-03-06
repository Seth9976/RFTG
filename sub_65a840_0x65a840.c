// 函数名称: sub_65a840
// 虚拟地址: 0x65a840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t** __convention("regparm")sub_65a840(void* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ecx = *arg2
    int32_t* ecx = *arg2
    int32_t esi = ecx[2]
    int32_t temp0 = divs.dp.d(sx.q(ecx[1] - *ecx), esi)
    int32_t ebx = ecx[3]
    int128_t** result = sub_649ad0(arg1, 4)
    int32_t esi_3 = temp0 * 4
    int128_t* eax_5 = sub_649ad0(arg1, esi_3)
    *result = eax_5
    sub_5abfc0(eax_5, 0, esi_3)
    int32_t edi_1 = arg4
    int32_t var_1c = 0
    int32_t esi_4 = divs.dp.d(sx.q(*ecx), edi_1)
    
    if (temp0 s> 0)
        int32_t ecx_8
        
        do
            int32_t ebx_2 = 0
            arg4 = 0
            int32_t var_c_1 = 0
            
            if (esi s> 0)
                int32_t eax_20
                
                do
                    int32_t eax_11
                    int32_t edx_6
                    edx_6:eax_11 = sx.q(*(*arg3 + (esi_4 << 2)))
                    int32_t eax_13 = (eax_11 ^ edx_6) - edx_6
                    
                    if (eax_13 s> arg4)
                        arg4 = eax_13
                    
                    int32_t ecx_3 = 1
                    
                    if (edi_1 s> 1)
                        do
                            int32_t eax_16
                            int32_t edx_8
                            edx_8:eax_16 = sx.q(*(arg3[ecx_3] + (esi_4 << 2)))
                            int32_t eax_18 = (eax_16 ^ edx_8) - edx_8
                            
                            if (eax_18 s> ebx_2)
                                ebx_2 = eax_18
                            
                            ecx_3 += 1
                        while (ecx_3 s< edi_1)
                    
                    eax_20 = var_c_1 + edi_1
                    esi_4 += 1
                    var_c_1 = eax_20
                while (eax_20 s< esi)
            
            int32_t eax_21 = 0
            
            if (ebx - 1 s> 0)
                void* ecx_5 = &ecx[0x286]
                
                while (arg4 s> *(ecx_5 - 0x100) || ebx_2 s> *ecx_5)
                    eax_21 += 1
                    ecx_5 += 4
                    
                    if (eax_21 s>= ebx - 1)
                        break
            
            *(*result + (var_1c << 2)) = eax_21
            ecx_8 = var_1c + 1
            var_1c = ecx_8
        while (ecx_8 s< temp0)
    
    arg2[0xa] += 1
    return result
}

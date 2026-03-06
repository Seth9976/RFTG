// 函数名称: sub_65ab70
// 虚拟地址: 0x65ab70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65ab70(void* arg1, int32_t* arg2, int32_t arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* edx = *arg2
    int32_t* edx = *arg2
    int32_t esi = *arg2[4]
    int32_t ecx_1 = edx[1]
    int32_t edi = edx[2]
    int32_t eax_3 = *(arg1 + 0x24) s>> 1
    
    if (ecx_1 s< eax_3)
        eax_3 = ecx_1
    
    int32_t eax_4 = eax_3 - *edx
    
    if (eax_4 s> 0)
        int32_t temp0_1 = divs.dp.d(sx.q(eax_4), edi)
        __alloca_probe_16(arg4 * 4)
        int32_t edi_1 = 0
        int32_t __saved_edi
        int32_t* esi_1 = &__saved_edi
        int32_t* var_28_1 = &__saved_edi
        
        if (arg4 s> 0)
            do
                (&__saved_edi)[edi_1] = sub_649ad0(arg1, divs.dp.d(sx.q(temp0_1 + esi - 1), esi) * 4)
                edi_1 += 1
            while (edi_1 s< arg4)
        
        int32_t i = 0
        int32_t i_1 = 0
        
        if (arg2[2] s> 0)
            do
                int32_t ebx_4 = 0
                int32_t var_2c_1 = 0
                
                if (temp0_1 s> 0)
                    int32_t* var_8_1 = nullptr
                    
                    do
                        if (i == 0)
                            int32_t edi_2 = 0
                            
                            if (arg4 s> 0)
                                do
                                    int32_t eax_17 = sub_6512a0(arg2[4], arg1 + 4)
                                    
                                    if (eax_17 == 0xffffffff)
                                        return 0
                                    
                                    if (eax_17 s>= edx[4])
                                        return 0
                                    
                                    int32_t eax_18 = *(arg2[7] + (eax_17 << 2))
                                    *(var_8_1 + esi_1[edi_2]) = eax_18
                                    
                                    if (eax_18 == 0)
                                        return 0
                                    
                                    edi_2 += 1
                                while (edi_2 s< arg4)
                                
                                i = i_1
                        
                        int32_t var_14_1 = 0
                        
                        if (esi s> 0)
                            int32_t var_1c_1 = ebx_4 * edi
                            
                            while (ebx_4 s< temp0_1)
                                int32_t var_24_1 = 0
                                
                                if (arg4 s> 0)
                                    int32_t eax_26
                                    
                                    do
                                        int32_t ecx_9 = *(*(var_8_1 + *esi_1) + (var_14_1 << 2))
                                        
                                        if ((edx[ecx_9 + 6] & 1 << i.b) != 0)
                                            int32_t ecx_11 = *(*(arg2[5] + (ecx_9 << 2)) + (i_1 << 2))
                                            
                                            if (ecx_11 != 0 && arg5(ecx_11, 
                                                    *(arg3 - var_28_1 + esi_1)
                                                        + ((*edx + var_1c_1) << 2), 
                                                    arg1 + 4, edi) == 0xffffffff)
                                                return 0
                                        
                                        eax_26 = var_24_1 + 1
                                        esi_1 = &esi_1[1]
                                        var_24_1 = eax_26
                                    while (eax_26 s< arg4)
                                    esi_1 = var_28_1
                                    ebx_4 = var_2c_1
                                    i = i_1
                                
                                var_1c_1 += edi
                                int32_t eax_28 = var_14_1 + 1
                                ebx_4 += 1
                                var_14_1 = eax_28
                                var_2c_1 = ebx_4
                                
                                if (eax_28 s>= esi)
                                    break
                        
                        var_8_1 = &var_8_1[1]
                    while (ebx_4 s< temp0_1)
                
                i += 1
                i_1 = i
            while (i s< arg2[2])
    
    return 0
}

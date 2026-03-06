// 函数名称: sub_65b270
// 虚拟地址: 0x65b270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65b270(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* esi = arg2
    int32_t* esi = arg2
    int32_t* ebx = *esi
    int32_t eax = ebx[2]
    int32_t edx = *esi[4]
    int32_t ecx_1 = ebx[1]
    int32_t eax_4 = (*(arg1 + 0x24) * arg5) s>> 1
    
    if (ecx_1 s< eax_4)
        eax_4 = ecx_1
    
    int32_t eax_5 = eax_4 - *ebx
    
    if (eax_5 s> 0)
        int32_t temp0_1 = divs.dp.d(sx.q(eax_5), eax)
        int32_t* eax_13 = sub_649ad0(arg1, divs.dp.d(sx.q(temp0_1 + edx - 1), edx) * 4)
        int32_t eax_14 = 0
        
        if (arg5 s> 0)
            while (*(arg4 + (eax_14 << 2)) == 0)
                eax_14 += 1
                
                if (eax_14 s>= arg5)
                    break
        
        if (eax_14 != arg5)
            int32_t i_1 = 0
            
            if (esi[2] s> 0)
                int32_t i
                
                do
                    int32_t var_8_1 = 0
                    
                    if (temp0_1 s> 0)
                        int32_t* var_14_1 = eax_13
                        
                        do
                            if (i_1 == 0)
                                int32_t eax_17 = sub_6512a0(esi[4], arg1 + 4)
                                
                                if (eax_17 == 0xffffffff)
                                    return 0
                                
                                if (eax_17 s>= ebx[4])
                                    return 0
                                
                                int32_t eax_18 = *(esi[7] + (eax_17 << 2))
                                *var_14_1 = eax_18
                                
                                if (eax_18 == 0)
                                    return 0
                            
                            int32_t edi_1 = 0
                            
                            if (edx s> 0)
                                int32_t esi_2 = var_8_1 * eax
                                
                                while (var_8_1 s< temp0_1)
                                    int32_t eax_20 = *(*var_14_1 + (edi_1 << 2))
                                    
                                    if ((ebx[eax_20 + 6] & 1 << i_1.b) != 0)
                                        int32_t* eax_22 = *(*(arg2[5] + (eax_20 << 2)) + (i_1 << 2))
                                        
                                        if (eax_22 != 0 && sub_651960(eax_22, arg3, *ebx + esi_2, arg5, 
                                                arg1 + 4, eax) == 0xffffffff)
                                            return 0
                                    
                                    var_8_1 += 1
                                    esi_2 += eax
                                    edi_1 += 1
                                    
                                    if (edi_1 s>= edx)
                                        break
                                
                                esi = arg2
                            
                            var_14_1 = &var_14_1[1]
                        while (var_8_1 s< temp0_1)
                    
                    i = i_1 + 1
                    i_1 = i
                while (i s< esi[2])
    
    return 0
}

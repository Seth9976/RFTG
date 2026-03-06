// 函数名称: sub_62ca10
// 虚拟地址: 0x62ca10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int16_t* __convention("regparm")sub_62ca10(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax = arg2[6]
    int32_t eax = arg2[6]
    int16_t* ecx = *arg2
    int32_t i = arg2[7]
    int32_t esi = arg3
    int16_t* result = arg2[5]
    int32_t edx_1 = arg2[9] s>> 1
    
    if (i != 0)
        int32_t edi_2 = (arg2[4] s>> 1) * 2
        
        do
            if (((result.b ^ ecx.b) & 2) == 0)
                int32_t ebx_27 = eax
                
                if ((ecx.b & 2) != 0)
                    uint32_t edi_28 = zx.d(esi.w)
                    *result = (((zx.d(*ecx) & edi_28) + (zx.d(*result) & edi_28)) s>> 1).w
                        + ((not.d(esi)).w & *ecx & *result)
                    ecx = &ecx[1]
                    result = &result[1]
                    ebx_27 = eax - 1
                
                if (ebx_27 s> 1)
                    uint32_t edi_33 = zx.d(esi.w)
                    uint32_t edx_22 = edi_33 << 0xf | edi_33 u>> 1
                    int32_t var_18_3 = ((ebx_27 - 2) u>> 1) + 1
                    uint32_t esi_9 = not.d(edi_33 << 0x10 | edi_33)
                    uint32_t var_10_2 = esi_9
                    
                    while (true)
                        *result =
                            (*result u>> 1 & edx_22) + (*ecx u>> 1 & edx_22) + (esi_9 & *result & *ecx)
                        ecx = &ecx[2]
                        result = &result[2]
                        int32_t temp0_1 = var_18_3
                        var_18_3 -= 1
                        
                        if (temp0_1 == 1)
                            break
                        
                        esi_9 = var_10_2
                    
                    esi = arg3
                    ebx_27 += neg.d(((ebx_27 - 2) u>> 1) + 1) << 1
                
                if (ebx_27 != 0)
                    uint32_t edi_42 = zx.d(esi.w)
                    *result = (((zx.d(*ecx) & edi_42) + (zx.d(*result) & edi_42)) s>> 1).w
                        + ((not.d(esi)).w & *ecx & *result)
                    ecx = &ecx[1]
                    result = &result[1]
                
                ecx = &ecx[arg2[4] s>> 1]
            else
                int32_t edi_3 = eax
                int32_t var_8_1 = edi_3
                
                if ((result.b & 2) != 0)
                    uint32_t edi_4 = zx.d(esi.w)
                    *result = (((zx.d(*ecx) & edi_4) + (zx.d(*result) & edi_4)) s>> 1).w
                        + ((not.d(esi)).w & *ecx & *result)
                    result = &result[1]
                    ecx = &ecx[1]
                    edi_3 = eax - 1
                    var_8_1 = edi_3
                
                int32_t edx_9 = *(ecx - 2)
                void* ecx_1 = &ecx[1]
                
                if (edi_3 s> 1)
                    uint32_t edi_10 = zx.d(esi.w)
                    uint32_t esi_3 = edi_10 << 0xf | edi_10 u>> 1
                    int32_t j_1 = ((var_8_1 - 2) u>> 1) + 1
                    int32_t j
                    
                    do
                        int32_t edi_16 = *ecx_1
                        int32_t edx_11 = (edx_9 u>> 0x10) + (edi_16 << 0x10)
                        edx_9 = edi_16
                        *result = (edx_11 u>> 1 & esi_3) + (*result u>> 1 & esi_3)
                            + (not.d(edi_10 << 0x10 | edi_10) & edx_11 & *result)
                        result = &result[2]
                        ecx_1 += 4
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    edi_3 = var_8_1 + (neg.d(((var_8_1 - 2) u>> 1) + 1) << 1)
                    esi = arg3
                
                if (edi_3 != 0)
                    uint16_t edx_12 = (edx_9 u>> 0x10).w
                    uint32_t edx_13 = zx.d(esi.w)
                    *result = (((zx.d(edx_12) & edx_13) + (zx.d(*result) & edx_13)) s>> 1).w
                        + ((not.d(esi)).w & edx_12 & *result)
                    ecx_1 += 2
                    result = &result[1]
                
                ecx = ecx_1 + edi_2 - 2
            
            i -= 1
            result = &result[edx_1]
        while (i != 0)
    
    return result
}

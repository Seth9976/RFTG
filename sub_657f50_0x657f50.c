// 函数名称: sub_657f50
// 虚拟地址: 0x657f50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_657f50(int32_t arg1)
{
    // 第一条实际指令: int32_t* ecx = *(*(arg1 + 4) + 0x1c)
    int32_t* ecx = *(*(arg1 + 4) + 0x1c)
    int32_t* esi = **(arg1 + 0x68)
    int32_t ecx_1 = esi[2]
    int32_t edi = divs.dp.d(sx.q(esi[0x2a]), ecx_1)
    int32_t ebx_1 = divs.dp.d(sx.q(*(arg1 + 0x14)), ecx_1) - 4
    int32_t var_14 = ebx_1
    
    if (edi s< 0)
        edi = 0
    
    if (ebx_1 + 6 s> esi[0x29])
        int32_t ecx_2 = esi[0x28]
        esi[0x29] = ebx_1 + 6
        esi[0x28] = _realloc(ecx_2, (ebx_1 + 6) * 4)
    
    int32_t eax_11 = edi
    int32_t var_c = edi
    
    if (edi s< ebx_1)
        do
            esi[0x27] += 1
            char ecx_3 = 0
            int32_t var_8_1 = 0
            
            if (esi[0x27] s> 0x18)
                esi[0x27] = 0x18
            
            int32_t i = 0
            
            if (*esi s> 0)
                int32_t ebx_2 = 0
                
                do
                    void* edx_6 = esi[2] * eax_11
                    int32_t var_24_2 = esi[0x26] + ebx_2
                    void* var_28_2 = &esi[0xa]
                    int32_t eax_17 = sub_657960(esi, &ecx[0x2cd], edx_6, &esi[0xa], 
                        *(*(arg1 + 8) + (i << 2)) + (edx_6 << 2))
                    int16_t top = top - 1
                    unimplemented  {call 0x657960}
                    var_8_1 |= eax_17
                    eax_11 = var_c
                    i += 1
                    ebx_2 += 0x3f0
                while (i s< *esi)
                
                ecx_3 = var_8_1.b
                ebx_1 = var_14
            
            *(esi[0x28] + (eax_11 << 2) + 8) = 0
            
            if ((ecx_3 & 1) != 0)
                *(esi[0x28] + (eax_11 << 2)) = 1
                *(esi[0x28] + (eax_11 << 2) + 4) = 1
            
            if ((ecx_3 & 2) != 0)
                *(esi[0x28] + (eax_11 << 2)) = 1
                
                if (eax_11 s> 0)
                    *(esi[0x28] + (eax_11 << 2) - 4) = 1
            
            if ((ecx_3 & 4) != 0)
                esi[0x27] = 0xffffffff
            
            eax_11 += 1
            var_c = eax_11
        while (eax_11 s< ebx_1)
    
    int32_t ecx_10 = esi[2] * ebx_1
    esi[0x2a] = ecx_10
    int32_t edi_6 = *(arg1 + 0x30)
    int32_t eax_20
    int32_t edx_8
    edx_8:eax_20 = sx.q(ecx[*(arg1 + 0x28)])
    int32_t eax_24
    int32_t edx_10
    edx_10:eax_24 = sx.q(ecx[1])
    int32_t eax_29
    int32_t edx_12
    edx_12:eax_29 = sx.q(*ecx)
    int32_t i_1 = esi[0x2c]
    
    if (i_1 s< ecx_10 - esi[2])
        int32_t ecx_12
        
        do
            if (i_1 s>= (((edx_12 & 3) + eax_29) s>> 2) + ((eax_24 - edx_10) s>> 1) + edi_6
                    + ((eax_20 + (edx_8 & 3)) s>> 2))
                return 1
            
            ecx_12 = esi[2]
            int32_t edx_17 = esi[0x28]
            esi[0x2c] = i_1
            
            if (*(edx_17 + (divs.dp.d(sx.q(i_1), ecx_12) << 2)) != 0 && i_1 s> edi_6)
                esi[0x2b] = i_1
                return 0
            
            i_1 += ecx_12
        while (i_1 s< esi[0x2a] - ecx_12)
    
    return 0xffffffff
}

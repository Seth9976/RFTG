// 函数名称: sub_645780
// 虚拟地址: 0x645780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_645780(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t ecx = 0
    int32_t ebx = 0
    
    if (esi == 0 || *esi == 0)
        return 0xffffffff
    
    void* eax_1 = arg2
    
    if (eax_1 == 0)
        return 0
    
    int32_t edx = arg3
    int32_t edi = 0
    arg1 = nullptr
    
    if (edx s>= 2)
        void* eax_3 = eax_1 + 0xc
        void* i_1 = ((edx - 2) u>> 1) + 1
        arg1 = i_1 * 2
        ecx = 0
        edi = 0
        void* i
        
        do
            edi += *(eax_3 - 8)
            ecx += *eax_3
            eax_3 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
        edx = arg3
        eax_1 = arg2
    
    if (arg1 s< edx)
        ebx = *(eax_1 + (arg1 << 3) + 4)
    
    int32_t ebx_1 = ebx + ecx + edi
    int32_t edi_3 = ebx_1 s/ 0xff
    void* eax_6 = esi[3]
    
    if (eax_6 != 0)
        int32_t temp1_1 = esi[2]
        esi[2] -= eax_6
        
        if (temp1_1 != eax_6)
            int128_t* ecx_4 = *esi
            sub_5a6c10(ecx_4, eax_6 + ecx_4, esi[2])
        
        esi[3] = 0
    
    int32_t eax_8 = esi[1]
    
    if (eax_8 s> esi[2] + ebx_1)
        goto label_645876
    
    int32_t eax_10 = _realloc(*esi, eax_8 + ebx_1 + 0x400)
    
    if (eax_10 != 0)
        esi[1] += ebx_1 + 0x400
        *esi = eax_10
    label_645876:
        
        if (sub_645670(edi_3 + 1, esi) == 0)
            if (arg3 s> 0)
                int32_t* eax_15 = arg2 + 4
                int32_t* var_8_1 = eax_15
                int32_t var_c_1 = arg3
                
                while (true)
                    sub_5ab990(*esi + esi[2], eax_15[-1], *eax_15)
                    esi[2] += *var_8_1
                    int32_t temp3_1 = var_c_1
                    var_c_1 -= 1
                    var_8_1 = &var_8_1[2]
                    
                    if (temp3_1 == 1)
                        break
                    
                    eax_15 = var_8_1
            
            int32_t eax_19 = 0
            
            if (edi_3 s> 0)
                do
                    *(esi[4] + ((esi[7] + eax_19) << 2)) = 0xff
                    int32_t edx_11 = esi[5]
                    int32_t ecx_16 = esi[7] + eax_19
                    *(edx_11 + (ecx_16 << 3)) = esi[0x58]
                    *(edx_11 + (ecx_16 << 3) + 4) = esi[0x59]
                    eax_19 += 1
                while (eax_19 s< edi_3)
            
            *(esi[4] + ((esi[7] + eax_19) << 2)) = ebx_1 s% 0xff
            int32_t ecx_22 = esi[7] + eax_19
            int32_t eax_20 = esi[5]
            *(eax_20 + (ecx_22 << 3)) = arg5
            *(eax_20 + (ecx_22 << 3) + 4) = arg6
            int32_t* eax_22 = esi[4] + (esi[7] << 2)
            esi[0x58] = arg5
            esi[0x59] = arg6
            *eax_22 |= 0x100
            esi[7] += edi_3 + 1
            int32_t temp2 = esi[0x56]
            esi[0x56] += 1
            esi[0x57] = adc.d(esi[0x57], 0, temp2 + 1 u< temp2)
            
            if (arg4 != 0)
                esi[0x52] = 1
            
            return 0
    else
        sub_645620(esi)
    
    return 0xffffffff
}

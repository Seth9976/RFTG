// 函数名称: sub_5c9350
// 虚拟地址: 0x5c9350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9350(int32_t* arg1)
{
    // 第一条实际指令: void* ebx = data_bed820
    void* ebx = data_bed820
    int32_t i_1 = 0xffffffff
    int32_t var_c = 0x7fffffff
    
    if (ebx == 0)
        sub_5c8d60()
        return 0xffffffff
    
    if (arg1 == 0 || *arg1 != ebx + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t ecx = arg1[4]
    int32_t eax_4 = ecx & 0xffff0000
    
    if (eax_4 == 0x1fff0000 || eax_4 == 0x2fff0000)
        int32_t ecx_7 = ecx & 0xffff
        
        if (ecx_7 s< *(ebx + 0xe8))
            return ecx_7
        
        return 0
    
    int32_t edi = arg1[5]
    int32_t eax_6 = edi & 0xffff0000
    
    if (eax_6 == 0x1fff0000 || eax_6 == 0x2fff0000)
        int32_t edi_1 = edi & 0xffff
        
        if (edi_1 s< *(ebx + 0xe8))
            return edi_1
        
        return 0
    
    int32_t edx = *(ebx + 0xe8)
    int32_t eax_7 = 0
    
    if (edx s> 0)
        int32_t* ecx_2 = *(ebx + 0xec) + 0x38
        
        do
            if (*ecx_2 == arg1)
                return eax_7
            
            eax_7 += 1
            ecx_2 = &ecx_2[0x11]
        while (eax_7 s< edx)
        
        ecx = arg1[4]
    
    int32_t eax_9
    int32_t edx_1
    edx_1:eax_9 = sx.q(arg1[6])
    int32_t var_14 = ((eax_9 - edx_1) s>> 1) + ecx
    int32_t eax_14
    int32_t edx_2
    edx_2:eax_14 = sx.q(arg1[7])
    int32_t i = 0
    
    if (*(ebx + 0xe8) s> 0)
        do
            int32_t var_24
            sub_5c8ee0(i, &var_24)
            
            if (sub_5d4ee0(&var_14, 1, &var_24, nullptr) != 0)
                return i
            
            int32_t var_1c
            int32_t eax_20
            int32_t edx_3
            edx_3:eax_20 = sx.q(var_1c)
            int32_t ecx_5 = var_14 - ((eax_20 - edx_3) s>> 1) - var_24
            int32_t var_18
            int32_t eax_24
            int32_t edx_4
            edx_4:eax_24 = sx.q(var_18)
            int32_t var_20
            int32_t eax_28 = ((eax_14 - edx_2) s>> 1) + edi - ((eax_24 - edx_4) s>> 1) - var_20
            int32_t eax_30 = eax_28 * eax_28 + ecx_5 * ecx_5
            
            if (eax_30 s< var_c)
                i_1 = i
                var_c = eax_30
            
            i += 1
        while (i s< *(data_bed820 + 0xe8))
    
    if (*(ebx + 0xe8) s<= 0 || i_1 s< 0)
        sub_5cce60("Couldn't find any displays")
    
    return i_1
}

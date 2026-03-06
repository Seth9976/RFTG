// 函数名称: sub_510f60
// 虚拟地址: 0x510f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_510f60(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* edi = arg1
    int32_t i = 0
    int32_t ecx_1 = 0
    
    if (edi[1] s<= 0)
        return 
    
    long double x87_r7_1 = float.t(0)
    int32_t var_8_1 = 0
    
    do
        void* ebx_2 = *edi + var_8_1
        long double x87_r6_1 = fconvert.t(*(ebx_2 + 0x40))
        x87_r7_1 - x87_r6_1
        int32_t* eax
        eax.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        bool p_2
        
        if (not(p_1))
            long double x87_r6_2 = fconvert.t(*(ebx_2 + 0x44))
            x87_r7_1 - x87_r6_2
            eax.w = (x87_r7_1 < x87_r6_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_1, x87_r6_2) ? 1 : 0) << 0xa
                | (x87_r7_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
            p_2 = unimplemented  {test ah, 0x44}
        
        if (p_1 || p_2)
            eax = (ecx_1 << 4) + arg2
            ecx_1 += 1
            *eax = 2
            eax[1] = i
            eax[3] = 4
        
        long double x87_r6_3 = fconvert.t(*(ebx_2 + 0x34))
        x87_r7_1 - x87_r6_3
        eax.w = (x87_r7_1 < x87_r6_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, x87_r6_3) ? 1 : 0) << 0xa
            | (x87_r7_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            int32_t* eax_5 = (ecx_1 << 4) + arg2
            ecx_1 += 1
            *eax_5 = 2
            eax_5[1] = i
            eax_5[3] = 5
        
        int32_t j = 0
        
        if (*(ebx_2 + 0x1c) s> 0)
            int32_t* edi_3 = (ecx_1 << 4) + arg2
            
            do
                int32_t* eax_6 = edi_3
                eax_6[2] = j
                j += 1
                ecx_1 += 1
                edi_3 = &edi_3[4]
                *eax_6 = 1
                eax_6[1] = i
            while (j s< *(ebx_2 + 0x1c))
            
            edi = arg1
        
        var_8_1 += 0x48
        eax = (ecx_1 << 4) + arg2
        ecx_1 += 1
        eax[1] = i
        i += 1
        *eax = 0
    while (i s< edi[1])
}

// 函数名称: sub_649f30
// 虚拟地址: 0x649f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_649f30(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    __alloca_probe_16(0x40)
    int32_t ebx = *(arg1 + 0x14)
    int32_t __saved_edi
    int32_t* var_8_1 = &__saved_edi
    __alloca_probe_16(ebx << 2)
    int32_t ebx_1 = ebx - *(arg1 + 0x30)
    *(arg1 + 0x1c) = 1
    
    if (ebx_1 s<= 0x20)
        return 
    
    int32_t i = 0
    
    if (*(*(arg1 + 4) + 4) s<= 0)
        return 
    
    do
        int32_t j = 0
        float var_14
        
        if (*(arg1 + 0x14) s> 0)
            do
                long double x87_r7_1 =
                    fconvert.t(*(*(*(arg1 + 8) + (i << 2)) + ((*(arg1 + 0x14) - j) << 2) - 4))
                j += 1
                (&var_14)[j] = fconvert.s(x87_r7_1)
            while (j s< *(arg1 + 0x14))
        
        int32_t eax_3 = *(arg1 + 0x14) - *(arg1 + 0x30)
        var_14 = 2.24207754e-44f
        sub_658270(&__saved_edi, var_8_1, eax_3, var_14)
        void* ecx_4 = *(arg1 + 0x30)
        void* eax_5 = *(arg1 + 0x14) - ecx_4
        sub_6585e0(var_8_1, &(&__saved_edi)[eax_5 - 0x10], 2.24207754e-44f, &(&__saved_edi)[eax_5], 
            ecx_4)
        int32_t j_1 = 0
        
        if (*(arg1 + 0x14) s> 0)
            do
                long double x87_r7_3 = fconvert.t((&__saved_edi)[j_1])
                int32_t edx_5 = *(arg1 + 0x14) - j_1
                j_1 += 1
                *(*(*(arg1 + 8) + (i << 2)) + (edx_5 << 2) - 4) = fconvert.s(x87_r7_3)
            while (j_1 s< *(arg1 + 0x14))
        
        i += 1
    while (i s< *(*(arg1 + 4) + 4))
}

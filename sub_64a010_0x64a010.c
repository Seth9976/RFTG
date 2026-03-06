// 函数名称: sub_64a010
// 虚拟地址: 0x64a010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_64a010(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = *(arg1 + 4)
    void* edi = *(eax + 0x1c)
    
    if (arg2 s> 0)
        int32_t eax_13 = arg2 + *(arg1 + 0x14)
        
        if (eax_13 s> *(arg1 + 0x10))
            return 
        
        bool cond:1_1 = *(arg1 + 0x1c) != 0
        *(arg1 + 0x14) = eax_13
        
        if (not(cond:1_1) && eax_13 - *(arg1 + 0x30) s> *(edi + 4))
            sub_649f30(arg1)
        
        return 
    
    __alloca_probe_16(0x80)
    
    if (*(arg1 + 0x1c) == 0)
        sub_649f30(arg1)
    
    sub_649e70(arg1, *(edi + 4) * 3)
    int32_t eax_4 = *(arg1 + 0x14)
    *(arg1 + 0x20) = eax_4
    int32_t i = 0
    *(arg1 + 0x14) = *(edi + 4) * 3 + eax_4
    
    if (*(eax + 4) s<= 0)
        return 
    
    do
        int32_t eax_6 = *(arg1 + 0x20)
        
        if (eax_6 s<= 0x40)
            sub_5abfc0(*(*(arg1 + 8) + (i << 2)) + (eax_6 << 2), 0, (*(arg1 + 0x14) - eax_6) * 4)
        else
            int32_t edx_4 = *(edi + 4)
            int32_t ecx_2 = eax_6
            
            if (ecx_2 s> edx_4)
                ecx_2 = edx_4
            
            int32_t __saved_edi
            sub_658270(*(*(arg1 + 8) + (i << 2)) + ((eax_6 - ecx_2) << 2), &__saved_edi, ecx_2, 
                4.48415509e-44f)
            int32_t eax_9 = *(arg1 + 0x20)
            int32_t ecx_5 = *(*(arg1 + 8) + (i << 2))
            sub_6585e0(&__saved_edi, ecx_5 + (eax_9 << 2) - 0x80, 4.48415509e-44f, 
                ecx_5 + (eax_9 << 2), *(arg1 + 0x14) - eax_9)
        
        i += 1
    while (i s< *(eax + 4))
}

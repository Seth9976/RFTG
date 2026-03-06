// 函数名称: sub_607f90
// 虚拟地址: 0x607f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_607f90(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t* eax = sub_607d00(esi)
    
    if (eax == 0)
        return 
    
    __alloca_probe_16(arg3 << 3)
    int32_t __saved_edi
    
    if (&__saved_edi == 0)
        sub_5cd050(&__saved_edi)
        return 
    
    int32_t ecx = *(esi + 0xd4)
    int32_t __saved_esi
    
    if (ecx != 0 || *(esi + 0xd8) != ecx)
        int32_t ebx_1 = 0
        
        if (arg3 s> 0)
            int32_t* esi_2 = &__saved_esi
            long double x87_r6_1 = fconvert.t(fconvert.s(float.t(*(esi + 0xd8))))
            
            do
                esi_2[-1] = sub_685f40(fconvert.t(*(arg2 + (ebx_1 << 3)))
                    + fconvert.t(fconvert.s(float.t(ecx))))
                *esi_2 = sub_685f40(fconvert.t(*(esi_2 + arg2 - &__saved_edi)) + x87_r6_1)
                ebx_1 += 1
                esi_2 = &esi_2[2]
            while (ebx_1 s< arg3)
            
            esi = arg1
    else
        int32_t ebx = 0
        
        if (arg3 s> 0)
            int32_t* esi_1 = &__saved_esi
            
            do
                esi_1[-1] = sub_685f40(fconvert.t(*(arg2 + (ebx << 3))))
                *esi_1 = sub_685f40(fconvert.t(*(arg2 - &__saved_edi + esi_1)))
                ebx += 1
                esi_1 = &esi_1[2]
            while (ebx s< arg3)
            
            esi = arg1
    char edx_2 = *(esi + 0x12f)
    void* ecx_7 = *(esi + 0x130)
    
    if (ecx_7 != 0)
        sub_63e7d0(eax, &__saved_edi, arg3, ecx_7, *(esi + 0x12c), *(esi + 0x12d), *(esi + 0x12e), 
            edx_2)
        return 
    
    sub_63f480(eax, &__saved_edi, arg3, 
        sub_5d7e30(eax[1], *(esi + 0x12c), *(esi + 0x12d), *(esi + 0x12e), edx_2))
}

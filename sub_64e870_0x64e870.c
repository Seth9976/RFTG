// 函数名称: sub_64e870
// 虚拟地址: 0x64e870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_64e870(float arg1, int32_t arg2, void* arg3, float arg4, float arg5)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t esi = edi[0xa]
    int32_t ebx = *edi
    __alloca_probe_16(esi << 2)
    int32_t i = 0
    arg1 = fconvert.s(fconvert.t(*(edi[1] + 4)) + fconvert.t(arg5))
    int32_t __saved_edi
    
    if (esi s> 0)
        do
            (&__saved_edi)[i] = fconvert.s(fconvert.t(-9999f))
            i += 1
        while (i s< edi[0xa])
    
    void* edx = edi[1]
    long double x87_r7_3 = fconvert.t(arg1)
    long double x87_r6 = fconvert.t(*(edx + 8))
    x87_r6 - x87_r7_3
    i.w = (x87_r6 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800
    
    if ((i:1.b & 0x41) == 0)
        x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(*(edx + 8))))
    
    int32_t esi_1 = 0
    void* ebx_1 = arg3
    
    if (ebx s>= 4)
        float edx_1 = 0xfffffff8 - ebx_1
        int32_t ecx_5 = ((ebx - 4) u>> 2) + 1
        arg1 = 1.12103877e-44f
        void* eax_2 = ebx_1 + 8
        arg5 = edx_1
        esi_1 = ecx_5 << 2
        
        while (true)
            void* edx_2 = edx_1 i+ eax_2
            *(eax_2 - 8) = fconvert.s(fconvert.t(*(edx_2 + edi[4])) + x87_r7_3)
            float ebx_4 = arg1
            arg1 += 0x10
            *(eax_2 - 4) = fconvert.s(fconvert.t(*(edx_2 + edi[4] + 4)) + x87_r7_3)
            float* edx_5 = 4 - ebx_1 + eax_2
            eax_2 += 0x10
            int32_t temp0_1 = ecx_5
            ecx_5 -= 1
            *(eax_2 - 0x10) = fconvert.s(fconvert.t(*(ebx_4 i+ edi[4])) + x87_r7_3)
            *(eax_2 - 0xc) = fconvert.s(fconvert.t(*(edx_5 + edi[4])) + x87_r7_3)
            
            if (temp0_1 == 1)
                break
            
            edx_1 = arg5
        
        ebx_1 = arg3
    
    while (esi_1 s< ebx)
        long double x87_r6_9 = fconvert.t(*(edi[4] + (esi_1 << 2)))
        esi_1 += 1
        *(ebx_1 + (esi_1 << 2) - 4) = fconvert.s(x87_r6_9 + x87_r7_3)
    
    int32_t* var_20 = &__saved_edi
    int80_t result = sub_64d5e0(edi, edi[2], arg2, ebx_1, &__saved_edi, fconvert.s(fconvert.t(arg4)))
    sub_64da00(edi, &__saved_edi, ebx_1)
    return result
}

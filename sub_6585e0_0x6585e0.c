// 函数名称: sub_6585e0
// 虚拟地址: 0x6585e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6585e0(int32_t arg1, int32_t arg2, float arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: float ebx = arg3
    float ebx = arg3
    __alloca_probe_16((arg5 i+ ebx) * 4)
    int32_t __saved_edi
    
    if (arg2 != 0)
        if (ebx s> 0)
            __builtin_memcpy(&__saved_edi, arg2, ebx << 2)
    else if (ebx s> 0)
        __builtin_memset(&__saved_edi, 0, ebx << 2)
    
    int32_t edx = 0
    arg2 = 0
    
    if (arg5 s<= 0)
        return 
    
    int32_t __saved_ebx
    int32_t* ecx_3 = &__saved_ebx
    int32_t* var_c_1 = &__saved_ebx
    
    do
        int32_t esi_1 = 0
        arg3 = fconvert.s(float.t(0))
        int32_t eax_4 = edx
        float edi_1 = ebx
        
        if (ebx s>= 4)
            int32_t i_2 = ((ebx - 4) u>> 2) + 1
            esi_1 = i_2 << 2
            void* edx_2 = arg1 + (ebx << 2) - 8
            edi_1 = ebx i- esi_1
            int32_t i
            
            do
                ecx_3 = &ecx_3[4]
                long double x87_r5_1 = fconvert.t(*(edx_2 + 4))
                edx_2 -= 0x10
                i = i_2
                i_2 -= 1
                long double x87_r6_6 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(fconvert.t(arg3) - x87_r5_1 * fconvert.t(ecx_3[-6])))
                    - fconvert.t(ecx_3[-5]) * fconvert.t(*(edx_2 + 0x10))))
                    - fconvert.t(*(edx_2 + 0xc)) * fconvert.t(ecx_3[-4])
                arg3 = fconvert.s(fconvert.t(fconvert.s(x87_r6_6))
                    - fconvert.t(*(edx_2 + 8)) * fconvert.t(ecx_3[-3]))
            while (i != 1)
            eax_4 = arg2 + esi_1
            edx = arg2
        
        if (esi_1 s< ebx)
            float* edi_5 = arg1 + (edi_1 << 2)
            int32_t i_3 = ebx i- esi_1
            int32_t i_1
            
            do
                edi_5 -= 4
                long double x87_r5_10 = fconvert.t((&__saved_edi)[eax_4]) * fconvert.t(*edi_5)
                eax_4 += 1
                i_1 = i_3
                i_3 -= 1
                arg3 = fconvert.s(fconvert.t(arg3) - x87_r5_10)
            while (i_1 != 1)
        
        long double x87_r6_11 = fconvert.t(arg3)
        (&__saved_edi)[eax_4] = fconvert.s(x87_r6_11)
        *(arg4 + (edx << 2)) = fconvert.s(x87_r6_11)
        edx += 1
        ecx_3 = &var_c_1[1]
        arg2 = edx
        var_c_1 = ecx_3
    while (edx s< arg5)
}

// 函数名称: sub_496980
// 虚拟地址: 0x496980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_496980(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t* arg5, char* arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t* arg10, int32_t* arg11, int32_t* arg12)
{
    // 第一条实际指令: int32_t ecx = __chkstk(0x2924)
    int32_t ecx = __chkstk(0x2924)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    int32_t ebx = 0
    int32_t edx_1 = 1
    int32_t var_52c[0x140]
    
    if (ecx s> 0)
        int32_t ecx_2 = 0
        
        do
            if ((arg1 & edx_1) != 0)
                var_52c[ebx] = *(arg2 + (ecx_2 << 2))
                ebx += 1
            
            ecx_2 += 1
            edx_1 = rol.d(edx_1, 1)
        while (ecx_2 s< ecx)
    
    int32_t ecx_3 = 0
    int32_t var_a4c[0x148]
    
    if (arg3 s>= 1)
        edx_1 = 1
        
        do
            if ((arg3 & edx_1) != 0)
                var_a4c[edi] = *(arg4 + (ecx_3 << 2))
                edi += 1
            
            ecx_3 += 1
            edx_1 = 1 << ecx_3.b
        while (edx_1 s<= arg3)
    
    char* var_14 = arg6
    void var_2914
    int128_t* esi_1 = &var_2914
    sub_48bb40(arg5, esi_1, edx_1.b)
    int32_t var_24a8[0x697]
    int32_t eax_11
    int32_t edx_6
    
    if (*(var_24a8[arg7 * 5] + 6) != 2)
        int32_t var_14_2 = arg9
        eax_11, edx_6 = sub_4a1d50(esi_1, &var_2914, arg6, arg7, edi, ebx, arg8)
    else
        int32_t var_14_1 = ebx
        eax_11, edx_6 = sub_49f3d0(arg6, &var_52c, arg7, &var_2914, arg6, &var_a4c, edi)
    
    int32_t entry_ebx
    
    if (eax_11 != 0)
        int32_t var_14_3 = 0
        long double st0_1 = sub_4904a0(sub_48bc70(&var_2914, edx_6), arg6.b, &var_2914, arg6)
        double* ecx_6 = *arg10
        long double x87_r6_2 = fconvert.t(*ecx_6) - fconvert.t(9.9999999999999995e-07)
        x87_r6_2 - st0_1
        int32_t* eax_16
        eax_16.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            *ecx_6 = fconvert.d(st0_1)
            **arg11 = arg3
            **arg12 = arg1
            sub_5a6aba(entry_ebx ^ &__saved_ebp)
            return 
    
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
}

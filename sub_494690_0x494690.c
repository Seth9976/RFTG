// 函数名称: sub_494690
// 虚拟地址: 0x494690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_494690(int32_t arg1 @ edi, int128_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t edx
    ecx, edx = __chkstk(0x23fc)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t edi = 0
    int32_t ecx_1 = 0
    int32_t var_2400 = edx
    int32_t var_530[0x147]
    int32_t entry_ebx
    
    if (entry_ebx s>= 1)
        edx = 1
        
        do
            if ((entry_ebx & edx) != 0)
                var_530[edi] = *(arg4 + (ecx_1 << 2))
                edi += 1
            
            ecx_1 += 1
            edx = 1 << ecx_1.b
        while (edx s<= entry_ebx)
    
    int32_t var_10 = arg3
    void var_23f8
    int32_t eax_4
    int32_t edx_3
    eax_4, edx_3 = sub_49dbf0(sub_48bb40(arg2, &var_23f8, edx.b), &var_530, &var_23f8, arg3, edi)
    char var_538
    
    if (var_538 == 1)
        int32_t var_10_2 = 0
        eax_4, edx_3 = sub_48bc70(&var_23f8, edx_3)
    
    int32_t result
    long double st0
    st0, result = sub_4904a0(eax_4, edx_3.b, &var_23f8, arg3)
    long double x87_r6_1 = fconvert.t(*var_2400) - fconvert.t(9.9999999999999995e-07)
    x87_r6_1 - st0
    result.w = (x87_r6_1 < st0 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, st0) ? 1 : 0) << 0xa
        | (x87_r6_1 == st0 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x41}
    
    if (p)
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return result
    
    *var_2400 = fconvert.d(st0)
    *ecx = entry_ebx
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}

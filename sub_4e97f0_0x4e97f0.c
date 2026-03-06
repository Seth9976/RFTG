// 函数名称: sub_4e97f0
// 虚拟地址: 0x4e97f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e97f0(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = fconvert.t(arg2[2])
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    int32_t eax_1
    eax_1.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        int32_t eax_3
        int80_t st0
        st0, eax_3 = sub_4e8f30(arg5, arg2, *arg2, arg4, arg3)
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return eax_3
    
    void var_5c
    int32_t edx
    int80_t st0_1
    st0_1, edx = sub_4e8f30(arg5, arg2, *arg2, arg4, &var_5c)
    void var_ac
    int16_t eax_6
    int80_t st0_2
    st0_2, eax_6 = sub_4e8f30(arg5, edx, arg2[1], arg4, &var_ac)
    int32_t var_64
    int32_t var_14
    int32_t* edi_1
    
    if (var_14 == 0 || var_64 == 0)
        edi_1 = arg3
    else
        int32_t ecx_6
        int80_t st0_3
        st0_3, eax_6, ecx_6 = sub_4e9480(&var_5c, &var_ac)
        
        if (eax_6.b == 0)
            int32_t var_c0_2 = ecx_6
            int32_t eax_8 = sub_4e9650(arg3, &var_ac, fconvert.s(fconvert.t(arg2[2])))
            sub_5a6aba(var_8 ^ &__saved_ebp)
            return eax_8
        
        long double x87_r7_1 = fconvert.t(0.5f)
        edi_1 = arg3
        long double temp0_1 = fconvert.t(arg2[2])
        x87_r7_1 - temp0_1
        eax_6 = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        
        if ((eax_6:1.b & 0x41) != 0)
            __builtin_memcpy(edi_1, &var_ac, 0x50)
            sub_5a6aba(var_8 ^ &__saved_ebp)
            return eax_6
    
    __builtin_memcpy(edi_1, &var_5c, 0x50)
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return eax_6
}

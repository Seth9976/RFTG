// 函数名称: sub_407120
// 虚拟地址: 0x407120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_407120(int32_t arg1, char* arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    data_307c588
    
    if (sub_4f65a0(&arg2[4], *arg2) == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    int32_t ebx_1 = *(arg2 + (*(arg2 + 0x10) << 2) + 8)
    void var_c8
    int32_t eax_6
    int80_t st0
    st0, eax_6 = sub_40a930(&var_c8)
    long double x87_r6 = fconvert.t(data_8c4d34)
    void var_50
    int32_t ecx_2
    int32_t esi_2
    esi_2, ecx_2 = __builtin_memcpy(&var_50, eax_6, 0x40)
    int32_t var_e8 = ecx_2
    void var_88
    int32_t* eax_8 = sub_4f8710(esi_2, &var_88, ebx_1, &var_50, arg4, arg3, fconvert.s(x87_r6), 
        nullptr, nullptr, nullptr)
    int32_t var_68 = eax_8[1]
    int32_t var_64 = eax_8[2]
    int32_t var_60 = eax_8[3]
    int32_t edx_5
    edx_5.b = *eax_8 != 3
    int32_t result = eax_8[4] & (edx_5 - 1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_417640
// 虚拟地址: 0x417640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_417640(int32_t arg1, int32_t arg2, char arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* entry_ebx
    char edx = *(entry_ebx + 8)
    data_307c4d8
    data_bf80cc = entry_ebx
    
    if (sub_4f65a0(entry_ebx + 0xc, edx) == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_4171c0(*(entry_ebx + 0x10))
    void var_b0
    int32_t eax_6
    int80_t st0
    st0, eax_6 = sub_40a930(&var_b0)
    long double x87_r6 = fconvert.t(data_8c4d34)
    void var_50
    int32_t ecx_2
    int32_t esi_2
    esi_2, ecx_2 = __builtin_memcpy(&var_50, eax_6, 0x40)
    int32_t var_c8 = ecx_2
    void var_70
    sub_4f8710(esi_2, &var_70, *(entry_ebx + 0x10), &var_50, arg4, arg3, fconvert.s(x87_r6), nullptr, 
        nullptr, nullptr)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 1
}

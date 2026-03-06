// 函数名称: sub_45fb20
// 虚拟地址: 0x45fb20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_45fb20(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = *(data_27e7a40 + 0x548)
    float var_94 = fconvert.s(fconvert.t(*(edx + (arg3 << 2) + 0xbfb4)))
    long double x87_r7_1 = float.t(0)
    long double temp0 = fconvert.t(var_94)
    x87_r7_1 - temp0
    void* eax_2
    eax_2.w = (x87_r7_1 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    float* eax_6
    void var_d8
    int80_t st0_2
    
    if (p)
        st0_2, eax_6 = sub_430df0(eax_2, &var_d8, arg3, &var_d8)
    else
        void var_50
        int32_t eax_4
        int80_t st0
        st0, eax_4 = sub_430df0(&var_50, edx, arg3, &var_50)
        float var_90[0x10]
        __builtin_memcpy(&var_90, eax_4, 0x40)
        int32_t eax_5
        int80_t st0_1
        st0_1, eax_5 = sub_430ed0(&var_d8)
        __builtin_memcpy(&var_50, eax_5, 0x40)
        eax_6 = sub_4238f0(&var_90, &var_50, fconvert.s(fconvert.t(var_94)))
    __builtin_memcpy(arg4, eax_6, 0x40)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}

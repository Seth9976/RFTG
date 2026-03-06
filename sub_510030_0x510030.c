// 函数名称: sub_510030
// 虚拟地址: 0x510030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_510030(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_2 = sub_510b30(arg3, arg2)
    int32_t eax_3
    int32_t edx
    eax_3, edx = sub_50c140(*eax_2)
    void var_60
    float var_34[0xa]
    __builtin_memcpy(&var_34, sub_50c2d0(&var_60, edx, arg3 * 0xb8 + *eax_3, &var_60, eax_2), 0x28)
    float var_88[0xa]
    __builtin_memcpy(arg4, sub_54cb80(&var_88, &var_34), 0x28)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}

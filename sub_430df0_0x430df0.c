// 函数名称: sub_430df0
// 虚拟地址: 0x430df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_430df0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2
    
    if (arg3 != 0xffffffff)
        eax_2 = *sub_46b2b0(arg3)
    else
        eax_2 = eax_1 | arg3
    
    int32_t var_5c = eax_2 - 1
    int32_t var_58 = 0
    void var_a0
    int32_t eax_5
    int80_t st0
    st0, eax_5 = sub_40a930(&var_a0)
    int32_t ebx = data_c02158
    void var_50
    __builtin_memcpy(&var_50, eax_5, 0x40)
    int32_t esi_2 = **(data_27e7a40 + 0x548)
    void* eax_6 = sub_4fc3d0(&data_be1cb8, esi_2)
    void var_e0
    int32_t var_13c_1 = __builtin_memcpy(&var_50, sub_4fab00(esi_2, &var_e0, ebx, &var_50), 0x40)
    void var_120
    int32_t eax_9
    int80_t result
    result, eax_9 =
        sub_4f66d0(&var_120, *(eax_6 + 4), ebx, &var_5c, fconvert.s(float.t(1)), nullptr, nullptr)
    __builtin_memcpy(arg4, eax_9, 0x40)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

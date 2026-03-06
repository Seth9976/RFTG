// 函数名称: sub_467bf0
// 虚拟地址: 0x467bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_467bf0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_a0
    int32_t eax_2
    int32_t edx
    int80_t result
    result, eax_2, edx = sub_40a930(&var_a0)
    int32_t eax_3 = data_c02128
    void var_50
    __builtin_memcpy(&var_50, eax_2, 0x40)
    int32_t* eax_4 = sub_4f5350(eax_3, edx, data_307c530, &var_50)
    *arg1 = *eax_4
    arg1[1] = eax_4[1]
    int32_t eax_5 = eax_4[3]
    arg1[2] = eax_4[2]
    arg1[3] = eax_5
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_42b500
// 虚拟地址: 0x42b500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_42b500(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_d0
    int32_t eax_2
    int32_t edx
    int80_t result
    result, eax_2, edx = sub_40a930(&var_d0)
    int32_t eax_3 = data_c02148
    void var_60
    __builtin_memcpy(&var_60, eax_2, 0x40)
    int32_t* eax_4 = sub_4f5350(eax_3, edx, data_307c530, &var_60)
    int32_t ecx_1 = eax_4[1]
    float var_1c = *eax_4
    int32_t var_18 = ecx_1
    int32_t var_10 = eax_4[3]
    int32_t var_14 = eax_4[2]
    __builtin_memcpy(arg1, sub_430000(&var_1c, 1), 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

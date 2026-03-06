// 函数名称: sub_5690f0
// 虚拟地址: 0x5690f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5690f0(float* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx = arg2[4]
    int32_t var_2c = arg2[3]
    int32_t var_28 = edx
    int32_t var_24 = arg2[5]
    int32_t var_20 = arg2[6]
    int32_t var_1c = *arg2
    int32_t var_18 = arg2[1]
    int32_t var_14 = arg2[2]
    float var_4c
    __builtin_memcpy(&var_2c, sub_508860(&var_4c, &var_2c), 0x1c)
    float var_f4[0x9]
    void var_68
    __builtin_memcpy(&var_68, sub_5087d0(&var_f4, &var_2c), 0x1c)
    int32_t* eax_7 = sub_4d84a0(&var_2c, &arg2[7], &data_8409a8, &var_2c)
    int32_t edx_5 = eax_7[1]
    float var_48 = *eax_7
    int32_t var_44 = edx_5
    int32_t var_40 = eax_7[2]
    int32_t var_3c = eax_7[3]
    int32_t var_38 = eax_7[4]
    int32_t var_34 = eax_7[5]
    float var_cc[0x12]
    sub_4e4590(&var_cc, arg1)
    int32_t result = sub_568ee0(&var_cc, &var_48)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

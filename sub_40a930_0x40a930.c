// 函数名称: sub_40a930
// 虚拟地址: 0x40a930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_40a930(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(0)
    float var_2c = fconvert.s(x87_r7)
    float var_28 = fconvert.s(fconvert.t(3238f))
    float var_1c = fconvert.s(x87_r7)
    float var_14 = var_28
    float var_10 = fconvert.s(fconvert.t(2048f))
    void* eax_4 = data_27e7fd0
    float var_18 = var_2c
    float var_3c = fconvert.s(x87_r7)
    long double x87_r7_2 = float.t(*(eax_4 + 0x18))
    float var_38 = fconvert.s(float.t(*(eax_4 + 0x14)))
    float var_40 = fconvert.s(x87_r7)
    float var_34 = fconvert.s(x87_r7_2)
    int32_t eax_6
    int80_t result
    result, eax_6 = sub_4fb1d0(&var_40, &var_1c)
    __builtin_memcpy(arg1, eax_6, 0x40)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

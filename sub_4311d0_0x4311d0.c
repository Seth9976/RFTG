// 函数名称: sub_4311d0
// 虚拟地址: 0x4311d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4311d0(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_d0
    int32_t eax_2
    int32_t edx
    int80_t st0
    st0, eax_2, edx = sub_40a930(&var_d0)
    int32_t eax_3 = data_c02140
    void var_70
    __builtin_memcpy(&var_70, eax_2, 0x40)
    int32_t* eax_4 = sub_4f5350(eax_3, edx, data_307c530, &var_70)
    float ecx_1 = eax_4[1]
    float var_1c = *eax_4
    float edx_2 = eax_4[2]
    float eax_5 = eax_4[3]
    int32_t eax_6
    int80_t result
    result, eax_6 = sub_40a930(&var_d0)
    int32_t eax_7 = data_c02148
    __builtin_memcpy(&var_70, eax_6, 0x40)
    int32_t* eax_8 = sub_4f5350(eax_7, &var_70, data_307c530, &var_70)
    long double x87_r4 = fconvert.t(var_1c)
    long double x87_r3_1 = fconvert.t(0.5)
    long double x87_r3_3 = fconvert.t(edx_2)
    float var_78 = fconvert.s(x87_r3_3 + (fconvert.t(eax_8[2]) - x87_r3_3) * x87_r3_1)
    long double x87_r3_6 = fconvert.t(ecx_1)
    float var_7c = fconvert.s(x87_r3_6 + (fconvert.t(eax_8[1]) - x87_r3_6) * x87_r3_1)
    long double x87_r3_9 = fconvert.t(eax_5)
    float var_74 = fconvert.s(x87_r3_1 * (fconvert.t(eax_8[3]) - x87_r3_9) + x87_r3_9)
    var_1c = fconvert.s(x87_r4 + (fconvert.t(*eax_8) - x87_r4) * x87_r3_1)
    float var_18_1 = var_7c
    float var_10_1 = var_74
    float var_14_1 = var_78
    __builtin_memcpy(arg1, sub_430000(&var_1c, 0), 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

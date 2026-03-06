// 函数名称: sub_466520
// 虚拟地址: 0x466520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_466520(float arg1, float arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(0)
    float var_5c = fconvert.s(x87_r7)
    float var_58 = fconvert.s(x87_r7)
    float var_54 = fconvert.s(fconvert.t(arg1))
    data_c02188 = var_5c
    long double x87_r7_2 = fconvert.t(arg2)
    float var_50 = fconvert.s(x87_r7_2)
    data_c0218c = var_58
    data_c02194 = var_50
    data_c02190 = var_54
    data_c02198 = fconvert.s(x87_r7_2 * fconvert.t(0.00048828125))
    long double x87_r6 = fconvert.t(data_c02198)
    data_c0219c = fconvert.s(fconvert.t(data_307cc8c) * x87_r6)
    data_c021a0 = fconvert.s(x87_r6 * fconvert.t(data_307cc90))
    void var_ac
    int32_t eax_4
    int32_t edx_2
    int80_t result
    result, eax_4, edx_2 = sub_40a930(&var_ac)
    int32_t eax_5 = data_c02154
    void var_4c
    __builtin_memcpy(&var_4c, eax_4, 0x40)
    int32_t* eax_6 = sub_4f5350(eax_5, edx_2, data_307c530, &var_4c)
    int32_t ecx_3 = eax_6[1]
    var_5c = *eax_6
    int32_t edx_4 = eax_6[2]
    int32_t var_50_2 = eax_6[3]
    int32_t var_c0_2 = 2
    int32_t var_58_1 = ecx_3
    int32_t var_54_2 = edx_4
    long double x87_r5_1 = fconvert.t(fconvert.s(sub_4664a0(&var_5c, edx_4)))
    data_c021ac = fconvert.s(fconvert.t(data_307cc8c) * x87_r5_1)
    data_c021b0 = fconvert.s(x87_r5_1 * fconvert.t(data_307cc90))
    void var_6c
    int32_t* eax_9 = sub_41e8e0(&var_6c)
    int32_t edx_6 = eax_9[1]
    var_5c = *eax_9
    int32_t var_58_2 = edx_6
    int32_t edx_7 = eax_9[3]
    int32_t var_c0_4 = 1
    int32_t var_54_4 = eax_9[2]
    int32_t var_50_5 = edx_7
    long double x87_r5_3 = fconvert.t(fconvert.s(sub_4664a0(&var_5c, edx_7)))
    data_c021a4 = fconvert.s(fconvert.t(data_307cc8c) * x87_r5_3)
    long double x87_r6_12 = fconvert.t(data_307cc94)
    data_c021a8 = fconvert.s(x87_r5_3 * fconvert.t(data_307cc90))
    long double x87_r5_5 = fconvert.t(data_c02198)
    long double x87_r5_7 = fconvert.t(data_307cc98)
    data_c021b4 = fconvert.s(x87_r6_12 * x87_r5_5)
    long double x87_r5_9 = fconvert.t(data_307cc9c)
    data_c021b8 = fconvert.s(x87_r5_7 * x87_r5_5)
    long double x87_r5_11 = fconvert.t(data_307cca0)
    data_c021bc = fconvert.s(x87_r5_9 * x87_r5_5)
    long double x87_r5_13 = fconvert.t(data_307cca4)
    data_c021c0 = fconvert.s(x87_r5_11 * x87_r5_5)
    long double x87_r5_15 = fconvert.t(data_307cca8)
    data_c021c4 = fconvert.s(x87_r5_13 * x87_r5_5)
    long double x87_r5_17 = fconvert.t(data_307ccac)
    data_c021c8 = fconvert.s(x87_r5_15 * x87_r5_5)
    long double x87_r5_19 = fconvert.t(data_307ccb0)
    data_c021cc = fconvert.s(x87_r5_17 * x87_r5_5)
    long double x87_r5_21 = fconvert.t(data_307ccb4)
    data_c021d0 = fconvert.s(x87_r5_19 * x87_r5_5)
    data_c021d4 = fconvert.s(x87_r5_21 * x87_r5_5)
    data_c021d8 = fconvert.s(x87_r5_5 * fconvert.t(data_307ccb8))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_4ed7d0
// 虚拟地址: 0x4ed7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4ed7d0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(1)
    long double x87_r6 = float.t(1)
    long double x87_r5 = fconvert.t(2.0)
    float var_3c
    float var_14
    float eax_11
    
    do
        float eax_4 = (sub_4c95c0() & 0x7fffff) | 0x3f800000
        float eax_7 = (sub_4c95c0() & 0x7fffff) | 0x3f800000
        var_3c = fconvert.s(
            fconvert.t(fconvert.s(fconvert.t((sub_4c95c0() & 0x7fffff) | 0x3f800000) - x87_r6))
            * x87_r5)
        float var_34_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_4) - x87_r6)) * x87_r5)
        float var_2c_1 = fconvert.s(fconvert.t(var_3c) - x87_r6)
        var_14 = var_2c_1
        float var_28_1 = fconvert.s(
            fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(eax_7) - x87_r6)) * x87_r5))
            - x87_r6)
        float var_10_1 = var_28_1
        float var_24_1 = fconvert.s(fconvert.t(var_34_1) - x87_r6)
        long double x87_r4_19 = fconvert.t(var_28_1)
        float var_c_1 = var_24_1
        long double x87_r3_1 = fconvert.t(var_2c_1)
        long double x87_r2_1 = fconvert.t(var_24_1)
        long double x87_r4_23 =
            fconvert.t(fconvert.s(x87_r4_19 * x87_r4_19 + x87_r3_1 * x87_r3_1 + x87_r2_1 * x87_r2_1))
        x87_r4_23 - x87_r7
        eax_11.w = (x87_r4_23 < x87_r7 ? 1 : 0) << 8
            | (is_unordered.t(x87_r4_23, x87_r7) ? 1 : 0) << 0xa | (x87_r4_23 == x87_r7 ? 1 : 0) << 0xe
            | 0x2800
    while ((eax_11:1.b & 0x41) == 0)
    float* eax_12 = sub_4131a0(&var_14, &var_3c)
    int32_t edx_2 = eax_12[1]
    int32_t eax_13 = eax_12[2]
    float* entry_result
    *entry_result = *eax_12
    entry_result[1] = edx_2
    entry_result[2] = eax_13
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}

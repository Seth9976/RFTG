// 函数名称: sub_4126f0
// 虚拟地址: 0x4126f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4126f0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(0)
    long double x87_r6_1 = x87_r7 * x87_r7
    long double x87_r4 = fconvert.t(2.0)
    long double x87_r6_3 = fconvert.t(7.0)
    float var_64_1 = fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(fconvert.s((x87_r6_1 - x87_r7) * x87_r4)) * x87_r6_3))
        + fconvert.t(data_307b6b0))
    float var_60_1 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r6_1 - x87_r6_1 + fconvert.t(1.0) - x87_r6_1)) * x87_r6_3))
        + fconvert.t(data_307b6b4))
    float var_5c_1 = fconvert.s(
        fconvert.t(fconvert.s(x87_r6_3 * fconvert.t(fconvert.s(x87_r4 * (x87_r6_1 + x87_r7)))))
        + fconvert.t(data_307b6b8))
    float var_1c
    float var_18
    float var_14
    float var_10
    
    if ((data_3160dc4 & 1) == 0)
        long double x87_r7_13 = fconvert.t(-0f)
        data_3160dc4.d |= 1
        var_18 = fconvert.s(x87_r7_13)
        var_14 = fconvert.s(fconvert.t(-1f))
        var_10 = fconvert.s(x87_r7_13)
        float var_40[0x9]
        sub_413450(&data_840734, &var_18, 0x840740, &data_8409b4, &var_40)
        float* eax_3 = sub_413580(&var_40, &var_1c)
        data_3160db4 = *eax_3
        data_3160db8 = eax_3[1]
        data_3160dbc = eax_3[2]
        data_3160dc0 = eax_3[3]
    
    sub_405ee0(&var_1c, &data_3160db4, &data_840998)
    long double x87_r7_15 = fconvert.t(*data_27e7a70) * fconvert.t(7.0)
    float ecx_5 = var_18
    float* entry_result
    entry_result[1] = var_1c
    entry_result[2] = ecx_5
    entry_result[5] = var_64_1
    entry_result[3] = var_14
    entry_result[4] = var_10
    entry_result[6] = var_60_1
    entry_result[7] = var_5c_1
    *entry_result = fconvert.s(fconvert.t(fconvert.s(x87_r7_15)) / fconvert.t(384.0))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}

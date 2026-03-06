// 函数名称: sub_4265b0
// 虚拟地址: 0x4265b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4265b0(float* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7_1 = fconvert.t(arg1[6])
    float var_14 = fconvert.s(fconvert.t(arg1[5]))
    float var_10 = fconvert.s(x87_r7_1)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg1)))
    float var_28_1 = fconvert.s(fconvert.t(data_307cc8c) * x87_r6)
    float var_38 = var_28_1
    float var_24_2 = fconvert.s(x87_r6 * fconvert.t(data_307cc90))
    float var_34 = var_24_2
    float var_30
    sub_405e30(&var_30, &var_38, &var_14)
    float var_1c = var_30
    int32_t var_2c
    int32_t var_18 = var_2c
    var_14 = var_28_1
    float var_10_1 = var_24_2
    void var_40
    int32_t* eax_6 = sub_413110(&var_1c, &var_40)
    int32_t edx_4 = eax_6[1]
    int32_t* entry_result
    *entry_result = *eax_6
    int32_t ecx_5 = eax_6[2]
    entry_result[1] = edx_4
    int32_t edx_5 = eax_6[3]
    entry_result[2] = ecx_5
    entry_result[3] = edx_5
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}

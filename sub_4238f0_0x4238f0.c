// 函数名称: sub_4238f0
// 虚拟地址: 0x4238f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4238f0(float* arg1, float arg2, float arg3)
{
    // 第一条实际指令: float* entry_result
    float* entry_result
    __builtin_memcpy(entry_result, arg1, 0x40)
    float* esi_1 = arg2
    long double x87_r6 = fconvert.t(arg3)
    long double x87_r6_2 = fconvert.t(esi_1[1])
    *entry_result = fconvert.s((fconvert.t(*esi_1) - fconvert.t(*arg1)) * x87_r6 + fconvert.t(*arg1))
    long double x87_r6_6 = fconvert.t(arg1[2])
    entry_result[1] = fconvert.s((x87_r6_2 - fconvert.t(arg1[1])) * x87_r6 + fconvert.t(arg1[1]))
    long double x87_r5_2 = fconvert.t(fconvert.s(x87_r6_6))
    entry_result[2] = fconvert.s((fconvert.t(esi_1[2]) - x87_r5_2) * x87_r6 + x87_r5_2)
    long double x87_r5_3 = fconvert.t(fconvert.s(fconvert.t(arg1[3])))
    entry_result[3] = fconvert.s((fconvert.t(esi_1[3]) - x87_r5_3) * x87_r6 + x87_r5_3)
    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(arg1[4])))
    entry_result[4] = fconvert.s((fconvert.t(esi_1[4]) - x87_r5_4) * x87_r6 + x87_r5_4)
    long double x87_r5_5 = fconvert.t(fconvert.s(fconvert.t(arg1[5])))
    entry_result[5] = fconvert.s((fconvert.t(esi_1[5]) - x87_r5_5) * x87_r6 + x87_r5_5)
    float var_10_1 =
        fconvert.s((fconvert.t(esi_1[6]) - fconvert.t(arg1[6])) * x87_r6 + fconvert.t(arg1[6]))
    long double x87_r6_30 = fconvert.t(esi_1[7])
    entry_result[6] = var_10_1
    float var_24 = var_10_1
    float var_c_1 = fconvert.s((x87_r6_30 - fconvert.t(arg1[7])) * x87_r6 + fconvert.t(arg1[7]))
    entry_result[7] = var_c_1
    float var_18
    sub_4662b0(&var_18, &arg1[0xc], &esi_1[0xc], fconvert.s(x87_r6))
    entry_result[0xc] = var_18
    int32_t var_14
    entry_result[0xd] = var_14
    entry_result[0xe] = var_10_1
    entry_result[0xf] = var_c_1
    sub_4662b0(&var_18, &arg1[8], &esi_1[8], fconvert.s(fconvert.t(arg3)))
    entry_result[8] = var_18
    entry_result[9] = var_14
    entry_result[0xa] = var_10_1
    entry_result[0xb] = var_c_1
    return entry_result
}

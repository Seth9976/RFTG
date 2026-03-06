// 函数名称: sub_4e4af0
// 虚拟地址: 0x4e4af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4e4af0(float* arg1)
{
    // 第一条实际指令: bool cond:0 = data_3078808 != 1
    bool cond:0 = data_3078808 != 1
    long double x87_r6 = fconvert.t(0.5)
    float var_14 = fconvert.s((fconvert.t(*arg1) + fconvert.t(arg1[2])) * x87_r6)
    float var_5c
    __builtin_memset(&var_5c, 0x83fb38, 0x40)
    float var_10 = fconvert.s(x87_r6 * (fconvert.t(arg1[3]) + fconvert.t(arg1[1])))
    float var_c = fconvert.s(fconvert.t(arg1[2]) - fconvert.t(*arg1))
    long double x87_r6_4 = float.t(1)
    float var_18 =
        fconvert.s(x87_r6_4 / fconvert.t(fconvert.s(fconvert.t(arg1[3]) - fconvert.t(arg1[1]))))
    float var_8_1 = fconvert.s(x87_r6_4 / (fconvert.t(arg1[5]) - fconvert.t(arg1[4])))
    long double x87_r7_13 = fconvert.t(fconvert.s(x87_r6_4 / x87_r6_4))
    long double x87_r5_1 = fconvert.t(2.0)
    var_5c = fconvert.s(x87_r7_13 * x87_r5_1)
    long double x87_r5_3 = fconvert.t(var_18)
    float var_48 = fconvert.s(x87_r5_3 * x87_r5_1)
    float var_54 = fconvert.s(x87_r7_13 * fconvert.t(var_14) * x87_r5_1)
    float var_44 = fconvert.s(x87_r5_3 * x87_r5_1 * fconvert.t(var_10))
    long double x87_r6_19
    long double x87_r7_20
    
    if (cond:0)
        long double x87_r6_20 = fconvert.t(var_8_1)
        x87_r7_20 = x87_r6_20
        float var_34_1 = fconvert.s(fneg(fconvert.t(arg1[5])) * x87_r6_20)
        x87_r6_19 = fconvert.t(arg1[5]) * fconvert.t(arg1[4]) * fconvert.t(-1.0)
    else
        long double x87_r6_14 = fconvert.t(var_8_1)
        x87_r7_20 = x87_r6_14
        float var_34 = fconvert.s(fneg((fconvert.t(arg1[5]) + fconvert.t(arg1[4])) * x87_r6_14))
        x87_r6_19 = fconvert.t(arg1[5]) * fconvert.t(arg1[4]) * fconvert.t(-2.0)
    
    float var_30 = fconvert.s(x87_r7_20 * x87_r6_19)
    float var_24 = fconvert.s(fconvert.t(-1f))
    float var_9c[0x10]
    sub_406020(&var_9c, &var_5c, 0x30d73b0)
    int32_t entry_result
    __builtin_memcpy(entry_result, &var_9c, 0x40)
    return entry_result
}

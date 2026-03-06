// 函数名称: sub_477ff0
// 虚拟地址: 0x477ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_477ff0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* entry_result
    __builtin_memcpy(entry_result, arg2, 0x1c)
    entry_result[4] = fconvert.s(fconvert.t(entry_result[4]) * fconvert.t(1.1000000238418579))
    entry_result[5] = fconvert.s(fconvert.t(entry_result[5]) * fconvert.t(0.5))
    entry_result[6] = fconvert.s(fconvert.t(entry_result[6]) * fconvert.t(1.25))
    long double x87_r7_6 = float.t(0)
    long double x87_r5 = fconvert.t(1.6000000238418579)
    long double x87_r5_2 = fconvert.t(fconvert.s(x87_r7_6 * x87_r5))
    float var_40 = fconvert.s(x87_r5_2)
    float var_3c = fconvert.s(x87_r5_2)
    entry_result[4] = fconvert.s(fconvert.t(entry_result[4]) + fconvert.t(var_40))
    entry_result[5] = fconvert.s(fconvert.t(entry_result[5]) + fconvert.t(var_3c))
    entry_result[6] = fconvert.s(x87_r5 + fconvert.t(entry_result[6]))
    long double x87_r6_4 = fconvert.t(0.20000000298023224)
    long double x87_r6_6 = fconvert.t(fconvert.s(x87_r7_6 * x87_r6_4))
    var_40 = fconvert.s(x87_r6_6)
    float var_38 = fconvert.s(x87_r6_6)
    entry_result[4] = fconvert.s(fconvert.t(entry_result[4]) + fconvert.t(var_40))
    entry_result[5] = fconvert.s(x87_r6_4 + fconvert.t(entry_result[5]))
    entry_result[6] = fconvert.s(fconvert.t(entry_result[6]) + fconvert.t(var_38))
    float var_50
    int32_t* const esi_1
    
    if (arg3 != 0)
        long double x87_r7_12 = fconvert.t(-0f)
        esi_1 = &var_50
        var_40 = fconvert.s(x87_r7_12)
        var_50 = var_40
        var_3c = fconvert.s(fconvert.t(-1f))
        float var_4c_1 = var_3c
        var_38 = fconvert.s(x87_r7_12)
        float var_48_1 = var_38
    else
        esi_1 = &data_8409c0
    
    float var_30[0x9]
    sub_413450(&data_8409b4, &data_8409cc, &data_8409cc, esi_1, &var_30)
    float* eax_3 = sub_413580(&var_30, &var_40)
    float edx_1 = eax_3[1]
    float var_54 = *eax_3
    int32_t ecx_3 = eax_3[2]
    var_50 = edx_1
    int32_t var_4c_2 = ecx_3
    int32_t var_48_2 = eax_3[3]
    sub_405ee0(&var_40, &var_54, entry_result)
    *entry_result = var_40
    entry_result[1] = var_3c
    entry_result[2] = var_38
    int32_t var_34
    entry_result[3] = var_34
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}

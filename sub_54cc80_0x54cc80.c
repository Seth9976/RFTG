// 函数名称: sub_54cc80
// 虚拟地址: 0x54cc80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_54cc80(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = fconvert.t(*arg4)
    float edx = arg3[1]
    float var_4c
    __builtin_memcpy(&var_4c, &data_be4c5c, 0x20)
    float ecx_1 = arg3[2]
    int32_t ecx_2 = arg3[4]
    float var_28 = fconvert.s(x87_r7 - fconvert.t(*arg3))
    long double x87_r7_2 = fconvert.t(arg4[1])
    float var_48 = arg3[3]
    int32_t var_44 = ecx_2
    float var_24 = fconvert.s(x87_r7_2 - fconvert.t(edx))
    int32_t var_40 = arg3[5]
    long double x87_r7_5 = fconvert.t(arg4[2]) - fconvert.t(ecx_1)
    int32_t var_3c = arg3[6]
    float var_18 = var_28
    float var_14 = var_24
    float var_10 = fconvert.s(x87_r7_5)
    float var_60
    sub_4d5cb0(&var_60, &var_18, &var_48)
    long double x87_r6 = float.t(1)
    long double x87_r6_1 = fconvert.t(fconvert.s(x87_r6 / x87_r6))
    var_18 = fconvert.s(fconvert.t(var_60) * x87_r6_1)
    float var_5c
    float var_14_1 = fconvert.s(fconvert.t(var_5c) * x87_r6_1)
    float var_58
    float var_10_1 = fconvert.s(x87_r6_1 * fconvert.t(var_58))
    long double x87_r6_5 = fconvert.t(0.5)
    float var_28_3 = fconvert.s(fconvert.t(arg3[7]) * x87_r6_5)
    float var_24_3 = fconvert.s(fconvert.t(arg3[8]) * x87_r6_5)
    float var_20_3 = fconvert.s(x87_r6_5 * fconvert.t(arg3[9]))
    int32_t var_64 = 0
    var_60 = 0f
    float var_68 = 0f
    float var_5c_1 = var_28_3
    float var_58_1 = var_24_3
    float var_54 = var_20_3
    int32_t result = sub_54ce50(&var_18, &var_68)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

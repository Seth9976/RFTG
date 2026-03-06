// 函数名称: sub_4d7c20
// 虚拟地址: 0x4d7c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d7c20(int32_t* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(1)
    float var_4c = fconvert.s(x87_r7)
    float edx = arg1[4]
    int32_t var_48 = arg1[3]
    int32_t ecx_2 = arg1[5]
    float var_44 = edx
    int32_t var_40 = ecx_2
    float ecx_3 = *arg1
    float var_3c = arg1[6]
    float edx_2 = arg1[1]
    int32_t var_30 = arg1[2]
    float var_74
    __builtin_memcpy(&var_74, &var_4c, 0x20)
    var_74 = fconvert.s(x87_r7)
    float var_70 = fconvert.s(fneg(fconvert.t(var_70)))
    float var_6c = fconvert.s(fneg(fconvert.t(var_6c)))
    float var_68
    float var_68_1 = fconvert.s(fneg(fconvert.t(var_68)))
    float var_60
    sub_405970(&var_3c, &var_60, &var_70)
    long double x87_r6 = fconvert.t(-1.0)
    var_3c = fconvert.s(fconvert.t(var_3c) * x87_r6)
    var_60 = var_3c
    float var_5c = fconvert.s(fconvert.t(ecx_3) * x87_r6)
    float var_58 = fconvert.s(x87_r6 * fconvert.t(edx_2))
    float var_28
    __builtin_memcpy(&var_28, &var_74, 0x20)
    float* eax_8 = sub_4056e0(&var_44, &var_28)
    int32_t edx_6 = eax_8[1]
    float var_20 = *eax_8
    int32_t var_1c = edx_6
    int32_t var_18 = eax_8[2]
    int32_t var_14_1 = eax_8[3]
    int32_t var_10_1 = eax_8[4]
    int32_t var_c_1 = eax_8[5]
    int32_t* eax_10 = sub_4d84a0(&var_6c, &arg1[7], &data_8409a8, &var_6c)
    int32_t edx_11 = eax_10[1]
    var_44 = *eax_10
    int32_t var_40_1 = edx_11
    int32_t edx_12 = eax_10[3]
    var_3c = eax_10[2]
    int32_t var_38_2 = edx_12
    int32_t var_34_2 = eax_10[4]
    int32_t var_30_1 = eax_10[5]
    int32_t result
    int80_t st0
    st0, result = sub_4d7d80(&var_20, &var_44, arg2)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

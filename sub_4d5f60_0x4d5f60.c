// 函数名称: sub_4d5f60
// 虚拟地址: 0x4d5f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __fastcallsub_4d5f60(float* arg1)
{
    // 第一条实际指令: void var_a8
    void var_a8
    int32_t eax_1 = __security_cookie ^ &var_a8
    float var_a0 = fconvert.s(fconvert.t(arg1[3]))
    long double x87_r7_1 = fconvert.t(arg1[7])
    float* entry_result
    entry_result[5] = var_a0
    long double x87_r7_2 = fconvert.t(arg1[0xb])
    entry_result[6] = fconvert.s(x87_r7_1)
    long double x87_r7_3 = fconvert.t(arg1[1])
    entry_result[7] = fconvert.s(x87_r7_2)
    long double x87_r6 = fconvert.t(*arg1)
    long double x87_r6_2 = fconvert.t(arg1[2])
    int32_t ecx_1
    int32_t edx_1
    long double st0
    st0, ecx_1, edx_1 = __CIasin_default(fconvert.t(fconvert.s(x87_r7_3 * x87_r7_3 + x87_r6 * x87_r6
        + x87_r6_2 * x87_r6_2)))
    int32_t var_b4 = ecx_1
    *entry_result = fconvert.s(fconvert.t(fconvert.s(st0)))
    long double x87_r6_4 = float.t(1)
    float var_50
    sub_4d5ec0(&var_50, edx_1, arg1, fconvert.s(fconvert.t(fconvert.s(x87_r6_4 / x87_r6_4))))
    float var_90
    __builtin_memcpy(&var_90, &var_50, 0x40)
    var_50 = fconvert.s(fconvert.t(var_90))
    float var_8c
    float var_4c = fconvert.s(fconvert.t(var_8c))
    float var_88
    float var_48 = fconvert.s(fconvert.t(var_88))
    float var_80
    float var_44 = fconvert.s(fconvert.t(var_80))
    float var_7c
    float var_40 = fconvert.s(fconvert.t(var_7c))
    float var_78
    float var_3c = fconvert.s(fconvert.t(var_78))
    float var_70
    float var_38 = fconvert.s(fconvert.t(var_70))
    float var_6c
    float var_34 = fconvert.s(fconvert.t(var_6c))
    float var_68
    float var_30 = fconvert.s(fconvert.t(var_68))
    float* eax_4 = sub_413580(&var_50, &var_a0)
    int32_t edx_2 = eax_4[1]
    entry_result[1] = *eax_4
    int32_t ecx_4 = eax_4[2]
    entry_result[2] = edx_2
    int32_t edx_3 = eax_4[3]
    entry_result[3] = ecx_4
    entry_result[4] = edx_3
    sub_5a6aba(eax_1 ^ &var_a8)
    return entry_result
}

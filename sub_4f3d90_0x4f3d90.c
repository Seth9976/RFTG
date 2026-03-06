// 函数名称: sub_4f3d90
// 虚拟地址: 0x4f3d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4f3d90(float* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    float var_c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg1) * fconvert.t(*arg2)
        + fconvert.t(arg1[1]) * fconvert.t(arg2[1]) + fconvert.t(arg1[2]) * fconvert.t(arg2[2])))
        + fconvert.t(1.0))
    long double x87_r7_6 = fconvert.t(9.99999975e-06f)
    long double temp0 = fconvert.t(var_c)
    x87_r7_6 - temp0
    int32_t eax_1
    eax_1.w = (x87_r7_6 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_6, temp0) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp0 ? 1 : 0) << 0xe
    float var_2c
    int32_t* entry_result
    
    if ((eax_1:1.b & 0x41) == 0)
        int32_t* eax_2 = sub_4661e0(&var_2c, arg2)
        int32_t edx = eax_2[1]
        int32_t eax_3 = eax_2[2]
        *entry_result = *eax_2
        entry_result[1] = edx
        entry_result[2] = eax_3
        entry_result[3] = var_c
        sub_5a6aba(var_8 ^ &__saved_ebp)
        return entry_result
    
    var_2c = fconvert.s(fconvert.t(arg1[2]) * fconvert.t(arg2[1])
        - fconvert.t(arg2[2]) * fconvert.t(arg1[1]))
    float var_14 =
        fconvert.s(fconvert.t(arg2[2]) * fconvert.t(*arg1) - fconvert.t(arg1[2]) * fconvert.t(*arg2))
    long double x87_r7_14 = fconvert.t(arg1[1]) * fconvert.t(*arg2)
    long double x87_r6_9 = fconvert.t(*arg1) * fconvert.t(arg2[1])
    float var_18 = var_2c
    float var_10 = fconvert.s(x87_r7_14 - x87_r6_9)
    float* eax_7 = sub_465ec0(&var_18, &var_2c)
    int32_t edx_2 = eax_7[1]
    *entry_result = *eax_7
    int32_t ecx_5 = eax_7[2]
    entry_result[1] = edx_2
    int32_t edx_3 = eax_7[3]
    entry_result[2] = ecx_5
    entry_result[3] = edx_3
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return entry_result
}

// 函数名称: sub_569250
// 虚拟地址: 0x569250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __fastcallsub_569250(float* arg1, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* var_48 = arg1
    float var_2c = fconvert.s(fconvert.t(arg2[1]) - fconvert.t(arg1[1]))
    float var_28 = fconvert.s(fconvert.t(arg2[2]) - fconvert.t(arg1[2]))
    float var_24 = fconvert.s(fconvert.t(arg2[3]) - fconvert.t(arg1[3]))
    long double x87_r7_6 = fconvert.t(var_28)
    long double x87_r6 = fconvert.t(var_2c)
    long double x87_r5 = fconvert.t(var_24)
    float var_c_1 = fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6
        + x87_r6 * x87_r6 + x87_r5 * x87_r5)))))
    long double x87_r7_12 = fconvert.t(*arg1)
    long double x87_r5_2 = fconvert.t(var_c_1)
    long double x87_r6_5 = fconvert.t(*arg2) + x87_r5_2
    x87_r7_12 - x87_r6_5
    float* entry_result
    
    if ((((x87_r7_12 < x87_r6_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_12, x87_r6_5) ? 1 : 0) << 0xa
            | (x87_r7_12 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800):1.b & 1) == 0)
        int32_t ecx = arg1[1]
        int32_t edx = arg1[2]
        *entry_result = *arg1
        int32_t eax_4 = arg1[3]
        entry_result[1] = ecx
        entry_result[2] = edx
        entry_result[3] = eax_4
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return entry_result
    
    fconvert.t(*arg1) + x87_r5_2 - fconvert.t(*arg2)
    bool p = unimplemented  {test ah, 0x41}
    
    if (not(p))
        int32_t edx_1 = arg2[1]
        int32_t eax_6 = arg2[2]
        *entry_result = *arg2
        int32_t ecx_4 = arg2[3]
        entry_result[1] = edx_1
        entry_result[2] = eax_6
        entry_result[3] = ecx_4
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return entry_result
    
    fconvert.t(9.99999975e-06f) - x87_r5_2
    bool p_1 = unimplemented  {test ah, 0x41}
    
    if (p_1)
        sub_4c5870("dist >= EPSILON", &data_83f3d3, "Sphere.cpp", 0x53, "SphereUnion")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    long double x87_r6_10 = fconvert.t(fconvert.s(fconvert.t(*arg2) - fconvert.t(*arg1)))
    long double x87_r5_10 = float.t(1)
    long double x87_r6_14 = fconvert.t(fconvert.s(x87_r5_10 / x87_r5_10))
    long double x87_r5_15 = fconvert.t(0.5)
    float var_1c_2 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r6_14 * fconvert.t(fconvert.s(x87_r6_10 * fconvert.t(var_2c)))))
        + fconvert.t(fconvert.s(fconvert.t(arg2[1]) + fconvert.t(arg1[1]))))) * x87_r5_15)
    float var_18_2 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg1[2]) + fconvert.t(arg2[2])))
        + fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_28) * x87_r6_10)) * x87_r6_14))))
        * x87_r5_15)
    float var_14_2 = fconvert.s(fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg2[3]) + fconvert.t(arg1[3])))
        + fconvert.t(fconvert.s(x87_r6_14 * fconvert.t(fconvert.s(x87_r6_10 * fconvert.t(var_24)))))))
        * x87_r5_15)
    *entry_result = fconvert.s((x87_r5_2 + fconvert.t(*arg1) + fconvert.t(*arg2)) * x87_r5_15)
    entry_result[1] = var_1c_2
    entry_result[2] = var_18_2
    entry_result[3] = var_14_2
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}

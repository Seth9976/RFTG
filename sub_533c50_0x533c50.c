// 函数名称: sub_533c50
// 虚拟地址: 0x533c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float (*sub_533c50(float* arg1, float arg2))[0x9]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = fconvert.t(arg2)
    float var_34[0xb]
    sub_4db600(&var_34, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[4])
            + fconvert.t(fconvert.s(x87_r7 * fconvert.t(arg1[6])))))), 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[5])
        + fconvert.t(fconvert.s(fconvert.t(arg1[7]) * x87_r7))))), 
        fconvert.s(fconvert.t(fconvert.s(x87_r7 * fconvert.t(arg1[3]) + fconvert.t(arg1[2])))), 
        fconvert.s(fconvert.t(*arg1)), fconvert.s(fconvert.t(arg1[1])))
    long double x87_r7_6 = float.t(0)
    long double x87_r5 = fconvert.t(0.5)
    void var_94
    __builtin_memcpy(&var_94, 0x840974, 0x24)
    float var_8c = fconvert.s(x87_r7_6 - x87_r5)
    float var_80
    float var_80_1 = fconvert.s(fconvert.t(var_80) - x87_r5)
    float var_58[0x9]
    __builtin_memcpy(&var_58, &var_94, 0x24)
    __builtin_memcpy(&var_94, 0x840974, 0x24)
    float var_8c_1 = fconvert.s(x87_r7_6 + x87_r5)
    float var_80_2 = fconvert.s(x87_r5 + fconvert.t(var_80_1))
    float var_b8[0x9]
    __builtin_memcpy(&var_b8, &var_94, 0x24)
    sub_413350(&var_34, &var_94, &var_b8)
    __builtin_memcpy(&var_b8, &var_94, 0x24)
    float (* result)[0x9] = &var_58
    sub_413350(result, &var_34, &var_b8)
    int32_t entry_ebx
    __builtin_memcpy(entry_ebx, &var_34, 0x24)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

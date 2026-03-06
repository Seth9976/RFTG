// 函数名称: sub_5699b0
// 虚拟地址: 0x5699b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_5699b0(int32_t arg1, int32_t arg2, float* arg3, float arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(0)
    long double x87_r7_1 = x87_r7 * x87_r7
    int32_t var_1c = 0x3f800000
    float var_20 = 0f
    float var_10 = fconvert.s(x87_r7_1 + fconvert.t(arg4) + x87_r7_1)
    int32_t var_18 = 0
    float var_14 = fconvert.s(fneg(fconvert.t(var_10)))
    char eax_3
    int80_t st0
    st0, eax_3 = sub_4d7b10(&var_20, arg3, &var_10)
    
    if (eax_3 == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_3
    
    long double x87_r6_2 = fconvert.t(var_10)
    float var_2c = fconvert.s(fconvert.t(arg3[4]) * x87_r6_2)
    float var_28 = fconvert.s(x87_r6_2 * fconvert.t(arg3[5]))
    var_20 = fconvert.s(fconvert.t(*arg3) + fconvert.t(fconvert.s(fconvert.t(arg3[3]) * x87_r6_2)))
    float var_1c_1 = fconvert.s(fconvert.t(arg3[1]) + fconvert.t(var_2c))
    long double x87_r7_13 = fconvert.t(arg3[2])
    void* entry_ebx
    *(entry_ebx + 0x10) = var_20
    *(entry_ebx + 0x14) = var_1c_1
    float eax_4
    eax_4.b = 1
    *(entry_ebx + 0x18) = fconvert.s(x87_r7_13 + fconvert.t(var_28))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_4
}

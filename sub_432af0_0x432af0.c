// 函数名称: sub_432af0
// 虚拟地址: 0x432af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_432af0(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_6c
    float* eax_3
    int32_t edx
    eax_3, edx = sub_431c80(&var_6c, arg5)
    float var_48[0x8]
    __builtin_memcpy(&var_48, eax_3, 0x20)
    void var_28
    __builtin_memcpy(&var_28, sub_431a70(eax_3, edx, arg3, arg2), 0x20)
    long double x87_r6 = float.t(0)
    float var_14
    float var_14_1 = fconvert.s(fconvert.t(var_14) + x87_r6)
    float var_10
    float var_10_1 = fconvert.s(fconvert.t(var_10) - fconvert.t(0.75))
    float var_c
    float var_c_1 = fconvert.s(x87_r6 + fconvert.t(var_c))
    sub_405f60(&var_6c, &var_48)
    __builtin_memcpy(arg4, &var_6c, 0x20)
    *arg4 = fconvert.s(fconvert.t(*arg4) * fconvert.t(0.00050000002374872565))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}

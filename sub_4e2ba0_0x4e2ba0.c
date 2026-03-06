// 函数名称: sub_4e2ba0
// 虚拟地址: 0x4e2ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_4e2ba0(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12, float arg13, float arg14, float arg15, float arg16, float arg17, float arg18)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = data_30d739c
    int32_t* esi = data_30d73a0
    sub_4e25d0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, ecx, arg13, 
        arg14, arg15, arg16, arg17, arg18)
    long double x87_r7 = fconvert.t(arg15)
    float var_28 = fconvert.s(x87_r7)
    long double x87_r6 = fconvert.t(arg18)
    float var_24 = fconvert.s(x87_r6)
    long double x87_r5 = fconvert.t(arg17)
    float var_20 = fconvert.s(x87_r5)
    float var_1c = fconvert.s(x87_r6)
    float var_18 = fconvert.s(x87_r7)
    long double x87_r6_3 = fconvert.t(arg16)
    float var_14 = fconvert.s(x87_r6_3)
    float var_c = fconvert.s(x87_r6_3)
    float var_10 = fconvert.s(x87_r5)
    float var_58[0xc]
    void arg_4c
    uint32_t result = sub_4deaf0(&var_28, &arg_4c, &var_58, &var_28, ecx, esi)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

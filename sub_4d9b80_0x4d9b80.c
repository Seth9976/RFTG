// 函数名称: sub_4d9b80
// 虚拟地址: 0x4d9b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4d9b80(int32_t arg1, int32_t arg2, int32_t* arg3, float* arg4 @ esi, float* arg5 @ edi, int32_t* arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    int32_t* eax_4 = *sub_466320(entry_ebx)
    long double x87_r7 = float.t(*eax_4)
    
    if (*eax_4 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_4[1])
    
    if (eax_4[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    void* eax_5 = data_27e7fe0
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_4[2])))
    float var_50 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg5[3]) - fconvert.t(arg5[1])))
        * fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))))
    long double x87_r6_2 = fconvert.t(0.5)
    long double x87_r7_14 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(arg5[2]) - fconvert.t(*arg5)))
        * fconvert.t(fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))))) * x87_r6_2
    long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(*(eax_5 + 0x20)) - x87_r7_14))
    float var_2c = fconvert.s(x87_r5_2)
    long double x87_r6_3 = x87_r6_2 * fconvert.t(var_50)
    long double x87_r4_3 = fconvert.t(fconvert.s(fconvert.t(*(eax_5 + 0x24)) - x87_r6_3))
    long double x87_r4_5 = fconvert.t(fconvert.s(x87_r7_14 + fconvert.t(*(eax_5 + 0x20))))
    float var_24 = fconvert.s(x87_r4_5)
    float var_20 = fconvert.s(x87_r4_3)
    float var_1c = fconvert.s(x87_r5_2)
    long double x87_r6_5 = fconvert.t(fconvert.s(x87_r6_3 + fconvert.t(*(eax_5 + 0x24))))
    float var_18 = fconvert.s(x87_r6_5)
    float var_10 = fconvert.s(x87_r6_5)
    float var_14 = fconvert.s(x87_r4_5)
    long double x87_r6_6 = fconvert.t(var_2c)
    long double x87_r4_7 = fconvert.t(fconvert.s(x87_r4_3))
    var_2c =
        fconvert.s(fconvert.t(arg4[1]) * x87_r4_7 + fconvert.t(*arg4) * x87_r6_6 + fconvert.t(arg4[2]))
    float var_28_1 = fconvert.s(x87_r4_7 * fconvert.t(arg4[4]) + x87_r6_6 * fconvert.t(arg4[3])
        + fconvert.t(arg4[5]))
    long double x87_r6_8 = fconvert.t(var_24)
    long double x87_r4_9 = fconvert.t(var_20)
    float var_24_1 =
        fconvert.s(fconvert.t(arg4[1]) * x87_r4_9 + fconvert.t(*arg4) * x87_r6_8 + fconvert.t(arg4[2]))
    float var_20_1 = fconvert.s(x87_r4_9 * fconvert.t(arg4[4]) + x87_r6_8 * fconvert.t(arg4[3])
        + fconvert.t(arg4[5]))
    long double x87_r6_10 = fconvert.t(var_1c)
    long double x87_r4_11 = fconvert.t(var_18)
    float var_1c_1 = fconvert.s(fconvert.t(arg4[1]) * x87_r4_11 + fconvert.t(*arg4) * x87_r6_10
        + fconvert.t(arg4[2]))
    float var_18_1 = fconvert.s(x87_r4_11 * fconvert.t(arg4[4]) + x87_r6_10 * fconvert.t(arg4[3])
        + fconvert.t(arg4[5]))
    long double x87_r6_12 = fconvert.t(var_14)
    long double x87_r4_13 = fconvert.t(var_10)
    float var_14_1 = fconvert.s(fconvert.t(arg4[1]) * x87_r4_13 + fconvert.t(*arg4) * x87_r6_12
        + fconvert.t(arg4[2]))
    float var_10_1 = fconvert.s(x87_r4_13 * fconvert.t(arg4[4]) + x87_r6_12 * fconvert.t(arg4[3])
        + fconvert.t(arg4[5]))
    float var_4c = fconvert.s(fconvert.t(*arg5))
    float var_48 = fconvert.s(fconvert.t(arg5[1]))
    float var_44 = fconvert.s(fconvert.t(arg5[2]))
    float var_40 = fconvert.s(fconvert.t(arg5[1]))
    float var_3c = fconvert.s(fconvert.t(*arg5))
    float var_38 = fconvert.s(fconvert.t(arg5[3]))
    float var_34 = fconvert.s(fconvert.t(arg5[2]))
    float var_30 = fconvert.s(fconvert.t(arg5[3]))
    uint32_t result = sub_4d8cf0(&var_4c, &var_2c, entry_ebx, &var_4c, arg6, arg3)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

// 函数名称: sub_465f40
// 虚拟地址: 0x465f40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_465f40(int32_t arg1, float* arg2, float* arg3, float arg4, float arg5, float arg6, float arg7, float arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7_1 = fconvert.t(arg8)
    long double x87_r5 = fconvert.t(arg5)
    long double x87_r4_2 = fconvert.t(arg6)
    long double x87_r2 = fconvert.t(arg7)
    long double x87_r6_4 = x87_r2
    long double x87_r3_5 = fconvert.t(fconvert.s(fconvert.t(arg3[2]) * x87_r2
        + x87_r7_1 * fconvert.t(arg3[3]) + x87_r5 * fconvert.t(*arg3)
        + x87_r4_2 * fconvert.t(arg3[1])))
    long double temp1 = fconvert.t(0f)
    x87_r3_5 - temp1
    float eax_3
    eax_3.w = (x87_r3_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_5, temp1) ? 1 : 0) << 0xa
        | (x87_r3_5 == temp1 ? 1 : 0) << 0xe | 0x2000
    bool p = unimplemented  {test ah, 0x5}
    float var_30
    
    if (not(p))
        long double x87_r3_6 = fconvert.t(-1.0)
        float var_24_1 = fconvert.s(x87_r7_1 * x87_r3_6)
        var_30 = fconvert.s(x87_r5 * x87_r3_6)
        x87_r7_1 = fconvert.t(var_24_1)
        x87_r6_4 = fconvert.t(fconvert.s(x87_r3_6 * x87_r6_4))
        x87_r5 = fconvert.t(var_30)
        x87_r4_2 = fconvert.t(fconvert.s(x87_r4_2 * x87_r3_6))
    
    long double x87_r3_9 = fconvert.t(fconvert.s(fconvert.t(arg4)))
    var_30 = fconvert.s((x87_r5 - fconvert.t(*arg3)) * x87_r3_9 + fconvert.t(*arg3))
    *arg2 = var_30
    float var_28_2 = fconvert.s((x87_r6_4 - fconvert.t(arg3[2])) * x87_r3_9 + fconvert.t(arg3[2]))
    long double x87_r7_7 = (x87_r7_1 - fconvert.t(arg3[3])) * x87_r3_9 + fconvert.t(arg3[3])
    arg2[1] = fconvert.s((x87_r4_2 - fconvert.t(arg3[1])) * x87_r3_9 + fconvert.t(arg3[1]))
    arg2[2] = var_28_2
    arg2[3] = fconvert.s(x87_r7_7)
    float* eax_8 = sub_465ec0(arg2, &var_30)
    int32_t edx_5 = eax_8[1]
    *arg2 = *eax_8
    int32_t ecx_2 = eax_8[2]
    arg2[1] = edx_5
    int32_t edx_6 = eax_8[3]
    arg2[2] = ecx_2
    arg2[3] = edx_6
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg2
}

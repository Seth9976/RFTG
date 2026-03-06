// 函数名称: sub_518ed0
// 虚拟地址: 0x518ed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_518ed0(int32_t arg1, int32_t* arg2, float* arg3, float* arg4 @ esi, float arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(*arg2)
    long double x87_r4 = fconvert.t(arg2[3])
    long double x87_r7_3 = x87_r4
    long double x87_r3_1 = fconvert.t(arg2[1])
    long double x87_r5_4 = x87_r3_1
    long double x87_r3_3 = fconvert.t(arg2[2])
    long double x87_r4_6 = x87_r3_3
    long double x87_r3_5 = fconvert.t(fconvert.s(fconvert.t(arg3[1]) * x87_r3_1
        + fconvert.t(arg3[3]) * x87_r4 + fconvert.t(*arg3) * x87_r6 + x87_r3_3 * fconvert.t(arg3[2])))
    long double temp1 = fconvert.t(0f)
    x87_r3_5 - temp1
    float eax_5
    eax_5.w = (x87_r3_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_5, temp1) ? 1 : 0) << 0xa
        | (x87_r3_5 == temp1 ? 1 : 0) << 0xe | 0x2000
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        long double x87_r3_6 = fconvert.t(-1.0)
        x87_r7_3 = fconvert.t(fconvert.s(x87_r7_3 * x87_r3_6))
        x87_r5_4 = fconvert.t(fconvert.s(x87_r5_4 * x87_r3_6))
        x87_r4_6 = fconvert.t(fconvert.s(x87_r3_6 * x87_r4_6))
        x87_r6 = fconvert.t(fconvert.s(x87_r6 * x87_r3_6))
    
    long double x87_r3_9 = fconvert.t(fconvert.s(fconvert.t(arg5)))
    float var_28_2 = fconvert.s((x87_r5_4 - fconvert.t(arg3[1])) * x87_r3_9 + fconvert.t(arg3[1]))
    float var_24_2 = fconvert.s((x87_r4_6 - fconvert.t(arg3[2])) * x87_r3_9 + fconvert.t(arg3[2]))
    long double x87_r7_8 = (x87_r7_3 - fconvert.t(arg3[3])) * x87_r3_9
    long double x87_r5_15 = fconvert.t(arg3[3])
    *arg4 = fconvert.s((x87_r6 - fconvert.t(*arg3)) * x87_r3_9 + fconvert.t(*arg3))
    arg4[1] = var_28_2
    arg4[2] = var_24_2
    arg4[3] = fconvert.s(x87_r7_8 + x87_r5_15)
    float var_18_2 =
        fconvert.s((fconvert.t(arg2[5]) - fconvert.t(arg3[5])) * x87_r3_9 + fconvert.t(arg3[5]))
    long double x87_r6_19 = (fconvert.t(arg2[6]) - fconvert.t(arg3[6])) * x87_r3_9 + fconvert.t(arg3[6])
    arg4[4] = fconvert.s((fconvert.t(arg2[4]) - fconvert.t(arg3[4])) * x87_r3_9 + fconvert.t(arg3[4]))
    arg4[5] = var_18_2
    arg4[6] = fconvert.s(x87_r6_19)
    float var_18_3 =
        fconvert.s((fconvert.t(arg2[8]) - fconvert.t(arg3[8])) * x87_r3_9 + fconvert.t(arg3[8]))
    long double x87_r7_12 = x87_r3_9 * (fconvert.t(arg2[9]) - fconvert.t(arg3[9])) + fconvert.t(arg3[9])
    arg4[7] = fconvert.s((fconvert.t(arg2[7]) - fconvert.t(arg3[7])) * x87_r3_9 + fconvert.t(arg3[7]))
    arg4[8] = var_18_3
    float result = fconvert.s(x87_r7_12)
    arg4[9] = result
    arg2.b = arg2[0xa].b
    
    if (arg3[0xa].b == arg2.b)
        arg4[0xa].b = arg2.b
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("tFirst.propegatesScale == tSecond.propegatesScale", &data_83f3d3, 
        "c:\ax2010\engine\BoneTransform.h", 0x40, "BoneTransformLerp")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}

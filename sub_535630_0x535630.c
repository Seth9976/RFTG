// 函数名称: sub_535630
// 虚拟地址: 0x535630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_535630(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4 @ esi, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *arg5 = 0
    arg5[1] = 0
    arg5[2] = 0
    int32_t ebx = arg3[0xa]
    long double x87_r7 = fconvert.t(arg3[2])
    long double x87_r6 = fconvert.t(arg3[1])
    long double x87_r5 = fconvert.t(*arg3)
    int32_t edi = arg3[9]
    int32_t i = 0
    long double result = fconvert.t(*arg5)
    
    do
        uint32_t edx_6 = zx.d((edi u>> i.b).b) << 6
        float* edx_7 = edx_6 + arg4
        uint8_t edx_9 = (ebx u>> i.b).b
        i += 8
        long double x87_r1_13 = fconvert.t(fconvert.s(float.t(zx.d(edx_9)) / fconvert.t(255.0)))
        long double x87_r2_21 = x87_r1_13 * fconvert.t(fconvert.s(fconvert.t(edx_7[9]) * x87_r6
            + fconvert.t(edx_7[8]) * x87_r5 + fconvert.t(edx_7[0xa]) * x87_r7
            + fconvert.t(edx_7[0xb])))
        result = result + fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(*(edx_6 + arg4 + 4)) * x87_r6 + x87_r5 * fconvert.t(*edx_7)
            + fconvert.t(edx_7[2]) * x87_r7 + fconvert.t(edx_7[3]))) * x87_r1_13))
        arg5[1] = fconvert.s(fconvert.t(arg5[1]) + fconvert.t(fconvert.s(fconvert.t(fconvert.s(
            fconvert.t(edx_7[5]) * x87_r6 + fconvert.t(edx_7[4]) * x87_r5
            + fconvert.t(edx_7[6]) * x87_r7 + fconvert.t(edx_7[7]))) * x87_r1_13)))
        arg5[2] = fconvert.s(fconvert.t(arg5[2]) + fconvert.t(fconvert.s(x87_r2_21)))
    while (i s< 0x20)
    
    *arg5 = fconvert.s(x87_r5)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

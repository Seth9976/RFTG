// 函数名称: sub_465a90
// 虚拟地址: 0x465a90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_465a90(float* arg1 @ esi, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_14 = ecx
    arg2 = fconvert.s(fconvert.t(arg2) * fconvert.t(0.5))
    int16_t x87control
    long double st0
    st0, x87control = sub_406680(fconvert.s(fconvert.t(arg2)))
    int32_t ecx_1
    int32_t mxcsr
    long double st0_1
    st0_1, ecx_1 = sub_686860(mxcsr, x87control, fconvert.t(arg2))
    int32_t var_14_2 = ecx_1
    float var_8 = fconvert.s(fconvert.t(fconvert.s(st0_1)))
    arg2 = fconvert.s(fconvert.t(arg3) * fconvert.t(0.5))
    int16_t x87control_1
    long double st0_2
    st0_2, x87control_1 = sub_406680(fconvert.s(fconvert.t(arg2)))
    int32_t ecx_2
    long double st0_3
    st0_3, ecx_2 = sub_686860(mxcsr, x87control_1, fconvert.t(arg2))
    int32_t var_14_4 = ecx_2
    arg3 = fconvert.s(fconvert.t(fconvert.s(st0_3)))
    arg2 = fconvert.s(fconvert.t(arg4) * fconvert.t(0.5))
    int16_t x87control_2
    long double st0_4
    st0_4, x87control_2 = sub_406680(fconvert.s(fconvert.t(arg2)))
    long double x87_r7_21 = fconvert.t(fconvert.s(st0_2))
    long double x87_r5 = fconvert.t(fconvert.s(st0))
    long double x87_r6_1 = x87_r7_21 * x87_r5
    long double x87_r4_2 = fconvert.t(arg3) * fconvert.t(var_8)
    long double x87_r3 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(sub_686860(mxcsr, x87control_2, 
        fconvert.t(arg2))))))
    long double x87_r1 = fconvert.t(fconvert.s(st0_4))
    arg1[3] = fconvert.s(x87_r3 * x87_r4_2 + x87_r1 * x87_r6_1)
    long double x87_r7_22 = x87_r7_21 * fconvert.t(var_8)
    long double x87_r5_1 = x87_r5 * fconvert.t(arg3)
    *arg1 = fconvert.s(x87_r3 * x87_r7_22 - x87_r1 * x87_r5_1)
    arg1[1] = fconvert.s(x87_r6_1 * x87_r3 + x87_r4_2 * x87_r1)
    arg1[2] = fconvert.s(x87_r5_1 * x87_r3 - x87_r7_22 * x87_r1)
    return arg1
}

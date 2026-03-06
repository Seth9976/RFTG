// 函数名称: sub_4db600
// 虚拟地址: 0x4db600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4db600(float* arg1 @ esi, float arg2, float arg3, float arg4, float arg5, float arg6)
{
    // 第一条实际指令: int32_t mxcsr
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686ea0(mxcsr, x87control, fconvert.t(arg4))
    int32_t result
    long double st0_1
    st0_1, result = sub_686860(mxcsr, x87control_1, fconvert.t(arg4))
    long double x87_r7_7 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0_1))))
    long double x87_r5 = fconvert.t(arg5)
    *arg1 = fconvert.s(x87_r7_7 * x87_r5)
    long double x87_r5_2 = fconvert.t(fconvert.s(fneg(fconvert.t(fconvert.s(st0)))))
    arg1[3] = fconvert.s(x87_r5 * x87_r5_2)
    long double x87_r5_4 = float.t(0)
    arg1[6] = fconvert.s(x87_r5_4)
    long double x87_r4_2 = fconvert.t(arg6)
    arg1[1] = fconvert.s(fneg(x87_r5_2) * x87_r4_2)
    arg1[4] = fconvert.s(x87_r7_7 * x87_r4_2)
    arg1[7] = fconvert.s(x87_r5_4)
    arg1[2] = fconvert.s(fconvert.t(arg2))
    arg1[5] = fconvert.s(fconvert.t(arg3))
    arg1[8] = fconvert.s(float.t(1))
    return result
}

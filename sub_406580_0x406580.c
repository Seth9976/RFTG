// 函数名称: sub_406580
// 虚拟地址: 0x406580
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_406580(long double arg1 @ st0, float arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    long double x87_r7_1 = x87_r7 * x87_r7
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686ea0(mxcsr, x87control, 
        fconvert.t(fconvert.s((x87_r7_1 - fconvert.t(0.32499998807907104)) * fconvert.t(data_be1abc)
            / fconvert.t(1.2999999523162842))))
    long double x87_r7_8 = fconvert.t(fconvert.s(st0)) + fconvert.t(1.0)
    sub_686c10(mxcsr, x87control_1, 
        fconvert.t(fconvert.s(fconvert.t(arg2) * fconvert.t(-5.5999999046325684))), 
        fconvert.t(1.6000000238418579))
    return fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(arg1)) * fconvert.t(fconvert.d(x87_r7_8 + x87_r7_8))
        + fconvert.t(fconvert.d(x87_r7_1)) * fconvert.t(0.87000000476837158)))
}

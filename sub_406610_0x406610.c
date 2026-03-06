// 函数名称: sub_406610
// 虚拟地址: 0x406610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_406610(long double arg1 @ st0, float arg2, float arg3)
{
    // 第一条实际指令: int32_t mxcsr
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686ea0(mxcsr, x87control, 
        fconvert.t(fconvert.s((fconvert.t(arg2) - fconvert.t(0.075000002980232239))
            * fconvert.t(data_be1abc) / fconvert.t(0.30000001192092896))))
    sub_686c10(mxcsr, x87control_1, fconvert.t(fconvert.s(fneg(fconvert.t(arg3)) * fconvert.t(arg2))), 
        fconvert.t(2.0))
    return fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(arg1)) * fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0))))
        + fconvert.t(1.0)))
}

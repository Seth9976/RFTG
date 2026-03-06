// 函数名称: sub_5a14a0
// 虚拟地址: 0x5a14a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a14a0(float* arg1, int32_t arg2, float arg3, float arg4, float arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r6 = fconvert.t(0.5)
    arg2 = fconvert.s(float.t(arg2) + x87_r6)
    long double x87_r6_2 = fconvert.t(arg2)
    long double x87_r4 = fconvert.t(arg5)
    long double x87_r3_1 = fconvert.t(arg4)
    *arg1 = fconvert.s((x87_r6_2 + x87_r4) / x87_r3_1)
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686950(mxcsr, x87control, 
        fconvert.d(x87_r6 + fconvert.t(fconvert.s((x87_r4
            + fconvert.t(fconvert.s(x87_r6_2 - fconvert.t(arg3)))) / x87_r3_1))))
    *arg6 = sub_685f40(st0)
    int32_t result = sub_685f40(sub_686950(mxcsr, x87control_1, 
        fconvert.d(fconvert.t(fconvert.s((fconvert.t(fconvert.s(fconvert.t(arg2) + fconvert.t(arg3)))
            + fconvert.t(arg5)) / fconvert.t(arg4))) - fconvert.t(0.5))))
    *arg7 = result
    return result
}

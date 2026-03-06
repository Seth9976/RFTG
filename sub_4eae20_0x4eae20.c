// 函数名称: sub_4eae20
// 虚拟地址: 0x4eae20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4eae20(float* arg1 @ esi, float* arg2 @ edi, float* arg3)
{
    // 第一条实际指令: float* entry_ebx
    float* entry_ebx
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686860(mxcsr, x87control, fconvert.t(*entry_ebx))
    *arg1 = fconvert.s(fconvert.t(fconvert.s(st0)) * fconvert.t(*arg2))
    int16_t x87control_2
    long double st0_1
    st0_1, x87control_2 = sub_686ea0(mxcsr, x87control_1, fconvert.t(*entry_ebx))
    arg1[3] = fconvert.s(fconvert.t(fconvert.s(st0_1)) * fconvert.t(*arg2))
    arg1[6] = fconvert.s(float.t(0))
    int16_t x87control_3
    long double st0_2
    st0_2, x87control_3 = sub_686ea0(mxcsr, x87control_2, fconvert.t(entry_ebx[1]))
    arg1[1] = fconvert.s(fneg(fconvert.t(fconvert.s(st0_2))) * fconvert.t(arg2[1]))
    arg1[4] = fconvert.s(
        fconvert.t(fconvert.s(sub_686860(mxcsr, x87control_3, fconvert.t(entry_ebx[1]))))
        * fconvert.t(arg2[1]))
    arg1[7] = fconvert.s(float.t(0))
    arg1[2] = fconvert.s(fconvert.t(*arg3))
    arg1[5] = fconvert.s(fconvert.t(arg3[1]))
    arg1[8] = fconvert.s(float.t(1))
    return arg3
}

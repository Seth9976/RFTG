// 函数名称: sub_406230
// 虚拟地址: 0x406230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_406230(int32_t* arg1 @ esi, float* arg2 @ edi, float arg3)
{
    // 第一条实际指令: arg3 = fconvert.s(fconvert.t(arg3) * fconvert.t(0.5))
    arg3 = fconvert.s(fconvert.t(arg3) * fconvert.t(0.5))
    int32_t ecx
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, ecx = sub_686860(mxcsr, x87control, fconvert.t(arg3))
    int32_t var_24 = ecx
    arg1[3] = fconvert.s(fconvert.t(fconvert.s(st0)))
    long double x87_r6 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(arg3)))))
    long double x87_r6_2 = fconvert.t(arg2[1])
    *arg1 = fconvert.s(fconvert.t(*arg2) * x87_r6)
    arg1[1] = fconvert.s(x87_r6_2 * x87_r6)
    arg1[2] = fconvert.s(x87_r6 * fconvert.t(arg2[2]))
    return arg1
}

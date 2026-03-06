// 函数名称: sub_4f6020
// 虚拟地址: 0x4f6020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4f6020(float* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: arg1[3] = fconvert.s(fconvert.t(arg2[3]) * fconvert.t(arg3[3]))
    arg1[3] = fconvert.s(fconvert.t(arg2[3]) * fconvert.t(arg3[3]))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
    float var_8_1 = fconvert.s(x87_r6 * fconvert.t(arg2[1]))
    long double x87_r7_9 = fconvert.t(arg3[1])
    *arg1 = fconvert.s(fconvert.t(*arg3) + fconvert.t(fconvert.s(fconvert.t(*arg2) * x87_r6)))
    long double x87_r7_11 = fconvert.t(arg3[2])
    arg1[1] = fconvert.s(x87_r7_9 + fconvert.t(var_8_1))
    long double x87_r7_12 = x87_r7_11 * fconvert.t(arg2[2])
    arg1[8] = arg3[8]
    arg1[9] = arg3[9]
    arg1[2] = fconvert.s(x87_r7_12)
    long double x87_r7_14 = fconvert.t(arg3[4]) * fconvert.t(arg2[4])
    arg1[0xa] = arg3[0xa]
    arg1[0xb] = arg3[0xb]
    int32_t esi_6 = arg3[0xc]
    arg1[4] = fconvert.s(x87_r7_14)
    long double x87_r7_15 = fconvert.t(arg3[5])
    arg1[0xc] = esi_6
    long double x87_r7_16 = x87_r7_15 * fconvert.t(arg2[5])
    int32_t edx = arg3[6]
    arg1[0xd] = arg3[0xd]
    int32_t esi_8 = arg3[0xe]
    arg1[5] = fconvert.s(x87_r7_16)
    arg1[0xe] = esi_8
    int32_t ecx = arg3[7]
    arg1[0xf] = arg3[0xf]
    arg1[6] = edx
    arg1[7] = ecx
}

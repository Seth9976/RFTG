// 函数名称: sub_4ef140
// 虚拟地址: 0x4ef140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4ef140(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: float var_c = fconvert.s(fconvert.t(*arg3) * fconvert.t(arg1[4]) + fconvert.t(arg3[1]) * fconvert.t(arg1[5]) + fconvert.t(arg3[2]) * fconvert.t(arg1[6]) + fconvert.t(arg1[7]))
    float var_c = fconvert.s(fconvert.t(*arg3) * fconvert.t(arg1[4])
        + fconvert.t(arg3[1]) * fconvert.t(arg1[5]) + fconvert.t(arg3[2]) * fconvert.t(arg1[6])
        + fconvert.t(arg1[7]))
    long double x87_r7_14 = fconvert.t(*arg3) * fconvert.t(arg1[8])
        + fconvert.t(arg3[1]) * fconvert.t(arg1[9]) + fconvert.t(arg3[2]) * fconvert.t(arg1[0xa])
        + fconvert.t(arg1[0xb])
    *arg3 = fconvert.s(fconvert.t(*arg3) * fconvert.t(*arg1) + fconvert.t(arg3[1]) * fconvert.t(arg1[1])
        + fconvert.t(arg3[2]) * fconvert.t(arg1[2]) + fconvert.t(arg1[3]))
    arg3[1] = var_c
    arg3[2] = fconvert.s(x87_r7_14)
    float var_c_1 = fconvert.s(fconvert.t(arg3[4]) * fconvert.t(arg1[5])
        + fconvert.t(arg3[3]) * fconvert.t(arg1[4]) + fconvert.t(arg1[6]) * fconvert.t(arg3[5])
        + fconvert.t(arg1[7]))
    long double x87_r7_29 = fconvert.t(arg3[3]) * fconvert.t(arg1[8])
        + fconvert.t(arg3[4]) * fconvert.t(arg1[9]) + fconvert.t(arg1[0xa]) * fconvert.t(arg3[5])
        + fconvert.t(arg1[0xb])
    arg3[3] = fconvert.s(fconvert.t(arg3[3]) * fconvert.t(*arg1)
        + fconvert.t(arg3[4]) * fconvert.t(arg1[1]) + fconvert.t(arg3[5]) * fconvert.t(arg1[2])
        + fconvert.t(arg1[3]))
    arg3[4] = var_c_1
    arg3[5] = fconvert.s(x87_r7_29)
    float var_c_2 = fconvert.s(fconvert.t(arg3[7]) * fconvert.t(arg1[5])
        + fconvert.t(arg3[6]) * fconvert.t(arg1[4]) + fconvert.t(arg1[6]) * fconvert.t(arg3[8])
        + fconvert.t(arg1[7]))
    long double x87_r7_44 = fconvert.t(arg3[6]) * fconvert.t(arg1[8])
        + fconvert.t(arg3[7]) * fconvert.t(arg1[9]) + fconvert.t(arg1[0xa]) * fconvert.t(arg3[8])
        + fconvert.t(arg1[0xb])
    arg3[6] = fconvert.s(fconvert.t(arg3[6]) * fconvert.t(*arg1)
        + fconvert.t(arg3[7]) * fconvert.t(arg1[1]) + fconvert.t(arg3[8]) * fconvert.t(arg1[2])
        + fconvert.t(arg1[3]))
    arg3[7] = var_c_2
    arg3[8] = fconvert.s(x87_r7_44)
    float var_c_3 = fconvert.s(fconvert.t(arg3[0xa]) * fconvert.t(arg1[5])
        + fconvert.t(arg3[9]) * fconvert.t(arg1[4]) + fconvert.t(arg1[6]) * fconvert.t(arg3[0xb])
        + fconvert.t(arg1[7]))
    long double x87_r7_59 = fconvert.t(arg3[9]) * fconvert.t(arg1[8])
        + fconvert.t(arg3[0xa]) * fconvert.t(arg1[9]) + fconvert.t(arg1[0xa]) * fconvert.t(arg3[0xb])
        + fconvert.t(arg1[0xb])
    arg3[9] = fconvert.s(fconvert.t(arg3[9]) * fconvert.t(*arg1)
        + fconvert.t(arg3[0xa]) * fconvert.t(arg1[1]) + fconvert.t(arg3[0xb]) * fconvert.t(arg1[2])
        + fconvert.t(arg1[3]))
    arg3[0xa] = var_c_3
    float result = fconvert.s(x87_r7_59)
    arg3[0xb] = result
    return result
}

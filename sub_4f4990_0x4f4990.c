// 函数名称: sub_4f4990
// 虚拟地址: 0x4f4990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4f4990(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, float arg5)
{
    // 第一条实际指令: void var_2c
    void var_2c
    int32_t* eax_1 = sub_4f4560(arg5 i+ 0x20, arg5 i+ 0x30, &var_2c, *arg3, arg3[1], arg3[2], arg3[3])
    int32_t edx_3 = eax_1[1]
    *arg4 = *eax_1
    int32_t ecx_2 = eax_1[2]
    arg4[1] = edx_3
    int32_t edx_4 = eax_1[3]
    arg4[2] = ecx_2
    arg4[3] = edx_4
    float eax_2
    float edx_5
    eax_2, edx_5 = sub_40af40(arg4)
    float eax_3
    float edx_6
    eax_3, edx_6 = sub_4fc8c0(arg4)
    float* eax_4 = arg5
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(eax_4[3])))
    float var_c_1 = fconvert.s(fconvert.t(*eax_4) + fconvert.t(fconvert.s(fconvert.t(eax_3) * x87_r6)))
    float var_8_1 =
        fconvert.s(fconvert.t(eax_4[1]) + fconvert.t(fconvert.s(x87_r6 * fconvert.t(edx_6))))
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(eax_4[3])))
    long double x87_r7_19 = fconvert.t(fconvert.s(fconvert.t(eax_4[1])
        + fconvert.t(fconvert.s(x87_r6_2 * fconvert.t(edx_5)))))
    *arg4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*eax_4)
        + fconvert.t(fconvert.s(fconvert.t(eax_2) * x87_r6_2)))))
    arg4[1] = fconvert.s(x87_r7_19)
    float var_10_2 = fconvert.s(fconvert.t(var_8_1))
    long double x87_r6_4 = float.t(1)
    long double x87_r7_23 = fconvert.t(eax_4[4]) + x87_r6_4
    arg4[2] = fconvert.s(fconvert.t(var_c_1))
    arg4[3] = var_10_2
    long double x87_r6_6 = fconvert.t(fconvert.s(x87_r7_23))
    float var_14_3 =
        fconvert.s(x87_r6_6 * (fconvert.t(arg4[2]) - fconvert.t(eax_4[6])) + fconvert.t(eax_4[6]))
    long double x87_r6_10 = fconvert.t(fconvert.s(x87_r6_4 + fconvert.t(eax_4[5])))
    float var_18_1 =
        fconvert.s((fconvert.t(arg4[1]) - fconvert.t(eax_4[7])) * x87_r6_10 + fconvert.t(eax_4[7]))
    long double x87_r7_39 =
        x87_r6_10 * (fconvert.t(arg4[3]) - fconvert.t(eax_4[7])) + fconvert.t(eax_4[7])
    *arg4 = fconvert.s((fconvert.t(*arg4) - fconvert.t(eax_4[6])) * x87_r6_6 + fconvert.t(eax_4[6]))
    arg4[1] = var_18_1
    float var_10_3 = fconvert.s(x87_r7_39)
    arg4[2] = var_14_3
    arg4[3] = var_10_3
    return arg4
}

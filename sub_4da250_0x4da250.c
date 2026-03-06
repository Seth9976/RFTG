// 函数名称: sub_4da250
// 虚拟地址: 0x4da250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4da250(float* arg1, int32_t* arg2 @ esi, float arg3)
{
    // 第一条实际指令: long double x87_r7_1 = fconvert.t(arg1[1])
    long double x87_r7_1 = fconvert.t(arg1[1])
    float var_28 = fconvert.s(fconvert.t(*arg1))
    float var_24 = fconvert.s(x87_r7_1)
    long double x87_r6 = fconvert.t(arg3)
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*arg1) + x87_r6))
    float var_20 = fconvert.s(x87_r6_2)
    float var_1c = fconvert.s(fconvert.t(arg1[3]))
    long double x87_r5_4 = fconvert.t(arg1[1])
    float var_38 = fconvert.s(fconvert.t(arg1[2]) - x87_r6)
    float var_34 = fconvert.s(x87_r5_4)
    float var_30 = fconvert.s(fconvert.t(arg1[2]))
    float var_2c = fconvert.s(fconvert.t(arg1[3]))
    long double x87_r5_7 = fconvert.t(arg1[1])
    float var_48 = fconvert.s(x87_r6_2)
    float var_44 = fconvert.s(x87_r5_7)
    long double x87_r5_10 = fconvert.t(fconvert.s(fconvert.t(arg1[2]) - x87_r6))
    float var_40 = fconvert.s(x87_r5_10)
    float var_3c = fconvert.s(fconvert.t(arg1[1]) + x87_r6)
    float var_54 = fconvert.s(fconvert.t(arg1[3]) - x87_r6)
    float var_10_3 = fconvert.s(x87_r5_10)
    long double x87_r7_7 = fconvert.t(arg1[3])
    float var_58 = fconvert.s(x87_r6_2)
    float var_c_3 = fconvert.s(x87_r7_7)
    float var_50 = var_10_3
    float var_4c = var_c_3
    int32_t eax_2
    int32_t edx_7
    int80_t st0
    st0, eax_2, edx_7 = sub_4da140(var_c_3, var_10_3, &var_28, arg2)
    int32_t eax_3
    int32_t edx_8
    int80_t st0_1
    st0_1, eax_3, edx_8 = sub_4da140(eax_2, edx_7, &var_38, arg2)
    int32_t eax_4
    int32_t edx_9
    int80_t st0_2
    st0_2, eax_4, edx_9 = sub_4da140(eax_3, edx_8, &var_48, arg2)
    int32_t result
    int80_t st0_3
    st0_3, result = sub_4da140(eax_4, edx_9, &var_58, arg2)
    return result
}

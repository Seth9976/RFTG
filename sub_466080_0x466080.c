// 函数名称: sub_466080
// 虚拟地址: 0x466080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_466080(float* arg1, int32_t arg2, float* arg3, float* arg4 @ esi, float arg5)
{
    // 第一条实际指令: float edi = arg3[1]
    float edi = arg3[1]
    long double x87_r6 = fconvert.t(arg5)
    float var_18 =
        fconvert.s((fconvert.t(arg3[5]) - fconvert.t(arg1[5])) * x87_r6 + fconvert.t(arg1[5]))
    long double x87_r6_2 = fconvert.t(arg3[6])
    arg4[5] = var_18
    long double x87_r6_6 = fconvert.t(arg3[7])
    arg4[6] = fconvert.s((x87_r6_2 - fconvert.t(arg1[6])) * x87_r6 + fconvert.t(arg1[6]))
    long double x87_r6_10 = fconvert.t(*arg1)
    arg4[7] = fconvert.s((x87_r6_6 - fconvert.t(arg1[7])) * x87_r6 + fconvert.t(arg1[7]))
    long double x87_r5_2 = fconvert.t(fconvert.s(x87_r6_10))
    float edi_1 = arg3[2]
    float edi_2 = arg3[3]
    float ecx = arg3[4]
    float var_34 = ecx
    *arg4 = fconvert.s((fconvert.t(*arg3) - x87_r5_2) * x87_r6 + x87_r5_2)
    float* eax = sub_465f40(arg1, &var_18, &arg1[1], fconvert.s(x87_r6), edi, edi_1, edi_2, ecx)
    int32_t ecx_2 = eax[1]
    arg4[1] = *eax
    int32_t edx_5 = eax[2]
    int32_t eax_1 = eax[3]
    arg4[2] = ecx_2
    arg4[3] = edx_5
    arg4[4] = eax_1
    return arg4
}

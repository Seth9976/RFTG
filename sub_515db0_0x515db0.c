// 函数名称: sub_515db0
// 虚拟地址: 0x515db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_515db0(float* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    arg2[7]
    long double x87_r6 = float.t(1)
    float var_18 = fconvert.s(x87_r6 / fconvert.t(arg2[8]))
    long double x87_r7_3 = x87_r6 / fconvert.t(arg2[9])
    arg1[7] = fconvert.s(x87_r6 / x87_r6)
    arg1[8] = var_18
    arg1[9] = fconvert.s(x87_r7_3)
    float ecx_2 = arg2[1]
    float var_2c = *arg2
    float edx_2 = arg2[2]
    var_2c = fconvert.s(fneg(fconvert.t(var_2c)))
    int32_t ecx_3 = arg2[3]
    float var_28_1 = fconvert.s(fneg(fconvert.t(ecx_2)))
    *arg1 = var_2c
    arg1[1] = var_28_1
    float var_24_1 = fconvert.s(fneg(fconvert.t(edx_2)))
    arg1[2] = var_24_1
    arg1[3] = ecx_3
    sub_405970(&var_2c, &arg2[4], arg1)
    float var_38 = fconvert.s(fneg(fconvert.t(arg1[8])))
    float var_34 = fconvert.s(fneg(fconvert.t(arg1[9])))
    var_2c = fconvert.s(fconvert.t(var_2c) * fconvert.t(fconvert.s(fneg(fconvert.t(arg1[7])))))
    arg1[4] = var_2c
    arg1[5] = fconvert.s(fconvert.t(var_28_1) * fconvert.t(var_38))
    arg1[6] = fconvert.s(fconvert.t(var_24_1) * fconvert.t(var_34))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

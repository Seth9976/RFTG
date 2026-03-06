// 函数名称: sub_508860
// 虚拟地址: 0x508860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_508860(float* arg1 @ esi, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float ecx_1 = arg2[2]
    float var_1c_1 = fconvert.s(fneg(fconvert.t(*arg2)))
    float var_18 = arg2[1]
    int32_t ecx_2 = arg2[3]
    var_18 = fconvert.s(fneg(fconvert.t(var_18)))
    *arg1 = var_1c_1
    float var_14_1 = fconvert.s(fneg(fconvert.t(ecx_1)))
    arg1[1] = var_18
    long double x87_r7_7 = fneg(fconvert.t(arg2[4]))
    arg1[2] = var_14_1
    float var_2c = fconvert.s(x87_r7_7)
    arg1[3] = ecx_2
    float var_28 = fconvert.s(fneg(fconvert.t(arg2[5])))
    long double x87_r7_11 = fneg(fconvert.t(arg2[6]))
    var_18 = var_2c
    float var_24 = fconvert.s(x87_r7_11)
    float var_14_2 = var_28
    float var_10 = var_24
    sub_405970(&var_2c, &var_18, arg1)
    arg1[4] = var_2c
    arg1[5] = var_28
    arg1[6] = var_24
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

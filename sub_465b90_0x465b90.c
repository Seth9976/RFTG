// 函数名称: sub_465b90
// 虚拟地址: 0x465b90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_465b90(float* arg1 @ edi, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_1c = fconvert.s(fconvert.t(*arg2))
    float var_18 = fconvert.s(fconvert.t(arg2[1]))
    long double x87_r6 = fconvert.t(2.0)
    float var_30 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[2]))) * x87_r6)
    long double x87_r6_4 = fconvert.t(3.1415927410125732)
    float var_1c_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1c) * x87_r6)) * x87_r6_4)
    float var_18_1 = fconvert.s(x87_r6_4 * fconvert.t(fconvert.s(x87_r6 * fconvert.t(var_18))))
    long double x87_r6_8 = fconvert.t(0.0027777778450399637)
    var_30 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_30) * x87_r6_4)) * x87_r6_8)
    float* eax_3 = sub_465a90(&var_30, fconvert.s(fconvert.t(var_30)), 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_1c_1) * x87_r6_8))), 
        fconvert.s(fconvert.t(fconvert.s(x87_r6_8 * fconvert.t(var_18_1)))))
    int32_t edx = eax_3[1]
    *arg1 = *eax_3
    int32_t ecx_1 = eax_3[2]
    arg1[1] = edx
    int32_t edx_1 = eax_3[3]
    arg1[2] = ecx_1
    arg1[3] = edx_1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

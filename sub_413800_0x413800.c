// 函数名称: sub_413800
// 虚拟地址: 0x413800
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_413800(float* arg1, float* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* entry_ebx
    float var_54 = fconvert.s(fconvert.t(arg2[2]) * fconvert.t(entry_ebx[1])
        - fconvert.t(arg2[1]) * fconvert.t(entry_ebx[2]))
    float var_14 = fconvert.s(fconvert.t(*arg2) * fconvert.t(entry_ebx[2])
        - fconvert.t(*entry_ebx) * fconvert.t(arg2[2]))
    long double x87_r7_7 = fconvert.t(*entry_ebx) * fconvert.t(arg2[1])
    long double x87_r6_5 = fconvert.t(*arg2) * fconvert.t(entry_ebx[1])
    float var_18 = var_54
    float var_10 = fconvert.s(x87_r7_7 - x87_r6_5)
    float* eax_4 = sub_4132a0(&var_18, &var_54)
    int32_t edx_1 = eax_4[1]
    int32_t eax_5 = eax_4[2]
    var_18 = *eax_4
    int32_t var_14_1 = edx_1
    int32_t var_10_1 = eax_5
    float var_40[0x9]
    sub_413450(&var_18, 0x840740, entry_ebx, 0x840728, &var_40)
    float var_1c
    float* eax_7 = sub_413580(&var_40, &var_1c)
    *arg1 = *eax_7
    arg1[1] = eax_7[1]
    int32_t eax_8 = eax_7[3]
    arg1[2] = eax_7[2]
    arg1[3] = eax_8
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

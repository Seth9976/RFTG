// 函数名称: sub_5087d0
// 虚拟地址: 0x5087d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_5087d0(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_24
    float* entry_ebx
    sub_405970(&var_24, &entry_ebx[4], arg2)
    var_24 = fconvert.s(fconvert.t(arg2[4]) + fconvert.t(var_24))
    long double x87_r7_2 = fconvert.t(arg2[5])
    arg1[4] = var_24
    float var_20
    float var_20_1 = fconvert.s(x87_r7_2 + fconvert.t(var_20))
    long double x87_r7_4 = fconvert.t(arg2[6])
    arg1[5] = var_20_1
    float var_1c
    float var_1c_1 = fconvert.s(x87_r7_4 + fconvert.t(var_1c))
    arg1[6] = var_1c_1
    sub_405ee0(&var_24, entry_ebx, arg2)
    *arg1 = var_24
    arg1[1] = var_20_1
    arg1[2] = var_1c_1
    int32_t var_18
    arg1[3] = var_18
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

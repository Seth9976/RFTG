// 函数名称: sub_42f700
// 虚拟地址: 0x42f700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_42f700(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* eax_4 = *(data_27e7a40 + 0x548) + 0x4389c
    float var_30[0x5]
    int32_t ecx
    long double x87_r1
    float* eax_5 = sub_4679a0(eax_4, &var_30, ecx, x87_r1, &var_30, arg2, eax_4)
    int32_t edx_1 = eax_5[1]
    float var_1c = *eax_5
    int32_t var_18 = edx_1
    int32_t var_14 = eax_5[2]
    int32_t var_10 = eax_5[3]
    __builtin_memcpy(arg3, sub_430000(&var_1c, 0), 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg3
}

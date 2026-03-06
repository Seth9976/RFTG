// 函数名称: sub_4f72a0
// 虚拟地址: 0x4f72a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4f72a0(int32_t arg1, char arg2, void* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    
    if (*(data_27e7bbc + 0x18) == 0)
        float* eax_2
        eax_2.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_2
    
    int32_t var_54 = 0
    float var_30
    float entry_ebx
    int32_t* eax_4 = sub_4f52e0(entry_ebx, &var_30, arg3, arg2)
    int32_t ecx_3 = eax_4[1]
    float var_10_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(entry_ebx i+ 0xc)))))
    float var_40 = *eax_4
    long double x87_r7_2 = fconvert.t(var_10_1)
    float var_10_2 = fconvert.s(x87_r7_2)
    int32_t var_3c = ecx_3
    int32_t var_38 = eax_4[2]
    long double x87_r6 = float.t(0)
    int32_t var_34 = eax_4[3]
    long double x87_r5 = fconvert.t(fconvert.s(x87_r7_2))
    var_30 = fconvert.s((fconvert.t(*(arg3 + 0x108)) - x87_r6) * x87_r5 + x87_r6)
    long double x87_r5_3 = fconvert.t(*(arg3 + 0x110))
    float var_1c = var_30
    float var_14_1 = fconvert.s(x87_r5 * (x87_r5_3 - x87_r6) + x87_r6)
    long double x87_r5_5 = fconvert.t(var_10_2)
    float var_18 = fconvert.s((fconvert.t(*(arg3 + 0x10c)) - x87_r6) * x87_r5_5 + x87_r6)
    float var_10_3 = fconvert.s(x87_r6 + x87_r5_5 * (fconvert.t(*(arg3 + 0x114)) - x87_r6))
    float* eax_7 = sub_4fc740(&var_30, &var_40, &var_1c)
    int32_t ecx_7 = eax_7[1]
    var_40 = *eax_7
    int32_t var_3c_1 = ecx_7
    int32_t var_38_1 = eax_7[2]
    int32_t var_34_1 = eax_7[3]
    int32_t eax_9 = sub_4057a0(&var_40, arg4)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_9
}

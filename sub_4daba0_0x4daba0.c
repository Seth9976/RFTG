// 函数名称: sub_4daba0
// 虚拟地址: 0x4daba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_4daba0(int32_t arg1, int32_t* arg2, float* arg3, float* arg4, float* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* esi = data_27e7fe0
    
    if (*(esi + 0x38) != 0)
        int32_t eax_3
        int32_t* entry_ebx
        int80_t st0
        st0, eax_3 = sub_4da780(arg4, arg2, arg3, entry_ebx, arg4, esi + 0x28, arg5)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_3
    
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    long double x87_r4 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    float var_50 =
        fconvert.s(fconvert.t(arg4[1]) * x87_r4 + fconvert.t(*arg4) * x87_r6 + fconvert.t(arg4[2]))
    float var_4c =
        fconvert.s(x87_r4 * fconvert.t(arg4[4]) + x87_r6 * fconvert.t(arg4[3]) + fconvert.t(arg4[5]))
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    long double x87_r4_2 = fconvert.t(fconvert.s(fconvert.t(arg3[2])))
    float var_48 =
        fconvert.s(fconvert.t(*arg4) * x87_r4_2 + fconvert.t(arg4[1]) * x87_r6_2 + fconvert.t(arg4[2]))
    float var_44 = fconvert.s(x87_r4_2 * fconvert.t(arg4[3]) + x87_r6_2 * fconvert.t(arg4[4])
        + fconvert.t(arg4[5]))
    long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
    long double x87_r4_4 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    float var_40 =
        fconvert.s(fconvert.t(*arg4) * x87_r4_4 + fconvert.t(arg4[1]) * x87_r6_4 + fconvert.t(arg4[2]))
    float var_3c = fconvert.s(x87_r4_4 * fconvert.t(arg4[3]) + x87_r6_4 * fconvert.t(arg4[4])
        + fconvert.t(arg4[5]))
    long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
    long double x87_r4_6 = fconvert.t(fconvert.s(fconvert.t(arg3[2])))
    float var_38 =
        fconvert.s(fconvert.t(*arg4) * x87_r4_6 + fconvert.t(arg4[1]) * x87_r6_6 + fconvert.t(arg4[2]))
    float var_34 = fconvert.s(x87_r4_6 * fconvert.t(arg4[3]) + x87_r6_6 * fconvert.t(arg4[4])
        + fconvert.t(arg4[5]))
    float var_28 = fconvert.s(fconvert.t(*arg5))
    float var_24 = fconvert.s(fconvert.t(arg5[1]))
    float var_20 = fconvert.s(fconvert.t(arg5[2]))
    float var_1c = fconvert.s(fconvert.t(arg5[1]))
    float var_18 = fconvert.s(fconvert.t(*arg5))
    float var_14 = fconvert.s(fconvert.t(arg5[3]))
    float var_10 = fconvert.s(fconvert.t(arg5[2]))
    float var_c = fconvert.s(fconvert.t(arg5[3]))
    uint32_t eax_5 = sub_4d9b00(arg2, nullptr, &var_50, &var_28)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_5
}

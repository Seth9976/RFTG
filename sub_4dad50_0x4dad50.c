// 函数名称: sub_4dad50
// 虚拟地址: 0x4dad50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4dad50()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_b4[0x10]
    int32_t edx
    float* entry_ebx
    sub_406370(&var_b4, edx, entry_ebx)
    long double x87_r7_2 = fneg(fconvert.t(data_30d7348)) * fconvert.t(0.5)
    float var_74[0x13]
    __builtin_memcpy(&var_74, &var_b4, 0x40)
    float var_24 = fconvert.s(x87_r7_2)
    int32_t ecx_1
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, ecx_1 = sub_686860(mxcsr, x87control, fconvert.t(var_24))
    int32_t var_100 = ecx_1
    float var_28 = fconvert.s(fconvert.t(fconvert.s(st0)))
    long double x87_r7_8 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(var_24)))))
    float var_1c = fconvert.s(x87_r7_8)
    var_1c = var_1c
    float var_10 = var_28
    long double x87_r7_10 = fconvert.t(fconvert.s(x87_r7_8 * fconvert.t(0.0)))
    float var_14 = fconvert.s(x87_r7_10)
    float var_18_1 = fconvert.s(x87_r7_10)
    float var_14_1 = var_14
    float var_f4[0x10]
    sub_4062a0(&var_f4, var_14, &var_1c)
    __builtin_memcpy(&var_b4, &var_f4, 0x40)
    sub_406020(&var_f4, &var_74, &var_b4)
    void* eax_7 = data_27e7fe4
    __builtin_memcpy(&var_74, &var_f4, 0x40)
    *(eax_7 + 0xdc) = 1
    __builtin_memcpy(eax_7 + 0x9c, &var_74, 0x40)
    int32_t result = sub_4e2000(&entry_ebx[5])
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

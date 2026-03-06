// 函数名称: sub_4dae90
// 虚拟地址: 0x4dae90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4dae90(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_70
    float var_58
    float var_30
    
    if ((data_3160edc & 1) == 0)
        long double x87_r7_1 = fconvert.t(-0f)
        data_3160edc.d |= 1
        var_30 = fconvert.s(x87_r7_1)
        float var_2c_1 = fconvert.s(fconvert.t(-1f))
        float var_28_1 = fconvert.s(x87_r7_1)
        sub_413450(&data_840734, &var_30, 0x840740, &data_8409b4, &var_58)
        float* eax_3 = sub_413580(&var_58, &var_70)
        data_3160ecc = *eax_3
        data_3160ed0 = eax_3[1]
        data_3160ed4 = eax_3[2]
        data_3160ed8 = eax_3[3]
    
    long double x87_r6_2 = fconvert.t(0.5)
    float* entry_ebx
    long double x87_r7_3 = fconvert.t(entry_ebx[1]) * x87_r6_2
    long double x87_r5 = fconvert.t(data_27e7fe8)
    float var_50
    __builtin_memcpy(&var_50, 0x27e8074, 0x1c)
    float var_5c = fconvert.s(x87_r5 / x87_r7_3)
    long double x87_r5_4 = fconvert.t(var_5c)
    var_30 = fconvert.s(x87_r6_2 * fneg(fconvert.t(*entry_ebx)) * x87_r5_4)
    float var_2c_2 = fconvert.s(float.t(1))
    float var_28_2 = fconvert.s(x87_r7_3 * x87_r5_4)
    sub_405970(&var_70, &var_30, &var_50)
    float var_6c
    float edx_7 = var_6c
    float var_40
    var_30 = fconvert.s(fconvert.t(var_70) + fconvert.t(var_40))
    float var_3c
    float var_2c_3 = fconvert.s(fconvert.t(edx_7) + fconvert.t(var_3c))
    float var_68
    float var_38
    float var_28_3 = fconvert.s(fconvert.t(var_68) + fconvert.t(var_38))
    sub_405ee0(&var_70, &data_3160ecc, &var_50)
    float ecx_8 = var_70
    float edx_8 = var_6c
    var_58 = fconvert.s(fconvert.t(var_5c))
    float var_54 = ecx_8
    var_50 = edx_8
    float var_4c = var_68
    float var_44 = var_30
    float var_40_1 = var_2c_3
    int32_t var_64
    int32_t var_48 = var_64
    float var_3c_1 = var_28_3
    __builtin_memcpy(arg1, &var_58, 0x20)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

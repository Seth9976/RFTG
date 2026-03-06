// 函数名称: sub_4ec740
// 虚拟地址: 0x4ec740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4ec740(int32_t* arg1 @ esi, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = data_3160084
    float var_30 = arg2
    
    if ((ebx.b & 1) == 0)
        ebx |= 1
        long double x87_r7_2 = fconvert.t(data_be1abc) / fconvert.t(360.0)
        data_3160084 = ebx
        data_316007c = fconvert.s(x87_r7_2)
    
    float var_48_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_30) * fconvert.t(data_316007c)))
        * fconvert.t(0.5))
    int32_t ecx_1
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, ecx_1 = sub_686860(mxcsr, x87control, fconvert.t(var_48_1))
    int32_t var_64 = ecx_1
    float var_4c = fconvert.s(fconvert.t(fconvert.s(st0)))
    int16_t x87control_1
    long double st0_1
    st0_1, x87control_1 = sub_406680(fconvert.s(fconvert.t(var_48_1)))
    long double x87_r7_12 = fconvert.t(fconvert.s(st0_1))
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(0.0) * x87_r7_12))
    float var_20 = fconvert.s(x87_r6_2)
    float var_1c = fconvert.s(x87_r6_2)
    float var_40 = var_20
    float var_3c = var_1c
    float var_38 = fconvert.s(x87_r7_12)
    float var_34 = var_4c
    
    if ((ebx.b & 1) == 0)
        ebx |= 1
        long double x87_r7_14 = fconvert.t(data_be1abc) / fconvert.t(360.0)
        data_3160084 = ebx
        data_316007c = fconvert.s(x87_r7_14)
    
    float var_48_2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3) * fconvert.t(data_316007c)))
        * fconvert.t(0.5))
    int32_t ecx_3
    long double st0_2
    st0_2, ecx_3 = sub_686860(mxcsr, x87control_1, fconvert.t(var_48_2))
    int32_t var_64_2 = ecx_3
    float var_4c_1 = fconvert.s(fconvert.t(fconvert.s(st0_2)))
    int16_t x87control_2
    long double st0_3
    st0_3, x87control_2 = sub_406680(fconvert.s(fconvert.t(var_48_2)))
    long double x87_r7_24 = fconvert.t(fconvert.s(st0_3))
    var_20 = fconvert.s(x87_r7_24)
    var_20 = var_20
    long double x87_r7_26 = fconvert.t(fconvert.s(x87_r7_24 * fconvert.t(0.0)))
    float var_1c_2 = fconvert.s(x87_r7_26)
    float var_18_2 = fconvert.s(x87_r7_26)
    float var_14 = var_4c_1
    
    if ((ebx.b & 1) == 0)
        long double x87_r7_28 = fconvert.t(data_be1abc) / fconvert.t(360.0)
        data_3160084 = ebx | 1
        data_316007c = fconvert.s(x87_r7_28)
    
    float var_48_3 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg4) * fconvert.t(data_316007c)))
        * fconvert.t(0.5))
    int32_t ecx_6
    long double st0_4
    st0_4, ecx_6 = sub_686860(mxcsr, x87control_2, fconvert.t(var_48_3))
    int32_t var_64_4 = ecx_6
    float var_4c_2 = fconvert.s(fconvert.t(fconvert.s(st0_4)))
    long double x87_r7_38 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(var_48_3)))))
    long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(0.0) * x87_r7_38))
    var_30 = fconvert.s(x87_r6_5)
    float var_28_2 = fconvert.s(x87_r6_5)
    float var_2c_1 = fconvert.s(x87_r7_38)
    var_30 = var_30
    float var_2c_2 = var_2c_1
    float var_24 = var_4c_2
    float var_58
    sub_405ee0(&var_58, &var_40, &var_20)
    var_40 = var_58
    int32_t var_54
    int32_t var_3c_1 = var_54
    int32_t var_50
    int32_t var_38_1 = var_50
    float var_34_1 = var_4c_2
    sub_405ee0(&var_58, &var_40, &var_30)
    *arg1 = var_58
    arg1[1] = var_54
    arg1[2] = var_50
    arg1[3] = var_4c_2
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}

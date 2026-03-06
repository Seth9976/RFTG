// 函数名称: sub_477530
// 虚拟地址: 0x477530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __fastcallsub_477530(float* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_2c
    int32_t edx
    float* entry_ebx
    sub_405900(&var_2c, edx, entry_ebx)
    int32_t var_24
    int32_t var_10 = var_24
    float var_18 = var_2c
    int32_t var_28
    int32_t var_14 = var_28
    int16_t x87control
    long double st0
    st0, x87control = sub_48b920(&var_18)
    float var_34 = fconvert.s(st0)
    float var_38_1 = fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(*arg1) * fconvert.t(-0.0030000000260770321)))
        * fconvert.t(0.5))
    int32_t ecx_2
    int32_t mxcsr
    long double st0_1
    st0_1, ecx_2 = sub_686860(mxcsr, x87control, fconvert.t(var_38_1))
    int32_t var_58 = ecx_2
    float var_40 = fconvert.s(fconvert.t(fconvert.s(st0_1)))
    long double x87_r7_10 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(var_38_1)))))
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(0.0) * x87_r7_10))
    var_2c = fconvert.s(x87_r6_2)
    float eax_5 = var_2c
    var_18 = fconvert.s(x87_r6_2)
    float var_24_1 = fconvert.s(x87_r7_10)
    long double x87_r7_12 = fconvert.t(data_be1acc) - fconvert.t(0.0099999997764825821)
    float var_1c = eax_5
    float var_14_1 = var_24_1
    float var_10_1 = var_40
    float var_30_5 = fconvert.s(sub_465dd0(
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_34)
            - fconvert.t(arg1[1]) * fconvert.t(-0.0030000000260770321)))), 
        fconvert.s(fconvert.t(0.00999999978f)), fconvert.s(fconvert.t(fconvert.s(x87_r7_12))))
        - fconvert.t(var_34))
    float var_4c
    sub_405ee0(&var_4c, entry_ebx, &var_1c)
    var_1c = var_4c
    float var_48
    var_18 = var_48
    float var_10_2 = var_40
    float* eax_8
    int16_t x87control_1
    eax_8, x87control_1 = sub_465ec0(&var_1c, &var_2c)
    int32_t edx_6 = eax_8[1]
    int32_t esi_2 = eax_8[2]
    int32_t eax_9 = eax_8[3]
    *entry_ebx = *eax_8
    entry_ebx[1] = edx_6
    entry_ebx[2] = esi_2
    entry_ebx[3] = eax_9
    sub_466130(&var_1c, edx_6, entry_ebx)
    float ecx_9 = var_1c
    float edx_7 = var_18
    float var_34_1 = fconvert.s(fneg(fconvert.t(var_30_5)) * fconvert.t(0.5))
    int32_t ecx_10
    long double st0_4
    st0_4, ecx_10 = sub_686860(mxcsr, x87control_1, fconvert.t(var_34_1))
    int32_t var_58_3 = ecx_10
    float result = fconvert.s(fconvert.t(fconvert.s(st0_4)))
    long double x87_r7_28 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(var_34_1)))))
    var_1c = fconvert.s(x87_r7_28 * fconvert.t(ecx_9))
    var_1c = var_1c
    var_18 = fconvert.s(fconvert.t(edx_7) * x87_r7_28)
    var_18 = var_18
    float result_1 = result
    float var_44
    float var_14_4 = fconvert.s(x87_r7_28 * fconvert.t(var_44))
    sub_405ee0(&var_4c, entry_ebx, &var_1c)
    *entry_ebx = var_4c
    entry_ebx[1] = var_48
    entry_ebx[2] = var_44
    entry_ebx[3] = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}

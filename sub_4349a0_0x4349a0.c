// 函数名称: sub_4349a0
// 虚拟地址: 0x4349a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4349a0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_692e4c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_5c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    data_3092a04
    char* edx
    
    if ((data_3165894 & 1) == 0)
        data_3165894.d |= 1
        int32_t var_8_1 = 0
        char const* const var_60_1 = "players"
        int32_t eax_4
        eax_4, edx = sub_510710(data_307ca3c, edx)
        data_3165890 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3165894 & 2) == 0)
        data_3165894.d |= 2
        int32_t var_8_3 = 1
        char const* const var_60_2 = "deck"
        data_316588c = sub_510710(data_307ca78, edx)
        int32_t var_8_4 = 0xffffffff
    
    int32_t eax_7 = sub_50eb00(data_3165890, 0)
    void var_3c
    int32_t eax_8
    int16_t x87control
    eax_8, x87control = sub_50faa0(eax_7, eax_7, data_316588c, &var_3c)
    float* entry_result
    __builtin_memcpy(entry_result, eax_8, 0x20)
    *entry_result = fconvert.s(fconvert.t(*entry_result) * fconvert.t(0.0010000000474974513))
    int32_t ecx_2
    int32_t mxcsr
    long double st0
    st0, ecx_2 = sub_686860(mxcsr, x87control, fconvert.t(1.5707963705062866))
    int32_t var_60_4 = ecx_2
    float var_40 = fconvert.s(fconvert.t(fconvert.s(st0)))
    int16_t x87control_1
    long double st0_1
    st0_1, x87control_1 = sub_406680(fconvert.s(fconvert.t(1.57079637f)))
    long double x87_r7_7 = fconvert.t(fconvert.s(st0_1))
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(0.0) * x87_r7_7))
    float var_2c = fconvert.s(x87_r6_2)
    float var_28 = fconvert.s(x87_r6_2)
    var_2c = var_2c
    float var_24_1 = fconvert.s(x87_r7_7)
    float var_28_1 = var_28
    float var_20 = var_40
    float var_4c
    sub_405ee0(&var_4c, &var_2c, &entry_result[1])
    long double x87_r7_9 = fconvert.t(data_be1ac0) * fconvert.t(0.5)
    entry_result[1] = var_4c
    float var_14_3 = fconvert.s(x87_r7_9)
    int32_t var_48
    entry_result[2] = var_48
    int32_t var_44
    entry_result[3] = var_44
    entry_result[4] = var_40
    int32_t ecx_7
    long double st0_2
    st0_2, ecx_7 = sub_686860(mxcsr, x87control_1, fconvert.t(var_14_3))
    int32_t var_60_6 = ecx_7
    float var_40_1 = fconvert.s(fconvert.t(fconvert.s(st0_2)))
    long double x87_r7_15 = fconvert.t(fconvert.s(sub_406680(fconvert.s(fconvert.t(var_14_3)))))
    var_2c = fconvert.s(x87_r7_15)
    var_2c = var_2c
    long double x87_r7_17 = fconvert.t(fconvert.s(x87_r7_15 * fconvert.t(0.0)))
    float var_28_3 = fconvert.s(x87_r7_17)
    float var_24_3 = fconvert.s(x87_r7_17)
    float var_20_1 = var_40_1
    sub_405ee0(&var_4c, &var_2c, &entry_result[1])
    long double x87_r7_19 = fconvert.t(entry_result[7]) + fconvert.t(0.02500000037252903)
    entry_result[1] = var_4c
    entry_result[7] = fconvert.s(x87_r7_19)
    entry_result[2] = var_48
    entry_result[3] = var_44
    entry_result[4] = var_40_1
    fsbase->NtTib.ExceptionList = ExceptionList
    return entry_result
}

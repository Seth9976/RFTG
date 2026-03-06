// 函数名称: sub_467c70
// 虚拟地址: 0x467c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_467c70(float* arg1, int32_t arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_WPBDI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_ec = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316568c & 1) == 0)
        data_316568c.d |= 1
        int32_t var_8_1 = 0
        data_3165688 = sub_4f5220(data_307c530, "goalcard_big")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_316568c & 2) == 0)
        data_316568c.d |= 2
        int32_t var_8_3 = 1
        data_3165684 = sub_4f5220(data_307c530, "goalcard_small")
        int32_t var_8_4 = 0xffffffff
    
    void var_dc
    int32_t eax_6
    int32_t edx_2
    int80_t result
    result, eax_6, edx_2 = sub_40a930(&var_dc)
    int32_t eax_7 = data_3165684
    void var_64
    __builtin_memcpy(&var_64, eax_6, 0x40)
    int32_t* eax_8 = sub_4f5350(eax_7, edx_2, data_307c530, &var_64)
    int32_t ecx_3 = eax_8[1]
    float var_78 = *eax_8
    int32_t edx_4 = eax_8[2]
    int32_t var_74 = ecx_3
    int32_t var_6c = eax_8[3]
    int32_t var_70 = edx_4
    int32_t* eax_11 = sub_4f5350(data_3165688, edx_4, data_307c530, &var_64)
    int32_t ecx_5 = eax_11[1]
    float var_24 = *eax_11
    int32_t var_20 = ecx_5
    int32_t var_1c = eax_11[2]
    int32_t var_18 = eax_11[3]
    float var_8c[0x5]
    float* eax_13 = sub_4684b0(&var_78, &var_24, &var_8c)
    float var_9c[0x4]
    float* eax_16 = sub_466a10(&var_9c, arg2, arg3, arg4, 1, *eax_13, eax_13[1], eax_13[2], eax_13[3])
    *arg1 = *eax_16
    arg1[1] = eax_16[1]
    int32_t eax_17 = eax_16[3]
    arg1[2] = eax_16[2]
    arg1[3] = eax_17
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

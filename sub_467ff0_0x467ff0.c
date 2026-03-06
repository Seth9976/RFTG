// 函数名称: sub_467ff0
// 虚拟地址: 0x467ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_467ff0(int32_t arg1, int32_t arg2, float* arg3, float* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AAVios_base@2@_WPADI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_cc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4 = 1
    int32_t edi = arg2
    
    if ((data_31657ec & 1) == 0)
        data_31657ec.d |= 1
        int32_t var_8_1 = 0
        eax_4, arg2 = sub_4f5220(data_307c584, "rgn_opponentGoalArea")
        data_31657e8 = eax_4
        int32_t var_8_2 = 0xffffffff
    
    int32_t eax_5
    
    if (edi != 0xffffffff)
        eax_5, arg2 = sub_46b360(edi)
    else
        eax_5 = eax_4 | edi
    
    void var_bc
    int32_t eax_6 = sub_45fb20(eax_5, arg2, eax_5, &var_bc)
    int32_t eax_7 = data_31657e8
    void var_54
    __builtin_memcpy(&var_54, eax_6, 0x40)
    int32_t* eax_8 = sub_4f5350(eax_7, &var_54, data_307c584, &var_54)
    int32_t var_d0_2 = eax_8[3]
    float* eax_11 = sub_466ca0(arg6, arg7, arg5, arg6, arg7, arg3, *eax_8, eax_8[1], eax_8[2])
    *arg4 = *eax_11
    arg4[1] = eax_11[1]
    int32_t eax_12 = eax_11[3]
    arg4[2] = eax_11[2]
    arg4[3] = eax_12
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return arg4
}

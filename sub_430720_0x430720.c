// 函数名称: sub_430720
// 虚拟地址: 0x430720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_430720(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6921ec
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_e8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_3165720 & 1) != 0
    int32_t var_20 = 0
    int32_t var_1c = 0
    
    if (not(cond:0))
        data_3165720.d |= 1
        int32_t var_8_1 = 0
        data_316571c = sub_4f5220(data_307c584, "tbl_opponentIcons")
        int32_t var_8_2 = 0xffffffff
    
    int32_t var_f4 = 0
    void var_d8
    int32_t eax_5
    int80_t result
    result, eax_5 = sub_4f66d0(&var_d8, data_307c584, data_316571c, &var_20, fconvert.s(float.t(1)), 
        nullptr, nullptr)
    void var_68
    __builtin_memcpy(&var_68, eax_5, 0x40)
    
    if ((data_3165720 & 2) == 0)
        data_3165720.d |= 2
        int32_t var_8_3 = 1
        data_3165718 = sub_4f5220(data_307c5cc, "ico_handSize")
        int32_t var_8_4 = 0xffffffff
    
    int32_t* eax_8 = sub_4f5350(data_3165718, &var_68, data_307c5cc, &var_68)
    int32_t edx_4 = eax_8[1]
    float var_28 = *eax_8
    int32_t var_24 = edx_4
    int32_t edx_5 = eax_8[3]
    var_20 = eax_8[2]
    int32_t var_1c_1 = edx_5
    __builtin_memcpy(arg1, sub_430000(&var_28, 1), 0x20)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}

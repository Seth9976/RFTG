// 函数名称: sub_413ac0
// 虚拟地址: 0x413ac0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_413ac0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69145a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_esi
    int32_t var_24 = __security_cookie ^ &__saved_esi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_31654d8 & 1) == 0)
        data_31654d8.d |= 1
        int32_t var_c_1 = 0
        data_31654d4 = sub_4f5220(data_307c550, "tblGamesYours")
        int32_t var_c_2 = 0xffffffff
    
    if ((data_31654d8 & 2) == 0)
        data_31654d8.d |= 2
        int32_t var_c_3 = 1
        data_307c550
        int32_t eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_4fa480(data_31654d4)
        data_31654cc = eax_6
        data_31654d0 = edx_1
        int32_t var_c_4 = 0xffffffff
    
    if ((data_31654d8 & 4) == 0)
        data_31654d8.d |= 4
        int32_t var_c_5 = 2
        data_31654c8 = sub_4f5220(data_307c54c, "btnTrash")
    
    int32_t eax_10 = *(arg1 + 4) * data_31654cc + *arg1
    
    if (arg2 != data_31654c8)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10 + 8
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_10 + 1
}
